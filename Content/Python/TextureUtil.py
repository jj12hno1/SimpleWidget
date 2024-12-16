import unreal
from CommonUtil import *


EditAssetLib = unreal.EditorAssetLibrary()
EditUtilityLib = unreal.EditorUtilityLibrary()
AssetTools = unreal.AssetToolsHelpers.get_asset_tools()

#========================================================================

oodle_sdk_version = "2.9.12"

#-----------------------------------------------------------------------------

Texture2D_Property_UI_Icon = [
    ("mip_gen_settings", unreal.TextureMipGenSettings.TMGS_NO_MIPMAPS),
    ("lod_bias", 0),
    ("lod_group", unreal.TextureGroup.TEXTUREGROUP_UI),
    ("compression_no_alpha", True),
    ("compression_settings", unreal.TextureCompressionSettings.TC_DEFAULT),
    ("oodle_texture_sdk_version", oodle_sdk_version),
    ("srgb", True),
    ("never_stream", True),
]

def _texture2D_normalize_settings(_AssetSettings, bAutoSave):
    _Asset_list = EditUtilityLib.get_selected_assets_of_class(unreal.Texture2D)
    
    for i, _asset in enumerate(_Asset_list):
        _AssetPath = _asset.get_path_name()
        _AssetData = EditAssetLib.find_asset_data(_AssetPath)
        _AssetInstance = unreal.Texture2D.cast(_AssetData.get_asset())

        if not _AssetInstance:
            continue
            
        errStr = "[%4d] Texture2D 规范设置：   %s " % (i, UERefName_Texture2D(_AssetPath), )
        thisLogMsg(errStr)

        _option = _AssetSettings
        for k, v in _option:
            _AssetInstance.set_editor_property(k, v)
            # 纹理原有属性如果与上述一致，调用 set_editor_property 不会导致纹理资产 Dirty，从而触发保持
        
        if bAutoSave:
            bSaved = EditAssetLib.save_loaded_asset(_AssetInstance)
        

#========================================================================

Texture2D_2d_Property_list = [
    Texture2D_Property_UI_Icon,
    Texture2D_Property_UI_Icon,
    Texture2D_Property_UI_Icon,
    Texture2D_Property_UI_Icon,
]

def Texture2D_2d_normalize_settings(i):
    thisLogFunctionBegin('Texture2D_2d_normalize_settings')

    _AssetSettings = Texture2D_2d_Property_list[i]
    _texture2D_normalize_settings(_AssetSettings, True)

    thisLogFunctionEnd('Texture2D_2d_normalize_settings')

#========================================================================

def Texture2D_set_texturegroup(textureGroup):
    ''' 对选中的纹理 资产，设置纹理组 '''
    thisLogFunctionBegin('Texture2D_set_texturegroup')

    _Asset_list = EditUtilityLib.get_selected_assets_of_class(unreal.Texture2D)
    
    for i, _asset in enumerate(_Asset_list):
        _AssetPath = _asset.get_path_name()
        _AssetData = EditAssetLib.find_asset_data(_AssetPath)
        _AssetInstance = unreal.Texture2D.cast(_AssetData.get_asset())
        _AssetInstance.set_editor_property("lod_group", textureGroup)

        errStr = "设置纹理组%s ： %s " % (textureGroup.name, UERefName_Texture2D(_AssetPath))
        thisLogMsg(errStr)

        EditAssetLib.save_loaded_asset(_AssetInstance)
    
    thisLogFunctionEnd('Texture2D_set_texturegroup')

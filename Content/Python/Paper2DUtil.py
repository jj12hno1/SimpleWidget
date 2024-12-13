import unreal
from CommonUtil import *


EditAssetLib = unreal.EditorAssetLibrary()
EditUtilityLib = unreal.EditorUtilityLibrary()
AssetTools = unreal.AssetToolsHelpers.get_asset_tools()

def Flipbook_Generate(flipbookName, framePerSecond):
    ''' 为选中的Sprites 生成Flipbook '''
    thisLogFunctionBegin('Flipbook_Generate')

    _Asset_list = EditUtilityLib.get_selected_assets_of_class(unreal.PaperSprite)

    factory = unreal.new_object(unreal.PaperFlipbookFactory)
    dir = _Asset_list[0].get_path_name()
    dir = dir[:dir.rfind('/')]

    if EditAssetLib.does_asset_exist(dir + '/' + flipbookName):
        flipbookName = flipbookName + '1'

    _Flipbook = AssetTools.create_asset(flipbookName, dir, unreal.Flipbook, factory)
    if _Flipbook == None:
        return
    
    _Flipbook.set_frames_per_second(framePerSecond)

    for _, _asset in enumerate(_Asset_list):
        _AssetPath = _asset.get_path_name()
        _AssetData = EditAssetLib.find_asset_data(_AssetPath)
        _AssetInstance = unreal.PaperSprite.cast(_AssetData.get_asset())
        _Flipbook.add_key_frame(_AssetInstance)

        errStr = "添加关键帧%s ： %s " % (flipbookName, UERefName_PaperSprite(_AssetPath))
        thisLogMsg(errStr)

    EditAssetLib.save_loaded_asset(_Flipbook)
    
    thisLogFunctionEnd('Flipbook_Generate')
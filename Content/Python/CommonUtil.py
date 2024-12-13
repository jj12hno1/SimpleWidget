import unreal


#========================================================================

StrLogPrefix = '****** '

def thisLogMsg(s):
    unreal.log(StrLogPrefix + s)

def thisLogWarning(s):
    unreal.log_warning(StrLogPrefix + s)

def thisLogError(s):
    unreal.log_error(StrLogPrefix + s)


#========================================================================

def thisLogFunctionBegin(s):
    thisLogMsg("")
    thisLogMsg(s + ' ++++++++')

def thisLogFunctionEnd(s):
    thisLogMsg(s + ' --------')
    thisLogMsg("")


#========================================================================


def UERefName_MaterialInstance(s):
    return "/Script/Engine.MaterialInstanceConstant'%s'" % s

def UERefName_StaticMesh(s):
    return "/Script/Engine.StaticMesh'%s'" % s

def UERefName_Texture2D(s):
    return "/Script/Engine.Texture2D'%s'" % s

def UERefName_PaperSprite(s):
    return "/Script/Paper2D.PaperSprite'%s'" % s

#========================================================================

PowerOfTwo_list = [
    1, 2, 4, 8, 16, 32, 64,
    128, 256, 512,
    1024,
    2048,
    4096,
    8192,
    16384,
    32768,
    65536
]

def is_pot(x):
    return x in PowerOfTwo_list


#========================================================================

Vector3f_Zero = unreal.Vector.ZERO
/*
#############################################################################################
# Black Squad (11.01.2019) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GFxUI_structs.h
# ========================================================================================= #
# Credits: uNrEaL, Tamimego, SystemFiles, R00T88, _silencer, the1domo, K@N@VEL, dano20zombie
# Thanks: HOOAH07, lowHertz
# Forums: www.uc-forum.com, www.gamedeception.net
#############################################################################################
*/

#ifdef _MSC_VER
	#pragma pack ( push, 0x4 )
#endif

/*
# ========================================================================================= #
# Script Structs
# ========================================================================================= #
*/

// ScriptStruct GFxUI.GFxMoviePlayer.SoundThemeBinding
// 0x0020
struct FSoundThemeBinding
{
	struct FName                                       ThemeName;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	class UUISoundTheme*                               Theme;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FString                                     ThemeClassName;                                   		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct GFxUI.GFxMoviePlayer.ASValue
// 0x0020
struct FASValue
{
	unsigned char                                      Type;                                             		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      B : 1;                                            		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              N;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                I;                                                		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     S;                                                		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct GFxUI.GFxMoviePlayer.GFxWidgetBinding
// 0x0010
struct FGFxWidgetBinding
{
	struct FName                                       WidgetName;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	class UClass*                                      WidgetClass;                                      		// 0x0008 (0x0008) [0x0000000000000000]              
};

// ScriptStruct GFxUI.GFxMoviePlayer.ExternalTexture
// 0x0018
struct FExternalTexture
{
	struct FString                                     Resource;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	class UTexture*                                    Texture;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct GFxUI.GFxObject.ASDisplayInfo
// 0x002C
struct FASDisplayInfo
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Rotation;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              XRotation;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              YRotation;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              XScale;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	float                                              YScale;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	float                                              ZScale;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              Alpha;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      Visible : 1;                                      		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      hasX : 1;                                         		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      hasY : 1;                                         		// 0x0028 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      hasZ : 1;                                         		// 0x0028 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      hasRotation : 1;                                  		// 0x0028 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      hasXRotation : 1;                                 		// 0x0028 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      hasYRotation : 1;                                 		// 0x0028 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      hasXScale : 1;                                    		// 0x0028 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      hasYScale : 1;                                    		// 0x0028 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      hasZScale : 1;                                    		// 0x0028 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      hasAlpha : 1;                                     		// 0x0028 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      hasVisible : 1;                                   		// 0x0028 (0x0004) [0x0000000000000000] [0x00000800] 
};

// ScriptStruct GFxUI.GFxObject.ASColorTransform
// 0x0020
struct FASColorTransform
{
	struct FLinearColor                                Multiply;                                         		// 0x0000 (0x0010) [0x0000000000000000]              
	struct FLinearColor                                Add;                                              		// 0x0010 (0x0010) [0x0000000000000000]              
};

// ScriptStruct GFxUI.GFxClikWidget.EventData
// 0x0038
struct FEventData
{
	class UGFxObject*                                  _this;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  Target;                                           		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FString                                     Type;                                             		// 0x0010 (0x0010) [0x0000000000000000]              
	int                                                Data;                                             		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                mouseIndex;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                Button;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                Index;                                            		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                lastIndex;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                Id;                                               		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct GFxUI.GFxEngine.GCReference
// 0x0010
struct FGCReference
{
	class UObject*                                     m_object;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                m_count;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                m_statid;                                         		// 0x000C (0x0004) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
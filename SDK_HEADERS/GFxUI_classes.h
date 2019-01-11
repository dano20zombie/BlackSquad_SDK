/*
#############################################################################################
# Black Squad (11.01.2019) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: GFxUI_classes.h
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
# Constants
# ========================================================================================= #
*/


/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum GFxUI.SwfMovie.FlashTextureRescale
/*enum FlashTextureRescale
{
	FlashTextureScale_High                             = 0,
	FlashTextureScale_Low                              = 1,
	FlashTextureScale_NextLow                          = 2,
	FlashTextureScale_Mult4                            = 3,
	FlashTextureScale_None                             = 4,
	FlashTextureScale_MAX                              = 5
};*/

// Enum GFxUI.GFxMoviePlayer.ASType
/*enum ASType
{
	AS_Undefined                                       = 0,
	AS_Null                                            = 1,
	AS_Number                                          = 2,
	AS_Int                                             = 3,
	AS_String                                          = 4,
	AS_Boolean                                         = 5,
	AS_MAX                                             = 6
};*/

// Enum GFxUI.GFxMoviePlayer.GFxAlign
/*enum GFxAlign
{
	Align_Center                                       = 0,
	Align_TopCenter                                    = 1,
	Align_BottomCenter                                 = 2,
	Align_CenterLeft                                   = 3,
	Align_CenterRight                                  = 4,
	Align_TopLeft                                      = 5,
	Align_TopRight                                     = 6,
	Align_BottomLeft                                   = 7,
	Align_BottomRight                                  = 8,
	Align_MAX                                          = 9
};*/

// Enum GFxUI.GFxMoviePlayer.GFxScaleMode
/*enum GFxScaleMode
{
	SM_NoScale                                         = 0,
	SM_ShowAll                                         = 1,
	SM_ExactFit                                        = 2,
	SM_NoBorder                                        = 3,
	SM_MAX                                             = 4
};*/

// Enum GFxUI.GFxMoviePlayer.GFxTimingMode
/*enum GFxTimingMode
{
	TM_Game                                            = 0,
	TM_Real                                            = 1,
	TM_MAX                                             = 2
};*/

// Enum GFxUI.GFxMoviePlayer.GFxRenderTextureMode
/*enum GFxRenderTextureMode
{
	RTM_Opaque                                         = 0,
	RTM_Alpha                                          = 1,
	RTM_AlphaComposite                                 = 2,
	RTM_MAX                                            = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class GFxUI.GFxEngine
// 0x0014 (0x0074 - 0x0060)
class UGFxEngine : public UObject
{
public:
	TArray< struct FGCReference >                      GCReferences;                                     		// 0x0060 (0x0010) [0x0000000000000000]              
	int                                                RefCount;                                         		// 0x0070 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1469 ];

		return pClassPointer;
	};

};

UClass* UGFxEngine::pClassPointer = NULL;

// Class GFxUI.GFxFSCmdHandler
// 0x0000 (0x0060 - 0x0060)
class UGFxFSCmdHandler : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1470 ];

		return pClassPointer;
	};

	void eventFSCommand ( );
};

UClass* UGFxFSCmdHandler::pClassPointer = NULL;

// Class GFxUI.GFxInteraction
// 0x000C (0x00BC - 0x00B0)
class UGFxInteraction : public UInteraction
{
public:
	struct FPointer                                    VfTable_FCallbackEventDevice;                     		// 0x00B0 (0x0008) [0x0000000000000000]              
	unsigned long                                      bFakeMobileTouches : 1;                           		// 0x00B8 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1471 ];

		return pClassPointer;
	};

	void CloseAllMoviePlayers ( );
	void NotifySplitscreenLayoutChanged ( );
	void NotifyPlayerRemoved ( );
	void NotifyPlayerAdded ( );
	void NotifyGameSessionEnded ( );
	void GetFocusMovie ( );
};

UClass* UGFxInteraction::pClassPointer = NULL;

// Class GFxUI.GFxMoviePlayer
// 0x0184 (0x01E4 - 0x0060)
class UGFxMoviePlayer : public UObject
{
public:
	struct FPointer                                    pMovie;                                           		// 0x0060 (0x0008) [0x0000000000000000]              
	struct FPointer                                    pCaptureKeys;                                     		// 0x0068 (0x0008) [0x0000000000000000]              
	struct FPointer                                    pFocusIgnoreKeys;                                 		// 0x0070 (0x0008) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0078 (0x0048) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.ASUClasses
	unsigned char                                      UnknownData01[ 0x48 ];                            		// 0x00C0 (0x0048) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.ASUObjects
	int                                                NextASUObject;                                    		// 0x0108 (0x0004) [0x0000000000000000]              
	class USwfMovie*                                   MovieInfo;                                        		// 0x010C (0x0008) [0x0000000000000000]              
	unsigned long                                      bMovieIsOpen : 1;                                 		// 0x0114 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisplayWithHudOff : 1;                           		// 0x0114 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bEnableGammaCorrection : 1;                       		// 0x0114 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bWidgetsInitializedThisFrame : 1;                 		// 0x0114 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bLogUnhandedWidgetInitializations : 1;            		// 0x0114 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bAllowInput : 1;                                  		// 0x0114 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bAllowFocus : 1;                                  		// 0x0114 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bAutoPlay : 1;                                    		// 0x0114 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bPauseGameWhileActive : 1;                        		// 0x0114 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bDisableWorldRendering : 1;                       		// 0x0114 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bCloseOnLevelChange : 1;                          		// 0x0114 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bOnlyOwnerFocusable : 1;                          		// 0x0114 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bForceFullViewport : 1;                           		// 0x0114 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bDiscardNonOwnerInput : 1;                        		// 0x0114 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bCaptureInput : 1;                                		// 0x0114 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bCaptureMouseInput : 1;                           		// 0x0114 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bIgnoreMouseInput : 1;                            		// 0x0114 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bIsSplitscreenLayoutModified : 1;                 		// 0x0114 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      bShowHardwareMouseCursor : 1;                     		// 0x0114 (0x0004) [0x0000000000000000] [0x00040000] 
	unsigned long                                      bBlurLesserMovies : 1;                            		// 0x0114 (0x0004) [0x0000000000000000] [0x00080000] 
	unsigned long                                      bHideLesserMovies : 1;                            		// 0x0114 (0x0004) [0x0000000000000000] [0x00100000] 
	unsigned long                                      bIsPriorityBlurred : 1;                           		// 0x0114 (0x0004) [0x0000000000000000] [0x00200000] 
	unsigned long                                      bIsPriorityHidden : 1;                            		// 0x0114 (0x0004) [0x0000000000000000] [0x00400000] 
	unsigned long                                      bIgnoreVisibilityEffect : 1;                      		// 0x0114 (0x0004) [0x0000000000000000] [0x00800000] 
	unsigned long                                      bIgnoreBlurEffect : 1;                            		// 0x0114 (0x0004) [0x0000000000000000] [0x01000000] 
	class UTextureRenderTarget2D*                      RenderTexture;                                    		// 0x0118 (0x0008) [0x0000000000000000]              
	int                                                LocalPlayerOwnerIndex;                            		// 0x0120 (0x0004) [0x0000000000000000]              
	class UObject*                                     ExternalInterface;                                		// 0x0124 (0x0008) [0x0000000000000000]              
	TArray< struct FName >                             CaptureKeys;                                      		// 0x012C (0x0010) [0x0000000000000000]              
	TArray< struct FName >                             FocusIgnoreKeys;                                  		// 0x013C (0x0010) [0x0000000000000000]              
	TArray< struct FExternalTexture >                  ExternalTextures;                                 		// 0x014C (0x0010) [0x0000000000000000]              
	TArray< struct FSoundThemeBinding >                SoundThemes;                                      		// 0x015C (0x0010) [0x0000000000000000]              
	unsigned char                                      TimingMode;                                       		// 0x016C (0x0001) [0x0000000000000000]              
	unsigned char                                      RenderTextureMode;                                		// 0x016D (0x0001) [0x0000000000000000]              
	unsigned char                                      Priority;                                         		// 0x016E (0x0001) [0x0000000000000000]              
	TArray< struct FGFxWidgetBinding >                 WidgetBindings;                                   		// 0x0170 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData02[ 0x48 ];                            		// 0x0180 (0x0048) UNKNOWN PROPERTY: MapProperty GFxUI.GFxMoviePlayer.WidgetPathBindings
	class UGFxObject*                                  SplitscreenLayoutObject;                          		// 0x01C8 (0x0008) [0x0000000000000000]              
	int                                                SplitscreenLayoutYAdjust;                         		// 0x01D0 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __OnPostAdvance__Delegate;                        		// 0x01D4 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x01D8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1472 ];

		return pClassPointer;
	};

	void UpdateSplitscreenLayout ( );
	void ApplyPriorityVisibilityEffect ( );
	void ApplyPriorityBlurEffect ( );
	void eventApplyPriorityEffect ( );
	void PlaySoundFromTheme ( );
	void eventOnFocusLost ( );
	void eventOnFocusGained ( );
	void ConsoleCommand ( );
	void eventGetPC ( );
	void eventGetLP ( );
	void Init ( );
	void SetWidgetPathBinding ( );
	void eventPostWidgetInit ( );
	void eventWidgetUnloaded ( );
	void eventWidgetInitialized ( );
	void ActionScriptConstructor ( );
	void ActionScriptObject ( );
	void ActionScriptString ( );
	void ActionScriptFloat ( );
	void ActionScriptInt ( );
	void ActionScriptVoid ( );
	void Invoke ( );
	void ActionScriptSetFunction ( );
	void CreateArray ( );
	void CreateObject ( );
	void SetVariableStringArray ( );
	void SetVariableFloatArray ( );
	void SetVariableIntArray ( );
	void SetVariableArray ( );
	void GetVariableStringArray ( );
	void GetVariableFloatArray ( );
	void GetVariableIntArray ( );
	void GetVariableArray ( );
	void SetVariableObject ( );
	void SetVariableString ( );
	void SetVariableInt ( );
	void SetVariableNumber ( );
	void SetVariableBool ( );
	void SetVariable ( );
	void GetVariableObject ( );
	void GetVariableString ( );
	void GetVariableInt ( );
	void GetVariableNumber ( );
	void GetVariableBool ( );
	void GetVariable ( );
	void GetAVMVersion ( );
	void eventFilterButtonInput ( );
	void FlushPlayerInput ( );
	void ClearFocusIgnoreKeys ( );
	void AddFocusIgnoreKey ( );
	void ClearCaptureKeys ( );
	void AddCaptureKey ( );
	void SetMovieCanReceiveInput ( );
	void SetMovieCanReceiveFocus ( );
	void SetPerspective3D ( );
	void SetView3D ( );
	void GetVisibleFrameRect ( );
	void SetAlignment ( );
	void SetViewScaleMode ( );
	void SetViewport ( );
	void GetGameViewportClient ( );
	void SetPriority ( );
	void SetExternalTexture ( );
	void SetExternalInterface ( );
	void SetTimingMode ( );
	void SetMovieInfo ( );
	void eventConditionalClearPause ( );
	void eventOnCleanup ( );
	void eventOnClose ( );
	void Close ( );
	void SetPause ( );
	void OnPostAdvance ( );
	void PostAdvance ( );
	void Advance ( );
	void eventStart ( );
};

UClass* UGFxMoviePlayer::pClassPointer = NULL;

// Class GFxUI.GFxObject
// 0x0040 (0x00A0 - 0x0060)
class UGFxObject : public UObject
{
public:
	int                                                Value[ 0xC ];                                     		// 0x0060 (0x0030) [0x0000000000000000]              
	TArray< struct FGFxWidgetBinding >                 SubWidgetBindings;                                		// 0x0090 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1473 ];

		return pClassPointer;
	};

	void eventWidgetUnloaded ( );
	void eventWidgetInitialized ( );
	void AttachMovie ( );
	void CreateEmptyMovieClip ( );
	void GotoAndStopI ( );
	void GotoAndStop ( );
	void GotoAndPlayI ( );
	void GotoAndPlay ( );
	void ActionScriptArray ( );
	void ActionScriptObject ( );
	void ActionScriptString ( );
	void ActionScriptFloat ( );
	void ActionScriptInt ( );
	void ActionScriptVoid ( );
	void Invoke ( );
	void ActionScriptSetFunctionOn ( );
	void ActionScriptSetFunction ( );
	void SetElementMemberString ( );
	void SetElementMemberInt ( );
	void SetElementMemberFloat ( );
	void SetElementMemberBool ( );
	void SetElementMemberObject ( );
	void SetElementMember ( );
	void GetElementMemberString ( );
	void GetElementMemberInt ( );
	void GetElementMemberFloat ( );
	void GetElementMemberBool ( );
	void GetElementMemberObject ( );
	void GetElementMember ( );
	void SetElementColorTransform ( );
	void SetElementPosition ( );
	void SetElementVisible ( );
	void SetElementDisplayMatrix ( );
	void SetElementDisplayInfo ( );
	void GetElementDisplayMatrix ( );
	void GetElementDisplayInfo ( );
	void SetElementString ( );
	void SetElementInt ( );
	void SetElementFloat ( );
	void SetElementBool ( );
	void SetElementObject ( );
	void SetElement ( );
	void GetElementString ( );
	void GetElementInt ( );
	void GetElementFloat ( );
	void GetElementBool ( );
	void GetElementObject ( );
	void GetElement ( );
	void SetText ( );
	void GetText ( );
	void SetVisible ( );
	void SetDisplayMatrix3D ( );
	void SetDisplayMatrix ( );
	void SetColorTransform ( );
	void SetPosition ( );
	void SetDisplayInfo ( );
	void GetDisplayMatrix3D ( );
	void GetDisplayMatrix ( );
	void GetColorTransform ( );
	void GetPosition ( );
	void GetDisplayInfo ( );
	void TranslateString ( );
	void SetFunction ( );
	void SetObject ( );
	void SetString ( );
	void SetInt ( );
	void SetFloat ( );
	void SetBool ( );
	void Set ( );
	void GetObject ( );
	void GetString ( );
	void GetInt ( );
	void GetFloat ( );
	void GetBool ( );
	void Get ( );
};

UClass* UGFxObject::pClassPointer = NULL;

// Class GFxUI.GFxRawData
// 0x0040 (0x00A0 - 0x0060)
class UGFxRawData : public UObject
{
public:
	TArray< unsigned char >                            RawData;                                          		// 0x0060 (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           ReferencedSwfs;                                   		// 0x0070 (0x0010) [0x0000000000000000]              
	TArray< class UObject* >                           References;                                       		// 0x0080 (0x0010) [0x0000000000000000]              
	TArray< class UObject* >                           UserReferences;                                   		// 0x0090 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1474 ];

		return pClassPointer;
	};

};

UClass* UGFxRawData::pClassPointer = NULL;

// Class GFxUI.SwfMovie
// 0x0024 (0x00C4 - 0x00A0)
class USwfMovie : public UGFxRawData
{
public:
	unsigned long                                      bUsesFontlib : 1;                                 		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSetSRGBOnImportedTextures : 1;                   		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bPackTextures : 1;                                		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bForceSquarePacking : 1;                          		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                PackTextureSize;                                  		// 0x00A4 (0x0004) [0x0000000000000000]              
	unsigned char                                      TextureRescale;                                   		// 0x00A8 (0x0001) [0x0000000000000000]              
	struct FString                                     TextureFormat;                                    		// 0x00AC (0x0010) [0x0000000000000000]              
	int                                                RTTextures;                                       		// 0x00BC (0x0004) [0x0000000000000000]              
	int                                                RTVideoTextures;                                  		// 0x00C0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1475 ];

		return pClassPointer;
	};

};

UClass* USwfMovie::pClassPointer = NULL;

// Class GFxUI.FlashMovie
// 0x0000 (0x00C4 - 0x00C4)
class UFlashMovie : public USwfMovie
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1476 ];

		return pClassPointer;
	};

};

UClass* UFlashMovie::pClassPointer = NULL;

// Class GFxUI.GFxAction_CloseMovie
// 0x000C (0x0114 - 0x0108)
class UGFxAction_CloseMovie : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                            		// 0x0108 (0x0008) [0x0000000000000000]              
	unsigned long                                      bUnload : 1;                                      		// 0x0110 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1477 ];

		return pClassPointer;
	};

	void eventIsValidLevelSequenceObject ( );
};

UClass* UGFxAction_CloseMovie::pClassPointer = NULL;

// Class GFxUI.GFxAction_GetVariable
// 0x0018 (0x0120 - 0x0108)
class UGFxAction_GetVariable : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                            		// 0x0108 (0x0008) [0x0000000000000000]              
	struct FString                                     Variable;                                         		// 0x0110 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1478 ];

		return pClassPointer;
	};

	void eventIsValidLevelSequenceObject ( );
};

UClass* UGFxAction_GetVariable::pClassPointer = NULL;

// Class GFxUI.GFxAction_Invoke
// 0x0028 (0x0130 - 0x0108)
class UGFxAction_Invoke : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                            		// 0x0108 (0x0008) [0x0000000000000000]              
	struct FString                                     MethodName;                                       		// 0x0110 (0x0010) [0x0000000000000000]              
	TArray< struct FASValue >                          Arguments;                                        		// 0x0120 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1479 ];

		return pClassPointer;
	};

	void eventIsValidLevelSequenceObject ( );
};

UClass* UGFxAction_Invoke::pClassPointer = NULL;

// Class GFxUI.GFxAction_OpenMovie
// 0x0048 (0x0150 - 0x0108)
class UGFxAction_OpenMovie : public USequenceAction
{
public:
	class USwfMovie*                                   Movie;                                            		// 0x0108 (0x0008) [0x0000000000000000]              
	class UClass*                                      MoviePlayerClass;                                 		// 0x0110 (0x0008) [0x0000000000000000]              
	class UGFxMoviePlayer*                             MoviePlayer;                                      		// 0x0118 (0x0008) [0x0000000000000000]              
	unsigned long                                      bTakeFocus : 1;                                   		// 0x0120 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bCaptureInput : 1;                                		// 0x0120 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bStartPaused : 1;                                 		// 0x0120 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bEnableGammaCorrection : 1;                       		// 0x0120 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bDisplayWithHudOff : 1;                           		// 0x0120 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned char                                      RenderTextureMode;                                		// 0x0124 (0x0001) [0x0000000000000000]              
	class UTextureRenderTarget2D*                      RenderTexture;                                    		// 0x0128 (0x0008) [0x0000000000000000]              
	TArray< struct FName >                             CaptureKeys;                                      		// 0x0130 (0x0010) [0x0000000000000000]              
	TArray< struct FName >                             FocusIgnoreKeys;                                  		// 0x0140 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1480 ];

		return pClassPointer;
	};

	void eventIsValidLevelSequenceObject ( );
};

UClass* UGFxAction_OpenMovie::pClassPointer = NULL;

// Class GFxUI.GFxAction_SetCaptureKeys
// 0x0018 (0x0120 - 0x0108)
class UGFxAction_SetCaptureKeys : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                            		// 0x0108 (0x0008) [0x0000000000000000]              
	TArray< struct FName >                             CaptureKeys;                                      		// 0x0110 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1481 ];

		return pClassPointer;
	};

};

UClass* UGFxAction_SetCaptureKeys::pClassPointer = NULL;

// Class GFxUI.GFxAction_SetVariable
// 0x0018 (0x0120 - 0x0108)
class UGFxAction_SetVariable : public USequenceAction
{
public:
	class UGFxMoviePlayer*                             Movie;                                            		// 0x0108 (0x0008) [0x0000000000000000]              
	struct FString                                     Variable;                                         		// 0x0110 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1482 ];

		return pClassPointer;
	};

	void eventIsValidLevelSequenceObject ( );
};

UClass* UGFxAction_SetVariable::pClassPointer = NULL;

// Class GFxUI.GFxEvent_FSCommand
// 0x0020 (0x0148 - 0x0128)
class UGFxEvent_FSCommand : public USequenceEvent
{
public:
	class USwfMovie*                                   Movie;                                            		// 0x0128 (0x0008) [0x0000000000000000]              
	struct FString                                     FSCommand;                                        		// 0x0130 (0x0010) [0x0000000000000000]              
	class UGFxFSCmdHandler_Kismet*                     Handler;                                          		// 0x0140 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1483 ];

		return pClassPointer;
	};

};

UClass* UGFxEvent_FSCommand::pClassPointer = NULL;

// Class GFxUI.GFxFSCmdHandler_Kismet
// 0x0000 (0x0060 - 0x0060)
class UGFxFSCmdHandler_Kismet : public UGFxFSCmdHandler
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1484 ];

		return pClassPointer;
	};

	void eventFSCommand ( );
};

UClass* UGFxFSCmdHandler_Kismet::pClassPointer = NULL;

// Class GFxUI.GFxClikWidget
// 0x0010 (0x00B0 - 0x00A0)
class UGFxClikWidget : public UGFxObject
{
public:
	struct FScriptDelegate                             __EventListener__Delegate;                        		// 0x00A0 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00A4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 33426 ];

		return pClassPointer;
	};

	void ASRemoveAllEventListeners ( );
	void AS3AddEventListener ( );
	void ASAddEventListener ( );
	void SetListener ( );
	void GetEventStringFromTypename ( );
	void RemoveAllEventListeners ( );
	void AddEventListener ( );
	void EventListener ( );
};

UClass* UGFxClikWidget::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
/*
#############################################################################################
# Black Squad (01.02.2019) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Core_classes.h
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

#define CONST_RESULT_FALSE                                       0
#define CONST_RESULT_TRUE                                        1
#define CONST_RESULT_INVALID                                     -1
#define CONST_InvPi                                              0.31830988618f
#define CONST_KINDA_SMALL_NUMBER                                 0.0001
#define CONST_InvAspectRatio16x9                                 0.56249
#define CONST_InvAspectRatio5x4                                  0.8
#define CONST_InvAspectRatio4x3                                  0.75
#define CONST_AspectRatio16x9                                    1.77778
#define CONST_AspectRatio5x4                                     1.25
#define CONST_AspectRatio4x3                                     1.33333
#define CONST_INDEX_NONE                                         -1
#define CONST_UnrRotToDeg                                        0.00549316540360483
#define CONST_DegToUnrRot                                        182.0444
#define CONST_RadToUnrRot                                        10430.3783504704527
#define CONST_UnrRotToRad                                        0.00009587379924285
#define CONST_DegToRad                                           0.017453292519943296
#define CONST_RadToDeg                                           57.295779513082321600
#define CONST_Pi                                                 3.1415926535897932
#define CONST_HALF_WORLD_MAX                                     262144.0
#define CONST_WORLD_MAX                                          524288.0
#define CONST_MaxWord                                            0xffff
#define CONST_MaxInt                                             0x7fffffff

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum Core.Object.EDebugBreakType
/*enum EDebugBreakType
{
	DEBUGGER_NativeOnly                                = 0,
	DEBUGGER_ScriptOnly                                = 1,
	DEBUGGER_Both                                      = 2,
	DEBUGGER_MAX                                       = 3
};*/

// Enum Core.Object.EAutomatedRunResult
/*enum EAutomatedRunResult
{
	ARR_Unknown                                        = 0,
	ARR_OOM                                            = 1,
	ARR_Passed                                         = 2,
	ARR_MAX                                            = 3
};*/

// Enum Core.Object.EAspectRatioAxisConstraint
/*enum EAspectRatioAxisConstraint
{
	AspectRatio_MaintainYFOV                           = 0,
	AspectRatio_MaintainXFOV                           = 1,
	AspectRatio_MajorAxisFOV                           = 2,
	AspectRatio_Default                                = 3,
	AspectRatio_MAX                                    = 4
};*/

// Enum Core.Object.EInterpCurveMode
/*enum EInterpCurveMode
{
	CIM_Linear                                         = 0,
	CIM_CurveAuto                                      = 1,
	CIM_Constant                                       = 2,
	CIM_CurveUser                                      = 3,
	CIM_CurveBreak                                     = 4,
	CIM_CurveAutoClamped                               = 5,
	CIM_MAX                                            = 6
};*/

// Enum Core.Object.EInterpMethodType
/*enum EInterpMethodType
{
	IMT_UseFixedTangentEvalAndNewAutoTangents          = 0,
	IMT_UseFixedTangentEval                            = 1,
	IMT_UseBrokenTangentEval                           = 2,
	IMT_MAX                                            = 3
};*/

// Enum Core.Object.EAxis
/*enum EAxis
{
	AXIS_NONE                                          = 0,
	AXIS_X                                             = 1,
	AXIS_Y                                             = 2,
	AXIS_BLANK                                         = 3,
	AXIS_Z                                             = 4,
	AXIS_MAX                                           = 5
};*/

// Enum Core.Object.ETickingGroup
/*enum ETickingGroup
{
	TG_PreAsyncWork                                    = 0,
	TG_DuringAsyncWork                                 = 1,
	TG_PostAsyncWork                                   = 2,
	TG_PostUpdateWork                                  = 3,
	TG_EffectsUpdateWork                               = 4,
	TG_MAX                                             = 5
};*/

// Enum Core.Object.EInputEvent
/*enum EInputEvent
{
	IE_Pressed                                         = 0,
	IE_Released                                        = 1,
	IE_Repeat                                          = 2,
	IE_DoubleClick                                     = 3,
	IE_Axis                                            = 4,
	IE_MAX                                             = 5
};*/

// Enum Core.Object.AlphaBlendType
/*enum AlphaBlendType
{
	ABT_Linear                                         = 0,
	ABT_Cubic                                          = 1,
	ABT_Sinusoidal                                     = 2,
	ABT_EaseInOutExponent2                             = 3,
	ABT_EaseInOutExponent3                             = 4,
	ABT_EaseInOutExponent4                             = 5,
	ABT_EaseInOutExponent5                             = 6,
	ABT_EaseInOutExponentThreeFourths                  = 7,
	ABT_EaseInOutExponentHalf                          = 8,
	ABT_EaseInOutExponentQuater                        = 9,
	ABT_MAX                                            = 10
};*/

// Enum Core.DistributionVector.EDistributionVectorLockFlags
/*enum EDistributionVectorLockFlags
{
	EDVLF_None                                         = 0,
	EDVLF_XY                                           = 1,
	EDVLF_XZ                                           = 2,
	EDVLF_YZ                                           = 3,
	EDVLF_XYZ                                          = 4,
	EDVLF_MAX                                          = 5
};*/

// Enum Core.DistributionVector.EDistributionVectorMirrorFlags
/*enum EDistributionVectorMirrorFlags
{
	EDVMF_Same                                         = 0,
	EDVMF_Different                                    = 1,
	EDVMF_Mirror                                       = 2,
	EDVMF_MAX                                          = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class Core.Object
// 0x0060
class UObject
{
public:
//	struct FPointer                                    VfTableObject;                                    		// 0x0000 (0x0008) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	struct FPointer                                    HashNext;                                         		// 0x0008 (0x0008) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FQWord                                      ObjectFlags;                                      		// 0x0010 (0x0008) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FPointer                                    HashOuterNext;                                    		// 0x0018 (0x0008) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FPointer                                    StateFrame;                                       		// 0x0020 (0x0008) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	class UObject*                                     Linker;                                           		// 0x0028 (0x0008) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	struct FPointer                                    LinkerIndex;                                      		// 0x0030 (0x0008) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	int                                                ObjectInternalInteger;                            		// 0x0038 (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	int                                                NetIndex;                                         		// 0x003C (0x0004) [0x0000000000821002]              ( CPF_Const | CPF_Native | CPF_EditConst | CPF_NoExport )
	class UObject*                                     Outer;                                            		// 0x0040 (0x0008) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	struct FName                                       Name;                                             		// 0x0048 (0x0008) [0x0000000000021003]              ( CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst )
	class UClass*                                      Class;                                            		// 0x0050 (0x0008) [0x0000000000021002]              ( CPF_Const | CPF_Native | CPF_EditConst )
	class UObject*                                     ObjectArchetype;                                  		// 0x0058 (0x0008) [0x0000000000021003]              ( CPF_Edit | CPF_Const | CPF_Native | CPF_EditConst )

private:
	static UClass* pClassPointer;

public:
	static TArray< UObject* >* GObjObjects(); 

	char* GetName(); 
	char* GetNameCPP(); 
	char* GetFullName(); 

	template< class T > static T* FindObject ( char* ObjectFullName ); 
	static UClass* FindClass ( char* ClassFullName ); 

	bool IsA ( UClass* pClass ); 

	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1 ];

		return pClassPointer;
	};

	struct FString LocalizeCombinationText ( struct FString Text, struct FString Replace, struct FString With, struct FString Replace01, struct FString With01, struct FString Replace02, struct FString With02, struct FString Replace03, struct FString With03, struct FString Replace04, struct FString With04, struct FString Replace05, struct FString With05, struct FString Replace06, struct FString With06, struct FString Replace07, struct FString With07 );
	void LoadCachedResources ( class UObject* TargetObject, TArray< class UObject* >* CachedResourceList );
	void eventGetCachedResources ( unsigned long bIsDedicatedServer, TArray< class UObject* >* ResourceList );
	int GetMergedRotation ( struct FRotator* InRotator );
	float GetDeltaTimeFromCycles ( struct Fdword PrevCycleTime );
	struct Fdword GetCycles ( );
	struct FString DWORDToString ( struct Fdword Value );
	bool StringToDWORD ( struct FString Value, struct Fdword* out_value );
	struct FString GetStringFromGuid ( struct FGuid* InGuid );
	struct FGuid GetGuidFromString ( struct FString* InGuidString );
	struct FGuid CreateGuid ( );
	bool IsGuidValid ( struct FGuid* InGuid );
	void InvalidateGuid ( struct FGuid* InGuid );
	struct FString GetLanguage ( );
	int GetRandomOptionSumFrequency ( TArray< float >* FreqList );
	int GetBuildChangelistNumber ( );
	int GetEngineVersion ( );
	void GetSystemTime ( int* Year, int* Month, int* DayOfWeek, int* Day, int* Hour, int* Min, int* Sec, int* MSec );
	struct FString TimeStamp ( );
	struct FVector TransformVectorByRotation ( struct FRotator SourceRotation, struct FVector SourceVector, unsigned long bInverse );
	struct FName GetPackageName ( );
	bool IsPendingKill ( );
	float ByteToFloat ( unsigned char inputByte, unsigned long bSigned );
	unsigned char FloatToByte ( float inputFloat, unsigned long bSigned );
	float UnwindHeading ( float A );
	float FindDeltaAngle ( float A1, float A2 );
	float GetHeadingAngle ( struct FVector Dir );
	void GetAngularDegreesFromRadians ( struct FVector2D* OutFOV );
	void GetAngularFromDotDist ( struct FVector2D DotDist, struct FVector2D* OutAngDist );
	bool GetAngularDistance ( struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D* OutAngularDist );
	bool GetDotDistance ( struct FVector Direction, struct FVector AxisX, struct FVector AxisY, struct FVector AxisZ, struct FVector2D* OutDotDist );
	struct FVector PointProjectToPlane ( struct FVector Point, struct FVector A, struct FVector B, struct FVector C );
	float PointDistToPlane ( struct FVector Point, struct FRotator Orientation, struct FVector Origin, struct FVector* out_ClosestPoint );
	float PointDistToSegment ( struct FVector Point, struct FVector StartPoint, struct FVector EndPoint, struct FVector* OutClosestPoint );
	float PointDistToLine ( struct FVector Point, struct FVector Line, struct FVector Origin, struct FVector* OutClosestPoint );
	bool GetPerObjectConfigSections ( class UClass* SearchClass, class UObject* ObjectOuter, int MaxResults, TArray< struct FString >* out_SectionNames );
	void ImportJSON ( struct FString PropertyName, struct FString* JSON );
	void StaticSaveConfig ( );
	void SaveConfig ( );
	class UObject* FindObject ( struct FString ObjectName, class UClass* ObjectClass );
	class UObject* DynamicLoadObject ( struct FString ObjectName, class UClass* ObjectClass, unsigned long MayFail, unsigned long bFlushObjLoading );
	int FindEnumIndex ( class UObject* E, struct FName InName );
	struct FName GetEnum ( class UObject* E, int I );
	void Disable ( struct FName ProbeFunc );
	void Enable ( struct FName ProbeFunc );
	void eventContinuedState ( );
	void eventPausedState ( );
	void eventPoppedState ( );
	void eventPushedState ( );
	void eventEndState ( struct FName NextStateName );
	void eventBeginState ( struct FName PreviousStateName );
	void DumpStateStack ( );
	void PopState ( unsigned long bPopAll );
	void PushState ( struct FName NewState, struct FName NewLabel );
	struct FName GetStateName ( );
	bool IsChildState ( struct FName TestState, struct FName TestParentState );
	bool IsInState ( struct FName TestState, unsigned long bTestStateStack );
	void GotoState ( struct FName NewState, struct FName Label, unsigned long bForceEvents, unsigned long bKeepStack );
	bool IsUTracing ( );
	void SetUTracing ( unsigned long bShouldUTrace );
	struct FName GetFuncName ( );
	void DebugBreak ( int UserFlags, unsigned char DebuggerType );
	struct FString GetScriptTrace ( );
	void ScriptTrace ( );
	struct FString ParseLocalizedPropertyPath ( struct FString PathName );
	struct FString Localize ( struct FString SectionName, struct FString KeyName, struct FString PackageName );
	void WarnInternal ( struct FString S );
	void LogInternal ( struct FString S, struct FName Tag );
	struct FLinearColor Subtract_LinearColorLinearColor ( struct FLinearColor A, struct FLinearColor B );
	struct FLinearColor Multiply_LinearColorFloat ( struct FLinearColor LC, float Mult );
	struct FLinearColor ColorToLinearColor ( struct FColor OldColor );
	struct FLinearColor MakeLinearColor ( float R, float G, float B, float A );
	struct FColor LerpColor ( struct FColor A, struct FColor B, float Alpha );
	struct FColor MakeColor ( unsigned char R, unsigned char G, unsigned char B, unsigned char A );
	struct FColor Add_ColorColor ( struct FColor A, struct FColor B );
	struct FColor Multiply_ColorFloat ( struct FColor A, float B );
	struct FColor Multiply_FloatColor ( float A, struct FColor B );
	struct FColor Subtract_ColorColor ( struct FColor A, struct FColor B );
	struct FVector2D EvalInterpCurveVector2D ( float InVal, struct FInterpCurveVector2D* Vector2DCurve );
	struct FVector EvalInterpCurveVector ( float InVal, struct FInterpCurveVector* VectorCurve );
	float EvalInterpCurveFloat ( float InVal, struct FInterpCurveFloat* FloatCurve );
	struct FVector2D vect2d ( float InX, float InY );
	float GetMappedRangeValue ( struct FVector2D InputRange, struct FVector2D OutputRange, float Value );
	float GetRangePctByValue ( struct FVector2D Range, float Value );
	float GetRangeValueByPct ( struct FVector2D Range, float Pct );
	struct FVector2D SubtractEqual_Vector2DVector2D ( struct FVector2D B, struct FVector2D* A );
	struct FVector2D AddEqual_Vector2DVector2D ( struct FVector2D B, struct FVector2D* A );
	struct FVector2D DivideEqual_Vector2DFloat ( float B, struct FVector2D* A );
	struct FVector2D MultiplyEqual_Vector2DFloat ( float B, struct FVector2D* A );
	struct FVector2D Divide_Vector2DFloat ( struct FVector2D A, float B );
	struct FVector2D Multiply_Vector2DFloat ( struct FVector2D A, float B );
	struct FVector2D Subtract_Vector2DVector2D ( struct FVector2D A, struct FVector2D B );
	struct FVector2D Add_Vector2DVector2D ( struct FVector2D A, struct FVector2D B );
	struct FQuat Subtract_QuatQuat ( struct FQuat A, struct FQuat B );
	struct FQuat Add_QuatQuat ( struct FQuat A, struct FQuat B );
	struct FQuat QuatSlerp ( struct FQuat A, struct FQuat B, float Alpha, unsigned long bShortestPath );
	struct FRotator QuatToRotator ( struct FQuat A );
	struct FQuat QuatFromRotator ( struct FRotator A );
	struct FQuat QuatFromAxisAndAngle ( struct FVector Axis, float Angle );
	struct FQuat QuatFindBetween ( struct FVector A, struct FVector B );
	struct FVector QuatRotateVector ( struct FQuat A, struct FVector B );
	struct FQuat QuatInvert ( struct FQuat A );
	float QuatDot ( struct FQuat A, struct FQuat B );
	struct FQuat QuatProduct ( struct FQuat A, struct FQuat B );
	struct FVector MatrixGetAxis ( struct FMatrix TM, unsigned char Axis );
	struct FVector MatrixGetOrigin ( struct FMatrix TM );
	struct FRotator MatrixGetRotator ( struct FMatrix TM );
	struct FMatrix MakeRotationMatrix ( struct FRotator Rotation );
	struct FMatrix MakeRotationTranslationMatrix ( struct FVector Translation, struct FRotator Rotation );
	struct FVector InverseTransformNormal ( struct FMatrix TM, struct FVector A );
	struct FVector TransformNormal ( struct FMatrix TM, struct FVector A );
	struct FVector InverseTransformVector ( struct FMatrix TM, struct FVector A );
	struct FVector TransformVector ( struct FMatrix TM, struct FVector A );
	struct FMatrix Multiply_MatrixMatrix ( struct FMatrix A, struct FMatrix B );
	bool NotEqual_NameName ( struct FName A, struct FName B );
	bool EqualEqual_NameName ( struct FName A, struct FName B );
	bool IsA ( struct FName ClassName );
	bool ClassIsChildOf ( class UClass* TestClass, class UClass* ParentClass );
	bool NotEqual_InterfaceInterface ( class UInterface* A, class UInterface* B );
	bool EqualEqual_InterfaceInterface ( class UInterface* A, class UInterface* B );
	bool NotEqual_ObjectObject ( class UObject* A, class UObject* B );
	bool EqualEqual_ObjectObject ( class UObject* A, class UObject* B );
	struct FString PathName ( class UObject* CheckObject );
	TArray< struct FString > SplitString ( struct FString Source, struct FString Delimiter, unsigned long bCullEmpty );
	void ParseStringIntoArray ( struct FString BaseString, struct FString delim, unsigned long bCullEmpty, TArray< struct FString >* Pieces );
	void JoinArray ( TArray< struct FString > StringArray, struct FString delim, unsigned long bIgnoreBlanks, struct FString* out_Result );
	struct FString GetRightMost ( struct FString Text );
	struct FString Split ( struct FString Text, struct FString SplitStr, unsigned long bOmitSplitStr );
	struct FString Repl ( struct FString Src, struct FString Match, struct FString With, unsigned long bCaseSensitive );
	int Asc ( struct FString S );
	struct FString Chr ( int I );
	struct FString Locs ( struct FString S );
	struct FString Caps ( struct FString S );
	struct FString Right ( struct FString S, int I );
	struct FString Left ( struct FString S, int I );
	struct FString Mid ( struct FString S, int I, int J );
	int InStr ( struct FString S, struct FString T, unsigned long bSearchFromRight, unsigned long bIgnoreCase, int StartPos );
	int Len ( struct FString S );
	struct FString SubtractEqual_StrStr ( struct FString B, struct FString* A );
	struct FString AtEqual_StrStr ( struct FString B, struct FString* A );
	struct FString ConcatEqual_StrStr ( struct FString B, struct FString* A );
	bool ComplementEqual_StrStr ( struct FString A, struct FString B );
	bool NotEqual_StrStr ( struct FString A, struct FString B );
	bool EqualEqual_StrStr ( struct FString A, struct FString B );
	bool GreaterEqual_StrStr ( struct FString A, struct FString B );
	bool LessEqual_StrStr ( struct FString A, struct FString B );
	bool Greater_StrStr ( struct FString A, struct FString B );
	bool Less_StrStr ( struct FString A, struct FString B );
	struct FString At_StrStr ( struct FString A, struct FString B );
	struct FString Concat_StrStr ( struct FString A, struct FString B );
	struct FRotator MakeRotator ( int Pitch, int Yaw, int Roll );
	bool SClampRotAxis ( float DeltaTime, int ViewAxis, int MaxLimit, int MinLimit, float InterpolationSpeed, int* out_DeltaViewAxis );
	int ClampRotAxisFromRange ( int Current, int Min, int Max );
	int ClampRotAxisFromBase ( int Current, int Center, int MaxDelta );
	void ClampRotAxis ( int ViewAxis, int MaxLimit, int MinLimit, int* out_DeltaViewAxis );
	float RSize ( struct FRotator R );
	float RDiff ( struct FRotator A, struct FRotator B );
	int NormalizeRotAxis ( int Angle );
	struct FRotator RInterpTo ( struct FRotator Current, struct FRotator Target, float DeltaTime, float InterpSpeed, unsigned long bConstantInterpSpeed );
	struct FRotator RTransform ( struct FRotator R, struct FRotator RBasis );
	struct FRotator RLerp ( struct FRotator A, struct FRotator B, float Alpha, unsigned long bShortestPath );
	struct FRotator Normalize ( struct FRotator Rot );
	struct FRotator OrthoRotation ( struct FVector X, struct FVector Y, struct FVector Z );
	struct FRotator RotRand ( unsigned long bRoll );
	struct FVector GetRotatorAxis ( struct FRotator A, int Axis );
	void GetUnAxes ( struct FRotator A, struct FVector* X, struct FVector* Y, struct FVector* Z );
	void GetAxes ( struct FRotator A, struct FVector* X, struct FVector* Y, struct FVector* Z );
	bool ClockwiseFrom_IntInt ( int A, int B );
	struct FRotator SubtractEqual_RotatorRotator ( struct FRotator B, struct FRotator* A );
	struct FRotator AddEqual_RotatorRotator ( struct FRotator B, struct FRotator* A );
	struct FRotator Subtract_RotatorRotator ( struct FRotator A, struct FRotator B );
	struct FRotator Add_RotatorRotator ( struct FRotator A, struct FRotator B );
	struct FRotator DivideEqual_RotatorFloat ( float B, struct FRotator* A );
	struct FRotator MultiplyEqual_RotatorFloat ( float B, struct FRotator* A );
	struct FRotator Divide_RotatorFloat ( struct FRotator A, float B );
	struct FRotator Multiply_FloatRotator ( float A, struct FRotator B );
	struct FRotator Multiply_RotatorFloat ( struct FRotator A, float B );
	bool NotEqual_RotatorRotator ( struct FRotator A, struct FRotator B );
	bool EqualEqual_RotatorRotator ( struct FRotator A, struct FRotator B );
	bool InCylinder ( struct FVector Origin, struct FRotator Dir, float Width, struct FVector A, unsigned long bIgnoreZ );
	float NoZDot ( struct FVector A, struct FVector B );
	struct FVector ClampLength ( struct FVector V, float MaxLength );
	struct FVector VInterpEaseOut ( float Alpha, float Exp, struct FVector* A, struct FVector* B );
	struct FVector VInterpEaseIn ( float Alpha, float Exp, struct FVector* A, struct FVector* B );
	struct FVector VInterpTo ( struct FVector Current, struct FVector Target, float DeltaTime, float InterpSpeed );
	bool IsZero ( struct FVector A );
	struct FVector ProjectOnTo ( struct FVector X, struct FVector Y );
	struct FVector MirrorVectorByNormal ( struct FVector InVect, struct FVector InNormal );
	struct FVector VRandCone2 ( struct FVector Dir, float HorizontalConeHalfAngleRadians, float VerticalConeHalfAngleRadians );
	struct FVector VRandCone ( struct FVector Dir, float ConeHalfAngleRadians );
	struct FVector VRand ( );
	struct FVector VLerp ( struct FVector A, struct FVector B, float Alpha );
	struct FVector Normal2D ( struct FVector A );
	struct FVector Normal ( struct FVector A );
	float VSizeSq2D ( struct FVector A );
	float VSizeSq ( struct FVector A );
	float VSize2D ( struct FVector A );
	float VSize ( struct FVector A );
	struct FVector SubtractEqual_VectorVector ( struct FVector B, struct FVector* A );
	struct FVector AddEqual_VectorVector ( struct FVector B, struct FVector* A );
	struct FVector DivideEqual_VectorFloat ( float B, struct FVector* A );
	struct FVector MultiplyEqual_VectorVector ( struct FVector B, struct FVector* A );
	struct FVector MultiplyEqual_VectorFloat ( float B, struct FVector* A );
	struct FVector Cross_VectorVector ( struct FVector A, struct FVector B );
	float Dot_VectorVector ( struct FVector A, struct FVector B );
	bool NotEqual_VectorVector ( struct FVector A, struct FVector B );
	bool EqualEqual_VectorVector ( struct FVector A, struct FVector B );
	struct FVector GreaterGreater_VectorRotator ( struct FVector A, struct FRotator B );
	struct FVector LessLess_VectorRotator ( struct FVector A, struct FRotator B );
	struct FVector Subtract_VectorVector ( struct FVector A, struct FVector B );
	struct FVector Add_VectorVector ( struct FVector A, struct FVector B );
	struct FVector Divide_VectorFloat ( struct FVector A, float B );
	struct FVector Multiply_VectorVector ( struct FVector A, struct FVector B );
	struct FVector Multiply_FloatVector ( float A, struct FVector B );
	struct FVector Multiply_VectorFloat ( struct FVector A, float B );
	struct FVector Subtract_PreVector ( struct FVector A );
	float FInterpConstantTo ( float Current, float Target, float DeltaTime, float InterpSpeed );
	float FInterpTo ( float Current, float Target, float DeltaTime, float InterpSpeed );
	float FPctByRange ( float Value, float InMin, float InMax );
	float RandRange ( float InMin, float InMax );
	float FInterpEaseInOut ( float A, float B, float Alpha, float Exp );
	float FInterpEaseOut ( float A, float B, float Alpha, float Exp );
	float FInterpEaseIn ( float A, float B, float Alpha, float Exp );
	float FCubicInterp ( float P0, float T0, float P1, float T1, float A );
	unsigned char Divide_ByteByte ( unsigned char A, unsigned char B );
	unsigned char Multiply_ByteByte ( unsigned char A, unsigned char B );
	bool NotEqual_ByteByte ( unsigned char A, unsigned char B );
	bool EqualEqual_ByteByte ( unsigned char A, unsigned char B );
	bool GreaterEqual_ByteByte ( unsigned char A, unsigned char B );
	bool LessEqual_ByteByte ( unsigned char A, unsigned char B );
	bool Greater_ByteByte ( unsigned char A, unsigned char B );
	bool Less_ByteByte ( unsigned char A, unsigned char B );
	unsigned char Subtract_ByteByte ( unsigned char A, unsigned char B );
	unsigned char Add_ByteByte ( unsigned char A, unsigned char B );
	void WClamp ( );
	void WMax ( );
	void WMin ( );
	void Subtract_WordWord ( );
	void Add_WordWord ( );
	void Percent_WordWord ( );
	void Divide_WordWord ( );
	void Multiply_WordWord ( );
	bool NotEqual_WordWord ( );
	bool EqualEqual_WordWord ( );
	bool GreaterEqual_WordWord ( );
	bool LessEqual_WordWord ( );
	bool Greater_WordWord ( );
	bool Less_WordWord ( );
	void SubtractSubtract_Word ( );
	void AddAdd_Word ( );
	void SubtractSubtract_PreWord ( );
	void AddAdd_PreWord ( );
	void SubtractEqual_WordWord ( );
	void AddEqual_WordWord ( );
	void DivideEqual_WordWord ( );
	void MultiplyEqual_WordFloat ( float B );
	void MultiplyEqual_WordWord ( );
	int FCeil ( float A );
	int FFloor ( float A );
	int Round ( float A );
	float Lerp ( float A, float B, float Alpha );
	float FClamp ( float V, float A, float B );
	float FMax ( float A, float B );
	float FMin ( float A, float B );
	float FRand ( );
	float Square ( float A );
	float Sqrt ( float A );
	float Loge ( float A );
	float Exp ( float A );
	float Atan2 ( float A, float B );
	float Atan ( float A );
	float Tan ( float A );
	float Acos ( float A );
	float Cos ( float A );
	float Asin ( float A );
	float Sin ( float A );
	float Abs ( float A );
	float SubtractEqual_FloatFloat ( float B, float* A );
	float AddEqual_FloatFloat ( float B, float* A );
	float DivideEqual_FloatFloat ( float B, float* A );
	float MultiplyEqual_FloatFloat ( float B, float* A );
	bool NotEqual_FloatFloat ( float A, float B );
	bool ComplementEqual_FloatFloat ( float A, float B );
	bool EqualEqual_FloatFloat ( float A, float B );
	bool GreaterEqual_FloatFloat ( float A, float B );
	bool LessEqual_FloatFloat ( float A, float B );
	bool Greater_FloatFloat ( float A, float B );
	bool Less_FloatFloat ( float A, float B );
	float Subtract_FloatFloat ( float A, float B );
	float Add_FloatFloat ( float A, float B );
	float Percent_FloatFloat ( float A, float B );
	float Divide_FloatFloat ( float A, float B );
	float Multiply_FloatFloat ( float A, float B );
	float MultiplyMultiply_FloatFloat ( float Base, float Exp );
	float Subtract_PreFloat ( float A );
	struct FString ToHex ( int A );
	int Clamp ( int V, int A, int B );
	int Max ( int A, int B );
	int Min ( int A, int B );
	int Rand ( int Max );
	int SubtractSubtract_Int ( int* A );
	int AddAdd_Int ( int* A );
	int SubtractSubtract_PreInt ( int* A );
	int AddAdd_PreInt ( int* A );
	int SubtractEqual_IntInt ( int B, int* A );
	int AddEqual_IntInt ( int B, int* A );
	int DivideEqual_IntFloat ( float B, int* A );
	int MultiplyEqual_IntFloat ( float B, int* A );
	int Or_IntInt ( int A, int B );
	int Xor_IntInt ( int A, int B );
	int And_IntInt ( int A, int B );
	bool NotEqual_IntInt ( int A, int B );
	bool EqualEqual_IntInt ( int A, int B );
	bool GreaterEqual_IntInt ( int A, int B );
	bool LessEqual_IntInt ( int A, int B );
	bool Greater_IntInt ( int A, int B );
	bool Less_IntInt ( int A, int B );
	int GreaterGreaterGreater_IntInt ( int A, int B );
	int GreaterGreater_IntInt ( int A, int B );
	int LessLess_IntInt ( int A, int B );
	int Subtract_IntInt ( int A, int B );
	int Add_IntInt ( int A, int B );
	int Percent_IntInt ( int A, int B );
	int Divide_IntInt ( int A, int B );
	int Multiply_IntInt ( int A, int B );
	int Subtract_PreInt ( int A );
	int Complement_PreInt ( int A );
	unsigned char SubtractSubtract_Byte ( unsigned char* A );
	unsigned char AddAdd_Byte ( unsigned char* A );
	unsigned char SubtractSubtract_PreByte ( unsigned char* A );
	unsigned char AddAdd_PreByte ( unsigned char* A );
	unsigned char SubtractEqual_ByteByte ( unsigned char B, unsigned char* A );
	unsigned char AddEqual_ByteByte ( unsigned char B, unsigned char* A );
	unsigned char DivideEqual_ByteByte ( unsigned char B, unsigned char* A );
	unsigned char MultiplyEqual_ByteFloat ( float B, unsigned char* A );
	unsigned char MultiplyEqual_ByteByte ( unsigned char B, unsigned char* A );
	bool OrOr_BoolBool ( unsigned long A, unsigned long B );
	bool XorXor_BoolBool ( unsigned long A, unsigned long B );
	bool AndAnd_BoolBool ( unsigned long A, unsigned long B );
	bool NotEqual_BoolBool ( unsigned long A, unsigned long B );
	bool EqualEqual_BoolBool ( unsigned long A, unsigned long B );
	bool Not_PreBool ( unsigned long A );

	// Virtual Functions
	virtual void VirtualFunction00 ( );																			// 0x14009A990 (0x00)
	virtual void VirtualFunction01 ( );																			// 0x140130460 (0x08)
	virtual void VirtualFunction02 ( );																			// 0x140142EC0 (0x10)
	virtual void VirtualFunction03 ( );																			// 0x1404EA0B0 (0x18)
	virtual void VirtualFunction04 ( );																			// 0x14009A990 (0x20)
	virtual void VirtualFunction05 ( );																			// 0x1404073C0 (0x28)
	virtual void VirtualFunction06 ( );																			// 0x1404073C0 (0x30)
	virtual void VirtualFunction07 ( );																			// 0x1400B9F10 (0x38)
	virtual void VirtualFunction08 ( );																			// 0x1400B9F70 (0x40)
	virtual void VirtualFunction09 ( );																			// 0x140177080 (0x48)
	virtual void VirtualFunction10 ( );																			// 0x140148B70 (0x50)
	virtual void VirtualFunction11 ( );																			// 0x14009A990 (0x58)
	virtual void VirtualFunction12 ( );																			// 0x1400C4400 (0x60)
	virtual void VirtualFunction13 ( );																			// 0x14014B0B0 (0x68)
	virtual void VirtualFunction14 ( );																			// 0x14017BD70 (0x70)
	virtual void VirtualFunction15 ( );																			// 0x140087FC0 (0x78)
	virtual void VirtualFunction16 ( );																			// 0x1404073C0 (0x80)
	virtual void VirtualFunction17 ( );																			// 0x1400C4210 (0x88)
	virtual void VirtualFunction18 ( );																			// 0x1400AC600 (0x90)
	virtual void VirtualFunction19 ( );																			// 0x14016DF60 (0x98)
	virtual void VirtualFunction20 ( );																			// 0x1400C4300 (0xA0)
	virtual void VirtualFunction21 ( );																			// 0x1400AC610 (0xA8)
	virtual void VirtualFunction22 ( );																			// 0x1400AC670 (0xB0)
	virtual void VirtualFunction23 ( );																			// 0x1400AC630 (0xB8)
	virtual void VirtualFunction24 ( );																			// 0x1404073C0 (0xC0)
	virtual void VirtualFunction25 ( );																			// 0x1404073C0 (0xC8)
	virtual void VirtualFunction26 ( );																			// 0x1404073C0 (0xD0)
	virtual void VirtualFunction27 ( );																			// 0x1400AC620 (0xD8)
	virtual void VirtualFunction28 ( );																			// 0x1400AC670 (0xE0)
	virtual void VirtualFunction29 ( );																			// 0x1400AC630 (0xE8)
	virtual void VirtualFunction30 ( );																			// 0x1400AC670 (0xF0)
	virtual void VirtualFunction31 ( );																			// 0x1400AC630 (0xF8)
	virtual void VirtualFunction32 ( );																			// 0x1400D76E0 (0x100)
	virtual void VirtualFunction33 ( );																			// 0x1401692A0 (0x108)
	virtual void VirtualFunction34 ( );																			// 0x1401694A0 (0x110)
	virtual void VirtualFunction35 ( );																			// 0x1404073C0 (0x118)
	virtual void VirtualFunction36 ( );																			// 0x140189AE0 (0x120)
	virtual void VirtualFunction37 ( );																			// 0x140169E20 (0x128)
	virtual void VirtualFunction38 ( );																			// 0x140087FD0 (0x130)
	virtual void VirtualFunction39 ( );																			// 0x140087FF0 (0x138)
	virtual void VirtualFunction40 ( );																			// 0x140088010 (0x140)
	virtual void VirtualFunction41 ( );																			// 0x1404EA0B0 (0x148)
	virtual void VirtualFunction42 ( );																			// 0x14008A2C0 (0x150)
	virtual void VirtualFunction43 ( );																			// 0x1404EA0B0 (0x158)
	virtual void VirtualFunction44 ( );																			// 0x1404073C0 (0x160)
	virtual void VirtualFunction45 ( );																			// 0x1404073C0 (0x168)
	virtual void VirtualFunction46 ( );																			// 0x1404073C0 (0x170)
	virtual void VirtualFunction47 ( );																			// 0x1404EA0B0 (0x178)
	virtual void VirtualFunction48 ( );																			// 0x14063F810 (0x180)
	virtual void VirtualFunction49 ( );																			// 0x1406AF9F0 (0x188)
	virtual void VirtualFunction50 ( );																			// 0x140176F40 (0x190)
	virtual void VirtualFunction51 ( );																			// 0x1400FB500 (0x198)
	virtual void VirtualFunction52 ( );																			// 0x1404073C0 (0x1A0)
	virtual void VirtualFunction53 ( );																			// 0x1404073C0 (0x1A8)
	virtual void VirtualFunction54 ( );																			// 0x1404073C0 (0x1B0)
	virtual void VirtualFunction55 ( );																			// 0x14012B4B0 (0x1B8)
	virtual void VirtualFunction56 ( );																			// 0x1400C4670 (0x1C0)
	virtual void VirtualFunction57 ( );																			// 0x1404EA0B0 (0x1C8)
	virtual void VirtualFunction58 ( );																			// 0x1400AC5F0 (0x1D0)
	virtual void VirtualFunction59 ( );																			// 0x14013F8C0 (0x1D8)
	virtual void VirtualFunction60 ( );																			// 0x1401755F0 (0x1E0)
	virtual void VirtualFunction61 ( );																			// 0x140129DA0 (0x1E8)
	virtual void VirtualFunction62 ( );																			// 0x1404EA0B0 (0x1F0)
	virtual void VirtualFunction63 ( );																			// 0x140085340 (0x1F8)
	virtual void VirtualFunction64 ( );																			// 0x140085370 (0x200)
	virtual void VirtualFunction65 ( );																			// 0x1401767F0 (0x208)
	virtual void VirtualFunction66 ( );																			// 0x1400AC780 (0x210)
	virtual void VirtualFunction67 ( );																			// 0x1401233F0 (0x218)
	virtual void VirtualFunction68 ( );																			// 0x14012B530 (0x220)
	virtual void VirtualFunction69 ( );																			// 0x14013CF40 (0x228)
	virtual void VirtualFunction70 ( );																			// 0x1404073C0 (0x230)
	virtual void VirtualFunction71 ( );																			// 0x1404EA0B0 (0x238)
	virtual void VirtualFunction72 ( );																			// 0x1400D79C0 (0x240)
	virtual void VirtualFunction73 ( );																			// 0x1400B3980 (0x248)
	virtual void VirtualFunction74 ( );																			// 0x140146990 (0x250)
	virtual void VirtualFunction75 ( );																			// 0x14015D810 (0x258)
	virtual void VirtualFunction76 ( );																			// 0x1404EA0B0 (0x260)
	virtual void VirtualFunction77 ( );																			// 0x14009A6D0 (0x268)
	virtual void VirtualFunction78 ( );																			// 0x14009A990 (0x270)
	virtual void VirtualFunction79 ( );																			// 0x140145840 (0x278)
	virtual void VirtualFunction80 ( );																			// 0x14012B020 (0x280)
	virtual void VirtualFunction81 ( );																			// 0x14014EEA0 (0x288)
	virtual void VirtualFunction82 ( );																			// 0x14009A6F0 (0x290)
	virtual void VirtualFunction83 ( );																			// 0x1400E2E60 (0x298)
	virtual void VirtualFunction84 ( );																			// 0x14017C030 (0x2A0)
	virtual void VirtualFunction85 ( );																			// 0x14010ADA0 (0x2A8)
	virtual void VirtualFunction86 ( );																			// 0x219930522 (0x2B0)
	virtual void VirtualFunction87 ( );																			// 0x018D95B0 (0x2B8)
	virtual void VirtualFunction88 ( );																			// 0x500000000 (0x2C0)
	virtual void VirtualFunction89 ( );																			// 0xA0018D95C0 (0x2C8)
	virtual void VirtualFunction90 ( );																			// 0x100000000 (0x2D0)
	virtual void VirtualFunction91 ( );																			// 0x00000000 (0x2D8)
	virtual void VirtualFunction92 ( );																			// 0x919930522 (0x2E0)
	virtual void VirtualFunction93 ( );																			// 0x018D9600 (0x2E8)
	virtual void VirtualFunction94 ( );																			// 0xD00000000 (0x2F0)
	virtual void VirtualFunction95 ( );																			// 0x20018D9648 (0x2F8)
	virtual void VirtualFunction96 ( );																			// 0x100000000 (0x300)
	virtual void VirtualFunction97 ( );																			// 0x00000000 (0x308)
	virtual void VirtualFunction98 ( );																			// 0x14009A990 (0x310)
	virtual void VirtualFunction99 ( );																			// 0x14012E260 (0x318)
	virtual void VirtualFunction100 ( );																			// 0x140143140 (0x320)
	virtual void VirtualFunction101 ( );																			// 0x1404EA0B0 (0x328)
	virtual void VirtualFunction102 ( );																			// 0x14009A990 (0x330)
	virtual void VirtualFunction103 ( );																			// 0x1404073C0 (0x338)
	virtual void VirtualFunction104 ( );																			// 0x1404073C0 (0x340)
	virtual void VirtualFunction105 ( );																			// 0x1400B9F10 (0x348)
	virtual void VirtualFunction106 ( );																			// 0x1400B9F70 (0x350)
	virtual void VirtualFunction107 ( );																			// 0x140176D90 (0x358)
	virtual void VirtualFunction108 ( );																			// 0x140148B70 (0x360)
	virtual void VirtualFunction109 ( );																			// 0x14009A990 (0x368)
	virtual void VirtualFunction110 ( );																			// 0x1400C4400 (0x370)
	virtual void VirtualFunction111 ( );																			// 0x140148C70 (0x378)
	virtual void VirtualFunction112 ( );																			// 0x14017DA10 (0x380)
	virtual void VirtualFunction113 ( );																			// 0x140087FC0 (0x388)
	virtual void VirtualFunction114 ( );																			// 0x1404073C0 (0x390)
	virtual void VirtualFunction115 ( );																			// 0x1400C4210 (0x398)
	virtual void VirtualFunction116 ( );																			// 0x1400AC600 (0x3A0)
	virtual void VirtualFunction117 ( );																			// 0x14016DF60 (0x3A8)
	virtual void VirtualFunction118 ( );																			// 0x1400C4300 (0x3B0)
	virtual void VirtualFunction119 ( );																			// 0x1400AC610 (0x3B8)
	virtual void VirtualFunction120 ( );																			// 0x1400AC670 (0x3C0)
	virtual void VirtualFunction121 ( );																			// 0x1400AC630 (0x3C8)
	virtual void VirtualFunction122 ( );																			// 0x1404073C0 (0x3D0)
	virtual void VirtualFunction123 ( );																			// 0x1404073C0 (0x3D8)
	virtual void VirtualFunction124 ( );																			// 0x1404073C0 (0x3E0)
	virtual void VirtualFunction125 ( );																			// 0x1400AC620 (0x3E8)
	virtual void VirtualFunction126 ( );																			// 0x1400AC670 (0x3F0)
	virtual void VirtualFunction127 ( );																			// 0x1400AC630 (0x3F8)
	virtual void VirtualFunction128 ( );																			// 0x1400AC670 (0x400)
	virtual void VirtualFunction129 ( );																			// 0x1400AC630 (0x408)
	virtual void VirtualFunction130 ( );																			// 0x1400D76E0 (0x410)
	virtual void VirtualFunction131 ( );																			// 0x1401692A0 (0x418)
	virtual void VirtualFunction132 ( );																			// 0x1401694A0 (0x420)
	virtual void VirtualFunction133 ( );																			// 0x1404073C0 (0x428)
	virtual void VirtualFunction134 ( );																			// 0x140188740 (0x430)
	virtual void VirtualFunction135 ( );																			// 0x140169E20 (0x438)
	virtual void VirtualFunction136 ( );																			// 0x140087FD0 (0x440)
	virtual void VirtualFunction137 ( );																			// 0x140087FF0 (0x448)
	virtual void VirtualFunction138 ( );																			// 0x140088010 (0x450)
	virtual void VirtualFunction139 ( );																			// 0x1404EA0B0 (0x458)
	virtual void VirtualFunction140 ( );																			// 0x14008A2C0 (0x460)
	virtual void VirtualFunction141 ( );																			// 0x1404EA0B0 (0x468)
	virtual void VirtualFunction142 ( );																			// 0x1404073C0 (0x470)
	virtual void VirtualFunction143 ( );																			// 0x1404073C0 (0x478)
	virtual void VirtualFunction144 ( );																			// 0x1404073C0 (0x480)
	virtual void VirtualFunction145 ( );																			// 0x1404EA0B0 (0x488)
	virtual void VirtualFunction146 ( );																			// 0x14063F810 (0x490)
	virtual void VirtualFunction147 ( );																			// 0x1406AF9F0 (0x498)
	virtual void VirtualFunction148 ( );																			// 0x140176200 (0x4A0)
	virtual void VirtualFunction149 ( );																			// 0x1401363B0 (0x4A8)
	virtual void VirtualFunction150 ( );																			// 0x1404073C0 (0x4B0)
	virtual void VirtualFunction151 ( );																			// 0x1404073C0 (0x4B8)
	virtual void VirtualFunction152 ( );																			// 0x1404073C0 (0x4C0)
	virtual void VirtualFunction153 ( );																			// 0x1400BCAD0 (0x4C8)
	virtual void VirtualFunction154 ( );																			// 0x1400C4670 (0x4D0)
	virtual void VirtualFunction155 ( );																			// 0x1404EA0B0 (0x4D8)
	virtual void VirtualFunction156 ( );																			// 0x1400AC5F0 (0x4E0)
	virtual void VirtualFunction157 ( );																			// 0x14013F8C0 (0x4E8)
	virtual void VirtualFunction158 ( );																			// 0x1401755F0 (0x4F0)
	virtual void VirtualFunction159 ( );																			// 0x140129DA0 (0x4F8)
	virtual void VirtualFunction160 ( );																			// 0x1404EA0B0 (0x500)
	virtual void VirtualFunction161 ( );																			// 0x140085340 (0x508)
	virtual void VirtualFunction162 ( );																			// 0x140085370 (0x510)
	virtual void VirtualFunction163 ( );																			// 0x1401767F0 (0x518)
	virtual void VirtualFunction164 ( );																			// 0x1400AC780 (0x520)
	virtual void VirtualFunction165 ( );																			// 0x1404073C0 (0x528)
	virtual void VirtualFunction166 ( );																			// 0x14012B530 (0x530)
	virtual void VirtualFunction167 ( );																			// 0x14013CF40 (0x538)
	virtual void VirtualFunction168 ( );																			// 0x1404073C0 (0x540)
	virtual void VirtualFunction169 ( );																			// 0x1404EA0B0 (0x548)
	virtual void VirtualFunction170 ( );																			// 0x1400D79C0 (0x550)
	virtual void VirtualFunction171 ( );																			// 0x1400B3980 (0x558)
	virtual void VirtualFunction172 ( );																			// 0x140146990 (0x560)
	virtual void VirtualFunction173 ( );																			// 0x14015D810 (0x568)
	virtual void VirtualFunction174 ( );																			// 0x1404EA0B0 (0x570)
	virtual void VirtualFunction175 ( );																			// 0x1400E2E40 (0x578)
	virtual void VirtualFunction176 ( );																			// 0x14009A990 (0x580)
	virtual void VirtualFunction177 ( );																			// 0x1404073C0 (0x588)
	virtual void VirtualFunction178 ( );																			// 0x14012BB60 (0x590)
	virtual void VirtualFunction179 ( );																			// 0x14012BBB0 (0x598)
	virtual void VirtualFunction180 ( );																			// 0x1404073C0 (0x5A0)
	virtual void VirtualFunction181 ( );																			// 0x14012BC00 (0x5A8)
	virtual void VirtualFunction182 ( );																			// 0x14012BC30 (0x5B0)
	virtual void VirtualFunction183 ( );																			// 0x1400ACDE0 (0x5B8)
	virtual void VirtualFunction184 ( );																			// 0x14012BC60 (0x5C0)
	virtual void VirtualFunction185 ( );																			// 0x14012BC90 (0x5C8)
	virtual void VirtualFunction186 ( );																			// 0x14012BCC0 (0x5D0)
	virtual void VirtualFunction187 ( );																			// 0x14012BCF0 (0x5D8)
	virtual void VirtualFunction188 ( );																			// 0x1400ACD30 (0x5E0)
	virtual void VirtualFunction189 ( );																			// 0x1400ACD50 (0x5E8)
	virtual void VirtualFunction190 ( );																			// 0x14012BD20 (0x5F0)
	virtual void VirtualFunction191 ( );																			// 0x14012BD50 (0x5F8)
	virtual void VirtualFunction192 ( );																			// 0x1404073C0 (0x600)
	virtual void VirtualFunction193 ( );																			// 0x140110AE0 (0x608)
	virtual void VirtualFunction194 ( );																			// 0x1400ACE10 (0x610)
	virtual void VirtualFunction195 ( );																			// 0x1404EA0B0 (0x618)
	virtual void VirtualFunction196 ( );																			// 0x1404073C0 (0x620)
	virtual void VirtualFunction197 ( );																			// 0x14009A990 (0x628)
	virtual void VirtualFunction198 ( );																			// 0x1404EA0B0 (0x630)
	virtual void VirtualFunction199 ( );																			// 0x1404EA0B0 (0x638)
	virtual void VirtualFunction200 ( );																			// 0x1404073C0 (0x640)
	virtual void VirtualFunction201 ( );																			// 0x1404073C0 (0x648)
	virtual void VirtualFunction202 ( );																			// 0x14012BB40 (0x650)
	virtual void VirtualFunction203 ( );																			// 0x6F007200500055 (0x658)
	virtual void VirtualFunction204 ( );																			// 0x74007200650070 (0x660)
	virtual void VirtualFunction205 ( );																			// 0x47003A003A0079 (0x668)
	virtual void VirtualFunction206 ( );																			// 0x50004300740065 (0x670)
	virtual void VirtualFunction207 ( );																			// 0x630061004D0050 (0x678)
	virtual void VirtualFunction208 ( );																			// 0x790054006F0072 (0x680)
	virtual void VirtualFunction209 ( );																			// 0x00650070 (0x688)
	virtual void VirtualFunction210 ( );																			// 0x6F007200500055 (0x690)
	virtual void VirtualFunction211 ( );																			// 0x74007200650070 (0x698)
	virtual void VirtualFunction212 ( );																			// 0x47003A003A0079 (0x6A0)
	virtual void VirtualFunction213 ( );																			// 0x50004300740065 (0x6A8)
	virtual void VirtualFunction214 ( );																			// 0x70007900540050 (0x6B0)
	virtual void VirtualFunction215 ( );																			// 0x00000065 (0x6B8)
	virtual void VirtualFunction216 ( );																			// 0x6F007200500055 (0x6C0)
	virtual void VirtualFunction217 ( );																			// 0x74007200650070 (0x6C8)
	virtual void VirtualFunction218 ( );																			// 0x49003A003A0079 (0x6D0)
	virtual void VirtualFunction219 ( );																			// 0x74006E00650064 (0x6D8)
	virtual void VirtualFunction220 ( );																			// 0x6C006100630069 (0x6E0)
	virtual void VirtualFunction221 ( );																			// 0x00000000 (0x6E8)
	virtual void VirtualFunction222 ( );																			// 0x6F007200500055 (0x6F0)
	virtual void VirtualFunction223 ( );																			// 0x74007200650070 (0x6F8)
	virtual void VirtualFunction224 ( );																			// 0x53003A003A0079 (0x700)
	virtual void VirtualFunction225 ( );																			// 0x61006900720065 (0x708)
	virtual void VirtualFunction226 ( );																			// 0x65007A0069006C (0x710)
	virtual void VirtualFunction227 ( );																			// 0x6D006500740049 (0x718)
	virtual void VirtualFunction228 ( );																			// 0x00000000 (0x720)
	virtual void VirtualFunction229 ( );																			// 0x6F007200500055 (0x728)
	virtual void VirtualFunction230 ( );																			// 0x74007200650070 (0x730)
	virtual void VirtualFunction231 ( );																			// 0x45003A003A0079 (0x738)
	virtual void VirtualFunction232 ( );																			// 0x72006F00700078 (0x740)
	virtual void VirtualFunction233 ( );																			// 0x78006500540074 (0x748)
	virtual void VirtualFunction234 ( );																			// 0x65007400490074 (0x750)
	virtual void VirtualFunction235 ( );																			// 0x0000006D (0x758)
	virtual void VirtualFunction236 ( );																			// 0x6F007200500055 (0x760)
	virtual void VirtualFunction237 ( );																			// 0x74007200650070 (0x768)
	virtual void VirtualFunction238 ( );																			// 0x49003A003A0079 (0x770)
	virtual void VirtualFunction239 ( );																			// 0x72006F0070006D (0x778)
	virtual void VirtualFunction240 ( );																			// 0x78006500540074 (0x780)
	virtual void VirtualFunction241 ( );																			// 0x00000074 (0x788)
	virtual void VirtualFunction242 ( );																			// 0x6F007200500055 (0x790)
	virtual void VirtualFunction243 ( );																			// 0x74007200650070 (0x798)
	virtual void VirtualFunction244 ( );																			// 0x47003A003A0079 (0x7A0)
	virtual void VirtualFunction245 ( );																			// 0x72005000740065 (0x7A8)
	virtual void VirtualFunction246 ( );																			// 0x7200650070006F (0x7B0)
	virtual void VirtualFunction247 ( );																			// 0x61005600790074 (0x7B8)
	virtual void VirtualFunction248 ( );																			// 0x650075006C (0x7C0)
	virtual void VirtualFunction249 ( );																			// 0x6F007200500055 (0x7C8)
	virtual void VirtualFunction250 ( );																			// 0x74007200650070 (0x7D0)
	virtual void VirtualFunction251 ( );																			// 0x53003A003A0079 (0x7D8)
	virtual void VirtualFunction252 ( );																			// 0x72005000740065 (0x7E0)
	virtual void VirtualFunction253 ( );																			// 0x7200650070006F (0x7E8)
	virtual void VirtualFunction254 ( );																			// 0x61005600790074 (0x7F0)
	virtual void VirtualFunction255 ( );																			// 0x650075006C (0x7F8)
};

UClass* UObject::pClassPointer = NULL;

// Class Core.TextBuffer
// 0x002C (0x008C - 0x0060)
class UTextBuffer : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x2C ];                            		// 0x0060 (0x002C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 0 ];

		return pClassPointer;
	};

};

UClass* UTextBuffer::pClassPointer = NULL;

// Class Core.Subsystem
// 0x0008 (0x0068 - 0x0060)
class USubsystem : public UObject
{
public:
	struct FPointer                                    VfTable_FExec;                                    		// 0x0060 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 3 ];

		return pClassPointer;
	};

};

UClass* USubsystem::pClassPointer = NULL;

// Class Core.System
// 0x0104 (0x016C - 0x0068)
class USystem : public USubsystem
{
public:
	int                                                StaleCacheDays;                                   		// 0x0068 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxStaleCacheSize;                                		// 0x006C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                MaxOverallCacheSize;                              		// 0x0070 (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                PackageSizeSoftLimit;                             		// 0x0074 (0x0004) [0x0000000000004000]              ( CPF_Config )
	float                                              AsyncIOBandwidthLimit;                            		// 0x0078 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     SavePath;                                         		// 0x007C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     CachePath;                                        		// 0x008C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     CacheExt;                                         		// 0x009C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           Paths;                                            		// 0x00AC (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           SeekFreePCPaths;                                  		// 0x00BC (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           ScriptPaths;                                      		// 0x00CC (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           FRScriptPaths;                                    		// 0x00DC (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           CutdownPaths;                                     		// 0x00EC (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FName >                             Suppress;                                         		// 0x00FC (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           Extensions;                                       		// 0x010C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           SeekFreePCExtensions;                             		// 0x011C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           LocalizationPaths;                                		// 0x012C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	struct FString                                     TextureFileCacheExtension;                        		// 0x013C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           KorScriptPaths;                                   		// 0x014C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	TArray< struct FString >                           ForceServerSideOnlyPaths;                         		// 0x015C (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 2 ];

		return pClassPointer;
	};

};

UClass* USystem::pClassPointer = NULL;

// Class Core.PackageMap
// 0x00A0 (0x0100 - 0x0060)
class UPackageMap : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xA0 ];                            		// 0x0060 (0x00A0) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 4 ];

		return pClassPointer;
	};

};

UClass* UPackageMap::pClassPointer = NULL;

// Class Core.ObjectSerializer
// 0x0010 (0x0070 - 0x0060)
class UObjectSerializer : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x0060 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 5 ];

		return pClassPointer;
	};

};

UClass* UObjectSerializer::pClassPointer = NULL;

// Class Core.ObjectRedirector
// 0x0008 (0x0068 - 0x0060)
class UObjectRedirector : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0060 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 6 ];

		return pClassPointer;
	};

};

UClass* UObjectRedirector::pClassPointer = NULL;

// Class Core.MetaData
// 0x0048 (0x00A8 - 0x0060)
class UMetaData : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0060 (0x0048) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 7 ];

		return pClassPointer;
	};

};

UClass* UMetaData::pClassPointer = NULL;

// Class Core.Linker
// 0x0168 (0x01C8 - 0x0060)
class ULinker : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x168 ];                           		// 0x0060 (0x0168) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 9 ];

		return pClassPointer;
	};

};

UClass* ULinker::pClassPointer = NULL;

// Class Core.LinkerSave
// 0x00BC (0x0284 - 0x01C8)
class ULinkerSave : public ULinker
{
public:
	unsigned char                                      UnknownData00[ 0xBC ];                            		// 0x01C8 (0x00BC) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 8 ];

		return pClassPointer;
	};

};

UClass* ULinkerSave::pClassPointer = NULL;

// Class Core.LinkerLoad
// 0x060C (0x07D4 - 0x01C8)
class ULinkerLoad : public ULinker
{
public:
	unsigned char                                      UnknownData00[ 0x60C ];                           		// 0x01C8 (0x060C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 10 ];

		return pClassPointer;
	};

};

UClass* ULinkerLoad::pClassPointer = NULL;

// Class Core.Interface
// 0x0000 (0x0060 - 0x0060)
class UInterface : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 11 ];

		return pClassPointer;
	};

};

UClass* UInterface::pClassPointer = NULL;

// Class Core.Field
// 0x0008 (0x0068 - 0x0060)
class UField : public UObject
{
public:
	class UField*                                      Next;                                             		 // NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 14 ];

		return pClassPointer;
	};

};

UClass* UField::pClassPointer = NULL;

// Class Core.Struct
// 0x0068 (0x00D0 - 0x0068)
class UStruct : public UField
{
public:
	unsigned char                                      UnknownData00[0x10];					                     // NOT AUTO-GENERATED PROPERTY 
	class UField*                                      SuperField;												 // NOT AUTO-GENERATED PROPERTY 
	class UField*                                      Children;                                                 // NOT AUTO-GENERATED PROPERTY 
	unsigned long                                      PropertySize;                                             // NOT AUTO-GENERATED PROPERTY 
	unsigned char                                      UnknownData01[0x44];                                        // NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 13 ];

		return pClassPointer;
	};

};

UClass* UStruct::pClassPointer = NULL;

// Class Core.ScriptStruct
// 0x0024 (0x00F4 - 0x00D0)
class UScriptStruct : public UStruct
{
public:
	unsigned char                                      UnknownData00[ 0x24 ];                            		// 0x00D0 (0x0024) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 12 ];

		return pClassPointer;
	};

};

UClass* UScriptStruct::pClassPointer = NULL;

// Class Core.Function
// 0x0028 (0x00F8 - 0x00D0)
class UFunction : public UStruct
{
public:
	unsigned long                                      FunctionFlags;                                            // NOT AUTO-GENERATED PROPERTY 
	unsigned short                                     iNative;                                                  // NOT AUTO-GENERATED PROPERTY 
	unsigned short                                     RepOffset;                                                // NOT AUTO-GENERATED PROPERTY 
	struct FName                                       FriendlyName;                                             // NOT AUTO-GENERATED PROPERTY 
	unsigned short                                     NumParms;                                                 // NOT AUTO-GENERATED PROPERTY 
	unsigned short                                     ParmsSize;                                                // NOT AUTO-GENERATED PROPERTY 
	unsigned long                                      ReturnValueOffset;                                        // NOT AUTO-GENERATED PROPERTY 
	unsigned char                                      UnknownData00[0x8];										 // NOT AUTO-GENERATED PROPERTY 
	void*                                              Func;                                                     // NOT AUTO-GENERATED PROPERTY 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 15 ];

		return pClassPointer;
	};

};

UClass* UFunction::pClassPointer = NULL;

// Class Core.Property
// 0x0040 (0x00A8 - 0x0068)
class UProperty : public UField
{
public:
	unsigned char                                      UnknownData00[ 0x40 ];                            		// 0x0068 (0x0040) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 17 ];

		return pClassPointer;
	};

};

UClass* UProperty::pClassPointer = NULL;

// Class Core.WordProperty
// 0x0000 (0x00A8 - 0x00A8)
class UWordProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 16 ];

		return pClassPointer;
	};

};

UClass* UWordProperty::pClassPointer = NULL;

// Class Core.StructProperty
// 0x0008 (0x00B0 - 0x00A8)
class UStructProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00A8 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 18 ];

		return pClassPointer;
	};

};

UClass* UStructProperty::pClassPointer = NULL;

// Class Core.StrProperty
// 0x0000 (0x00A8 - 0x00A8)
class UStrProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 20 ];

		return pClassPointer;
	};

};

UClass* UStrProperty::pClassPointer = NULL;

// Class Core.StrRefProperty
// 0x0000 (0x00A8 - 0x00A8)
class UStrRefProperty : public UStrProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 19 ];

		return pClassPointer;
	};

};

UClass* UStrRefProperty::pClassPointer = NULL;

// Class Core.ObjectProperty
// 0x0008 (0x00B0 - 0x00A8)
class UObjectProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00A8 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 22 ];

		return pClassPointer;
	};

};

UClass* UObjectProperty::pClassPointer = NULL;

// Class Core.ComponentProperty
// 0x0000 (0x00B0 - 0x00B0)
class UComponentProperty : public UObjectProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 21 ];

		return pClassPointer;
	};

};

UClass* UComponentProperty::pClassPointer = NULL;

// Class Core.ClassProperty
// 0x0008 (0x00B8 - 0x00B0)
class UClassProperty : public UObjectProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00B0 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 23 ];

		return pClassPointer;
	};

};

UClass* UClassProperty::pClassPointer = NULL;

// Class Core.NameProperty
// 0x0000 (0x00A8 - 0x00A8)
class UNameProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 24 ];

		return pClassPointer;
	};

};

UClass* UNameProperty::pClassPointer = NULL;

// Class Core.MapProperty
// 0x0010 (0x00B8 - 0x00A8)
class UMapProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x00A8 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 25 ];

		return pClassPointer;
	};

};

UClass* UMapProperty::pClassPointer = NULL;

// Class Core.IntProperty
// 0x0000 (0x00A8 - 0x00A8)
class UIntProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 26 ];

		return pClassPointer;
	};

};

UClass* UIntProperty::pClassPointer = NULL;

// Class Core.InterfaceProperty
// 0x0008 (0x00B0 - 0x00A8)
class UInterfaceProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00A8 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 27 ];

		return pClassPointer;
	};

};

UClass* UInterfaceProperty::pClassPointer = NULL;

// Class Core.FloatProperty
// 0x0000 (0x00A8 - 0x00A8)
class UFloatProperty : public UProperty
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 28 ];

		return pClassPointer;
	};

};

UClass* UFloatProperty::pClassPointer = NULL;

// Class Core.DelegateProperty
// 0x0010 (0x00B8 - 0x00A8)
class UDelegateProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x00A8 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 29 ];

		return pClassPointer;
	};

};

UClass* UDelegateProperty::pClassPointer = NULL;

// Class Core.ByteProperty
// 0x0008 (0x00B0 - 0x00A8)
class UByteProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00A8 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 30 ];

		return pClassPointer;
	};

};

UClass* UByteProperty::pClassPointer = NULL;

// Class Core.BoolProperty
// 0x0004 (0x00AC - 0x00A8)
class UBoolProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00A8 (0x0004) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 31 ];

		return pClassPointer;
	};

};

UClass* UBoolProperty::pClassPointer = NULL;

// Class Core.ArrayProperty
// 0x0008 (0x00B0 - 0x00A8)
class UArrayProperty : public UProperty
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00A8 (0x0008) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 32 ];

		return pClassPointer;
	};

};

UClass* UArrayProperty::pClassPointer = NULL;

// Class Core.Enum
// 0x0010 (0x0078 - 0x0068)
class UEnum : public UField
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x0068 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 33 ];

		return pClassPointer;
	};

};

UClass* UEnum::pClassPointer = NULL;

// Class Core.Const
// 0x0010 (0x0078 - 0x0068)
class UConst : public UField
{
public:
	unsigned char                                      UnknownData00[ 0x10 ];                            		// 0x0068 (0x0010) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 34 ];

		return pClassPointer;
	};

};

UClass* UConst::pClassPointer = NULL;

// Class Core.Factory
// 0x0048 (0x00A8 - 0x0060)
class UFactory : public UObject
{
public:
	class UClass*                                      SupportedClass;                                   		// 0x0060 (0x0008) [0x0000000000000000]              
	class UClass*                                      ContextClass;                                     		// 0x0068 (0x0008) [0x0000000000000000]              
	struct FString                                     Description;                                      		// 0x0070 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           Formats;                                          		// 0x0080 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bCreateNew : 1;                                   		// 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEditAfterNew : 1;                                		// 0x0090 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bEditorImport : 1;                                		// 0x0090 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bText : 1;                                        		// 0x0090 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                AutoPriority;                                     		// 0x0094 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           ValidGameNames;                                   		// 0x0098 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 36 ];

		return pClassPointer;
	};

};

UClass* UFactory::pClassPointer = NULL;

// Class Core.TextBufferFactory
// 0x0000 (0x00A8 - 0x00A8)
class UTextBufferFactory : public UFactory
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 35 ];

		return pClassPointer;
	};

};

UClass* UTextBufferFactory::pClassPointer = NULL;

// Class Core.Exporter
// 0x0034 (0x0094 - 0x0060)
class UExporter : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0060 (0x0008) MISSED OFFSET
	TArray< struct FString >                           FormatExtension;                                  		// 0x0068 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           FormatDescription;                                		// 0x0078 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0xC ];                             		// 0x0088 (0x000C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 37 ];

		return pClassPointer;
	};

};

UClass* UExporter::pClassPointer = NULL;

// Class Core.Component
// 0x0010 (0x0070 - 0x0060)
class UComponent : public UObject
{
public:
	class UClass*                                      TemplateOwnerClass;                               		// 0x0060 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	struct FName                                       TemplateName;                                     		// 0x0068 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 39 ];

		return pClassPointer;
	};

};

UClass* UComponent::pClassPointer = NULL;

// Class Core.DistributionVector
// 0x000C (0x007C - 0x0070)
class UDistributionVector : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                        		// 0x0070 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bCanBeBaked : 1;                                  		// 0x0078 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsDirty : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 38 ];

		return pClassPointer;
	};

	struct FVector GetVectorValue ( float F, int LastExtreme );
};

UClass* UDistributionVector::pClassPointer = NULL;

// Class Core.DistributionFloat
// 0x000C (0x007C - 0x0070)
class UDistributionFloat : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                        		// 0x0070 (0x0008) [0x0000000000801002]              ( CPF_Const | CPF_Native | CPF_NoExport )
	unsigned long                                      bCanBeBaked : 1;                                  		// 0x0078 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bIsDirty : 1;                                     		// 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 40 ];

		return pClassPointer;
	};

	float GetFloatValue ( float F );
};

UClass* UDistributionFloat::pClassPointer = NULL;

// Class Core.Commandlet
// 0x0054 (0x00B4 - 0x0060)
class UCommandlet : public UObject
{
public:
	struct FString                                     HelpDescription;                                  		// 0x0060 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HelpUsage;                                        		// 0x0070 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     HelpWebLink;                                      		// 0x0080 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FString >                           HelpParamNames;                                   		// 0x0090 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	TArray< struct FString >                           HelpParamDescriptions;                            		// 0x00A0 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	unsigned long                                      IsServer : 1;                                     		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsClient : 1;                                     		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IsEditor : 1;                                     		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      LogToConsole : 1;                                 		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      ShowErrorCount : 1;                               		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000010] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 42 ];

		return pClassPointer;
	};

	int eventMain ( struct FString Params );
};

UClass* UCommandlet::pClassPointer = NULL;

// Class Core.HelpCommandlet
// 0x0000 (0x00B4 - 0x00B4)
class UHelpCommandlet : public UCommandlet
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 41 ];

		return pClassPointer;
	};

	int eventMain ( struct FString Params );
};

UClass* UHelpCommandlet::pClassPointer = NULL;

// Class Core.State
// 0x0054 (0x0124 - 0x00D0)
class UState : public UStruct
{
public:
	unsigned char                                      UnknownData00[ 0x54 ];                            		// 0x00D0 (0x0054) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 43 ];

		return pClassPointer;
	};

};

UClass* UState::pClassPointer = NULL;

// Class Core.Package
// 0x00D4 (0x0134 - 0x0060)
class UPackage : public UObject
{
public:
	unsigned char                                      UnknownData00[ 0xD4 ];                            		// 0x0060 (0x00D4) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 44 ];

		return pClassPointer;
	};

};

UClass* UPackage::pClassPointer = NULL;

// Class Core.Class
// 0x014C (0x0270 - 0x0124)
class UClass : public UState
{
public:
	unsigned char                                      UnknownData00[ 0x14C ];                           		// 0x0124 (0x014C) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 45 ];

		return pClassPointer;
	};

};

UClass* UClass::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
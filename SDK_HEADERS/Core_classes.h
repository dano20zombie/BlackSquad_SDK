/*
#############################################################################################
# Black Squad (11.01.2019) SDK
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
//	struct FPointer                                    VfTableObject;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FPointer                                    HashNext;                                         		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FQWord                                      ObjectFlags;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
	struct FPointer                                    HashOuterNext;                                    		// 0x0018 (0x0008) [0x0000000000000000]              
	struct FPointer                                    StateFrame;                                       		// 0x0020 (0x0008) [0x0000000000000000]              
	class UObject*                                     Linker;                                           		// 0x0028 (0x0008) [0x0000000000000000]              
	struct FPointer                                    LinkerIndex;                                      		// 0x0030 (0x0008) [0x0000000000000000]              
	int                                                ObjectInternalInteger;                            		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                NetIndex;                                         		// 0x003C (0x0004) [0x0000000000000000]              
	class UObject*                                     Outer;                                            		// 0x0040 (0x0008) [0x0000000000000000]              
	struct FName                                       Name;                                             		// 0x0048 (0x0008) [0x0000000000000000]              
	class UClass*                                      Class;                                            		// 0x0050 (0x0008) [0x0000000000000000]              
	class UObject*                                     ObjectArchetype;                                  		// 0x0058 (0x0008) [0x0000000000000000]              

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

	void LocalizeCombinationText ( );
	void LoadCachedResources ( );
	void eventGetCachedResources ( );
	void GetMergedRotation ( );
	void GetDeltaTimeFromCycles ( );
	void GetCycles ( );
	void DWORDToString ( );
	void StringToDWORD ( );
	void GetStringFromGuid ( );
	void GetGuidFromString ( );
	void CreateGuid ( );
	void IsGuidValid ( );
	void InvalidateGuid ( );
	void GetLanguage ( );
	void GetRandomOptionSumFrequency ( );
	void GetBuildChangelistNumber ( );
	void GetEngineVersion ( );
	void GetSystemTime ( );
	void TimeStamp ( );
	void TransformVectorByRotation ( );
	void GetPackageName ( );
	void IsPendingKill ( );
	void ByteToFloat ( );
	void FloatToByte ( );
	void UnwindHeading ( );
	void FindDeltaAngle ( );
	void GetHeadingAngle ( );
	void GetAngularDegreesFromRadians ( );
	void GetAngularFromDotDist ( );
	void GetAngularDistance ( );
	void GetDotDistance ( );
	void PointProjectToPlane ( );
	void PointDistToPlane ( );
	void PointDistToSegment ( );
	void PointDistToLine ( );
	void GetPerObjectConfigSections ( );
	void ImportJSON ( );
	void StaticSaveConfig ( );
	void SaveConfig ( );
	void FindObject ( );
	void DynamicLoadObject ( );
	void FindEnumIndex ( );
	void GetEnum ( );
	void Disable ( );
	void Enable ( );
	void eventContinuedState ( );
	void eventPausedState ( );
	void eventPoppedState ( );
	void eventPushedState ( );
	void eventEndState ( );
	void eventBeginState ( );
	void DumpStateStack ( );
	void PopState ( );
	void PushState ( );
	void GetStateName ( );
	void IsChildState ( );
	void IsInState ( );
	void GotoState ( );
	void IsUTracing ( );
	void SetUTracing ( );
	void GetFuncName ( );
	void DebugBreak ( );
	void GetScriptTrace ( );
	void ScriptTrace ( );
	void ParseLocalizedPropertyPath ( );
	void Localize ( );
	void WarnInternal ( );
	void LogInternal ( );
	void Subtract_LinearColorLinearColor ( );
	void Multiply_LinearColorFloat ( );
	void ColorToLinearColor ( );
	void MakeLinearColor ( );
	void LerpColor ( );
	void MakeColor ( );
	void Add_ColorColor ( );
	void Multiply_ColorFloat ( );
	void Multiply_FloatColor ( );
	void Subtract_ColorColor ( );
	void EvalInterpCurveVector2D ( );
	void EvalInterpCurveVector ( );
	void EvalInterpCurveFloat ( );
	void vect2d ( );
	void GetMappedRangeValue ( );
	void GetRangePctByValue ( );
	void GetRangeValueByPct ( );
	void SubtractEqual_Vector2DVector2D ( );
	void AddEqual_Vector2DVector2D ( );
	void DivideEqual_Vector2DFloat ( );
	void MultiplyEqual_Vector2DFloat ( );
	void Divide_Vector2DFloat ( );
	void Multiply_Vector2DFloat ( );
	void Subtract_Vector2DVector2D ( );
	void Add_Vector2DVector2D ( );
	void Subtract_QuatQuat ( );
	void Add_QuatQuat ( );
	void QuatSlerp ( );
	void QuatToRotator ( );
	void QuatFromRotator ( );
	void QuatFromAxisAndAngle ( );
	void QuatFindBetween ( );
	void QuatRotateVector ( );
	void QuatInvert ( );
	void QuatDot ( );
	void QuatProduct ( );
	void MatrixGetAxis ( );
	void MatrixGetOrigin ( );
	void MatrixGetRotator ( );
	void MakeRotationMatrix ( );
	void MakeRotationTranslationMatrix ( );
	void InverseTransformNormal ( );
	void TransformNormal ( );
	void InverseTransformVector ( );
	void TransformVector ( );
	void Multiply_MatrixMatrix ( );
	void NotEqual_NameName ( );
	void EqualEqual_NameName ( );
	void IsA ( );
	void ClassIsChildOf ( );
	void NotEqual_InterfaceInterface ( );
	void EqualEqual_InterfaceInterface ( );
	void NotEqual_ObjectObject ( );
	void EqualEqual_ObjectObject ( );
	void PathName ( );
	void SplitString ( );
	void ParseStringIntoArray ( );
	void JoinArray ( );
	void GetRightMost ( );
	void Split ( );
	void Repl ( );
	void Asc ( );
	void Chr ( );
	void Locs ( );
	void Caps ( );
	void Right ( );
	void Left ( );
	void Mid ( );
	void InStr ( );
	void Len ( );
	void SubtractEqual_StrStr ( );
	void AtEqual_StrStr ( );
	void ConcatEqual_StrStr ( );
	void ComplementEqual_StrStr ( );
	void NotEqual_StrStr ( );
	void EqualEqual_StrStr ( );
	void GreaterEqual_StrStr ( );
	void LessEqual_StrStr ( );
	void Greater_StrStr ( );
	void Less_StrStr ( );
	void At_StrStr ( );
	void Concat_StrStr ( );
	void MakeRotator ( );
	void SClampRotAxis ( );
	void ClampRotAxisFromRange ( );
	void ClampRotAxisFromBase ( );
	void ClampRotAxis ( );
	void RSize ( );
	void RDiff ( );
	void NormalizeRotAxis ( );
	void RInterpTo ( );
	void RTransform ( );
	void RLerp ( );
	void Normalize ( );
	void OrthoRotation ( );
	void RotRand ( );
	void GetRotatorAxis ( );
	void GetUnAxes ( );
	void GetAxes ( );
	void ClockwiseFrom_IntInt ( );
	void SubtractEqual_RotatorRotator ( );
	void AddEqual_RotatorRotator ( );
	void Subtract_RotatorRotator ( );
	void Add_RotatorRotator ( );
	void DivideEqual_RotatorFloat ( );
	void MultiplyEqual_RotatorFloat ( );
	void Divide_RotatorFloat ( );
	void Multiply_FloatRotator ( );
	void Multiply_RotatorFloat ( );
	void NotEqual_RotatorRotator ( );
	void EqualEqual_RotatorRotator ( );
	void InCylinder ( );
	void NoZDot ( );
	void ClampLength ( );
	void VInterpEaseOut ( );
	void VInterpEaseIn ( );
	void VInterpTo ( );
	void IsZero ( );
	void ProjectOnTo ( );
	void MirrorVectorByNormal ( );
	void VRandCone2 ( );
	void VRandCone ( );
	void VRand ( );
	void VLerp ( );
	void Normal2D ( );
	void Normal ( );
	void VSizeSq2D ( );
	void VSizeSq ( );
	void VSize2D ( );
	void VSize ( );
	void SubtractEqual_VectorVector ( );
	void AddEqual_VectorVector ( );
	void DivideEqual_VectorFloat ( );
	void MultiplyEqual_VectorVector ( );
	void MultiplyEqual_VectorFloat ( );
	void Cross_VectorVector ( );
	void Dot_VectorVector ( );
	void NotEqual_VectorVector ( );
	void EqualEqual_VectorVector ( );
	void GreaterGreater_VectorRotator ( );
	void LessLess_VectorRotator ( );
	void Subtract_VectorVector ( );
	void Add_VectorVector ( );
	void Divide_VectorFloat ( );
	void Multiply_VectorVector ( );
	void Multiply_FloatVector ( );
	void Multiply_VectorFloat ( );
	void Subtract_PreVector ( );
	void FInterpConstantTo ( );
	void FInterpTo ( );
	void FPctByRange ( );
	void RandRange ( );
	void FInterpEaseInOut ( );
	void FInterpEaseOut ( );
	void FInterpEaseIn ( );
	void FCubicInterp ( );
	void Divide_ByteByte ( );
	void Multiply_ByteByte ( );
	void NotEqual_ByteByte ( );
	void EqualEqual_ByteByte ( );
	void GreaterEqual_ByteByte ( );
	void LessEqual_ByteByte ( );
	void Greater_ByteByte ( );
	void Less_ByteByte ( );
	void Subtract_ByteByte ( );
	void Add_ByteByte ( );
	void WClamp ( );
	void WMax ( );
	void WMin ( );
	void Subtract_WordWord ( );
	void Add_WordWord ( );
	void Percent_WordWord ( );
	void Divide_WordWord ( );
	void Multiply_WordWord ( );
	void NotEqual_WordWord ( );
	void EqualEqual_WordWord ( );
	void GreaterEqual_WordWord ( );
	void LessEqual_WordWord ( );
	void Greater_WordWord ( );
	void Less_WordWord ( );
	void SubtractSubtract_Word ( );
	void AddAdd_Word ( );
	void SubtractSubtract_PreWord ( );
	void AddAdd_PreWord ( );
	void SubtractEqual_WordWord ( );
	void AddEqual_WordWord ( );
	void DivideEqual_WordWord ( );
	void MultiplyEqual_WordFloat ( );
	void MultiplyEqual_WordWord ( );
	void FCeil ( );
	void FFloor ( );
	void Round ( );
	void Lerp ( );
	void FClamp ( );
	void FMax ( );
	void FMin ( );
	void FRand ( );
	void Square ( );
	void Sqrt ( );
	void Loge ( );
	void Exp ( );
	void Atan2 ( );
	void Atan ( );
	void Tan ( );
	void Acos ( );
	void Cos ( );
	void Asin ( );
	void Sin ( );
	void Abs ( );
	void SubtractEqual_FloatFloat ( );
	void AddEqual_FloatFloat ( );
	void DivideEqual_FloatFloat ( );
	void MultiplyEqual_FloatFloat ( );
	void NotEqual_FloatFloat ( );
	void ComplementEqual_FloatFloat ( );
	void EqualEqual_FloatFloat ( );
	void GreaterEqual_FloatFloat ( );
	void LessEqual_FloatFloat ( );
	void Greater_FloatFloat ( );
	void Less_FloatFloat ( );
	void Subtract_FloatFloat ( );
	void Add_FloatFloat ( );
	void Percent_FloatFloat ( );
	void Divide_FloatFloat ( );
	void Multiply_FloatFloat ( );
	void MultiplyMultiply_FloatFloat ( );
	void Subtract_PreFloat ( );
	void ToHex ( );
	void Clamp ( );
	void Max ( );
	void Min ( );
	void Rand ( );
	void SubtractSubtract_Int ( );
	void AddAdd_Int ( );
	void SubtractSubtract_PreInt ( );
	void AddAdd_PreInt ( );
	void SubtractEqual_IntInt ( );
	void AddEqual_IntInt ( );
	void DivideEqual_IntFloat ( );
	void MultiplyEqual_IntFloat ( );
	void Or_IntInt ( );
	void Xor_IntInt ( );
	void And_IntInt ( );
	void NotEqual_IntInt ( );
	void EqualEqual_IntInt ( );
	void GreaterEqual_IntInt ( );
	void LessEqual_IntInt ( );
	void Greater_IntInt ( );
	void Less_IntInt ( );
	void GreaterGreaterGreater_IntInt ( );
	void GreaterGreater_IntInt ( );
	void LessLess_IntInt ( );
	void Subtract_IntInt ( );
	void Add_IntInt ( );
	void Percent_IntInt ( );
	void Divide_IntInt ( );
	void Multiply_IntInt ( );
	void Subtract_PreInt ( );
	void Complement_PreInt ( );
	void SubtractSubtract_Byte ( );
	void AddAdd_Byte ( );
	void SubtractSubtract_PreByte ( );
	void AddAdd_PreByte ( );
	void SubtractEqual_ByteByte ( );
	void AddEqual_ByteByte ( );
	void DivideEqual_ByteByte ( );
	void MultiplyEqual_ByteFloat ( );
	void MultiplyEqual_ByteByte ( );
	void OrOr_BoolBool ( );
	void XorXor_BoolBool ( );
	void AndAnd_BoolBool ( );
	void NotEqual_BoolBool ( );
	void EqualEqual_BoolBool ( );
	void Not_PreBool ( );

	// Virtual Functions
	virtual void VirtualFunction00 ( );																			// 0x140B29720 (0x00)
	virtual void VirtualFunction01 ( );																			// 0x14012FD00 (0x08)
	virtual void VirtualFunction02 ( );																			// 0x140142760 (0x10)
	virtual void VirtualFunction03 ( );																			// 0x1401AF570 (0x18)
	virtual void VirtualFunction04 ( );																			// 0x140B29720 (0x20)
	virtual void VirtualFunction05 ( );																			// 0x140093E70 (0x28)
	virtual void VirtualFunction06 ( );																			// 0x140093E70 (0x30)
	virtual void VirtualFunction07 ( );																			// 0x1400B92C0 (0x38)
	virtual void VirtualFunction08 ( );																			// 0x1400B9320 (0x40)
	virtual void VirtualFunction09 ( );																			// 0x1401768C0 (0x48)
	virtual void VirtualFunction10 ( );																			// 0x140148410 (0x50)
	virtual void VirtualFunction11 ( );																			// 0x140B29720 (0x58)
	virtual void VirtualFunction12 ( );																			// 0x1400C3930 (0x60)
	virtual void VirtualFunction13 ( );																			// 0x14014A900 (0x68)
	virtual void VirtualFunction14 ( );																			// 0x14017B5B0 (0x70)
	virtual void VirtualFunction15 ( );																			// 0x1400871C0 (0x78)
	virtual void VirtualFunction16 ( );																			// 0x140093E70 (0x80)
	virtual void VirtualFunction17 ( );																			// 0x1400C3740 (0x88)
	virtual void VirtualFunction18 ( );																			// 0x1400AB940 (0x90)
	virtual void VirtualFunction19 ( );																			// 0x14016D7B0 (0x98)
	virtual void VirtualFunction20 ( );																			// 0x1400C3830 (0xA0)
	virtual void VirtualFunction21 ( );																			// 0x1400AB950 (0xA8)
	virtual void VirtualFunction22 ( );																			// 0x1400AB970 (0xB0)
	virtual void VirtualFunction23 ( );																			// 0x1400AB980 (0xB8)
	virtual void VirtualFunction24 ( );																			// 0x140093E70 (0xC0)
	virtual void VirtualFunction25 ( );																			// 0x140093E70 (0xC8)
	virtual void VirtualFunction26 ( );																			// 0x140093E70 (0xD0)
	virtual void VirtualFunction27 ( );																			// 0x1400AB960 (0xD8)
	virtual void VirtualFunction28 ( );																			// 0x1400AB970 (0xE0)
	virtual void VirtualFunction29 ( );																			// 0x1400AB980 (0xE8)
	virtual void VirtualFunction30 ( );																			// 0x1400AB970 (0xF0)
	virtual void VirtualFunction31 ( );																			// 0x1400AB980 (0xF8)
	virtual void VirtualFunction32 ( );																			// 0x1400D69D0 (0x100)
	virtual void VirtualFunction33 ( );																			// 0x140168AF0 (0x108)
	virtual void VirtualFunction34 ( );																			// 0x140168CF0 (0x110)
	virtual void VirtualFunction35 ( );																			// 0x140093E70 (0x118)
	virtual void VirtualFunction36 ( );																			// 0x140189320 (0x120)
	virtual void VirtualFunction37 ( );																			// 0x140169670 (0x128)
	virtual void VirtualFunction38 ( );																			// 0x1400871D0 (0x130)
	virtual void VirtualFunction39 ( );																			// 0x1400871F0 (0x138)
	virtual void VirtualFunction40 ( );																			// 0x140087210 (0x140)
	virtual void VirtualFunction41 ( );																			// 0x1401AF570 (0x148)
	virtual void VirtualFunction42 ( );																			// 0x140089440 (0x150)
	virtual void VirtualFunction43 ( );																			// 0x1401AF570 (0x158)
	virtual void VirtualFunction44 ( );																			// 0x140093E70 (0x160)
	virtual void VirtualFunction45 ( );																			// 0x140093E70 (0x168)
	virtual void VirtualFunction46 ( );																			// 0x140093E70 (0x170)
	virtual void VirtualFunction47 ( );																			// 0x1401AF570 (0x178)
	virtual void VirtualFunction48 ( );																			// 0x14063D9A0 (0x180)
	virtual void VirtualFunction49 ( );																			// 0x1406AD810 (0x188)
	virtual void VirtualFunction50 ( );																			// 0x140176780 (0x190)
	virtual void VirtualFunction51 ( );																			// 0x1400FACC0 (0x198)
	virtual void VirtualFunction52 ( );																			// 0x140093E70 (0x1A0)
	virtual void VirtualFunction53 ( );																			// 0x140093E70 (0x1A8)
	virtual void VirtualFunction54 ( );																			// 0x140093E70 (0x1B0)
	virtual void VirtualFunction55 ( );																			// 0x14012AD50 (0x1B8)
	virtual void VirtualFunction56 ( );																			// 0x1400C3BA0 (0x1C0)
	virtual void VirtualFunction57 ( );																			// 0x1401AF570 (0x1C8)
	virtual void VirtualFunction58 ( );																			// 0x1400AB930 (0x1D0)
	virtual void VirtualFunction59 ( );																			// 0x14013F160 (0x1D8)
	virtual void VirtualFunction60 ( );																			// 0x140174E40 (0x1E0)
	virtual void VirtualFunction61 ( );																			// 0x140129610 (0x1E8)
	virtual void VirtualFunction62 ( );																			// 0x1401AF570 (0x1F0)
	virtual void VirtualFunction63 ( );																			// 0x140084530 (0x1F8)
	virtual void VirtualFunction64 ( );																			// 0x140084560 (0x200)
	virtual void VirtualFunction65 ( );																			// 0x140176040 (0x208)
	virtual void VirtualFunction66 ( );																			// 0x1400ABAC0 (0x210)
	virtual void VirtualFunction67 ( );																			// 0x140122C50 (0x218)
	virtual void ProcessEvent ( class UFunction* pFunction, void* pParms, void* pResult = NULL );				// 0x14012ADD0 (0x220)
	virtual void VirtualFunction69 ( );																			// 0x14013C7E0 (0x228)
	virtual void VirtualFunction70 ( );																			// 0x140093E70 (0x230)
	virtual void VirtualFunction71 ( );																			// 0x1401AF570 (0x238)
	virtual void VirtualFunction72 ( );																			// 0x1400D6CB0 (0x240)
	virtual void VirtualFunction73 ( );																			// 0x1400B2D30 (0x248)
	virtual void VirtualFunction74 ( );																			// 0x140146230 (0x250)
	virtual void VirtualFunction75 ( );																			// 0x14015D060 (0x258)
	virtual void VirtualFunction76 ( );																			// 0x1401AF570 (0x260)
	virtual void VirtualFunction77 ( );																			// 0x140099A20 (0x268)
	virtual void VirtualFunction78 ( );																			// 0x140B29720 (0x270)
	virtual void VirtualFunction79 ( );																			// 0x1401450E0 (0x278)
	virtual void VirtualFunction80 ( );																			// 0x14012A830 (0x280)
	virtual void VirtualFunction81 ( );																			// 0x14014E6F0 (0x288)
	virtual void VirtualFunction82 ( );																			// 0x140099A40 (0x290)
	virtual void VirtualFunction83 ( );																			// 0x1400E2230 (0x298)
	virtual void VirtualFunction84 ( );																			// 0x14017B870 (0x2A0)
	virtual void VirtualFunction85 ( );																			// 0x14010A560 (0x2A8)
	virtual void VirtualFunction86 ( );																			// 0x219930522 (0x2B0)
	virtual void VirtualFunction87 ( );																			// 0x018D4DCC (0x2B8)
	virtual void VirtualFunction88 ( );																			// 0x500000000 (0x2C0)
	virtual void VirtualFunction89 ( );																			// 0xA0018D4DDC (0x2C8)
	virtual void VirtualFunction90 ( );																			// 0x100000000 (0x2D0)
	virtual void VirtualFunction91 ( );																			// 0x00000000 (0x2D8)
	virtual void VirtualFunction92 ( );																			// 0x919930522 (0x2E0)
	virtual void VirtualFunction93 ( );																			// 0x018D4E1C (0x2E8)
	virtual void VirtualFunction94 ( );																			// 0xD00000000 (0x2F0)
	virtual void VirtualFunction95 ( );																			// 0x20018D4E64 (0x2F8)
	virtual void VirtualFunction96 ( );																			// 0x100000000 (0x300)
	virtual void VirtualFunction97 ( );																			// 0x00000000 (0x308)
	virtual void VirtualFunction98 ( );																			// 0x140B29720 (0x310)
	virtual void VirtualFunction99 ( );																			// 0x14012DBD0 (0x318)
	virtual void VirtualFunction100 ( );																			// 0x1401429E0 (0x320)
	virtual void VirtualFunction101 ( );																			// 0x1401AF570 (0x328)
	virtual void VirtualFunction102 ( );																			// 0x140B29720 (0x330)
	virtual void VirtualFunction103 ( );																			// 0x140093E70 (0x338)
	virtual void VirtualFunction104 ( );																			// 0x140093E70 (0x340)
	virtual void VirtualFunction105 ( );																			// 0x1400B92C0 (0x348)
	virtual void VirtualFunction106 ( );																			// 0x1400B9320 (0x350)
	virtual void VirtualFunction107 ( );																			// 0x1401765E0 (0x358)
	virtual void VirtualFunction108 ( );																			// 0x140148410 (0x360)
	virtual void VirtualFunction109 ( );																			// 0x140B29720 (0x368)
	virtual void VirtualFunction110 ( );																			// 0x1400C3930 (0x370)
	virtual void VirtualFunction111 ( );																			// 0x140148510 (0x378)
	virtual void VirtualFunction112 ( );																			// 0x14017D250 (0x380)
	virtual void VirtualFunction113 ( );																			// 0x1400871C0 (0x388)
	virtual void VirtualFunction114 ( );																			// 0x140093E70 (0x390)
	virtual void VirtualFunction115 ( );																			// 0x1400C3740 (0x398)
	virtual void VirtualFunction116 ( );																			// 0x1400AB940 (0x3A0)
	virtual void VirtualFunction117 ( );																			// 0x14016D7B0 (0x3A8)
	virtual void VirtualFunction118 ( );																			// 0x1400C3830 (0x3B0)
	virtual void VirtualFunction119 ( );																			// 0x1400AB950 (0x3B8)
	virtual void VirtualFunction120 ( );																			// 0x1400AB970 (0x3C0)
	virtual void VirtualFunction121 ( );																			// 0x1400AB980 (0x3C8)
	virtual void VirtualFunction122 ( );																			// 0x140093E70 (0x3D0)
	virtual void VirtualFunction123 ( );																			// 0x140093E70 (0x3D8)
	virtual void VirtualFunction124 ( );																			// 0x140093E70 (0x3E0)
	virtual void VirtualFunction125 ( );																			// 0x1400AB960 (0x3E8)
	virtual void VirtualFunction126 ( );																			// 0x1400AB970 (0x3F0)
	virtual void VirtualFunction127 ( );																			// 0x1400AB980 (0x3F8)
	virtual void VirtualFunction128 ( );																			// 0x1400AB970 (0x400)
	virtual void VirtualFunction129 ( );																			// 0x1400AB980 (0x408)
	virtual void VirtualFunction130 ( );																			// 0x1400D69D0 (0x410)
	virtual void VirtualFunction131 ( );																			// 0x140168AF0 (0x418)
	virtual void VirtualFunction132 ( );																			// 0x140168CF0 (0x420)
	virtual void VirtualFunction133 ( );																			// 0x140093E70 (0x428)
	virtual void VirtualFunction134 ( );																			// 0x140187F80 (0x430)
	virtual void VirtualFunction135 ( );																			// 0x140169670 (0x438)
	virtual void VirtualFunction136 ( );																			// 0x1400871D0 (0x440)
	virtual void VirtualFunction137 ( );																			// 0x1400871F0 (0x448)
	virtual void VirtualFunction138 ( );																			// 0x140087210 (0x450)
	virtual void VirtualFunction139 ( );																			// 0x1401AF570 (0x458)
	virtual void VirtualFunction140 ( );																			// 0x140089440 (0x460)
	virtual void VirtualFunction141 ( );																			// 0x1401AF570 (0x468)
	virtual void VirtualFunction142 ( );																			// 0x140093E70 (0x470)
	virtual void VirtualFunction143 ( );																			// 0x140093E70 (0x478)
	virtual void VirtualFunction144 ( );																			// 0x140093E70 (0x480)
	virtual void VirtualFunction145 ( );																			// 0x1401AF570 (0x488)
	virtual void VirtualFunction146 ( );																			// 0x14063D9A0 (0x490)
	virtual void VirtualFunction147 ( );																			// 0x1406AD810 (0x498)
	virtual void VirtualFunction148 ( );																			// 0x140175A50 (0x4A0)
	virtual void VirtualFunction149 ( );																			// 0x140135C50 (0x4A8)
	virtual void VirtualFunction150 ( );																			// 0x140093E70 (0x4B0)
	virtual void VirtualFunction151 ( );																			// 0x140093E70 (0x4B8)
	virtual void VirtualFunction152 ( );																			// 0x140093E70 (0x4C0)
	virtual void VirtualFunction153 ( );																			// 0x14063C2C0 (0x4C8)
	virtual void VirtualFunction154 ( );																			// 0x1400C3BA0 (0x4D0)
	virtual void VirtualFunction155 ( );																			// 0x1401AF570 (0x4D8)
	virtual void VirtualFunction156 ( );																			// 0x1400AB930 (0x4E0)
	virtual void VirtualFunction157 ( );																			// 0x14013F160 (0x4E8)
	virtual void VirtualFunction158 ( );																			// 0x140174E40 (0x4F0)
	virtual void VirtualFunction159 ( );																			// 0x140129610 (0x4F8)
	virtual void VirtualFunction160 ( );																			// 0x1401AF570 (0x500)
	virtual void VirtualFunction161 ( );																			// 0x140084530 (0x508)
	virtual void VirtualFunction162 ( );																			// 0x140084560 (0x510)
	virtual void VirtualFunction163 ( );																			// 0x140176040 (0x518)
	virtual void VirtualFunction164 ( );																			// 0x1400ABAC0 (0x520)
	virtual void VirtualFunction165 ( );																			// 0x140093E70 (0x528)
	virtual void VirtualFunction166 ( );																			// 0x14012ADD0 (0x530)
	virtual void VirtualFunction167 ( );																			// 0x14013C7E0 (0x538)
	virtual void VirtualFunction168 ( );																			// 0x140093E70 (0x540)
	virtual void VirtualFunction169 ( );																			// 0x1401AF570 (0x548)
	virtual void VirtualFunction170 ( );																			// 0x1400D6CB0 (0x550)
	virtual void VirtualFunction171 ( );																			// 0x1400B2D30 (0x558)
	virtual void VirtualFunction172 ( );																			// 0x140146230 (0x560)
	virtual void VirtualFunction173 ( );																			// 0x14015D060 (0x568)
	virtual void VirtualFunction174 ( );																			// 0x1401AF570 (0x570)
	virtual void VirtualFunction175 ( );																			// 0x1400E2210 (0x578)
	virtual void VirtualFunction176 ( );																			// 0x140B29720 (0x580)
	virtual void VirtualFunction177 ( );																			// 0x140093E70 (0x588)
	virtual void VirtualFunction178 ( );																			// 0x14012B400 (0x590)
	virtual void VirtualFunction179 ( );																			// 0x14012B450 (0x598)
	virtual void VirtualFunction180 ( );																			// 0x140093E70 (0x5A0)
	virtual void VirtualFunction181 ( );																			// 0x14012B4A0 (0x5A8)
	virtual void VirtualFunction182 ( );																			// 0x14012B4D0 (0x5B0)
	virtual void VirtualFunction183 ( );																			// 0x1400AC120 (0x5B8)
	virtual void VirtualFunction184 ( );																			// 0x14012B500 (0x5C0)
	virtual void VirtualFunction185 ( );																			// 0x14012B530 (0x5C8)
	virtual void VirtualFunction186 ( );																			// 0x14012B560 (0x5D0)
	virtual void VirtualFunction187 ( );																			// 0x14012B590 (0x5D8)
	virtual void VirtualFunction188 ( );																			// 0x1400AC070 (0x5E0)
	virtual void VirtualFunction189 ( );																			// 0x1400AC090 (0x5E8)
	virtual void VirtualFunction190 ( );																			// 0x14012B5C0 (0x5F0)
	virtual void VirtualFunction191 ( );																			// 0x14012B5F0 (0x5F8)
	virtual void VirtualFunction192 ( );																			// 0x140093E70 (0x600)
	virtual void VirtualFunction193 ( );																			// 0x1401102A0 (0x608)
	virtual void VirtualFunction194 ( );																			// 0x1400AC150 (0x610)
	virtual void VirtualFunction195 ( );																			// 0x1401AF570 (0x618)
	virtual void VirtualFunction196 ( );																			// 0x140093E70 (0x620)
	virtual void VirtualFunction197 ( );																			// 0x140B29720 (0x628)
	virtual void VirtualFunction198 ( );																			// 0x1401AF570 (0x630)
	virtual void VirtualFunction199 ( );																			// 0x1401AF570 (0x638)
	virtual void VirtualFunction200 ( );																			// 0x140093E70 (0x640)
	virtual void VirtualFunction201 ( );																			// 0x140093E70 (0x648)
	virtual void VirtualFunction202 ( );																			// 0x14012B3E0 (0x650)
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
	struct FPointer                                    VfTable_FExec;                                    		// 0x0060 (0x0008) [0x0000000000000000]              

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
	int                                                StaleCacheDays;                                   		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                MaxStaleCacheSize;                                		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                MaxOverallCacheSize;                              		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                PackageSizeSoftLimit;                             		// 0x0074 (0x0004) [0x0000000000000000]              
	float                                              AsyncIOBandwidthLimit;                            		// 0x0078 (0x0004) [0x0000000000000000]              
	struct FString                                     SavePath;                                         		// 0x007C (0x0010) [0x0000000000000000]              
	struct FString                                     CachePath;                                        		// 0x008C (0x0010) [0x0000000000000000]              
	struct FString                                     CacheExt;                                         		// 0x009C (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           Paths;                                            		// 0x00AC (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           SeekFreePCPaths;                                  		// 0x00BC (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           ScriptPaths;                                      		// 0x00CC (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           FRScriptPaths;                                    		// 0x00DC (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           CutdownPaths;                                     		// 0x00EC (0x0010) [0x0000000000000000]              
	TArray< struct FName >                             Suppress;                                         		// 0x00FC (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           Extensions;                                       		// 0x010C (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           SeekFreePCExtensions;                             		// 0x011C (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           LocalizationPaths;                                		// 0x012C (0x0010) [0x0000000000000000]              
	struct FString                                     TextureFileCacheExtension;                        		// 0x013C (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           KorScriptPaths;                                   		// 0x014C (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           ForceServerSideOnlyPaths;                         		// 0x015C (0x0010) [0x0000000000000000]              

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
	struct FString                                     Description;                                      		// 0x0070 (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           Formats;                                          		// 0x0080 (0x0010) [0x0000000000000000]              
	unsigned long                                      bCreateNew : 1;                                   		// 0x0090 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bEditAfterNew : 1;                                		// 0x0090 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bEditorImport : 1;                                		// 0x0090 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bText : 1;                                        		// 0x0090 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                AutoPriority;                                     		// 0x0094 (0x0004) [0x0000000000000000]              
	TArray< struct FString >                           ValidGameNames;                                   		// 0x0098 (0x0010) [0x0000000000000000]              

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
	TArray< struct FString >                           FormatExtension;                                  		// 0x0068 (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           FormatDescription;                                		// 0x0078 (0x0010) [0x0000000000000000]              
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
	class UClass*                                      TemplateOwnerClass;                               		// 0x0060 (0x0008) [0x0000000000000000]              
	struct FName                                       TemplateName;                                     		// 0x0068 (0x0008) [0x0000000000000000]              

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
	struct FPointer                                    VfTable_FCurveEdInterface;                        		// 0x0070 (0x0008) [0x0000000000000000]              
	unsigned long                                      bCanBeBaked : 1;                                  		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
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

	void GetVectorValue ( );
};

UClass* UDistributionVector::pClassPointer = NULL;

// Class Core.DistributionFloat
// 0x000C (0x007C - 0x0070)
class UDistributionFloat : public UComponent
{
public:
	struct FPointer                                    VfTable_FCurveEdInterface;                        		// 0x0070 (0x0008) [0x0000000000000000]              
	unsigned long                                      bCanBeBaked : 1;                                  		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
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

	void GetFloatValue ( );
};

UClass* UDistributionFloat::pClassPointer = NULL;

// Class Core.Commandlet
// 0x0054 (0x00B4 - 0x0060)
class UCommandlet : public UObject
{
public:
	struct FString                                     HelpDescription;                                  		// 0x0060 (0x0010) [0x0000000000000000]              
	struct FString                                     HelpUsage;                                        		// 0x0070 (0x0010) [0x0000000000000000]              
	struct FString                                     HelpWebLink;                                      		// 0x0080 (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           HelpParamNames;                                   		// 0x0090 (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           HelpParamDescriptions;                            		// 0x00A0 (0x0010) [0x0000000000000000]              
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

	void eventMain ( );
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

	void eventMain ( );
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
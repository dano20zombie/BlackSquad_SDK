/*
#############################################################################################
# Black Squad (01.02.2019) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Grip_classes.h
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

// Enum Grip.GripAFActionHandle.GripAFActionStatus
/*enum GripAFActionStatus
{
	AF_AS_DONE                                         = 0,
	AF_AS_FAILURE                                      = 1,
	AF_AS_INPROGRESS                                   = 2,
	AF_AS_QUEUED                                       = 3,
	AF_AS_MAX                                          = 4
};*/

// Enum Grip.GripBTObject.BTNodeFamily
/*enum BTNodeFamily
{
	NT_BEHAVIOR                                        = 0,
	NT_CONTROL                                         = 1,
	NT_CONDITION                                       = 2,
	NT_COMMENT                                         = 3,
	NT_MAX                                             = 4
};*/

// Enum Grip.GripBTObject.BTNodeExpandSymbol
/*enum BTNodeExpandSymbol
{
	NS_NO_SIGN                                         = 0,
	NS_PLUS                                            = 1,
	NS_MINUS                                           = 2,
	NS_MAX                                             = 3
};*/

// Enum Grip.GripBTObject.BTMenuType
/*enum BTMenuType
{
	MT_BEHAVIOR                                        = 0,
	MT_CONDITION                                       = 1,
	MT_CONTROL                                         = 2,
	MT_TEST                                            = 3,
	MT_ROOT                                            = 4,
	MT_HIDDEN                                          = 5,
	MT_NUMOF                                           = 6,
	MT_COMMENT                                         = 7,
	MT_MAX                                             = 8
};*/

// Enum Grip.GripBTNode.BTEvaluationResult
/*enum BTEvaluationResult
{
	EVR_READY                                          = 0,
	EVR_NOT_READY                                      = 1,
	EVR_OVER                                           = 2,
	EVR_MAX                                            = 3
};*/

// Enum Grip.GripBTNode.BTExecutionResult
/*enum BTExecutionResult
{
	ER_SUCCESS                                         = 0,
	ER_FAILURE                                         = 1,
	ER_INPROGRESS                                      = 2,
	ER_INTERRUPTING                                    = 3,
	ER_SUCCESSFULLY_INTERRUPTED                        = 4,
	ER_READY                                           = 5,
	ER_NOT_READY                                       = 6,
	ER_MAX                                             = 7
};*/

// Enum Grip.GripBTNode.BTConditionOperator
/*enum BTConditionOperator
{
	LESS_THAN                                          = 0,
	LESS_THAN_OR_EQUAL_TO                              = 1,
	EQUAL_TO                                           = 2,
	NOT_EQUAL_TO                                       = 3,
	GREATER_THAN                                       = 4,
	GREATER_THAN_OR_EQUAL_TO                           = 5,
	BTConditionOperator_MAX                            = 6
};*/

// Enum Grip.GripBTEventCondition.EventLifetime
/*enum EventLifetime
{
	EVENTLIFETIME_TRANSIENT                            = 0,
	EVENTLIFETIME_CONSUMABLE                           = 1,
	EVENTLIFETIME_PERSISTENT                           = 2,
	EVENTLIFETIME_MAX                                  = 3
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class Grip.GripActionFramework
// 0x0008 (0x0068 - 0x0060)
class UGripActionFramework : public UObject
{
public:
	struct FPointer                                    NativeFramework;                                  		// 0x0060 (0x0008) [0x0000000000001000]              ( CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1396 ];

		return pClassPointer;
	};

	unsigned char GetStatus ( class UGripAFActionHandle* Handle );
	bool Execute ( class UGripAFActionHandle* Action );
};

UClass* UGripActionFramework::pClassPointer = NULL;

// Class Grip.GripAFActionHandle
// 0x0004 (0x0064 - 0x0060)
class UGripAFActionHandle : public UObject
{
public:
	int                                                Handle;                                           		// 0x0060 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1397 ];

		return pClassPointer;
	};

};

UClass* UGripAFActionHandle::pClassPointer = NULL;

// Class Grip.GripAIManagerHolder
// 0x0008 (0x024C - 0x0244)
class AGripAIManagerHolder : public AActor
{
public:
	struct FPointer                                    AIManager;                                        		// 0x0244 (0x0008) [0x0000000000001000]              ( CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1398 ];

		return pClassPointer;
	};

};

UClass* AGripAIManagerHolder::pClassPointer = NULL;

// Class Grip.GripBlackboard
// 0x0008 (0x0068 - 0x0060)
class UGripBlackboard : public UObject
{
public:
	struct FPointer                                    BB;                                               		// 0x0060 (0x0008) [0x0000000000001000]              ( CPF_Native )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1399 ];

		return pClassPointer;
	};

	void FlagStatesAsUsed ( );
	bool ContainState ( struct FString StateName );
};

UClass* UGripBlackboard::pClassPointer = NULL;

// Class Grip.GripBTInterface
// 0x0018 (0x0078 - 0x0060)
class UGripBTInterface : public UObject
{
public:
	float                                              DeltaTime;                                        		// 0x0060 (0x0004) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0064 (0x0004) [0x0000000000000000]              
	class UGripBlackboard*                             Blackboard;                                       		// 0x0068 (0x0008) [0x0000000000000000]              
	class UGripActionFramework*                        ActionFramework;                                  		// 0x0070 (0x0008) [0x0000000004400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1400 ];

		return pClassPointer;
	};

};

UClass* UGripBTInterface::pClassPointer = NULL;

// Class Grip.GripBTObject
// 0x0008 (0x0068 - 0x0060)
class UGripBTObject : public UObject
{
public:
	int                                                dummyVarJustSoTheClassDoesNotStartWithAnEnum;     		// 0x0060 (0x0004) [0x0000000000000000]              
	unsigned long                                      childrenCollapsed : 1;                            		// 0x0064 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1401 ];

		return pClassPointer;
	};

};

UClass* UGripBTObject::pClassPointer = NULL;

// Class Grip.GripBTNode
// 0x0054 (0x00BC - 0x0068)
class UGripBTNode : public UGripBTObject
{
public:
	class UGripBTNode*                                 ParentNode;                                       		// 0x0068 (0x0008) [0x0000000000000000]              
	TArray< struct FNodeChild >                        Children;                                         		// 0x0070 (0x0010) [0x0000000004400048]              ( CPF_ExportObject | CPF_EditConstArray | CPF_NeedCtorLink | CPF_EditInline )
	float                                              RandomWeight;                                     		// 0x0080 (0x0004) [0x0000000000000000]              
	struct FName                                       NodeName;                                         		// 0x0084 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     NodeDescription;                                  		// 0x008C (0x0010) [0x0000000000420001]              ( CPF_Edit | CPF_EditConst | CPF_NeedCtorLink )
	struct FString                                     Comment;                                          		// 0x009C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       DefaultTitle;                                     		// 0x00AC (0x0008) [0x0000000000000000]              
	unsigned char                                      LastExecutionResult;                              		// 0x00B4 (0x0001) [0x0000000000000000]              
	unsigned char                                      LastEvaluationResult;                             		// 0x00B5 (0x0001) [0x0000000000000000]              
	int                                                DummyVarJustSoBaseClassDontEndWithAByteToAvoidCompilerWarning;		// 0x00B8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1402 ];

		return pClassPointer;
	};

	unsigned char GetFamily ( );
};

UClass* UGripBTNode::pClassPointer = NULL;

// Class Grip.GripBTAnd
// 0x0000 (0x00BC - 0x00BC)
class UGripBTAnd : public UGripBTNode
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1403 ];

		return pClassPointer;
	};

	unsigned char GetFamily ( );
};

UClass* UGripBTAnd::pClassPointer = NULL;

// Class Grip.GripBTBooleanCondition
// 0x0004 (0x00C0 - 0x00BC)
class UGripBTBooleanCondition : public UGripBTNode
{
public:
	unsigned long                                      Negate : 1;                                       		// 0x00BC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1404 ];

		return pClassPointer;
	};

	unsigned char GetFamily ( );
};

UClass* UGripBTBooleanCondition::pClassPointer = NULL;

// Class Grip.GripBTDummyCondition
// 0x0004 (0x00C4 - 0x00C0)
class UGripBTDummyCondition : public UGripBTBooleanCondition
{
public:
	unsigned long                                      PreConditionResult : 1;                           		// 0x00C0 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1405 ];

		return pClassPointer;
	};

};

UClass* UGripBTDummyCondition::pClassPointer = NULL;

// Class Grip.GripBTEventCondition
// 0x0014 (0x00D4 - 0x00C0)
class UGripBTEventCondition : public UGripBTBooleanCondition
{
public:
	unsigned char                                      Lifetime;                                         		// 0x00C0 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     EventType;                                        		// 0x00C4 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1406 ];

		return pClassPointer;
	};

};

UClass* UGripBTEventCondition::pClassPointer = NULL;

// Class Grip.GripBTStateCondition
// 0x0010 (0x00D0 - 0x00C0)
class UGripBTStateCondition : public UGripBTBooleanCondition
{
public:
	struct FString                                     StateName;                                        		// 0x00C0 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1407 ];

		return pClassPointer;
	};

};

UClass* UGripBTStateCondition::pClassPointer = NULL;

// Class Grip.GripBTClearState
// 0x0010 (0x00CC - 0x00BC)
class UGripBTClearState : public UGripBTNode
{
public:
	struct FString                                     StateName;                                        		// 0x00BC (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1408 ];

		return pClassPointer;
	};

};

UClass* UGripBTClearState::pClassPointer = NULL;

// Class Grip.GripBTComment
// 0x0018 (0x00D4 - 0x00BC)
class UGripBTComment : public UGripBTNode
{
public:
	unsigned long                                      bMoveNodesInBox : 1;                              		// 0x00BC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bWrapped : 1;                                     		// 0x00BC (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bLimitFontSize : 1;                               		// 0x00BC (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bDrawBox : 1;                                     		// 0x00BC (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bFilled : 1;                                      		// 0x00BC (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	int                                                SizeX;                                            		// 0x00C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SizeY;                                            		// 0x00C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                BorderWidth;                                      		// 0x00C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      BorderColor;                                      		// 0x00CC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FColor                                      FillColor;                                        		// 0x00D0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1409 ];

		return pClassPointer;
	};

	unsigned char GetFamily ( );
};

UClass* UGripBTComment::pClassPointer = NULL;

// Class Grip.GripBTCooldown
// 0x0008 (0x00C4 - 0x00BC)
class UGripBTCooldown : public UGripBTNode
{
public:
	float                                              MinCooldown;                                      		// 0x00BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxCooldown;                                      		// 0x00C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1410 ];

		return pClassPointer;
	};

	unsigned char GetFamily ( );
};

UClass* UGripBTCooldown::pClassPointer = NULL;

// Class Grip.GripBTDummyAction
// 0x000C (0x00C8 - 0x00BC)
class UGripBTDummyAction : public UGripBTNode
{
public:
	unsigned char                                      NextExecutionResult;                              		// 0x00BC (0x0001) [0x0000000000000000]              
	unsigned long                                      NextPreConditionResult : 1;                       		// 0x00C0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Interruptible : 1;                                		// 0x00C0 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	float                                              Duration;                                         		// 0x00C4 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1411 ];

		return pClassPointer;
	};

};

UClass* UGripBTDummyAction::pClassPointer = NULL;

// Class Grip.GripBTDynamicPriority
// 0x0000 (0x00BC - 0x00BC)
class UGripBTDynamicPriority : public UGripBTNode
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1412 ];

		return pClassPointer;
	};

	unsigned char GetFamily ( );
};

UClass* UGripBTDynamicPriority::pClassPointer = NULL;

// Class Grip.GripBTFloatCondition
// 0x000C (0x00C8 - 0x00BC)
class UGripBTFloatCondition : public UGripBTNode
{
public:
	unsigned char                                      Operator;                                         		// 0x00BC (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              Threshold;                                        		// 0x00C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Value;                                            		// 0x00C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1413 ];

		return pClassPointer;
	};

	unsigned char GetFamily ( );
};

UClass* UGripBTFloatCondition::pClassPointer = NULL;

// Class Grip.GripBTLoop
// 0x0004 (0x00C0 - 0x00BC)
class UGripBTLoop : public UGripBTNode
{
public:
	int                                                TimesToLoop;                                      		// 0x00BC (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1414 ];

		return pClassPointer;
	};

	unsigned char GetFamily ( );
	void SetIteration ( int iter );
};

UClass* UGripBTLoop::pClassPointer = NULL;

// Class Grip.GripBTNonInterruptibleSequence
// 0x0000 (0x00BC - 0x00BC)
class UGripBTNonInterruptibleSequence : public UGripBTNode
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1415 ];

		return pClassPointer;
	};

	unsigned char GetFamily ( );
};

UClass* UGripBTNonInterruptibleSequence::pClassPointer = NULL;

// Class Grip.GripBTNumericCondition
// 0x000C (0x00C8 - 0x00BC)
class UGripBTNumericCondition : public UGripBTNode
{
public:
	unsigned char                                      Operator;                                         		// 0x00BC (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                Threshold;                                        		// 0x00C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Value;                                            		// 0x00C4 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1416 ];

		return pClassPointer;
	};

	unsigned char GetFamily ( );
};

UClass* UGripBTNumericCondition::pClassPointer = NULL;

// Class Grip.GripBTCutoff
// 0x0004 (0x00CC - 0x00C8)
class UGripBTCutoff : public UGripBTNumericCondition
{
public:
	int                                                Cutoff;                                           		// 0x00C8 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1417 ];

		return pClassPointer;
	};

	unsigned char GetFamily ( );
	void SetCutoff ( int newCutoff );
};

UClass* UGripBTCutoff::pClassPointer = NULL;

// Class Grip.GripBTOr
// 0x0000 (0x00BC - 0x00BC)
class UGripBTOr : public UGripBTNode
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1418 ];

		return pClassPointer;
	};

	unsigned char GetFamily ( );
};

UClass* UGripBTOr::pClassPointer = NULL;

// Class Grip.GripBTParallel
// 0x0000 (0x00BC - 0x00BC)
class UGripBTParallel : public UGripBTNode
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1419 ];

		return pClassPointer;
	};

	unsigned char GetFamily ( );
};

UClass* UGripBTParallel::pClassPointer = NULL;

// Class Grip.GripBTPriority
// 0x0000 (0x00BC - 0x00BC)
class UGripBTPriority : public UGripBTNode
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1420 ];

		return pClassPointer;
	};

	unsigned char GetFamily ( );
};

UClass* UGripBTPriority::pClassPointer = NULL;

// Class Grip.GripBTTree
// 0x0014 (0x00D0 - 0x00BC)
class UGripBTTree : public UGripBTPriority
{
public:
	TArray< class UGripBTNode* >                       AllTreeNodes;                                     		// 0x00BC (0x0010) [0x0000000004400048]              ( CPF_ExportObject | CPF_EditConstArray | CPF_NeedCtorLink | CPF_EditInline )
	unsigned long                                      bBeingEdited : 1;                                 		// 0x00CC (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1421 ];

		return pClassPointer;
	};

};

UClass* UGripBTTree::pClassPointer = NULL;

// Class Grip.GripBTPushForFinishOverride
// 0x0000 (0x00BC - 0x00BC)
class UGripBTPushForFinishOverride : public UGripBTNode
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1422 ];

		return pClassPointer;
	};

	unsigned char GetFamily ( );
};

UClass* UGripBTPushForFinishOverride::pClassPointer = NULL;

// Class Grip.GripBTRaiseEvent
// 0x0010 (0x00CC - 0x00BC)
class UGripBTRaiseEvent : public UGripBTNode
{
public:
	struct FString                                     EventType;                                        		// 0x00BC (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1423 ];

		return pClassPointer;
	};

};

UClass* UGripBTRaiseEvent::pClassPointer = NULL;

// Class Grip.GripBTRandom
// 0x0004 (0x00C0 - 0x00BC)
class UGripBTRandom : public UGripBTNode
{
public:
	unsigned long                                      RunAll : 1;                                       		// 0x00BC (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1424 ];

		return pClassPointer;
	};

	unsigned char GetFamily ( );
};

UClass* UGripBTRandom::pClassPointer = NULL;

// Class Grip.GripBTScriptNode
// 0x0010 (0x00CC - 0x00BC)
class UGripBTScriptNode : public UGripBTNode
{
public:
	class UObject*                                     Owner;                                            		// 0x00BC (0x0008) [0x0000000000000000]              
	unsigned long                                      ConditionCache : 1;                               		// 0x00C4 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                NodeTitleOverride;                                		// 0x00C8 (0x0004) [0x0000000000002000]              ( CPF_Transient )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1425 ];

		return pClassPointer;
	};

	unsigned char eventExecutePass ( class UGripBTInterface* BTInterface, unsigned long FirstExecution, unsigned long PushToFinish );
	struct FString eventGetNodeTitle ( );
	bool ComputeCondition ( class UGripBTInterface* BTInterface );
	void FlagUsedBBMembers ( class UGripBlackboard* Blackboard );
	void Initialize ( );
};

UClass* UGripBTScriptNode::pClassPointer = NULL;

// Class Grip.GripBTScriptBehavior
// 0x0000 (0x00CC - 0x00CC)
class UGripBTScriptBehavior : public UGripBTScriptNode
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1426 ];

		return pClassPointer;
	};

	unsigned char eventExecutePass ( class UGripBTInterface* BTInterface, unsigned long FirstExecution, unsigned long PushToFinish );
	void ExecutePost ( class UGripBTInterface* BTInterface );
	unsigned char Execute ( class UGripBTInterface* BTInterface, unsigned long PushToFinish );
	bool ExecutePre ( class UGripBTInterface* BTInterface );
	bool ComputeCondition ( class UGripBTInterface* BTInterface );
};

UClass* UGripBTScriptBehavior::pClassPointer = NULL;

// Class Grip.GripBTScriptCondition
// 0x0000 (0x00CC - 0x00CC)
class UGripBTScriptCondition : public UGripBTScriptNode
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1427 ];

		return pClassPointer;
	};

	unsigned char GetFamily ( );
	bool ComputeCondition ( class UGripBTInterface* BTInterface );
};

UClass* UGripBTScriptCondition::pClassPointer = NULL;

// Class Grip.GripBTSequence
// 0x0000 (0x00BC - 0x00BC)
class UGripBTSequence : public UGripBTNode
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1428 ];

		return pClassPointer;
	};

	unsigned char GetFamily ( );
};

UClass* UGripBTSequence::pClassPointer = NULL;

// Class Grip.GripBTSequenceOr
// 0x0000 (0x00BC - 0x00BC)
class UGripBTSequenceOr : public UGripBTNode
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1429 ];

		return pClassPointer;
	};

	unsigned char GetFamily ( );
};

UClass* UGripBTSequenceOr::pClassPointer = NULL;

// Class Grip.GripBTSetState
// 0x0010 (0x00CC - 0x00BC)
class UGripBTSetState : public UGripBTNode
{
public:
	struct FString                                     StateName;                                        		// 0x00BC (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1430 ];

		return pClassPointer;
	};

};

UClass* UGripBTSetState::pClassPointer = NULL;

// Class Grip.GripBTTimer
// 0x0008 (0x00C4 - 0x00BC)
class UGripBTTimer : public UGripBTNode
{
public:
	float                                              MinDuration;                                      		// 0x00BC (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxDuration;                                      		// 0x00C0 (0x0004) [0x0000000000000001]              ( CPF_Edit )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1431 ];

		return pClassPointer;
	};

	unsigned char GetFamily ( );
};

UClass* UGripBTTimer::pClassPointer = NULL;

// Class Grip.GripBTScriptNodeCache
// 0x0010 (0x0070 - 0x0060)
class UGripBTScriptNodeCache : public UObject
{
public:
	TArray< class UGripBTScriptNode* >                 ScriptNodes;                                      		// 0x0060 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1432 ];

		return pClassPointer;
	};

	void eventCacheAllConditions ( class UGripBTInterface* BTInterface );
	void eventSurveyUsedBBMembers ( class UGripBlackboard* Blackboard );
	void eventInitializeAllNodes ( );
};

UClass* UGripBTScriptNodeCache::pClassPointer = NULL;

// Class Grip.GripCheatManager
// 0x0000 (0x029C - 0x029C)
class AGripCheatManager : public AGameCheatManager
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1433 ];

		return pClassPointer;
	};

	void GripDebugViewNPCFromBrainID ( int BrainID );
	void StopGripLogging ( );
	void StartGripLogging ( );
	void StopGripDebug ( );
	void StartGripDebug ( );
	void CCSDebugOptions ( struct FString infoType );
	void DESDebugOptions ( struct FString infoType );
	void ShowDESInfo ( struct FString infoType );
};

UClass* AGripCheatManager::pClassPointer = NULL;

// Class Grip.GripDebug
// 0x0000 (0x0060 - 0x0060)
class UGripDebug : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1434 ];

		return pClassPointer;
	};

	void GripDebugViewNPCFromBrainID ( int BrainID );
	bool GetLocationAndRotationFromBrainID ( int BrainID, struct FVector* ActorLocation, struct FVector* ActorRotation );
	void NextBrainDebugRenderType ( );
	void ToggleDisableNPC ( );
	void SelectDebugPawn ( );
	void GripStopAdvanceSim ( );
	void GripAdvanceSim ( );
	void StopGripLogging ( );
	void StartGripLogging ( );
	void StopGripDebug ( );
	void StartGripDebug ( );
	bool IsDebugEnabled ( );
	void CCSDebugOptions ( struct FString Options );
	void DESDebugOptions ( struct FString Options );
	void ShowDESInfo ( struct FString infoType );
};

UClass* UGripDebug::pClassPointer = NULL;

// Class Grip.GripDrawHUD
// 0x0000 (0x0060 - 0x0060)
class UGripDrawHUD : public UObject
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1435 ];

		return pClassPointer;
	};

	void DrawHUD ( class UCanvas* CanvasObject );
};

UClass* UGripDrawHUD::pClassPointer = NULL;

// Class Grip.GripDebugCameraController
// 0x0000 (0x0798 - 0x0798)
class AGripDebugCameraController : public ADebugCameraController
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 41083 ];

		return pClassPointer;
	};

	void GripDebugViewNPCFromBrainID ( int BrainID );
	void eventPostBeginPlay ( );
};

UClass* AGripDebugCameraController::pClassPointer = NULL;

// Class Grip.GripDebugCameraHUD
// 0x0000 (0x0568 - 0x0568)
class AGripDebugCameraHUD : public ADebugCameraHUD
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 41085 ];

		return pClassPointer;
	};

	void eventPostRender ( );
};

UClass* AGripDebugCameraHUD::pClassPointer = NULL;

// Class Grip.GripDebugCameraInput
// 0x0000 (0x02EC - 0x02EC)
class UGripDebugCameraInput : public UDebugCameraInput
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 41090 ];

		return pClassPointer;
	};

	bool InputKey ( int ControllerId, struct FName Key, unsigned char Event, float AmountDepressed, unsigned long bGamepad );
};

UClass* UGripDebugCameraInput::pClassPointer = NULL;

// Class Grip.GripPlayerInput
// 0x0000 (0x02EC - 0x02EC)
class UGripPlayerInput : public UPlayerInput
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 41104 ];

		return pClassPointer;
	};

	bool ProcessKey ( class APlayerController* OwnerCtrl, struct FName Key, unsigned char Event );
	bool InputKey ( int ControllerId, struct FName Key, unsigned char Event, float AmountDepressed, unsigned long bGamepad );
};

UClass* UGripPlayerInput::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
/*
#############################################################################################
# Black Squad (01.02.2019) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: Grip_f_structs.h
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
# Function Structs
# ========================================================================================= #
*/

// Function Grip.GripActionFramework.GetStatus
// [0x00020400] ( FUNC_Native )
struct UGripActionFramework_execGetStatus_Parms
{
	class UGripAFActionHandle*                         Handle;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0008 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripActionFramework.Execute
// [0x00020400] ( FUNC_Native )
struct UGripActionFramework_execExecute_Parms
{
	class UGripAFActionHandle*                         Action;                                           		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripBlackboard.FlagStatesAsUsed
// [0x00020400] ( FUNC_Native )
struct UGripBlackboard_execFlagStatesAsUsed_Parms
{
};

// Function Grip.GripBlackboard.ContainState
// [0x00020400] ( FUNC_Native )
struct UGripBlackboard_execContainState_Parms
{
	struct FString                                     StateName;                                        		// 0x0000 (0x0010) [0x0000000000400080]              ( CPF_Parm | CPF_NeedCtorLink )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0010 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripBTNode.GetFamily
// [0x00020002] 
struct UGripBTNode_execGetFamily_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripBTAnd.GetFamily
// [0x00020002] 
struct UGripBTAnd_execGetFamily_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripBTBooleanCondition.GetFamily
// [0x00020002] 
struct UGripBTBooleanCondition_execGetFamily_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripBTComment.GetFamily
// [0x00020002] 
struct UGripBTComment_execGetFamily_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripBTCooldown.GetFamily
// [0x00020002] 
struct UGripBTCooldown_execGetFamily_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripBTDynamicPriority.GetFamily
// [0x00020002] 
struct UGripBTDynamicPriority_execGetFamily_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripBTFloatCondition.GetFamily
// [0x00020002] 
struct UGripBTFloatCondition_execGetFamily_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripBTLoop.GetFamily
// [0x00020002] 
struct UGripBTLoop_execGetFamily_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripBTLoop.SetIteration
// [0x00020002] 
struct UGripBTLoop_execSetIteration_Parms
{
	int                                                iter;                                             		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Grip.GripBTNonInterruptibleSequence.GetFamily
// [0x00020002] 
struct UGripBTNonInterruptibleSequence_execGetFamily_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripBTNumericCondition.GetFamily
// [0x00020002] 
struct UGripBTNumericCondition_execGetFamily_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripBTCutoff.GetFamily
// [0x00020002] 
struct UGripBTCutoff_execGetFamily_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripBTCutoff.SetCutoff
// [0x00020002] 
struct UGripBTCutoff_execSetCutoff_Parms
{
	int                                                newCutoff;                                        		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Grip.GripBTOr.GetFamily
// [0x00020002] 
struct UGripBTOr_execGetFamily_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripBTParallel.GetFamily
// [0x00020002] 
struct UGripBTParallel_execGetFamily_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripBTPriority.GetFamily
// [0x00020002] 
struct UGripBTPriority_execGetFamily_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripBTPushForFinishOverride.GetFamily
// [0x00020002] 
struct UGripBTPushForFinishOverride_execGetFamily_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripBTRandom.GetFamily
// [0x00020002] 
struct UGripBTRandom_execGetFamily_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripBTScriptNode.ExecutePass
// [0x00020800] ( FUNC_Event )
struct UGripBTScriptNode_eventExecutePass_Parms
{
	class UGripBTInterface*                            BTInterface;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      FirstExecution : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      PushToFinish : 1;                                 		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripBTScriptNode.GetNodeTitle
// [0x00020800] ( FUNC_Event )
struct UGripBTScriptNode_eventGetNodeTitle_Parms
{
	struct FString                                     ReturnValue;                                      		// 0x0000 (0x0010) [0x0000000000400580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm | CPF_NeedCtorLink )
};

// Function Grip.GripBTScriptNode.ComputeCondition
// [0x00020002] 
struct UGripBTScriptNode_execComputeCondition_Parms
{
	class UGripBTInterface*                            BTInterface;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripBTScriptNode.FlagUsedBBMembers
// [0x00020000] 
struct UGripBTScriptNode_execFlagUsedBBMembers_Parms
{
	class UGripBlackboard*                             Blackboard;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function Grip.GripBTScriptNode.Initialize
// [0x00020000] 
struct UGripBTScriptNode_execInitialize_Parms
{
};

// Function Grip.GripBTScriptBehavior.ExecutePass
// [0x00020802] ( FUNC_Event )
struct UGripBTScriptBehavior_eventExecutePass_Parms
{
	class UGripBTInterface*                            BTInterface;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      FirstExecution : 1;                               		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned long                                      PushToFinish : 1;                                 		// 0x000C (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x0010 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
	// unsigned char                                   ExecRes;                                          		// 0x0011 (0x0001) [0x0000000000000000]              
	// unsigned long                                   PreSuccess : 1;                                   		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// Function Grip.GripBTScriptBehavior.ExecutePost
// [0x00020000] 
struct UGripBTScriptBehavior_execExecutePost_Parms
{
	class UGripBTInterface*                            BTInterface;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function Grip.GripBTScriptBehavior.Execute
// [0x00020000] 
struct UGripBTScriptBehavior_execExecute_Parms
{
	class UGripBTInterface*                            BTInterface;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      PushToFinish : 1;                                 		// 0x0008 (0x0004) [0x0000000000000080] [0x00000001] ( CPF_Parm )
	unsigned char                                      ReturnValue;                                      		// 0x000C (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripBTScriptBehavior.ExecutePre
// [0x00020002] 
struct UGripBTScriptBehavior_execExecutePre_Parms
{
	class UGripBTInterface*                            BTInterface;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripBTScriptBehavior.ComputeCondition
// [0x00020002] 
struct UGripBTScriptBehavior_execComputeCondition_Parms
{
	class UGripBTInterface*                            BTInterface;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripBTScriptCondition.GetFamily
// [0x00020002] 
struct UGripBTScriptCondition_execGetFamily_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripBTScriptCondition.ComputeCondition
// [0x00020002] 
struct UGripBTScriptCondition_execComputeCondition_Parms
{
	class UGripBTInterface*                            BTInterface;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0008 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripBTSequence.GetFamily
// [0x00020002] 
struct UGripBTSequence_execGetFamily_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripBTSequenceOr.GetFamily
// [0x00020002] 
struct UGripBTSequenceOr_execGetFamily_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripBTTimer.GetFamily
// [0x00020002] 
struct UGripBTTimer_execGetFamily_Parms
{
	unsigned char                                      ReturnValue;                                      		// 0x0000 (0x0001) [0x0000000000000580]              ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripBTScriptNodeCache.CacheAllConditions
// [0x00020802] ( FUNC_Event )
struct UGripBTScriptNodeCache_eventCacheAllConditions_Parms
{
	class UGripBTInterface*                            BTInterface;                                      		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UGripBTScriptNode*                        Node;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function Grip.GripBTScriptNodeCache.SurveyUsedBBMembers
// [0x00020802] ( FUNC_Event )
struct UGripBTScriptNodeCache_eventSurveyUsedBBMembers_Parms
{
	class UGripBlackboard*                             Blackboard;                                       		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	// class UGripBTScriptNode*                        Node;                                             		// 0x0008 (0x0008) [0x0000000000000000]              
};

// Function Grip.GripBTScriptNodeCache.InitializeAllNodes
// [0x00020802] ( FUNC_Event )
struct UGripBTScriptNodeCache_eventInitializeAllNodes_Parms
{
	// class UGripBTScriptNode*                        Node;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function Grip.GripCheatManager.GripDebugViewNPCFromBrainID
// [0x00020202] ( FUNC_Exec )
struct AGripCheatManager_execGripDebugViewNPCFromBrainID_Parms
{
	int                                                BrainID;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Grip.GripCheatManager.StopGripLogging
// [0x00020202] ( FUNC_Exec )
struct AGripCheatManager_execStopGripLogging_Parms
{
};

// Function Grip.GripCheatManager.StartGripLogging
// [0x00020202] ( FUNC_Exec )
struct AGripCheatManager_execStartGripLogging_Parms
{
};

// Function Grip.GripCheatManager.StopGripDebug
// [0x00020202] ( FUNC_Exec )
struct AGripCheatManager_execStopGripDebug_Parms
{
};

// Function Grip.GripCheatManager.StartGripDebug
// [0x00020202] ( FUNC_Exec )
struct AGripCheatManager_execStartGripDebug_Parms
{
};

// Function Grip.GripCheatManager.CCSDebugOptions
// [0x00024202] ( FUNC_Exec )
struct AGripCheatManager_execCCSDebugOptions_Parms
{
	struct FString                                     infoType;                                         		// 0x0000 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function Grip.GripCheatManager.DESDebugOptions
// [0x00024202] ( FUNC_Exec )
struct AGripCheatManager_execDESDebugOptions_Parms
{
	struct FString                                     infoType;                                         		// 0x0000 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function Grip.GripCheatManager.ShowDESInfo
// [0x00024202] ( FUNC_Exec )
struct AGripCheatManager_execShowDESInfo_Parms
{
	struct FString                                     infoType;                                         		// 0x0000 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function Grip.GripDebug.GripDebugViewNPCFromBrainID
// [0x00822002] 
struct UGripDebug_execGripDebugViewNPCFromBrainID_Parms
{
	int                                                BrainID;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	// class AWorldInfo*                               WI;                                               		// 0x0004 (0x0008) [0x0000000000000000]              
	// class APlayerController*                        PC;                                               		// 0x000C (0x0008) [0x0000000000000000]              
	// class ADebugCameraController*                   DCC;                                              		// 0x0014 (0x0008) [0x0000000000000000]              
	// unsigned long                                   SwitchedToDebugCamera : 1;                        		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	// struct FVector                                  ActorLocation;                                    		// 0x0020 (0x000C) [0x0000000000000000]              
	// struct FVector                                  ActorRotation;                                    		// 0x002C (0x000C) [0x0000000000000000]              
	// struct FVector                                  NewCameraPos;                                     		// 0x0038 (0x000C) [0x0000000000000000]              
	// struct FVector                                  NewCameraRotation;                                		// 0x0044 (0x000C) [0x0000000000000000]              
	// unsigned long                                   Result : 1;                                       		// 0x0050 (0x0004) [0x0000000000000000] [0x00000001] 
	// int                                             Offset;                                           		// 0x0054 (0x0004) [0x0000000000000000]              
};

// Function Grip.GripDebug.GetLocationAndRotationFromBrainID
// [0x00422400] ( FUNC_Native )
struct UGripDebug_execGetLocationAndRotationFromBrainID_Parms
{
	int                                                BrainID;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FVector                                     ActorLocation;                                    		// 0x0004 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	struct FVector                                     ActorRotation;                                    		// 0x0010 (0x000C) [0x0000000000000180]              ( CPF_Parm | CPF_OutParm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x001C (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripDebug.NextBrainDebugRenderType
// [0x00022400] ( FUNC_Native )
struct UGripDebug_execNextBrainDebugRenderType_Parms
{
};

// Function Grip.GripDebug.ToggleDisableNPC
// [0x00022400] ( FUNC_Native )
struct UGripDebug_execToggleDisableNPC_Parms
{
};

// Function Grip.GripDebug.SelectDebugPawn
// [0x00022400] ( FUNC_Native )
struct UGripDebug_execSelectDebugPawn_Parms
{
};

// Function Grip.GripDebug.GripStopAdvanceSim
// [0x00022400] ( FUNC_Native )
struct UGripDebug_execGripStopAdvanceSim_Parms
{
};

// Function Grip.GripDebug.GripAdvanceSim
// [0x00022400] ( FUNC_Native )
struct UGripDebug_execGripAdvanceSim_Parms
{
};

// Function Grip.GripDebug.StopGripLogging
// [0x00022400] ( FUNC_Native )
struct UGripDebug_execStopGripLogging_Parms
{
};

// Function Grip.GripDebug.StartGripLogging
// [0x00022400] ( FUNC_Native )
struct UGripDebug_execStartGripLogging_Parms
{
};

// Function Grip.GripDebug.StopGripDebug
// [0x00022400] ( FUNC_Native )
struct UGripDebug_execStopGripDebug_Parms
{
};

// Function Grip.GripDebug.StartGripDebug
// [0x00022400] ( FUNC_Native )
struct UGripDebug_execStartGripDebug_Parms
{
};

// Function Grip.GripDebug.IsDebugEnabled
// [0x00022400] ( FUNC_Native )
struct UGripDebug_execIsDebugEnabled_Parms
{
	unsigned long                                      ReturnValue : 1;                                  		// 0x0000 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripDebug.CCSDebugOptions
// [0x00026400] ( FUNC_Native )
struct UGripDebug_execCCSDebugOptions_Parms
{
	struct FString                                     Options;                                          		// 0x0000 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function Grip.GripDebug.DESDebugOptions
// [0x00026400] ( FUNC_Native )
struct UGripDebug_execDESDebugOptions_Parms
{
	struct FString                                     Options;                                          		// 0x0000 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function Grip.GripDebug.ShowDESInfo
// [0x00026400] ( FUNC_Native )
struct UGripDebug_execShowDESInfo_Parms
{
	struct FString                                     infoType;                                         		// 0x0000 (0x0010) [0x0000000000400090]              ( CPF_OptionalParm | CPF_Parm | CPF_NeedCtorLink )
};

// Function Grip.GripDrawHUD.DrawHUD
// [0x00022400] ( FUNC_Native )
struct UGripDrawHUD_execDrawHUD_Parms
{
	class UCanvas*                                     CanvasObject;                                     		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
};

// Function Grip.GripDebugCameraController.GripDebugViewNPCFromBrainID
// [0x00020202] ( FUNC_Exec )
struct AGripDebugCameraController_execGripDebugViewNPCFromBrainID_Parms
{
	int                                                BrainID;                                          		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
};

// Function Grip.GripDebugCameraController.PostBeginPlay
// [0x00020902] ( FUNC_Event )
struct AGripDebugCameraController_eventPostBeginPlay_Parms
{
};

// Function Grip.GripDebugCameraHUD.PostRender
// [0x00020802] ( FUNC_Event )
struct AGripDebugCameraHUD_eventPostRender_Parms
{
	// class ADebugCameraController*                   DCC;                                              		// 0x0000 (0x0008) [0x0000000000000000]              
};

// Function Grip.GripDebugCameraInput.InputKey
// [0x00024002] 
struct UGripDebugCameraInput_execInputKey_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Key;                                              		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Event;                                            		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              AmountDepressed;                                  		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bGamepad : 1;                                     		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripPlayerInput.ProcessKey
// [0x00022002] 
struct UGripPlayerInput_execProcessKey_Parms
{
	class APlayerController*                           OwnerCtrl;                                        		// 0x0000 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Key;                                              		// 0x0008 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Event;                                            		// 0x0010 (0x0001) [0x0000000000000080]              ( CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0014 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};

// Function Grip.GripPlayerInput.InputKey
// [0x00024002] 
struct UGripPlayerInput_execInputKey_Parms
{
	int                                                ControllerId;                                     		// 0x0000 (0x0004) [0x0000000000000080]              ( CPF_Parm )
	struct FName                                       Key;                                              		// 0x0004 (0x0008) [0x0000000000000080]              ( CPF_Parm )
	unsigned char                                      Event;                                            		// 0x000C (0x0001) [0x0000000000000080]              ( CPF_Parm )
	float                                              AmountDepressed;                                  		// 0x0010 (0x0004) [0x0000000000000090]              ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      bGamepad : 1;                                     		// 0x0014 (0x0004) [0x0000000000000090] [0x00000001] ( CPF_OptionalParm | CPF_Parm )
	unsigned long                                      ReturnValue : 1;                                  		// 0x0018 (0x0004) [0x0000000000000580] [0x00000001] ( CPF_Parm | CPF_OutParm | CPF_ReturnParm )
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
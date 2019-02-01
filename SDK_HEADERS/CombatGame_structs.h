/*
#############################################################################################
# Black Squad (01.02.2019) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: CombatGame_structs.h
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

// ScriptStruct CombatGame.CCSSystemConfig.CCSSystemConfigData
// 0x002C
struct FCCSSystemConfigData
{
	float                                              MaxSightRadius;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxBehindSightRadius;                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxHearingRadius;                                 		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VisionCone;                                       		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              CoverQueryRadius;                                 		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< unsigned char >                            TargetSelection;                                  		// 0x0014 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      Movement;                                         		// 0x0024 (0x0001) [0x0000000000000000]              
	unsigned char                                      DetermineCanShoot;                                		// 0x0025 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              TargetAwarenessTickDelayTime;                     		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatAnimNodeSequenceByBoneRotation.AnimByRotation
// 0x0014
struct FAnimByRotation
{
	struct FRotator                                    DesiredRotation;                                  		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName;                                         		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatBot.EnemyPosition
// 0x001C
struct FEnemyPosition
{
	struct FVector                                     Position;                                         		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     Velocity;                                         		// 0x000C (0x000C) [0x0000000000000000]              
	float                                              Time;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CBCharInfo.CustomAIData
// 0x002C
struct FCustomAIData
{
	float                                              Tactics;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              StrafingAbility;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Accuracy;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Aggressiveness;                                   		// 0x000C (0x0004) [0x0000000000000000]              
	float                                              CombatStyle;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	float                                              Jumpiness;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	float                                              ReactionTime;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     FavoriteWeapon;                                   		// 0x001C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CBCharInfo.CharacterInfo
// 0x008C
struct FCharacterInfo
{
	struct FString                                     CharID;                                           		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     FamilyID;                                         		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CharName;                                         		// 0x0020 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0030 (0x0010) [0x0000000000408002]              ( CPF_Const | CPF_Localized | CPF_NeedCtorLink )
	struct FString                                     PreviewImageMarkup;                               		// 0x0040 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Faction;                                          		// 0x0050 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FCustomAIData                               AIData;                                           		// 0x0060 (0x002C) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CBCheatManager.DSConnectionDelayInfo
// 0x0008
struct FDSConnectionDelayInfo
{
	int                                                MessageType;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              DelayTime;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatItemTransaction.InventoryItemInfo
// 0x0048
struct FInventoryItemInfo
{
	struct FString                                     ItemName;                                         		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                InventorySlotIndex;                               		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ReferenceIndex;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                InitRentalTime;                                   		// 0x0018 (0x0004) [0x0000000000100000]              
	float                                              InitTickCount;                                    		// 0x001C (0x0004) [0x0000000000100000]              
	int                                                PassedSec;                                        		// 0x0020 (0x0004) [0x0000000000100000]              
	TArray< unsigned char >                            DecoItems;                                        		// 0x0024 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      ItemState;                                        		// 0x0034 (0x0001) [0x0000000000000000]              
	unsigned long                                      IsNew : 1;                                        		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      EquipState;                                       		// 0x003C (0x0001) [0x0000000000000000]              
	int                                                StackCount;                                       		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsRandomBox : 1;                                  		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatItemTransaction.ShopItemInfo
// 0x0038
struct FShopItemInfo
{
	class UCombatDataTableRefShopItem*                 refShopItem;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     CodeName;                                         		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemName;                                         		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ReferenceIndex;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                Mainprice;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                PriceType;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsSelectedRepurchaseItem : 1;                     		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatItemTransaction.EquipItemInfo
// 0x000C
struct FEquipItemInfo
{
	int                                                PresetIndex;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                InventorySlotIndex;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                EquipSlotType;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.SeqVar_Data
// 0x0038
struct FSeqVar_Data
{
	struct FName                                       VarName;                                          		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      SeqVarClass;                                      		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                IntData;                                          		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FloatData;                                        		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     VectorData;                                       		// 0x0018 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     StringData;                                       		// 0x0024 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      BoolData : 1;                                     		// 0x0034 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.AnimNotifyObjectData
// 0x0018
struct FAnimNotifyObjectData
{
	class UClass*                                      AnimNotifyClass;                                  		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimSeqName;                                      		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UObject*                                     ObjectData;                                       		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.TimeData
// 0x0008
struct FTimeData
{
	unsigned char                                      UnknownData00[ 0x2 ];                             		// 0x0000 (0x0002) UNKNOWN PROPERTY: WordProperty CombatGame.CombatTypes.TimeData.Year
	unsigned char                                      UnknownData01[ 0x2 ];                             		// 0x0002 (0x0002) UNKNOWN PROPERTY: WordProperty CombatGame.CombatTypes.TimeData.Day
	unsigned char                                      Month;                                            		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      Hour;                                             		// 0x0005 (0x0001) [0x0000000000000000]              
	unsigned char                                      Min;                                              		// 0x0006 (0x0001) [0x0000000000000000]              
	unsigned char                                      Sec;                                              		// 0x0007 (0x0001) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.ComplaintReceiptInfo
// 0x0024
struct FComplaintReceiptInfo
{
	int                                                MyUserID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     SendImageURL;                                     		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Complainer_ID;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned char                                      COMPLAINT_TYPE;                                   		// 0x0018 (0x0001) [0x0000000000000000]              
	int                                                Complaint_Receipt_Time;                           		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                TickCount;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.TakeDamageData
// 0x0078
struct FTakeDamageData
{
	class AActor*                                      Victim;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                DamageAmount;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	class AController*                                 EventInstigator;                                  		// 0x000C (0x0008) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0014 (0x000C) [0x0000000000000000]              
	struct FVector                                     Momentum;                                         		// 0x0020 (0x000C) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x002C (0x0008) [0x0000000000000000]              
	struct FPointer                                    CombatDamageType;                                 		// 0x0034 (0x0008) [0x0000000000001000]              ( CPF_Native )
	struct FTraceHitInfo                               HitInfo;                                          		// 0x003C (0x002C) [0x0000000000080000]              ( CPF_Component )
	class AActor*                                      DamageCauser;                                     		// 0x0068 (0x0008) [0x0000000000000000]              
	unsigned char                                      HitPart;                                          		// 0x0070 (0x0001) [0x0000000000000000]              
	int                                                HealthWhenTakeDamage;                             		// 0x0074 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.PlayerVoiceChat
// 0x0020
struct FPlayerVoiceChat
{
	int                                                Uid;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                UI_Index;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                VC_Status;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      IsMuted : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatTypes.ExchangeAddMoneyStruct
// 0x000C
struct FExchangeAddMoneyStruct
{
	int                                                MoneyType;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MainMoney;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                BonusMoney;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.BasicCrosshairSetting
// 0x0020
struct FBasicCrosshairSetting
{
	int                                                CrosshairClr;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      DotOnly : 1;                                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      BasicCrosshairType;                               		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned long                                      UseCenterDot : 1;                                 		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      Outline;                                          		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      Alpha;                                            		// 0x0011 (0x0001) [0x0000000000000000]              
	float                                              Scale;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned char                                      ShadowType;                                       		// 0x0018 (0x0001) [0x0000000000000000]              
	unsigned char                                      CenterOffset;                                     		// 0x0019 (0x0001) [0x0000000000000000]              
	unsigned char                                      Thickness;                                        		// 0x001A (0x0001) [0x0000000000000000]              
	unsigned long                                      DoSpread : 1;                                     		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatTypes.StatSaveCondition
// 0x0004
struct FStatSaveCondition
{
	unsigned long                                      bLoseStat : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDesertionStat : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bOtherStat : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct CombatGame.CombatTypes.RoundStatusInfo
// 0x0014
struct FRoundStatusInfo
{
	int                                                TeamScore;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                currentWave;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                ObjectHealth;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                ObjectHealthMax;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                RemainingBotCount;                                		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.InviteInfo
// 0x0006
struct FInviteInfo
{
	int                                                HostId;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x2 ];                             		// 0x0004 (0x0002) UNKNOWN PROPERTY: WordProperty CombatGame.CombatTypes.InviteInfo.Password
};

// ScriptStruct CombatGame.CombatTypes.AwaitList
// 0x003C
struct FAwaitList
{
	int                                                userID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     NickName;                                         		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Exp;                                              		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                CallingCardID;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	struct FString                                     ClanName;                                         		// 0x001C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                EmblemID;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                ClanExp;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                TierPoint;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                CompetitionModeID;                                		// 0x0038 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.ScrNoticeInfo
// 0x0014
struct FScrNoticeInfo
{
	struct FString                                     msg;                                              		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                EndTime;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.TableInfoType
// 0x002C
struct FTableInfoType
{
	struct FString                                     CodeName;                                         		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Score;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                RankExp;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                CreditPoint;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                ModeDependencyScore;                              		// 0x001C (0x0004) [0x0000000000000000]              
	struct FName                                       KillType;                                         		// 0x0020 (0x0008) [0x0000000000000000]              
	int                                                LocalizedStrID;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.ClanMatchData
// 0x0028
struct FClanMatchData
{
	int                                                A_MatchWin;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                A_MatchLose;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                B_MatchWin;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                B_MatchLose;                                      		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Rank_MatchWin;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Rank_MatchLose;                                   		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                auto_A_MatchWin;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                auto_A_MatchLose;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                auto_B_MatchWin;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                auto_B_MatchLose;                                 		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.MatchPlayerData
// 0x0034
struct FMatchPlayerData
{
	struct FString                                     UserName;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                EmblemID;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                userID;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Kill;                                             		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Death;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Assist;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                Score;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                Level;                                            		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                GameLevel;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      Desert : 1;                                       		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatTypes.ClanMatchRecordData
// 0x00A0
struct FClanMatchRecordData
{
	struct FString                                     EnemyClanName;                                    		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                EnemyEmblemID;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                EnemyClanRank;                                    		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                EnemyClanPoint;                                   		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                EnemyClanAmatchWinScore;                          		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                EnemyClanAmatchLoseScore;                         		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                EnemyClanBmatchWinScore;                          		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                EnemyClanBmatchLoseScore;                         		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                EnemyClanRankmatchWinScore;                       		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                EnemyClanRankmatchLoseScore;                      		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                MyClanPoint;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                MyClanRank;                                       		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                MyClanAmatchWinScore;                             		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                MyClanAmatchLoseScore;                            		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                MyClanBmatchWinScore;                             		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                MyClanBmatchLoseScore;                            		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                MyClanRankmatchWinScore;                          		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                MyClanRankmatchLoseScore;                         		// 0x0050 (0x0004) [0x0000000000000000]              
	struct FTimeData                                   MatchTime;                                        		// 0x0054 (0x0008) [0x0000000000000000]              
	int                                                ModeID;                                           		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                MapID;                                            		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                Win;                                              		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                Lose;                                             		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                MyTeamIndex;                                      		// 0x006C (0x0004) [0x0000000000000000]              
	int                                                EnemyTeamIndex;                                   		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                BestScoreUserId;                                  		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                BestKillUserId;                                   		// 0x0078 (0x0004) [0x0000000000000000]              
	unsigned long                                      Outcome : 1;                                      		// 0x007C (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< struct FMatchPlayerData >                  ClanMatchPlayer;                                  		// 0x0080 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMatchPlayerData >                  EnemyMatchPlayer;                                 		// 0x0090 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTypes.MatchResultPlayerData
// 0x0098
struct FMatchResultPlayerData
{
	int                                                userID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     NickName;                                         		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Level;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned char                                      TeamIndex;                                        		// 0x0018 (0x0001) [0x0000000000000000]              
	int                                                Score;                                            		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                ModeScore;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                PlayedTime;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                Kill;                                             		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                Assist;                                           		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                Death;                                            		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                Life;                                             		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                CRPoint_Acquired;                                 		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                CRPoint_Used;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned char                                      PlayedMilitaryBranch;                             		// 0x0040 (0x0001) [0x0000000000000000]              
	unsigned char                                      Rank;                                             		// 0x0041 (0x0001) [0x0000000000000000]              
	unsigned char                                      TotalRanking;                                     		// 0x0042 (0x0001) [0x0000000000000000]              
	unsigned char                                      TeamRanking;                                      		// 0x0043 (0x0001) [0x0000000000000000]              
	int                                                Gold;                                             		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                Exp;                                              		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                ClanID;                                           		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                EmblemID;                                         		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                ClanPoint;                                        		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                ClanExp;                                          		// 0x0058 (0x0004) [0x0000000000000000]              
	struct FString                                     ClanName;                                         		// 0x005C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CCardID;                                          		// 0x006C (0x0004) [0x0000000000000000]              
	TArray< int >                                      BoosterItemList;                                  		// 0x0070 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      RewardItemList;                                   		// 0x0080 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TierPoint;                                        		// 0x0090 (0x0004) [0x0000000000000000]              
	int                                                CompMatchCount;                                   		// 0x0094 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.ObjectDamageModifierStaticLightingInfo
// 0x0038
struct FObjectDamageModifierStaticLightingInfo
{
	TArray< class UShadowMap2D* >                      ShadowMaps;                                       		// 0x0000 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	TArray< class UShadowMap1D* >                      ShadowVertexBuffers;                              		// 0x0010 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FLightMapRef                                LightMap;                                         		// 0x0020 (0x0008) [0x0000000000001002]              ( CPF_Const | CPF_Native )
	TArray< struct FGuid >                             IrrelevantLights;                                 		// 0x0028 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTypes.ClanJoinList
// 0x0004
struct FClanJoinList
{
	int                                                ClanID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.ClanJoinMemberList
// 0x0020
struct FClanJoinMemberList
{
	int                                                userID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     NickName;                                         		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Level;                                            		// 0x0014 (0x0001) [0x0000000000000000]              
	struct FTimeData                                   RegistrationTime;                                 		// 0x0018 (0x0008) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.ClanListMatchData
// 0x0028
struct FClanListMatchData
{
	int                                                ModeID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MapID;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     OtherClanName;                                    		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      WinCount;                                         		// 0x0018 (0x0001) [0x0000000000000000]              
	unsigned char                                      OtherWinCount;                                    		// 0x0019 (0x0001) [0x0000000000000000]              
	unsigned long                                      Outcome : 1;                                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FTimeData                                   MatchTime;                                        		// 0x0020 (0x0008) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.ClanListDetailData
// 0x0040
struct FClanListDetailData
{
	struct FString                                     Introduce;                                        		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                A_Match_Win;                                      		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                A_Match_Lose;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                B_Match_Win;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                B_Match_Lose;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Rank_Match_Win;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                Rank_Match_Lose;                                  		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                Region_ID;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                RankPoint;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	TArray< struct FClanListMatchData >                MatchRecord;                                      		// 0x0030 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTypes.ClanList
// 0x005C
struct FClanList
{
	int                                                ClanID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ClanName;                                         		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanMasterName;                                   		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Region;                                           		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                MemberCurrentCount;                               		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                MemberMaxCount;                                   		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x2 ];                             		// 0x0030 (0x0002) UNKNOWN PROPERTY: WordProperty CombatGame.CombatTypes.ClanList.ClanMasterLevel
	unsigned char                                      UnknownData01[ 0x2 ];                             		// 0x0032 (0x0002) UNKNOWN PROPERTY: WordProperty CombatGame.CombatTypes.ClanList.EmblemID
	struct FTimeData                                   RegistrationTime;                                 		// 0x0034 (0x0008) [0x0000000000000000]              
	int                                                A_Match_Win;                                      		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                A_Match_Lose;                                     		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                B_Match_Win;                                      		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                B_Match_Lose;                                     		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                Total_Match_Win;                                  		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                Total_Match_Lose;                                 		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                ClanExp;                                          		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                ClanRankPoint;                                    		// 0x0058 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.MessengerInfo
// 0x0078
struct FMessengerInfo
{
	int                                                userID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      SessionState;                                     		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned long                                      bAFK : 1;                                         		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     NickName;                                         		// 0x000C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      Level;                                            		// 0x001C (0x0001) [0x0000000000000000]              
	struct FTimeData                                   LogoutTime;                                       		// 0x0020 (0x0008) [0x0000000000000000]              
	int                                                LogoutDurationHour;                               		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                RefChannelID;                                     		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned char                                      ChannelNumber;                                    		// 0x0030 (0x0001) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x2 ];                             		// 0x0032 (0x0002) UNKNOWN PROPERTY: WordProperty CombatGame.CombatTypes.MessengerInfo.RoomNumber
	int                                                RefModeGroupID;                                   		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                RefModeID;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                RefMapID;                                         		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasType : 1;                                     		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bHasSessionState : 1;                             		// 0x0040 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bHasAFK : 1;                                      		// 0x0040 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bHasNickname : 1;                                 		// 0x0040 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bHasLevel : 1;                                    		// 0x0040 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bHasLogoutTime : 1;                               		// 0x0040 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bHasLogoutDuration : 1;                           		// 0x0040 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bHasChannelID : 1;                                		// 0x0040 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bHasChannelNumber : 1;                            		// 0x0040 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bHasRoomNumber : 1;                               		// 0x0040 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bHasModeID : 1;                                   		// 0x0040 (0x0004) [0x0000000000000000] [0x00000400] 
	unsigned long                                      bHasMapID : 1;                                    		// 0x0040 (0x0004) [0x0000000000000000] [0x00000800] 
	unsigned long                                      bHasModeGroupID : 1;                              		// 0x0040 (0x0004) [0x0000000000000000] [0x00001000] 
	unsigned long                                      bGrade : 1;                                       		// 0x0040 (0x0004) [0x0000000000000000] [0x00002000] 
	unsigned long                                      bCallingCard : 1;                                 		// 0x0040 (0x0004) [0x0000000000000000] [0x00004000] 
	unsigned long                                      bClanName : 1;                                    		// 0x0040 (0x0004) [0x0000000000000000] [0x00008000] 
	unsigned long                                      bClanTotalPoint : 1;                              		// 0x0040 (0x0004) [0x0000000000000000] [0x00010000] 
	unsigned long                                      bTierPoint : 1;                                   		// 0x0040 (0x0004) [0x0000000000000000] [0x00020000] 
	unsigned long                                      bCompetitionModeID : 1;                           		// 0x0040 (0x0004) [0x0000000000000000] [0x00040000] 
	int                                                ClanPoint;                                        		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                CallingCardID;                                    		// 0x0048 (0x0004) [0x0000000000000000]              
	struct FString                                     ClanName;                                         		// 0x004C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ClanTotalPoint;                                   		// 0x005C (0x0004) [0x0000000000000000]              
	int                                                RankPoint;                                        		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                TierPoint;                                        		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                CompetitionModeID;                                		// 0x0068 (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x006C (0x0001) [0x0000000000000000]              
	unsigned char                                      GRADE;                                            		// 0x006D (0x0001) [0x0000000000000000]              
	struct FTimeData                                   RegistrationTime;                                 		// 0x0070 (0x0008) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.BoosterItem
// 0x001C
struct FBoosterItem
{
	int                                                BoosterItemID;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UCombatDataTableRefBoosterItem*              DataTable;                                        		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FTimeData                                   ExpireTime;                                       		// 0x000C (0x0008) [0x0000000000100001]              ( CPF_Edit )
	unsigned char                                      Type;                                             		// 0x0014 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIsActive : 1;                                    		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.ShopItemValueStruct
// 0x0094
struct FShopItemValueStruct
{
	int                                                RentalID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ValueType;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                PriceType;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Mainprice;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                AddPriceType;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                AddPrice[ 0x5 ];                                  		// 0x0014 (0x0014) [0x0000000000000000]              
	int                                                ValueRange[ 0x5 ];                                		// 0x0028 (0x0014) [0x0000000000000000]              
	int                                                ItemPrice[ 0x5 ];                                 		// 0x003C (0x0014) [0x0000000000000000]              
	int                                                SalePrice[ 0x5 ];                                 		// 0x0050 (0x0014) [0x0000000000000000]              
	struct FTimeData                                   SellSaleStart;                                    		// 0x0064 (0x0008) [0x0000000000000000]              
	struct FTimeData                                   SellSaleEnd;                                      		// 0x006C (0x0008) [0x0000000000000000]              
	struct FString                                     AddReplaceItem;                                   		// 0x0074 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     MailFormCodename;                                 		// 0x0084 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTypes.ExplosionDamageAdjustment
// 0x0008
struct FExplosionDamageAdjustment
{
	unsigned char                                      BodyType;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageRatio;                                      		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.DialogLocalizingData
// 0x0068
struct FDialogLocalizingData
{
	int                                                TitleId;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MessageId;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                InputID;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                OKBtnLabelID;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                CancelBtnLabelID;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                MaxChar;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     Title;                                            		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0028 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Input;                                            		// 0x0038 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     OKBtnLabel;                                       		// 0x0048 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CancelBtnLabel;                                   		// 0x0058 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTypes.ChattingInfo
// 0x0024
struct FChattingInfo
{
	unsigned long                                      Id : 1;                                           		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     ChatColor;                                        		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     msg;                                              		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTypes.TacticalMapPlayerIconInfo
// 0x0008
struct FTacticalMapPlayerIconInfo
{
	unsigned long                                      bActivate : 1;                                    		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bActivate_Spec : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDisplayWhenNoRendering : 1;                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                DisplayWhenNoRenderingDistance;                   		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.BasePlayerStateForHUDInfo
// 0x000C
struct FBasePlayerStateForHUDInfo
{
	unsigned char                                      Order;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              Duration_RespawnMode;                             		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Duration_NoRespawnMode;                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.CachedPlayerInfo
// 0x00D4
struct FCachedPlayerInfo
{
	struct FString                                     PlayerName;                                       		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Score;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Kill;                                             		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Death;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Assist;                                           		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                SpecialScore;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                LastKillTime;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                userID;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	struct FString                                     LevelImageName;                                   		// 0x002C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LevelImageID;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	struct FString                                     ClassImageName;                                   		// 0x0040 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ClassImageID;                                     		// 0x0050 (0x0004) [0x0000000000000000]              
	struct FString                                     RankImageName;                                    		// 0x0054 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                RankImageID;                                      		// 0x0064 (0x0004) [0x0000000000000000]              
	int                                                Level;                                            		// 0x0068 (0x0004) [0x0000000000000000]              
	int                                                Ranking;                                          		// 0x006C (0x0004) [0x0000000000000000]              
	unsigned char                                      Ping;                                             		// 0x0070 (0x0001) [0x0000000000000000]              
	unsigned char                                      TeamIndex;                                        		// 0x0071 (0x0001) [0x0000000000000000]              
	unsigned long                                      bIsSpectator : 1;                                 		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsLive : 1;                                      		// 0x0074 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSelectedClass : 1;                               		// 0x0074 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bNeedUpdate : 1;                                  		// 0x0074 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                ClanID;                                           		// 0x0078 (0x0004) [0x0000000000000000]              
	struct FString                                     ClanEmblemImageName;                              		// 0x007C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ClanEmblemImageID;                                		// 0x008C (0x0004) [0x0000000000000000]              
	struct FString                                     ClanName;                                         		// 0x0090 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanLevel;                                        		// 0x00A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanLevelColor;                                   		// 0x00B0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bHasC4 : 1;                                       		// 0x00C0 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                Life;                                             		// 0x00C4 (0x0004) [0x0000000000000000]              
	int                                                TierPoint;                                        		// 0x00C8 (0x0004) [0x0000000000000000]              
	int                                                TierImageSmall;                                   		// 0x00CC (0x0004) [0x0000000000000000]              
	int                                                TierImageBig;                                     		// 0x00D0 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.TestChangeWeaponType
// 0x003C
struct FTestChangeWeaponType
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     Command;                                          		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CodeName;                                         		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DisplayName;                                      		// 0x0028 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      Control : 1;                                      		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Alt : 1;                                          		// 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct CombatGame.CombatTypes.KeyBindingInfo
// 0x0018
struct FKeyBindingInfo
{
	struct FName                                       BindName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     Command;                                          		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTypes.MatchroomPlayerStruct
// 0x0050
struct FMatchroomPlayerStruct
{
	int                                                userID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     NickName;                                         		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Level;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned char                                      Team;                                             		// 0x0018 (0x0001) [0x0000000000000000]              
	unsigned char                                      Slotstate;                                        		// 0x0019 (0x0001) [0x0000000000000000]              
	float                                              EnteredTick;                                      		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                ClanID;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FString                                     ClanName;                                         		// 0x0024 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                EmblemID;                                         		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                CCardID;                                          		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned long                                      bNoManner : 1;                                    		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                ClanExp;                                          		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                ClanRankPoint;                                    		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                TierPoint;                                        		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                CompMatchCount;                                   		// 0x004C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.MatchroomPlayerTierStruct
// 0x0010
struct FMatchroomPlayerTierStruct
{
	int                                                userID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TierPoint;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Prev_TierPoint;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                CompMatchCount;                                   		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.CompMatchInfoStruct
// 0x0024
struct FCompMatchInfoStruct
{
	int                                                TierPoint;                                        		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< struct FMatchroomPlayerStruct >            CompMatchUsers;                                   		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FMatchroomPlayerTierStruct >        CompMatchUsersTierData;                           		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTypes.ClanMatchInfoStruct
// 0x0024
struct FClanMatchInfoStruct
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     ClanName;                                         		// 0x0004 (0x0010) [0x0000000000500002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                EmblemID;                                         		// 0x0014 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      MemberCount;                                      		// 0x0018 (0x0001) [0x0000000000000002]              ( CPF_Const )
	int                                                ClanExp;                                          		// 0x001C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                ClanRankPoint;                                    		// 0x0020 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct CombatGame.CombatTypes.MatchroomStruct
// 0x0080
struct FMatchroomStruct
{
	int                                                RoomIndex;                                        		// 0x0000 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      RoomNameType;                                     		// 0x0004 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      RoomNameCode;                                     		// 0x0005 (0x0001) [0x0000000000000002]              ( CPF_Const )
	struct FString                                     RoomName;                                         		// 0x0008 (0x0010) [0x0000000000500002]              ( CPF_Const | CPF_NeedCtorLink )
	unsigned char                                      RoomState;                                        		// 0x0018 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      RoomOpenType;                                     		// 0x0019 (0x0001) [0x0000000000000002]              ( CPF_Const )
	unsigned char                                      RoomHostPreemptionState;                          		// 0x001A (0x0001) [0x0000000000000002]              ( CPF_Const )
	int                                                CurrentPlayerCount;                               		// 0x001C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                RefMissionIndex;                                  		// 0x0020 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                RefModeIndex;                                     		// 0x0024 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                RefMapIndex;                                      		// 0x0028 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                RefRealMapIndex_forRandom;                        		// 0x002C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                RefModeGroupIndex;                                		// 0x0030 (0x0004) [0x0000000000000002]              ( CPF_Const )
	TArray< unsigned char >                            GameOptions;                                      		// 0x0034 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                AllowedMinLevel;                                  		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                AllowedMaxLevel;                                  		// 0x0048 (0x0004) [0x0000000000000000]              
	struct FString                                     MapName;                                          		// 0x004C (0x0010) [0x0000000000500002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FString                                     ModeName;                                         		// 0x005C (0x0010) [0x0000000000500002]              ( CPF_Const | CPF_NeedCtorLink )
	int                                                MapImageID;                                       		// 0x006C (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                MaxPlayerCount;                                   		// 0x0070 (0x0004) [0x0000000000000002]              ( CPF_Const )
	unsigned long                                      bThirdSpectator : 1;                              		// 0x0074 (0x0004) [0x0000000000000002] [0x00000001] ( CPF_Const )
	unsigned long                                      bAllowIntrusion : 1;                              		// 0x0074 (0x0004) [0x0000000000000002] [0x00000002] ( CPF_Const )
	unsigned long                                      bAutoTeamBalance : 1;                             		// 0x0074 (0x0004) [0x0000000000000002] [0x00000004] ( CPF_Const )
	int                                                PeaceMakerClanID;                                 		// 0x0078 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                ViperCircleClanID;                                		// 0x007C (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct CombatGame.CombatTypes.IFFInfo
// 0x0068
struct FIFFInfo
{
	unsigned char                                      IFFType;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     NickName;                                         		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AgroTargetName;                                   		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      HealthState;                                      		// 0x0024 (0x0001) [0x0000000000000000]              
	int                                                userID;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                ScreenX;                                          		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                ScreenY;                                          		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned char                                      SpecialEquipType;                                 		// 0x0034 (0x0001) [0x0000000000000000]              
	unsigned long                                      bUsingRadio : 1;                                  		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bKiller : 1;                                      		// 0x0038 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     ClanName;                                         		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     RankImageName;                                    		// 0x004C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                RankImageID;                                      		// 0x005C (0x0004) [0x0000000000000000]              
	unsigned char                                      ChampionshipIndex;                                		// 0x0060 (0x0001) [0x0000000000000000]              
	float                                              FlashRate;                                        		// 0x0064 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.MinimapObjectIconInfo
// 0x0004
struct FMinimapObjectIconInfo
{
	unsigned long                                      bShowWhenAttachedOutLine : 1;                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatTypes.ObjectIconInfo
// 0x0014
struct FObjectIconInfo
{
	class AActor*                                      Actor;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0008 (0x0001) [0x0000000000000000]              
	int                                                Priority;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                DescriptionID;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.CBTakeHitInfo
// 0x0048
struct FCBTakeHitInfo
{
	unsigned char                                      UnknownData00[ 0x2 ];                             		// 0x0000 (0x0002) UNKNOWN PROPERTY: WordProperty CombatGame.CombatTypes.CBTakeHitInfo.Damage
	unsigned char                                      UnknownData01[ 0x2 ];                             		// 0x0002 (0x0002) UNKNOWN PROPERTY: WordProperty CombatGame.CombatTypes.CBTakeHitInfo.DamagePercent
	struct FVector                                     HitLocation;                                      		// 0x0004 (0x000C) [0x0000000000000000]              
	struct FVector                                     Momentum;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x001C (0x0008) [0x0000000000000000]              
	int                                                HitBodyIndex;                                     		// 0x0024 (0x0004) [0x0000000000000000]              
	class AActor*                                      Causer;                                           		// 0x0028 (0x0008) [0x0000000000000000]              
	struct FString                                     CauserName;                                       		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CauserID;                                         		// 0x0040 (0x0004) [0x0000000000000000]              
	unsigned long                                      bFlag : 1;                                        		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatTypes.CompressedTraceHitInfo
// 0x0014
struct FCompressedTraceHitInfo
{
	class UPhysicalMaterial*                           PhysMaterial;                                     		// 0x0000 (0x0008) [0x0000000000100000]              
	int                                                Item;                                             		// 0x0008 (0x0004) [0x0000000000100000]              
	int                                                BoneIndex;                                        		// 0x000C (0x0004) [0x0000000000100000]              
	unsigned long                                      bNoDecal : 1;                                     		// 0x0010 (0x0004) [0x0000000000100000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatTypes.CompressedImpactInfo
// 0x0028
struct FCompressedImpactInfo
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0008) [0x0000000000100000]              
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000100000]              
	struct FCompressedTraceHitInfo                     HitInfo;                                          		// 0x0014 (0x0014) [0x0000000000100000]              
};

// ScriptStruct CombatGame.CombatTypes.PhysMaterialBelowFeet
// 0x0014
struct FPhysMaterialBelowFeet
{
	struct FVector                                     LastLocation;                                     		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UPhysicalMaterialPropertyBase*               PhysMaterialProp;                                 		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.PointLightInfo
// 0x0018
struct FPointLightInfo
{
	struct FColor                                      LightColor;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Brightness;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Radius;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Lifetime;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FalloffExponent;                                  		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bSkipIfLowFrameRate : 1;                          		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.InGameSingleResource
// 0x001C
struct FInGameSingleResource
{
	class UObject*                                     Resource;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ResourcePath;                                     		// 0x0008 (0x0010) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct Fdword                                      StringHash;                                       		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CombatGame.CombatTypes.InGameSingleResourceList
// 0x0010
struct FInGameSingleResourceList
{
	TArray< struct FInGameSingleResource >             ResourceList;                                     		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTypes.InGameResource
// 0x0020
struct FInGameResource
{
	TArray< class UObject* >                           ResourceList;                                     		// 0x0000 (0x0010) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                ResourceLength;                                   		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      ResourceClass;                                    		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                CurrentIndex;                                     		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTypes.CameraAnimData
// 0x0020
struct FCameraAnimData
{
	class UCameraAnim*                                 CameraAnimAsset;                                  		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              AnimScale;                                        		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AnimRate;                                         		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendInTime;                                      		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendOutTime;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AnimDuration;                                     		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bLoop : 1;                                        		// 0x001C (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.SocketLocation
// 0x0010
struct FSocketLocation
{
	struct FVector                                     LastLocation;                                     		// 0x0000 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              LastTimeSeconds;                                  		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.FunctionTable
// 0x0010
struct FFunctionTable
{
	struct FPointer                                    TargetFunction;                                   		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       FunctionName;                                     		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.OutlineMaterialVectorParam
// 0x0030
struct FOutlineMaterialVectorParam
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ParameterName;                                    		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                ParameterValue[ 0x2 ];                            		// 0x0010 (0x0020) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.GlobalOutlineEvent
// 0x0010
struct FGlobalOutlineEvent
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      ApplyTeamIndex;                                   		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              StartTimeSecond;                                  		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.DecalData
// 0x0030
struct FDecalData
{
	class UMaterialInterface*                          DecalMaterial;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Width;                                            		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Height;                                           		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Thickness;                                        		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   RandomScalingRange;                               		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              RandomRadiusOffset;                               		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              LifeSpan;                                         		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector2D                                   BlendRange;                                       		// 0x0024 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIsValid : 1;                                     		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      ClipDecalsUsingFastPath : 1;                      		// 0x002C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bRandomizeRotation : 1;                           		// 0x002C (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bFloorDecal : 1;                                  		// 0x002C (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bForceDisplay : 1;                                		// 0x002C (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct CombatGame.CombatTypes.CombatDecalParam
// 0x0010
struct FCombatDecalParam
{
	struct FName                                       ParamName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Min;                                              		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Max;                                              		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.ExplosionDecal
// 0x004C
struct FExplosionDecal
{
	unsigned char                                      Dir;                                              		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              TraceDistance;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FDecalData                                  Decal;                                            		// 0x0008 (0x0030) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FCombatDecalParam >                 Params;                                           		// 0x0038 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bWorldSpaceDir : 1;                               		// 0x0048 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.CustomAnimData
// 0x004C
struct FCustomAnimData
{
	TArray< struct FName >                             WeapAnimSeqName;                                  		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             WeapAttachAnimSeqName;                            		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FName >                             PawnAnimSeqName;                                  		// 0x0020 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              BlendInTime;                                      		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendOutTime;                                     		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PawnAnimBlendInTime;                              		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PawnAnimBlendOutTime;                             		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              PlayRate;                                         		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              AdditionalPlayTime;                               		// 0x0044 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bModifyAnimRate : 1;                              		// 0x0048 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bLooping : 1;                                     		// 0x0048 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bOverride : 1;                                    		// 0x0048 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bForceLocalSpaceBlend : 1;                        		// 0x0048 (0x0004) [0x0000000000000001] [0x00000008] ( CPF_Edit )
	unsigned long                                      bFullBody : 1;                                    		// 0x0048 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.CustomAnimOnIdleData
// 0x001C
struct FCustomAnimOnIdleData
{
	struct FName                                       EventName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimSeqName;                                      		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendInTime;                                      		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              BlendOutTime;                                     		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bLooping : 1;                                     		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bOverride : 1;                                    		// 0x0018 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.HideBoneDataByScreenPos
// 0x0024
struct FHideBoneDataByScreenPos
{
	struct FName                                       TrackingSocketName;                               		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMeshSocket*                         TrackingSocket;                                   		// 0x0008 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       HideBoneName;                                     		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                HideBoneIndex;                                    		// 0x0018 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	float                                              DegreeFromCenter;                                 		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DotFromCenter;                                    		// 0x0020 (0x0004) [0x0000000000002001]              ( CPF_Edit | CPF_Transient )
};

// ScriptStruct CombatGame.CombatTypes.HideBoneDataByZoomState
// 0x0009
struct FHideBoneDataByZoomState
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      StateIndex;                                       		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.HideBoneDataByWeaponState
// 0x0009
struct FHideBoneDataByWeaponState
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      StateIndex;                                       		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.StaticMeshPart
// 0x0009
struct FStaticMeshPart
{
	class UStaticMesh*                                 Mesh;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      MaterialSet;                                      		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatTypes.MeshPart
// 0x001C
struct FMeshPart
{
	unsigned char                                      PartType;                                         		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class USkeletalMesh*                               Mesh;                                             		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          Material;                                         		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      MaterialSet;                                      		// 0x0014 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bIsMainMesh : 1;                                  		// 0x0018 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bConstructMaterialInstance : 1;                   		// 0x0018 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct CombatGame.CBGameReplicationInfo.MissionActorInfo
// 0x0010
struct FMissionActorInfo
{
	TArray< class AActor* >                            ActorList;                                        		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatExplosionLight.LightValues
// 0x0010
struct FLightValues
{
	float                                              StartTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Brightness;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FColor                                      LightColor;                                       		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CBPawnSoundGroup.HitSound
// 0x0020
struct FHitSound
{
	class USoundCue*                                   FirstPersonBeShotSound;                           		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   FirstPersonBeShotVoice;                           		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   FirstPersonHitSound;                              		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   ThirdPersonSound;                                 		// 0x0018 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CBPawnSoundGroup.EffectTypeHitSound
// 0x0140
struct FEffectTypeHitSound
{
	struct FHitSound                                   BodyTypeHitSounds[ 0xA ];                         		// 0x0000 (0x0140) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CBPawnSoundGroup.FootstepSoundInfo
// 0x0018
struct FFootstepSoundInfo
{
	struct FName                                       MaterialType;                                     		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   Sound;                                            		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   CrouchSound;                                      		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CBPawnSoundGroup.TextWithVoice
// 0x000C
struct FTextWithVoice
{
	class USoundCue*                                   SoundCues;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                TextID;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatPawn.MaterialImpactEffect
// 0x0044
struct FMaterialImpactEffect
{
	unsigned char                                      EffectType;                                       		// 0x0000 (0x0001) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	class USoundCue*                                   Sound;                                            		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   FirstPersonSound;                                 		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	TArray< class UMaterialInterface* >                DecalMaterials;                                   		// 0x0014 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              DurationOfDecal;                                  		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DecalDissolveParamName;                           		// 0x0028 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              DecalWidth;                                       		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DecalHeight;                                      		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DecalTickness;                                    		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             ParticleTemplate;                                 		// 0x003C (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CBPhysicalMaterialProperty.ExplosionDatum
// 0x005C
struct FExplosionDatum
{
	unsigned char                                      EffectType;                                       		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   ExplosionSoundCue;                                		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystem*                             ExplosionPS;                                      		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FDecalData                                  ExplosionDecalData;                               		// 0x0014 (0x0030) [0x0000000000000001]              ( CPF_Edit )
	struct FPointLightInfo                             ExplosionPointLightInfo;                          		// 0x0044 (0x0018) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatPawn.CameraShakeRotationFactor
// 0x0008
struct FCameraShakeRotationFactor
{
	int                                                Pitch;                                            		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Roll;                                             		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatPawn.ImpulseData
// 0x0010
struct FImpulseData
{
	struct FName                                       BoneName;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              ImpulseRate;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              ImpulseRate_Stand;                                		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatPawn.CrouchSpamValue
// 0x000C
struct FCrouchSpamValue
{
	unsigned char                                      CrouchSlowPercent;                                		// 0x0000 (0x0001) [0x0000000000000000]              
	float                                              CrouchSpamCrouchblendTime;                        		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              CrouchSpamStandTime;                              		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatPawn.FlashEffectRepStruct
// 0x0008
struct FFlashEffectRepStruct
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              remainTime;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CBTeamInfo.SurrendInfo
// 0x0008
struct FSurrendInfo
{
	int                                                Uid;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                _voteState;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatSkillManager.SavedSkillInfo
// 0x000C
struct FSavedSkillInfo
{
	class UCombatDataTableRefSkill*                    RefSkill;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned long                                      bHaveLicense : 1;                                 		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CBUIDataStore_HUD.CachedChampionshipPlayerInfoStruct
// 0x0044
struct FCachedChampionshipPlayerInfoStruct
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                userID;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0008 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     WeaponName;                                       		// 0x0018 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                TeamIndex;                                        		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                HealthMax;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                Health;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                TotalKillCounts;                                  		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                Status;                                           		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                WeaponID;                                         		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned long                                      bHasC4 : 1;                                       		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bNeedUpdateIndex : 1;                             		// 0x0040 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bNeedUpdatePlayerName : 1;                        		// 0x0040 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bNeedUpdateTeamIndex : 1;                         		// 0x0040 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bNeedUpdateHealthMax : 1;                         		// 0x0040 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bNeedUpdateHealth : 1;                            		// 0x0040 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bNeedUpdateTotalKillCounts : 1;                   		// 0x0040 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bNeedUpdateStaus : 1;                             		// 0x0040 (0x0004) [0x0000000000000000] [0x00000080] 
	unsigned long                                      bNeedUpdateHasC4 : 1;                             		// 0x0040 (0x0004) [0x0000000000000000] [0x00000100] 
	unsigned long                                      bNeedUpdateWeaponName : 1;                        		// 0x0040 (0x0004) [0x0000000000000000] [0x00000200] 
	unsigned long                                      bFinishChecked : 1;                               		// 0x0040 (0x0004) [0x0000000000000000] [0x00000400] 
};

// ScriptStruct CombatGame.CBUIDataStore_HUD.CachedWeaponInfo_BaseInfo
// 0x0020
struct FCachedWeaponInfo_BaseInfo
{
	unsigned long                                      bNeedUpdate : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     WeaponName;                                       		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bWithChamber : 1;                                 		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      MainWeaponUIType;                                 		// 0x0018 (0x0001) [0x0000000000000000]              
	unsigned char                                      SubGrenadeUIType;                                 		// 0x0019 (0x0001) [0x0000000000000000]              
	int                                                WeaponID;                                         		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CBUIDataStore_HUD.CachedWeaponInfo_AmmoCntInfo
// 0x001C
struct FCachedWeaponInfo_AmmoCntInfo
{
	unsigned long                                      bNeedUpdate : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                AmmoCount;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MaxMagazineCount;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                RemainAmmoCount;                                  		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                ChamberCount;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FName                                       EventType;                                        		// 0x0014 (0x0008) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CBUIDataStore_HUD.CachedWeaponInfo_GrenadeInfo
// 0x0014
struct FCachedWeaponInfo_GrenadeInfo
{
	unsigned long                                      bNeedUpdate : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                GrenadeACount;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                GrenadeBCount;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FName                                       EventType;                                        		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CBUIDataStore_HUD.SuicideStateStruct
// 0x0004
struct FSuicideStateStruct
{
	unsigned long                                      bNeedUpdate : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSuicide : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct CombatGame.CBUIDataStore_HUD.ChampionshipObserverKeyState
// 0x0004
struct FChampionshipObserverKeyState
{
	unsigned long                                      bChatUIState : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSummaryUIState : 1;                              		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIFFUIState : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bRoundDisplayUIState : 1;                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bInformationUIState : 1;                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000010] 
	unsigned long                                      bAllUIState : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000020] 
	unsigned long                                      bHpUIState : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000040] 
	unsigned long                                      bWeaponUIState : 1;                               		// 0x0000 (0x0004) [0x0000000000000000] [0x00000080] 
};

// ScriptStruct CombatGame.CBUIDataStore_HUD.KillerInfoStruct
// 0x0038
struct FKillerInfoStruct
{
	unsigned long                                      bNeedUpdate : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     KillerName;                                       		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                KillCount_Killer;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                KillCount_Me;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                killTypeStrID;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                KillCauserStrID;                                  		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                KillCauserIconImageID;                            		// 0x0024 (0x0004) [0x0000000000000000]              
	struct FString                                     KillCauserGradeImagePath;                         		// 0x0028 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CBUIDataStore_Mission.UIMissionStruct
// 0x0034
struct FUIMissionStruct
{
	int                                                MissionRefID;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     MissionCodename;                                  		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MissionLabel;                                     		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                DefaultModeGroupID;                               		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                OpenChannel;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                bgType;                                           		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                bgImageID;                                        		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CBUIDataStore_Mission.UIModeGroupStruct
// 0x00B0
struct FUIModeGroupStruct
{
	int                                                ModeGroupRefID;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ModeGroupCodename;                                		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BindMissionCodename;                              		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SelectType;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                DefaultModeRefID;                                 		// 0x0028 (0x0004) [0x0000000000000000]              
	struct FString                                     DisplayName;                                      		// 0x002C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DisplayThumbnail;                                 		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BGThumbnail;                                      		// 0x004C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                BGThumbnailImgID;                                 		// 0x005C (0x0004) [0x0000000000000000]              
	struct FString                                     TitleImg;                                         		// 0x0060 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TitleImgID;                                       		// 0x0070 (0x0004) [0x0000000000000000]              
	struct FString                                     DisplayDescription;                               		// 0x0074 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DisplayModeName;                                  		// 0x0084 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     DisplayModeThumbnail;                             		// 0x0094 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                DisplayModeThumbnailImgID;                        		// 0x00A4 (0x0004) [0x0000000000000000]              
	unsigned long                                      BetaVersion : 1;                                  		// 0x00A8 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                MatchMakingID;                                    		// 0x00AC (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CBUIDataStore_Mission.UIModeOptionStruct
// 0x002C
struct FUIModeOptionStruct
{
	struct FString                                     OptionCodename;                                   		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      DefaultOptionIndex;                               		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned long                                      bShow : 1;                                        		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                OptionCount;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
	TArray< int >                                      Values;                                           		// 0x001C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CBUIDataStore_Mission.UIModeStruct
// 0x0374
struct FUIModeStruct
{
	int                                                ModeRefID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     modeCodename;                                     		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ModeLabel;                                        		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ModeDesc;                                         		// 0x0024 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ModeImageName;                                    		// 0x0034 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ModeImageID;                                      		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                DefaultMapRefID;                                  		// 0x0048 (0x0004) [0x0000000000000000]              
	unsigned long                                      BetaVersion : 1;                                  		// 0x004C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                StartableMinUser;                                 		// 0x0050 (0x0004) [0x0000000000000000]              
	int                                                ModeUIType;                                       		// 0x0054 (0x0004) [0x0000000000000000]              
	int                                                HUDType;                                          		// 0x0058 (0x0004) [0x0000000000000000]              
	struct FUIModeOptionStruct                         MapOptionList[ 0x12 ];                            		// 0x005C (0x0318) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CBUIDataStore_Mission.UIMapStruct
// 0x003C
struct FUIMapStruct
{
	int                                                MapRefID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     MapCodeName;                                      		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MapLabel;                                         		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      MapSize;                                          		// 0x0024 (0x0001) [0x0000000000000000]              
	int                                                MapButtonImgID;                                   		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                MapBGImgID;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                MinimapImgID;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned long                                      BetaVersion : 1;                                  		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                ModeRefID;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CBUIDataStore_Mission.UIModeGroupBindStruct
// 0x0024
struct FUIModeGroupBindStruct
{
	struct FString                                     ModeGroupName;                                    		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ModeName;                                         		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      BetaVersion : 1;                                  		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CBUIDataStore_Mission.UIModeMapStruct
// 0x0038
struct FUIModeMapStruct
{
	struct FString                                     ModeName;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ModeGroupName;                                    		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MapName;                                          		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MinimapImageID;                                   		// 0x0030 (0x0004) [0x0000000000000000]              
	unsigned long                                      BetaVersion : 1;                                  		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CBUIDataStore_PendingDialogMessage.DialogMessage
// 0x008D
struct FDialogMessage
{
	int                                                DialogType;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FDialogLocalizingData                       LocalizationData;                                 		// 0x0004 (0x0068) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FScriptDelegate                             OKBtnDelegate;                                    		// 0x006C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0070 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             CancelBtnDelegate;                                		// 0x007C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0080 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UseDefaultDelegate;                               		// 0x008C (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatUIDataStore_StringAliasBindingMap.ControllerMap
// 0x0028
struct FControllerMap
{
	struct FName                                       KeyName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     XBoxMapping;                                      		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PS3Mapping;                                       		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatUIDataStore_StringAliasBindingMap.BindCacheElement
// 0x001C
struct FBindCacheElement
{
	struct FName                                       KeyName;                                          		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     MappingString;                                    		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                FieldIndex;                                       		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CBUIDataStore_TacticalGear.UITacticalGearStruct
// 0x002C
struct FUITacticalGearStruct
{
	unsigned char                                      Id;                                               		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                Cost;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemName;                                         		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           DescList;                                         		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bEnoughMoney : 1;                                 		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bAllowedMode : 1;                                 		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bUpdateEnoughMoney : 1;                           		// 0x0028 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bUpdateAllowedMode : 1;                           		// 0x0028 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct CombatGame.GripAIDef.SClassAgroWeight
// 0x000C
struct FSClassAgroWeight
{
	class UClass*                                      TargetClass;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              ClassWeight;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.GripAIDef.SAgroCheck
// 0x0020
struct FSAgroCheck
{
	float                                              VisibleWeight;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DistanceWeight;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              OrientWeight;                                     		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RecentlyDamagedWeight;                            		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FSClassAgroWeight >                 ClassAgroInfos;                                   		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.GripAIDef.SDistanceCheck
// 0x0009
struct FSDistanceCheck
{
	unsigned char                                      CheckType;                                        		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              Distance;                                         		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      DistanceOp;                                       		// 0x0008 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.GripAIDef.SVsibleCheck
// 0x0004
struct FSVsibleCheck
{
	unsigned long                                      bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
};

// ScriptStruct CombatGame.GripAIDef.SReachableCheck
// 0x0004
struct FSReachableCheck
{
	unsigned long                                      bDirectReachable : 1;                             		// 0x0000 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bReachable : 1;                                   		// 0x0000 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct CombatGame.GripAIDef.SAIWeaponInfo
// 0x0038
struct FSAIWeaponInfo
{
	float                                              Weight;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     Path;                                             		// 0x0004 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     BehaviorTreePath;                                 		// 0x0014 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	int                                                UsableAIBeaconIndex;                              		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      InventoryClass;                                   		// 0x0028 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UCCSBTTree*                                  BehaviorTreeTemplate;                             		// 0x0030 (0x0008) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CombatGame.CCSBlackboard.CCSMoveCmdData
// 0x0010
struct FCCSMoveCmdData
{
	unsigned char                                      MoveCmd;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FVector                                     Position;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CCSCover.CCSCoverData
// 0x0028
struct FCCSCoverData
{
	float                                              TargetDist;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              DirectDistance;                                   		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      ValidPath : 1;                                    		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              PathDistance;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      IsValid : 1;                                      		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	class ACoverLink*                                  CoverLink;                                        		// 0x0014 (0x0008) [0x0000000000000000]              
	int                                                SlotIdx;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	class AActor*                                      Occupier;                                         		// 0x0020 (0x0008) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CCSTarget.CCSTargetData
// 0x0030
struct FCCSTargetData
{
	class AActor*                                      Pawn;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FVector                                     Position;                                         		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FVector                                     LKP;                                              		// 0x0014 (0x000C) [0x0000000000000000]              
	float                                              LKPAge;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              Range2D;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
	float                                              Range3D;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      CanShoot : 1;                                     		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsAware : 1;                                      		// 0x002C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IsFiring : 1;                                     		// 0x002C (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      IsVisible : 1;                                    		// 0x002C (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct CombatGame.CCSBTCombatPatrol.PatrolPointInfo
// 0x0014
struct FPatrolPointInfo
{
	class ACombatPatrolPoint*                          PatrolPoint;                                      		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                SlotIdx;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	float                                              Dist;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Value;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CCSController.SMoveTowardState
// 0x0018
struct FSMoveTowardState
{
	class AActor*                                      Goal;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	class AActor*                                      ViewFocus;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	float                                              DesiredOffset;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bStrafe : 1;                                      		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bShouldWalk : 1;                                  		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct CombatGame.CombatSkillManager.SkillSaveInfo
// 0x001C
struct FSkillSaveInfo
{
	int                                                remainCount;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              CoolTime;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              WorldCoolTime;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                checkcooltime;                                    		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x2 ];                             		// 0x0010 (0x0002) UNKNOWN PROPERTY: WordProperty CombatGame.CombatSkillManager.SkillSaveInfo.RemainMagazineAmmo
	unsigned char                                      UnknownData01[ 0x2 ];                             		// 0x0012 (0x0002) UNKNOWN PROPERTY: WordProperty CombatGame.CombatSkillManager.SkillSaveInfo.RemainAmmoCount
	unsigned char                                      RemainSubMagazineAmmo;                            		// 0x0014 (0x0001) [0x0000000000000000]              
	unsigned char                                      RemainSubAmmoCount;                               		// 0x0015 (0x0001) [0x0000000000000000]              
	unsigned long                                      bIsActivate : 1;                                  		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsHold : 1;                                      		// 0x0018 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bCanBuySkill : 1;                                 		// 0x0018 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct CombatGame.CombatActiveSkill.GivenWeaponInfo
// 0x0011
struct FGivenWeaponInfo
{
	struct FString                                     ClassName;                                        		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      ApplyTeamIndex;                                   		// 0x0010 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatBotController.SDamagedInfo
// 0x0008
struct FSDamagedInfo
{
	float                                              Damage;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              DamageTime;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatBotController.SDamagedActorInfo
// 0x001C
struct FSDamagedActorInfo
{
	class AActor*                                      Target;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	float                                              DamageSum;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	TArray< struct FSDamagedInfo >                     DamagedInfoList;                                  		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatBotController.SAIBeaconVisitInfo
// 0x000C
struct FSAIBeaconVisitInfo
{
	class AAIBeacon*                                   VisitAIBeacon;                                    		// 0x0000 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	int                                                VisitNumber;                                      		// 0x0008 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CombatGame.CombatAIActionNode_SelectTarget.SClassAgroScore
// 0x000C
struct FSClassAgroScore
{
	class UClass*                                      TargetClass;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              ClassWeight;                                      		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatGame.ClientConnectionInfo
// 0x000C
struct FClientConnectionInfo
{
	int                                                PlayerID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	class UPlayer*                                     Player;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatGame.ForbiddenWeapon
// 0x000C
struct FForbiddenWeapon
{
	unsigned char                                      ForbiddenWeaponType;                              		// 0x0000 (0x0001) [0x0000000000000000]              
	class UClass*                                      ReplaceWeapon;                                    		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatStatStorageBase.PlayerStatInfo
// 0x0008
struct FPlayerStatInfo
{
	int                                                DBID;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatGame.InactiveStatInfo
// 0x0038
struct FInactiveStatInfo
{
	struct FUniqueNetId                                UniqueId;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     SavedNetworkAddress;                              		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerName;                                       		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FPlayerStatInfo >                   stat_array;                                       		// 0x0028 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatChampionshipManager.ChampionshipMemberData
// 0x001D
struct FChampionshipMemberData
{
	int                                                PlayerID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     PlayerName;                                       		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class ACombatPlayerReplicationInfo*                PRI;                                              		// 0x0014 (0x0008) [0x0000000000000000]              
	unsigned char                                      Index;                                            		// 0x001C (0x0001) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatChampionshipManager.ChampionshipTeamData
// 0x0018
struct FChampionshipTeamData
{
	class ACBTeamInfo*                                 TeamInfo;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FChampionshipMemberData >           MemberList;                                       		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTeamGame.DefaultInventoryInfo
// 0x0020
struct FDefaultInventoryInfo
{
	TArray< class UClass* >                            LoadedInventoryClass;                             		// 0x0000 (0x0010) [0x0000000000402001]              ( CPF_Edit | CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FString >                           InventoryClassName;                               		// 0x0010 (0x0010) [0x0000000000404001]              ( CPF_Edit | CPF_Config | CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatHUD.ServerTimePositionInfoStruct
// 0x0008
struct FServerTimePositionInfoStruct
{
	float                                              PosX;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              PosY;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTeamGameHUD.ModeNameStruct
// 0x004C
struct FModeNameStruct
{
	struct FString                                     modeCodename;                                     		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                CommonModeNameLabelID;                            		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ModeNameLabelIDs[ 0x2 ];                          		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FString                                     CommonModeNameLabel;                              		// 0x001C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ModeNameLabels[ 0x2 ];                            		// 0x002C (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatInGameLocalSoundGroup_Base.TeamSoundData
// 0x00F0
struct FTeamSoundData
{
	TArray< class USoundCue* >                         RoundResult;                                      		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundCue* >                         RoundOverReason_TimeLimit;                        		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundCue* >                         RoundOverReason_NoRespawnGameAllDeath;            		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundCue* >                         RoundOverReason_WinByDecision;                    		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundCue* >                         RoundOverReason_GameScoreLimit;                   		// 0x0040 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundCue* >                         RoundOverReason_SuddenDeathKill;                  		// 0x0050 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   LastUserInfo;                                     		// 0x0060 (0x0008) [0x0000000000000000]              
	TArray< class USoundCue* >                         MatchResult;                                      		// 0x0068 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   RoundStartInfo;                                   		// 0x0078 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   SuddenDeathInfo;                                  		// 0x0080 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   RoundGoalInfo;                                    		// 0x0088 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   GamePlayStartBGM;                                 		// 0x0090 (0x0008) [0x0000000000000000]              
	TArray< class USoundCue* >                         RoundResultBGM;                                   		// 0x0098 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundCue* >                         RoundConditionSounds;                             		// 0x00A8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< class USoundCue* >                         RoundOverReason_MissionEnd;                       		// 0x00B8 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class USoundCue*                                   DestroyObjectEnemy;                               		// 0x00C8 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   DestroyObjectFriendly;                            		// 0x00D0 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   C4BombPlant;                                      		// 0x00D8 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   VIPEscapeStart;                                   		// 0x00E0 (0x0008) [0x0000000000000000]              
	class USoundCue*                                   VIPDeath;                                         		// 0x00E8 (0x0008) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatDialogManager.DialogInfo
// 0x003C
struct FDialogInfo
{
	class UCombatDialog*                               DialogMC;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                Id;                                               		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     DialogName;                                       		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FScriptDelegate                             OKBtnDelegate;                                    		// 0x001C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0020 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             CancelBtnDelegate;                                		// 0x002C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0030 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
};

// ScriptStruct CombatGame.CombatTeamGameMovie.WeaponSimpleInfo
// 0x0024
struct FWeaponSimpleInfo
{
	int                                                weaponRefItemIndex;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     WeaponName;                                       		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     WeaponImagePath;                                  		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatTeamGameMovie.MapSymbolDescriptionInfo
// 0x0008
struct FMapSymbolDescriptionInfo
{
	unsigned char                                      iconType;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                DescriptionID;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTeamGameMovie.RoundConditionAudioComponentInfo
// 0x0010
struct FRoundConditionAudioComponentInfo
{
	TArray< class UAudioComponent* >                   Sounds;                                           		// 0x0000 (0x0010) [0x0000000004480008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct CombatGame.CombatTeamGameMovie.ClassIconStruct
// 0x0028
struct FClassIconStruct
{
	struct FString                                     SmallIcon;                                        		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BigIcon;                                          		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SmallIconImageID;                                 		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                BigIconImageID;                                   		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTeamGameMovie.PlayerStateEffectType
// 0x0034
struct FPlayerStateEffectType
{
	unsigned long                                      bIsBeginState : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bNeedUpdate : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bForceUpdate : 1;                                 		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	struct FScriptDelegate                             OnBegin;                                          		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0008 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             OnUpdate;                                         		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0018 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             OnEnd;                                            		// 0x0024 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0028 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
};

// ScriptStruct CombatGame.CombatTeamGameMovie.HitDamageInfo
// 0x001C
struct FHitDamageInfo
{
	unsigned long                                      bUsed : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisplayed : 1;                                   		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              HitTime;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     VictimLocation;                                   		// 0x0008 (0x000C) [0x0000000000000000]              
	int                                                VictimColliHeight;                                		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                VictimHitDamage;                                  		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTeamGameMovie.DirHit
// 0x0018
struct FDirHit
{
	unsigned long                                      bUsed : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bFadeIn : 1;                                      		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDirectAttack : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000004] 
	int                                                AttackerPlayerID;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FVector                                     HitLocation;                                      		// 0x0008 (0x000C) [0x0000000000000000]              
	float                                              Lifetime;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatAIGameMovie.PlayerListInfo
// 0x004C
struct FPlayerListInfo
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FName >                             Dirty;                                            		// 0x0004 (0x0010) [0x0000000000502000]              ( CPF_Transient | CPF_NeedCtorLink )
	unsigned long                                      bDirty : 1;                                       		// 0x0014 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	struct FString                                     Name;                                             		// 0x0018 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Life;                                             		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned char                                      State;                                            		// 0x002C (0x0001) [0x0000000000000000]              
	int                                                Health;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                Percent;                                          		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned long                                      bLocalPlayer : 1;                                 		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      MilitaryClass;                                    		// 0x003C (0x0001) [0x0000000000000000]              
	int                                                Score;                                            		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                CR;                                               		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                Rank;                                             		// 0x0048 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatAIGameReplicationInfo.SAimRocket
// 0x003C
struct FSAimRocket
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                Count;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FVector                                     AimPSLocList[ 0x4 ];                              		// 0x000C (0x0030) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatAIGameTDMBase.SAITypeInfo
// 0x005C
struct FSAITypeInfo
{
	int                                                AINameID;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     AIPawnClassPath;                                  		// 0x0004 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     AIControllerClassPath;                            		// 0x0014 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FString >                           InventoryPathArray;                               		// 0x0024 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     AIName;                                           		// 0x0034 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	class APlayerReplicationInfo*                      AIPRI;                                            		// 0x0044 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UClass*                                      AIPawnClass;                                      		// 0x004C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UClass*                                      AIControllerClass;                                		// 0x0054 (0x0008) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CombatGame.CombatAIManager.AITypeInfo
// 0x0068
struct FAITypeInfo
{
	struct FString                                     PawnClassName;                                    		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     ControllerClassName;                              		// 0x0010 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< struct FString >                           WeaponClassName;                                  		// 0x0020 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FString                                     CCSBTTreeName;                                    		// 0x0030 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	class UClass*                                      PawnClass;                                        		// 0x0040 (0x0008) [0x0000000000022001]              ( CPF_Edit | CPF_Transient | CPF_EditConst )
	class UClass*                                      ControllerClass;                                  		// 0x0048 (0x0008) [0x0000000000022001]              ( CPF_Edit | CPF_Transient | CPF_EditConst )
	TArray< class UClass* >                            WeaponClass;                                      		// 0x0050 (0x0010) [0x0000000000422001]              ( CPF_Edit | CPF_Transient | CPF_EditConst | CPF_NeedCtorLink )
	class UCCSBTTree*                                  CCSBTTree;                                        		// 0x0060 (0x0008) [0x0000000000022001]              ( CPF_Edit | CPF_Transient | CPF_EditConst )
};

// ScriptStruct CombatGame.CombatPlayerReplicationInfoBase.CurrentPlayerStateForHUDInfo
// 0x0008
struct FCurrentPlayerStateForHUDInfo
{
	unsigned long                                      bOn : 1;                                          		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              RemoveTime;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.interface_WavePawn.WavePawnData
// 0x0040
struct FWavePawnData
{
	int                                                PawnName;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                CR;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                RankExp;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                SpreadMin;                                        		// 0x000C (0x0004) [0x0000000000004000]              ( CPF_Config )
	int                                                SpreadRand;                                       		// 0x0010 (0x0004) [0x0000000000004000]              ( CPF_Config )
	struct FString                                     Desc;                                             		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Score;                                            		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                ScoreStrID;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	unsigned long                                      bTeamBonus : 1;                                   		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                TeamCR;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                TeamRankExp;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
	class USeqAct_CombatBotSpawn*                      Spawner;                                          		// 0x0038 (0x0008) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CombatGame.CombatAnim_TurnInPlace.RotTransitionInfo
// 0x000C
struct FRotTransitionInfo
{
	float                                              RotationOffset;                                   		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       TransName;                                        		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatAnim_TurnInPlace_Player.TIP_Transition
// 0x0014
struct FTIP_Transition
{
	struct FName                                       TransName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       AnimName;                                         		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              PlayRate;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatAnimBlendPerBone_Multi.BlendInfo
// 0x001C
struct FBlendInfo
{
	TArray< struct FName >                             BranchStartBoneName;                              		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	float                                              BlendInTime;                                      		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bForceLocalSpaceBlend : 1;                        		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	float                                              PlayRate;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatAnimNodeCopyBoneTranslation.BoneCopyInfo
// 0x0018
struct FBoneCopyInfo
{
	struct FName                                       SrcBoneName;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       DstBoneName;                                      		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                SrcBoneIndex;                                     		// 0x0010 (0x0004) [0x0000000000000002]              ( CPF_Const )
	int                                                DstBoneIndex;                                     		// 0x0014 (0x0004) [0x0000000000000002]              ( CPF_Const )
};

// ScriptStruct CombatGame.CombatAnimNotify_MaterialParam.MICParam
// 0x0040
struct FMICParam
{
	class UMaterialInstanceConstant*                   MIC;                                              		// 0x0000 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       SavedScalarParam;                                 		// 0x0008 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	float                                              SavedScalarValue;                                 		// 0x0010 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       SavedVectorParam;                                 		// 0x0014 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	struct FLinearColor                                SavedVectorValue;                                 		// 0x001C (0x0010) [0x0000000000002000]              ( CPF_Transient )
	struct FName                                       SavedTextureParam;                                		// 0x002C (0x0008) [0x0000000000002000]              ( CPF_Transient )
	class UTexture*                                    SavedTextureValue;                                		// 0x0034 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	int                                                MaterialIndexInMesh;                              		// 0x003C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CombatGame.CombatAnimNotify_MaterialParam.AnimNotifyScalarParameter
// 0x0010
struct FAnimNotifyScalarParameter
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              StartParameterValue;                              		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              EndParameterValue;                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatAnimNotify_MaterialParam.AnimNotifyVectorParameter
// 0x0028
struct FAnimNotifyVectorParameter
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                StartParameterValue;                              		// 0x0008 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                EndParameterValue;                                		// 0x0018 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatAnimNotify_MITVParam.AnimNotifyMITVScalarParam
// 0x0038
struct FAnimNotifyMITVScalarParam
{
	unsigned long                                      bOverride_ParameterValue : 1;                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ParameterValue;                                   		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FInterpCurveFloat                           ParameterValueCurve;                              		// 0x0008 (0x0014) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       ParameterName;                                    		// 0x001C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bClearStartTime : 1;                              		// 0x0024 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bOverride_Loop : 1;                               		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bLoop : 1;                                        		// 0x0024 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bOverride_AutoActivate : 1;                       		// 0x0024 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bAutoActivate : 1;                                		// 0x0024 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bOverride_CycleTime : 1;                          		// 0x0024 (0x0004) [0x0000000000000000] [0x00000020] 
	float                                              CycleTime;                                        		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOverride_NormalizeTime : 1;                      		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bNormalizeTime : 1;                               		// 0x002C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bOverride_OffsetTime : 1;                         		// 0x002C (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              OffsetTime;                                       		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOverride_OffsetFromEnd : 1;                      		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOffsetFromEnd : 1;                               		// 0x0034 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatAnimNotify_MITVParam.AnimNotifyMITVVectorParam
// 0x0044
struct FAnimNotifyMITVVectorParam
{
	unsigned long                                      bOverride_ParameterValue : 1;                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FLinearColor                                ParameterValue;                                   		// 0x0004 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FInterpCurveVector                          ParameterValueCurve;                              		// 0x0014 (0x0014) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       ParameterName;                                    		// 0x0028 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bClearStartTime : 1;                              		// 0x0030 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bOverride_Loop : 1;                               		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bLoop : 1;                                        		// 0x0030 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bOverride_AutoActivate : 1;                       		// 0x0030 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bAutoActivate : 1;                                		// 0x0030 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bOverride_CycleTime : 1;                          		// 0x0030 (0x0004) [0x0000000000000000] [0x00000020] 
	float                                              CycleTime;                                        		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOverride_NormalizeTime : 1;                      		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bNormalizeTime : 1;                               		// 0x0038 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bOverride_OffsetTime : 1;                         		// 0x0038 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              OffsetTime;                                       		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOverride_OffsetFromEnd : 1;                      		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOffsetFromEnd : 1;                               		// 0x0040 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatAnimNotify_MITVParam.AnimNotifyMITVLinearColorParam
// 0x0044
struct FAnimNotifyMITVLinearColorParam
{
	unsigned long                                      bOverride_ParameterValue : 1;                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FLinearColor                                ParameterValue;                                   		// 0x0004 (0x0010) [0x0000000000000001]              ( CPF_Edit )
	struct FInterpCurveLinearColor                     ParameterValueCurve;                              		// 0x0014 (0x0014) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FName                                       ParameterName;                                    		// 0x0028 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bClearStartTime : 1;                              		// 0x0030 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bOverride_Loop : 1;                               		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bLoop : 1;                                        		// 0x0030 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bOverride_AutoActivate : 1;                       		// 0x0030 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bAutoActivate : 1;                                		// 0x0030 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bOverride_CycleTime : 1;                          		// 0x0030 (0x0004) [0x0000000000000000] [0x00000020] 
	float                                              CycleTime;                                        		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOverride_NormalizeTime : 1;                      		// 0x0038 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bNormalizeTime : 1;                               		// 0x0038 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bOverride_OffsetTime : 1;                         		// 0x0038 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              OffsetTime;                                       		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOverride_OffsetFromEnd : 1;                      		// 0x0040 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOffsetFromEnd : 1;                               		// 0x0040 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatAnimNotify_MITVParam.AnimNotifyMITVTextureParam
// 0x0028
struct FAnimNotifyMITVTextureParam
{
	unsigned long                                      bOverride_ParameterValue : 1;                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UTexture*                                    ParameterValue;                                   		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ParameterName;                                    		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bClearStartTime : 1;                              		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bOverride_Loop : 1;                               		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bLoop : 1;                                        		// 0x0014 (0x0004) [0x0000000000000001] [0x00000004] ( CPF_Edit )
	unsigned long                                      bOverride_AutoActivate : 1;                       		// 0x0014 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      bAutoActivate : 1;                                		// 0x0014 (0x0004) [0x0000000000000001] [0x00000010] ( CPF_Edit )
	unsigned long                                      bOverride_CycleTime : 1;                          		// 0x0014 (0x0004) [0x0000000000000000] [0x00000020] 
	float                                              CycleTime;                                        		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOverride_NormalizeTime : 1;                      		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bNormalizeTime : 1;                               		// 0x001C (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	unsigned long                                      bOverride_OffsetTime : 1;                         		// 0x001C (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              OffsetTime;                                       		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bOverride_OffsetFromEnd : 1;                      		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOffsetFromEnd : 1;                               		// 0x0024 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatAnimNotify_MITVParam.MITVParam
// 0x0054
struct FMITVParam
{
	class UMaterialInstanceTimeVarying*                MITV;                                             		// 0x0000 (0x0008) [0x0000000000002000]              ( CPF_Transient )
	TArray< struct FScalarParameterValueOverTime >     SavedScalarValue;                                 		// 0x0008 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FVectorParameterValueOverTime >     SavedVectorValue;                                 		// 0x0018 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FLinearColorParameterValueOverTime > SavedLinearColorValue;                            		// 0x0028 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	TArray< struct FTextureParameterValueOverTime >    SavedTextureValue;                                		// 0x0038 (0x0010) [0x0000000000402000]              ( CPF_Transient | CPF_NeedCtorLink )
	int                                                MaterialIndexInMesh;                              		// 0x0048 (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bOverridedAutoActiveAll : 1;                      		// 0x004C (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	unsigned long                                      SavedbAutoActivate : 1;                           		// 0x004C (0x0004) [0x0000000000002000] [0x00000002] ( CPF_Transient )
	unsigned long                                      bApplyPlayRate : 1;                               		// 0x004C (0x0004) [0x0000000000002000] [0x00000004] ( CPF_Transient )
	float                                              SavedPlayRate;                                    		// 0x0050 (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CombatGame.CombatArmsRacePawn.WeaponLevelInfo
// 0x0094
struct FWeaponLevelInfo
{
	unsigned long                                      bJug : 1;                                         		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     CodeName[ 0x9 ];                                  		// 0x0004 (0x0090) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatPlayerInput.sMouseSens
// 0x002C
struct FsMouseSens
{
	unsigned long                                      bUseAllMode : 1;                                  		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUseAutoScale : 1;                                		// 0x0000 (0x0004) [0x0000000000000000] [0x00000002] 
	float                                              ZoomMouseSens[ 0xA ];                             		// 0x0004 (0x0028) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatPC.DisplayOnlyPawnLocationInfo
// 0x0018
struct FDisplayOnlyPawnLocationInfo
{
	int                                                PlayerID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
	unsigned long                                      bIsSameTeam : 1;                                  		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              RegisterTime;                                     		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatPC.PresetSlotState
// 0x000C
struct FPresetSlotState
{
	int                                                PresetIndex;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                WeaponID;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      LaserOn : 1;                                      		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      SilencerOn : 1;                                   		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct CombatGame.CombatPC.ObjectiveAnnouncementInfo
// 0x0018
struct FObjectiveAnnouncementInfo
{
	class USoundNodeWave*                              AnnouncementSound;                                		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     AnnouncementText;                                 		// 0x0008 (0x0010) [0x0000000000408003]              ( CPF_Edit | CPF_Const | CPF_Localized | CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatLocalPlayer.AdvancedColorSenseStruct
// 0x0024
struct FAdvancedColorSenseStruct
{
	struct FVector                                     SceneShadows;                                     		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FVector                                     SceneHighLights;                                  		// 0x000C (0x000C) [0x0000000000000000]              
	struct FVector                                     SceneMidTones;                                    		// 0x0018 (0x000C) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatAudioChannelSystem.ChannelData
// 0x0010
struct FChannelData
{
	TArray< class UAudioComponent* >                   AudioComponents;                                  		// 0x0000 (0x0010) [0x0000000004580008]              ( CPF_ExportObject | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct CombatGame.CombatAwesomium.AwesomiumInfo
// 0x0024
struct FAwesomiumInfo
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ImageURL;                                         		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LinkURL;                                          		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatBusterActor.SubObjectInfo
// 0x0048
struct FSubObjectInfo
{
	unsigned char                                      HealthPercentage;                                 		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMeshComponent*                        MeshComp;                                         		// 0x0004 (0x0008) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	class UCombatExplosion*                            ExplosionTemplate;                                		// 0x000C (0x0008) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	TArray< class USoundCue* >                         Sounds;                                           		// 0x0014 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	TArray< class UParticleSystem* >                   ParticleTemplate;                                 		// 0x0024 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bDeactiveParticleWhenChangeSubObject : 1;         		// 0x0034 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	TArray< class UParticleSystemComponent* >          PSC;                                              		// 0x0038 (0x0010) [0x0000000004482008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_NeedCtorLink | CPF_EditInline )
};

// ScriptStruct CombatGame.CombatBusterActor.DamageInfo
// 0x000C
struct FDamageInfo
{
	class AController*                                 Controller;                                       		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                TotalDamage;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatBarricade.SOccupyPawnInfo
// 0x0014
struct FSOccupyPawnInfo
{
	struct FVector                                     Destination;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	class APawn*                                       Pawn;                                             		// 0x000C (0x0008) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatBusterGame.ObjectDestoryBounsInfo
// 0x0008
struct FObjectDestoryBounsInfo
{
	float                                              RankExp;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              InGameCR;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatChampionshipObserverPC.WatchingPlayerData
// 0x0005
struct FWatchingPlayerData
{
	int                                                playerIndex_zeroBase;                             		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      TeamIndex;                                        		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatChannelTransaction.ServerInfo
// 0x000C
struct FServerInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                DescriptionID;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatChannelTransaction.ChannelPropertyInfo
// 0x0008
struct FChannelPropertyInfo
{
	int                                                MaxUser;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                UserCount;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatChannelTransaction.ChannelInfo
// 0x0064
struct FChannelInfo
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     CodeName;                                         		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Level_Block;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Level_Low;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Level_High;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                KAD_Block;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                KAD_Min;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                KAD_Max;                                          		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                Clan_Block;                                       		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                Championship_Block;                               		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                ChampionshipTF;                                   		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                OpenChannel;                                      		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                TitleId;                                          		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                DescriptionID;                                    		// 0x0040 (0x0004) [0x0000000000000000]              
	int                                                Ping_Block;                                       		// 0x0044 (0x0004) [0x0000000000000000]              
	int                                                DesignType;                                       		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                Server;                                           		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                ChannelState;                                     		// 0x0050 (0x0004) [0x0000000000000000]              
	TArray< struct FChannelPropertyInfo >              ChannelPropertyList;                              		// 0x0054 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatCharacterTransaction.RecordRecentlyPlayed
// 0x0044
struct FRecordRecentlyPlayed
{
	struct FString                                     VsClanName;                                       		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                ChannelID;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ModeID;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                MapID;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                WinningScore[ 0x2 ];                              		// 0x001C (0x0008) [0x0000000000000000]              
	struct FTimeData                                   MatchEndTime;                                     		// 0x0024 (0x0008) [0x0000000000000000]              
	int                                                Kill;                                             		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                Assist;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                Death;                                            		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned char                                      MatchResult;                                      		// 0x0038 (0x0001) [0x0000000000000000]              
	int                                                HeadShotKill;                                     		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                FatalShotKill;                                    		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatCharacterTransaction.RecordRecentlyPlayedList
// 0x0014
struct FRecordRecentlyPlayedList
{
	int                                                modeFlag;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FRecordRecentlyPlayed >             List;                                             		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatCharacterTransaction.MatchOnOffInfo
// 0x0018
struct FMatchOnOffInfo
{
	unsigned long                                      bHide : 1;                                        		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                modeFlag;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     CodeName;                                         		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatCharacterTransaction.LevelExpData
// 0x0008
struct FLevelExpData
{
	int                                                AccountLevel;                                     		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                AccountExp;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatCharacterTransaction.MatchPlayHistory_Script
// 0x0040
struct FMatchPlayHistory_Script
{
	struct FString                                     Vs_clan_name;                                     		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Channel_ID;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Mode_ID;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Map_ID;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                PM_score;                                         		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                VC_score;                                         		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                Kill_count;                                       		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                Assist_count;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                Death_count;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                Match_result;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                Head_shot_count;                                  		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                Fatal_shot_count;                                 		// 0x0038 (0x0004) [0x0000000000000000]              
	unsigned long                                      bClan_match : 1;                                  		// 0x003C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatCharacterTransaction.MatchPlayInfo_Script
// 0x003C
struct FMatchPlayInfo_Script
{
	int                                                match_count;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                win_count;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                lose_count;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Kill_count;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Assist_count;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Death_count;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                headshot_kill_count;                              		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                fatal_kill_count;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                last10_matches;                                   		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                last10_wins;                                      		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                last10_loses;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	TArray< struct FMatchPlayHistory_Script >          match_history;                                    		// 0x002C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatCharacterTransaction.CharacterTransactionData
// 0x0120
struct FCharacterTransactionData
{
	int                                                MyUserID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     NickName;                                         		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FTimeData                                   LastAccessTime;                                   		// 0x0014 (0x0008) [0x0000000000000000]              
	struct FTimeData                                   CreateIDTime;                                     		// 0x001C (0x0008) [0x0000000000000000]              
	struct FLevelExpData                               LevelDatas;                                       		// 0x0024 (0x0008) [0x0000000000000000]              
	struct FLevelExpData                               StartingLevelDatas;                               		// 0x002C (0x0008) [0x0000000000000000]              
	int                                                Rank;                                             		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                LastRank;                                         		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                TutorialFinishes;                                 		// 0x003C (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0040 (0x0048) UNKNOWN PROPERTY: MapProperty CombatGame.CombatCharacterTransaction.CharacterTransactionData.LastTakeStat
	unsigned char                                      UnknownData01[ 0x48 ];                            		// 0x0088 (0x0048) UNKNOWN PROPERTY: MapProperty CombatGame.CombatCharacterTransaction.CharacterTransactionData.Stat
	unsigned char                                      UnknownData02[ 0x48 ];                            		// 0x00D0 (0x0048) UNKNOWN PROPERTY: MapProperty CombatGame.CombatCharacterTransaction.CharacterTransactionData.StatObtainedInConnection
	struct Fdword                                      MTS_Sec;                                          		// 0x0118 (0x0004) [0x0000000000800002]              ( CPF_Const | CPF_NoExport )
	unsigned long                                      OnClanShutdownPenalty : 1;                        		// 0x011C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatCharacterTransaction.PlayerCompetitionPoint
// 0x0010
struct FPlayerCompetitionPoint
{
	int                                                Mode_ID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                tier_point;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                max_tier_point;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                prev_tier_point;                                  		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatChatManager.ChattingDisplayInfo
// 0x0074
struct FChattingDisplayInfo
{
	int                                                LabelID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Label;                                            		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Msg_ColorList[ 0x2 ];                             		// 0x0014 (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CallSign_ColorList[ 0x2 ];                        		// 0x0034 (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanNalme_ColorList[ 0x2 ];                       		// 0x0054 (0x0020) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatChatManager.ChattingUserInfo
// 0x0014
struct FChattingUserInfo
{
	int                                                userID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ClanName;                                         		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatRewardDataBase.RelatedKillDataInfo
// 0x000C
struct FRelatedKillDataInfo
{
	class ACombatPlayerReplicationInfo*                Target;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	int                                                killcount;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatRewardDataBase.RecordDataType
// 0x0005
struct FRecordDataType
{
	int                                                TotalCount;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      CurrentCount;                                     		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatCommon_Option.LabelSettingInfo
// 0x0020
struct FLabelSettingInfo
{
	int                                                LabelID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TooltipID;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     FunctionName;                                     		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Param1;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Param2;                                           		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatCommon_Option.ButtonEnableInfo
// 0x0018
struct FButtonEnableInfo
{
	int                                                LabelID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bActivate : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bInvert : 1;                                      		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
	struct FString                                     FunctionName;                                     		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatCommon_Option.VideoOptionItemInfo
// 0x006C
struct FVideoOptionItemInfo
{
	struct FString                                     KeyName;                                          		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Type;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	TArray< int >                                      ItemNameID;                                       		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           ItemNameString;                                   		// 0x0024 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SelectedIndex;                                    		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                OldSelectedIndex;                                 		// 0x0038 (0x0004) [0x0000000000000000]              
	struct FString                                     FunctionName;                                     		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     InitDataFunctionName;                             		// 0x004C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SetValueFunctionName;                             		// 0x005C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatCommon_Option.VideoOptionPresetInfo
// 0x0018
struct FVideoOptionPresetInfo
{
	int                                                OptionItemIndex;                                  		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsCustom : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	TArray< int >                                      SelectedByLevel;                                  		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatCommon_Option.ControlOptionItemInfo
// 0x0030
struct FControlOptionItemInfo
{
	struct FString                                     KeyName;                                          		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Param1;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Param2;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                SelectedIndex;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                OldSelectedIndex;                                 		// 0x001C (0x0004) [0x0000000000000000]              
	struct FString                                     FunctionName;                                     		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatCommon_Option.SoundOptionItemInfo
// 0x0068
struct FSoundOptionItemInfo
{
	struct FString                                     KeyName;                                          		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SelectedIndex;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                OldSelectedIndex;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     FunctionName;                                     		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     InitDataFunctionName;                             		// 0x0028 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SetValueFunctionName;                             		// 0x0038 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ItemNameID;                                       		// 0x0048 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           ItemNameString;                                   		// 0x0058 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatCommon_Option.GamePlayOptionItemInfo
// 0x0028
struct FGamePlayOptionItemInfo
{
	struct FString                                     KeyName;                                          		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SelectedIndex;                                    		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                OldSelectedIndex;                                 		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     FunctionName;                                     		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatCommon_Option.CrosshairOptionItemInfo
// 0x0068
struct FCrosshairOptionItemInfo
{
	struct FString                                     KeyName;                                          		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      ItemNameID;                                       		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           ItemNameString;                                   		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SelectedIndex;                                    		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                OldSelectedIndex;                                 		// 0x0034 (0x0004) [0x0000000000000000]              
	struct FString                                     FunctionName;                                     		// 0x0038 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     InitDataFunctionName;                             		// 0x0048 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SetValueFunctionName;                             		// 0x0058 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatCommon_Option.OptionKeyBindingInfo
// 0x0024
struct FOptionKeyBindingInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Command;                                          		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LabelID;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned long                                      bAlert : 1;                                       		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                SelectedKeyCode;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                OldSelectedKeyCode;                               		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatProfileSettings.KeymapDatum
// 0x0018
struct FKeymapDatum
{
	struct FName                                       FlashKeyname;                                     		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       UnrealKeyname;                                    		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                FlashKeyCode;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                LocalizedID;                                      		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatProfileSettings.FiexdKeyCommandInfo
// 0x0018
struct FFiexdKeyCommandInfo
{
	struct FString                                     Command;                                          		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FName                                       KeyName;                                          		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatGameViewportClient.__RESOLUTION
// 0x0018
struct F__RESOLUTION
{
	int                                                Width;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Height;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< int >                                      RefreshRate;                                      		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatGameViewportClient.__ASPECT
// 0x0018
struct F__ASPECT
{
	int                                                aspectHoriz;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                aspectVert;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	TArray< struct F__RESOLUTION >                     Resolution;                                       		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatCommon_SystemCounter.SystemCountInfo
// 0x001C
struct FSystemCountInfo
{
	unsigned char                                      _Type;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                _Value;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      _bUpdate : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     _Text;                                            		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatCTFGameScore.ScoreStruct
// 0x0008
struct FScoreStruct
{
	float                                              Score;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              MissionScore;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatDataTable.DataEntry
// 0x001C
struct FDataEntry
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000020001]              ( CPF_Edit | CPF_EditConst )
	class UCombatDataTableType*                        Object;                                           		// 0x0004 (0x0008) [0x0000000004400009]              ( CPF_Edit | CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline )
	class UCombatDataTable*                            Owner;                                            		// 0x000C (0x0008) [0x0000000000000000]              
	struct FName                                       ObjectName;                                       		// 0x0014 (0x0008) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatDataTable.TypeAliasInfo
// 0x0018
struct FTypeAliasInfo
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ClassType;                                        		// 0x0008 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatDataTableRefQuest.StepByStepRewardType
// 0x0014
struct FStepByStepRewardType
{
	int                                                Count;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     RewardCodeName;                                   		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatDataTableRefRankUp.UnlockSkillData
// 0x0012
struct FUnlockSkillData
{
	struct FString                                     UnlockSkill;                                      		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      ClassType;                                        		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned char                                      Skilltype;                                        		// 0x0011 (0x0001) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatDataTableRefReward.RewardData
// 0x0018
struct FRewardData
{
	struct FString                                     RewardItemCodeName;                               		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                RewardItemValue;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                RewardItemValueType;                              		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatDBManager.ExcelExternalCallType
// 0x0010
struct FExcelExternalCallType
{
	int                                                PublicID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PersonalID;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                GameSetID;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                DBID;                                             		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatDemolitionPC.SExactLocationInfo
// 0x000C
struct FSExactLocationInfo
{
	float                                              X;                                                		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              Y;                                                		// 0x0004 (0x0004) [0x0000000000000000]              
	float                                              Z;                                                		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatDestructibleObject.MaterialReplaceMod
// 0x000C
struct FMaterialReplaceMod
{
	class UMaterialInterface*                          NewMaterial;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaterialIndex;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatDestructibleObject.MaterialScalarParamMod
// 0x0014
struct FMaterialScalarParamMod
{
	class UMaterialInstanceConstant*                   MatInst;                                          		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ParamName;                                        		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              ScalarVal;                                        		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatDestructibleObject.MaterialTexParamMod
// 0x0018
struct FMaterialTexParamMod
{
	class UMaterialInstanceConstant*                   MatInst;                                          		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ParamName;                                        		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UTexture*                                    NewTexture;                                       		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatDestructibleObject.MaterialVectorParamMod
// 0x0020
struct FMaterialVectorParamMod
{
	class UMaterialInstanceConstant*                   MatInst;                                          		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       ParamName;                                        		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                VectorVal;                                        		// 0x0010 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatDestructibleObject.DestroyedEffectParams
// 0x002C
struct FDestroyedEffectParams
{
	class UParticleSystem*                             ParticleEffect;                                   		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RelativeOffset;                                   		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    RelativeRotation;                                 		// 0x0014 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxSpawnDist;                                     		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       SocketName;                                       		// 0x0024 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatDestructibleObject.ActorSpawnParams
// 0x0064
struct FActorSpawnParams
{
	class UActorFactory*                               Factory;                                          		// 0x0000 (0x0008) [0x0000000024400008]              ( CPF_ExportObject | CPF_NeedCtorLink | CPF_EditInline | CPF_Deprecated )
	class UStaticMesh*                                 RigidBodyMesh;                                    		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MinLinearVel;                                     		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MaxLinearVel;                                     		// 0x001C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MinAngularVel;                                    		// 0x0028 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     MaxAngularVel;                                    		// 0x0034 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      CollisionType;                                    		// 0x0040 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      RBChannel;                                        		// 0x0041 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RelativeOffset;                                   		// 0x0044 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    RelativeRotation;                                 		// 0x0050 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	float                                              LifeTimeSeconds;                                  		// 0x005C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxSpawnDist;                                     		// 0x0060 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatDestructibleObject.SplashDamageParams
// 0x0014
struct FSplashDamageParams
{
	float                                              BaseDamage;                                       		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageRadius;                                     		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      DamageType;                                       		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Momentum;                                         		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatDestructibleObject.ObjDamageModifierDependency
// 0x0010
struct FObjDamageModifierDependency
{
	struct FName                                       DependentSubObjName;                              		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxHealthToAllow;                                 		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                DependentSubObjIdx;                               		// 0x000C (0x0004) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CombatGame.CombatDestructibleObject.ExplosionMod
// 0x0030
struct FExplosionMod
{
	struct FName                                       SocketName;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              Damage;                                           		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              DamageRadius;                                     		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     RelativeLocation;                                 		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
	struct FRotator                                    RelativeRotation;                                 		// 0x001C (0x000C) [0x0000000000000001]              ( CPF_Edit )
	class UClass*                                      ActorClassToIgnoreForDamage;                      		// 0x0028 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatDestructibleObject.ObjectDamageModifier
// 0x00F8
struct FObjectDamageModifier
{
	struct FName                                       DamageModName;                                    		// 0x0000 (0x0008) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	float                                              HealthThreshold;                                  		// 0x0008 (0x0004) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	class UStaticMesh*                                 NewMesh;                                          		// 0x000C (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMeshComponent*                        LightingBuildComponent;                           		// 0x0014 (0x0008) [0x000000000408200A]              ( CPF_Const | CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
	TArray< struct FMaterialReplaceMod >               MaterialReplacements;                             		// 0x001C (0x0010) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FMaterialScalarParamMod >           MaterialScalarParams;                             		// 0x002C (0x0010) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FMaterialTexParamMod >              MaterialTexParams;                                		// 0x003C (0x0010) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< struct FMaterialVectorParamMod >           MaterialVectorParams;                             		// 0x004C (0x0010) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	TArray< class USoundCue* >                         Sounds;                                           		// 0x005C (0x0010) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	unsigned long                                      bSelfDestruct : 1;                                		// 0x006C (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bStopAmbientSound : 1;                            		// 0x006C (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	TArray< struct FDestroyedEffectParams >            DestroyedEffects;                                 		// 0x0070 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bForceDisableAttachedCover : 1;                   		// 0x0080 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	TArray< struct FActorSpawnParams >                 ActorsToSpawn;                                    		// 0x0084 (0x0010) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	struct FSplashDamageParams                         SplashDamage;                                     		// 0x0094 (0x0014) [0x0000000000000003]              ( CPF_Edit | CPF_Const )
	TArray< struct FObjDamageModifierDependency >      DependentSubObjs;                                 		// 0x00A8 (0x0010) [0x0000000000400003]              ( CPF_Edit | CPF_Const | CPF_NeedCtorLink )
	unsigned long                                      bApplied : 1;                                     		// 0x00B8 (0x0004) [0x0000000000002000] [0x00000001] ( CPF_Transient )
	int                                                NextSpawnActorIdx;                                		// 0x00BC (0x0004) [0x0000000000002000]              ( CPF_Transient )
	unsigned long                                      bDisableAllCover : 1;                             		// 0x00C0 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
	unsigned long                                      bLowerAllCover : 1;                               		// 0x00C0 (0x0004) [0x0000000000000003] [0x00000002] ( CPF_Edit | CPF_Const )
	struct FExplosionMod                               ExploMod;                                         		// 0x00C4 (0x0030) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      bSelfDestructAll : 1;                             		// 0x00F4 (0x0004) [0x0000000000000003] [0x00000001] ( CPF_Edit | CPF_Const )
};

// ScriptStruct CombatGame.CombatDestructibleObject.DestructibleSubobject
// 0x0128
struct FDestructibleSubobject
{
	struct FName                                       SubObjName;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UStaticMeshComponent*                        Mesh;                                             		// 0x0008 (0x0008) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	TArray< struct FObjectDamageModifier >             DamageMods;                                       		// 0x0010 (0x0010) [0x0000000000480001]              ( CPF_Edit | CPF_Component | CPF_NeedCtorLink )
	float                                              DefaultHealth;                                    		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FObjectDamageModifier                       UndoMod;                                          		// 0x0024 (0x00F8) [0x0000000000482000]              ( CPF_Transient | CPF_Component | CPF_NeedCtorLink )
	int                                                ActiveDamageModIdx;                               		// 0x011C (0x0004) [0x0000000000002000]              ( CPF_Transient )
	class UClass*                                      LastHitDamageType;                                		// 0x0120 (0x0008) [0x0000000000002000]              ( CPF_Transient )
};

// ScriptStruct CombatGame.CombatDestructibleObject.SubObjectStaticLightingInfo
// 0x0048
struct FSubObjectStaticLightingInfo
{
	TArray< struct FObjectDamageModifierStaticLightingInfo > StaticLightingInfos;                              		// 0x0000 (0x0010) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
	struct FObjectDamageModifierStaticLightingInfo     UndamagedStaticLightingInfo;                      		// 0x0010 (0x0038) [0x0000000000400002]              ( CPF_Const | CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatDestructibleObject.ReplicatedDamageModInfo
// 0x0008
struct FReplicatedDamageModInfo
{
	unsigned char                                      ObjIdx;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      ModIdx;                                           		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned long                                      bPartial : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatDestructibleObject.MITVMod
// 0x000C
struct FMITVMod
{
	class UMaterialInstanceTimeVarying*                NewMITV;                                          		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                MaterialIndex;                                    		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatDestructibleSMActor.MeshInfo
// 0x000C
struct FMeshInfo
{
	class UStaticMeshComponent*                        MeshComp;                                         		// 0x0000 (0x0008) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
	int                                                DamageThreshold;                                  		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatFlashExplosionActor.FlashEffectSettingStruct
// 0x0010
struct FFlashEffectSettingStruct
{
	float                                              Time;                                             		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              InabilityTime;                                    		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              Intensities[ 0x2 ];                               		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatFlashExplosionActor.FlashEffectDataStruct
// 0x0024
struct FFlashEffectDataStruct
{
	float                                              Distance;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FFlashEffectSettingStruct                   Settings[ 0x2 ];                                  		// 0x0004 (0x0020) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatFrontEnd_Base.FrontEndButtonStruct
// 0x0018
struct FFrontEndButtonStruct
{
	struct FString                                     MemberName;                                       		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LabelID;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDefaultDisabled : 1;                             		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDefaultSelected : 1;                             		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDisabled : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bSelected : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct CombatGame.CombatStatisticsTransaction.MatchResultMapInfoData
// 0x0018
struct FMatchResultMapInfoData
{
	int                                                LastMissionRefID;                                 		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                LastModeGroupRefID;                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                LastModeRefID;                                    		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                LastMapRefID;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                ModeUIType;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                HUDType;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatStatisticsTransaction.QuestInfoData
// 0x0030
struct FQuestInfoData
{
	int                                                QuestID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                QuestType;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                QuestCurrentScore;                                		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                QuestCurrentStep;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      FirstQuest;                                       		// 0x0010 (0x0001) [0x0000000000000000]              
	unsigned long                                      bReceiveReward : 1;                               		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      RewardStep;                                       		// 0x0018 (0x0001) [0x0000000000000000]              
	TArray< unsigned char >                            RewardItemStep;                                   		// 0x001C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIsQuestActive : 1;                               		// 0x002C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatStatisticsTransaction.GrainInfoData
// 0x0018
struct FGrainInfoData
{
	int                                                GrainExp;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                GrainMoney;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                GrainClanExp;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                GrainClanTotalExp;                                		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                GrainMyRankPoint;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                GrainClanRankPoint;                               		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatStatisticsTransaction.MatchResultData
// 0x0039
struct FMatchResultData
{
	unsigned char                                      RoundCountType;                                   		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      WinnerTeamIndex;                                  		// 0x0001 (0x0001) [0x0000000000000000]              
	int                                                RoundOverPoints[ 0x2 ];                           		// 0x0004 (0x0008) [0x0000000000000000]              
	int                                                BestScorePlayerUserID;                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                BestKillPlayerUserID;                             		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                BestAssistPlayerUserID;                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                BestMissionScorePlayerUserID;                     		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bChangeTeam : 1;                                  		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bRankingMatch : 1;                                		// 0x001C (0x0004) [0x0000000000000000] [0x00000002] 
	TArray< struct FMatchResultPlayerData >            PlayerResultList;                                 		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      AIWave;                                           		// 0x0030 (0x0001) [0x0000000000000000]              
	int                                                AIObjectHealth;                                   		// 0x0034 (0x0004) [0x0000000000000000]              
	unsigned char                                      RewardRank;                                       		// 0x0038 (0x0001) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_AwaitList.AwaitListPopUpItem
// 0x0008
struct FAwaitListPopUpItem
{
	int                                                LabelID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      bDisabled : 1;                                    		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDefaultDisabled : 1;                             		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct CombatGame.CombatFrontEnd_Maintenance.RISListDescStruct
// 0x0018
struct FRISListDescStruct
{
	struct FString                                     AddImagepath;                                     		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                AddNameID;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                DescNameID;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_Maintenance.InfoTabStruct
// 0x0010
struct FInfoTabStruct
{
	struct FString                                     IconName;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatFrontEnd_Maintenance.ItemAbilityInfoStruct
// 0x0034
struct FItemAbilityInfoStruct
{
	struct FString                                     AbilityName;                                      		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ViewType;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     Spec;                                             		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                EquipSpec;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                EquipPercent;                                     		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                LookSpec;                                         		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                LookPercent;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_Maintenance.ItemAddonStruct
// 0x0030
struct FItemAddonStruct
{
	struct FString                                     AddImg;                                           		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AddTitle;                                         		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     AddDesc;                                          		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatFrontEnd_Maintenance.ItemDescStruct
// 0x0020
struct FItemDescStruct
{
	struct FString                                     Title;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Contents;                                         		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatFrontEnd_Maintenance.ItemBasicInfoStruct
// 0x0034
struct FItemBasicInfoStruct
{
	struct FString                                     ItemName;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemFeature;                                      		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemImg;                                          		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      IsProto : 1;                                      		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatFrontEnd_BaseShop.ShopTabStruct
// 0x0028
struct FShopTabStruct
{
	int                                                LabelID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Label;                                            		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CodeName;                                         		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bDefaultDisabled : 1;                             		// 0x0024 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisabled : 1;                                    		// 0x0024 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSelected : 1;                                    		// 0x0024 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct CombatGame.CombatFrontEnd_BaseShop.UIShopItemInfo
// 0x00C8
struct FUIShopItemInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemName;                                         		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemCategoryName;                                 		// 0x0014 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemPrice;                                        		// 0x0024 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     onSale;                                           		// 0x0034 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned long                                      iconNew : 1;                                      		// 0x0044 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      iconHot : 1;                                      		// 0x0044 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      iconProto : 1;                                    		// 0x0044 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      iconCheck : 1;                                    		// 0x0044 (0x0004) [0x0000000000000000] [0x00000008] 
	int                                                IconTag;                                          		// 0x0048 (0x0004) [0x0000000000000000]              
	int                                                WeaponIndex;                                      		// 0x004C (0x0004) [0x0000000000000000]              
	int                                                MoneyType;                                        		// 0x0050 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemImg;                                          		// 0x0054 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     buyBtnLabel;                                      		// 0x0064 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                buyBtnState;                                      		// 0x0074 (0x0004) [0x0000000000000000]              
	struct FString                                     RankImg;                                          		// 0x0078 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     addInfo;                                          		// 0x0088 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ToolTip;                                          		// 0x0098 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemGrade;                                        		// 0x00A8 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemGradeFrame;                                   		// 0x00B8 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatFrontEnd_BaseShop.BuyPriceStruct
// 0x0028
struct FBuyPriceStruct
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Period;                                           		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Price;                                            		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Icon;                                             		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_BaseShop.PresetItemStruct
// 0x00B4
struct FPresetItemStruct
{
	struct FString                                     Label;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     mainTitle;                                        		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MainImg;                                          		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SubTitle;                                         		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SubImg;                                           		// 0x0040 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     NearTitle;                                        		// 0x0050 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     NearImg;                                          		// 0x0060 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ThrowImg_Left;                                    		// 0x0070 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ThrowImg_Right;                                   		// 0x0080 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ArmorImg;                                         		// 0x0090 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ArmorTitle;                                       		// 0x00A0 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      ArmorProto : 1;                                   		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      MainProto : 1;                                    		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      SubProto : 1;                                     		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      NearProto : 1;                                    		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct CombatGame.CombatFrontEnd_BaseShop.BuyItemStruct
// 0x0034
struct FBuyItemStruct
{
	struct FString                                     ItemName;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemCategory;                                     		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ImgUrl;                                           		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      newIcon : 1;                                      		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      hotIcon : 1;                                      		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      protoIcon : 1;                                    		// 0x0030 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      buyIcon : 1;                                      		// 0x0030 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct CombatGame.CombatFrontEnd_BaseShop.BuyItemInfoStruct
// 0x0034
struct FBuyItemInfoStruct
{
	struct FString                                     ItemName;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemCategory;                                     		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ImgUrl;                                           		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      newIcon : 1;                                      		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      buyIcon : 1;                                      		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      protoIcon : 1;                                    		// 0x0030 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct CombatGame.CombatItemTransaction.ExpiredItem
// 0x001C
struct FExpiredItem
{
	int                                                InventorySlotIndex;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RefItemID;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemName;                                         		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bShow : 1;                                        		// 0x0018 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatItemTransaction.RepurchaseItem
// 0x000C
struct FRepurchaseItem
{
	int                                                InvenSlotIndex;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RefItemID;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                RentalIndex;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatItemTransaction.S_BaseItemInfo
// 0x0028
struct FS_BaseItemInfo
{
	int                                                ItemID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                PresetIndex;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	class UCombatDataTableRefItem*                     RefItem;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                EquipSlot;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemName;                                         		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                SlotIndex;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatItemTransaction.FilterInfo
// 0x0010
struct FFilterInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Filtertype1;                                      		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Filtertype2;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Filtertype3;                                      		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatItemTransaction.CallingCardInfo
// 0x000C
struct FCallingCardInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Expiration_Time;                                  		// 0x0004 (0x0004) [0x0000000000100000]              
	int                                                Remain_Time;                                      		// 0x0008 (0x0004) [0x0000000000100000]              
};

// ScriptStruct CombatGame.CombatItemTransaction.RandomBoxGainItemInfo
// 0x0020
struct FRandomBoxGainItemInfo
{
	int                                                RefRandomBoxCubeID;                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                GainGameMoney;                                    		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                GainMedal;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                GainGCoin;                                        		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                GainMCoin;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                GainBSCoin;                                       		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                RefItemID;                                        		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                RentalTime;                                       		// 0x001C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatItemTransaction.RandomBoxGainResultInfo
// 0x0014
struct FRandomBoxGainResultInfo
{
	int                                                RefRandomBoxID;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< struct FRandomBoxGainItemInfo >            GainItemList;                                     		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatItemTransaction.RandomBoxShopItemInfo
// 0x0008
struct FRandomBoxShopItemInfo
{
	int                                                InvenSlotIndex;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RefItemID;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatItemTransaction.UseLockedItemInfo
// 0x0030
struct FUseLockedItemInfo
{
	struct FString                                     CodeName;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      LockedBoxSlotList;                                		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      KeySlotList;                                      		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatItemTransaction.SendConsumeItemInfo
// 0x0008
struct FSendConsumeItemInfo
{
	int                                                InvenSlot;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RefItemIndex;                                     		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_BuyItem.abilityinfo
// 0x000C
struct Fabilityinfo
{
	int                                                NameID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                LockSpec;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                EquipSpec;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_BuyItem.Addoninfo
// 0x000C
struct FAddoninfo
{
	int                                                ImageID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TitleId;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                DescID;                                           		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_ChangePropernounPopup.SendTextInfo
// 0x0011
struct FSendTextInfo
{
	struct FString                                     Text;                                             		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      Error_Code;                                       		// 0x0010 (0x0001) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_Channel.BannerInfo
// 0x0014
struct FBannerInfo
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     URL;                                              		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatFrontEnd_Channel.ButtonInfo
// 0x0014
struct UCombatFrontEnd_Channel_FButtonInfo
{
	struct FString                                     Member;                                           		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_CharacterInfo_BattleTab.DisplayData
// 0x0058
struct FDisplayData
{
	int                                                Win;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Lose;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Kill;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                HeadShotKill;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                FatalKill;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Death;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Suicide;                                          		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Runaway;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                bestScore;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                bestKill;                                         		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                BestAssist;                                       		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                BestMission;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                Assist;                                           		// 0x0030 (0x0004) [0x0000000000000000]              
	struct FString                                     CreateIDTime;                                     		// 0x0034 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayTime;                                         		// 0x0044 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Score;                                            		// 0x0054 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_CharacterInfo_WeaponTab.WeaponStatType
// 0x0024
struct FWeaponStatType
{
	int                                                GrouppingWeaponID;                                		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     DisplayName;                                      		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                killcount;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                HeadshotKillCount;                                		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                FatalKillCount;                                   		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                ImageID;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.OnlineSubsystemCombat.LocalTalkerSteam
// 0x0001(0x0005 - 0x0004)
struct FLocalTalkerSteam : FLocalTalker
{
	unsigned char                                      MuteType;                                         		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_ClanHome.PopupMenuStruct
// 0x0008
struct FPopupMenuStruct
{
	int                                                LabelID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned long                                      Category : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Disabled : 1;                                     		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct CombatGame.CombatFrontEnd_ClanList.FixTextInfo
// 0x0014
struct FFixTextInfo
{
	struct FString                                     Member;                                           		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_ClanList.ClanInformation
// 0x0044
struct FClanInformation
{
	struct FString                                     ClanName;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Rank;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     ClanMaster;                                       		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ClanPoint;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                ClanMembers;                                      		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                A_Match_Win;                                      		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                A_Match_Lose;                                     		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                B_Match_Win;                                      		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                B_Match_Lose;                                     		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                Total_Match_Win;                                  		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                Total_Match_Lose;                                 		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_Community.PopupItemInfo
// 0x0008
struct UCombatFrontEnd_Community_FPopupItemInfo
{
	unsigned char                                      ItemType;                                         		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      DisabledForOffline : 1;                           		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDefaultDisabled : 1;                             		// 0x0004 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct CombatGame.CombatFrontEnd_Community.MessengerListStruct
// 0x0018
struct FMessengerListStruct
{
	int                                                LabelID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Label;                                            		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bOpened : 1;                                      		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bOpenWhenInit : 1;                                		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct CombatGame.CombatFrontEnd_Community.UserInfoTooltipInfo
// 0x0078
struct FUserInfoTooltipInfo
{
	int                                                userID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     NickName;                                         		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Level;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     LevelName;                                        		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      SessionState;                                     		// 0x0028 (0x0001) [0x0000000000000000]              
	int                                                refChannelIndex;                                  		// 0x002C (0x0004) [0x0000000000000000]              
	struct FString                                     ServerName;                                       		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      ChannelNumber;                                    		// 0x0040 (0x0001) [0x0000000000000000]              
	struct FString                                     ChannelName;                                      		// 0x0044 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      UnknownData00[ 0x2 ];                             		// 0x0054 (0x0002) UNKNOWN PROPERTY: WordProperty CombatGame.CombatFrontEnd_Community.UserInfoTooltipInfo.MatchroomNumber
	int                                                RefModeIndex;                                     		// 0x0058 (0x0004) [0x0000000000000000]              
	int                                                RefModeGroupIndex;                                		// 0x005C (0x0004) [0x0000000000000000]              
	struct FString                                     ModeName;                                         		// 0x0060 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                X;                                                		// 0x0070 (0x0004) [0x0000000000000000]              
	int                                                Y;                                                		// 0x0074 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_CreateCharacter.SendNickInfo
// 0x0014
struct FSendNickInfo
{
	unsigned char                                      Error_Code;                                       		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     NickName;                                         		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatFrontEnd_Dashboard.PopupItemInfo
// 0x0018
struct UCombatFrontEnd_Dashboard_FPopupItemInfo
{
	unsigned char                                      Id;                                               		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                CaptionID;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     CodeName;                                         		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatFrontEnd_Dashboard.MyMoneyStruct
// 0x0018
struct FMyMoneyStruct
{
	int                                                Type;                                             		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                LastMoney;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                TooltipID;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsRefresh : 1;                                   		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsCharge : 1;                                    		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                RefreshTooltipID;                                 		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ChargeTooltipID;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_Dashboard.DashboardStruct
// 0x0034
struct FDashboardStruct
{
	int                                                LabelID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TooltipID;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Position;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                LabelStrID;                                       		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     MemberName;                                       		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CodeName;                                         		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bDefaultSelected : 1;                             		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSelected : 1;                                    		// 0x0030 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bDisabled : 1;                                    		// 0x0030 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct CombatGame.CombatFrontEnd_Event.EventTabStruct
// 0x001C
struct FEventTabStruct
{
	int                                                TabID;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	class UCombatFrontEnd_Event_TabBase*               TabClass;                                         		// 0x0004 (0x0008) [0x0000000000000000]              
	struct FString                                     ActivationCodeName;                               		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatFrontEnd_Event_AttendanceCheckTab.RewardItemData
// 0x0040
struct FRewardItemData
{
	struct FString                                     ItemName;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Image;                                            		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ValueType;                                        		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Value;                                            		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatFrontEnd_Event_AttendanceCheckTab.RewardItemStruct
// 0x0024
struct FRewardItemStruct
{
	int                                                Day;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemImage;                                        		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FRewardItemData >                   Items;                                            		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatFrontEnd_Exchange.BuyExchangeStruct
// 0x0024
struct FBuyExchangeStruct
{
	struct FString                                     CoinNum;                                          		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ExchangePrice;                                    		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Money;                                            		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_Inventory.InvenItemInfo
// 0x0038
struct FInvenItemInfo
{
	int                                                FirstSlotIndex;                                   		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ItemIndex;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                RentalTime;                                       		// 0x0008 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsRandomBox : 1;                                 		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIsNew : 1;                                       		// 0x000C (0x0004) [0x0000000000000000] [0x00000002] 
	int                                                EquipState;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ItemState;                                        		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     StackViewCodeName;                                		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      SlotList;                                         		// 0x0028 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatFrontEnd_Inventory.InvenTabStruct
// 0x0018
struct FInvenTabStruct
{
	int                                                LabelID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Label;                                            		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bDefaultDisabled : 1;                             		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDisabled : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSelected : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct CombatGame.CombatFrontEnd_Inventory.PresetTabStruct
// 0x0014
struct FPresetTabStruct
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Label;                                            		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatFrontEnd_Inventory.EquipSlotStruct
// 0x0060
struct FEquipSlotStruct
{
	int                                                slotType;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SlotIndex;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                IconTag;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     ItemName;                                         		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemUrl;                                          		// 0x001C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemGradeUrl;                                     		// 0x002C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemGradeFrameUrl;                                		// 0x003C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Itemperiod;                                       		// 0x004C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      IsEquip : 1;                                      		// 0x005C (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      IsProto : 1;                                      		// 0x005C (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      IsExpire : 1;                                     		// 0x005C (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct CombatGame.CombatFrontEnd_MainLobby.ButtonInfo
// 0x0014
struct UCombatFrontEnd_MainLobby_FButtonInfo
{
	struct FString                                     Member;                                           		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatLobbyTransaction.MatchRoomInfo
// 0x002C
struct FMatchRoomInfo
{
	int                                                Number;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Open_Type;                                        		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned char                                      Title_Type;                                       		// 0x0005 (0x0001) [0x0000000000000000]              
	unsigned char                                      Title_Number;                                     		// 0x0006 (0x0001) [0x0000000000000000]              
	struct FString                                     Title;                                            		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Mode_Group_ID;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Mode_ID;                                          		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Map_ID;                                           		// 0x0020 (0x0004) [0x0000000000000000]              
	unsigned char                                      Current_User;                                     		// 0x0024 (0x0001) [0x0000000000000000]              
	unsigned char                                      MatchRoomState;                                   		// 0x0025 (0x0001) [0x0000000000000000]              
	unsigned char                                      Max_User;                                         		// 0x0026 (0x0001) [0x0000000000000000]              
	unsigned long                                      bAutoTeamBalance : 1;                             		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatLobbyTransaction.UpdateMatchRoomInfo
// 0x0030
struct FUpdateMatchRoomInfo
{
	TArray< int >                                      AddList;                                          		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      DeleteList;                                       		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< int >                                      UpdateList;                                       		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatLobbyTransaction.LookInMatchRoomUserInfo
// 0x0044
struct FLookInMatchRoomUserInfo
{
	struct FString                                     Nick;                                             		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Level;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	unsigned char                                      Team;                                             		// 0x0018 (0x0001) [0x0000000000000000]              
	int                                                Enter_Tick;                                       		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                clan_id;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                Emblem_ID;                                        		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                Calling_Card_ID;                                  		// 0x0028 (0x0004) [0x0000000000000000]              
	struct FString                                     Clan_Name;                                        		// 0x002C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Clan_Exp;                                         		// 0x003C (0x0004) [0x0000000000000000]              
	int                                                Clan_Ranking_Point;                               		// 0x0040 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_MakeRoom.Makeroom_MissionInfo
// 0x0038
struct FMakeroom_MissionInfo
{
	int                                                IndexID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RefID;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                DefaultModeRefID;                                 		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                DefaultModeGroupID;                               		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                bgType;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     bgUrl;                                            		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Label;                                            		// 0x0024 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bDisabled : 1;                                    		// 0x0034 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatFrontEnd_MakeRoom.Makeroom_ModeInfo
// 0x0064
struct FMakeroom_ModeInfo
{
	int                                                IndexID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RefID;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                DefaultMapRefID;                                  		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                DefaultModeRefID;                                 		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned long                                      RandomMode : 1;                                   		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     Label;                                            		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Desc;                                             		// 0x0024 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     RandomBGImgPath;                                  		// 0x0034 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ButtonBGImgPath;                                  		// 0x0044 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      BetaVersion : 1;                                  		// 0x0054 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                MapCounts[ 0x3 ];                                 		// 0x0058 (0x000C) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_MakeRoom.Makeroom_MapInfo
// 0x0084
struct FMakeroom_MapInfo
{
	int                                                IndexID;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                RefID;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                RefModeID;                                        		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                SizeType;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     Label;                                            		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     EventDesc;                                        		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SizeDesc;                                         		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MaxPlayerCountDesc;                               		// 0x0040 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ButtonBGImgPath;                                  		// 0x0050 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SummaryBGImgPath;                                 		// 0x0060 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MinimapImgPath;                                   		// 0x0070 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIcon_New : 1;                                    		// 0x0080 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIcon_Event : 1;                                  		// 0x0080 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIcon_Pop : 1;                                    		// 0x0080 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDisabled : 1;                                    		// 0x0080 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      BetaVersion : 1;                                  		// 0x0080 (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct CombatGame.CombatFrontEnd_MatchResult.UIScoreboardData
// 0x00B0
struct FUIScoreboardData
{
	unsigned char                                      TeamIndex;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      TotalRanking;                                     		// 0x0001 (0x0001) [0x0000000000000000]              
	unsigned char                                      TeamRanking;                                      		// 0x0002 (0x0001) [0x0000000000000000]              
	struct FString                                     LevelIconPath;                                    		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ClanIconPath;                                     		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     RankIconPath;                                     		// 0x0024 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     TierIconPath;                                     		// 0x0034 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PlayerName;                                       		// 0x0044 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CCardIconPath;                                    		// 0x0054 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     RandomBoxUrl;                                     		// 0x0064 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Score;                                            		// 0x0074 (0x0004) [0x0000000000000000]              
	int                                                Kill;                                             		// 0x0078 (0x0004) [0x0000000000000000]              
	int                                                Death;                                            		// 0x007C (0x0004) [0x0000000000000000]              
	int                                                Assist;                                           		// 0x0080 (0x0004) [0x0000000000000000]              
	int                                                Life;                                             		// 0x0084 (0x0004) [0x0000000000000000]              
	int                                                Gold;                                             		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                Exp;                                              		// 0x008C (0x0004) [0x0000000000000000]              
	int                                                RandomBoxEffectType;                              		// 0x0090 (0x0004) [0x0000000000000000]              
	int                                                GoldPercent;                                      		// 0x0094 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                ExpPercent;                                       		// 0x0098 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< unsigned char >                            BoosterItemList;                                  		// 0x009C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned long                                      bMe : 1;                                          		// 0x00AC (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatFrontEnd_MatchRoom.MatchroomButtonStruct
// 0x002C
struct FMatchroomButtonStruct
{
	int                                                TooltipID;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     ToolTip;                                          		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bDefaultSelected : 1;                             		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bDefaultDisabled : 1;                             		// 0x0014 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bSelected : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDisabled : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000008] 
	struct FString                                     MemberName;                                       		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bUpdateTooltip : 1;                               		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bUpdateSelected : 1;                              		// 0x0028 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bUpdateDisabled : 1;                              		// 0x0028 (0x0004) [0x0000000000000000] [0x00000004] 
};

// ScriptStruct CombatGame.CombatFrontEnd_MatchRoom.RClickPopupMenuItem
// 0x000C
struct FRClickPopupMenuItem
{
	int                                                NameCode;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                userID;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned long                                      Disabled : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      HostOnly : 1;                                     		// 0x0008 (0x0004) [0x0000000000000000] [0x00000002] 
};

// ScriptStruct CombatGame.CombatFrontEnd_MatchRoom.GameOptionUIInfo
// 0x0034
struct FGameOptionUIInfo
{
	class UCombatUIDataProvider_MenuOption*            OptionSetting;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      UIID;                                             		// 0x0008 (0x0001) [0x0000000000000000]              
	unsigned long                                      bChangeable : 1;                                  		// 0x000C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     TitleText;                                        		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      DefaultIndex;                                     		// 0x0020 (0x0001) [0x0000000000000000]              
	TArray< struct FString >                           GameOptionSet;                                    		// 0x0024 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatFrontEnd_QuickStart.QuickStart_MissionInfo
// 0x0018
struct FQuickStart_MissionInfo
{
	int                                                RefID;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Label;                                            		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bDisabled : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatFrontEnd_QuickStart.QuickStart_ModeInfo
// 0x0040
struct FQuickStart_ModeInfo
{
	int                                                RefID;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     Label;                                            		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Desc;                                             		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ButtonBGImgPath;                                  		// 0x0024 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                MapCounts[ 0x3 ];                                 		// 0x0034 (0x000C) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_QuickStart.QuickStart_MapInfo
// 0x007C
struct FQuickStart_MapInfo
{
	int                                                RefID;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                SizeType;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
	struct FString                                     Label;                                            		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     EventDesc;                                        		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SizeDesc;                                         		// 0x0028 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MaxPlayerCountDesc;                               		// 0x0038 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     ButtonBGImgPath;                                  		// 0x0048 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     SummaryBGImgPath;                                 		// 0x0058 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     MinimapImgPath;                                   		// 0x0068 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bIcon_New : 1;                                    		// 0x0078 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bIcon_Event : 1;                                  		// 0x0078 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bIcon_Pop : 1;                                    		// 0x0078 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      bDisabled : 1;                                    		// 0x0078 (0x0004) [0x0000000000000000] [0x00000008] 
};

// ScriptStruct CombatGame.CombatFrontEnd_Repurchase.RepurchaseItemStruct
// 0x00DC
struct FRepurchaseItemStruct
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MoneyType;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                IconTag;                                          		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                periodSelect;                                     		// 0x000C (0x0004) [0x0000000000000000]              
	struct FString                                     ItemName;                                         		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemImg;                                          		// 0x0020 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemGrade;                                        		// 0x0030 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     categoryName;                                     		// 0x0040 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     ItemPrice;                                        		// 0x0050 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     onSale;                                           		// 0x0060 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     AddItemPath[ 0x5 ];                               		// 0x0070 (0x0050) [0x0000000000500000]              ( CPF_NeedCtorLink )
	struct FString                                     Label;                                            		// 0x00C0 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	class UGFxObject*                                  Period;                                           		// 0x00D0 (0x0008) [0x0000000000000000]              
	unsigned long                                      nobuy : 1;                                        		// 0x00D8 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      Select : 1;                                       		// 0x00D8 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      iconNew : 1;                                      		// 0x00D8 (0x0004) [0x0000000000000000] [0x00000004] 
	unsigned long                                      iconHot : 1;                                      		// 0x00D8 (0x0004) [0x0000000000000000] [0x00000008] 
	unsigned long                                      iconProto : 1;                                    		// 0x00D8 (0x0004) [0x0000000000000000] [0x00000010] 
};

// ScriptStruct CombatGame.CombatFrontEnd_Sort.SortInfo
// 0x0008
struct FSortInfo
{
	int                                                _Type;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                _LabelID;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_Storage.LabelInfo
// 0x0014
struct FLabelInfo
{
	struct FString                                     Member;                                           		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_Storage.MoneyInfo
// 0x0008
struct FMoneyInfo
{
	int                                                StringID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                ImageID;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_Storage.ButtonInfo
// 0x0024
struct UCombatFrontEnd_Storage_FButtonInfo
{
	struct FString                                     Member;                                           		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     CodeName;                                         		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Id;                                               		// 0x0020 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatMailTransaction.AttachItemInfo
// 0x0009
struct FAttachItemInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Value;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0008 (0x0001) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatMailTransaction.MailBoxInfo
// 0x0080
struct FMailBoxInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Type;                                             		// 0x0004 (0x0001) [0x0000000000000000]              
	int                                                SenderLevel;                                      		// 0x0008 (0x0004) [0x0000000000000000]              
	struct FString                                     SenderNick;                                       		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     senderClanName;                                   		// 0x001C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned char                                      State;                                            		// 0x002C (0x0001) [0x0000000000000000]              
	struct FString                                     Title;                                            		// 0x0030 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Message;                                          		// 0x0040 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Money[ 0x5 ];                                     		// 0x0050 (0x0014) [0x0000000000000000]              
	TArray< struct FAttachItemInfo >                   ItemList;                                         		// 0x0064 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FTimeData                                   SendTime;                                         		// 0x0074 (0x0008) [0x0000000000000000]              
	int                                                Expiration_Time;                                  		// 0x007C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_UserInfo.RecordInfo
// 0x0024
struct FRecordInfo
{
	struct FString                                     _Name;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TitleId;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     Desc;                                             		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatFrontEnd_UserInfo.CompetitionStringIDInfo
// 0x0014
struct FCompetitionStringIDInfo
{
	int                                                season;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Emblem;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                NoEmblem;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Score;                                            		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                NoScore;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEnd_UserInfo.SubTabInfo
// 0x0018
struct FSubTabInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     CodeName;                                         		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bHide : 1;                                        		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatUserInfoTransaction.CompetitionInfo
// 0x000C
struct FCompetitionInfo
{
	int                                                ModeID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                TierPoint;                                        		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                MaxTierPoint;                                     		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatUserInfoTransaction.MatchPlayHistoryInfo
// 0x0048
struct FMatchPlayHistoryInfo
{
	struct FString                                     VsClanName;                                       		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ChannelID;                                        		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                ModeID;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                MapID;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                Score[ 0x2 ];                                     		// 0x001C (0x0008) [0x0000000000000000]              
	int                                                Kill;                                             		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                Assist;                                           		// 0x0028 (0x0004) [0x0000000000000000]              
	int                                                Death;                                            		// 0x002C (0x0004) [0x0000000000000000]              
	int                                                MatchResult;                                      		// 0x0030 (0x0004) [0x0000000000000000]              
	int                                                HeadShotKill;                                     		// 0x0034 (0x0004) [0x0000000000000000]              
	int                                                FatalShotKill;                                    		// 0x0038 (0x0004) [0x0000000000000000]              
	struct FTimeData                                   MatchEndTime;                                     		// 0x003C (0x0008) [0x0000000000000000]              
	int                                                MatchTeam;                                        		// 0x0044 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatUserInfoTransaction.MatchHistoryInfo
// 0x0034
struct FMatchHistoryInfo
{
	int                                                MatchCount;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Win;                                              		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Lose;                                             		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Kill;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Assist;                                           		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Death;                                            		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                HeadShotKill;                                     		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                FatalShotKill;                                    		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                Runaway;                                          		// 0x0020 (0x0004) [0x0000000000000000]              
	TArray< struct FMatchPlayHistoryInfo >             MatchPlayHistoryList;                             		// 0x0024 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatUserInfoTransaction.ModeStatInfo
// 0x0028
struct FModeStatInfo
{
	int                                                ModeID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                MatchCount;                                       		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Win;                                              		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Lose;                                             		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Kill;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Assist;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Death;                                            		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                HeadShotKill;                                     		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                FatalKill;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                Runaway;                                          		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEndInfo.SceneInfo
// 0x0018
struct FSceneInfo
{
	unsigned char                                      Scene;                                            		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FName                                       StateName;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
	unsigned char                                      SceneType;                                        		// 0x000C (0x0001) [0x0000000000000000]              
	unsigned char                                      PreScene;                                         		// 0x000D (0x0001) [0x0000000000000000]              
	unsigned char                                      NextScene;                                        		// 0x000E (0x0001) [0x0000000000000000]              
	struct FName                                       CameraName;                                       		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatFrontEndPC.InputExpireTimeInfo
// 0x000C
struct FInputExpireTimeInfo
{
	struct FName                                       StateName;                                        		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              InputExpireTime;                                  		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatFrontEndPC.FrontEndCameraActorInfo
// 0x0014
struct FFrontEndCameraActorInfo
{
	class ACameraActor*                                FEComeraActor;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       CameraTag;                                        		// 0x0008 (0x0008) [0x0000000000000000]              
	float                                              DefaultFOVAngle;                                  		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatGameTableDepot.DataTableInfo
// 0x0018
struct FDataTableInfo
{
	class UClass*                                      RefTableClass;                                    		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     XML;                                              		// 0x0008 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatGameEngine.SYSTEMSETTING_DATA
// 0x0014
struct FSYSTEMSETTING_DATA
{
	struct FString                                     SectionName;                                      		// 0x0000 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                Step;                                             		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatHostageActor.ReplicatedMeshInfo
// 0x0020
struct FReplicatedMeshInfo
{
	class USkeletalMeshComponent*                      MeshComponent;                                    		// 0x0000 (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FVector                                     NewLoc;                                           		// 0x0008 (0x000C) [0x0000000000000000]              
	struct FRotator                                    NewRot;                                           		// 0x0014 (0x000C) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatHostageActor.HostageTakeHitInfo
// 0x0018
struct FHostageTakeHitInfo
{
	struct FVector                                     HitLocation;                                      		// 0x0000 (0x000C) [0x0000000000000000]              
	class UClass*                                      DamageType;                                       		// 0x000C (0x0008) [0x0000000000000000]              
	float                                              HitTime;                                          		// 0x0014 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatHostageActor.PassiveWheel
// 0x0054
struct FPassiveWheel
{
	float                                              SteerFactor;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FName                                       SkelControlName;                                  		// 0x0004 (0x0008) [0x0000000000000000]              
	class USkelControlWheel*                           WheelControl;                                     		// 0x000C (0x0008) [0x0000000000000000]              
	float                                              Radius;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FName                                       WheelBoneName;                                    		// 0x0018 (0x0008) [0x0000000000000000]              
	float                                              MaxTravel;                                        		// 0x0020 (0x0004) [0x0000000000000000]              
	float                                              TravelAdjustment;                                 		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned long                                      ParticleInitialised : 1;                          		// 0x0028 (0x0004) [0x0000000000000000] [0x00000001] 
	class UClass*                                      WheelPSCClass;                                    		// 0x002C (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             ParticleTemplate;                                 		// 0x0034 (0x0008) [0x0000000000000000]              
	class UParticleSystemComponent*                    WheelParticleComp;                                		// 0x003C (0x0008) [0x0000000004080008]              ( CPF_ExportObject | CPF_Component | CPF_EditInline )
	struct FName                                       SlipParticleParamName;                            		// 0x0044 (0x0008) [0x0000000000000000]              
	struct FName                                       TraceStartSocket;                                 		// 0x004C (0x0008) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatInGameBattleLog.DisplayTable
// 0x0030
struct FDisplayTable
{
	struct FString                                     OtherPlayerName;                                  		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                OtherPlayerTotalDamage;                           		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                OtherDamagePercent;                               		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                MyTotalDamage;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
	int                                                MyDamagePercent;                                  		// 0x001C (0x0004) [0x0000000000000000]              
	int                                                OtherPlayerLastHitBodyIndex;                      		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                MyLastHitBodyIndex;                               		// 0x0024 (0x0004) [0x0000000000000000]              
	unsigned char                                      KillType;                                         		// 0x0028 (0x0001) [0x0000000000000000]              
	float                                              TimeStamp;                                        		// 0x002C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatHUD_BlockAndReport.BlockAndReportLabelSettingInfo
// 0x0014
struct FBlockAndReportLabelSettingInfo
{
	struct FString                                     LabelString;                                      		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                LabelID;                                          		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatHUD_BlockAndReport.ReportPlayerInfo
// 0x0014
struct FReportPlayerInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< unsigned char >                            TypeList;                                         		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatHUD_IFFContainer.IFFObjectData
// 0x000C
struct FIFFObjectData
{
	unsigned long                                      bUsing : 1;                                       		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	class UCombatHUD_IFFObject*                        IFFObject;                                        		// 0x0004 (0x0008) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatHUD_KillMark.KillMarkStringStruct
// 0x0014
struct FKillMarkStringStruct
{
	int                                                KMStringID;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     KMName;                                           		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatOccupiedAreaVolume.OccupyDataType
// 0x0008
struct FOccupyDataType
{
	unsigned char                                      OccupyState;                                      		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                OccupyingTeamIndex;                               		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatPracticeGame.SPracticeGameHotKeyInfo
// 0x0014
struct FSPracticeGameHotKeyInfo
{
	TArray< struct FString >                           Keys;                                             		// 0x0000 (0x0010) [0x0000000000404000]              ( CPF_Config | CPF_NeedCtorLink )
	int                                                DescriptionID;                                    		// 0x0010 (0x0004) [0x0000000000004000]              ( CPF_Config )
};

// ScriptStruct CombatGame.CombatHUD_RadioMessage.LableDataType
// 0x0014
struct FLableDataType
{
	struct FString                                     ASBindingName;                                    		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                ASLableIndex;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatHUD_SelectPosition.PositionStruct
// 0x0024
struct FPositionStruct
{
	int                                                Index;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     KeyValue;                                         		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Position;                                         		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatHUD_SelectPosition.SkillInfoStruct
// 0x0030
struct FSkillInfoStruct
{
	struct FString                                     ImageURL;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Name;                                             		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Desc;                                             		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatHUD_SelectPosition.PositionInfoStruct
// 0x0030
struct FPositionInfoStruct
{
	struct FString                                     PositionName;                                     		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     PositionDesc;                                     		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FSkillInfoStruct >                  SkillInfolist;                                    		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatHUD_TacticalMapAndScoreboard.IconRawData
// 0x0020
struct FIconRawData
{
	class UGFxObject*                                  Icon;                                             		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     FrameString;                                      		// 0x0008 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                FrameInt;                                         		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bUsed : 1;                                        		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatHUD_TacticalMapAndScoreboard.NameplateRawData
// 0x0048(0x0068 - 0x0020)
struct FNameplateRawData : FIconRawData
{
	class UGFxObject*                                  ChampionshipObserverPlayerNameTF;                 		// 0x0020 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ChampionshipObserverIndexTF;                      		// 0x0028 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  FriendlyPlayerNameTF;                             		// 0x0030 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ViewTargetHPMC;                                   		// 0x0038 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  VCHPMC;                                           		// 0x0040 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  PMHPMC;                                           		// 0x0048 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  ViewTargetHP_GaugeMC;                             		// 0x0050 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  VCHPMC_GaugeMC;                                   		// 0x0058 (0x0008) [0x0000000000000000]              
	class UGFxObject*                                  PMHPMC_GaugeMC;                                   		// 0x0060 (0x0008) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatHUD_TacticalMapAndScoreboard.NameplateData
// 0x0030
struct FNameplateData
{
	TArray< struct FNameplateRawData >                 Icons;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LinkageName;                                      		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BaseInstanceName;                                 		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatHUD_TacticalMapAndScoreboard.IconData
// 0x0030
struct FIconData
{
	TArray< struct FIconRawData >                      Icons;                                            		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     LinkageName;                                      		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     BaseInstanceName;                                 		// 0x0020 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatHUD_WarmUp.WarmUpInfo
// 0x0014
struct FWarmUpInfo
{
	struct FString                                     stUserName;                                       		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bComplete : 1;                                    		// 0x0010 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatInGameBattleLog.battleLog
// 0x0034
struct FbattleLog
{
	struct FString                                     CauserName;                                       		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     VictimName;                                       		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                TotalDamage;                                      		// 0x0020 (0x0004) [0x0000000000000000]              
	int                                                DamagePercent;                                    		// 0x0024 (0x0004) [0x0000000000000000]              
	int                                                LastHitBodyIndex;                                 		// 0x0028 (0x0004) [0x0000000000000000]              
	float                                              TimeStamp;                                        		// 0x002C (0x0004) [0x0000000000000000]              
	unsigned long                                      bVictimIsDead : 1;                                		// 0x0030 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatInGameOptionMenu.MenuInfo
// 0x0008
struct FMenuInfo
{
	unsigned long                                      bVisible : 1;                                     		// 0x0000 (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                LabelID;                                          		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatInGameResourcePool.LandingZone
// 0x0010
struct FLandingZone
{
	class ACombatPlayerStart*                          Anchor;                                           		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UDecalComponent*                             LandingZoneDecal;                                 		// 0x0008 (0x0008) [0x0000000004080009]              ( CPF_Edit | CPF_ExportObject | CPF_Component | CPF_EditInline )
};

// ScriptStruct CombatGame.CombatInGameResourcePool.AnimSetCallbackData
// 0x0021
struct FAnimSetCallbackData
{
	class UObject*                                     CallbackOwner;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FName                                       CallBackFunctionName;                             		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     AnimSetName;                                      		// 0x0010 (0x0010) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      Gender;                                           		// 0x0020 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatItemFXBase.SItemFX
// 0x0010
struct FSItemFX
{
	class UParticleSystem*                             PS_FX;                                            		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class UParticleSystemComponent*                    PSC_FX;                                           		// 0x0008 (0x0008) [0x0000000004082008]              ( CPF_ExportObject | CPF_Transient | CPF_Component | CPF_EditInline )
};

// ScriptStruct CombatGame.CombatLCTFFlagActor.SkeletalMeshMaterial
// 0x000C
struct FSkeletalMeshMaterial
{
	int                                                MaterialIndex;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          Material;                                         		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatLCTFGame.CarriedObjectBounsInfo
// 0x0008
struct FCarriedObjectBounsInfo
{
	float                                              RankExp;                                          		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              InGameCR;                                         		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatLCTFModePRI.LimitAddScoreCountStruct
// 0x0005
struct FLimitAddScoreCountStruct
{
	int                                                AddScoreCount;                                    		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      SpawnID;                                          		// 0x0004 (0x0001) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatLog.PlayInfo
// 0x0014
struct FPlayInfo
{
	int                                                userID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Kill;                                             		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Death;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                Assist;                                           		// 0x000C (0x0004) [0x0000000000000000]              
	int                                                Score;                                            		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatLog.RoundInfo
// 0x002C
struct FRoundInfo
{
	int                                                Round;                                            		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Winner;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                PlayTime;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	TArray< struct FPlayInfo >                         VCTeamInfo;                                       		// 0x000C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	TArray< struct FPlayInfo >                         PMTeamInfo;                                       		// 0x001C (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatLog.FireCountingInfo
// 0x0010
struct FFireCountingInfo
{
	int                                                userID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                Round;                                            		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                WeaponID;                                         		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                FireCount;                                        		// 0x000C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatLog.HitCountingInfo
// 0x0038
struct FHitCountingInfo
{
	int                                                HitIndex;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	int                                                userID;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                Round;                                            		// 0x0008 (0x0004) [0x0000000000000000]              
	int                                                WeaponID;                                         		// 0x000C (0x0004) [0x0000000000000000]              
	unsigned char                                      HitPart;                                          		// 0x0010 (0x0001) [0x0000000000000000]              
	int                                                Distance;                                         		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                Damage;                                           		// 0x0018 (0x0004) [0x0000000000000000]              
	unsigned long                                      bKill : 1;                                        		// 0x001C (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                targetUserID;                                     		// 0x0020 (0x0004) [0x0000000000000000]              
	struct FString                                     HitTime;                                          		// 0x0024 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	int                                                FireCount;                                        		// 0x0034 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatLog.SavedTeamInfo
// 0x0014
struct FSavedTeamInfo
{
	int                                                TeamIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     TeamName;                                         		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatLog.SavedUserInfo
// 0x0014
struct FSavedUserInfo
{
	int                                                Uid;                                              		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     UserName;                                         		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatLog.SavedWeaponInfo
// 0x0014
struct FSavedWeaponInfo
{
	int                                                WeaponIndex;                                      		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     WeaponName;                                       		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatLog.SavedHitPartInfo
// 0x0014
struct FSavedHitPartInfo
{
	unsigned char                                      HitPart;                                          		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FString                                     HitPartName;                                      		// 0x0004 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatLogData.WeaponFireData
// 0x0014
struct FWeaponFireData
{
	int                                                WeaponID;                                         		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FVector                                     FireLocation_Transition;                          		// 0x0004 (0x000C) [0x0000000000000000]              
	int                                                DBWriterID;                                       		// 0x0010 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatObjectPool.ObjectCacheDatum
// 0x0028
struct FObjectCacheDatum
{
	struct FString                                     ObjectName;                                       		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	class UClass*                                      ObjectClass;                                      		// 0x0010 (0x0008) [0x0000000000000000]              
	class UObject*                                     ObjectData;                                       		// 0x0018 (0x0008) [0x0000000000000000]              
	unsigned char                                      ObjectType;                                       		// 0x0020 (0x0001) [0x0000000000000000]              
	int                                                ReferenceCounter;                                 		// 0x0024 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatObjectPool.MaterialSetListMaterialDatum
// 0x0018
struct FMaterialSetListMaterialDatum
{
	struct Fdword                                      ObjectID;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          MaterialSetListMaterial;                          		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                ReferenceCounter;                                 		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	struct FDouble                                     LastAccessTime;                                   		// 0x0010 (0x0008) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatObjectPool.MergedMeshCacheDatum
// 0x0021
struct FMergedMeshCacheDatum
{
	struct Fdword                                      ObjectID;                                         		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	TArray< struct FString >                           MeshPartName;                                     		// 0x0004 (0x0010) [0x0000000000500001]              ( CPF_Edit | CPF_NeedCtorLink )
	class USkeletalMesh*                               MergedMesh;                                       		// 0x0014 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                ReferenceCounter;                                 		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned char                                      MeshGroupLabel;                                   		// 0x0020 (0x0001) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatObjectPool.MergedMeshList
// 0x0010
struct FMergedMeshList
{
	TArray< struct FMergedMeshCacheDatum >             MeshList;                                         		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatOccupiedAreaVolume.OccupiedTeamMemberInfo
// 0x0014
struct FOccupiedTeamMemberInfo
{
	int                                                TeamIndex;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	TArray< class APawn* >                             MemberPawn;                                       		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatOccupiedAreaVolume.FlagParticleParam
// 0x0014
struct FFlagParticleParam
{
	struct FName                                       Name;                                             		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FVector                                     Vector;                                           		// 0x0008 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatPawn_PracticeGame.SHitInfo
// 0x0028
struct FSHitInfo
{
	struct FString                                     Name;                                             		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                Distance;                                         		// 0x0010 (0x0004) [0x0000000000000000]              
	int                                                Damage;                                           		// 0x0014 (0x0004) [0x0000000000000000]              
	struct FString                                     BodyName;                                         		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatPawn_PracticeGame.SFireInfo
// 0x001C
struct FSFireInfo
{
	float                                              StartTime;                                        		// 0x0000 (0x0004) [0x0000000000000000]              
	class ACombatWeapon*                               Weapon;                                           		// 0x0004 (0x0008) [0x0000000000000000]              
	TArray< struct FSHitInfo >                         HitInfoArray;                                     		// 0x000C (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatPawn_PracticeGame.SProjectileCamera
// 0x0018
struct FSProjectileCamera
{
	float                                              MaxPlayTime;                                      		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              StartDelay;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              FirstFollowTime;                                  		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RotateSpeed;                                      		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              KeepDistance;                                     		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              RecoverTime;                                      		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatPawn_TrophyTurret.STargetExplodeLocationInfo
// 0x0010
struct FSTargetExplodeLocationInfo
{
	unsigned char                                      btFlag;                                           		// 0x0000 (0x0001) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0004 (0x000C) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatPracticeGame.CheatPawnInfo
// 0x0068
struct FCheatPawnInfo
{
	int                                                Number;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	unsigned char                                      Team;                                             		// 0x0004 (0x0001) [0x0000000000000000]              
	unsigned long                                      bIsCrouched : 1;                                  		// 0x0008 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      Physics;                                          		// 0x000C (0x0001) [0x0000000000000000]              
	struct FVector                                     Location;                                         		// 0x0010 (0x000C) [0x0000000000000000]              
	struct FRotator                                    Rotation;                                         		// 0x001C (0x000C) [0x0000000000000000]              
	class UClass*                                      Weapon;                                           		// 0x0028 (0x0008) [0x0000000000000000]              
	class UClass*                                      FamilyInfo;                                       		// 0x0030 (0x0008) [0x0000000000000000]              
	int                                                AP_Buff[ 0xA ];                                   		// 0x0038 (0x0028) [0x0000000000000000]              
	int                                                APForExplosion_Buff;                              		// 0x0060 (0x0004) [0x0000000000000000]              
	int                                                AmmorItemGrade;                                   		// 0x0064 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatRandomBoxTransaction.CubeInfo
// 0x001C
struct FCubeInfo
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     CodeName;                                         		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                OutPutItemIndex;                                  		// 0x0014 (0x0004) [0x0000000000000000]              
	int                                                UpdatePercent;                                    		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatRandomBoxTransaction.RandomBoxPickUpInfo
// 0x0034
struct FRandomBoxPickUpInfo
{
	struct FTimeData                                   StartTime;                                        		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FTimeData                                   EndTime;                                          		// 0x0008 (0x0008) [0x0000000000000000]              
	int                                                RepeatOption;                                     		// 0x0010 (0x0004) [0x0000000000000000]              
	struct FString                                     GroupName;                                        		// 0x0014 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FCubeInfo >                         CubeInfoList;                                     		// 0x0024 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatSeizeFlagActor.SkeletalMeshMaterialInfo
// 0x000C
struct FSkeletalMeshMaterialInfo
{
	int                                                MaterialIndex;                                    		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UMaterialInterface*                          Material;                                         		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatServerRewardData.DamageStorage
// 0x0008
struct FDamageStorage
{
	int                                                Damage;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              PendingClearTime;                                 		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatServerRewardData.DamagePerPlayer
// 0x001C
struct FDamagePerPlayer
{
	class ACombatPC*                                   Attacker;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	TArray< struct FDamageStorage >                    DamageList;                                       		// 0x0008 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	float                                              LastHitTime;                                      		// 0x0018 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatSkelCtrl_Recoil.RecoilProfileData
// 0x0078
struct FRecoilProfileData
{
	struct FName                                       ProfileName;                                      		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FRecoilDef                                  Data;                                             		// 0x0008 (0x0070) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatSkelCtrl_WeaponLag.TranslationPack
// 0x001C
struct FTranslationPack
{
	struct FString                                     ProfileName;                                      		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FVector                                     Translation;                                      		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatSkelCtrl_WeaponLag.RotationPack
// 0x001C
struct FRotationPack
{
	struct FString                                     ProfileName;                                      		// 0x0000 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	struct FRotator                                    Rotation;                                         		// 0x0010 (0x000C) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatSkillSoundGroup.SkillTeamAnnounceSound
// 0x0018
struct FSkillTeamAnnounceSound
{
	unsigned char                                      Skilltype;                                        		// 0x0000 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	int                                                SkillUseTeamIndex;                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   OurTeamSound;                                     		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   EnemyTeamSound;                                   		// 0x0010 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatSquadAI.AlternateRoute
// 0x0010
struct FAlternateRoute
{
	TArray< class ANavigationPoint* >                  RouteCache;                                       		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.CombatSteamAchivementManager.SteamAchievementData
// 0x0040
struct FSteamAchievementData
{
	int                                                Id;                                               		// 0x0000 (0x0004) [0x0000000000000000]              
	struct FString                                     APIName;                                          		// 0x0004 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bAchieved : 1;                                    		// 0x0014 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FString                                     DisplayName;                                      		// 0x0018 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	struct FString                                     Description;                                      		// 0x0028 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	int                                                IconImage;                                        		// 0x0038 (0x0004) [0x0000000000000000]              
	int                                                ArchievementValue;                                		// 0x003C (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatTrigger_Bomb.BombIndicatorInfo
// 0x0030
struct FBombIndicatorInfo
{
	struct FLinearColor                                TicTacLight[ 0x2 ];                               		// 0x0000 (0x0020) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   TictacSound;                                      		// 0x0020 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              MaxCycleTime;                                     		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MinCycleTime;                                     		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatVoiceBase.NotifySoundInfo
// 0x0010
struct FNotifySoundInfo
{
	struct FName                                       NotifyName;                                       		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   NotifySound;                                      		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatVoiceBase.RadioDisplayInfo
// 0x000C
struct FRadioDisplayInfo
{
	class USoundCue*                                   Sound;                                            		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	int                                                LocalizedStrID;                                   		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatVoiceInterfaceVivox.DelayedCallbackFunctionData
// 0x0024
struct FDelayedCallbackFunctionData
{
	struct FString                                     FunctionName;                                     		// 0x0000 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	TArray< struct FString >                           FunctionParameters;                               		// 0x0010 (0x0010) [0x0000000000400000]              ( CPF_NeedCtorLink )
	unsigned long                                      bCompleted : 1;                                   		// 0x0020 (0x0004) [0x0000000000000000] [0x00000001] 
};

// ScriptStruct CombatGame.CombatWeapon.sBoneTransform
// 0x0018
struct FsBoneTransform
{
	struct FVector                                     vLoc;                                             		// 0x0000 (0x000C) [0x0000000000000000]              
	struct FRotator                                    rRot;                                             		// 0x000C (0x000C) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatWeapon.RecoilFactor
// 0x0044
struct FRecoilFactor
{
	int                                                VerticalRecoil_Max;                               		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                VerticalRecoil_MinVariable;                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              VerticalRecoil_RefireAdded;                       		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                VerticalRecoil_InstantVariableMax;                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HorizonRecoil_Max;                                		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HorizonRecoil_MinVariable;                        		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              HorizonRecoil_RefireAdded;                        		// 0x0018 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HorizonRecoil_InstantVariableMax;                 		// 0x001C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                VerticalRecoil_RefireConstAdded;                  		// 0x0020 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                HorizonRecoil_RefireConstAdded;                   		// 0x0024 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Deviation_Start;                                  		// 0x0028 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Deviation_Max;                                    		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Deviation_Added;                                  		// 0x0030 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Deviation_RefireAdded;                            		// 0x0034 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                Deviation_RefireMax;                              		// 0x0038 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AddedPitchVerticalRecoilOffset;                   		// 0x003C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                AddedPitchVerticalRecoilMax;                      		// 0x0040 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatWeapon.sDamageAdjustment
// 0x0008
struct FsDamageAdjustment
{
	float                                              DamageRate;                                       		// 0x0000 (0x0004) [0x0000000000000000]              
	float                                              penetrationRate;                                  		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.CombatWeapon_Shotgun_Base.ActorHitInfo
// 0x0070
struct FActorHitInfo
{
	class AActor*                                      HitActor;                                         		// 0x0000 (0x0008) [0x0000000000000000]              
	unsigned char                                      NumHits;                                          		// 0x0008 (0x0001) [0x0000000000000000]              
	struct FImpactInfo                                 Impact;                                           		// 0x000C (0x0064) [0x0000000000080000]              ( CPF_Component )
};

// ScriptStruct CombatGame.CombatWeaponBase_Melee.MeleeAttackFactor
// 0x0030
struct FMeleeAttackFactor
{
	unsigned char                                      UnknownData00[ 0x2 ];                             		// 0x0000 (0x0002) UNKNOWN PROPERTY: WordProperty CombatGame.CombatWeaponBase_Melee.MeleeAttackFactor.MeleeDamage_Max
	float                                              MeleeRange;                                       		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeleeHitMomemtum;                                 		// 0x0008 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeleeHitMomemtumZ;                                		// 0x000C (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              MeleeHitedMomemtum;                               		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	unsigned long                                      AutoFire : 1;                                     		// 0x0014 (0x0004) [0x0000000000000001] [0x00000001] ( CPF_Edit )
	unsigned long                                      bArcFire : 1;                                     		// 0x0014 (0x0004) [0x0000000000000001] [0x00000002] ( CPF_Edit )
	TArray< float >                                    ArcSectAnimHitTimes;                              		// 0x0018 (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
	unsigned char                                      ArcBrandishDir;                                   		// 0x0028 (0x0001) [0x0000000000000001]              ( CPF_Edit )
	float                                              ArcAngleDegree;                                   		// 0x002C (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.CombatWeaponRISBase_Scope.ScopeMaterialVectorParameter
// 0x0018
struct FScopeMaterialVectorParameter
{
	struct FName                                       ParameterName;                                    		// 0x0000 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FLinearColor                                ParameterValue;                                   		// 0x0008 (0x0010) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.GamePlayEvent_Action.ActionTableDataType
// 0x0020
struct FActionTableDataType
{
	struct FName                                       Action;                                           		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FName                                       Event;                                            		// 0x0008 (0x0008) [0x0000000000000000]              
	struct FString                                     CodeName;                                         		// 0x0010 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.GamePlayEvent_Kill.KillTableDataType
// 0x001A
struct FKillTableDataType
{
	struct FName                                       State;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	struct FString                                     CodeName;                                         		// 0x0008 (0x0010) [0x0000000000500000]              ( CPF_NeedCtorLink )
	unsigned char                                      ContinueCount;                                    		// 0x0018 (0x0001) [0x0000000000000000]              
	unsigned char                                      Hit;                                              		// 0x0019 (0x0001) [0x0000000000000000]              
};

// ScriptStruct CombatGame.GamePlayEvent_Kill.TableInfoContainer
// 0x0050
struct FTableInfoContainer
{
	unsigned char                                      MaxContinueCount;                                 		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned long                                      bCheckHitPart : 1;                                		// 0x0004 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      UnknownData00[ 0x48 ];                            		// 0x0008 (0x0048) UNKNOWN PROPERTY: MapProperty CombatGame.GamePlayEvent_Kill.TableInfoContainer.TableInfo
};

// ScriptStruct CombatGame.OnlineSubsystemCombatDedicatedSvr.PresetItemInfo
// 0x0008
struct FPresetItemInfo
{
	unsigned char                                      presetIdx;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	unsigned char                                      SlotIdx;                                          		// 0x0001 (0x0001) [0x0000000000000000]              
	int                                                ItemID;                                           		// 0x0004 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.OnlineSubsystemCombatDedicatedSvr.AvatarItemInfo
// 0x0004
struct FAvatarItemInfo
{
	int                                                ItemID;                                           		// 0x0000 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.PresetManager.AmmorInfo
// 0x000C
struct FAmmorInfo
{
	unsigned char                                      ItemGrade;                                        		// 0x0000 (0x0001) [0x0000000000000000]              
	int                                                AP;                                               		// 0x0004 (0x0004) [0x0000000000000000]              
	int                                                APForExplosion;                                   		// 0x0008 (0x0004) [0x0000000000000000]              
};

// ScriptStruct CombatGame.PresetManager.PresetData
// 0x001C
struct FPresetData
{
	int                                                ItemID;                                           		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class UCombatDataTableRefItem*                     RefItem;                                          		// 0x0004 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	struct FString                                     ScriptFileName;                                   		// 0x000C (0x0010) [0x0000000000400001]              ( CPF_Edit | CPF_NeedCtorLink )
};

// ScriptStruct CombatGame.SeqAct_CombatTutorial_Dialogue.Tutorial_Dialogue
// 0x0018
struct FTutorial_Dialogue
{
	int                                                SpeakerNameIndex;                                 		// 0x0000 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	int                                                SubtitleTextIndex;                                		// 0x0004 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	class USoundCue*                                   VoiceSoundcue;                                    		// 0x0008 (0x0008) [0x0000000000000001]              ( CPF_Edit )
	float                                              DelayTime;                                        		// 0x0010 (0x0004) [0x0000000000000001]              ( CPF_Edit )
	float                                              ShowTime;                                         		// 0x0014 (0x0004) [0x0000000000000001]              ( CPF_Edit )
};

// ScriptStruct CombatGame.USSWeaponAttachment.USSMaterialImpactEffect
// 0x0010
struct FUSSMaterialImpactEffect
{
	class USoundCue*                                   Sound;                                            		// 0x0000 (0x0008) [0x0000000000000000]              
	class UParticleSystem*                             ParticleTemplate;                                 		// 0x0008 (0x0008) [0x0000000000000000]              
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
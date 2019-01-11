/*
#############################################################################################
# Black Squad (11.01.2019) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemPC_classes.h
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


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class OnlineSubsystemPC.OnlineSubsystemPC
// 0x02B0 (0x0490 - 0x01E0)
class UOnlineSubsystemPC : public UOnlineSubsystemCommonImpl
{
public:
	struct FString                                     LoggedInPlayerName;                               		// 0x01E0 (0x0010) [0x0000000000000000]              
	struct FUniqueNetId                                LoggedInPlayerId;                                 		// 0x01F0 (0x0008) [0x0000000000000000]              
	TArray< struct FPointer >                          AsyncTasks;                                       		// 0x01F8 (0x0010) [0x0000000000000000]              
	struct FString                                     ProfileDataDirectory;                             		// 0x0208 (0x0010) [0x0000000000000000]              
	struct FString                                     ProfileDataExtension;                             		// 0x0218 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ReadProfileSettingsDelegates;                     		// 0x0228 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   WriteProfileSettingsDelegates;                    		// 0x0238 (0x0010) [0x0000000000000000]              
	class UOnlineProfileSettings*                      CachedProfile;                                    		// 0x0248 (0x0008) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   SpeechRecognitionCompleteDelegates;               		// 0x0250 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ReadFriendsDelegates;                             		// 0x0260 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   FriendsChangeDelegates;                           		// 0x0270 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   MutingChangeDelegates;                            		// 0x0280 (0x0010) [0x0000000000000000]              
	struct FScriptDelegate                             __OnLoginChange__Delegate;                        		// 0x0290 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0294 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLoginCancelled__Delegate;                     		// 0x02A0 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x02A4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnMutingChange__Delegate;                       		// 0x02B0 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x02B4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;              		// 0x02C0 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x02C4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnPlayerTalkingStateChange__Delegate;           		// 0x02D0 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x02D4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnFriendsChange__Delegate;                      		// 0x02E0 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x02E4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLoginFailed__Delegate;                        		// 0x02F0 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData06[ 0x4 ];                             		// 0x02F4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLogoutCompleted__Delegate;                    		// 0x0300 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData07[ 0x4 ];                             		// 0x0304 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadProfileSettingsComplete__Delegate;        		// 0x0310 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData08[ 0x4 ];                             		// 0x0314 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnWriteProfileSettingsComplete__Delegate;       		// 0x0320 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData09[ 0x4 ];                             		// 0x0324 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLoginStatusChange__Delegate;                  		// 0x0330 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData10[ 0x4 ];                             		// 0x0334 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadFriendsComplete__Delegate;                		// 0x0340 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData11[ 0x4 ];                             		// 0x0344 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnRecognitionComplete__Delegate;                		// 0x0350 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData12[ 0x4 ];                             		// 0x0354 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadOnlineStatsComplete__Delegate;            		// 0x0360 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData13[ 0x4 ];                             		// 0x0364 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnFlushOnlineStatsComplete__Delegate;           		// 0x0370 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData14[ 0x4 ];                             		// 0x0374 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnRegisterHostStatGuidComplete__Delegate;       		// 0x0380 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData15[ 0x4 ];                             		// 0x0384 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnLinkStatusChange__Delegate;                   		// 0x0390 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData16[ 0x4 ];                             		// 0x0394 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnExternalUIChange__Delegate;                   		// 0x03A0 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData17[ 0x4 ];                             		// 0x03A4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnControllerChange__Delegate;                   		// 0x03B0 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData18[ 0x4 ];                             		// 0x03B4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnConnectionStatusChange__Delegate;             		// 0x03C0 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData19[ 0x4 ];                             		// 0x03C4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnStorageDeviceChange__Delegate;                		// 0x03D0 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData20[ 0x4 ];                             		// 0x03D4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnKeyboardInputComplete__Delegate;              		// 0x03E0 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData21[ 0x4 ];                             		// 0x03E4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnWritePlayerStorageComplete__Delegate;         		// 0x03F0 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData22[ 0x4 ];                             		// 0x03F4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadPlayerStorageForNetIdComplete__Delegate;  		// 0x0400 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData23[ 0x4 ];                             		// 0x0404 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadPlayerStorageComplete__Delegate;          		// 0x0410 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData24[ 0x4 ];                             		// 0x0414 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnAddFriendByNameComplete__Delegate;            		// 0x0420 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData25[ 0x4 ];                             		// 0x0424 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnFriendInviteReceived__Delegate;               		// 0x0430 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData26[ 0x4 ];                             		// 0x0434 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReceivedGameInvite__Delegate;                 		// 0x0440 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData27[ 0x4 ];                             		// 0x0444 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnJoinFriendGameComplete__Delegate;             		// 0x0450 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData28[ 0x4 ];                             		// 0x0454 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnFriendMessageReceived__Delegate;              		// 0x0460 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData29[ 0x4 ];                             		// 0x0464 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnUnlockAchievementComplete__Delegate;          		// 0x0470 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData30[ 0x4 ];                             		// 0x0474 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadAchievementsComplete__Delegate;           		// 0x0480 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData31[ 0x4 ];                             		// 0x0484 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1490 ];

		return pClassPointer;
	};

	void GetAchievements ( );
	void ClearReadAchievementsCompleteDelegate ( );
	void AddReadAchievementsCompleteDelegate ( );
	void OnReadAchievementsComplete ( );
	void ReadAchievements ( );
	void ClearUnlockAchievementCompleteDelegate ( );
	void AddUnlockAchievementCompleteDelegate ( );
	void OnUnlockAchievementComplete ( );
	void UnlockAchievement ( );
	void DeleteMessage ( );
	void UnmuteAll ( );
	void MuteAll ( );
	void ClearFriendMessageReceivedDelegate ( );
	void AddFriendMessageReceivedDelegate ( );
	void OnFriendMessageReceived ( );
	void GetFriendMessages ( );
	void ClearJoinFriendGameCompleteDelegate ( );
	void AddJoinFriendGameCompleteDelegate ( );
	void OnJoinFriendGameComplete ( );
	void JoinFriendGame ( );
	void ClearReceivedGameInviteDelegate ( );
	void AddReceivedGameInviteDelegate ( );
	void OnReceivedGameInvite ( );
	void SendGameInviteToFriends ( );
	void SendGameInviteToFriend ( );
	void SendMessageToFriend ( );
	void ClearFriendInviteReceivedDelegate ( );
	void AddFriendInviteReceivedDelegate ( );
	void OnFriendInviteReceived ( );
	void RemoveFriend ( );
	void DenyFriendInvite ( );
	void AcceptFriendInvite ( );
	void ClearAddFriendByNameCompleteDelegate ( );
	void AddAddFriendByNameCompleteDelegate ( );
	void OnAddFriendByNameComplete ( );
	void AddFriendByName ( );
	void AddFriend ( );
	void ClearWritePlayerStorageCompleteDelegate ( );
	void WritePlayerStorage ( );
	void GetPlayerStorage ( );
	void ClearReadPlayerStorageCompleteDelegate ( );
	void AddReadPlayerStorageCompleteDelegate ( );
	void OnReadPlayerStorageComplete ( );
	void ReadPlayerStorage ( );
	void ClearReadPlayerStorageForNetIdCompleteDelegate ( );
	void ReadPlayerStorageForNetId ( );
	void AddReadPlayerStorageForNetIdCompleteDelegate ( );
	void OnReadPlayerStorageForNetIdComplete ( );
	void AddWritePlayerStorageCompleteDelegate ( );
	void OnWritePlayerStorageComplete ( );
	void GetKeyboardInputResults ( );
	void ClearKeyboardInputDoneDelegate ( );
	void AddKeyboardInputDoneDelegate ( );
	void OnKeyboardInputComplete ( );
	void ShowKeyboardUI ( );
	void SetOnlineStatus ( );
	void ClearStorageDeviceChangeDelegate ( );
	void AddStorageDeviceChangeDelegate ( );
	void OnStorageDeviceChange ( );
	void GetLocale ( );
	void GetNATType ( );
	void ClearConnectionStatusChangeDelegate ( );
	void AddConnectionStatusChangeDelegate ( );
	void OnConnectionStatusChange ( );
	void IsControllerConnected ( );
	void ClearControllerChangeDelegate ( );
	void AddControllerChangeDelegate ( );
	void OnControllerChange ( );
	void SetNetworkNotificationPosition ( );
	void GetNetworkNotificationPosition ( );
	void ClearExternalUIChangeDelegate ( );
	void AddExternalUIChangeDelegate ( );
	void OnExternalUIChange ( );
	void ClearLinkStatusChangeDelegate ( );
	void AddLinkStatusChangeDelegate ( );
	void OnLinkStatusChange ( );
	void HasLinkConnection ( );
	void eventGetPlayerNicknameFromIndex ( );
	void CalcAggregateSkill ( );
	void RegisterStatGuid ( );
	void GetClientStatGuid ( );
	void ClearRegisterHostStatGuidCompleteDelegateDelegate ( );
	void AddRegisterHostStatGuidCompleteDelegate ( );
	void OnRegisterHostStatGuidComplete ( );
	void RegisterHostStatGuid ( );
	void GetHostStatGuid ( );
	void WriteOnlinePlayerScores ( );
	void ClearFlushOnlineStatsCompleteDelegate ( );
	void AddFlushOnlineStatsCompleteDelegate ( );
	void OnFlushOnlineStatsComplete ( );
	void FlushOnlineStats ( );
	void WriteOnlineStats ( );
	void FreeStats ( );
	void ClearReadOnlineStatsCompleteDelegate ( );
	void AddReadOnlineStatsCompleteDelegate ( );
	void ReadOnlineStatsByRankAroundPlayer ( );
	void ReadOnlineStatsByRank ( );
	void ReadOnlineStatsForFriends ( );
	void ReadOnlineStats ( );
	void OnReadOnlineStatsComplete ( );
	void SetSpeechRecognitionObject ( );
	void SelectVocabulary ( );
	void ClearRecognitionCompleteDelegate ( );
	void AddRecognitionCompleteDelegate ( );
	void OnRecognitionComplete ( );
	void GetRecognitionResults ( );
	void StopSpeechRecognition ( );
	void StartSpeechRecognition ( );
	void StopNetworkedVoice ( );
	void StartNetworkedVoice ( );
	void UnmuteRemoteTalker ( );
	void MuteRemoteTalker ( );
	void SetRemoteTalkerPriority ( );
	void IsHeadsetPresent ( );
	void IsRemotePlayerTalking ( );
	void IsLocalPlayerTalking ( );
	void UnregisterRemoteTalker ( );
	void RegisterRemoteTalker ( );
	void UnregisterLocalTalker ( );
	void RegisterLocalTalker ( );
	void GetFriendsList ( );
	void ClearReadFriendsCompleteDelegate ( );
	void AddReadFriendsCompleteDelegate ( );
	void ReadFriendsList ( );
	void OnReadFriendsComplete ( );
	void ClearLoginStatusChangeDelegate ( );
	void AddLoginStatusChangeDelegate ( );
	void OnLoginStatusChange ( );
	void ClearWriteProfileSettingsCompleteDelegate ( );
	void AddWriteProfileSettingsCompleteDelegate ( );
	void OnWriteProfileSettingsComplete ( );
	void WriteProfileSettings ( );
	void GetProfileSettings ( );
	void ClearReadProfileSettingsCompleteDelegate ( );
	void AddReadProfileSettingsCompleteDelegate ( );
	void OnReadProfileSettingsComplete ( );
	void ReadProfileSettings ( );
	void ClearFriendsChangeDelegate ( );
	void AddFriendsChangeDelegate ( );
	void ClearMutingChangeDelegate ( );
	void AddMutingChangeDelegate ( );
	void IsGuestLogin ( );
	void IsLocalLogin ( );
	void ClearLoginCancelledDelegate ( );
	void AddLoginCancelledDelegate ( );
	void ClearLoginChangeDelegate ( );
	void AddLoginChangeDelegate ( );
	void ShowFriendsUI ( );
	void IsMuted ( );
	void AreAnyFriends ( );
	void IsFriend ( );
	void CanShowPresenceInformation ( );
	void CanViewPlayerProfiles ( );
	void CanPurchaseContent ( );
	void CanDownloadUserContent ( );
	void CanCommunicate ( );
	void CanPlayOnline ( );
	void GetPlayerNickname ( );
	void GetUniquePlayerId ( );
	void GetLoginStatus ( );
	void ClearLogoutCompletedDelegate ( );
	void AddLogoutCompletedDelegate ( );
	void OnLogoutCompleted ( );
	void Logout ( );
	void ClearLoginFailedDelegate ( );
	void AddLoginFailedDelegate ( );
	void OnLoginFailed ( );
	void AutoLogin ( );
	void Login ( );
	void ShowLoginUI ( );
	void OnFriendsChange ( );
	void ClearPlayerTalkingDelegate ( );
	void AddPlayerTalkingDelegate ( );
	void OnPlayerTalkingStateChange ( );
	void GetTitleFileState ( );
	void GetTitleFileContents ( );
	void ClearReadTitleFileCompleteDelegate ( );
	void AddReadTitleFileCompleteDelegate ( );
	void ReadTitleFile ( );
	void OnReadTitleFileComplete ( );
	void OnMutingChange ( );
	void OnLoginCancelled ( );
	void OnLoginChange ( );
	void eventInit ( );
};

UClass* UOnlineSubsystemPC::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
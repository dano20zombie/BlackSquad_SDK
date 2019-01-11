/*
#############################################################################################
# Black Squad (11.01.2019) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: OnlineSubsystemPC_functions.h
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
# Functions
# ========================================================================================= #
*/

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetAchievements
// [0x00424000] 
// Parameters infos:

void UOnlineSubsystemPC::GetAchievements ( )
{
	static UFunction* pFnGetAchievements = NULL;

	if ( ! pFnGetAchievements )
		pFnGetAchievements = (UFunction*) UObject::GObjObjects()->Data[ 40849 ];

	UOnlineSubsystemPC_execGetAchievements_Parms GetAchievements_Parms;

	this->ProcessEvent ( pFnGetAchievements, &GetAchievements_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadAchievementsCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ClearReadAchievementsCompleteDelegate ( )
{
	static UFunction* pFnClearReadAchievementsCompleteDelegate = NULL;

	if ( ! pFnClearReadAchievementsCompleteDelegate )
		pFnClearReadAchievementsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40846 ];

	UOnlineSubsystemPC_execClearReadAchievementsCompleteDelegate_Parms ClearReadAchievementsCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearReadAchievementsCompleteDelegate, &ClearReadAchievementsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadAchievementsCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::AddReadAchievementsCompleteDelegate ( )
{
	static UFunction* pFnAddReadAchievementsCompleteDelegate = NULL;

	if ( ! pFnAddReadAchievementsCompleteDelegate )
		pFnAddReadAchievementsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40843 ];

	UOnlineSubsystemPC_execAddReadAchievementsCompleteDelegate_Parms AddReadAchievementsCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddReadAchievementsCompleteDelegate, &AddReadAchievementsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadAchievementsComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnReadAchievementsComplete ( )
{
	static UFunction* pFnOnReadAchievementsComplete = NULL;

	if ( ! pFnOnReadAchievementsComplete )
		pFnOnReadAchievementsComplete = (UFunction*) UObject::GObjObjects()->Data[ 40239 ];

	UOnlineSubsystemPC_execOnReadAchievementsComplete_Parms OnReadAchievementsComplete_Parms;

	this->ProcessEvent ( pFnOnReadAchievementsComplete, &OnReadAchievementsComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadAchievements
// [0x00024000] 
// Parameters infos:

void UOnlineSubsystemPC::ReadAchievements ( )
{
	static UFunction* pFnReadAchievements = NULL;

	if ( ! pFnReadAchievements )
		pFnReadAchievements = (UFunction*) UObject::GObjObjects()->Data[ 40836 ];

	UOnlineSubsystemPC_execReadAchievements_Parms ReadAchievements_Parms;

	this->ProcessEvent ( pFnReadAchievements, &ReadAchievements_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearUnlockAchievementCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ClearUnlockAchievementCompleteDelegate ( )
{
	static UFunction* pFnClearUnlockAchievementCompleteDelegate = NULL;

	if ( ! pFnClearUnlockAchievementCompleteDelegate )
		pFnClearUnlockAchievementCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40833 ];

	UOnlineSubsystemPC_execClearUnlockAchievementCompleteDelegate_Parms ClearUnlockAchievementCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearUnlockAchievementCompleteDelegate, &ClearUnlockAchievementCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddUnlockAchievementCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::AddUnlockAchievementCompleteDelegate ( )
{
	static UFunction* pFnAddUnlockAchievementCompleteDelegate = NULL;

	if ( ! pFnAddUnlockAchievementCompleteDelegate )
		pFnAddUnlockAchievementCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40830 ];

	UOnlineSubsystemPC_execAddUnlockAchievementCompleteDelegate_Parms AddUnlockAchievementCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddUnlockAchievementCompleteDelegate, &AddUnlockAchievementCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnUnlockAchievementComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnUnlockAchievementComplete ( )
{
	static UFunction* pFnOnUnlockAchievementComplete = NULL;

	if ( ! pFnOnUnlockAchievementComplete )
		pFnOnUnlockAchievementComplete = (UFunction*) UObject::GObjObjects()->Data[ 40241 ];

	UOnlineSubsystemPC_execOnUnlockAchievementComplete_Parms OnUnlockAchievementComplete_Parms;

	this->ProcessEvent ( pFnOnUnlockAchievementComplete, &OnUnlockAchievementComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.UnlockAchievement
// [0x00024000] 
// Parameters infos:

void UOnlineSubsystemPC::UnlockAchievement ( )
{
	static UFunction* pFnUnlockAchievement = NULL;

	if ( ! pFnUnlockAchievement )
		pFnUnlockAchievement = (UFunction*) UObject::GObjObjects()->Data[ 40824 ];

	UOnlineSubsystemPC_execUnlockAchievement_Parms UnlockAchievement_Parms;

	this->ProcessEvent ( pFnUnlockAchievement, &UnlockAchievement_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.DeleteMessage
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::DeleteMessage ( )
{
	static UFunction* pFnDeleteMessage = NULL;

	if ( ! pFnDeleteMessage )
		pFnDeleteMessage = (UFunction*) UObject::GObjObjects()->Data[ 40820 ];

	UOnlineSubsystemPC_execDeleteMessage_Parms DeleteMessage_Parms;

	this->ProcessEvent ( pFnDeleteMessage, &DeleteMessage_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.UnmuteAll
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::UnmuteAll ( )
{
	static UFunction* pFnUnmuteAll = NULL;

	if ( ! pFnUnmuteAll )
		pFnUnmuteAll = (UFunction*) UObject::GObjObjects()->Data[ 40817 ];

	UOnlineSubsystemPC_execUnmuteAll_Parms UnmuteAll_Parms;

	this->ProcessEvent ( pFnUnmuteAll, &UnmuteAll_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.MuteAll
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::MuteAll ( )
{
	static UFunction* pFnMuteAll = NULL;

	if ( ! pFnMuteAll )
		pFnMuteAll = (UFunction*) UObject::GObjObjects()->Data[ 40813 ];

	UOnlineSubsystemPC_execMuteAll_Parms MuteAll_Parms;

	this->ProcessEvent ( pFnMuteAll, &MuteAll_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFriendMessageReceivedDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ClearFriendMessageReceivedDelegate ( )
{
	static UFunction* pFnClearFriendMessageReceivedDelegate = NULL;

	if ( ! pFnClearFriendMessageReceivedDelegate )
		pFnClearFriendMessageReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40810 ];

	UOnlineSubsystemPC_execClearFriendMessageReceivedDelegate_Parms ClearFriendMessageReceivedDelegate_Parms;

	this->ProcessEvent ( pFnClearFriendMessageReceivedDelegate, &ClearFriendMessageReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriendMessageReceivedDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::AddFriendMessageReceivedDelegate ( )
{
	static UFunction* pFnAddFriendMessageReceivedDelegate = NULL;

	if ( ! pFnAddFriendMessageReceivedDelegate )
		pFnAddFriendMessageReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40807 ];

	UOnlineSubsystemPC_execAddFriendMessageReceivedDelegate_Parms AddFriendMessageReceivedDelegate_Parms;

	this->ProcessEvent ( pFnAddFriendMessageReceivedDelegate, &AddFriendMessageReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnFriendMessageReceived
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnFriendMessageReceived ( )
{
	static UFunction* pFnOnFriendMessageReceived = NULL;

	if ( ! pFnOnFriendMessageReceived )
		pFnOnFriendMessageReceived = (UFunction*) UObject::GObjObjects()->Data[ 40243 ];

	UOnlineSubsystemPC_execOnFriendMessageReceived_Parms OnFriendMessageReceived_Parms;

	this->ProcessEvent ( pFnOnFriendMessageReceived, &OnFriendMessageReceived_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetFriendMessages
// [0x00420000] 
// Parameters infos:

void UOnlineSubsystemPC::GetFriendMessages ( )
{
	static UFunction* pFnGetFriendMessages = NULL;

	if ( ! pFnGetFriendMessages )
		pFnGetFriendMessages = (UFunction*) UObject::GObjObjects()->Data[ 40799 ];

	UOnlineSubsystemPC_execGetFriendMessages_Parms GetFriendMessages_Parms;

	this->ProcessEvent ( pFnGetFriendMessages, &GetFriendMessages_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearJoinFriendGameCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ClearJoinFriendGameCompleteDelegate ( )
{
	static UFunction* pFnClearJoinFriendGameCompleteDelegate = NULL;

	if ( ! pFnClearJoinFriendGameCompleteDelegate )
		pFnClearJoinFriendGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40797 ];

	UOnlineSubsystemPC_execClearJoinFriendGameCompleteDelegate_Parms ClearJoinFriendGameCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearJoinFriendGameCompleteDelegate, &ClearJoinFriendGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddJoinFriendGameCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::AddJoinFriendGameCompleteDelegate ( )
{
	static UFunction* pFnAddJoinFriendGameCompleteDelegate = NULL;

	if ( ! pFnAddJoinFriendGameCompleteDelegate )
		pFnAddJoinFriendGameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40795 ];

	UOnlineSubsystemPC_execAddJoinFriendGameCompleteDelegate_Parms AddJoinFriendGameCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddJoinFriendGameCompleteDelegate, &AddJoinFriendGameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnJoinFriendGameComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnJoinFriendGameComplete ( )
{
	static UFunction* pFnOnJoinFriendGameComplete = NULL;

	if ( ! pFnOnJoinFriendGameComplete )
		pFnOnJoinFriendGameComplete = (UFunction*) UObject::GObjObjects()->Data[ 40245 ];

	UOnlineSubsystemPC_execOnJoinFriendGameComplete_Parms OnJoinFriendGameComplete_Parms;

	this->ProcessEvent ( pFnOnJoinFriendGameComplete, &OnJoinFriendGameComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.JoinFriendGame
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::JoinFriendGame ( )
{
	static UFunction* pFnJoinFriendGame = NULL;

	if ( ! pFnJoinFriendGame )
		pFnJoinFriendGame = (UFunction*) UObject::GObjObjects()->Data[ 40790 ];

	UOnlineSubsystemPC_execJoinFriendGame_Parms JoinFriendGame_Parms;

	this->ProcessEvent ( pFnJoinFriendGame, &JoinFriendGame_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReceivedGameInviteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ClearReceivedGameInviteDelegate ( )
{
	static UFunction* pFnClearReceivedGameInviteDelegate = NULL;

	if ( ! pFnClearReceivedGameInviteDelegate )
		pFnClearReceivedGameInviteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40787 ];

	UOnlineSubsystemPC_execClearReceivedGameInviteDelegate_Parms ClearReceivedGameInviteDelegate_Parms;

	this->ProcessEvent ( pFnClearReceivedGameInviteDelegate, &ClearReceivedGameInviteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReceivedGameInviteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::AddReceivedGameInviteDelegate ( )
{
	static UFunction* pFnAddReceivedGameInviteDelegate = NULL;

	if ( ! pFnAddReceivedGameInviteDelegate )
		pFnAddReceivedGameInviteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40784 ];

	UOnlineSubsystemPC_execAddReceivedGameInviteDelegate_Parms AddReceivedGameInviteDelegate_Parms;

	this->ProcessEvent ( pFnAddReceivedGameInviteDelegate, &AddReceivedGameInviteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReceivedGameInvite
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnReceivedGameInvite ( )
{
	static UFunction* pFnOnReceivedGameInvite = NULL;

	if ( ! pFnOnReceivedGameInvite )
		pFnOnReceivedGameInvite = (UFunction*) UObject::GObjObjects()->Data[ 40247 ];

	UOnlineSubsystemPC_execOnReceivedGameInvite_Parms OnReceivedGameInvite_Parms;

	this->ProcessEvent ( pFnOnReceivedGameInvite, &OnReceivedGameInvite_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SendGameInviteToFriends
// [0x00024000] 
// Parameters infos:

void UOnlineSubsystemPC::SendGameInviteToFriends ( )
{
	static UFunction* pFnSendGameInviteToFriends = NULL;

	if ( ! pFnSendGameInviteToFriends )
		pFnSendGameInviteToFriends = (UFunction*) UObject::GObjObjects()->Data[ 40776 ];

	UOnlineSubsystemPC_execSendGameInviteToFriends_Parms SendGameInviteToFriends_Parms;

	this->ProcessEvent ( pFnSendGameInviteToFriends, &SendGameInviteToFriends_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SendGameInviteToFriend
// [0x00024000] 
// Parameters infos:

void UOnlineSubsystemPC::SendGameInviteToFriend ( )
{
	static UFunction* pFnSendGameInviteToFriend = NULL;

	if ( ! pFnSendGameInviteToFriend )
		pFnSendGameInviteToFriend = (UFunction*) UObject::GObjObjects()->Data[ 40771 ];

	UOnlineSubsystemPC_execSendGameInviteToFriend_Parms SendGameInviteToFriend_Parms;

	this->ProcessEvent ( pFnSendGameInviteToFriend, &SendGameInviteToFriend_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SendMessageToFriend
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::SendMessageToFriend ( )
{
	static UFunction* pFnSendMessageToFriend = NULL;

	if ( ! pFnSendMessageToFriend )
		pFnSendMessageToFriend = (UFunction*) UObject::GObjObjects()->Data[ 40766 ];

	UOnlineSubsystemPC_execSendMessageToFriend_Parms SendMessageToFriend_Parms;

	this->ProcessEvent ( pFnSendMessageToFriend, &SendMessageToFriend_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFriendInviteReceivedDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ClearFriendInviteReceivedDelegate ( )
{
	static UFunction* pFnClearFriendInviteReceivedDelegate = NULL;

	if ( ! pFnClearFriendInviteReceivedDelegate )
		pFnClearFriendInviteReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40763 ];

	UOnlineSubsystemPC_execClearFriendInviteReceivedDelegate_Parms ClearFriendInviteReceivedDelegate_Parms;

	this->ProcessEvent ( pFnClearFriendInviteReceivedDelegate, &ClearFriendInviteReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriendInviteReceivedDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::AddFriendInviteReceivedDelegate ( )
{
	static UFunction* pFnAddFriendInviteReceivedDelegate = NULL;

	if ( ! pFnAddFriendInviteReceivedDelegate )
		pFnAddFriendInviteReceivedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40760 ];

	UOnlineSubsystemPC_execAddFriendInviteReceivedDelegate_Parms AddFriendInviteReceivedDelegate_Parms;

	this->ProcessEvent ( pFnAddFriendInviteReceivedDelegate, &AddFriendInviteReceivedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnFriendInviteReceived
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnFriendInviteReceived ( )
{
	static UFunction* pFnOnFriendInviteReceived = NULL;

	if ( ! pFnOnFriendInviteReceived )
		pFnOnFriendInviteReceived = (UFunction*) UObject::GObjObjects()->Data[ 40249 ];

	UOnlineSubsystemPC_execOnFriendInviteReceived_Parms OnFriendInviteReceived_Parms;

	this->ProcessEvent ( pFnOnFriendInviteReceived, &OnFriendInviteReceived_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.RemoveFriend
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::RemoveFriend ( )
{
	static UFunction* pFnRemoveFriend = NULL;

	if ( ! pFnRemoveFriend )
		pFnRemoveFriend = (UFunction*) UObject::GObjObjects()->Data[ 40752 ];

	UOnlineSubsystemPC_execRemoveFriend_Parms RemoveFriend_Parms;

	this->ProcessEvent ( pFnRemoveFriend, &RemoveFriend_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.DenyFriendInvite
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::DenyFriendInvite ( )
{
	static UFunction* pFnDenyFriendInvite = NULL;

	if ( ! pFnDenyFriendInvite )
		pFnDenyFriendInvite = (UFunction*) UObject::GObjObjects()->Data[ 40748 ];

	UOnlineSubsystemPC_execDenyFriendInvite_Parms DenyFriendInvite_Parms;

	this->ProcessEvent ( pFnDenyFriendInvite, &DenyFriendInvite_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AcceptFriendInvite
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::AcceptFriendInvite ( )
{
	static UFunction* pFnAcceptFriendInvite = NULL;

	if ( ! pFnAcceptFriendInvite )
		pFnAcceptFriendInvite = (UFunction*) UObject::GObjObjects()->Data[ 40744 ];

	UOnlineSubsystemPC_execAcceptFriendInvite_Parms AcceptFriendInvite_Parms;

	this->ProcessEvent ( pFnAcceptFriendInvite, &AcceptFriendInvite_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearAddFriendByNameCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ClearAddFriendByNameCompleteDelegate ( )
{
	static UFunction* pFnClearAddFriendByNameCompleteDelegate = NULL;

	if ( ! pFnClearAddFriendByNameCompleteDelegate )
		pFnClearAddFriendByNameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40741 ];

	UOnlineSubsystemPC_execClearAddFriendByNameCompleteDelegate_Parms ClearAddFriendByNameCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearAddFriendByNameCompleteDelegate, &ClearAddFriendByNameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddAddFriendByNameCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::AddAddFriendByNameCompleteDelegate ( )
{
	static UFunction* pFnAddAddFriendByNameCompleteDelegate = NULL;

	if ( ! pFnAddAddFriendByNameCompleteDelegate )
		pFnAddAddFriendByNameCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40738 ];

	UOnlineSubsystemPC_execAddAddFriendByNameCompleteDelegate_Parms AddAddFriendByNameCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddAddFriendByNameCompleteDelegate, &AddAddFriendByNameCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnAddFriendByNameComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnAddFriendByNameComplete ( )
{
	static UFunction* pFnOnAddFriendByNameComplete = NULL;

	if ( ! pFnOnAddFriendByNameComplete )
		pFnOnAddFriendByNameComplete = (UFunction*) UObject::GObjObjects()->Data[ 40251 ];

	UOnlineSubsystemPC_execOnAddFriendByNameComplete_Parms OnAddFriendByNameComplete_Parms;

	this->ProcessEvent ( pFnOnAddFriendByNameComplete, &OnAddFriendByNameComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriendByName
// [0x00024000] 
// Parameters infos:

void UOnlineSubsystemPC::AddFriendByName ( )
{
	static UFunction* pFnAddFriendByName = NULL;

	if ( ! pFnAddFriendByName )
		pFnAddFriendByName = (UFunction*) UObject::GObjObjects()->Data[ 40732 ];

	UOnlineSubsystemPC_execAddFriendByName_Parms AddFriendByName_Parms;

	this->ProcessEvent ( pFnAddFriendByName, &AddFriendByName_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriend
// [0x00024000] 
// Parameters infos:

void UOnlineSubsystemPC::AddFriend ( )
{
	static UFunction* pFnAddFriend = NULL;

	if ( ! pFnAddFriend )
		pFnAddFriend = (UFunction*) UObject::GObjObjects()->Data[ 40727 ];

	UOnlineSubsystemPC_execAddFriend_Parms AddFriend_Parms;

	this->ProcessEvent ( pFnAddFriend, &AddFriend_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearWritePlayerStorageCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ClearWritePlayerStorageCompleteDelegate ( )
{
	static UFunction* pFnClearWritePlayerStorageCompleteDelegate = NULL;

	if ( ! pFnClearWritePlayerStorageCompleteDelegate )
		pFnClearWritePlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40724 ];

	UOnlineSubsystemPC_execClearWritePlayerStorageCompleteDelegate_Parms ClearWritePlayerStorageCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearWritePlayerStorageCompleteDelegate, &ClearWritePlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.WritePlayerStorage
// [0x00024000] 
// Parameters infos:

void UOnlineSubsystemPC::WritePlayerStorage ( )
{
	static UFunction* pFnWritePlayerStorage = NULL;

	if ( ! pFnWritePlayerStorage )
		pFnWritePlayerStorage = (UFunction*) UObject::GObjObjects()->Data[ 40719 ];

	UOnlineSubsystemPC_execWritePlayerStorage_Parms WritePlayerStorage_Parms;

	this->ProcessEvent ( pFnWritePlayerStorage, &WritePlayerStorage_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetPlayerStorage
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemPC::GetPlayerStorage ( )
{
	static UFunction* pFnGetPlayerStorage = NULL;

	if ( ! pFnGetPlayerStorage )
		pFnGetPlayerStorage = (UFunction*) UObject::GObjObjects()->Data[ 40716 ];

	UOnlineSubsystemPC_execGetPlayerStorage_Parms GetPlayerStorage_Parms;

	this->ProcessEvent ( pFnGetPlayerStorage, &GetPlayerStorage_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadPlayerStorageCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ClearReadPlayerStorageCompleteDelegate ( )
{
	static UFunction* pFnClearReadPlayerStorageCompleteDelegate = NULL;

	if ( ! pFnClearReadPlayerStorageCompleteDelegate )
		pFnClearReadPlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40713 ];

	UOnlineSubsystemPC_execClearReadPlayerStorageCompleteDelegate_Parms ClearReadPlayerStorageCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearReadPlayerStorageCompleteDelegate, &ClearReadPlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadPlayerStorageCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::AddReadPlayerStorageCompleteDelegate ( )
{
	static UFunction* pFnAddReadPlayerStorageCompleteDelegate = NULL;

	if ( ! pFnAddReadPlayerStorageCompleteDelegate )
		pFnAddReadPlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40710 ];

	UOnlineSubsystemPC_execAddReadPlayerStorageCompleteDelegate_Parms AddReadPlayerStorageCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddReadPlayerStorageCompleteDelegate, &AddReadPlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadPlayerStorageComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnReadPlayerStorageComplete ( )
{
	static UFunction* pFnOnReadPlayerStorageComplete = NULL;

	if ( ! pFnOnReadPlayerStorageComplete )
		pFnOnReadPlayerStorageComplete = (UFunction*) UObject::GObjObjects()->Data[ 40253 ];

	UOnlineSubsystemPC_execOnReadPlayerStorageComplete_Parms OnReadPlayerStorageComplete_Parms;

	this->ProcessEvent ( pFnOnReadPlayerStorageComplete, &OnReadPlayerStorageComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadPlayerStorage
// [0x00024000] 
// Parameters infos:

void UOnlineSubsystemPC::ReadPlayerStorage ( )
{
	static UFunction* pFnReadPlayerStorage = NULL;

	if ( ! pFnReadPlayerStorage )
		pFnReadPlayerStorage = (UFunction*) UObject::GObjObjects()->Data[ 40703 ];

	UOnlineSubsystemPC_execReadPlayerStorage_Parms ReadPlayerStorage_Parms;

	this->ProcessEvent ( pFnReadPlayerStorage, &ReadPlayerStorage_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadPlayerStorageForNetIdCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ClearReadPlayerStorageForNetIdCompleteDelegate ( )
{
	static UFunction* pFnClearReadPlayerStorageForNetIdCompleteDelegate = NULL;

	if ( ! pFnClearReadPlayerStorageForNetIdCompleteDelegate )
		pFnClearReadPlayerStorageForNetIdCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40700 ];

	UOnlineSubsystemPC_execClearReadPlayerStorageForNetIdCompleteDelegate_Parms ClearReadPlayerStorageForNetIdCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearReadPlayerStorageForNetIdCompleteDelegate, &ClearReadPlayerStorageForNetIdCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadPlayerStorageForNetId
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ReadPlayerStorageForNetId ( )
{
	static UFunction* pFnReadPlayerStorageForNetId = NULL;

	if ( ! pFnReadPlayerStorageForNetId )
		pFnReadPlayerStorageForNetId = (UFunction*) UObject::GObjObjects()->Data[ 40695 ];

	UOnlineSubsystemPC_execReadPlayerStorageForNetId_Parms ReadPlayerStorageForNetId_Parms;

	this->ProcessEvent ( pFnReadPlayerStorageForNetId, &ReadPlayerStorageForNetId_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadPlayerStorageForNetIdCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::AddReadPlayerStorageForNetIdCompleteDelegate ( )
{
	static UFunction* pFnAddReadPlayerStorageForNetIdCompleteDelegate = NULL;

	if ( ! pFnAddReadPlayerStorageForNetIdCompleteDelegate )
		pFnAddReadPlayerStorageForNetIdCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40692 ];

	UOnlineSubsystemPC_execAddReadPlayerStorageForNetIdCompleteDelegate_Parms AddReadPlayerStorageForNetIdCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddReadPlayerStorageForNetIdCompleteDelegate, &AddReadPlayerStorageForNetIdCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadPlayerStorageForNetIdComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnReadPlayerStorageForNetIdComplete ( )
{
	static UFunction* pFnOnReadPlayerStorageForNetIdComplete = NULL;

	if ( ! pFnOnReadPlayerStorageForNetIdComplete )
		pFnOnReadPlayerStorageForNetIdComplete = (UFunction*) UObject::GObjObjects()->Data[ 40255 ];

	UOnlineSubsystemPC_execOnReadPlayerStorageForNetIdComplete_Parms OnReadPlayerStorageForNetIdComplete_Parms;

	this->ProcessEvent ( pFnOnReadPlayerStorageForNetIdComplete, &OnReadPlayerStorageForNetIdComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddWritePlayerStorageCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::AddWritePlayerStorageCompleteDelegate ( )
{
	static UFunction* pFnAddWritePlayerStorageCompleteDelegate = NULL;

	if ( ! pFnAddWritePlayerStorageCompleteDelegate )
		pFnAddWritePlayerStorageCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40687 ];

	UOnlineSubsystemPC_execAddWritePlayerStorageCompleteDelegate_Parms AddWritePlayerStorageCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddWritePlayerStorageCompleteDelegate, &AddWritePlayerStorageCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnWritePlayerStorageComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnWritePlayerStorageComplete ( )
{
	static UFunction* pFnOnWritePlayerStorageComplete = NULL;

	if ( ! pFnOnWritePlayerStorageComplete )
		pFnOnWritePlayerStorageComplete = (UFunction*) UObject::GObjObjects()->Data[ 40257 ];

	UOnlineSubsystemPC_execOnWritePlayerStorageComplete_Parms OnWritePlayerStorageComplete_Parms;

	this->ProcessEvent ( pFnOnWritePlayerStorageComplete, &OnWritePlayerStorageComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetKeyboardInputResults
// [0x00420000] 
// Parameters infos:

void UOnlineSubsystemPC::GetKeyboardInputResults ( )
{
	static UFunction* pFnGetKeyboardInputResults = NULL;

	if ( ! pFnGetKeyboardInputResults )
		pFnGetKeyboardInputResults = (UFunction*) UObject::GObjObjects()->Data[ 40682 ];

	UOnlineSubsystemPC_execGetKeyboardInputResults_Parms GetKeyboardInputResults_Parms;

	this->ProcessEvent ( pFnGetKeyboardInputResults, &GetKeyboardInputResults_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearKeyboardInputDoneDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ClearKeyboardInputDoneDelegate ( )
{
	static UFunction* pFnClearKeyboardInputDoneDelegate = NULL;

	if ( ! pFnClearKeyboardInputDoneDelegate )
		pFnClearKeyboardInputDoneDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40680 ];

	UOnlineSubsystemPC_execClearKeyboardInputDoneDelegate_Parms ClearKeyboardInputDoneDelegate_Parms;

	this->ProcessEvent ( pFnClearKeyboardInputDoneDelegate, &ClearKeyboardInputDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddKeyboardInputDoneDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::AddKeyboardInputDoneDelegate ( )
{
	static UFunction* pFnAddKeyboardInputDoneDelegate = NULL;

	if ( ! pFnAddKeyboardInputDoneDelegate )
		pFnAddKeyboardInputDoneDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40678 ];

	UOnlineSubsystemPC_execAddKeyboardInputDoneDelegate_Parms AddKeyboardInputDoneDelegate_Parms;

	this->ProcessEvent ( pFnAddKeyboardInputDoneDelegate, &AddKeyboardInputDoneDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnKeyboardInputComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnKeyboardInputComplete ( )
{
	static UFunction* pFnOnKeyboardInputComplete = NULL;

	if ( ! pFnOnKeyboardInputComplete )
		pFnOnKeyboardInputComplete = (UFunction*) UObject::GObjObjects()->Data[ 40259 ];

	UOnlineSubsystemPC_execOnKeyboardInputComplete_Parms OnKeyboardInputComplete_Parms;

	this->ProcessEvent ( pFnOnKeyboardInputComplete, &OnKeyboardInputComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ShowKeyboardUI
// [0x00024000] 
// Parameters infos:

void UOnlineSubsystemPC::ShowKeyboardUI ( )
{
	static UFunction* pFnShowKeyboardUI = NULL;

	if ( ! pFnShowKeyboardUI )
		pFnShowKeyboardUI = (UFunction*) UObject::GObjObjects()->Data[ 40668 ];

	UOnlineSubsystemPC_execShowKeyboardUI_Parms ShowKeyboardUI_Parms;

	this->ProcessEvent ( pFnShowKeyboardUI, &ShowKeyboardUI_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SetOnlineStatus
// [0x00420000] 
// Parameters infos:

void UOnlineSubsystemPC::SetOnlineStatus ( )
{
	static UFunction* pFnSetOnlineStatus = NULL;

	if ( ! pFnSetOnlineStatus )
		pFnSetOnlineStatus = (UFunction*) UObject::GObjObjects()->Data[ 40661 ];

	UOnlineSubsystemPC_execSetOnlineStatus_Parms SetOnlineStatus_Parms;

	this->ProcessEvent ( pFnSetOnlineStatus, &SetOnlineStatus_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearStorageDeviceChangeDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ClearStorageDeviceChangeDelegate ( )
{
	static UFunction* pFnClearStorageDeviceChangeDelegate = NULL;

	if ( ! pFnClearStorageDeviceChangeDelegate )
		pFnClearStorageDeviceChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40659 ];

	UOnlineSubsystemPC_execClearStorageDeviceChangeDelegate_Parms ClearStorageDeviceChangeDelegate_Parms;

	this->ProcessEvent ( pFnClearStorageDeviceChangeDelegate, &ClearStorageDeviceChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddStorageDeviceChangeDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::AddStorageDeviceChangeDelegate ( )
{
	static UFunction* pFnAddStorageDeviceChangeDelegate = NULL;

	if ( ! pFnAddStorageDeviceChangeDelegate )
		pFnAddStorageDeviceChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40657 ];

	UOnlineSubsystemPC_execAddStorageDeviceChangeDelegate_Parms AddStorageDeviceChangeDelegate_Parms;

	this->ProcessEvent ( pFnAddStorageDeviceChangeDelegate, &AddStorageDeviceChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnStorageDeviceChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnStorageDeviceChange ( )
{
	static UFunction* pFnOnStorageDeviceChange = NULL;

	if ( ! pFnOnStorageDeviceChange )
		pFnOnStorageDeviceChange = (UFunction*) UObject::GObjObjects()->Data[ 40261 ];

	UOnlineSubsystemPC_execOnStorageDeviceChange_Parms OnStorageDeviceChange_Parms;

	this->ProcessEvent ( pFnOnStorageDeviceChange, &OnStorageDeviceChange_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetLocale
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemPC::GetLocale ( )
{
	static UFunction* pFnGetLocale = NULL;

	if ( ! pFnGetLocale )
		pFnGetLocale = (UFunction*) UObject::GObjObjects()->Data[ 40655 ];

	UOnlineSubsystemPC_execGetLocale_Parms GetLocale_Parms;

	this->ProcessEvent ( pFnGetLocale, &GetLocale_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetNATType
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemPC::GetNATType ( )
{
	static UFunction* pFnGetNATType = NULL;

	if ( ! pFnGetNATType )
		pFnGetNATType = (UFunction*) UObject::GObjObjects()->Data[ 40653 ];

	UOnlineSubsystemPC_execGetNATType_Parms GetNATType_Parms;

	this->ProcessEvent ( pFnGetNATType, &GetNATType_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearConnectionStatusChangeDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ClearConnectionStatusChangeDelegate ( )
{
	static UFunction* pFnClearConnectionStatusChangeDelegate = NULL;

	if ( ! pFnClearConnectionStatusChangeDelegate )
		pFnClearConnectionStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40651 ];

	UOnlineSubsystemPC_execClearConnectionStatusChangeDelegate_Parms ClearConnectionStatusChangeDelegate_Parms;

	this->ProcessEvent ( pFnClearConnectionStatusChangeDelegate, &ClearConnectionStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddConnectionStatusChangeDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::AddConnectionStatusChangeDelegate ( )
{
	static UFunction* pFnAddConnectionStatusChangeDelegate = NULL;

	if ( ! pFnAddConnectionStatusChangeDelegate )
		pFnAddConnectionStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40649 ];

	UOnlineSubsystemPC_execAddConnectionStatusChangeDelegate_Parms AddConnectionStatusChangeDelegate_Parms;

	this->ProcessEvent ( pFnAddConnectionStatusChangeDelegate, &AddConnectionStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnConnectionStatusChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnConnectionStatusChange ( )
{
	static UFunction* pFnOnConnectionStatusChange = NULL;

	if ( ! pFnOnConnectionStatusChange )
		pFnOnConnectionStatusChange = (UFunction*) UObject::GObjObjects()->Data[ 40263 ];

	UOnlineSubsystemPC_execOnConnectionStatusChange_Parms OnConnectionStatusChange_Parms;

	this->ProcessEvent ( pFnOnConnectionStatusChange, &OnConnectionStatusChange_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsControllerConnected
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemPC::IsControllerConnected ( )
{
	static UFunction* pFnIsControllerConnected = NULL;

	if ( ! pFnIsControllerConnected )
		pFnIsControllerConnected = (UFunction*) UObject::GObjObjects()->Data[ 40645 ];

	UOnlineSubsystemPC_execIsControllerConnected_Parms IsControllerConnected_Parms;

	this->ProcessEvent ( pFnIsControllerConnected, &IsControllerConnected_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearControllerChangeDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ClearControllerChangeDelegate ( )
{
	static UFunction* pFnClearControllerChangeDelegate = NULL;

	if ( ! pFnClearControllerChangeDelegate )
		pFnClearControllerChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40643 ];

	UOnlineSubsystemPC_execClearControllerChangeDelegate_Parms ClearControllerChangeDelegate_Parms;

	this->ProcessEvent ( pFnClearControllerChangeDelegate, &ClearControllerChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddControllerChangeDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::AddControllerChangeDelegate ( )
{
	static UFunction* pFnAddControllerChangeDelegate = NULL;

	if ( ! pFnAddControllerChangeDelegate )
		pFnAddControllerChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40641 ];

	UOnlineSubsystemPC_execAddControllerChangeDelegate_Parms AddControllerChangeDelegate_Parms;

	this->ProcessEvent ( pFnAddControllerChangeDelegate, &AddControllerChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnControllerChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnControllerChange ( )
{
	static UFunction* pFnOnControllerChange = NULL;

	if ( ! pFnOnControllerChange )
		pFnOnControllerChange = (UFunction*) UObject::GObjObjects()->Data[ 40265 ];

	UOnlineSubsystemPC_execOnControllerChange_Parms OnControllerChange_Parms;

	this->ProcessEvent ( pFnOnControllerChange, &OnControllerChange_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SetNetworkNotificationPosition
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::SetNetworkNotificationPosition ( )
{
	static UFunction* pFnSetNetworkNotificationPosition = NULL;

	if ( ! pFnSetNetworkNotificationPosition )
		pFnSetNetworkNotificationPosition = (UFunction*) UObject::GObjObjects()->Data[ 40637 ];

	UOnlineSubsystemPC_execSetNetworkNotificationPosition_Parms SetNetworkNotificationPosition_Parms;

	this->ProcessEvent ( pFnSetNetworkNotificationPosition, &SetNetworkNotificationPosition_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetNetworkNotificationPosition
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::GetNetworkNotificationPosition ( )
{
	static UFunction* pFnGetNetworkNotificationPosition = NULL;

	if ( ! pFnGetNetworkNotificationPosition )
		pFnGetNetworkNotificationPosition = (UFunction*) UObject::GObjObjects()->Data[ 40635 ];

	UOnlineSubsystemPC_execGetNetworkNotificationPosition_Parms GetNetworkNotificationPosition_Parms;

	this->ProcessEvent ( pFnGetNetworkNotificationPosition, &GetNetworkNotificationPosition_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearExternalUIChangeDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ClearExternalUIChangeDelegate ( )
{
	static UFunction* pFnClearExternalUIChangeDelegate = NULL;

	if ( ! pFnClearExternalUIChangeDelegate )
		pFnClearExternalUIChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40633 ];

	UOnlineSubsystemPC_execClearExternalUIChangeDelegate_Parms ClearExternalUIChangeDelegate_Parms;

	this->ProcessEvent ( pFnClearExternalUIChangeDelegate, &ClearExternalUIChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddExternalUIChangeDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::AddExternalUIChangeDelegate ( )
{
	static UFunction* pFnAddExternalUIChangeDelegate = NULL;

	if ( ! pFnAddExternalUIChangeDelegate )
		pFnAddExternalUIChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40631 ];

	UOnlineSubsystemPC_execAddExternalUIChangeDelegate_Parms AddExternalUIChangeDelegate_Parms;

	this->ProcessEvent ( pFnAddExternalUIChangeDelegate, &AddExternalUIChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnExternalUIChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnExternalUIChange ( )
{
	static UFunction* pFnOnExternalUIChange = NULL;

	if ( ! pFnOnExternalUIChange )
		pFnOnExternalUIChange = (UFunction*) UObject::GObjObjects()->Data[ 40267 ];

	UOnlineSubsystemPC_execOnExternalUIChange_Parms OnExternalUIChange_Parms;

	this->ProcessEvent ( pFnOnExternalUIChange, &OnExternalUIChange_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLinkStatusChangeDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ClearLinkStatusChangeDelegate ( )
{
	static UFunction* pFnClearLinkStatusChangeDelegate = NULL;

	if ( ! pFnClearLinkStatusChangeDelegate )
		pFnClearLinkStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40628 ];

	UOnlineSubsystemPC_execClearLinkStatusChangeDelegate_Parms ClearLinkStatusChangeDelegate_Parms;

	this->ProcessEvent ( pFnClearLinkStatusChangeDelegate, &ClearLinkStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLinkStatusChangeDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::AddLinkStatusChangeDelegate ( )
{
	static UFunction* pFnAddLinkStatusChangeDelegate = NULL;

	if ( ! pFnAddLinkStatusChangeDelegate )
		pFnAddLinkStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40626 ];

	UOnlineSubsystemPC_execAddLinkStatusChangeDelegate_Parms AddLinkStatusChangeDelegate_Parms;

	this->ProcessEvent ( pFnAddLinkStatusChangeDelegate, &AddLinkStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLinkStatusChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnLinkStatusChange ( )
{
	static UFunction* pFnOnLinkStatusChange = NULL;

	if ( ! pFnOnLinkStatusChange )
		pFnOnLinkStatusChange = (UFunction*) UObject::GObjObjects()->Data[ 40269 ];

	UOnlineSubsystemPC_execOnLinkStatusChange_Parms OnLinkStatusChange_Parms;

	this->ProcessEvent ( pFnOnLinkStatusChange, &OnLinkStatusChange_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.HasLinkConnection
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemPC::HasLinkConnection ( )
{
	static UFunction* pFnHasLinkConnection = NULL;

	if ( ! pFnHasLinkConnection )
		pFnHasLinkConnection = (UFunction*) UObject::GObjObjects()->Data[ 40623 ];

	UOnlineSubsystemPC_execHasLinkConnection_Parms HasLinkConnection_Parms;

	this->ProcessEvent ( pFnHasLinkConnection, &HasLinkConnection_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetPlayerNicknameFromIndex
// [0x00020802] ( FUNC_Event )
// Parameters infos:

void UOnlineSubsystemPC::eventGetPlayerNicknameFromIndex ( )
{
	static UFunction* pFnGetPlayerNicknameFromIndex = NULL;

	if ( ! pFnGetPlayerNicknameFromIndex )
		pFnGetPlayerNicknameFromIndex = (UFunction*) UObject::GObjObjects()->Data[ 40620 ];

	UOnlineSubsystemPC_eventGetPlayerNicknameFromIndex_Parms GetPlayerNicknameFromIndex_Parms;

	this->ProcessEvent ( pFnGetPlayerNicknameFromIndex, &GetPlayerNicknameFromIndex_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CalcAggregateSkill
// [0x00420000] 
// Parameters infos:

void UOnlineSubsystemPC::CalcAggregateSkill ( )
{
	static UFunction* pFnCalcAggregateSkill = NULL;

	if ( ! pFnCalcAggregateSkill )
		pFnCalcAggregateSkill = (UFunction*) UObject::GObjObjects()->Data[ 40613 ];

	UOnlineSubsystemPC_execCalcAggregateSkill_Parms CalcAggregateSkill_Parms;

	this->ProcessEvent ( pFnCalcAggregateSkill, &CalcAggregateSkill_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.RegisterStatGuid
// [0x00420000] 
// Parameters infos:

void UOnlineSubsystemPC::RegisterStatGuid ( )
{
	static UFunction* pFnRegisterStatGuid = NULL;

	if ( ! pFnRegisterStatGuid )
		pFnRegisterStatGuid = (UFunction*) UObject::GObjObjects()->Data[ 40609 ];

	UOnlineSubsystemPC_execRegisterStatGuid_Parms RegisterStatGuid_Parms;

	this->ProcessEvent ( pFnRegisterStatGuid, &RegisterStatGuid_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetClientStatGuid
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::GetClientStatGuid ( )
{
	static UFunction* pFnGetClientStatGuid = NULL;

	if ( ! pFnGetClientStatGuid )
		pFnGetClientStatGuid = (UFunction*) UObject::GObjObjects()->Data[ 40607 ];

	UOnlineSubsystemPC_execGetClientStatGuid_Parms GetClientStatGuid_Parms;

	this->ProcessEvent ( pFnGetClientStatGuid, &GetClientStatGuid_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearRegisterHostStatGuidCompleteDelegateDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ClearRegisterHostStatGuidCompleteDelegateDelegate ( )
{
	static UFunction* pFnClearRegisterHostStatGuidCompleteDelegateDelegate = NULL;

	if ( ! pFnClearRegisterHostStatGuidCompleteDelegateDelegate )
		pFnClearRegisterHostStatGuidCompleteDelegateDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40605 ];

	UOnlineSubsystemPC_execClearRegisterHostStatGuidCompleteDelegateDelegate_Parms ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms;

	this->ProcessEvent ( pFnClearRegisterHostStatGuidCompleteDelegateDelegate, &ClearRegisterHostStatGuidCompleteDelegateDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddRegisterHostStatGuidCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::AddRegisterHostStatGuidCompleteDelegate ( )
{
	static UFunction* pFnAddRegisterHostStatGuidCompleteDelegate = NULL;

	if ( ! pFnAddRegisterHostStatGuidCompleteDelegate )
		pFnAddRegisterHostStatGuidCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40603 ];

	UOnlineSubsystemPC_execAddRegisterHostStatGuidCompleteDelegate_Parms AddRegisterHostStatGuidCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddRegisterHostStatGuidCompleteDelegate, &AddRegisterHostStatGuidCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnRegisterHostStatGuidComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnRegisterHostStatGuidComplete ( )
{
	static UFunction* pFnOnRegisterHostStatGuidComplete = NULL;

	if ( ! pFnOnRegisterHostStatGuidComplete )
		pFnOnRegisterHostStatGuidComplete = (UFunction*) UObject::GObjObjects()->Data[ 40271 ];

	UOnlineSubsystemPC_execOnRegisterHostStatGuidComplete_Parms OnRegisterHostStatGuidComplete_Parms;

	this->ProcessEvent ( pFnOnRegisterHostStatGuidComplete, &OnRegisterHostStatGuidComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.RegisterHostStatGuid
// [0x00420000] 
// Parameters infos:

void UOnlineSubsystemPC::RegisterHostStatGuid ( )
{
	static UFunction* pFnRegisterHostStatGuid = NULL;

	if ( ! pFnRegisterHostStatGuid )
		pFnRegisterHostStatGuid = (UFunction*) UObject::GObjObjects()->Data[ 40599 ];

	UOnlineSubsystemPC_execRegisterHostStatGuid_Parms RegisterHostStatGuid_Parms;

	this->ProcessEvent ( pFnRegisterHostStatGuid, &RegisterHostStatGuid_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetHostStatGuid
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::GetHostStatGuid ( )
{
	static UFunction* pFnGetHostStatGuid = NULL;

	if ( ! pFnGetHostStatGuid )
		pFnGetHostStatGuid = (UFunction*) UObject::GObjObjects()->Data[ 40597 ];

	UOnlineSubsystemPC_execGetHostStatGuid_Parms GetHostStatGuid_Parms;

	this->ProcessEvent ( pFnGetHostStatGuid, &GetHostStatGuid_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.WriteOnlinePlayerScores
// [0x00420000] 
// Parameters infos:

void UOnlineSubsystemPC::WriteOnlinePlayerScores ( )
{
	static UFunction* pFnWriteOnlinePlayerScores = NULL;

	if ( ! pFnWriteOnlinePlayerScores )
		pFnWriteOnlinePlayerScores = (UFunction*) UObject::GObjObjects()->Data[ 40591 ];

	UOnlineSubsystemPC_execWriteOnlinePlayerScores_Parms WriteOnlinePlayerScores_Parms;

	this->ProcessEvent ( pFnWriteOnlinePlayerScores, &WriteOnlinePlayerScores_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFlushOnlineStatsCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ClearFlushOnlineStatsCompleteDelegate ( )
{
	static UFunction* pFnClearFlushOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnClearFlushOnlineStatsCompleteDelegate )
		pFnClearFlushOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40589 ];

	UOnlineSubsystemPC_execClearFlushOnlineStatsCompleteDelegate_Parms ClearFlushOnlineStatsCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearFlushOnlineStatsCompleteDelegate, &ClearFlushOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFlushOnlineStatsCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::AddFlushOnlineStatsCompleteDelegate ( )
{
	static UFunction* pFnAddFlushOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnAddFlushOnlineStatsCompleteDelegate )
		pFnAddFlushOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40587 ];

	UOnlineSubsystemPC_execAddFlushOnlineStatsCompleteDelegate_Parms AddFlushOnlineStatsCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddFlushOnlineStatsCompleteDelegate, &AddFlushOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnFlushOnlineStatsComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnFlushOnlineStatsComplete ( )
{
	static UFunction* pFnOnFlushOnlineStatsComplete = NULL;

	if ( ! pFnOnFlushOnlineStatsComplete )
		pFnOnFlushOnlineStatsComplete = (UFunction*) UObject::GObjObjects()->Data[ 40273 ];

	UOnlineSubsystemPC_execOnFlushOnlineStatsComplete_Parms OnFlushOnlineStatsComplete_Parms;

	this->ProcessEvent ( pFnOnFlushOnlineStatsComplete, &OnFlushOnlineStatsComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.FlushOnlineStats
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::FlushOnlineStats ( )
{
	static UFunction* pFnFlushOnlineStats = NULL;

	if ( ! pFnFlushOnlineStats )
		pFnFlushOnlineStats = (UFunction*) UObject::GObjObjects()->Data[ 40582 ];

	UOnlineSubsystemPC_execFlushOnlineStats_Parms FlushOnlineStats_Parms;

	this->ProcessEvent ( pFnFlushOnlineStats, &FlushOnlineStats_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.WriteOnlineStats
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::WriteOnlineStats ( )
{
	static UFunction* pFnWriteOnlineStats = NULL;

	if ( ! pFnWriteOnlineStats )
		pFnWriteOnlineStats = (UFunction*) UObject::GObjObjects()->Data[ 40577 ];

	UOnlineSubsystemPC_execWriteOnlineStats_Parms WriteOnlineStats_Parms;

	this->ProcessEvent ( pFnWriteOnlineStats, &WriteOnlineStats_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.FreeStats
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::FreeStats ( )
{
	static UFunction* pFnFreeStats = NULL;

	if ( ! pFnFreeStats )
		pFnFreeStats = (UFunction*) UObject::GObjObjects()->Data[ 40575 ];

	UOnlineSubsystemPC_execFreeStats_Parms FreeStats_Parms;

	this->ProcessEvent ( pFnFreeStats, &FreeStats_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadOnlineStatsCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ClearReadOnlineStatsCompleteDelegate ( )
{
	static UFunction* pFnClearReadOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnClearReadOnlineStatsCompleteDelegate )
		pFnClearReadOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40573 ];

	UOnlineSubsystemPC_execClearReadOnlineStatsCompleteDelegate_Parms ClearReadOnlineStatsCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearReadOnlineStatsCompleteDelegate, &ClearReadOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadOnlineStatsCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::AddReadOnlineStatsCompleteDelegate ( )
{
	static UFunction* pFnAddReadOnlineStatsCompleteDelegate = NULL;

	if ( ! pFnAddReadOnlineStatsCompleteDelegate )
		pFnAddReadOnlineStatsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40571 ];

	UOnlineSubsystemPC_execAddReadOnlineStatsCompleteDelegate_Parms AddReadOnlineStatsCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddReadOnlineStatsCompleteDelegate, &AddReadOnlineStatsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStatsByRankAroundPlayer
// [0x00024000] 
// Parameters infos:

void UOnlineSubsystemPC::ReadOnlineStatsByRankAroundPlayer ( )
{
	static UFunction* pFnReadOnlineStatsByRankAroundPlayer = NULL;

	if ( ! pFnReadOnlineStatsByRankAroundPlayer )
		pFnReadOnlineStatsByRankAroundPlayer = (UFunction*) UObject::GObjObjects()->Data[ 40566 ];

	UOnlineSubsystemPC_execReadOnlineStatsByRankAroundPlayer_Parms ReadOnlineStatsByRankAroundPlayer_Parms;

	this->ProcessEvent ( pFnReadOnlineStatsByRankAroundPlayer, &ReadOnlineStatsByRankAroundPlayer_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStatsByRank
// [0x00024000] 
// Parameters infos:

void UOnlineSubsystemPC::ReadOnlineStatsByRank ( )
{
	static UFunction* pFnReadOnlineStatsByRank = NULL;

	if ( ! pFnReadOnlineStatsByRank )
		pFnReadOnlineStatsByRank = (UFunction*) UObject::GObjObjects()->Data[ 40561 ];

	UOnlineSubsystemPC_execReadOnlineStatsByRank_Parms ReadOnlineStatsByRank_Parms;

	this->ProcessEvent ( pFnReadOnlineStatsByRank, &ReadOnlineStatsByRank_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStatsForFriends
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ReadOnlineStatsForFriends ( )
{
	static UFunction* pFnReadOnlineStatsForFriends = NULL;

	if ( ! pFnReadOnlineStatsForFriends )
		pFnReadOnlineStatsForFriends = (UFunction*) UObject::GObjObjects()->Data[ 40557 ];

	UOnlineSubsystemPC_execReadOnlineStatsForFriends_Parms ReadOnlineStatsForFriends_Parms;

	this->ProcessEvent ( pFnReadOnlineStatsForFriends, &ReadOnlineStatsForFriends_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadOnlineStats
// [0x00420000] 
// Parameters infos:

void UOnlineSubsystemPC::ReadOnlineStats ( )
{
	static UFunction* pFnReadOnlineStats = NULL;

	if ( ! pFnReadOnlineStats )
		pFnReadOnlineStats = (UFunction*) UObject::GObjObjects()->Data[ 40552 ];

	UOnlineSubsystemPC_execReadOnlineStats_Parms ReadOnlineStats_Parms;

	this->ProcessEvent ( pFnReadOnlineStats, &ReadOnlineStats_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadOnlineStatsComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnReadOnlineStatsComplete ( )
{
	static UFunction* pFnOnReadOnlineStatsComplete = NULL;

	if ( ! pFnOnReadOnlineStatsComplete )
		pFnOnReadOnlineStatsComplete = (UFunction*) UObject::GObjObjects()->Data[ 40275 ];

	UOnlineSubsystemPC_execOnReadOnlineStatsComplete_Parms OnReadOnlineStatsComplete_Parms;

	this->ProcessEvent ( pFnOnReadOnlineStatsComplete, &OnReadOnlineStatsComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SetSpeechRecognitionObject
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::SetSpeechRecognitionObject ( )
{
	static UFunction* pFnSetSpeechRecognitionObject = NULL;

	if ( ! pFnSetSpeechRecognitionObject )
		pFnSetSpeechRecognitionObject = (UFunction*) UObject::GObjObjects()->Data[ 40547 ];

	UOnlineSubsystemPC_execSetSpeechRecognitionObject_Parms SetSpeechRecognitionObject_Parms;

	this->ProcessEvent ( pFnSetSpeechRecognitionObject, &SetSpeechRecognitionObject_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SelectVocabulary
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::SelectVocabulary ( )
{
	static UFunction* pFnSelectVocabulary = NULL;

	if ( ! pFnSelectVocabulary )
		pFnSelectVocabulary = (UFunction*) UObject::GObjObjects()->Data[ 40543 ];

	UOnlineSubsystemPC_execSelectVocabulary_Parms SelectVocabulary_Parms;

	this->ProcessEvent ( pFnSelectVocabulary, &SelectVocabulary_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearRecognitionCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemPC::ClearRecognitionCompleteDelegate ( )
{
	static UFunction* pFnClearRecognitionCompleteDelegate = NULL;

	if ( ! pFnClearRecognitionCompleteDelegate )
		pFnClearRecognitionCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40539 ];

	UOnlineSubsystemPC_execClearRecognitionCompleteDelegate_Parms ClearRecognitionCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearRecognitionCompleteDelegate, &ClearRecognitionCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddRecognitionCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemPC::AddRecognitionCompleteDelegate ( )
{
	static UFunction* pFnAddRecognitionCompleteDelegate = NULL;

	if ( ! pFnAddRecognitionCompleteDelegate )
		pFnAddRecognitionCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40536 ];

	UOnlineSubsystemPC_execAddRecognitionCompleteDelegate_Parms AddRecognitionCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddRecognitionCompleteDelegate, &AddRecognitionCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnRecognitionComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnRecognitionComplete ( )
{
	static UFunction* pFnOnRecognitionComplete = NULL;

	if ( ! pFnOnRecognitionComplete )
		pFnOnRecognitionComplete = (UFunction*) UObject::GObjObjects()->Data[ 40228 ];

	UOnlineSubsystemPC_execOnRecognitionComplete_Parms OnRecognitionComplete_Parms;

	this->ProcessEvent ( pFnOnRecognitionComplete, &OnRecognitionComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetRecognitionResults
// [0x00420000] 
// Parameters infos:

void UOnlineSubsystemPC::GetRecognitionResults ( )
{
	static UFunction* pFnGetRecognitionResults = NULL;

	if ( ! pFnGetRecognitionResults )
		pFnGetRecognitionResults = (UFunction*) UObject::GObjObjects()->Data[ 40531 ];

	UOnlineSubsystemPC_execGetRecognitionResults_Parms GetRecognitionResults_Parms;

	this->ProcessEvent ( pFnGetRecognitionResults, &GetRecognitionResults_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.StopSpeechRecognition
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::StopSpeechRecognition ( )
{
	static UFunction* pFnStopSpeechRecognition = NULL;

	if ( ! pFnStopSpeechRecognition )
		pFnStopSpeechRecognition = (UFunction*) UObject::GObjObjects()->Data[ 40528 ];

	UOnlineSubsystemPC_execStopSpeechRecognition_Parms StopSpeechRecognition_Parms;

	this->ProcessEvent ( pFnStopSpeechRecognition, &StopSpeechRecognition_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.StartSpeechRecognition
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::StartSpeechRecognition ( )
{
	static UFunction* pFnStartSpeechRecognition = NULL;

	if ( ! pFnStartSpeechRecognition )
		pFnStartSpeechRecognition = (UFunction*) UObject::GObjObjects()->Data[ 40525 ];

	UOnlineSubsystemPC_execStartSpeechRecognition_Parms StartSpeechRecognition_Parms;

	this->ProcessEvent ( pFnStartSpeechRecognition, &StartSpeechRecognition_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.StopNetworkedVoice
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::StopNetworkedVoice ( )
{
	static UFunction* pFnStopNetworkedVoice = NULL;

	if ( ! pFnStopNetworkedVoice )
		pFnStopNetworkedVoice = (UFunction*) UObject::GObjObjects()->Data[ 40523 ];

	UOnlineSubsystemPC_execStopNetworkedVoice_Parms StopNetworkedVoice_Parms;

	this->ProcessEvent ( pFnStopNetworkedVoice, &StopNetworkedVoice_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.StartNetworkedVoice
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::StartNetworkedVoice ( )
{
	static UFunction* pFnStartNetworkedVoice = NULL;

	if ( ! pFnStartNetworkedVoice )
		pFnStartNetworkedVoice = (UFunction*) UObject::GObjObjects()->Data[ 40521 ];

	UOnlineSubsystemPC_execStartNetworkedVoice_Parms StartNetworkedVoice_Parms;

	this->ProcessEvent ( pFnStartNetworkedVoice, &StartNetworkedVoice_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.UnmuteRemoteTalker
// [0x00024000] 
// Parameters infos:

void UOnlineSubsystemPC::UnmuteRemoteTalker ( )
{
	static UFunction* pFnUnmuteRemoteTalker = NULL;

	if ( ! pFnUnmuteRemoteTalker )
		pFnUnmuteRemoteTalker = (UFunction*) UObject::GObjObjects()->Data[ 40516 ];

	UOnlineSubsystemPC_execUnmuteRemoteTalker_Parms UnmuteRemoteTalker_Parms;

	this->ProcessEvent ( pFnUnmuteRemoteTalker, &UnmuteRemoteTalker_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.MuteRemoteTalker
// [0x00024000] 
// Parameters infos:

void UOnlineSubsystemPC::MuteRemoteTalker ( )
{
	static UFunction* pFnMuteRemoteTalker = NULL;

	if ( ! pFnMuteRemoteTalker )
		pFnMuteRemoteTalker = (UFunction*) UObject::GObjObjects()->Data[ 40511 ];

	UOnlineSubsystemPC_execMuteRemoteTalker_Parms MuteRemoteTalker_Parms;

	this->ProcessEvent ( pFnMuteRemoteTalker, &MuteRemoteTalker_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.SetRemoteTalkerPriority
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::SetRemoteTalkerPriority ( )
{
	static UFunction* pFnSetRemoteTalkerPriority = NULL;

	if ( ! pFnSetRemoteTalkerPriority )
		pFnSetRemoteTalkerPriority = (UFunction*) UObject::GObjObjects()->Data[ 40506 ];

	UOnlineSubsystemPC_execSetRemoteTalkerPriority_Parms SetRemoteTalkerPriority_Parms;

	this->ProcessEvent ( pFnSetRemoteTalkerPriority, &SetRemoteTalkerPriority_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsHeadsetPresent
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::IsHeadsetPresent ( )
{
	static UFunction* pFnIsHeadsetPresent = NULL;

	if ( ! pFnIsHeadsetPresent )
		pFnIsHeadsetPresent = (UFunction*) UObject::GObjObjects()->Data[ 40503 ];

	UOnlineSubsystemPC_execIsHeadsetPresent_Parms IsHeadsetPresent_Parms;

	this->ProcessEvent ( pFnIsHeadsetPresent, &IsHeadsetPresent_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsRemotePlayerTalking
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::IsRemotePlayerTalking ( )
{
	static UFunction* pFnIsRemotePlayerTalking = NULL;

	if ( ! pFnIsRemotePlayerTalking )
		pFnIsRemotePlayerTalking = (UFunction*) UObject::GObjObjects()->Data[ 40500 ];

	UOnlineSubsystemPC_execIsRemotePlayerTalking_Parms IsRemotePlayerTalking_Parms;

	this->ProcessEvent ( pFnIsRemotePlayerTalking, &IsRemotePlayerTalking_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsLocalPlayerTalking
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::IsLocalPlayerTalking ( )
{
	static UFunction* pFnIsLocalPlayerTalking = NULL;

	if ( ! pFnIsLocalPlayerTalking )
		pFnIsLocalPlayerTalking = (UFunction*) UObject::GObjObjects()->Data[ 40497 ];

	UOnlineSubsystemPC_execIsLocalPlayerTalking_Parms IsLocalPlayerTalking_Parms;

	this->ProcessEvent ( pFnIsLocalPlayerTalking, &IsLocalPlayerTalking_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.UnregisterRemoteTalker
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::UnregisterRemoteTalker ( )
{
	static UFunction* pFnUnregisterRemoteTalker = NULL;

	if ( ! pFnUnregisterRemoteTalker )
		pFnUnregisterRemoteTalker = (UFunction*) UObject::GObjObjects()->Data[ 40494 ];

	UOnlineSubsystemPC_execUnregisterRemoteTalker_Parms UnregisterRemoteTalker_Parms;

	this->ProcessEvent ( pFnUnregisterRemoteTalker, &UnregisterRemoteTalker_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.RegisterRemoteTalker
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::RegisterRemoteTalker ( )
{
	static UFunction* pFnRegisterRemoteTalker = NULL;

	if ( ! pFnRegisterRemoteTalker )
		pFnRegisterRemoteTalker = (UFunction*) UObject::GObjObjects()->Data[ 40491 ];

	UOnlineSubsystemPC_execRegisterRemoteTalker_Parms RegisterRemoteTalker_Parms;

	this->ProcessEvent ( pFnRegisterRemoteTalker, &RegisterRemoteTalker_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.UnregisterLocalTalker
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::UnregisterLocalTalker ( )
{
	static UFunction* pFnUnregisterLocalTalker = NULL;

	if ( ! pFnUnregisterLocalTalker )
		pFnUnregisterLocalTalker = (UFunction*) UObject::GObjObjects()->Data[ 40488 ];

	UOnlineSubsystemPC_execUnregisterLocalTalker_Parms UnregisterLocalTalker_Parms;

	this->ProcessEvent ( pFnUnregisterLocalTalker, &UnregisterLocalTalker_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.RegisterLocalTalker
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::RegisterLocalTalker ( )
{
	static UFunction* pFnRegisterLocalTalker = NULL;

	if ( ! pFnRegisterLocalTalker )
		pFnRegisterLocalTalker = (UFunction*) UObject::GObjObjects()->Data[ 40485 ];

	UOnlineSubsystemPC_execRegisterLocalTalker_Parms RegisterLocalTalker_Parms;

	this->ProcessEvent ( pFnRegisterLocalTalker, &RegisterLocalTalker_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetFriendsList
// [0x00424000] 
// Parameters infos:

void UOnlineSubsystemPC::GetFriendsList ( )
{
	static UFunction* pFnGetFriendsList = NULL;

	if ( ! pFnGetFriendsList )
		pFnGetFriendsList = (UFunction*) UObject::GObjObjects()->Data[ 40478 ];

	UOnlineSubsystemPC_execGetFriendsList_Parms GetFriendsList_Parms;

	this->ProcessEvent ( pFnGetFriendsList, &GetFriendsList_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadFriendsCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemPC::ClearReadFriendsCompleteDelegate ( )
{
	static UFunction* pFnClearReadFriendsCompleteDelegate = NULL;

	if ( ! pFnClearReadFriendsCompleteDelegate )
		pFnClearReadFriendsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40474 ];

	UOnlineSubsystemPC_execClearReadFriendsCompleteDelegate_Parms ClearReadFriendsCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearReadFriendsCompleteDelegate, &ClearReadFriendsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadFriendsCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemPC::AddReadFriendsCompleteDelegate ( )
{
	static UFunction* pFnAddReadFriendsCompleteDelegate = NULL;

	if ( ! pFnAddReadFriendsCompleteDelegate )
		pFnAddReadFriendsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40471 ];

	UOnlineSubsystemPC_execAddReadFriendsCompleteDelegate_Parms AddReadFriendsCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddReadFriendsCompleteDelegate, &AddReadFriendsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadFriendsList
// [0x00024002] 
// Parameters infos:

void UOnlineSubsystemPC::ReadFriendsList ( )
{
	static UFunction* pFnReadFriendsList = NULL;

	if ( ! pFnReadFriendsList )
		pFnReadFriendsList = (UFunction*) UObject::GObjObjects()->Data[ 40464 ];

	UOnlineSubsystemPC_execReadFriendsList_Parms ReadFriendsList_Parms;

	this->ProcessEvent ( pFnReadFriendsList, &ReadFriendsList_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadFriendsComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnReadFriendsComplete ( )
{
	static UFunction* pFnOnReadFriendsComplete = NULL;

	if ( ! pFnOnReadFriendsComplete )
		pFnOnReadFriendsComplete = (UFunction*) UObject::GObjObjects()->Data[ 40231 ];

	UOnlineSubsystemPC_execOnReadFriendsComplete_Parms OnReadFriendsComplete_Parms;

	this->ProcessEvent ( pFnOnReadFriendsComplete, &OnReadFriendsComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLoginStatusChangeDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ClearLoginStatusChangeDelegate ( )
{
	static UFunction* pFnClearLoginStatusChangeDelegate = NULL;

	if ( ! pFnClearLoginStatusChangeDelegate )
		pFnClearLoginStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40460 ];

	UOnlineSubsystemPC_execClearLoginStatusChangeDelegate_Parms ClearLoginStatusChangeDelegate_Parms;

	this->ProcessEvent ( pFnClearLoginStatusChangeDelegate, &ClearLoginStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLoginStatusChangeDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::AddLoginStatusChangeDelegate ( )
{
	static UFunction* pFnAddLoginStatusChangeDelegate = NULL;

	if ( ! pFnAddLoginStatusChangeDelegate )
		pFnAddLoginStatusChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40457 ];

	UOnlineSubsystemPC_execAddLoginStatusChangeDelegate_Parms AddLoginStatusChangeDelegate_Parms;

	this->ProcessEvent ( pFnAddLoginStatusChangeDelegate, &AddLoginStatusChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLoginStatusChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnLoginStatusChange ( )
{
	static UFunction* pFnOnLoginStatusChange = NULL;

	if ( ! pFnOnLoginStatusChange )
		pFnOnLoginStatusChange = (UFunction*) UObject::GObjObjects()->Data[ 40279 ];

	UOnlineSubsystemPC_execOnLoginStatusChange_Parms OnLoginStatusChange_Parms;

	this->ProcessEvent ( pFnOnLoginStatusChange, &OnLoginStatusChange_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearWriteProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemPC::ClearWriteProfileSettingsCompleteDelegate ( )
{
	static UFunction* pFnClearWriteProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnClearWriteProfileSettingsCompleteDelegate )
		pFnClearWriteProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40451 ];

	UOnlineSubsystemPC_execClearWriteProfileSettingsCompleteDelegate_Parms ClearWriteProfileSettingsCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearWriteProfileSettingsCompleteDelegate, &ClearWriteProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddWriteProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemPC::AddWriteProfileSettingsCompleteDelegate ( )
{
	static UFunction* pFnAddWriteProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnAddWriteProfileSettingsCompleteDelegate )
		pFnAddWriteProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40448 ];

	UOnlineSubsystemPC_execAddWriteProfileSettingsCompleteDelegate_Parms AddWriteProfileSettingsCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddWriteProfileSettingsCompleteDelegate, &AddWriteProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnWriteProfileSettingsComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnWriteProfileSettingsComplete ( )
{
	static UFunction* pFnOnWriteProfileSettingsComplete = NULL;

	if ( ! pFnOnWriteProfileSettingsComplete )
		pFnOnWriteProfileSettingsComplete = (UFunction*) UObject::GObjObjects()->Data[ 40225 ];

	UOnlineSubsystemPC_execOnWriteProfileSettingsComplete_Parms OnWriteProfileSettingsComplete_Parms;

	this->ProcessEvent ( pFnOnWriteProfileSettingsComplete, &OnWriteProfileSettingsComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.WriteProfileSettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemPC::WriteProfileSettings ( )
{
	static UFunction* pFnWriteProfileSettings = NULL;

	if ( ! pFnWriteProfileSettings )
		pFnWriteProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 40442 ];

	UOnlineSubsystemPC_execWriteProfileSettings_Parms WriteProfileSettings_Parms;

	pFnWriteProfileSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnWriteProfileSettings, &WriteProfileSettings_Parms, NULL );

	pFnWriteProfileSettings->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetProfileSettings
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemPC::GetProfileSettings ( )
{
	static UFunction* pFnGetProfileSettings = NULL;

	if ( ! pFnGetProfileSettings )
		pFnGetProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 40439 ];

	UOnlineSubsystemPC_execGetProfileSettings_Parms GetProfileSettings_Parms;

	this->ProcessEvent ( pFnGetProfileSettings, &GetProfileSettings_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemPC::ClearReadProfileSettingsCompleteDelegate ( )
{
	static UFunction* pFnClearReadProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnClearReadProfileSettingsCompleteDelegate )
		pFnClearReadProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40435 ];

	UOnlineSubsystemPC_execClearReadProfileSettingsCompleteDelegate_Parms ClearReadProfileSettingsCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearReadProfileSettingsCompleteDelegate, &ClearReadProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadProfileSettingsCompleteDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemPC::AddReadProfileSettingsCompleteDelegate ( )
{
	static UFunction* pFnAddReadProfileSettingsCompleteDelegate = NULL;

	if ( ! pFnAddReadProfileSettingsCompleteDelegate )
		pFnAddReadProfileSettingsCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40432 ];

	UOnlineSubsystemPC_execAddReadProfileSettingsCompleteDelegate_Parms AddReadProfileSettingsCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddReadProfileSettingsCompleteDelegate, &AddReadProfileSettingsCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadProfileSettingsComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnReadProfileSettingsComplete ( )
{
	static UFunction* pFnOnReadProfileSettingsComplete = NULL;

	if ( ! pFnOnReadProfileSettingsComplete )
		pFnOnReadProfileSettingsComplete = (UFunction*) UObject::GObjObjects()->Data[ 40222 ];

	UOnlineSubsystemPC_execOnReadProfileSettingsComplete_Parms OnReadProfileSettingsComplete_Parms;

	this->ProcessEvent ( pFnOnReadProfileSettingsComplete, &OnReadProfileSettingsComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadProfileSettings
// [0x00020400] ( FUNC_Native )
// Parameters infos:

void UOnlineSubsystemPC::ReadProfileSettings ( )
{
	static UFunction* pFnReadProfileSettings = NULL;

	if ( ! pFnReadProfileSettings )
		pFnReadProfileSettings = (UFunction*) UObject::GObjObjects()->Data[ 40426 ];

	UOnlineSubsystemPC_execReadProfileSettings_Parms ReadProfileSettings_Parms;

	pFnReadProfileSettings->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnReadProfileSettings, &ReadProfileSettings_Parms, NULL );

	pFnReadProfileSettings->FunctionFlags |= 0x400;
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearFriendsChangeDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemPC::ClearFriendsChangeDelegate ( )
{
	static UFunction* pFnClearFriendsChangeDelegate = NULL;

	if ( ! pFnClearFriendsChangeDelegate )
		pFnClearFriendsChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40422 ];

	UOnlineSubsystemPC_execClearFriendsChangeDelegate_Parms ClearFriendsChangeDelegate_Parms;

	this->ProcessEvent ( pFnClearFriendsChangeDelegate, &ClearFriendsChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddFriendsChangeDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemPC::AddFriendsChangeDelegate ( )
{
	static UFunction* pFnAddFriendsChangeDelegate = NULL;

	if ( ! pFnAddFriendsChangeDelegate )
		pFnAddFriendsChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40419 ];

	UOnlineSubsystemPC_execAddFriendsChangeDelegate_Parms AddFriendsChangeDelegate_Parms;

	this->ProcessEvent ( pFnAddFriendsChangeDelegate, &AddFriendsChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearMutingChangeDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemPC::ClearMutingChangeDelegate ( )
{
	static UFunction* pFnClearMutingChangeDelegate = NULL;

	if ( ! pFnClearMutingChangeDelegate )
		pFnClearMutingChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40416 ];

	UOnlineSubsystemPC_execClearMutingChangeDelegate_Parms ClearMutingChangeDelegate_Parms;

	this->ProcessEvent ( pFnClearMutingChangeDelegate, &ClearMutingChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddMutingChangeDelegate
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemPC::AddMutingChangeDelegate ( )
{
	static UFunction* pFnAddMutingChangeDelegate = NULL;

	if ( ! pFnAddMutingChangeDelegate )
		pFnAddMutingChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40414 ];

	UOnlineSubsystemPC_execAddMutingChangeDelegate_Parms AddMutingChangeDelegate_Parms;

	this->ProcessEvent ( pFnAddMutingChangeDelegate, &AddMutingChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsGuestLogin
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::IsGuestLogin ( )
{
	static UFunction* pFnIsGuestLogin = NULL;

	if ( ! pFnIsGuestLogin )
		pFnIsGuestLogin = (UFunction*) UObject::GObjObjects()->Data[ 40411 ];

	UOnlineSubsystemPC_execIsGuestLogin_Parms IsGuestLogin_Parms;

	this->ProcessEvent ( pFnIsGuestLogin, &IsGuestLogin_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsLocalLogin
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::IsLocalLogin ( )
{
	static UFunction* pFnIsLocalLogin = NULL;

	if ( ! pFnIsLocalLogin )
		pFnIsLocalLogin = (UFunction*) UObject::GObjObjects()->Data[ 40408 ];

	UOnlineSubsystemPC_execIsLocalLogin_Parms IsLocalLogin_Parms;

	this->ProcessEvent ( pFnIsLocalLogin, &IsLocalLogin_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLoginCancelledDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ClearLoginCancelledDelegate ( )
{
	static UFunction* pFnClearLoginCancelledDelegate = NULL;

	if ( ! pFnClearLoginCancelledDelegate )
		pFnClearLoginCancelledDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40406 ];

	UOnlineSubsystemPC_execClearLoginCancelledDelegate_Parms ClearLoginCancelledDelegate_Parms;

	this->ProcessEvent ( pFnClearLoginCancelledDelegate, &ClearLoginCancelledDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLoginCancelledDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::AddLoginCancelledDelegate ( )
{
	static UFunction* pFnAddLoginCancelledDelegate = NULL;

	if ( ! pFnAddLoginCancelledDelegate )
		pFnAddLoginCancelledDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40404 ];

	UOnlineSubsystemPC_execAddLoginCancelledDelegate_Parms AddLoginCancelledDelegate_Parms;

	this->ProcessEvent ( pFnAddLoginCancelledDelegate, &AddLoginCancelledDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLoginChangeDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ClearLoginChangeDelegate ( )
{
	static UFunction* pFnClearLoginChangeDelegate = NULL;

	if ( ! pFnClearLoginChangeDelegate )
		pFnClearLoginChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40402 ];

	UOnlineSubsystemPC_execClearLoginChangeDelegate_Parms ClearLoginChangeDelegate_Parms;

	this->ProcessEvent ( pFnClearLoginChangeDelegate, &ClearLoginChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLoginChangeDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::AddLoginChangeDelegate ( )
{
	static UFunction* pFnAddLoginChangeDelegate = NULL;

	if ( ! pFnAddLoginChangeDelegate )
		pFnAddLoginChangeDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40400 ];

	UOnlineSubsystemPC_execAddLoginChangeDelegate_Parms AddLoginChangeDelegate_Parms;

	this->ProcessEvent ( pFnAddLoginChangeDelegate, &AddLoginChangeDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ShowFriendsUI
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ShowFriendsUI ( )
{
	static UFunction* pFnShowFriendsUI = NULL;

	if ( ! pFnShowFriendsUI )
		pFnShowFriendsUI = (UFunction*) UObject::GObjObjects()->Data[ 40397 ];

	UOnlineSubsystemPC_execShowFriendsUI_Parms ShowFriendsUI_Parms;

	this->ProcessEvent ( pFnShowFriendsUI, &ShowFriendsUI_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsMuted
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::IsMuted ( )
{
	static UFunction* pFnIsMuted = NULL;

	if ( ! pFnIsMuted )
		pFnIsMuted = (UFunction*) UObject::GObjObjects()->Data[ 40393 ];

	UOnlineSubsystemPC_execIsMuted_Parms IsMuted_Parms;

	this->ProcessEvent ( pFnIsMuted, &IsMuted_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AreAnyFriends
// [0x00420000] 
// Parameters infos:

void UOnlineSubsystemPC::AreAnyFriends ( )
{
	static UFunction* pFnAreAnyFriends = NULL;

	if ( ! pFnAreAnyFriends )
		pFnAreAnyFriends = (UFunction*) UObject::GObjObjects()->Data[ 40388 ];

	UOnlineSubsystemPC_execAreAnyFriends_Parms AreAnyFriends_Parms;

	this->ProcessEvent ( pFnAreAnyFriends, &AreAnyFriends_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.IsFriend
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::IsFriend ( )
{
	static UFunction* pFnIsFriend = NULL;

	if ( ! pFnIsFriend )
		pFnIsFriend = (UFunction*) UObject::GObjObjects()->Data[ 40384 ];

	UOnlineSubsystemPC_execIsFriend_Parms IsFriend_Parms;

	this->ProcessEvent ( pFnIsFriend, &IsFriend_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanShowPresenceInformation
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::CanShowPresenceInformation ( )
{
	static UFunction* pFnCanShowPresenceInformation = NULL;

	if ( ! pFnCanShowPresenceInformation )
		pFnCanShowPresenceInformation = (UFunction*) UObject::GObjObjects()->Data[ 40381 ];

	UOnlineSubsystemPC_execCanShowPresenceInformation_Parms CanShowPresenceInformation_Parms;

	this->ProcessEvent ( pFnCanShowPresenceInformation, &CanShowPresenceInformation_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanViewPlayerProfiles
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::CanViewPlayerProfiles ( )
{
	static UFunction* pFnCanViewPlayerProfiles = NULL;

	if ( ! pFnCanViewPlayerProfiles )
		pFnCanViewPlayerProfiles = (UFunction*) UObject::GObjObjects()->Data[ 40378 ];

	UOnlineSubsystemPC_execCanViewPlayerProfiles_Parms CanViewPlayerProfiles_Parms;

	this->ProcessEvent ( pFnCanViewPlayerProfiles, &CanViewPlayerProfiles_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanPurchaseContent
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::CanPurchaseContent ( )
{
	static UFunction* pFnCanPurchaseContent = NULL;

	if ( ! pFnCanPurchaseContent )
		pFnCanPurchaseContent = (UFunction*) UObject::GObjObjects()->Data[ 40375 ];

	UOnlineSubsystemPC_execCanPurchaseContent_Parms CanPurchaseContent_Parms;

	this->ProcessEvent ( pFnCanPurchaseContent, &CanPurchaseContent_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanDownloadUserContent
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::CanDownloadUserContent ( )
{
	static UFunction* pFnCanDownloadUserContent = NULL;

	if ( ! pFnCanDownloadUserContent )
		pFnCanDownloadUserContent = (UFunction*) UObject::GObjObjects()->Data[ 40372 ];

	UOnlineSubsystemPC_execCanDownloadUserContent_Parms CanDownloadUserContent_Parms;

	this->ProcessEvent ( pFnCanDownloadUserContent, &CanDownloadUserContent_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanCommunicate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::CanCommunicate ( )
{
	static UFunction* pFnCanCommunicate = NULL;

	if ( ! pFnCanCommunicate )
		pFnCanCommunicate = (UFunction*) UObject::GObjObjects()->Data[ 40369 ];

	UOnlineSubsystemPC_execCanCommunicate_Parms CanCommunicate_Parms;

	this->ProcessEvent ( pFnCanCommunicate, &CanCommunicate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.CanPlayOnline
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::CanPlayOnline ( )
{
	static UFunction* pFnCanPlayOnline = NULL;

	if ( ! pFnCanPlayOnline )
		pFnCanPlayOnline = (UFunction*) UObject::GObjObjects()->Data[ 40366 ];

	UOnlineSubsystemPC_execCanPlayOnline_Parms CanPlayOnline_Parms;

	this->ProcessEvent ( pFnCanPlayOnline, &CanPlayOnline_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetPlayerNickname
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemPC::GetPlayerNickname ( )
{
	static UFunction* pFnGetPlayerNickname = NULL;

	if ( ! pFnGetPlayerNickname )
		pFnGetPlayerNickname = (UFunction*) UObject::GObjObjects()->Data[ 40363 ];

	UOnlineSubsystemPC_execGetPlayerNickname_Parms GetPlayerNickname_Parms;

	this->ProcessEvent ( pFnGetPlayerNickname, &GetPlayerNickname_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetUniquePlayerId
// [0x00420002] 
// Parameters infos:

void UOnlineSubsystemPC::GetUniquePlayerId ( )
{
	static UFunction* pFnGetUniquePlayerId = NULL;

	if ( ! pFnGetUniquePlayerId )
		pFnGetUniquePlayerId = (UFunction*) UObject::GObjObjects()->Data[ 40359 ];

	UOnlineSubsystemPC_execGetUniquePlayerId_Parms GetUniquePlayerId_Parms;

	this->ProcessEvent ( pFnGetUniquePlayerId, &GetUniquePlayerId_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetLoginStatus
// [0x00020002] 
// Parameters infos:

void UOnlineSubsystemPC::GetLoginStatus ( )
{
	static UFunction* pFnGetLoginStatus = NULL;

	if ( ! pFnGetLoginStatus )
		pFnGetLoginStatus = (UFunction*) UObject::GObjObjects()->Data[ 40356 ];

	UOnlineSubsystemPC_execGetLoginStatus_Parms GetLoginStatus_Parms;

	this->ProcessEvent ( pFnGetLoginStatus, &GetLoginStatus_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLogoutCompletedDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ClearLogoutCompletedDelegate ( )
{
	static UFunction* pFnClearLogoutCompletedDelegate = NULL;

	if ( ! pFnClearLogoutCompletedDelegate )
		pFnClearLogoutCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40353 ];

	UOnlineSubsystemPC_execClearLogoutCompletedDelegate_Parms ClearLogoutCompletedDelegate_Parms;

	this->ProcessEvent ( pFnClearLogoutCompletedDelegate, &ClearLogoutCompletedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLogoutCompletedDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::AddLogoutCompletedDelegate ( )
{
	static UFunction* pFnAddLogoutCompletedDelegate = NULL;

	if ( ! pFnAddLogoutCompletedDelegate )
		pFnAddLogoutCompletedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40350 ];

	UOnlineSubsystemPC_execAddLogoutCompletedDelegate_Parms AddLogoutCompletedDelegate_Parms;

	this->ProcessEvent ( pFnAddLogoutCompletedDelegate, &AddLogoutCompletedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLogoutCompleted
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnLogoutCompleted ( )
{
	static UFunction* pFnOnLogoutCompleted = NULL;

	if ( ! pFnOnLogoutCompleted )
		pFnOnLogoutCompleted = (UFunction*) UObject::GObjObjects()->Data[ 40283 ];

	UOnlineSubsystemPC_execOnLogoutCompleted_Parms OnLogoutCompleted_Parms;

	this->ProcessEvent ( pFnOnLogoutCompleted, &OnLogoutCompleted_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.Logout
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::Logout ( )
{
	static UFunction* pFnLogout = NULL;

	if ( ! pFnLogout )
		pFnLogout = (UFunction*) UObject::GObjObjects()->Data[ 40346 ];

	UOnlineSubsystemPC_execLogout_Parms Logout_Parms;

	this->ProcessEvent ( pFnLogout, &Logout_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearLoginFailedDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ClearLoginFailedDelegate ( )
{
	static UFunction* pFnClearLoginFailedDelegate = NULL;

	if ( ! pFnClearLoginFailedDelegate )
		pFnClearLoginFailedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40343 ];

	UOnlineSubsystemPC_execClearLoginFailedDelegate_Parms ClearLoginFailedDelegate_Parms;

	this->ProcessEvent ( pFnClearLoginFailedDelegate, &ClearLoginFailedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddLoginFailedDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::AddLoginFailedDelegate ( )
{
	static UFunction* pFnAddLoginFailedDelegate = NULL;

	if ( ! pFnAddLoginFailedDelegate )
		pFnAddLoginFailedDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40340 ];

	UOnlineSubsystemPC_execAddLoginFailedDelegate_Parms AddLoginFailedDelegate_Parms;

	this->ProcessEvent ( pFnAddLoginFailedDelegate, &AddLoginFailedDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLoginFailed
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnLoginFailed ( )
{
	static UFunction* pFnOnLoginFailed = NULL;

	if ( ! pFnOnLoginFailed )
		pFnOnLoginFailed = (UFunction*) UObject::GObjObjects()->Data[ 40285 ];

	UOnlineSubsystemPC_execOnLoginFailed_Parms OnLoginFailed_Parms;

	this->ProcessEvent ( pFnOnLoginFailed, &OnLoginFailed_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AutoLogin
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::AutoLogin ( )
{
	static UFunction* pFnAutoLogin = NULL;

	if ( ! pFnAutoLogin )
		pFnAutoLogin = (UFunction*) UObject::GObjObjects()->Data[ 40336 ];

	UOnlineSubsystemPC_execAutoLogin_Parms AutoLogin_Parms;

	this->ProcessEvent ( pFnAutoLogin, &AutoLogin_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.Login
// [0x00024000] 
// Parameters infos:

void UOnlineSubsystemPC::Login ( )
{
	static UFunction* pFnLogin = NULL;

	if ( ! pFnLogin )
		pFnLogin = (UFunction*) UObject::GObjObjects()->Data[ 40330 ];

	UOnlineSubsystemPC_execLogin_Parms Login_Parms;

	this->ProcessEvent ( pFnLogin, &Login_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ShowLoginUI
// [0x00024000] 
// Parameters infos:

void UOnlineSubsystemPC::ShowLoginUI ( )
{
	static UFunction* pFnShowLoginUI = NULL;

	if ( ! pFnShowLoginUI )
		pFnShowLoginUI = (UFunction*) UObject::GObjObjects()->Data[ 40327 ];

	UOnlineSubsystemPC_execShowLoginUI_Parms ShowLoginUI_Parms;

	this->ProcessEvent ( pFnShowLoginUI, &ShowLoginUI_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnFriendsChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnFriendsChange ( )
{
	static UFunction* pFnOnFriendsChange = NULL;

	if ( ! pFnOnFriendsChange )
		pFnOnFriendsChange = (UFunction*) UObject::GObjObjects()->Data[ 40234 ];

	UOnlineSubsystemPC_execOnFriendsChange_Parms OnFriendsChange_Parms;

	this->ProcessEvent ( pFnOnFriendsChange, &OnFriendsChange_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearPlayerTalkingDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ClearPlayerTalkingDelegate ( )
{
	static UFunction* pFnClearPlayerTalkingDelegate = NULL;

	if ( ! pFnClearPlayerTalkingDelegate )
		pFnClearPlayerTalkingDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40325 ];

	UOnlineSubsystemPC_execClearPlayerTalkingDelegate_Parms ClearPlayerTalkingDelegate_Parms;

	this->ProcessEvent ( pFnClearPlayerTalkingDelegate, &ClearPlayerTalkingDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddPlayerTalkingDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::AddPlayerTalkingDelegate ( )
{
	static UFunction* pFnAddPlayerTalkingDelegate = NULL;

	if ( ! pFnAddPlayerTalkingDelegate )
		pFnAddPlayerTalkingDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40323 ];

	UOnlineSubsystemPC_execAddPlayerTalkingDelegate_Parms AddPlayerTalkingDelegate_Parms;

	this->ProcessEvent ( pFnAddPlayerTalkingDelegate, &AddPlayerTalkingDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnPlayerTalkingStateChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnPlayerTalkingStateChange ( )
{
	static UFunction* pFnOnPlayerTalkingStateChange = NULL;

	if ( ! pFnOnPlayerTalkingStateChange )
		pFnOnPlayerTalkingStateChange = (UFunction*) UObject::GObjObjects()->Data[ 40288 ];

	UOnlineSubsystemPC_execOnPlayerTalkingStateChange_Parms OnPlayerTalkingStateChange_Parms;

	this->ProcessEvent ( pFnOnPlayerTalkingStateChange, &OnPlayerTalkingStateChange_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetTitleFileState
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::GetTitleFileState ( )
{
	static UFunction* pFnGetTitleFileState = NULL;

	if ( ! pFnGetTitleFileState )
		pFnGetTitleFileState = (UFunction*) UObject::GObjObjects()->Data[ 40318 ];

	UOnlineSubsystemPC_execGetTitleFileState_Parms GetTitleFileState_Parms;

	this->ProcessEvent ( pFnGetTitleFileState, &GetTitleFileState_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.GetTitleFileContents
// [0x00420000] 
// Parameters infos:

void UOnlineSubsystemPC::GetTitleFileContents ( )
{
	static UFunction* pFnGetTitleFileContents = NULL;

	if ( ! pFnGetTitleFileContents )
		pFnGetTitleFileContents = (UFunction*) UObject::GObjObjects()->Data[ 40313 ];

	UOnlineSubsystemPC_execGetTitleFileContents_Parms GetTitleFileContents_Parms;

	this->ProcessEvent ( pFnGetTitleFileContents, &GetTitleFileContents_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ClearReadTitleFileCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ClearReadTitleFileCompleteDelegate ( )
{
	static UFunction* pFnClearReadTitleFileCompleteDelegate = NULL;

	if ( ! pFnClearReadTitleFileCompleteDelegate )
		pFnClearReadTitleFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40311 ];

	UOnlineSubsystemPC_execClearReadTitleFileCompleteDelegate_Parms ClearReadTitleFileCompleteDelegate_Parms;

	this->ProcessEvent ( pFnClearReadTitleFileCompleteDelegate, &ClearReadTitleFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.AddReadTitleFileCompleteDelegate
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::AddReadTitleFileCompleteDelegate ( )
{
	static UFunction* pFnAddReadTitleFileCompleteDelegate = NULL;

	if ( ! pFnAddReadTitleFileCompleteDelegate )
		pFnAddReadTitleFileCompleteDelegate = (UFunction*) UObject::GObjObjects()->Data[ 40309 ];

	UOnlineSubsystemPC_execAddReadTitleFileCompleteDelegate_Parms AddReadTitleFileCompleteDelegate_Parms;

	this->ProcessEvent ( pFnAddReadTitleFileCompleteDelegate, &AddReadTitleFileCompleteDelegate_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.ReadTitleFile
// [0x00020000] 
// Parameters infos:

void UOnlineSubsystemPC::ReadTitleFile ( )
{
	static UFunction* pFnReadTitleFile = NULL;

	if ( ! pFnReadTitleFile )
		pFnReadTitleFile = (UFunction*) UObject::GObjObjects()->Data[ 40306 ];

	UOnlineSubsystemPC_execReadTitleFile_Parms ReadTitleFile_Parms;

	this->ProcessEvent ( pFnReadTitleFile, &ReadTitleFile_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnReadTitleFileComplete
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnReadTitleFileComplete ( )
{
	static UFunction* pFnOnReadTitleFileComplete = NULL;

	if ( ! pFnOnReadTitleFileComplete )
		pFnOnReadTitleFileComplete = (UFunction*) UObject::GObjObjects()->Data[ 40290 ];

	UOnlineSubsystemPC_execOnReadTitleFileComplete_Parms OnReadTitleFileComplete_Parms;

	this->ProcessEvent ( pFnOnReadTitleFileComplete, &OnReadTitleFileComplete_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnMutingChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnMutingChange ( )
{
	static UFunction* pFnOnMutingChange = NULL;

	if ( ! pFnOnMutingChange )
		pFnOnMutingChange = (UFunction*) UObject::GObjObjects()->Data[ 40237 ];

	UOnlineSubsystemPC_execOnMutingChange_Parms OnMutingChange_Parms;

	this->ProcessEvent ( pFnOnMutingChange, &OnMutingChange_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLoginCancelled
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnLoginCancelled ( )
{
	static UFunction* pFnOnLoginCancelled = NULL;

	if ( ! pFnOnLoginCancelled )
		pFnOnLoginCancelled = (UFunction*) UObject::GObjObjects()->Data[ 40293 ];

	UOnlineSubsystemPC_execOnLoginCancelled_Parms OnLoginCancelled_Parms;

	this->ProcessEvent ( pFnOnLoginCancelled, &OnLoginCancelled_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.OnLoginChange
// [0x00120000] 
// Parameters infos:

void UOnlineSubsystemPC::OnLoginChange ( )
{
	static UFunction* pFnOnLoginChange = NULL;

	if ( ! pFnOnLoginChange )
		pFnOnLoginChange = (UFunction*) UObject::GObjObjects()->Data[ 40295 ];

	UOnlineSubsystemPC_execOnLoginChange_Parms OnLoginChange_Parms;

	this->ProcessEvent ( pFnOnLoginChange, &OnLoginChange_Parms, NULL );
};

// Function OnlineSubsystemPC.OnlineSubsystemPC.Init
// [0x00020C00] ( FUNC_Event | FUNC_Native )
// Parameters infos:

void UOnlineSubsystemPC::eventInit ( )
{
	static UFunction* pFnInit = NULL;

	if ( ! pFnInit )
		pFnInit = (UFunction*) UObject::GObjObjects()->Data[ 40301 ];

	UOnlineSubsystemPC_eventInit_Parms Init_Parms;

	pFnInit->FunctionFlags |= ~0x400;

	this->ProcessEvent ( pFnInit, &Init_Parms, NULL );

	pFnInit->FunctionFlags |= 0x400;
};


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
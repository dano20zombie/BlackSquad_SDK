/*
#############################################################################################
# Black Squad (11.01.2019) SDK
# Generated with TheFeckless UE3 SDK Generator v1.4_Beta-Rev.51
# ========================================================================================= #
# File: IpDrv_classes.h
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

#define CONST_PLAYER_MATCH                                       0
#define CONST_RANKED_MATCH                                       1
#define CONST_REC_MATCH                                          2
#define CONST_PRIVATE_MATCH                                      3
#define CONST_RANKEDPROVIDERTAG                                  "PlaylistsRanked"
#define CONST_UNRANKEDPROVIDERTAG                                "PlaylistsUnranked"
#define CONST_RECMODEPROVIDERTAG                                 "PlaylistsRecMode"
#define CONST_PRIVATEPROVIDERTAG                                 "PlaylistsPrivate"

/*
# ========================================================================================= #
# Enums
# ========================================================================================= #
*/

// Enum IpDrv.InternetLink.ELinkMode
/*enum ELinkMode
{
	MODE_Text                                          = 0,
	MODE_Line                                          = 1,
	MODE_Binary                                        = 2,
	MODE_MAX                                           = 3
};*/

// Enum IpDrv.InternetLink.EReceiveMode
/*enum EReceiveMode
{
	RMODE_Manual                                       = 0,
	RMODE_Event                                        = 1,
	RMODE_MAX                                          = 2
};*/

// Enum IpDrv.InternetLink.ELineMode
/*enum ELineMode
{
	LMODE_auto                                         = 0,
	LMODE_DOS                                          = 1,
	LMODE_UNIX                                         = 2,
	LMODE_MAC                                          = 3,
	LMODE_MAX                                          = 4
};*/

// Enum IpDrv.McpClashMobBase.McpChallengeFileStatus
/*enum McpChallengeFileStatus
{
	MCFS_NotStarted                                    = 0,
	MCFS_Pending                                       = 1,
	MCFS_Success                                       = 2,
	MCFS_Failed                                        = 3,
	MCFS_MAX                                           = 4
};*/

// Enum IpDrv.OnlineTitleFileDownloadBase.EMcpFileCompressionType
/*enum EMcpFileCompressionType
{
	MFCT_NONE                                          = 0,
	MFCT_ZLIB                                          = 1,
	MFCT_MAX                                           = 2
};*/

// Enum IpDrv.McpGroupsBase.EMcpGroupAccessLevel
/*enum EMcpGroupAccessLevel
{
	MGAL_Owner                                         = 0,
	MGAL_Member                                        = 1,
	MGAL_Public                                        = 2,
	MGAL_MAX                                           = 3
};*/

// Enum IpDrv.McpGroupsBase.EMcpGroupAcceptState
/*enum EMcpGroupAcceptState
{
	MGAS_Error                                         = 0,
	MGAS_Pending                                       = 1,
	MGAS_Accepted                                      = 2,
	MGAS_MAX                                           = 3
};*/

// Enum IpDrv.McpMessageBase.EMcpMessageCompressionType
/*enum EMcpMessageCompressionType
{
	MMCT_NONE                                          = 0,
	MMCT_LZO                                           = 1,
	MMCT_ZLIB                                          = 2,
	MMCT_MAX                                           = 3
};*/

// Enum IpDrv.MeshBeacon.EMeshBeaconPacketType
/*enum EMeshBeaconPacketType
{
	MB_Packet_UnknownType                              = 0,
	MB_Packet_ClientNewConnectionRequest               = 1,
	MB_Packet_ClientBeginBandwidthTest                 = 2,
	MB_Packet_ClientCreateNewSessionResponse           = 3,
	MB_Packet_HostNewConnectionResponse                = 4,
	MB_Packet_HostBandwidthTestRequest                 = 5,
	MB_Packet_HostCompletedBandwidthTest               = 6,
	MB_Packet_HostTravelRequest                        = 7,
	MB_Packet_HostCreateNewSessionRequest              = 8,
	MB_Packet_DummyData                                = 9,
	MB_Packet_Heartbeat                                = 10,
	MB_Packet_MAX                                      = 11
};*/

// Enum IpDrv.MeshBeacon.EMeshBeaconConnectionResult
/*enum EMeshBeaconConnectionResult
{
	MB_ConnectionResult_Succeeded                      = 0,
	MB_ConnectionResult_Duplicate                      = 1,
	MB_ConnectionResult_Timeout                        = 2,
	MB_ConnectionResult_Error                          = 3,
	MB_ConnectionResult_MAX                            = 4
};*/

// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestState
/*enum EMeshBeaconBandwidthTestState
{
	MB_BandwidthTestState_NotStarted                   = 0,
	MB_BandwidthTestState_RequestPending               = 1,
	MB_BandwidthTestState_StartPending                 = 2,
	MB_BandwidthTestState_InProgress                   = 3,
	MB_BandwidthTestState_Completed                    = 4,
	MB_BandwidthTestState_Incomplete                   = 5,
	MB_BandwidthTestState_Timeout                      = 6,
	MB_BandwidthTestState_Error                        = 7,
	MB_BandwidthTestState_MAX                          = 8
};*/

// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestResult
/*enum EMeshBeaconBandwidthTestResult
{
	MB_BandwidthTestResult_Succeeded                   = 0,
	MB_BandwidthTestResult_Timeout                     = 1,
	MB_BandwidthTestResult_Error                       = 2,
	MB_BandwidthTestResult_MAX                         = 3
};*/

// Enum IpDrv.MeshBeacon.EMeshBeaconBandwidthTestType
/*enum EMeshBeaconBandwidthTestType
{
	MB_BandwidthTestType_Upstream                      = 0,
	MB_BandwidthTestType_Downstream                    = 1,
	MB_BandwidthTestType_RoundtripLatency              = 2,
	MB_BandwidthTestType_MAX                           = 3
};*/

// Enum IpDrv.MeshBeaconClient.EMeshBeaconClientState
/*enum EMeshBeaconClientState
{
	MBCS_None                                          = 0,
	MBCS_Connecting                                    = 1,
	MBCS_Connected                                     = 2,
	MBCS_ConnectionFailed                              = 3,
	MBCS_AwaitingResponse                              = 4,
	MBCS_Closed                                        = 5,
	MBCS_MAX                                           = 6
};*/

// Enum IpDrv.OnlineEventsInterfaceMcp.EEventUploadType
/*enum EEventUploadType
{
	EUT_GenericStats                                   = 0,
	EUT_ProfileData                                    = 1,
	EUT_MatchmakingData                                = 2,
	EUT_PlaylistPopulation                             = 3,
	EUT_MAX                                            = 4
};*/

// Enum IpDrv.OnlineImageDownloaderWeb.EOnlineImageDownloadState
/*enum EOnlineImageDownloadState
{
	PIDS_NotStarted                                    = 0,
	PIDS_Downloading                                   = 1,
	PIDS_Succeeded                                     = 2,
	PIDS_Failed                                        = 3,
	PIDS_MAX                                           = 4
};*/

// Enum IpDrv.PartyBeacon.EReservationPacketType
/*enum EReservationPacketType
{
	RPT_UnknownPacketType                              = 0,
	RPT_ClientReservationRequest                       = 1,
	RPT_ClientReservationUpdateRequest                 = 2,
	RPT_ClientCancellationRequest                      = 3,
	RPT_HostReservationResponse                        = 4,
	RPT_HostReservationCountUpdate                     = 5,
	RPT_HostTravelRequest                              = 6,
	RPT_HostIsReady                                    = 7,
	RPT_HostHasCancelled                               = 8,
	RPT_Heartbeat                                      = 9,
	RPT_MAX                                            = 10
};*/

// Enum IpDrv.PartyBeacon.EPartyReservationResult
/*enum EPartyReservationResult
{
	PRR_GeneralError                                   = 0,
	PRR_PartyLimitReached                              = 1,
	PRR_IncorrectPlayerCount                           = 2,
	PRR_RequestTimedOut                                = 3,
	PRR_ReservationDuplicate                           = 4,
	PRR_ReservationNotFound                            = 5,
	PRR_ReservationAccepted                            = 6,
	PRR_ReservationDenied                              = 7,
	PRR_MAX                                            = 8
};*/

// Enum IpDrv.PartyBeaconClient.EPartyBeaconClientRequest
/*enum EPartyBeaconClientRequest
{
	PBClientRequest_NewReservation                     = 0,
	PBClientRequest_UpdateReservation                  = 1,
	PBClientRequest_MAX                                = 2
};*/

// Enum IpDrv.PartyBeaconClient.EPartyBeaconClientState
/*enum EPartyBeaconClientState
{
	PBCS_None                                          = 0,
	PBCS_Connecting                                    = 1,
	PBCS_Connected                                     = 2,
	PBCS_ConnectionFailed                              = 3,
	PBCS_AwaitingResponse                              = 4,
	PBCS_Closed                                        = 5,
	PBCS_MAX                                           = 6
};*/

// Enum IpDrv.PartyBeaconHost.EPartyBeaconHostState
/*enum EPartyBeaconHostState
{
	PBHS_AllowReservations                             = 0,
	PBHS_DenyReservations                              = 1,
	PBHS_MAX                                           = 2
};*/

// Enum IpDrv.TcpLink.ELinkState
/*enum ELinkState
{
	STATE_Initialized                                  = 0,
	STATE_Ready                                        = 1,
	STATE_Listening                                    = 2,
	STATE_Connecting                                   = 3,
	STATE_Connected                                    = 4,
	STATE_ListenClosePending                           = 5,
	STATE_ConnectClosePending                          = 6,
	STATE_ListenClosing                                = 7,
	STATE_ConnectClosing                               = 8,
	STATE_MAX                                          = 9
};*/

// Enum IpDrv.TitleFileDownloadCache.ETitleFileFileOp
/*enum ETitleFileFileOp
{
	TitleFile_None                                     = 0,
	TitleFile_Save                                     = 1,
	TitleFile_Load                                     = 2,
	TitleFile_MAX                                      = 3
};*/

// Enum IpDrv.WebRequest.ERequestType
/*enum ERequestType
{
	Request_GET                                        = 0,
	Request_POST                                       = 1,
	Request_MAX                                        = 2
};*/


/*
# ========================================================================================= #
# Classes
# ========================================================================================= #
*/

// Class IpDrv.ClientBeaconAddressResolver
// 0x000C (0x006C - 0x0060)
class UClientBeaconAddressResolver : public UObject
{
public:
	int                                                BeaconPort;                                       		// 0x0060 (0x0004) [0x0000000000000000]              
	struct FName                                       BeaconName;                                       		// 0x0064 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1437 ];

		return pClassPointer;
	};

};

UClass* UClientBeaconAddressResolver::pClassPointer = NULL;

// Class IpDrv.HTTPDownload
// 0x0130 (0x0BD4 - 0x0AA4)
class UHTTPDownload : public UDownload
{
public:
	struct FString                                     ProxyServerHost;                                  		// 0x0AA4 (0x0010) [0x0000000000000000]              
	int                                                ProxyServerPort;                                  		// 0x0AB4 (0x0004) [0x0000000000000000]              
	unsigned long                                      MaxRedirection : 1;                               		// 0x0AB8 (0x0004) [0x0000000000000000] [0x00000001] 
	float                                              ConnectionTimeout;                                		// 0x0ABC (0x0004) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x114 ];                           		// 0x0AC0 (0x0114) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1438 ];

		return pClassPointer;
	};

};

UClass* UHTTPDownload::pClassPointer = NULL;

// Class IpDrv.InternetLink
// 0x0024 (0x0268 - 0x0244)
class AInternetLink : public AInfo
{
public:
	unsigned char                                      LinkMode;                                         		// 0x0244 (0x0001) [0x0000000000000000]              
	unsigned char                                      InLineMode;                                       		// 0x0245 (0x0001) [0x0000000000000000]              
	unsigned char                                      OutLineMode;                                      		// 0x0246 (0x0001) [0x0000000000000000]              
	unsigned char                                      ReceiveMode;                                      		// 0x0247 (0x0001) [0x0000000000000000]              
	struct FPointer                                    Socket;                                           		// 0x0248 (0x0008) [0x0000000000000000]              
	int                                                Port;                                             		// 0x0250 (0x0004) [0x0000000000000000]              
	struct FPointer                                    RemoteSocket;                                     		// 0x0254 (0x0008) [0x0000000000000000]              
	struct FPointer                                    PrivateResolveInfo;                               		// 0x025C (0x0008) [0x0000000000000000]              
	int                                                DataPending;                                      		// 0x0264 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1439 ];

		return pClassPointer;
	};

	void eventResolveFailed ( );
	void eventResolved ( );
	void GetLocalIP ( );
	void StringToIpAddr ( );
	void IpAddrToString ( );
	void GetLastError ( );
	void Resolve ( );
	void ParseURL ( );
	void IsDataPending ( );
};

UClass* AInternetLink::pClassPointer = NULL;

// Class IpDrv.TcpLink
// 0x0034 (0x029C - 0x0268)
class ATcpLink : public AInternetLink
{
public:
	unsigned char                                      LinkState;                                        		// 0x0268 (0x0001) [0x0000000000000000]              
	struct FIpAddr                                     RemoteAddr;                                       		// 0x026C (0x0008) [0x0000000000000000]              
	class UClass*                                      AcceptClass;                                      		// 0x0274 (0x0008) [0x0000000000000000]              
	TArray< unsigned char >                            SendFIFO;                                         		// 0x027C (0x0010) [0x0000000000000000]              
	struct FString                                     RecvBuf;                                          		// 0x028C (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1440 ];

		return pClassPointer;
	};

	void eventReceivedBinary ( );
	void eventReceivedLine ( );
	void eventReceivedText ( );
	void eventClosed ( );
	void eventOpened ( );
	void eventAccepted ( );
	void ReadBinary ( );
	void ReadText ( );
	void SendBinary ( );
	void SendText ( );
	void IsConnected ( );
	void Close ( );
	void Open ( );
	void Listen ( );
	void BindPort ( );
};

UClass* ATcpLink::pClassPointer = NULL;

// Class IpDrv.McpServiceBase
// 0x0018 (0x0078 - 0x0060)
class UMcpServiceBase : public UObject
{
public:
	struct FString                                     McpConfigClassName;                               		// 0x0060 (0x0010) [0x0000000000000000]              
	class UMcpServiceConfig*                           McpConfig;                                        		// 0x0070 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1441 ];

		return pClassPointer;
	};

	void GetAppAccessURL ( );
	void GetBaseURL ( );
	void eventInit ( );
};

UClass* UMcpServiceBase::pClassPointer = NULL;

// Class IpDrv.MCPBase
// 0x0008 (0x0080 - 0x0078)
class UMCPBase : public UMcpServiceBase
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0078 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1442 ];

		return pClassPointer;
	};

};

UClass* UMCPBase::pClassPointer = NULL;

// Class IpDrv.OnlineEventsInterfaceMcp
// 0x0034 (0x00B4 - 0x0080)
class UOnlineEventsInterfaceMcp : public UMCPBase
{
public:
	TArray< struct FEventUploadConfig >                EventUploadConfigs;                               		// 0x0080 (0x0010) [0x0000000000000000]              
	TArray< struct FPointer >                          MCPEventPostObjects;                              		// 0x0090 (0x0010) [0x0000000000000000]              
	TArray< unsigned char >                            DisabledUploadTypes;                              		// 0x00A0 (0x0010) [0x0000000000000000]              
	unsigned long                                      bBinaryStats : 1;                                 		// 0x00B0 (0x0004) [0x0000000000000000] [0x00000001] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1443 ];

		return pClassPointer;
	};

	void UploadMatchmakingStats ( );
	void UpdatePlaylistPopulation ( );
	void UploadGameplayEventsData ( );
	void UploadPlayerData ( );
};

UClass* UOnlineEventsInterfaceMcp::pClassPointer = NULL;

// Class IpDrv.OnlineNewsInterfaceMcp
// 0x0034 (0x00B4 - 0x0080)
class UOnlineNewsInterfaceMcp : public UMCPBase
{
public:
	TArray< struct FNewsCacheEntry >                   NewsItems;                                        		// 0x0080 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ReadNewsDelegates;                                		// 0x0090 (0x0010) [0x0000000000000000]              
	unsigned long                                      bNeedsTicking : 1;                                		// 0x00A0 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             __OnReadNewsCompleted__Delegate;                  		// 0x00A4 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00A8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1444 ];

		return pClassPointer;
	};

	void GetNews ( );
	void ClearReadNewsCompletedDelegate ( );
	void AddReadNewsCompletedDelegate ( );
	void OnReadNewsCompleted ( );
	void ReadNews ( );
};

UClass* UOnlineNewsInterfaceMcp::pClassPointer = NULL;

// Class IpDrv.OnlineTitleFileDownloadBase
// 0x0084 (0x0104 - 0x0080)
class UOnlineTitleFileDownloadBase : public UMCPBase
{
public:
	TArray< struct FScriptDelegate >                   ReadTitleFileCompleteDelegates;                   		// 0x0080 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   RequestTitleFileListCompleteDelegates;            		// 0x0090 (0x0010) [0x0000000000000000]              
	struct FString                                     BaseUrl;                                          		// 0x00A0 (0x0010) [0x0000000000000000]              
	struct FString                                     RequestFileListURL;                               		// 0x00B0 (0x0010) [0x0000000000000000]              
	struct FString                                     RequestFileURL;                                   		// 0x00C0 (0x0010) [0x0000000000000000]              
	float                                              TimeOut;                                          		// 0x00D0 (0x0004) [0x0000000000000000]              
	TArray< struct FFileNameToURLMapping >             FilesToUrls;                                      		// 0x00D4 (0x0010) [0x0000000000000000]              
	struct FScriptDelegate                             __OnReadTitleFileComplete__Delegate;              		// 0x00E4 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00E8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnRequestTitleFileListComplete__Delegate;       		// 0x00F4 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00F8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1445 ];

		return pClassPointer;
	};

	void GetUrlForFile ( );
	void ClearRequestTitleFileListCompleteDelegate ( );
	void AddRequestTitleFileListCompleteDelegate ( );
	void OnRequestTitleFileListComplete ( );
	void RequestTitleFileList ( );
	void ClearDownloadedFile ( );
	void ClearDownloadedFiles ( );
	void GetTitleFileState ( );
	void GetTitleFileContents ( );
	void ClearReadTitleFileCompleteDelegate ( );
	void AddReadTitleFileCompleteDelegate ( );
	void ReadTitleFile ( );
	void OnReadTitleFileComplete ( );
};

UClass* UOnlineTitleFileDownloadBase::pClassPointer = NULL;

// Class IpDrv.OnlineTitleFileDownloadMcp
// 0x0014 (0x0118 - 0x0104)
class UOnlineTitleFileDownloadMcp : public UOnlineTitleFileDownloadBase
{
public:
	TArray< struct FTitleFileMcp >                     TitleFiles;                                       		// 0x0104 (0x0010) [0x0000000000000000]              
	int                                                DownloadCount;                                    		// 0x0114 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1446 ];

		return pClassPointer;
	};

	void ClearDownloadedFile ( );
	void ClearDownloadedFiles ( );
	void GetTitleFileState ( );
	void GetTitleFileContents ( );
	void ReadTitleFile ( );
};

UClass* UOnlineTitleFileDownloadMcp::pClassPointer = NULL;

// Class IpDrv.OnlineTitleFileDownloadWeb
// 0x0010 (0x0114 - 0x0104)
class UOnlineTitleFileDownloadWeb : public UOnlineTitleFileDownloadBase
{
public:
	TArray< struct FTitleFileWeb >                     TitleFiles;                                       		// 0x0104 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1447 ];

		return pClassPointer;
	};

	void GetUrlForFile ( );
	void OnFileListReceived ( );
	void RequestTitleFileList ( );
	void ClearDownloadedFile ( );
	void ClearDownloadedFiles ( );
	void GetTitleFileState ( );
	void GetTitleFileContents ( );
	void TriggerDelegates ( );
	void OnFileDownloadComplete ( );
	void ReadTitleFile ( );
	void UncompressTitleFileContents ( );
};

UClass* UOnlineTitleFileDownloadWeb::pClassPointer = NULL;

// Class IpDrv.TitleFileDownloadCache
// 0x0050 (0x00D0 - 0x0080)
class UTitleFileDownloadCache : public UMCPBase
{
public:
	TArray< struct FTitleFileCacheEntry >              TitleFiles;                                       		// 0x0080 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   LoadCompleteDelegates;                            		// 0x0090 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   SaveCompleteDelegates;                            		// 0x00A0 (0x0010) [0x0000000000000000]              
	struct FScriptDelegate                             __OnLoadTitleFileComplete__Delegate;              		// 0x00B0 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00B4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnSaveTitleFileComplete__Delegate;              		// 0x00C0 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00C4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1448 ];

		return pClassPointer;
	};

	void DeleteTitleFile ( );
	void DeleteTitleFiles ( );
	void ClearCachedFile ( );
	void ClearCachedFiles ( );
	void GetTitleFileLogicalName ( );
	void GetTitleFileHash ( );
	void GetTitleFileState ( );
	void GetTitleFileContents ( );
	void ClearSaveTitleFileCompleteDelegate ( );
	void AddSaveTitleFileCompleteDelegate ( );
	void OnSaveTitleFileComplete ( );
	void SaveTitleFile ( );
	void ClearLoadTitleFileCompleteDelegate ( );
	void AddLoadTitleFileCompleteDelegate ( );
	void OnLoadTitleFileComplete ( );
	void LoadTitleFile ( );
};

UClass* UTitleFileDownloadCache::pClassPointer = NULL;

// Class IpDrv.McpMessageBase
// 0x0074 (0x00EC - 0x0078)
class UMcpMessageBase : public UMcpServiceBase
{
public:
	struct FString                                     McpMessageManagerClassName;                       		// 0x0078 (0x0010) [0x0000000000000000]              
	unsigned char                                      CompressionType;                                  		// 0x0088 (0x0001) [0x0000000000000000]              
	TArray< struct FMcpMessageContents >               MessageContentsList;                              		// 0x008C (0x0010) [0x0000000000000000]              
	TArray< struct FMcpMessageList >                   MessageLists;                                     		// 0x009C (0x0010) [0x0000000000000000]              
	struct FScriptDelegate                             __OnCreateMessageComplete__Delegate;              		// 0x00AC (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00B0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnDeleteMessageComplete__Delegate;              		// 0x00BC (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00C0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnQueryMessagesComplete__Delegate;              		// 0x00CC (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00D0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnQueryMessageContentsComplete__Delegate;       		// 0x00DC (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x00E0 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1449 ];

		return pClassPointer;
	};

	void CacheMessageContents ( );
	void CacheMessage ( );
	void GetMessageContents ( );
	void OnQueryMessageContentsComplete ( );
	void QueryMessageContents ( );
	void GetMessageList ( );
	void OnQueryMessagesComplete ( );
	void QueryMessages ( );
	void OnDeleteMessageComplete ( );
	void DeleteMessage ( );
	void OnCreateMessageComplete ( );
	void CreateMessage ( );
	void CreateInstance ( );
};

UClass* UMcpMessageBase::pClassPointer = NULL;

// Class IpDrv.McpMessageManager
// 0x0078 (0x0164 - 0x00EC)
class UMcpMessageManager : public UMcpMessageBase
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x00EC (0x0008) [0x0000000000000000]              
	struct FString                                     CreateMessageUrl;                                 		// 0x00F4 (0x0010) [0x0000000000000000]              
	struct FString                                     DeleteMessageUrl;                                 		// 0x0104 (0x0010) [0x0000000000000000]              
	struct FString                                     QueryMessagesUrl;                                 		// 0x0114 (0x0010) [0x0000000000000000]              
	struct FString                                     QueryMessageContentsUrl;                          		// 0x0124 (0x0010) [0x0000000000000000]              
	struct FString                                     DeleteAllMessagesUrl;                             		// 0x0134 (0x0010) [0x0000000000000000]              
	TArray< struct FMcpCompressMessageRequest >        CompressMessageRequests;                          		// 0x0144 (0x0010) [0x0000000000000000]              
	TArray< struct FMcpUncompressMessageRequest >      UncompressMessageRequests;                        		// 0x0154 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1450 ];

		return pClassPointer;
	};

	void CacheMessageContents ( );
	void GetMessageById ( );
	void CacheMessage ( );
	void GetMessageContents ( );
	void OnQueryMessageContentsRequestComplete ( );
	void QueryMessageContents ( );
	void GetMessageList ( );
	void OnQueryMessagesRequestComplete ( );
	void QueryMessages ( );
	void OnDeleteMessageRequestComplete ( );
	void DeleteMessage ( );
	void OnCreateMessageRequestComplete ( );
	void CreateMessage ( );
	void eventFinishedAsyncUncompression ( );
	void StartAsyncUncompression ( );
	void StartAsyncCompression ( );
};

UClass* UMcpMessageManager::pClassPointer = NULL;

// Class IpDrv.McpUserCloudFileDownload
// 0x00D0 (0x0148 - 0x0078)
class UMcpUserCloudFileDownload : public UMcpServiceBase
{
public:
	struct FString                                     EnumerateCloudFilesUrl;                           		// 0x0078 (0x0010) [0x0000000000000000]              
	struct FString                                     ReadCloudFileUrl;                                 		// 0x0088 (0x0010) [0x0000000000000000]              
	struct FString                                     WriteCloudFileUrl;                                		// 0x0098 (0x0010) [0x0000000000000000]              
	struct FString                                     DeleteCloudFileUrl;                               		// 0x00A8 (0x0010) [0x0000000000000000]              
	TArray< struct FMcpUserCloudFilesEntry >           UserCloudFileRequests;                            		// 0x00B8 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   EnumerateUserFilesCompleteDelegates;              		// 0x00C8 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ReadUserFileCompleteDelegates;                    		// 0x00D8 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   WriteUserFileCompleteDelegates;                   		// 0x00E8 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   DeleteUserFileCompleteDelegates;                  		// 0x00F8 (0x0010) [0x0000000000000000]              
	struct FScriptDelegate                             __OnEnumerateUserFilesComplete__Delegate;         		// 0x0108 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x010C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReadUserFileComplete__Delegate;               		// 0x0118 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x011C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnWriteUserFileComplete__Delegate;              		// 0x0128 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x012C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnDeleteUserFileComplete__Delegate;             		// 0x0138 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x013C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1451 ];

		return pClassPointer;
	};

	void ClearAllDelegates ( );
	void ClearDeleteUserFileCompleteDelegate ( );
	void AddDeleteUserFileCompleteDelegate ( );
	void CallDeleteUserFileCompleteDelegates ( );
	void OnDeleteUserFileComplete ( );
	void OnHTTPRequestDeleteUserFileComplete ( );
	void DeleteUserFile ( );
	void ClearWriteUserFileCompleteDelegate ( );
	void AddWriteUserFileCompleteDelegate ( );
	void CallWriteUserFileCompleteDelegates ( );
	void OnWriteUserFileComplete ( );
	void OnHTTPRequestWriteUserFileComplete ( );
	void GetUserFileIndexForRequest ( );
	void WriteUserFile ( );
	void ClearReadUserFileCompleteDelegate ( );
	void AddReadUserFileCompleteDelegate ( );
	void CallReadUserFileCompleteDelegates ( );
	void OnReadUserFileComplete ( );
	void OnHTTPRequestReadUserFileComplete ( );
	void ReadUserFile ( );
	void GetUserFileList ( );
	void ClearEnumerateUserFileCompleteDelegate ( );
	void AddEnumerateUserFileCompleteDelegate ( );
	void CallEnumerateUserFileCompleteDelegates ( );
	void OnEnumerateUserFilesComplete ( );
	void OnHTTPRequestEnumerateUserFilesComplete ( );
	void EnumerateUserFiles ( );
	void ClearFile ( );
	void ClearFiles ( );
	void GetFileContents ( );
};

UClass* UMcpUserCloudFileDownload::pClassPointer = NULL;

// Class IpDrv.MeshBeacon
// 0x0044 (0x00A4 - 0x0060)
class UMeshBeacon : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0060 (0x0008) [0x0000000000000000]              
	int                                                MeshBeaconPort;                                   		// 0x0068 (0x0004) [0x0000000000000000]              
	struct FPointer                                    Socket;                                           		// 0x006C (0x0008) [0x0000000000000000]              
	unsigned long                                      bIsInTick : 1;                                    		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bWantsDeferredDestroy : 1;                        		// 0x0074 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bShouldTick : 1;                                  		// 0x0074 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              HeartbeatTimeout;                                 		// 0x0078 (0x0004) [0x0000000000000000]              
	float                                              ElapsedHeartbeatTime;                             		// 0x007C (0x0004) [0x0000000000000000]              
	struct FName                                       BeaconName;                                       		// 0x0080 (0x0008) [0x0000000000000000]              
	int                                                SocketSendBufferSize;                             		// 0x0088 (0x0004) [0x0000000000000000]              
	int                                                SocketReceiveBufferSize;                          		// 0x008C (0x0004) [0x0000000000000000]              
	int                                                MaxBandwidthTestBufferSize;                       		// 0x0090 (0x0004) [0x0000000000000000]              
	int                                                MinBandwidthTestBufferSize;                       		// 0x0094 (0x0004) [0x0000000000000000]              
	float                                              MaxBandwidthTestSendTime;                         		// 0x0098 (0x0004) [0x0000000000000000]              
	float                                              MaxBandwidthTestReceiveTime;                      		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                MaxBandwidthHistoryEntries;                       		// 0x00A0 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1452 ];

		return pClassPointer;
	};

	void eventDestroyBeacon ( );
};

UClass* UMeshBeacon::pClassPointer = NULL;

// Class IpDrv.MeshBeaconClient
// 0x00CC (0x0170 - 0x00A4)
class UMeshBeaconClient : public UMeshBeacon
{
public:
	struct FOnlineGameSearchResult                     HostPendingRequest;                               		// 0x00A4 (0x0010) [0x0000000000000000]              
	struct FClientConnectionRequest                    ClientPendingRequest;                             		// 0x00B4 (0x0028) [0x0000000000000000]              
	struct FClientBandwidthTestData                    CurrentBandwidthTest;                             		// 0x00DC (0x0014) [0x0000000000000000]              
	unsigned char                                      ClientBeaconState;                                		// 0x00F0 (0x0001) [0x0000000000000000]              
	unsigned char                                      ClientBeaconRequestType;                          		// 0x00F1 (0x0001) [0x0000000000000000]              
	float                                              ConnectionRequestTimeout;                         		// 0x00F4 (0x0004) [0x0000000000000000]              
	float                                              ConnectionRequestElapsedTime;                     		// 0x00F8 (0x0004) [0x0000000000000000]              
	struct FString                                     ResolverClassName;                                		// 0x00FC (0x0010) [0x0000000000000000]              
	class UClass*                                      ResolverClass;                                    		// 0x010C (0x0008) [0x0000000000000000]              
	class UClientBeaconAddressResolver*                Resolver;                                         		// 0x0114 (0x0008) [0x0000000000000000]              
	unsigned long                                      bUsingRegisteredAddr : 1;                         		// 0x011C (0x0004) [0x0000000000000000] [0x00000001] 
	struct FScriptDelegate                             __OnConnectionRequestResult__Delegate;            		// 0x0120 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0124 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReceivedBandwidthTestRequest__Delegate;       		// 0x0130 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0134 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReceivedBandwidthTestResults__Delegate;       		// 0x0140 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0144 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnTravelRequestReceived__Delegate;              		// 0x0150 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0154 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnCreateNewSessionRequestReceived__Delegate;    		// 0x0160 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x0164 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1453 ];

		return pClassPointer;
	};

	void SendHostNewGameSessionResponse ( );
	void OnCreateNewSessionRequestReceived ( );
	void OnTravelRequestReceived ( );
	void OnReceivedBandwidthTestResults ( );
	void OnReceivedBandwidthTestRequest ( );
	void OnConnectionRequestResult ( );
	void BeginBandwidthTest ( );
	void RequestConnection ( );
	void eventDestroyBeacon ( );
};

UClass* UMeshBeaconClient::pClassPointer = NULL;

// Class IpDrv.MeshBeaconHost
// 0x0080 (0x0124 - 0x00A4)
class UMeshBeaconHost : public UMeshBeacon
{
public:
	TArray< struct FClientMeshBeaconConnection >       ClientConnections;                                		// 0x00A4 (0x0010) [0x0000000000000000]              
	TArray< struct FUniqueNetId >                      PendingPlayerConnections;                         		// 0x00B4 (0x0010) [0x0000000000000000]              
	struct FUniqueNetId                                OwningPlayerId;                                   		// 0x00C4 (0x0008) [0x0000000000000000]              
	unsigned long                                      bAllowBandwidthTesting : 1;                       		// 0x00CC (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                ConnectionBacklog;                                		// 0x00D0 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __OnReceivedClientConnectionRequest__Delegate;    		// 0x00D4 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00D8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnStartedBandwidthTest__Delegate;               		// 0x00E4 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00E8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnFinishedBandwidthTest__Delegate;              		// 0x00F4 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00F8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnAllPendingPlayersConnected__Delegate;         		// 0x0104 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0108 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReceivedClientCreateNewSessionResult__Delegate;		// 0x0114 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x0118 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1454 ];

		return pClassPointer;
	};

	void OnReceivedClientCreateNewSessionResult ( );
	void RequestClientCreateNewSession ( );
	void TellClientsToTravel ( );
	void OnAllPendingPlayersConnected ( );
	void AllPlayersConnected ( );
	void GetConnectionIndexForPlayer ( );
	void SetPendingPlayerConnections ( );
	void OnFinishedBandwidthTest ( );
	void OnStartedBandwidthTest ( );
	void OnReceivedClientConnectionRequest ( );
	void AllowBandwidthTesting ( );
	void CancelPendingBandwidthTests ( );
	void HasPendingBandwidthTest ( );
	void CancelInProgressBandwidthTests ( );
	void HasInProgressBandwidthTest ( );
	void RequestClientBandwidthTest ( );
	void eventDestroyBeacon ( );
	void InitHostBeacon ( );
};

UClass* UMeshBeaconHost::pClassPointer = NULL;

// Class IpDrv.OnlineSubsystemCommonImpl
// 0x0024 (0x01E0 - 0x01BC)
class UOnlineSubsystemCommonImpl : public UOnlineSubsystem
{
public:
	struct FPointer                                    VoiceEngine;                                      		// 0x01BC (0x0008) [0x0000000000000000]              
	int                                                MaxLocalTalkers;                                  		// 0x01C4 (0x0004) [0x0000000000000000]              
	int                                                MaxRemoteTalkers;                                 		// 0x01C8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bIsUsingSpeechRecognition : 1;                    		// 0x01CC (0x0004) [0x0000000000000000] [0x00000001] 
	class UOnlineGameInterfaceImpl*                    GameInterfaceImpl;                                		// 0x01D0 (0x0008) [0x0000000000000000]              
	class UOnlineAuthInterfaceImpl*                    AuthInterfaceImpl;                                		// 0x01D8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1455 ];

		return pClassPointer;
	};

	void GetRegisteredPlayers ( );
	void IsPlayerInSession ( );
	void eventGetPlayerNicknameFromIndex ( );
};

UClass* UOnlineSubsystemCommonImpl::pClassPointer = NULL;

// Class IpDrv.OnlineAuthInterfaceImpl
// 0x02C4 (0x0324 - 0x0060)
class UOnlineAuthInterfaceImpl : public UObject
{
public:
	struct FPointer                                    VfTable_IOnlineAuthInterface;                     		// 0x0060 (0x0008) [0x0000000000000000]              
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                                  		// 0x0068 (0x0008) [0x0000000000000000]              
	unsigned long                                      bAuthReady : 1;                                   		// 0x0070 (0x0004) [0x0000000000000000] [0x00000001] 
	struct FSparseArray_Mirror                         ClientAuthSessions;                               		// 0x0074 (0x0038) [0x0000000000000000]              
	struct FSparseArray_Mirror                         ServerAuthSessions;                               		// 0x00AC (0x0038) [0x0000000000000000]              
	struct FSparseArray_Mirror                         PeerAuthSessions;                                 		// 0x00E4 (0x0038) [0x0000000000000000]              
	struct FSparseArray_Mirror                         LocalClientAuthSessions;                          		// 0x011C (0x0038) [0x0000000000000000]              
	struct FSparseArray_Mirror                         LocalServerAuthSessions;                          		// 0x0154 (0x0038) [0x0000000000000000]              
	struct FSparseArray_Mirror                         LocalPeerAuthSessions;                            		// 0x018C (0x0038) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   AuthReadyDelegates;                               		// 0x01C4 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ClientAuthRequestDelegates;                       		// 0x01D4 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ServerAuthRequestDelegates;                       		// 0x01E4 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ClientAuthResponseDelegates;                      		// 0x01F4 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ServerAuthResponseDelegates;                      		// 0x0204 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ClientAuthCompleteDelegates;                      		// 0x0214 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ServerAuthCompleteDelegates;                      		// 0x0224 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ClientAuthEndSessionRequestDelegates;             		// 0x0234 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ServerAuthRetryRequestDelegates;                  		// 0x0244 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ClientConnectionCloseDelegates;                   		// 0x0254 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   ServerConnectionCloseDelegates;                   		// 0x0264 (0x0010) [0x0000000000000000]              
	struct FScriptDelegate                             __OnAuthReady__Delegate;                          		// 0x0274 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0278 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnClientAuthRequest__Delegate;                  		// 0x0284 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0288 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnServerAuthRequest__Delegate;                  		// 0x0294 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0298 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnClientAuthResponse__Delegate;                 		// 0x02A4 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x02A8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnServerAuthResponse__Delegate;                 		// 0x02B4 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x02B8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnClientAuthComplete__Delegate;                 		// 0x02C4 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x02C8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnServerAuthComplete__Delegate;                 		// 0x02D4 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData06[ 0x4 ];                             		// 0x02D8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnClientAuthEndSessionRequest__Delegate;        		// 0x02E4 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData07[ 0x4 ];                             		// 0x02E8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnServerAuthRetryRequest__Delegate;             		// 0x02F4 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData08[ 0x4 ];                             		// 0x02F8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnClientConnectionClose__Delegate;              		// 0x0304 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData09[ 0x4 ];                             		// 0x0308 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnServerConnectionClose__Delegate;              		// 0x0314 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData10[ 0x4 ];                             		// 0x0318 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1456 ];

		return pClassPointer;
	};

	void GetServerAddr ( );
	void GetServerUniqueId ( );
	void FindLocalServerAuthSession ( );
	void FindServerAuthSession ( );
	void FindLocalClientAuthSession ( );
	void FindClientAuthSession ( );
	void AllLocalServerAuthSessions ( );
	void AllServerAuthSessions ( );
	void AllLocalClientAuthSessions ( );
	void AllClientAuthSessions ( );
	void EndAllRemoteServerAuthSessions ( );
	void EndAllLocalServerAuthSessions ( );
	void EndRemoteServerAuthSession ( );
	void EndLocalServerAuthSession ( );
	void VerifyServerAuthSession ( );
	void CreateServerAuthSession ( );
	void EndAllRemoteClientAuthSessions ( );
	void EndAllLocalClientAuthSessions ( );
	void EndRemoteClientAuthSession ( );
	void EndLocalClientAuthSession ( );
	void VerifyClientAuthSession ( );
	void CreateClientAuthSession ( );
	void SendServerAuthRetryRequest ( );
	void SendClientAuthEndSessionRequest ( );
	void SendServerAuthResponse ( );
	void SendClientAuthResponse ( );
	void SendServerAuthRequest ( );
	void SendClientAuthRequest ( );
	void ClearServerConnectionCloseDelegate ( );
	void AddServerConnectionCloseDelegate ( );
	void OnServerConnectionClose ( );
	void ClearClientConnectionCloseDelegate ( );
	void AddClientConnectionCloseDelegate ( );
	void OnClientConnectionClose ( );
	void ClearServerAuthRetryRequestDelegate ( );
	void AddServerAuthRetryRequestDelegate ( );
	void OnServerAuthRetryRequest ( );
	void ClearClientAuthEndSessionRequestDelegate ( );
	void AddClientAuthEndSessionRequestDelegate ( );
	void OnClientAuthEndSessionRequest ( );
	void ClearServerAuthCompleteDelegate ( );
	void AddServerAuthCompleteDelegate ( );
	void OnServerAuthComplete ( );
	void ClearClientAuthCompleteDelegate ( );
	void AddClientAuthCompleteDelegate ( );
	void OnClientAuthComplete ( );
	void ClearServerAuthResponseDelegate ( );
	void AddServerAuthResponseDelegate ( );
	void OnServerAuthResponse ( );
	void ClearClientAuthResponseDelegate ( );
	void AddClientAuthResponseDelegate ( );
	void OnClientAuthResponse ( );
	void ClearServerAuthRequestDelegate ( );
	void AddServerAuthRequestDelegate ( );
	void OnServerAuthRequest ( );
	void ClearClientAuthRequestDelegate ( );
	void AddClientAuthRequestDelegate ( );
	void OnClientAuthRequest ( );
	void ClearAuthReadyDelegate ( );
	void AddAuthReadyDelegate ( );
	void OnAuthReady ( );
	void IsReady ( );
};

UClass* UOnlineAuthInterfaceImpl::pClassPointer = NULL;

// Class IpDrv.OnlineGameInterfaceImpl
// 0x01F8 (0x0258 - 0x0060)
class UOnlineGameInterfaceImpl : public UObject
{
public:
	class UOnlineSubsystemCommonImpl*                  OwningSubsystem;                                  		// 0x0060 (0x0008) [0x0000000000000000]              
	class UOnlineGameSettings*                         GameSettings;                                     		// 0x0068 (0x0008) [0x0000000000000000]              
	class UOnlineGameSearch*                           GameSearch;                                       		// 0x0070 (0x0008) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   CreateOnlineGameCompleteDelegates;                		// 0x0078 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   UpdateOnlineGameCompleteDelegates;                		// 0x0088 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   DestroyOnlineGameCompleteDelegates;               		// 0x0098 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   JoinOnlineGameCompleteDelegates;                  		// 0x00A8 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   MigrateOnlineGameCompleteDelegates;               		// 0x00B8 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   JoinMigratedOnlineGameCompleteDelegates;          		// 0x00C8 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   RecalculateSkillRatingCompleteDelegates;          		// 0x00D8 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   StartOnlineGameCompleteDelegates;                 		// 0x00E8 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   EndOnlineGameCompleteDelegates;                   		// 0x00F8 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   FindOnlineGamesCompleteDelegates;                 		// 0x0108 (0x0010) [0x0000000000000000]              
	TArray< struct FScriptDelegate >                   CancelFindOnlineGamesCompleteDelegates;           		// 0x0118 (0x0010) [0x0000000000000000]              
	unsigned char                                      LanBeaconState;                                   		// 0x0128 (0x0001) [0x0000000000000000]              
	unsigned char                                      LanNonce[ 0x8 ];                                  		// 0x0129 (0x0008) [0x0000000000000000]              
	int                                                LanAnnouncePort;                                  		// 0x0134 (0x0004) [0x0000000000000000]              
	int                                                LanGameUniqueId;                                  		// 0x0138 (0x0004) [0x0000000000000000]              
	int                                                LanPacketPlatformMask;                            		// 0x013C (0x0004) [0x0000000000000000]              
	float                                              LanQueryTimeLeft;                                 		// 0x0140 (0x0004) [0x0000000000000000]              
	float                                              LanQueryTimeout;                                  		// 0x0144 (0x0004) [0x0000000000000000]              
	struct FPointer                                    LanBeacon;                                        		// 0x0148 (0x0008) [0x0000000000000000]              
	struct FPointer                                    SessionInfo;                                      		// 0x0150 (0x0008) [0x0000000000000000]              
	struct FScriptDelegate                             __OnFindOnlineGamesComplete__Delegate;            		// 0x0158 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x015C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnCreateOnlineGameComplete__Delegate;           		// 0x0168 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x016C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnUpdateOnlineGameComplete__Delegate;           		// 0x0178 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x017C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnDestroyOnlineGameComplete__Delegate;          		// 0x0188 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x018C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnCancelFindOnlineGamesComplete__Delegate;      		// 0x0198 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x019C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnJoinOnlineGameComplete__Delegate;             		// 0x01A8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x01AC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnRegisterPlayerComplete__Delegate;             		// 0x01B8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData06[ 0x4 ];                             		// 0x01BC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnUnregisterPlayerComplete__Delegate;           		// 0x01C8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData07[ 0x4 ];                             		// 0x01CC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnStartOnlineGameComplete__Delegate;            		// 0x01D8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData08[ 0x4 ];                             		// 0x01DC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnEndOnlineGameComplete__Delegate;              		// 0x01E8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData09[ 0x4 ];                             		// 0x01EC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnArbitrationRegistrationComplete__Delegate;    		// 0x01F8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData10[ 0x4 ];                             		// 0x01FC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnGameInviteAccepted__Delegate;                 		// 0x0208 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData11[ 0x4 ];                             		// 0x020C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnRecalculateSkillRatingComplete__Delegate;     		// 0x0218 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData12[ 0x4 ];                             		// 0x021C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnMigrateOnlineGameComplete__Delegate;          		// 0x0228 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData13[ 0x4 ];                             		// 0x022C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnJoinMigratedOnlineGameComplete__Delegate;     		// 0x0238 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData14[ 0x4 ];                             		// 0x023C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnQosStatusChanged__Delegate;                   		// 0x0248 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData15[ 0x4 ];                             		// 0x024C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1457 ];

		return pClassPointer;
	};

	void ClearQosStatusChangedDelegate ( );
	void AddQosStatusChangedDelegate ( );
	void OnQosStatusChanged ( );
	void BindPlatformSpecificSessionToSearch ( );
	void ReadPlatformSpecificSessionInfoBySessionName ( );
	void ReadPlatformSpecificSessionInfo ( );
	void QueryNonAdvertisedData ( );
	void ClearJoinMigratedOnlineGameCompleteDelegate ( );
	void AddJoinMigratedOnlineGameCompleteDelegate ( );
	void OnJoinMigratedOnlineGameComplete ( );
	void JoinMigratedOnlineGame ( );
	void ClearMigrateOnlineGameCompleteDelegate ( );
	void AddMigrateOnlineGameCompleteDelegate ( );
	void OnMigrateOnlineGameComplete ( );
	void MigrateOnlineGame ( );
	void ClearRecalculateSkillRatingCompleteDelegate ( );
	void AddRecalculateSkillRatingCompleteDelegate ( );
	void OnRecalculateSkillRatingComplete ( );
	void RecalculateSkillRating ( );
	void AcceptGameInvite ( );
	void ClearGameInviteAcceptedDelegate ( );
	void AddGameInviteAcceptedDelegate ( );
	void OnGameInviteAccepted ( );
	void GetArbitratedPlayers ( );
	void ClearArbitrationRegistrationCompleteDelegate ( );
	void AddArbitrationRegistrationCompleteDelegate ( );
	void OnArbitrationRegistrationComplete ( );
	void RegisterForArbitration ( );
	void ClearEndOnlineGameCompleteDelegate ( );
	void AddEndOnlineGameCompleteDelegate ( );
	void OnEndOnlineGameComplete ( );
	void EndOnlineGame ( );
	void ClearStartOnlineGameCompleteDelegate ( );
	void AddStartOnlineGameCompleteDelegate ( );
	void OnStartOnlineGameComplete ( );
	void StartOnlineGame ( );
	void ClearUnregisterPlayerCompleteDelegate ( );
	void AddUnregisterPlayerCompleteDelegate ( );
	void OnUnregisterPlayerComplete ( );
	void UnregisterPlayers ( );
	void UnregisterPlayer ( );
	void ClearRegisterPlayerCompleteDelegate ( );
	void AddRegisterPlayerCompleteDelegate ( );
	void OnRegisterPlayerComplete ( );
	void RegisterPlayers ( );
	void RegisterPlayer ( );
	void GetResolvedConnectString ( );
	void ClearJoinOnlineGameCompleteDelegate ( );
	void AddJoinOnlineGameCompleteDelegate ( );
	void OnJoinOnlineGameComplete ( );
	void JoinOnlineGame ( );
	void FreeSearchResults ( );
	void ClearCancelFindOnlineGamesCompleteDelegate ( );
	void AddCancelFindOnlineGamesCompleteDelegate ( );
	void OnCancelFindOnlineGamesComplete ( );
	void CancelFindOnlineGames ( );
	void ClearFindOnlineGamesCompleteDelegate ( );
	void AddFindOnlineGamesCompleteDelegate ( );
	void FindOnlineGames ( );
	void ClearDestroyOnlineGameCompleteDelegate ( );
	void AddDestroyOnlineGameCompleteDelegate ( );
	void OnDestroyOnlineGameComplete ( );
	void DestroyOnlineGame ( );
	void ClearUpdateOnlineGameCompleteDelegate ( );
	void AddUpdateOnlineGameCompleteDelegate ( );
	void OnUpdateOnlineGameComplete ( );
	void UpdateOnlineGame ( );
	void ClearCreateOnlineGameCompleteDelegate ( );
	void AddCreateOnlineGameCompleteDelegate ( );
	void OnCreateOnlineGameComplete ( );
	void CreateOnlineGame ( );
	void GetGameSearch ( );
	void GetGameSettings ( );
	void OnFindOnlineGamesComplete ( );
};

UClass* UOnlineGameInterfaceImpl::pClassPointer = NULL;

// Class IpDrv.OnlinePlaylistManager
// 0x00D0 (0x0130 - 0x0060)
class UOnlinePlaylistManager : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0060 (0x0008) [0x0000000000000000]              
	TArray< struct FPlaylist >                         Playlists;                                        		// 0x0068 (0x0010) [0x0000000000000000]              
	TArray< struct FString >                           PlaylistFileNames;                                		// 0x0078 (0x0010) [0x0000000000000000]              
	TArray< struct FName >                             DatastoresToRefresh;                              		// 0x0088 (0x0010) [0x0000000000000000]              
	int                                                DownloadCount;                                    		// 0x0098 (0x0004) [0x0000000000000000]              
	int                                                SuccessfulCount;                                  		// 0x009C (0x0004) [0x0000000000000000]              
	int                                                VersionNumber;                                    		// 0x00A0 (0x0004) [0x0000000000000000]              
	TArray< struct FPlaylistPopulation >               PopulationData;                                   		// 0x00A4 (0x0010) [0x0000000000000000]              
	int                                                WorldwideTotalPlayers;                            		// 0x00B4 (0x0004) [0x0000000000000000]              
	int                                                RegionTotalPlayers;                               		// 0x00B8 (0x0004) [0x0000000000000000]              
	class UOnlineTitleFileInterface*                   TitleFileInterface;                               		// 0x00BC (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x00C4 (0x0008) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FString                                     PopulationFileName;                               		// 0x00CC (0x0010) [0x0000000000000000]              
	float                                              NextPlaylistPopulationUpdateTime;                 		// 0x00DC (0x0004) [0x0000000000000000]              
	float                                              PlaylistPopulationUpdateInterval;                 		// 0x00E0 (0x0004) [0x0000000000000000]              
	int                                                MinPlaylistIdToReport;                            		// 0x00E4 (0x0004) [0x0000000000000000]              
	int                                                CurrentPlaylistId;                                		// 0x00E8 (0x0004) [0x0000000000000000]              
	struct FName                                       EventsInterfaceName;                              		// 0x00EC (0x0008) [0x0000000000000000]              
	int                                                DataCenterId;                                     		// 0x00F4 (0x0004) [0x0000000000000000]              
	struct FString                                     DataCenterFileName;                               		// 0x00F8 (0x0010) [0x0000000000000000]              
	float                                              LastPlaylistDownloadTime;                         		// 0x0108 (0x0004) [0x0000000000000000]              
	float                                              PlaylistRefreshInterval;                          		// 0x010C (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __OnReadPlaylistComplete__Delegate;               		// 0x0110 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0114 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnPlaylistPopulationDataUpdated__Delegate;      		// 0x0120 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0124 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1458 ];

		return pClassPointer;
	};

	void ParseDataCenterId ( );
	void OnReadDataCenterIdComplete ( );
	void ReadDataCenterId ( );
	void eventSendPlaylistPopulationUpdate ( );
	void GetPopulationInfoFromPlaylist ( );
	void ParsePlaylistPopulationData ( );
	void OnPlaylistPopulationDataUpdated ( );
	void OnReadPlaylistPopulationComplete ( );
	void ReadPlaylistPopulation ( );
	void Reset ( );
	void GetContentIdsFromPlaylist ( );
	void GetInventorySwapFromPlaylist ( );
	void GetMapCycleFromPlaylist ( );
	void GetUrlFromPlaylist ( );
	void GetMatchType ( );
	void IsPlaylistArbitrated ( );
	void GetLoadBalanceIdFromPlaylist ( );
	void GetTeamInfoFromPlaylist ( );
	void PlaylistSupportsDedicatedServers ( );
	void HasAnyGameSettings ( );
	void GetGameSettings ( );
	void FinalizePlaylistObjects ( );
	void OnReadTitleFileComplete ( );
	void ShouldRefreshPlaylists ( );
	void DetermineFilesToDownload ( );
	void DownloadPlaylist ( );
	void OnReadPlaylistComplete ( );
};

UClass* UOnlinePlaylistManager::pClassPointer = NULL;

// Class IpDrv.PartyBeacon
// 0x0038 (0x0098 - 0x0060)
class UPartyBeacon : public UObject
{
public:
	struct FPointer                                    VfTable_FTickableObject;                          		// 0x0060 (0x0008) [0x0000000000000000]              
	int                                                PartyBeaconPort;                                  		// 0x0068 (0x0004) [0x0000000000000000]              
	struct FPointer                                    Socket;                                           		// 0x006C (0x0008) [0x0000000000000000]              
	unsigned long                                      bIsInTick : 1;                                    		// 0x0074 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bWantsDeferredDestroy : 1;                        		// 0x0074 (0x0004) [0x0000000000000000] [0x00000002] 
	unsigned long                                      bShouldTick : 1;                                  		// 0x0074 (0x0004) [0x0000000000000000] [0x00000004] 
	float                                              HeartbeatTimeout;                                 		// 0x0078 (0x0004) [0x0000000000000000]              
	float                                              ElapsedHeartbeatTime;                             		// 0x007C (0x0004) [0x0000000000000000]              
	struct FName                                       BeaconName;                                       		// 0x0080 (0x0008) [0x0000000000000000]              
	struct FScriptDelegate                             __OnDestroyComplete__Delegate;                    		// 0x0088 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x008C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1459 ];

		return pClassPointer;
	};

	void OnDestroyComplete ( );
	void eventDestroyBeacon ( );
};

UClass* UPartyBeacon::pClassPointer = NULL;

// Class IpDrv.PartyBeaconClient
// 0x00A8 (0x0140 - 0x0098)
class UPartyBeaconClient : public UPartyBeacon
{
public:
	struct FOnlineGameSearchResult                     HostPendingRequest;                               		// 0x0098 (0x0010) [0x0000000000000000]              
	struct FPartyReservation                           PendingRequest;                                   		// 0x00A8 (0x001C) [0x0000000000000000]              
	unsigned char                                      ClientBeaconState;                                		// 0x00C4 (0x0001) [0x0000000000000000]              
	unsigned char                                      ClientBeaconRequestType;                          		// 0x00C5 (0x0001) [0x0000000000000000]              
	float                                              ReservationRequestTimeout;                        		// 0x00C8 (0x0004) [0x0000000000000000]              
	float                                              ReservationRequestElapsedTime;                    		// 0x00CC (0x0004) [0x0000000000000000]              
	struct FString                                     ResolverClassName;                                		// 0x00D0 (0x0010) [0x0000000000000000]              
	class UClass*                                      ResolverClass;                                    		// 0x00E0 (0x0008) [0x0000000000000000]              
	class UClientBeaconAddressResolver*                Resolver;                                         		// 0x00E8 (0x0008) [0x0000000000000000]              
	struct FScriptDelegate                             __OnReservationRequestComplete__Delegate;         		// 0x00F0 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00F4 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReservationCountUpdated__Delegate;            		// 0x0100 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x0104 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnTravelRequestReceived__Delegate;              		// 0x0110 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0114 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnHostIsReady__Delegate;                        		// 0x0120 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x0124 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnHostHasCancelled__Delegate;                   		// 0x0130 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x0134 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1460 ];

		return pClassPointer;
	};

	void eventDestroyBeacon ( );
	void CancelReservation ( );
	void RequestReservationUpdate ( );
	void RequestReservation ( );
	void OnHostHasCancelled ( );
	void OnHostIsReady ( );
	void OnTravelRequestReceived ( );
	void OnReservationCountUpdated ( );
	void OnReservationRequestComplete ( );
};

UClass* UPartyBeaconClient::pClassPointer = NULL;

// Class IpDrv.PartyBeaconHost
// 0x007C (0x0114 - 0x0098)
class UPartyBeaconHost : public UPartyBeacon
{
public:
	TArray< struct FClientBeaconConnection >           Clients;                                          		// 0x0098 (0x0010) [0x0000000000000000]              
	int                                                NumTeams;                                         		// 0x00A8 (0x0004) [0x0000000000000000]              
	int                                                NumPlayersPerTeam;                                		// 0x00AC (0x0004) [0x0000000000000000]              
	int                                                NumReservations;                                  		// 0x00B0 (0x0004) [0x0000000000000000]              
	int                                                NumConsumedReservations;                          		// 0x00B4 (0x0004) [0x0000000000000000]              
	TArray< struct FPartyReservation >                 Reservations;                                     		// 0x00B8 (0x0010) [0x0000000000000000]              
	struct FName                                       OnlineSessionName;                                		// 0x00C8 (0x0008) [0x0000000000000000]              
	int                                                ConnectionBacklog;                                		// 0x00D0 (0x0004) [0x0000000000000000]              
	int                                                ForceTeamNum;                                     		// 0x00D4 (0x0004) [0x0000000000000000]              
	int                                                ReservedHostTeamNum;                              		// 0x00D8 (0x0004) [0x0000000000000000]              
	unsigned long                                      bBestFitTeamAssignment : 1;                       		// 0x00DC (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      BeaconState;                                      		// 0x00E0 (0x0001) [0x0000000000000000]              
	struct FScriptDelegate                             __OnReservationChange__Delegate;                  		// 0x00E4 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x00E8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnReservationsFull__Delegate;                   		// 0x00F4 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00F8 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnClientCancellationReceived__Delegate;         		// 0x0104 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x0108 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1461 ];

		return pClassPointer;
	};

	void GetMaxAvailableTeamSize ( );
	void GetPartyLeaders ( );
	void GetPlayers ( );
	void AppendReservationSkillsToSearch ( );
	void eventUnregisterParty ( );
	void eventUnregisterPartyMembers ( );
	void eventRegisterPartyMembers ( );
	void AreReservationsFull ( );
	void TellClientsHostHasCancelled ( );
	void TellClientsHostIsReady ( );
	void TellClientsToTravel ( );
	void eventDestroyBeacon ( );
	void OnClientCancellationReceived ( );
	void OnReservationsFull ( );
	void OnReservationChange ( );
	void HandlePlayerLogout ( );
	void GetExistingReservation ( );
	void UpdatePartyReservationEntry ( );
	void AddPartyReservationEntry ( );
	void InitHostBeacon ( );
	void PauseReservationRequests ( );
};

UClass* UPartyBeaconHost::pClassPointer = NULL;

// Class IpDrv.TcpipConnection
// 0x0024 (0xB0D0 - 0xB0AC)
class UTcpipConnection : public UNetConnection
{
public:
	unsigned char                                      UnknownData00[ 0x24 ];                            		// 0xB0AC (0x0024) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1462 ];

		return pClassPointer;
	};

};

UClass* UTcpipConnection::pClassPointer = NULL;

// Class IpDrv.TcpNetDriver
// 0x0030 (0x0210 - 0x01E0)
class UTcpNetDriver : public UNetDriver
{
public:
	unsigned long                                      AllowPlayerPortUnreach : 1;                       		// 0x01E0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      LogPortUnreach : 1;                               		// 0x01E4 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned char                                      UnknownData00[ 0x28 ];                            		// 0x01E8 (0x0028) MISSED OFFSET

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1463 ];

		return pClassPointer;
	};

};

UClass* UTcpNetDriver::pClassPointer = NULL;

// Class IpDrv.WebRequest
// 0x00E8 (0x0148 - 0x0060)
class UWebRequest : public UObject
{
public:
	struct FString                                     RemoteAddr;                                       		// 0x0060 (0x0010) [0x0000000000000000]              
	struct FString                                     URI;                                              		// 0x0070 (0x0010) [0x0000000000000000]              
	struct FString                                     UserName;                                         		// 0x0080 (0x0010) [0x0000000000000000]              
	struct FString                                     Password;                                         		// 0x0090 (0x0010) [0x0000000000000000]              
	int                                                ContentLength;                                    		// 0x00A0 (0x0004) [0x0000000000000000]              
	struct FString                                     ContentType;                                      		// 0x00A4 (0x0010) [0x0000000000000000]              
	unsigned char                                      RequestType;                                      		// 0x00B4 (0x0001) [0x0000000000000000]              
	struct FMap_Mirror                                 HeaderMap;                                        		// 0x00B8 (0x0048) [0x0000000000000000]              
	struct FMap_Mirror                                 VariableMap;                                      		// 0x0100 (0x0048) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1464 ];

		return pClassPointer;
	};

	void GetHexDigit ( );
	void DecodeFormData ( );
	void ProcessHeaderString ( );
	void Dump ( );
	void GetVariables ( );
	void GetVariableNumber ( );
	void GetVariableCount ( );
	void GetVariable ( );
	void AddVariable ( );
	void GetHeaders ( );
	void GetHeader ( );
	void AddHeader ( );
	void EncodeBase64 ( );
	void DecodeBase64 ( );
};

UClass* UWebRequest::pClassPointer = NULL;

// Class IpDrv.WebResponse
// 0x0084 (0x00E4 - 0x0060)
class UWebResponse : public UObject
{
public:
	TArray< struct FString >                           Headers;                                          		// 0x0060 (0x0010) [0x0000000000000000]              
	struct FMap_Mirror                                 ReplacementMap;                                   		// 0x0070 (0x0048) [0x0000000000000000]              
	struct FString                                     IncludePath;                                      		// 0x00B8 (0x0010) [0x0000000000000000]              
	struct FString                                     CharSet;                                          		// 0x00C8 (0x0010) [0x0000000000000000]              
	class AWebConnection*                              Connection;                                       		// 0x00D8 (0x0008) [0x0000000000000000]              
	unsigned long                                      bSentText : 1;                                    		// 0x00E0 (0x0004) [0x0000000000000000] [0x00000001] 
	unsigned long                                      bSentResponse : 1;                                		// 0x00E0 (0x0004) [0x0000000000000000] [0x00000002] 

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1465 ];

		return pClassPointer;
	};

	void SentResponse ( );
	void SentText ( );
	void Redirect ( );
	void SendStandardHeaders ( );
	void HTTPError ( );
	void SendHeaders ( );
	void AddHeader ( );
	void HTTPHeader ( );
	void HttpResponse ( );
	void FailAuthentication ( );
	void SendCachedFile ( );
	void eventSendBinary ( );
	void eventSendText ( );
	void Dump ( );
	void GetHTTPExpiration ( );
	void LoadParsedUHTM ( );
	void IncludeBinaryFile ( );
	void IncludeUHTM ( );
	void ClearSubst ( );
	void Subst ( );
	void FileExists ( );
};

UClass* UWebResponse::pClassPointer = NULL;

// Class IpDrv.OnlinePlaylistProvider
// 0x0028 (0x00BC - 0x0094)
class UOnlinePlaylistProvider : public UUIResourceDataProvider
{
public:
	int                                                PlaylistId;                                       		// 0x0094 (0x0004) [0x0000000000000000]              
	TArray< struct FName >                             PlaylistGameTypeNames;                            		// 0x0098 (0x0010) [0x0000000000000000]              
	struct FString                                     DisplayName;                                      		// 0x00A8 (0x0010) [0x0000000000000000]              
	int                                                Priority;                                         		// 0x00B8 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1466 ];

		return pClassPointer;
	};

};

UClass* UOnlinePlaylistProvider::pClassPointer = NULL;

// Class IpDrv.UIDataStore_OnlinePlaylists
// 0x0060 (0x00F8 - 0x0098)
class UUIDataStore_OnlinePlaylists : public UUIDataStore
{
public:
	struct FString                                     ProviderClassName;                                		// 0x0098 (0x0010) [0x0000000000000000]              
	class UClass*                                      ProviderClass;                                    		// 0x00A8 (0x0008) [0x0000000000000000]              
	TArray< class UUIResourceDataProvider* >           RankedDataProviders;                              		// 0x00B0 (0x0010) [0x0000000000000000]              
	TArray< class UUIResourceDataProvider* >           UnrankedDataProviders;                            		// 0x00C0 (0x0010) [0x0000000000000000]              
	TArray< class UUIResourceDataProvider* >           RecModeDataProviders;                             		// 0x00D0 (0x0010) [0x0000000000000000]              
	TArray< class UUIResourceDataProvider* >           PrivateDataProviders;                             		// 0x00E0 (0x0010) [0x0000000000000000]              
	class UOnlinePlaylistManager*                      PlaylistMan;                                      		// 0x00F0 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 1467 ];

		return pClassPointer;
	};

	void eventGetMatchTypeForPlaylistId ( );
	void GetOnlinePlaylistProvider ( );
	void GetPlaylistProvider ( );
	void GetResourceProviders ( );
	void eventInit ( );
};

UClass* UUIDataStore_OnlinePlaylists::pClassPointer = NULL;

// Class IpDrv.WebApplication
// 0x0020 (0x0080 - 0x0060)
class UWebApplication : public UObject
{
public:
	class AWorldInfo*                                  WorldInfo;                                        		// 0x0060 (0x0008) [0x0000000000000000]              
	class AWebServer*                                  WebServer;                                        		// 0x0068 (0x0008) [0x0000000000000000]              
	struct FString                                     Path;                                             		// 0x0070 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 33510 ];

		return pClassPointer;
	};

	void PostQuery ( );
	void Query ( );
	void PreQuery ( );
	void CleanupApp ( );
	void Cleanup ( );
	void Init ( );
};

UClass* UWebApplication::pClassPointer = NULL;

// Class IpDrv.WebServer
// 0x01CC (0x0468 - 0x029C)
class AWebServer : public ATcpLink
{
public:
	struct FString                                     ServerName;                                       		// 0x029C (0x0010) [0x0000000000000000]              
	struct FString                                     Applications[ 0xA ];                              		// 0x02AC (0x00A0) [0x0000000000000000]              
	struct FString                                     ApplicationPaths[ 0xA ];                          		// 0x034C (0x00A0) [0x0000000000000000]              
	unsigned long                                      bEnabled : 1;                                     		// 0x03EC (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                ListenPort;                                       		// 0x03F0 (0x0004) [0x0000000000000000]              
	int                                                MaxConnections;                                   		// 0x03F4 (0x0004) [0x0000000000000000]              
	int                                                DefaultApplication;                               		// 0x03F8 (0x0004) [0x0000000000000000]              
	int                                                ExpirationSeconds;                                		// 0x03FC (0x0004) [0x0000000000000000]              
	struct FString                                     ServerURL;                                        		// 0x0400 (0x0010) [0x0000000000000000]              
	class UWebApplication*                             ApplicationObjects[ 0xA ];                        		// 0x0410 (0x0050) [0x0000000000000000]              
	int                                                ConnectionCount;                                  		// 0x0460 (0x0004) [0x0000000000000000]              
	int                                                ConnID;                                           		// 0x0464 (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 33513 ];

		return pClassPointer;
	};

	void GetApplication ( );
	void eventLostChild ( );
	void eventGainedChild ( );
	void eventDestroyed ( );
	void PostBeginPlay ( );
};

UClass* AWebServer::pClassPointer = NULL;

// Class IpDrv.HelloWeb
// 0x0000 (0x0080 - 0x0080)
class UHelloWeb : public UWebApplication
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 33529 ];

		return pClassPointer;
	};

	void eventQuery ( );
	void Init ( );
};

UClass* UHelloWeb::pClassPointer = NULL;

// Class IpDrv.ImageServer
// 0x0000 (0x0080 - 0x0080)
class UImageServer : public UWebApplication
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 33548 ];

		return pClassPointer;
	};

	void eventQuery ( );
};

UClass* UImageServer::pClassPointer = NULL;

// Class IpDrv.McpServiceConfig
// 0x0050 (0x00B0 - 0x0060)
class UMcpServiceConfig : public UObject
{
public:
	struct FString                                     Protocol;                                         		// 0x0060 (0x0010) [0x0000000000000000]              
	struct FString                                     Domain;                                           		// 0x0070 (0x0010) [0x0000000000000000]              
	struct FString                                     TitleId;                                          		// 0x0080 (0x0010) [0x0000000000000000]              
	struct FString                                     AppKey;                                           		// 0x0090 (0x0010) [0x0000000000000000]              
	struct FString                                     AppSecret;                                        		// 0x00A0 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 33599 ];

		return pClassPointer;
	};

};

UClass* UMcpServiceConfig::pClassPointer = NULL;

// Class IpDrv.McpClashMobBase
// 0x0070 (0x00E8 - 0x0078)
class UMcpClashMobBase : public UMcpServiceBase
{
public:
	struct FString                                     McpClashMobClassName;                             		// 0x0078 (0x0010) [0x0000000000000000]              
	struct FScriptDelegate                             __OnQueryChallengeListComplete__Delegate;         		// 0x0088 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x008C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnDownloadChallengeFileComplete__Delegate;      		// 0x0098 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x009C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnAcceptChallengeComplete__Delegate;            		// 0x00A8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00AC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnQueryChallengeUserStatusComplete__Delegate;   		// 0x00B8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x00BC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnUpdateChallengeUserProgressComplete__Delegate;		// 0x00C8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x00CC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnUpdateChallengeUserRewardComplete__Delegate;  		// 0x00D8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x00DC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 33613 ];

		return pClassPointer;
	};

	void UpdateChallengeUserReward ( );
	void OnUpdateChallengeUserRewardComplete ( );
	void UpdateChallengeUserProgress ( );
	void OnUpdateChallengeUserProgressComplete ( );
	void GetChallengeUserStatus ( );
	void QueryChallengeMultiUserStatus ( );
	void QueryChallengeUserStatus ( );
	void OnQueryChallengeUserStatusComplete ( );
	void AcceptChallenge ( );
	void OnAcceptChallengeComplete ( );
	void DeleteCachedChallengeFile ( );
	void ClearCachedChallengeFile ( );
	void GetChallengeFileContents ( );
	void DownloadChallengeFile ( );
	void GetChallengeFileList ( );
	void OnDownloadChallengeFileComplete ( );
	void GetChallengeList ( );
	void QueryChallengeList ( );
	void OnQueryChallengeListComplete ( );
	void CreateInstance ( );
};

UClass* UMcpClashMobBase::pClassPointer = NULL;

// Class IpDrv.McpClashMobFileDownload
// 0x0000 (0x0114 - 0x0114)
class UMcpClashMobFileDownload : public UOnlineTitleFileDownloadWeb
{
public:

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 33889 ];

		return pClassPointer;
	};

	void GetUrlForFile ( );
};

UClass* UMcpClashMobFileDownload::pClassPointer = NULL;

// Class IpDrv.McpClashMobManager
// 0x013C (0x0224 - 0x00E8)
class UMcpClashMobManager : public UMcpClashMobBase
{
public:
	struct FString                                     ChallengeListUrl;                                 		// 0x00E8 (0x0010) [0x0000000000000000]              
	struct FString                                     ChallengeStatusUrl;                               		// 0x00F8 (0x0010) [0x0000000000000000]              
	struct FString                                     ChallengeMultiStatusUrl;                          		// 0x0108 (0x0010) [0x0000000000000000]              
	struct FString                                     AcceptChallengeUrl;                               		// 0x0118 (0x0010) [0x0000000000000000]              
	struct FString                                     UpdateChallengeProgressUrl;                       		// 0x0128 (0x0010) [0x0000000000000000]              
	struct FString                                     UpdateRewardProgressUrl;                          		// 0x0138 (0x0010) [0x0000000000000000]              
	class UHttpRequestInterface*                       HTTPRequestChallengeList;                         		// 0x0148 (0x0008) [0x0000000000000000]              
	TArray< struct FMcpChallengeUserRequest >          ChallengeUserRequests;                            		// 0x0150 (0x0010) [0x0000000000000000]              
	TArray< struct FMcpClashMobChallengeEvent >        ChallengeEvents;                                  		// 0x0160 (0x0010) [0x0000000000000000]              
	TArray< struct FMcpClashMobChallengeUserStatus >   ChallengeUserStatus;                              		// 0x0170 (0x0010) [0x0000000000000000]              
	struct FMcpClashMobChallengeUserStatus             TempChallengeUserStatus;                          		// 0x0180 (0x007C) [0x0000000000000000]              
	TArray< struct FMcpClashMobChallengeUserStatus >   TempChallengeUserStatusArray;                     		// 0x01FC (0x0010) [0x0000000000000000]              
	class UOnlineTitleFileCacheInterface*              FileCache;                                        		// 0x020C (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x8 ];                             		// 0x0214 (0x0008) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	class UMcpClashMobFileDownload*                    FileDownloader;                                   		// 0x021C (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 33895 ];

		return pClassPointer;
	};

	void OnUpdateChallengeUserRewardHTTPRequestComplete ( );
	void UpdateChallengeUserReward ( );
	void OnUpdateChallengeUserProgressHTTPRequestComplete ( );
	void UpdateChallengeUserProgress ( );
	void GetChallengeUserStatus ( );
	void OnQueryChallengeMultiStatusHTTPRequestComplete ( );
	void QueryChallengeMultiUserStatus ( );
	void OnQueryChallengeStatusHTTPRequestComplete ( );
	void QueryChallengeUserStatus ( );
	void OnAcceptChallengeHTTPRequestComplete ( );
	void AcceptChallenge ( );
	void DeleteCachedChallengeFile ( );
	void ClearCachedChallengeFile ( );
	void GetChallengeFileContents ( );
	void OnDownloadMcpFileComplete ( );
	void OnLoadCachedFileComplete ( );
	void DownloadChallengeFile ( );
	void GetChallengeFileList ( );
	void GetChallengeList ( );
	void OnQueryChallengeListHTTPRequestComplete ( );
	void QueryChallengeList ( );
	void Init ( );
};

UClass* UMcpClashMobManager::pClassPointer = NULL;

// Class IpDrv.McpGroupsBase
// 0x00B0 (0x0128 - 0x0078)
class UMcpGroupsBase : public UMcpServiceBase
{
public:
	struct FString                                     McpGroupsManagerClassName;                        		// 0x0078 (0x0010) [0x0000000000000000]              
	TArray< struct FMcpGroupList >                     GroupLists;                                       		// 0x0088 (0x0010) [0x0000000000000000]              
	struct FScriptDelegate                             __OnCreateGroupComplete__Delegate;                		// 0x0098 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x009C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnDeleteGroupComplete__Delegate;                		// 0x00A8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x00AC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnQueryGroupsComplete__Delegate;                		// 0x00B8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00BC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnQueryGroupMembersComplete__Delegate;          		// 0x00C8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x00CC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnAddGroupMembersComplete__Delegate;            		// 0x00D8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData04[ 0x4 ];                             		// 0x00DC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnRemoveGroupMembersComplete__Delegate;         		// 0x00E8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData05[ 0x4 ];                             		// 0x00EC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnDeleteAllGroupsComplete__Delegate;            		// 0x00F8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData06[ 0x4 ];                             		// 0x00FC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnQueryGroupInvitesComplete__Delegate;          		// 0x0108 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData07[ 0x4 ];                             		// 0x010C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnAcceptGroupInviteComplete__Delegate;          		// 0x0118 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData08[ 0x4 ];                             		// 0x011C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 34104 ];

		return pClassPointer;
	};

	void OnAcceptGroupInviteComplete ( );
	void AcceptGroupInvite ( );
	void GetGroupInviteList ( );
	void OnQueryGroupInvitesComplete ( );
	void QueryGroupInvites ( );
	void OnDeleteAllGroupsComplete ( );
	void DeleteAllGroups ( );
	void OnRemoveGroupMembersComplete ( );
	void RemoveGroupMembers ( );
	void OnAddGroupMembersComplete ( );
	void AddGroupMembers ( );
	void GetGroupMembers ( );
	void OnQueryGroupMembersComplete ( );
	void QueryGroupMembers ( );
	void GetGroupList ( );
	void OnQueryGroupsComplete ( );
	void QueryGroups ( );
	void OnDeleteGroupComplete ( );
	void DeleteGroup ( );
	void OnCreateGroupComplete ( );
	void CreateGroup ( );
	void CreateInstance ( );
};

UClass* UMcpGroupsBase::pClassPointer = NULL;

// Class IpDrv.McpGroupsManager
// 0x00D0 (0x01F8 - 0x0128)
class UMcpGroupsManager : public UMcpGroupsBase
{
public:
	struct FString                                     CreateGroupUrl;                                   		// 0x0128 (0x0010) [0x0000000000000000]              
	struct FString                                     DeleteGroupUrl;                                   		// 0x0138 (0x0010) [0x0000000000000000]              
	struct FString                                     QueryGroupsUrl;                                   		// 0x0148 (0x0010) [0x0000000000000000]              
	struct FString                                     QueryGroupMembersUrl;                             		// 0x0158 (0x0010) [0x0000000000000000]              
	struct FString                                     AddGroupMembersUrl;                               		// 0x0168 (0x0010) [0x0000000000000000]              
	struct FString                                     RemoveGroupMembersUrl;                            		// 0x0178 (0x0010) [0x0000000000000000]              
	struct FString                                     DeleteAllGroupsUrl;                               		// 0x0188 (0x0010) [0x0000000000000000]              
	struct FString                                     AcceptGroupInviteUrl;                             		// 0x0198 (0x0010) [0x0000000000000000]              
	struct FString                                     RejectGroupInviteUrl;                             		// 0x01A8 (0x0010) [0x0000000000000000]              
	struct FScriptDelegate                             __OnQueryGroupsRequestComplete__Delegate;         		// 0x01B8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x01BC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnQueryGroupMembersRequestComplete__Delegate;   		// 0x01C8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x01CC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnAddGroupMembersRequestComplete__Delegate;     		// 0x01D8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x01DC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnAcceptGroupInviteRequestComplete__Delegate;   		// 0x01E8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData03[ 0x4 ];                             		// 0x01EC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 34213 ];

		return pClassPointer;
	};

	void CacheGroupMember ( );
	void CacheGroup ( );
	void OnAcceptGroupInviteRequestComplete ( );
	void AcceptGroupInvite ( );
	void OnDeleteAllGroupsRequestComplete ( );
	void DeleteAllGroups ( );
	void OnRemoveGroupMembersRequestComplete ( );
	void RemoveGroupMembers ( );
	void OnAddGroupMembersRequestComplete ( );
	void AddGroupMembers ( );
	void GetGroupMembers ( );
	void OnQueryGroupMembersRequestComplete ( );
	void QueryGroupMembers ( );
	void GetGroupList ( );
	void OnQueryGroupsRequestComplete ( );
	void QueryGroups ( );
	void OnDeleteGroupRequestComplete ( );
	void DeleteGroup ( );
	void OnCreateGroupRequestComplete ( );
	void CreateGroup ( );
};

UClass* UMcpGroupsManager::pClassPointer = NULL;

// Class IpDrv.McpIdMappingBase
// 0x0030 (0x00A8 - 0x0078)
class UMcpIdMappingBase : public UMcpServiceBase
{
public:
	struct FString                                     McpIdMappingClassName;                            		// 0x0078 (0x0010) [0x0000000000000000]              
	struct FScriptDelegate                             __OnAddMappingComplete__Delegate;                 		// 0x0088 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x008C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnQueryMappingsComplete__Delegate;              		// 0x0098 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x009C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 34373 ];

		return pClassPointer;
	};

	void GetIdMappings ( );
	void OnQueryMappingsComplete ( );
	void QueryMappings ( );
	void OnAddMappingComplete ( );
	void AddMapping ( );
	void CreateInstance ( );
};

UClass* UMcpIdMappingBase::pClassPointer = NULL;

// Class IpDrv.McpIdMappingManager
// 0x0050 (0x00F8 - 0x00A8)
class UMcpIdMappingManager : public UMcpIdMappingBase
{
public:
	TArray< struct FMcpIdMapping >                     AccountMappings;                                  		// 0x00A8 (0x0010) [0x0000000000000000]              
	struct FString                                     AddMappingUrl;                                    		// 0x00B8 (0x0010) [0x0000000000000000]              
	struct FString                                     QueryMappingUrl;                                  		// 0x00C8 (0x0010) [0x0000000000000000]              
	TArray< struct FAddMappingRequest >                AddMappingRequests;                               		// 0x00D8 (0x0010) [0x0000000000000000]              
	TArray< struct FQueryMappingRequest >              QueryMappingRequests;                             		// 0x00E8 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 34408 ];

		return pClassPointer;
	};

	void GetIdMappings ( );
	void OnQueryMappingsRequestComplete ( );
	void QueryMappings ( );
	void OnAddMappingRequestComplete ( );
	void AddMapping ( );
};

UClass* UMcpIdMappingManager::pClassPointer = NULL;

// Class IpDrv.McpServerTimeBase
// 0x0020 (0x0098 - 0x0078)
class UMcpServerTimeBase : public UMcpServiceBase
{
public:
	struct FString                                     McpServerTimeClassName;                           		// 0x0078 (0x0010) [0x0000000000000000]              
	struct FScriptDelegate                             __OnQueryServerTimeComplete__Delegate;            		// 0x0088 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x008C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 34690 ];

		return pClassPointer;
	};

	void GetLastServerTime ( );
	void OnQueryServerTimeComplete ( );
	void QueryServerTime ( );
	void CreateInstance ( );
};

UClass* UMcpServerTimeBase::pClassPointer = NULL;

// Class IpDrv.McpServerTimeManager
// 0x0028 (0x00C0 - 0x0098)
class UMcpServerTimeManager : public UMcpServerTimeBase
{
public:
	struct FString                                     TimeStampUrl;                                     		// 0x0098 (0x0010) [0x0000000000000000]              
	struct FString                                     LastTimeStamp;                                    		// 0x00A8 (0x0010) [0x0000000000000000]              
	class UHttpRequestInterface*                       HTTPRequestServerTime;                            		// 0x00B8 (0x0008) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 34705 ];

		return pClassPointer;
	};

	void GetLastServerTime ( );
	void OnQueryServerTimeHTTPRequestComplete ( );
	void QueryServerTime ( );
};

UClass* UMcpServerTimeManager::pClassPointer = NULL;

// Class IpDrv.McpUserManagerBase
// 0x0040 (0x00B8 - 0x0078)
class UMcpUserManagerBase : public UMcpServiceBase
{
public:
	struct FString                                     McpUserManagerClassName;                          		// 0x0078 (0x0010) [0x0000000000000000]              
	struct FScriptDelegate                             __OnRegisterUserComplete__Delegate;               		// 0x0088 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x008C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnQueryUsersComplete__Delegate;                 		// 0x0098 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData01[ 0x4 ];                             		// 0x009C (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	struct FScriptDelegate                             __OnDeleteUserComplete__Delegate;                 		// 0x00A8 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData02[ 0x4 ];                             		// 0x00AC (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 34918 ];

		return pClassPointer;
	};

	void OnDeleteUserComplete ( );
	void DeleteUser ( );
	void GetUsers ( );
	void OnQueryUsersComplete ( );
	void QueryUsers ( );
	void QueryUser ( );
	void OnRegisterUserComplete ( );
	void RegisterUserFacebook ( );
	void RegisterUserEmail ( );
	void RegisterUserGenerated ( );
	void CreateInstance ( );
};

UClass* UMcpUserManagerBase::pClassPointer = NULL;

// Class IpDrv.McpUserManager
// 0x00A0 (0x0158 - 0x00B8)
class UMcpUserManager : public UMcpUserManagerBase
{
public:
	TArray< struct FMcpUserStatus >                    UserStatuses;                                     		// 0x00B8 (0x0010) [0x0000000000000000]              
	struct FString                                     RegisterUserMcpUrl;                               		// 0x00C8 (0x0010) [0x0000000000000000]              
	struct FString                                     RegisterUserEmailUrl;                             		// 0x00D8 (0x0010) [0x0000000000000000]              
	struct FString                                     RegisterUserFacebookUrl;                          		// 0x00E8 (0x0010) [0x0000000000000000]              
	struct FString                                     QueryUserUrl;                                     		// 0x00F8 (0x0010) [0x0000000000000000]              
	struct FString                                     QueryUsersUrl;                                    		// 0x0108 (0x0010) [0x0000000000000000]              
	struct FString                                     DeleteUserUrl;                                    		// 0x0118 (0x0010) [0x0000000000000000]              
	TArray< struct FRegisterUserRequest >              RegisterUserRequests;                             		// 0x0128 (0x0010) [0x0000000000000000]              
	TArray< class UHttpRequestInterface* >             QueryUsersRequests;                               		// 0x0138 (0x0010) [0x0000000000000000]              
	TArray< class UHttpRequestInterface* >             DeleteUserRequests;                               		// 0x0148 (0x0010) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 34970 ];

		return pClassPointer;
	};

	void OnDeleteUserRequestComplete ( );
	void DeleteUser ( );
	void GetUsers ( );
	void OnQueryUsersRequestComplete ( );
	void QueryUsers ( );
	void OnQueryUserRequestComplete ( );
	void QueryUser ( );
	void OnRegisterUserFacebookRequestComplete ( );
	void RegisterUserFacebook ( );
	void OnRegisterUserEmailRequestComplete ( );
	void RegisterUserEmail ( );
	void OnRegisterUserRequestComplete ( );
	void RegisterUserGenerated ( );
};

UClass* UMcpUserManager::pClassPointer = NULL;

// Class IpDrv.OnlineImageDownloaderWeb
// 0x0024 (0x0084 - 0x0060)
class UOnlineImageDownloaderWeb : public UObject
{
public:
	TArray< struct FOnlineImageDownload >              DownloadImages;                                   		// 0x0060 (0x0010) [0x0000000000000000]              
	int                                                MaxSimultaneousDownloads;                         		// 0x0070 (0x0004) [0x0000000000000000]              
	struct FScriptDelegate                             __OnOnlineImageDownloaded__Delegate;              		// 0x0074 (0x0010) [0x0000000000000000]              
	unsigned char                                      UnknownData00[ 0x4 ];                             		// 0x0078 (0x0004) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 35808 ];

		return pClassPointer;
	};

	void DebugDraw ( );
	void OnDownloadComplete ( );
	void DownloadNextImage ( );
	void ClearAllDownloads ( );
	void ClearDownloads ( );
	void GetNumPendingDownloads ( );
	void RequestOnlineImages ( );
	void GetOnlineImageTexture ( );
	void OnOnlineImageDownloaded ( );
};

UClass* UOnlineImageDownloaderWeb::pClassPointer = NULL;

// Class IpDrv.WebConnection
// 0x0044 (0x02E0 - 0x029C)
class AWebConnection : public ATcpLink
{
public:
	class AWebServer*                                  WebServer;                                        		// 0x029C (0x0008) [0x0000000000000000]              
	struct FString                                     ReceivedData;                                     		// 0x02A4 (0x0010) [0x0000000000000000]              
	class UWebRequest*                                 Request;                                          		// 0x02B4 (0x0008) [0x0000000000000000]              
	class UWebResponse*                                Response;                                         		// 0x02BC (0x0008) [0x0000000000000000]              
	class UWebApplication*                             Application;                                      		// 0x02C4 (0x0008) [0x0000000000000000]              
	unsigned long                                      bDelayCleanup : 1;                                		// 0x02CC (0x0004) [0x0000000000000000] [0x00000001] 
	int                                                RawBytesExpecting;                                		// 0x02D0 (0x0004) [0x0000000000000000]              
	int                                                MaxValueLength;                                   		// 0x02D4 (0x0004) [0x0000000000000000]              
	int                                                MaxLineLength;                                    		// 0x02D8 (0x0004) [0x0000000000000000]              
	int                                                ConnID;                                           		// 0x02DC (0x0004) [0x0000000000000000]              

private:
	static UClass* pClassPointer;

public:
	static UClass* StaticClass()
	{
		if ( ! pClassPointer )
			pClassPointer = (UClass*) UObject::GObjObjects()->Data[ 36405 ];

		return pClassPointer;
	};

	void IsHanging ( );
	void Cleanup ( );
	void CheckRawBytes ( );
	void EndOfHeaders ( );
	void CreateResponseObject ( );
	void ProcessPost ( );
	void ProcessGet ( );
	void ProcessHead ( );
	void ReceivedLine ( );
	void eventReceivedText ( );
	void eventTimer ( );
	void eventClosed ( );
	void eventAccepted ( );
};

UClass* AWebConnection::pClassPointer = NULL;


#ifdef _MSC_VER
	#pragma pack ( pop )
#endif
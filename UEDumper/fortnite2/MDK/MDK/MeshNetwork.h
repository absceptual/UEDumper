
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OnlineSubsystemUtils
/// dependency: ReplicationGraph

/// Class /Script/MeshNetwork.MeshBeaconClient
/// Size: 0x0080 (0x000320 - 0x0003A0)
class AMeshBeaconClient : public AOnlineBeaconClient
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	DMember(bool)                                      bConnectedToRoot                                            OFFSET(get<bool>, {0x360, 1, 0, 0})
	SMember(FDateTime)                                 MeshPingTime                                                OFFSET(getStruct<T>, {0x368, 8, 0, 0})
	CMember(TArray<FString>)                           ParentIds                                                   OFFSET(get<T>, {0x370, 16, 0, 0})
	SMember(FString)                                   ClientId                                                    OFFSET(getStruct<T>, {0x380, 16, 0, 0})


	/// Functions
	// Function /Script/MeshNetwork.MeshBeaconClient.ServerUpdateMultipleLevelsVisibility
	// void ServerUpdateMultipleLevelsVisibility(TArray<FUpdateLevelVisibilityLevelInfo> LevelVisibilities);                    // [0x8700b7c] Final|Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/MeshNetwork.MeshBeaconClient.ServerUpdateLevelVisibility
	// void ServerUpdateLevelVisibility(FUpdateLevelVisibilityLevelInfo LevelVisibility);                                       // [0x8700ad0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/MeshNetwork.MeshBeaconClient.ServerSetClientId
	// void ServerSetClientId(FString NewClientId);                                                                             // [0x8700a18] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/MeshNetwork.MeshBeaconClient.OnRep_ParentIds
	// void OnRep_ParentIds();                                                                                                  // [0x8700a04] Final|Native|Protected 
	// Function /Script/MeshNetwork.MeshBeaconClient.OnRep_MeshPingTime
	// void OnRep_MeshPingTime();                                                                                               // [0x3e905b4] Native|Protected     
	// Function /Script/MeshNetwork.MeshBeaconClient.OnRep_ConnectedToRoot
	// void OnRep_ConnectedToRoot();                                                                                            // [0x87009f0] Final|Native|Protected 
};

/// Class /Script/MeshNetwork.MeshBeaconHost
/// Size: 0x0008 (0x0003D0 - 0x0003D8)
class AMeshBeaconHost : public AOnlineBeaconHost
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 984;

public:
	DMember(int32_t)                                   MaxConnections                                              OFFSET(get<int32_t>, {0x3D0, 4, 0, 0})
};

/// Class /Script/MeshNetwork.MeshBeaconHostObject
/// Size: 0x0018 (0x0002B8 - 0x0002D0)
class AMeshBeaconHostObject : public AOnlineBeaconHostObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
};

/// Class /Script/MeshNetwork.MeshConnection
/// Size: 0x0000 (0x001E90 - 0x001E90)
class UMeshConnection : public UIpConnection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7824;

public:
};

/// Class /Script/MeshNetwork.MeshNetDriver
/// Size: 0x0018 (0x0008F0 - 0x000908)
class UMeshNetDriver : public UIpNetDriver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2312;

public:
	CMember(TArray<class AActor*>)                     ClientDormantDynamicActors                                  OFFSET(get<T>, {0x8F8, 16, 0, 0})
};

/// Class /Script/MeshNetwork.MeshNetworkComponent
/// Size: 0x00B0 (0x0000A0 - 0x000150)
class UMeshNetworkComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(EMeshNetworkRelevancy)                     MeshRelevancy                                               OFFSET(get<T>, {0xA0, 1, 0, 0})
	CMember(TMap<FString, FAggregatedFunction>)        AggregatedFunctions                                         OFFSET(get<T>, {0xA8, 80, 0, 0})
	CMember(TMap<FName, FAggregatedFunctionConfig>)    AggregatedFunctionConfigs                                   OFFSET(get<T>, {0xF8, 80, 0, 0})


	/// Functions
	// Function /Script/MeshNetwork.MeshNetworkComponent.IsConnectedToMeshRoot
	// bool IsConnectedToMeshRoot();                                                                                            // [0x87009a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshNetwork.MeshNetworkComponent.GetMeshNetworkNodeType
	// EMeshNetworkNodeType GetMeshNetworkNodeType();                                                                           // [0x86ffbf4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/MeshNetwork.MeshNetworkSubsystem
/// Size: 0x00D8 (0x000030 - 0x000108)
class UMeshNetworkSubsystem : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FMulticastInlineDelegate)                  OnMeshNodeTypeChanged                                       OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnConnectedToRootChanged                                    OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnGameServerNodeTypeChanged                                 OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMeshMetaDataUpdated                                       OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMeshPlayerRequested                                       OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	CMember(EMeshNetworkNodeType)                      NodeType                                                    OFFSET(get<T>, {0xB0, 1, 0, 0})
	CMember(EMeshNetworkNodeType)                      GameServerNodeType                                          OFFSET(get<T>, {0xB1, 1, 0, 0})
	DMember(bool)                                      bConnectedToRoot                                            OFFSET(get<bool>, {0xB2, 1, 0, 0})
	DMember(bool)                                      bMetadataReceived                                           OFFSET(get<bool>, {0xB3, 1, 0, 0})


	/// Functions
	// Function /Script/MeshNetwork.MeshNetworkSubsystem.SetMetaDataWithKey
	// void SetMetaDataWithKey(FName Key, FMeshMetaDataStruct& MetaData);                                                       // [0x8700c80] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshNetwork.MeshNetworkSubsystem.SetMetaData
	// void SetMetaData(FMeshMetaDataStruct& MetaData);                                                                         // [0x86ffc30] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshNetwork.MeshNetworkSubsystem.GetMetaDataWithKey
	// bool GetMetaDataWithKey(FName Key, FMeshMetaDataStruct& MetaData);                                                       // [0x86ffc94] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshNetwork.MeshNetworkSubsystem.GetMetadata
	// void GetMetadata(FMeshMetaDataStruct& MetaData);                                                                         // [0x86ffc30] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MeshNetwork.MeshNetworkSubsystem.GetMeshNetworkNodeType
	// EMeshNetworkNodeType GetMeshNetworkNodeType();                                                                           // [0x86ffc18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshNetwork.MeshNetworkSubsystem.GetGameServerNodeType
	// EMeshNetworkNodeType GetGameServerNodeType();                                                                            // [0x86ffbdc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshNetwork.MeshNetworkSubsystem.GetConnectedToRoot
	// bool GetConnectedToRoot();                                                                                               // [0x86ffbc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MeshNetwork.MeshNetworkSubsystem.EnableMeshReplication
	// void EnableMeshReplication(class AActor* Actor, class UClass* MeshComponentClass);                                       // [0x86ffaf8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MeshNetwork.MeshNetworkSubsystem.DisableMeshReplication
	// void DisableMeshReplication(class AActor* Actor);                                                                        // [0x86ffa88] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MeshNetwork.MeshReplicationGraphConnection
/// Size: 0x0000 (0x000378 - 0x000378)
class UMeshReplicationGraphConnection : public UNetReplicationGraphConnection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
};

/// Class /Script/MeshNetwork.MeshReplicationGraph
/// Size: 0x0008 (0x000568 - 0x000570)
class UMeshReplicationGraph : public UReplicationGraph
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
	CMember(class UReplicationGraphNode_ActorList*)    AlwaysRelevantNode                                          OFFSET(get<T>, {0x568, 8, 0, 0})
};

/// Struct /Script/MeshNetwork.AggregatedFunction
/// Size: 0x0028 (0x000000 - 0x000028)
class FAggregatedFunction : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UFunction*)                          Function                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/MeshNetwork.AggregatedFunctionConfig
/// Size: 0x0060 (0x000000 - 0x000060)
class FAggregatedFunctionConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(double)                                    AggregationTimeout                                          OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(bool)                                      bAggregationEnabled                                         OFFSET(get<bool>, {0x8, 1, 0, 0})
	CMember(TSet<FName>)                               NoAggregationParameters                                     OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/MeshNetwork.MeshMetaDataStruct
/// Size: 0x0001 (0x000000 - 0x000001)
class FMeshMetaDataStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Enum /Script/MeshNetwork.EMeshNetworkNodeType
/// Size: 0x05
enum class EMeshNetworkNodeType : uint8_t
{
	EMeshNetworkNodeType__Root                                                       = 0,
	EMeshNetworkNodeType__Inner                                                      = 1,
	EMeshNetworkNodeType__Edge                                                       = 2,
	EMeshNetworkNodeType__Client                                                     = 3,
	EMeshNetworkNodeType__Unknown                                                    = 4
};

/// Enum /Script/MeshNetwork.EMeshNetworkRelevancy
/// Size: 0x03
enum class EMeshNetworkRelevancy : uint8_t
{
	EMeshNetworkRelevancy__NotRelevant                                               = 0,
	EMeshNetworkRelevancy__RelevantToEdgeNodes                                       = 1,
	EMeshNetworkRelevancy__RelevantToClients                                         = 2
};

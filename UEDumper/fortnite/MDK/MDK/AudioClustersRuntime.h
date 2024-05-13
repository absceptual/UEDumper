
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

/// Class /Script/AudioClustersRuntime.AudioClusterConfig
/// Size: 0x0008 (0x000028 - 0x000030)
class UAudioClusterConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UAudioClusterBehavior*)              Behavior                                                    OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/AudioClustersRuntime.AudioClusterConfigMap
/// Size: 0x0050 (0x000028 - 0x000078)
class UAudioClusterConfigMap : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<FGameplayTag, UAudioClusterConfig*>)  TagConfigMap                                                OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/AudioClustersRuntime.AudioClusterBehavior
/// Size: 0x0008 (0x000028 - 0x000030)
class UAudioClusterBehavior : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/AudioClustersRuntime.AudioClusterBehavior.OnStop
	// void OnStop();                                                                                                           // [0x6890a44] Native|Event|Protected|BlueprintEvent 
	// Function /Script/AudioClustersRuntime.AudioClusterBehavior.OnStart
	// void OnStart();                                                                                                          // [0x1447bfc] Native|Event|Protected|BlueprintEvent 
	// Function /Script/AudioClustersRuntime.AudioClusterBehavior.OnSizeUpdated
	// void OnSizeUpdated(int32_t Size);                                                                                        // [0x2d2cc08] Native|Event|Protected|BlueprintEvent 
	// Function /Script/AudioClustersRuntime.AudioClusterBehavior.OnPositionUpdated
	// void OnPositionUpdated(FVector& Position);                                                                               // [0xbcc143c] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/AudioClustersRuntime.AudioClusterBehavior.OnActorRemoved
	// void OnActorRemoved(class AActor* Actor);                                                                                // [0x7636ccc] Native|Event|Protected|BlueprintEvent 
	// Function /Script/AudioClustersRuntime.AudioClusterBehavior.OnActorAdded
	// void OnActorAdded(class AActor* Actor);                                                                                  // [0x80c7c10] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/AudioClustersRuntime.AudioClustersSubsystem
/// Size: 0x0008 (0x000030 - 0x000038)
class UAudioClustersSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Script/AudioClustersRuntime.AudioClustersSubsystem.UpdateClusters
	// void UpdateClusters(float DeltaTimeSeconds);                                                                             // [0xbcc1a70] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioClustersRuntime.AudioClustersSubsystem.Unregister
	// bool Unregister(FAudioClusterActorInfo& ActorInfo);                                                                      // [0xbcc19d4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioClustersRuntime.AudioClustersSubsystem.SetParam
	// bool SetParam(FGameplayTag& tag, double Value);                                                                          // [0xbcc1878] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioClustersRuntime.AudioClustersSubsystem.SetListenerPosition
	// void SetListenerPosition(FVector& InListenerPosition);                                                                   // [0xbcc17b4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AudioClustersRuntime.AudioClustersSubsystem.RemoveConfigMap
	// bool RemoveConfigMap(class UAudioClusterConfigMap* Map);                                                                 // [0xbcc1658] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioClustersRuntime.AudioClustersSubsystem.RegisterOneShot
	// bool RegisterOneShot(FAudioClusterOneShotInfo& OneShotInfo);                                                             // [0xbcc15a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioClustersRuntime.AudioClustersSubsystem.Register
	// bool Register(FAudioClusterActorInfo& ActorInfo);                                                                        // [0xbcc1504] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AudioClustersRuntime.AudioClustersSubsystem.AddConfigMap
	// bool AddConfigMap(class UAudioClusterConfigMap* Map);                                                                    // [0xbcc13ac] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/AudioClustersRuntime.AudioClusterActorInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FAudioClusterActorInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Actor                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTag)                              tag                                                         OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/AudioClustersRuntime.AudioClusterOneShotInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FAudioClusterOneShotInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTag)                              tag                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FVector)                                   Position                                                    OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(float)                                     LifetimeSeconds                                             OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     TimeRemainingSeconds                                        OFFSET(get<float>, {0x24, 4, 0, 0})
};

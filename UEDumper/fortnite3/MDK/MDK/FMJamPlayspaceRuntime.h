
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FMCoreRuntime
/// dependency: FMJamCoreRuntime
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayEventRouter
/// dependency: GameplayTags
/// dependency: HarmonixDsp
/// dependency: HarmonixMidi
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem
/// dependency: SparksCharacterCommonRuntime
/// dependency: SparksCMS
/// dependency: SparksCosmeticsRuntime
/// dependency: SparksMidiParser
/// dependency: SparksMusicPlayspaceRuntime

/// Class /Script/FMJamPlayspaceRuntime.JamAnalytics
/// Size: 0x00A0 (0x0000A8 - 0x000148)
class UJamAnalytics : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FScalableFloat)                            MinLoopLength                                               OFFSET(getStruct<T>, {0xE8, 40, 0, 0})
	DMember(float)                                     LoopStartTime                                               OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(float)                                     LoopLength                                                  OFFSET(get<float>, {0x114, 4, 0, 0})
	SMember(FName)                                     LoopShortName                                               OFFSET(getStruct<T>, {0x118, 4, 0, 0})
	SMember(FString)                                   LoopType                                                    OFFSET(getStruct<T>, {0x120, 16, 0, 0})
	SMember(FString)                                   LoopID                                                      OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	CMember(class AJamPlayspace*)                      JamPlayspace                                                OFFSET(get<T>, {0x140, 8, 0, 0})
};

/// Class /Script/FMJamPlayspaceRuntime.JamMidiEventDriver
/// Size: 0x0020 (0x000028 - 0x000048)
class UJamMidiEventDriver : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UJamMusicSlot*>)            WeakOwningMusicSlotPtr                                      OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UParsedMidiEventData*)               ParsedMidiEventData                                         OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/FMJamPlayspaceRuntime.JamPlayspace
/// Size: 0x0068 (0x0007F0 - 0x000858)
class AJamPlayspace : public ASparksMusicPlayspace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2136;

public:
	CMember(class UJamPlayspaceComponent_MusicManager*) MusicManager                                               OFFSET(get<T>, {0x808, 8, 0, 0})
	CMember(class UJamPlayspaceComponent_LipSyncAssetManager*) JamLipSyncManager                                   OFFSET(get<T>, {0x828, 8, 0, 0})
	CMember(class UJamPlayspaceComponent_ReactiveFX*)  ReactiveFXComponent                                         OFFSET(get<T>, {0x830, 8, 0, 0})


	/// Functions
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.StopLoopForPlayer
	// void StopLoopForPlayer(class APlayerState* PlayerState, bool bStopAutoJammers);                                          // [0xb718fbc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.StopLoopByInstanceId
	// void StopLoopByInstanceId(int32_t LoopInstanceId);                                                                       // [0xb718f3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.StopAutoJammersForPlayer
	// void StopAutoJammersForPlayer(class APlayerState* PlayerState);                                                          // [0xb718ebc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.StopAllLoopsForLoopType
	// void StopAllLoopsForLoopType(EFMJamLoopType LoopType);                                                                   // [0xb718e3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.StopAllLoops
	// void StopAllLoops(bool bStopAutoJammers);                                                                                // [0xb718dbc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.PlayLoop
	// void PlayLoop(class APlayerState* PlayerState, FName SongShortName, EFMJamLoopType LoopType, bool bForceAudioState, bool bIsAutoJammer); // [0xb718788] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.IsJamFull
	// bool IsJamFull(bool bCountAutoJammers);                                                                                  // [0xb71661c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetMusicSlotsSortedByLoopType
	// TArray<UJamMusicSlot*> GetMusicSlotsSortedByLoopType();                                                                  // [0xb715d04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetMusicSlotsInUse
	// TArray<UJamMusicSlot*> GetMusicSlotsInUse();                                                                             // [0xb715c8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetMusicSlotsForLoopType
	// TArray<UJamMusicSlot*> GetMusicSlotsForLoopType(EFMJamLoopType LoopType);                                                // [0xb715afc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetMusicSlots
	// TArray<UJamMusicSlot*> GetMusicSlots();                                                                                  // [0xb715ac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetMusicSlotForPlayer
	// class UJamMusicSlot* GetMusicSlotForPlayer(class APlayerState* PlayerState);                                             // [0xb7157fc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetJammers
	// TArray<APlayerState*> GetJammers();                                                                                      // [0xb715644] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetJamAudioSource
	// class UAudioComponent* GetJamAudioSource();                                                                              // [0xb7155f8] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.GetAllowGlobalControlAccess
	// void GetAllowGlobalControlAccess(bool& OutAllowGlobalControlAccess, FGameplayTagContainer& OutRestrictionReason);        // [0xb715124] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.DoAnyOtherJammersHaveGameplayTag
	// bool DoAnyOtherJammersHaveGameplayTag(class APlayerState* LocalPlayerState, FGameplayTag GlobalControlsTag);             // [0xb714f1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.CountActiveLoops
	// int32_t CountActiveLoops(bool bCountAutoJammers);                                                                        // [0xb714dfc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.ConvertPlayerToAutoJammer
	// void ConvertPlayerToAutoJammer(class APlayerState* PlayerState);                                                         // [0xb714c94] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspace.BeginShutdownJam
	// void BeginShutdownJam();                                                                                                 // [0x1340978] Event|Public|BlueprintEvent 
};

/// Class /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_LipSyncAssetManager
/// Size: 0x0028 (0x0000C8 - 0x0000F0)
class UJamPlayspaceComponent_LipSyncAssetManager : public UPlayspaceComponent_LipSyncAssetManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/FMJamPlayspaceRuntime.JamMusicSlot
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class UJamMusicSlot : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FMulticastInlineDelegate)                  OnLoopStarted                                               OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLoopStopped                                               OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(class UMidiFile*)                          CurrentMidiFile                                             OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(class UFusionPatch*)                       CurrentFusionPatch                                          OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(class USparksJamEmoteItemDefinition*)      CurrentItemDef                                              OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class UJamMidiEventDriver*)                MidiEventDriver                                             OFFSET(get<T>, {0x60, 8, 0, 0})
	DMember(bool)                                      bAttemptingResolveAndLoad                                   OFFSET(get<bool>, {0x68, 1, 0, 0})
	SMember(FJamPlayParams)                            CurrentPlayParams                                           OFFSET(getStruct<T>, {0x90, 40, 0, 0})
	CMember(class UJamPlayspaceComponent_MusicManager*) JamMusicManager                                            OFFSET(get<T>, {0xB8, 8, 0, 0})
	DMember(int32_t)                                   NthSlot                                                     OFFSET(get<int32_t>, {0xC0, 4, 0, 0})


	/// Functions
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.OnTerminatingLinkCode
	// void OnTerminatingLinkCode(class UJamContentResolver* Sender, FString LinkCode);                                         // [0xb71807c] Final|Native|Protected 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.OnScanForSongsCompleted
	// void OnScanForSongsCompleted(class UFMJamSongCatalog* Sender, TArray<UFMJamSong*> AddedSongs);                           // [0xb717934] Final|Native|Protected 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.OnRep_CurrentPlayParams
	// void OnRep_CurrentPlayParams(FJamPlayParams& OldPlayParams);                                                             // [0xb7171a0] Final|Native|Public|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.OnJamResolverComplete
	// void OnJamResolverComplete(class UJamContentResolver* Sender, FString LinkCode, bool bSuccess, bool bWasAlreadyLoaded);  // [0xb71683c] Final|Native|Protected 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.OnJamLoadRequestComplete
	// void OnJamLoadRequestComplete(FJamLoadResult LoadResult);                                                                // [0xb716774] Final|Native|Protected 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.OnCMSCatalogRequestFinished
	// void OnCMSCatalogRequestFinished(class UFMJamSongCatalog* Sender, bool bSuccess);                                        // [0xb7166ac] Final|Native|Protected 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.IsInUse
	// bool IsInUse();                                                                                                          // [0xb7165f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetPlayParams
	// FJamPlayParams GetPlayParams();                                                                                          // [0xb715de0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetParamsAsJamEvent
	// FJamEvent_JamLoopStarted GetParamsAsJamEvent();                                                                          // [0xb715d5c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetMusicManager
	// class UJamPlayspaceComponent_MusicManager* GetMusicManager();                                                            // [0x84185d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetIsAutoJammer
	// bool GetIsAutoJammer();                                                                                                  // [0xb7155e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentTempo
	// int32_t GetCurrentTempo();                                                                                               // [0xb7154c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentSongShortName
	// FName GetCurrentSongShortName();                                                                                         // [0xa4a1060] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentSongLinkCode
	// FString GetCurrentSongLinkCode();                                                                                        // [0xb715488] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentSong
	// class UFMJamSong* GetCurrentSong();                                                                                      // [0xb715464] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentPlayerState
	// class APlayerState* GetCurrentPlayerState();                                                                             // [0xb715440] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentMode
	// EMusicKeyMode GetCurrentMode();                                                                                          // [0xb7153f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentLoopType
	// EFMJamLoopType GetCurrentLoopType();                                                                                     // [0xb715394] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentLoopInstanceId
	// int32_t GetCurrentLoopInstanceId();                                                                                      // [0x997f034] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentLoop
	// class UFMJamLoop* GetCurrentLoop();                                                                                      // [0xb715370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentKey
	// EMusicKey GetCurrentKey();                                                                                               // [0xb715328] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamMusicSlot.GetCurrentCatalogEntry
	// class UCatalogData* GetCurrentCatalogEntry();                                                                            // [0xb715304] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager
/// Size: 0x00D0 (0x0000A0 - 0x000170)
class UJamPlayspaceComponent_MusicManager : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FMulticastInlineDelegate)                  OnLoopStarted                                               OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLoopStopped                                               OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	CMember(TArray<class UJamMusicSlot*>)              MusicSlots                                                  OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FGameplayEventListenerHandle)              KeyChangedEventHandle                                       OFFSET(getStruct<T>, {0xD0, 28, 0, 0})
	SMember(FGameplayEventListenerHandle)              ModeChangedEventHandle                                      OFFSET(getStruct<T>, {0xEC, 28, 0, 0})
	SMember(FGameplayEventListenerHandle)              TempoChangedEventHandle                                     OFFSET(getStruct<T>, {0x108, 28, 0, 0})
	DMember(float)                                     LocalPlayerGainParam                                        OFFSET(get<float>, {0x148, 4, 0, 0})
	DMember(float)                                     StandardGainParam                                           OFFSET(get<float>, {0x14C, 4, 0, 0})


	/// Functions
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.UpdateAllMetasounds
	// void UpdateAllMetasounds(class APlayerState* PlayerToIgnore);                                                            // [0xb719114] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.TickToSeconds
	// float TickToSeconds(int32_t Tick);                                                                                       // [0xb719084] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.ShouldPlayLocalSound
	// bool ShouldPlayLocalSound(class APlayerState* PlayerToIgnore);                                                           // [0xb718d2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.SecondsToTick
	// int32_t SecondsToTick(float Seconds);                                                                                    // [0xb718c9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.OnRep_MusicSlots
	// void OnRep_MusicSlots(TArray<UJamMusicSlot*>& PreviousMusicSlots);                                                       // [0xb717244] Final|Native|Protected|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.OnPlayspaceUserRemoved
	// void OnPlayspaceUserRemoved(FPlayspaceUser& RemovedUser);                                                                // [0xb7170c0] Final|Native|Public|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.OnPlayspaceUserAdded
	// void OnPlayspaceUserAdded(FPlayspaceUser& AddedUser);                                                                    // [0xb716fe0] Final|Native|Public|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.OnLicensedAudioTreatmentChanged
	// void OnLicensedAudioTreatmentChanged();                                                                                  // [0xb716fcc] Final|Native|Public  
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.IsAllowedToJamInSplitscreen
	// bool IsAllowedToJamInSplitscreen(class APlayerState* PlayerStateToCheck);                                                // [0xb716494] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.HandleTempoChangedEvent
	// void HandleTempoChangedEvent(FSparksPlayspaceEvent_TempoChanged& Payload);                                               // [0xb716350] Final|Native|Protected|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.HandleOnLoopStopped
	// void HandleOnLoopStopped(FJamPlayParams& PlayParams, bool bChangedLoop);                                                 // [0xb71619c] Final|Native|Public|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.HandleOnLoopStarted
	// void HandleOnLoopStarted(FJamPlayParams& PlayParams, bool bChangedLoop);                                                 // [0xb715fe8] Final|Native|Public|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.HandleModeChangedEvent
	// void HandleModeChangedEvent(FSparksPlayspaceEvent_KeyModeChanged& Payload);                                              // [0xb715f5c] Final|Native|Protected|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.HandleKeyChangedEvent
	// void HandleKeyChangedEvent(FSparksPlayspaceEvent_KeyChanged& Payload);                                                   // [0xb715ed0] Final|Native|Protected|HasOutParms 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetStandardGainValue
	// float GetStandardGainValue();                                                                                            // [0xb715eb8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetMusicSlotsInUse
	// TArray<UJamMusicSlot*> GetMusicSlotsInUse();                                                                             // [0xb715cc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetMusicSlotsForLoopType
	// TArray<UJamMusicSlot*> GetMusicSlotsForLoopType(EFMJamLoopType LoopType);                                                // [0xb715be4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetMusicSlotIndexForPlayer
	// int32_t GetMusicSlotIndexForPlayer(class APlayerState* PlayerState);                                                     // [0xb7159e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetMusicSlotIndexForLoopInstanceId
	// int32_t GetMusicSlotIndexForLoopInstanceId(int32_t LoopInstanceId);                                                      // [0xb715958] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetMusicSlotForPlayer
	// class UJamMusicSlot* GetMusicSlotForPlayer(class APlayerState* PlayerState);                                             // [0xb71588c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetMusicSlotBySlotIndex
	// class UJamMusicSlot* GetMusicSlotBySlotIndex(int32_t SlotIndex);                                                         // [0xb715758] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetMusicSlotByLoopInstanceId
	// class UJamMusicSlot* GetMusicSlotByLoopInstanceId(int32_t LoopInstanceId);                                               // [0xb7156cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetMetasoundPlayer
	// class UAudioComponent* GetMetasoundPlayer();                                                                             // [0xb7156a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetLocalPlayerGainValue
	// float GetLocalPlayerGainValue();                                                                                         // [0xab26a88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetLoadedAnimations
	// class USparksInstrumentAnimations* GetLoadedAnimations();                                                                // [0xb715684] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetJamPlayspace
	// class AJamPlayspace* GetJamPlayspace();                                                                                  // [0xb715620] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetDesiredGain
	// float GetDesiredGain(class APlayerState* PlayerState);                                                                   // [0xb715524] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetCurrentTempo
	// int32_t GetCurrentTempo();                                                                                               // [0xb715500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetCurrentMode
	// EMusicKeyMode GetCurrentMode();                                                                                          // [0xb71541c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetCurrentMidiTick
	// int32_t GetCurrentMidiTick();                                                                                            // [0xb7153d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetCurrentMidiSeconds
	// float GetCurrentMidiSeconds();                                                                                           // [0xb7153ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetCurrentKey
	// EMusicKey GetCurrentKey();                                                                                               // [0xb71534c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetAutoJammersForPlayer
	// TArray<UJamMusicSlot*> GetAutoJammersForPlayer(class APlayerState* PlayerState);                                         // [0xb71525c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetAllMusicSlots
	// TArray<UJamMusicSlot*> GetAllMusicSlots();                                                                               // [0xb7150e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.GetAllJammers
	// TArray<APlayerState*> GetAllJammers();                                                                                   // [0xb7150a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.FireGlobalControlsAnalytics
	// void FireGlobalControlsAnalytics(class APlayerState* PlayerState);                                                       // [0xb714fe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_MusicManager.CountActiveSlots
	// int32_t CountActiveSlots(bool bCountAutoJammers);                                                                        // [0xb714e8c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX
/// Size: 0x0110 (0x0000A0 - 0x0001B0)
class UJamPlayspaceComponent_ReactiveFX : public UPlayspaceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FJamReactiveFXState)                       ReactiveFXState                                             OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	DMember(bool)                                      bSetReactivityUpdateRateToTargetFPS                         OFFSET(get<bool>, {0xC8, 1, 0, 0})
	DMember(float)                                     ReactivityUpdateRate                                        OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(float)                                     PeakTamerValueReleaseTimeSec                                OFFSET(get<float>, {0xD0, 4, 0, 0})
	CMember(TMap<int32_t, FJamLoopReactiveFX>)         LoopReactiveFX                                              OFFSET(get<T>, {0xD8, 80, 0, 0})


	/// Functions
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX.RemoveReactiveNiagaraEffect
	// bool RemoveReactiveNiagaraEffect(int32_t LoopInstanceId, class UNiagaraComponent* NiagaraComponent);                     // [0xb718bdc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX.HasReactiveEffectsForLoop
	// bool HasReactiveEffectsForLoop(int32_t LoopInstanceId);                                                                  // [0xb7163dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX.GetReactiveNiagaraEffects
	// TArray<UNiagaraComponent*> GetReactiveNiagaraEffects(int32_t LoopInstanceId);                                            // [0xb715e14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX.ClearReactiveEffectsForLoop
	// void ClearReactiveEffectsForLoop(int32_t LoopInstanceId, bool bStopEffectsImmediately);                                  // [0xb714bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX.ClearReactiveEffects
	// void ClearReactiveEffects(bool bStopEffectsImmediately);                                                                 // [0xb714b50] Final|Native|Public|BlueprintCallable 
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceComponent_ReactiveFX.AddReactiveNiagaraEffect
	// void AddReactiveNiagaraEffect(int32_t LoopInstanceId, class UNiagaraComponent* NiagaraComponent);                        // [0xb7149cc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FMJamPlayspaceRuntime.JamPlayspaceVolume
/// Size: 0x0000 (0x000330 - 0x000330)
class AJamPlayspaceVolume : public AGameplayVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:


	/// Functions
	// Function /Script/FMJamPlayspaceRuntime.JamPlayspaceVolume.BP_UpdateReactiveFX
	// void BP_UpdateReactiveFX(float JamAmplitude);                                                                            // [0x1340978] Event|Public|BlueprintEvent 
};

/// Class /Script/FMJamPlayspaceRuntime.JamQuickplayPlayerSpawningComponent
/// Size: 0x0020 (0x0000B0 - 0x0000D0)
class UJamQuickplayPlayerSpawningComponent : public UPlayspaceComponent_PlayerSpawning
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FGameplayTagContainer)                     PregameSpawnTags                                            OFFSET(getStruct<T>, {0xB0, 32, 0, 0})
};

/// Struct /Script/FMJamPlayspaceRuntime.JamPlayParams
/// Size: 0x0028 (0x000000 - 0x000028)
class FJamPlayParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     SongShortName                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EFMJamLoopType)                            LoopType                                                    OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(TWeakObjectPtr<APlayerState*>)             PlayerState                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   LoopInstanceId                                              OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      bIsAutoJammer                                               OFFSET(get<bool>, {0x14, 1, 0, 0})
	CMember(TWeakObjectPtr<UCatalogData*>)             CMSCatalogEntry                                             OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(TWeakObjectPtr<UFMJamSong*>)               Song                                                        OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/FMJamPlayspaceRuntime.JamLoadResult
/// Size: 0x0038 (0x000000 - 0x000038)
class FJamLoadResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UJamMusicSlot*)                      Slot                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UFusionPatch*)                       FusionPatch                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class UMidiFile*)                          MidiFile                                                    OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class USparksJamEmoteItemDefinition*)      ItemDef                                                     OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(EMusicKeyMode)                             Mode                                                        OFFSET(get<T>, {0x20, 1, 0, 0})
	DMember(bool)                                      bSuccess                                                    OFFSET(get<bool>, {0x21, 1, 0, 0})
	DMember(bool)                                      bWasCancelled                                               OFFSET(get<bool>, {0x22, 1, 0, 0})
};

/// Struct /Script/FMJamPlayspaceRuntime.JamEvent_JamLoopBase
/// Size: 0x0040 (0x000000 - 0x000040)
class FJamEvent_JamLoopBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     SongShortName                                               OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	CMember(class UCatalogData*)                       CatalogEntry                                                OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(EFMJamLoopType)                            LoopType                                                    OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(class APlayerState*)                       PlayerState                                                 OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(int32_t)                                   LoopInstanceId                                              OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(bool)                                      bIsAutoJammer                                               OFFSET(get<bool>, {0x2C, 1, 0, 0})
	CMember(class USparksInstrumentAnimations*)        Animations                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(bool)                                      bChangedLoop                                                OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/FMJamPlayspaceRuntime.JamEvent_JamLoopStarted
/// Size: 0x0000 (0x000040 - 0x000040)
class FJamEvent_JamLoopStarted : public FJamEvent_JamLoopBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/FMJamPlayspaceRuntime.JamEvent_JamLoopStopped
/// Size: 0x0000 (0x000040 - 0x000040)
class FJamEvent_JamLoopStopped : public FJamEvent_JamLoopBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/FMJamPlayspaceRuntime.JamEvent_LoopsChangedThisFrame
/// Size: 0x0001 (0x000000 - 0x000001)
class FJamEvent_LoopsChangedThisFrame : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/FMJamPlayspaceRuntime.JamEvent_OnPrimaryPlayerPresenceChanged
/// Size: 0x0001 (0x000000 - 0x000001)
class FJamEvent_OnPrimaryPlayerPresenceChanged : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bPrimaryPlayerInPlayspace                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/FMJamPlayspaceRuntime.JamReactiveFXState
/// Size: 0x0028 (0x000000 - 0x000028)
class FJamReactiveFXState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     OverallAmplitude                                            OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TArray<float>)                             LoopAmplitudes                                              OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FVector4f>)                         LoopBandValues                                              OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/FMJamPlayspaceRuntime.JamLoopReactiveFX
/// Size: 0x0010 (0x000000 - 0x000010)
class FJamLoopReactiveFX : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<TWeakObjectPtr<UNiagaraComponent*>>) NiagaraComponents                                          OFFSET(get<T>, {0x0, 16, 0, 0})
};


/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EpicStreamMediaSource
/// dependency: MediaAssets
/// dependency: MediaUtils

/// Class /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo
/// Size: 0x0138 (0x000028 - 0x000160)
class UEpicBaseStreamingVideo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FMulticastInlineDelegate)                  VideoOnTerminalError                                        OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  VideoOnSuccess                                              OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  VideoOnClosed                                               OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  VideoOnEndReached                                           OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  VideoOnOpened                                               OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  VideoOnOpenTimeout                                          OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  VideoOnResumed                                              OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	CMember(class UEpicStreamMediaSource*)             MediaSource                                                 OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UMediaPlayer*)                       MediaPlayer                                                 OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FIntPoint)                                 VideoSize                                                   OFFSET(getStruct<T>, {0xB0, 8, 0, 0})
	CMember(class USoundSubmixBase*)                   DefaultSubmix                                               OFFSET(get<T>, {0x148, 8, 0, 0})
	CMember(class USoundSubmixBase*)                   LicensedSubmix                                              OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(class UMediaSoundComponent*)               MediaSoundComponent                                         OFFSET(get<T>, {0x158, 8, 0, 0})


	/// Functions
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.Stop
	// void Stop(bool bRelease, bool bStopPlayer);                                                                              // [0x85a6888] Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.Start
	// void Start(FString InVUID, class UMediaTexture* InVideoTexture);                                                         // [0x85a6188] Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.SetVideoSize
	// void SetVideoSize(int32_t Width, int32_t Height);                                                                        // [0x85a60bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.SetSyncTimes
	// void SetSyncTimes(FDateTime InNowTime, FDateTime InStartTime, bool DynamicStart, float InOffset_s, float InDelay_s);     // [0x85a5f24] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.SetSoundSubmixes
	// void SetSoundSubmixes(class UMediaSoundComponent* InSoundComponent, class USoundSubmixBase* InDefault, class USoundSubmixBase* InLicensed); // [0x85a5e0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.SetOpenTimeout
	// void SetOpenTimeout(double InTimeoutTime);                                                                               // [0x85a5d88] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.SetEnableExternalCloseCallback
	// void SetEnableExternalCloseCallback(bool bInEnable);                                                                     // [0x85a5d08] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.SetCreateAudioComponent
	// void SetCreateAudioComponent(bool bInCreateAudioComponent);                                                              // [0x85a5c88] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.RetryOnError
	// bool RetryOnError(EBaseMediaTerminalErrorReason Reason);                                                                 // [0x85a5bfc] Final|Native|Protected 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.Release
	// void Release();                                                                                                          // [0x26017bc] Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.Open
	// bool Open(FMediaPlayerOptions InMediaOptions);                                                                           // [0x85a5af8] Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.OnSuccessfulURL
	// void OnSuccessfulURL(FString URL);                                                                                       // [0x223f9c4] Native|Protected     
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.OnFailedURL
	// void OnFailedURL(FString URL);                                                                                           // [0x85a5420] Native|Protected     
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.MethodDebounce
	// void MethodDebounce(bool bDebounce);                                                                                     // [0x85a53a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.IsSyncStartTimeSet
	// bool IsSyncStartTimeSet();                                                                                               // [0x85a5388] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.Init
	// bool Init(class UMediaTexture* InVideoTexture, class UMediaPlayer* InMediaPlayer, class UEpicStreamMediaSource* InMediaSource, bool InCDNFailover); // [0x85a5244] Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaResumed
	// void HandleMediaResumed();                                                                                               // [0x1447724] Native|Protected     
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaOpenedFailed
	// void HandleMediaOpenedFailed(FString FailedUrl);                                                                         // [0x85a4b64] Final|Native|Protected 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaOpened
	// void HandleMediaOpened(FString OpenedUrl);                                                                               // [0x22408c0] Final|Native|Protected 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaEndReached
	// void HandleMediaEndReached();                                                                                            // [0x85a4b50] Final|Native|Protected 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaClosed
	// void HandleMediaClosed();                                                                                                // [0x85a4b3c] Final|Native|Protected 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleLicensedAudioTreatmentChanged
	// void HandleLicensedAudioTreatmentChanged(UCPTypes UCPType);                                                              // [0x85a4abc] Final|Native|Private 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.GetSoundComponent
	// class UMediaSoundComponent* GetSoundComponent();                                                                         // [0x3875c14] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.GetMediaSource
	// class UEpicStreamMediaSource* GetMediaSource();                                                                          // [0x337553c] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.GetMediaPlayerOptions
	// FMediaPlayerOptions GetMediaPlayerOptions();                                                                             // [0x85a4a54] Native|Public        
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.GetMediaPlayer
	// class UMediaPlayer* GetMediaPlayer();                                                                                    // [0x6872278] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.GetLicensedAudio
	// bool GetLicensedAudio();                                                                                                 // [0x85a4a3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.ClearSyncTimes
	// void ClearSyncTimes();                                                                                                   // [0x85a4a28] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/EpicMediaBasePlayer.BaseMediaDelayConfig
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FBaseMediaDelayConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(class UMediaTexture*)                      MediaTexture                                                OFFSET(get<T>, {0x98, 8, 0, 0})
};

/// Enum /Script/EpicMediaBasePlayer.EBaseMediaTerminalErrorReason
/// Size: 0x07
enum class EBaseMediaTerminalErrorReason : uint8_t
{
	EBaseMediaTerminalErrorReason__Unknown                                           = 0,
	EBaseMediaTerminalErrorReason__None                                              = 1,
	EBaseMediaTerminalErrorReason__ClosedError                                       = 2,
	EBaseMediaTerminalErrorReason__OpenTimeout                                       = 3,
	EBaseMediaTerminalErrorReason__OpenFailed                                        = 4,
	EBaseMediaTerminalErrorReason__Source                                            = 5,
	EBaseMediaTerminalErrorReason__UCP                                               = 6
};

/// Enum /Script/EpicMediaBasePlayer.EBaseMediaDelayAction
/// Size: 0x03
enum class EBaseMediaDelayAction : uint8_t
{
	EBaseMediaDelayAction__Open                                                      = 0,
	EBaseMediaDelayAction__Stop                                                      = 1,
	EBaseMediaDelayAction__Start                                                     = 2
};

/// Enum /Script/EpicMediaBasePlayer.EBaseMediaPlayerState
/// Size: 0x08
enum class EBaseMediaPlayerState : uint8_t
{
	EBaseMediaPlayerState__None                                                      = 0,
	EBaseMediaPlayerState__Released                                                  = 1,
	EBaseMediaPlayerState__Stopped                                                   = 2,
	EBaseMediaPlayerState__Started                                                   = 3,
	EBaseMediaPlayerState__Opened                                                    = 4,
	EBaseMediaPlayerState__Playing                                                   = 5,
	EBaseMediaPlayerState__Ended                                                     = 6,
	EBaseMediaPlayerState__Error                                                     = 7
};

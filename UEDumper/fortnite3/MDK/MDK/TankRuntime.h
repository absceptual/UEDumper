
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayCameras
/// dependency: Niagara
/// dependency: VehicleAudioRuntime

/// Class /Script/TankRuntime.FortTankVehicleConfigs
/// Size: 0x0050 (0x000A00 - 0x000A50)
class UFortTankVehicleConfigs : public UFortTreadVehicleConfigs
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2640;

public:
	CMember(TArray<FTankWeaponAimingData>)             TankWeaponAimingData                                        OFFSET(get<T>, {0xA00, 16, 0, 0})
	SMember(FText)                                     SecondInteractText                                          OFFSET(getStruct<T>, {0xA10, 16, 0, 0})
	CMember(TEnumAsByte<TInteractionType>)             SecondInteractType                                          OFFSET(get<T>, {0xA20, 1, 0, 0})
	SMember(FScalableFloat)                            SecondInteractDuration                                      OFFSET(getStruct<T>, {0xA28, 40, 0, 0})
};

/// Class /Script/TankRuntime.FortTankAnimFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortTankAnimFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TankRuntime.FortTankVehicle
/// Size: 0x01A0 (0x001EE0 - 0x002080)
class AFortTankVehicle : public AFortTreadVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 8320;

public:
	SMember(FMulticastInlineDelegate)                  OnTankRepairedDelegate                                      OFFSET(getStruct<T>, {0x1F58, 16, 0, 0})
	SMember(FName)                                     BarrelSocketName                                            OFFSET(getStruct<T>, {0x1F68, 4, 0, 0})
	CMember(class UCapsuleComponent*)                  BarrelCollision                                             OFFSET(get<T>, {0x1F70, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               UnderVehicleCollision                                       OFFSET(get<T>, {0x1F78, 8, 0, 0})
	CMember(TArray<FServerSocketTransformOverride>)    SocketOverrideArray                                         OFFSET(get<T>, {0x1F80, 16, 0, 0})
	CMember(TMap<FName, FTransform>)                   SocketTransformOverrideMap                                  OFFSET(get<T>, {0x1F90, 80, 0, 0})
	CMember(class USkeletalMeshComponent*)             CachedSkeletalMeshComponent                                 OFFSET(get<T>, {0x1FE0, 8, 0, 0})
	CMember(class AFortVehicleAudioController*)        CachedVehicleAudioController                                OFFSET(get<T>, {0x1FE8, 8, 0, 0})
	CMember(EVisibilityBasedAnimTickOption)            DefaultServerVisibilityBasedAnimTickOption                  OFFSET(get<T>, {0x1FF0, 1, 0, 0})
	DMember(bool)                                      DefaultServerSkeletalMeshTickEnabled                        OFFSET(get<bool>, {0x1FF1, 1, 0, 0})
	SMember(FName)                                     YawPivotSocketName                                          OFFSET(getStruct<T>, {0x1FF4, 4, 0, 0})
	SMember(FName)                                     PitchPivotSocketName                                        OFFSET(getStruct<T>, {0x1FF8, 4, 0, 0})
	CMember(class ULegacyCameraShake*)                 DriverCameraShakeInstance                                   OFFSET(get<T>, {0x2000, 8, 0, 0})
	CMember(class ULegacyCameraShake*)                 AcceleratingCameraShakeInstance                             OFFSET(get<T>, {0x2008, 8, 0, 0})
	CMember(class UNiagaraComponent*)                  CachedNiagaraComponentRoadAndExhaust                        OFFSET(get<T>, {0x2018, 8, 0, 0})
	SMember(FString)                                   RoadAndExhaustNiagaraComponentName                          OFFSET(getStruct<T>, {0x2020, 16, 0, 0})
	SMember(FName)                                     RoadAndExhaustPeelOutLeftName                               OFFSET(getStruct<T>, {0x2030, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustPeelOutRightName                              OFFSET(getStruct<T>, {0x2034, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustVehicleSpeedName                              OFFSET(getStruct<T>, {0x2038, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustSlideDirectionName                            OFFSET(getStruct<T>, {0x203C, 4, 0, 0})
	DMember(float)                                     RoadAndExhaustMinSpeedForDust                               OFFSET(get<float>, {0x2040, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustColorLerpName                             OFFSET(getStruct<T>, {0x2044, 4, 0, 0})
	DMember(float)                                     RoadAndExhaustDustColorLerpOffRoad                          OFFSET(get<float>, {0x2048, 4, 0, 0})
	DMember(float)                                     RoadAndExhaustDustColorLerpOnRoad                           OFFSET(get<float>, {0x204C, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustAlphaMultiplierName                       OFFSET(getStruct<T>, {0x2050, 4, 0, 0})
	DMember(float)                                     RoadAndExhaustDustAlphaMultiplierOffRoad                    OFFSET(get<float>, {0x2054, 4, 0, 0})
	DMember(float)                                     RoadAndExhaustDustAlphaMultiplierOnRoad                     OFFSET(get<float>, {0x2058, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustFrontLeftName                             OFFSET(getStruct<T>, {0x205C, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustFrontRightName                            OFFSET(getStruct<T>, {0x2060, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustMiddleLeftName                            OFFSET(getStruct<T>, {0x2064, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustMiddleRightName                           OFFSET(getStruct<T>, {0x2068, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustRearLeftName                              OFFSET(getStruct<T>, {0x206C, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustRearRightName                             OFFSET(getStruct<T>, {0x2070, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustIsOnDirtName                                  OFFSET(getStruct<T>, {0x2074, 4, 0, 0})
};

/// Class /Script/TankRuntime.FortTankVehicleAnimInstance
/// Size: 0x0110 (0x0006F0 - 0x000800)
class UFortTankVehicleAnimInstance : public UFortTreadVehicleAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2048;

public:
	CMember(class AFortTankVehicle*)                   TankVehicle                                                 OFFSET(get<T>, {0x6E8, 8, 0, 0})
	SMember(FRotator)                                  CurrentAimRotation                                          OFFSET(getStruct<T>, {0x6F0, 24, 0, 0})
	SMember(FRotator)                                  CurrentTurretAimRotation                                    OFFSET(getStruct<T>, {0x708, 24, 0, 0})
	SMember(FRotator)                                  SmoothedTurretDeltaRotation                                 OFFSET(getStruct<T>, {0x720, 24, 0, 0})
	DMember(float)                                     InterpolationRate                                           OFFSET(get<float>, {0x738, 4, 0, 0})
	DMember(bool)                                      bEngineOverheated                                           OFFSET(get<bool>, {0x73C, 1, 0, 0})
	DMember(bool)                                      bHasPassenger                                               OFFSET(get<bool>, {0x73D, 1, 0, 0})
	DMember(bool)                                      bIsFired                                                    OFFSET(get<bool>, {0x73E, 1, 0, 0})
	DMember(bool)                                      bIsReady                                                    OFFSET(get<bool>, {0x73F, 1, 0, 0})
	DMember(bool)                                      bDriverCoverOnCooldown                                      OFFSET(get<bool>, {0x740, 1, 0, 0})
	DMember(float)                                     LeftTreadPower                                              OFFSET(get<float>, {0x744, 4, 0, 0})
	DMember(float)                                     RightTreadPower                                             OFFSET(get<float>, {0x748, 4, 0, 0})
	DMember(float)                                     TurretYawAlpha                                              OFFSET(get<float>, {0x74C, 4, 0, 0})
	DMember(float)                                     TurretYawAlphaSmoothingRate                                 OFFSET(get<float>, {0x750, 4, 0, 0})
	DMember(float)                                     CannonYaw                                                   OFFSET(get<float>, {0x754, 4, 0, 0})
	DMember(float)                                     CannonPitch                                                 OFFSET(get<float>, {0x758, 4, 0, 0})
	DMember(float)                                     TurretYaw                                                   OFFSET(get<float>, {0x75C, 4, 0, 0})
	DMember(float)                                     TurretPitch                                                 OFFSET(get<float>, {0x760, 4, 0, 0})
	SMember(FLinearColor)                              MIDTreadPositionColor                                       OFFSET(getStruct<T>, {0x764, 16, 0, 0})
	DMember(float)                                     MIDTreadDamageLeft                                          OFFSET(get<float>, {0x774, 4, 0, 0})
	DMember(float)                                     MIDTreadDamageRight                                         OFFSET(get<float>, {0x778, 4, 0, 0})
	DMember(float)                                     MIDExhaustShakeSpeed                                        OFFSET(get<float>, {0x77C, 4, 0, 0})
	DMember(float)                                     MIDExhaustShakeAmp                                          OFFSET(get<float>, {0x780, 4, 0, 0})
	DMember(float)                                     MIDEngineBoostGlow                                          OFFSET(get<float>, {0x784, 4, 0, 0})
	DMember(float)                                     MIDEngineHealthRatio                                        OFFSET(get<float>, {0x788, 4, 0, 0})
	CMember(TMap<EVehicleSeats, FTankAnimAimingData>)  AimingData                                                  OFFSET(get<T>, {0x790, 80, 0, 0})
	SMember(FRotator)                                  PreviousTurretAimRotation                                   OFFSET(getStruct<T>, {0x7E0, 24, 0, 0})


	/// Functions
	// Function /Script/TankRuntime.FortTankVehicleAnimInstance.UpdateMIDEngineProperties
	// void UpdateMIDEngineProperties(float DeltaSeconds, float EngineHealthRatio);                                             // [0xbd06508] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/TankRuntime.FortTankVehicleAudioController
/// Size: 0x0400 (0x000328 - 0x000728)
class AFortTankVehicleAudioController : public AFortVehicleAudioController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1832;

public:
	SMember(FFortAudioFloatParameter)                  SpeedParam                                                  OFFSET(getStruct<T>, {0x328, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  TurnPowerParam                                              OFFSET(getStruct<T>, {0x360, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  OutOfFuelParam                                              OFFSET(getStruct<T>, {0x398, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  IdleParam                                                   OFFSET(getStruct<T>, {0x3D0, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  TurningParam                                                OFFSET(getStruct<T>, {0x408, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  ForwardParam                                                OFFSET(getStruct<T>, {0x440, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  ReverseParam                                                OFFSET(getStruct<T>, {0x478, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  SurfaceParam                                                OFFSET(getStruct<T>, {0x4B0, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  IsInWaterParam                                              OFFSET(getStruct<T>, {0x4E8, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  IsInAirParam                                                OFFSET(getStruct<T>, {0x520, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  BoostParam                                                  OFFSET(getStruct<T>, {0x558, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  CannonHorizontalMovementParam                               OFFSET(getStruct<T>, {0x590, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  CannonVerticalMovementParam                                 OFFSET(getStruct<T>, {0x5C8, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  TurretHorizontalMovementParam                               OFFSET(getStruct<T>, {0x600, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  TurretVerticalMovementParam                                 OFFSET(getStruct<T>, {0x638, 56, 0, 0})
	SMember(FTankAudioUpdateContext)                   Context                                                     OFFSET(getStruct<T>, {0x670, 184, 0, 0})


	/// Functions
	// Function /Script/TankRuntime.FortTankVehicleAudioController.PlayTurningOneShot
	// void PlayTurningOneShot();                                                                                               // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/TankRuntime.FortTankVehicleAudioController.PlayDecelOneShot
	// void PlayDecelOneShot();                                                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/TankRuntime.FortTankVehicleAudioController.PlayAccelOneShot
	// void PlayAccelOneShot();                                                                                                 // [0x1340978] Event|Protected|BlueprintEvent 
	// Function /Script/TankRuntime.FortTankVehicleAudioController.GetTankVehicleActor
	// class AFortTankVehicle* GetTankVehicleActor();                                                                           // [0xbd064c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/TankRuntime.TankWeaponAimingData
/// Size: 0x01C0 (0x000000 - 0x0001C0)
class FTankWeaponAimingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	DMember(int32_t)                                   SeatIndex                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      bAimRotationLerpWithEasing                                  OFFSET(get<bool>, {0x4, 1, 0, 0})
	SMember(FScalableFloat)                            AimRotationLerpSpeed                                        OFFSET(getStruct<T>, {0x8, 40, 0, 0})
	SMember(FRuntimeFloatCurve)                        AimYawRotationEasingCurve                                   OFFSET(getStruct<T>, {0x30, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        AimPitchRotationEasingCurve                                 OFFSET(getStruct<T>, {0xB8, 136, 0, 0})
	CMember(TEnumAsByte<ETankAimingMode>)              AimingMode                                                  OFFSET(get<T>, {0x140, 1, 0, 0})
	SMember(FScalableFloat)                            AimingCameraToMuzzleDistanceScalar                          OFFSET(getStruct<T>, {0x148, 40, 0, 0})
	SMember(FScalableFloat)                            AimingWhileTargetingCameraToMuzzleDistanceScalar            OFFSET(getStruct<T>, {0x170, 40, 0, 0})
	SMember(FScalableFloat)                            AimingPitchAdjust                                           OFFSET(getStruct<T>, {0x198, 40, 0, 0})
};

/// Struct /Script/TankRuntime.TankAnimAimingData
/// Size: 0x0060 (0x000000 - 0x000060)
class FTankAnimAimingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/TankRuntime.ServerSocketTransformOverride
/// Size: 0x0038 (0x000000 - 0x000038)
class FServerSocketTransformOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FVector)                                   PivotOffset                                                 OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   OffsetFromPivot                                             OFFSET(getStruct<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/TankRuntime.TankAudioUpdateContext
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FTankAudioUpdateContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bIsAwake                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     SpeedParamValue                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     LeftTrackPower                                              OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     RightTrackPower                                             OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     TurningParamValue                                           OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   CurrentGear                                                 OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(float)                                     AccelSpeedThreshold                                         OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     LastGearChangeTime                                          OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     AccelWaitTime                                               OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      bTurningRight                                               OFFSET(get<bool>, {0x24, 1, 0, 0})
	DMember(bool)                                      bTurningLeft                                                OFFSET(get<bool>, {0x25, 1, 0, 0})
	DMember(bool)                                      bPreviousTryMotion                                          OFFSET(get<bool>, {0x26, 1, 0, 0})
	DMember(float)                                     LastForwardSpeed                                            OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     TimeUntilAccelOneShotFade                                   OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     DecelSpeedThreshold                                         OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     EngineIdleThreshold                                         OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FVector2D)                                 WeaponsMovementThreshold                                    OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FName)                                     CannonSocketName                                            OFFSET(getStruct<T>, {0x48, 4, 0, 0})
	SMember(FName)                                     TurretSocketName                                            OFFSET(getStruct<T>, {0x4C, 4, 0, 0})
	DMember(int32_t)                                   SurfaceID                                                   OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	CMember(class UAudioComponent*)                    DecelOneShot                                                OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(class UAudioComponent*)                    AccelOneShot                                                OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(class UAudioComponent*)                    TurningOneShot                                              OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(class UFortLayeredAudioComponent*)         TracksLeftAudio                                             OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(class UFortLayeredAudioComponent*)         TracksRightAudio                                            OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Enum /Script/TankRuntime.ETankAimingMode
/// Size: 0x04
enum class ETankAimingMode : uint8_t
{
	CameraRotationNoTrace                                                            = 0,
	CameraTraceFromPivotSocket                                                       = 1,
	CameraTraceFromDistanceScalar                                                    = 2,
	ETankAimingMode_MAX                                                              = 3
};

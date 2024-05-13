
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/SparksCoreRuntime.SparksCore_BPFL
/// Size: 0x0000 (0x000028 - 0x000028)
class USparksCore_BPFL : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.InstrumentTypeToCosmeticSubtype
	// ESparksAccountItemSubtype InstrumentTypeToCosmeticSubtype(ESparksInstrumentType Instrument);                             // [0xb678964] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetVocalsMidiTextStringsFromEnums
	// TArray<FString> GetVocalsMidiTextStringsFromEnums(TArray<EVocalsMidiTextEvent>& MidiTextEvents);                         // [0xb67826c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetVocalsMidiTextStringFromEnum
	// FString GetVocalsMidiTextStringFromEnum(EVocalsMidiTextEvent MidiTextEvent);                                             // [0xb6781d0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetVocalsMidiTextEnumsFromStrings
	// TArray<EVocalsMidiTextEvent> GetVocalsMidiTextEnumsFromStrings(TArray<FString>& MidiTextEventStrings);                   // [0xb67811c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetVocalsMidiTextEnumFromString
	// EVocalsMidiTextEvent GetVocalsMidiTextEnumFromString(FString MidiTextEventString);                                       // [0xb677a44] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetVocalsMidiNoteIntegersFromEnums
	// TArray<char> GetVocalsMidiNoteIntegersFromEnums(TArray<EVocalsMidiNoteEvent>& MidiNoteEvents);                           // [0xb677348] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetVocalsMidiNoteIntegerFromEnum
	// char GetVocalsMidiNoteIntegerFromEnum(EVocalsMidiNoteEvent MidiNoteEvent);                                               // [0xb6772c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetVocalsMidiNoteEnumsFromIntegers
	// TArray<EVocalsMidiNoteEvent> GetVocalsMidiNoteEnumsFromIntegers(TArray<char>& MidiNoteEventInts);                        // [0xb676bc8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetVocalsMidiNoteEnumFromInteger
	// EVocalsMidiNoteEvent GetVocalsMidiNoteEnumFromInteger(char MidiNoteEventInt);                                            // [0xb676b40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetInstrumentTypeFromSwapString
	// ESparksInstrumentType GetInstrumentTypeFromSwapString(FString InstrumentSwapString);                                     // [0xb676468] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetInstrumentSwapStringFromType
	// FString GetInstrumentSwapStringFromType(ESparksInstrumentType InstrumentType);                                           // [0xb6763e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetGuitarMidiTextStringsFromEnums
	// TArray<FString> GetGuitarMidiTextStringsFromEnums(TArray<EGuitarMidiTextEvent>& MidiTextEvents);                         // [0xb675ce8] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetGuitarMidiTextStringFromEnum
	// FString GetGuitarMidiTextStringFromEnum(EGuitarMidiTextEvent MidiTextEvent);                                             // [0xb675c4c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetGuitarMidiTextEnumsFromStrings
	// TArray<EGuitarMidiTextEvent> GetGuitarMidiTextEnumsFromStrings(TArray<FString>& MidiTextEventStrings);                   // [0xb675b98] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetGuitarMidiTextEnumFromString
	// EGuitarMidiTextEvent GetGuitarMidiTextEnumFromString(FString MidiTextEventString);                                       // [0xb6754c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetGuitarMidiNoteIntegersFromEnums
	// TArray<char> GetGuitarMidiNoteIntegersFromEnums(TArray<EGuitarMidiNoteEvent>& MidiNoteEvents);                           // [0xb674dc4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetGuitarMidiNoteIntegerFromEnum
	// char GetGuitarMidiNoteIntegerFromEnum(EGuitarMidiNoteEvent MidiNoteEvent);                                               // [0xb674d3c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetGuitarMidiNoteEnumsFromIntegers
	// TArray<EGuitarMidiNoteEvent> GetGuitarMidiNoteEnumsFromIntegers(TArray<char>& MidiNoteEventInts);                        // [0xb674644] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetGuitarMidiNoteEnumFromInteger
	// EGuitarMidiNoteEvent GetGuitarMidiNoteEnumFromInteger(char MidiNoteEventInt);                                            // [0xb6745bc] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetDrumMidiTextStringsFromEnums
	// TArray<FString> GetDrumMidiTextStringsFromEnums(TArray<EDrumMidiTextEvent>& MidiTextEvents);                             // [0xb673ec4] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetDrumMidiTextStringFromEnum
	// FString GetDrumMidiTextStringFromEnum(EDrumMidiTextEvent MidiTextEvent);                                                 // [0xb673e28] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetDrumMidiTextEnumsFromStrings
	// TArray<EDrumMidiTextEvent> GetDrumMidiTextEnumsFromStrings(TArray<FString>& MidiTextEventStrings);                       // [0xb673d74] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetDrumMidiTextEnumFromString
	// EDrumMidiTextEvent GetDrumMidiTextEnumFromString(FString MidiTextEventString);                                           // [0xb67369c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetDrumMidiNoteIntegersFromEnums
	// TArray<char> GetDrumMidiNoteIntegersFromEnums(TArray<EDrumMidiNoteEvent>& MidiNoteEvents);                               // [0xb672fa0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetDrumMidiNoteIntegerFromEnum
	// char GetDrumMidiNoteIntegerFromEnum(EDrumMidiNoteEvent MidiNoteEvent);                                                   // [0xb672f18] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetDrumMidiNoteEnumsFromIntegers
	// TArray<EDrumMidiNoteEvent> GetDrumMidiNoteEnumsFromIntegers(TArray<char>& MidiNoteEventInts);                            // [0xb672820] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetDrumMidiNoteEnumFromInteger
	// EDrumMidiNoteEvent GetDrumMidiNoteEnumFromInteger(char MidiNoteEventInt);                                                // [0xb672798] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetBassMidiTextStringsFromEnums
	// TArray<FString> GetBassMidiTextStringsFromEnums(TArray<EBassMidiTextEvent>& MidiTextEvents);                             // [0xb6720a0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetBassMidiTextStringFromEnum
	// FString GetBassMidiTextStringFromEnum(EBassMidiTextEvent MidiTextEvent);                                                 // [0xb672004] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetBassMidiTextEnumsFromStrings
	// TArray<EBassMidiTextEvent> GetBassMidiTextEnumsFromStrings(TArray<FString>& MidiTextEventStrings);                       // [0xb671f50] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetBassMidiTextEnumFromString
	// EBassMidiTextEvent GetBassMidiTextEnumFromString(FString MidiTextEventString);                                           // [0xb671878] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetBassMidiNoteIntegersFromEnums
	// TArray<char> GetBassMidiNoteIntegersFromEnums(TArray<EBassMidiNoteEvent>& MidiNoteEvents);                               // [0xb67117c] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetBassMidiNoteIntegerFromEnum
	// char GetBassMidiNoteIntegerFromEnum(EBassMidiNoteEvent MidiNoteEvent);                                                   // [0xb6710f4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetBassMidiNoteEnumsFromIntegers
	// TArray<EBassMidiNoteEvent> GetBassMidiNoteEnumsFromIntegers(TArray<char>& MidiNoteEventInts);                            // [0xb6709fc] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetBassMidiNoteEnumFromInteger
	// EBassMidiNoteEvent GetBassMidiNoteEnumFromInteger(char MidiNoteEventInt);                                                // [0xb670974] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllVocalsMidiTextStrings
	// TArray<FString> GetAllVocalsMidiTextStrings();                                                                           // [0xb670908] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllVocalsMidiTextEnums
	// TArray<EVocalsMidiTextEvent> GetAllVocalsMidiTextEnums();                                                                // [0xb67025c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllVocalsMidiNoteIntegers
	// TArray<char> GetAllVocalsMidiNoteIntegers();                                                                             // [0xb6701e8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllVocalsMidiNoteEnums
	// TArray<EVocalsMidiNoteEvent> GetAllVocalsMidiNoteEnums();                                                                // [0xb66fb3c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllInstrumentSwapEventStrings
	// TArray<FString> GetAllInstrumentSwapEventStrings();                                                                      // [0xb66fb10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllGuitarMidiTextStrings
	// TArray<FString> GetAllGuitarMidiTextStrings();                                                                           // [0xb66faa4] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllGuitarMidiTextEnums
	// TArray<EGuitarMidiTextEvent> GetAllGuitarMidiTextEnums();                                                                // [0xb66f3f8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllGuitarMidiNoteIntegers
	// TArray<char> GetAllGuitarMidiNoteIntegers();                                                                             // [0xb66f384] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllGuitarMidiNoteEnums
	// TArray<EGuitarMidiNoteEvent> GetAllGuitarMidiNoteEnums();                                                                // [0xb66ecd8] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllDrumMidiTextStrings
	// TArray<FString> GetAllDrumMidiTextStrings();                                                                             // [0xb66ec6c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllDrumMidiTextEnums
	// TArray<EDrumMidiTextEvent> GetAllDrumMidiTextEnums();                                                                    // [0xb66e5c0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllDrumMidiNoteIntegers
	// TArray<char> GetAllDrumMidiNoteIntegers();                                                                               // [0xb66e54c] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllDrumMidiNoteEnums
	// TArray<EDrumMidiNoteEvent> GetAllDrumMidiNoteEnums();                                                                    // [0xb66dea0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllBassMidiTextStrings
	// TArray<FString> GetAllBassMidiTextStrings();                                                                             // [0xb66de34] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllBassMidiTextEnums
	// TArray<EBassMidiTextEvent> GetAllBassMidiTextEnums();                                                                    // [0xb66d788] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllBassMidiNoteIntegers
	// TArray<char> GetAllBassMidiNoteIntegers();                                                                               // [0xb66d714] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.GetAllBassMidiNoteEnums
	// TArray<EBassMidiNoteEvent> GetAllBassMidiNoteEnums();                                                                    // [0xb66d068] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SparksCoreRuntime.SparksCore_BPFL.CosmeticSubtypeToInstrumentType
	// ESparksInstrumentType CosmeticSubtypeToInstrumentType(ESparksAccountItemSubtype Subtype);                                // [0xb66cfc0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SparksCoreRuntime.SparksDrumEventsInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class USparksDrumEventsInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_Tom2_Hit
	// void Bind_Tom2_Hit(FDelegateProperty& Callback);                                                                         // [0x8a63984] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_Tom1_Hit
	// void Bind_Tom1_Hit(FDelegateProperty& Callback);                                                                         // [0x8a6343c] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_SnareHit
	// void Bind_SnareHit(FDelegateProperty& Callback);                                                                         // [0xb66cf1c] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_RideHardHit
	// void Bind_RideHardHit(FDelegateProperty& Callback);                                                                      // [0x8a638e0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_KickHit
	// void Bind_KickHit(FDelegateProperty& Callback);                                                                          // [0xa8baaac] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_HiHatPedalUp
	// void Bind_HiHatPedalUp(FDelegateProperty& Callback);                                                                     // [0xb66ce78] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_HiHatHit
	// void Bind_HiHatHit(FDelegateProperty& Callback);                                                                         // [0xb66cdd4] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_FloorTomHit
	// void Bind_FloorTomHit(FDelegateProperty& Callback);                                                                      // [0x8a634e0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_Crash2_SoftHit
	// void Bind_Crash2_SoftHit(FDelegateProperty& Callback);                                                                   // [0x8a80478] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_Crash2_HardHit
	// void Bind_Crash2_HardHit(FDelegateProperty& Callback);                                                                   // [0x8a8126c] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_Crash2_Choke
	// void Bind_Crash2_Choke(FDelegateProperty& Callback);                                                                     // [0xb66cd30] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_Crash1_SoftHit
	// void Bind_Crash1_SoftHit(FDelegateProperty& Callback);                                                                   // [0x8a81124] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_Crash1_HardHit
	// void Bind_Crash1_HardHit(FDelegateProperty& Callback);                                                                   // [0x8a803d4] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_Crash1_Choke
	// void Bind_Crash1_Choke(FDelegateProperty& Callback);                                                                     // [0x8a80330] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/SparksCoreRuntime.SparksDrumEventsInterface.Bind_CowbellHit
	// void Bind_CowbellHit(FDelegateProperty& Callback);                                                                       // [0x8a811c8] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/SparksCoreRuntime.SparksGameUserSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class USparksGameUserSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Enum /Script/SparksCoreRuntime.ESparksInstrumentType
/// Size: 0x07
enum class ESparksInstrumentType : uint8_t
{
	ESparksInstrumentType__Guitar                                                    = 0,
	ESparksInstrumentType__Bass                                                      = 1,
	ESparksInstrumentType__Vocals                                                    = 2,
	ESparksInstrumentType__Drum                                                      = 3,
	ESparksInstrumentType__Keyboard                                                  = 4,
	ESparksInstrumentType__None                                                      = 5,
	ESparksInstrumentType__NumInstrumentTypes                                        = 5
};

/// Enum /Script/SparksCoreRuntime.ESparksAccountItemSubtype
/// Size: 0x10
enum class ESparksAccountItemSubtype : uint8_t
{
	ESparksAccountItemSubtype__Aura                                                  = 0,
	ESparksAccountItemSubtype__Guitar                                                = 1,
	ESparksAccountItemSubtype__Bass                                                  = 2,
	ESparksAccountItemSubtype__Keyboard                                              = 3,
	ESparksAccountItemSubtype__Microphone                                            = 4,
	ESparksAccountItemSubtype__Drums                                                 = 5,
	ESparksAccountItemSubtype__SpotlightAnim                                         = 6,
	ESparksAccountItemSubtype__Song                                                  = 7,
	ESparksAccountItemSubtype__None                                                  = 8,
	ESparksAccountItemSubtype__NumAccountItemTypes                                   = 8
};

/// Enum /Script/SparksCoreRuntime.EBassMidiNoteEvent
/// Size: 0x24
enum class EBassMidiNoteEvent : uint8_t
{
	EBassMidiNoteEvent__None                                                         = 0,
	EBassMidiNoteEvent__FretPosition1                                                = 1,
	EBassMidiNoteEvent__FretPosition2                                                = 2,
	EBassMidiNoteEvent__FretPosition3                                                = 3,
	EBassMidiNoteEvent__FretPosition4                                                = 4,
	EBassMidiNoteEvent__FretPosition5                                                = 5,
	EBassMidiNoteEvent__FretPosition6                                                = 6,
	EBassMidiNoteEvent__FretPosition7                                                = 7,
	EBassMidiNoteEvent__FretPosition8                                                = 8,
	EBassMidiNoteEvent__FretPosition9                                                = 9,
	EBassMidiNoteEvent__FretPosition10                                               = 10,
	EBassMidiNoteEvent__FretPosition11                                               = 11,
	EBassMidiNoteEvent__FretPosition12                                               = 12,
	EBassMidiNoteEvent__FretPosition13                                               = 13,
	EBassMidiNoteEvent__FretPosition14                                               = 14,
	EBassMidiNoteEvent__FretPosition15                                               = 15,
	EBassMidiNoteEvent__FretPosition16                                               = 16,
	EBassMidiNoteEvent__FretPosition17                                               = 17,
	EBassMidiNoteEvent__FretPosition18                                               = 18,
	EBassMidiNoteEvent__FretPosition19                                               = 19,
	EBassMidiNoteEvent__FretPosition20                                               = 20,
	EBassMidiNoteEvent__StrumDown                                                    = 21,
	EBassMidiNoteEvent__StrumUp                                                      = 22,
	EBassMidiNoteEvent__ChordShape                                                   = 23
};

/// Enum /Script/SparksCoreRuntime.EBassMidiTextEvent
/// Size: 0x09
enum class EBassMidiTextEvent : uint8_t
{
	EBassMidiTextEvent__None                                                         = 0,
	EBassMidiTextEvent__PlayingMellow                                                = 1,
	EBassMidiTextEvent__PlayingStandard                                              = 2,
	EBassMidiTextEvent__PlayingIntense                                               = 3,
	EBassMidiTextEvent__IdleRhythmMellow                                             = 4,
	EBassMidiTextEvent__IdleRhythmStandard                                           = 5,
	EBassMidiTextEvent__IdleRhythmIntense                                            = 6,
	EBassMidiTextEvent__IdleRealtime                                                 = 7,
	EBassMidiTextEvent__Pickup                                                       = 8
};

/// Enum /Script/SparksCoreRuntime.EDrumMidiNoteEvent
/// Size: 0x29
enum class EDrumMidiNoteEvent : uint8_t
{
	EDrumMidiNoteEvent__None                                                         = 0,
	EDrumMidiNoteEvent__KickHit_RightFoot                                            = 1,
	EDrumMidiNoteEvent__HiHatPedalUp_LeftFoot                                        = 2,
	EDrumMidiNoteEvent__SnareHit_LeftHand                                            = 3,
	EDrumMidiNoteEvent__SnareHit_RightHand                                           = 4,
	EDrumMidiNoteEvent__HiHatHit_LeftHand                                            = 5,
	EDrumMidiNoteEvent__HiHatHit_RightHand                                           = 6,
	EDrumMidiNoteEvent__Percussion_RightHand                                         = 7,
	EDrumMidiNoteEvent__Crash1HardHit_LeftHand                                       = 8,
	EDrumMidiNoteEvent__Crash1SoftHit_LeftHand                                       = 9,
	EDrumMidiNoteEvent__Crash1Hardhit_RightHand                                      = 10,
	EDrumMidiNoteEvent__Crash1SoftHit_RightHand                                      = 11,
	EDrumMidiNoteEvent__Crash2HardHit_RightHand                                      = 12,
	EDrumMidiNoteEvent__Crash2SoftHit_RightHand                                      = 13,
	EDrumMidiNoteEvent__Crash1Choke                                                  = 14,
	EDrumMidiNoteEvent__Crash2Choke                                                  = 15,
	EDrumMidiNoteEvent__RideCymbalHit_RightHand                                      = 16,
	EDrumMidiNoteEvent__RideCymbalHit_LeftHand                                       = 17,
	EDrumMidiNoteEvent__Crash2Hit_LeftHand                                           = 18,
	EDrumMidiNoteEvent__Crash2SoftHit_LeftHand                                       = 19,
	EDrumMidiNoteEvent__Tom1Hit_LeftHand                                             = 20,
	EDrumMidiNoteEvent__Tom1Hit_RightHand                                            = 21,
	EDrumMidiNoteEvent__Tom2Hit_LeftHand                                             = 22,
	EDrumMidiNoteEvent__Tom2Hit_RightHand                                            = 23,
	EDrumMidiNoteEvent__FloorTomHit_LeftHand                                         = 24,
	EDrumMidiNoteEvent__FloorTomHit_RightHand                                        = 25,
	EDrumMidiNoteEvent__SticksHeld                                                   = 26,
	EDrumMidiNoteEvent__SnareHit_LeftHand_Soft                                       = 27,
	EDrumMidiNoteEvent__SnareHit_RightHand_Soft                                      = 28
};

/// Enum /Script/SparksCoreRuntime.EDrumMidiTextEvent
/// Size: 0x09
enum class EDrumMidiTextEvent : uint8_t
{
	EDrumMidiTextEvent__None                                                         = 0,
	EDrumMidiTextEvent__PlayingMellow                                                = 1,
	EDrumMidiTextEvent__PlayingStandard                                              = 2,
	EDrumMidiTextEvent__PlayingIntense                                               = 3,
	EDrumMidiTextEvent__IdleRhythmMellow                                             = 4,
	EDrumMidiTextEvent__IdleRhythmStandard                                           = 5,
	EDrumMidiTextEvent__IdleRhythmIntense                                            = 6,
	EDrumMidiTextEvent__IdleRealtime                                                 = 7,
	EDrumMidiTextEvent__Pickup                                                       = 8
};

/// Enum /Script/SparksCoreRuntime.EGuitarMidiNoteEvent
/// Size: 0x24
enum class EGuitarMidiNoteEvent : uint8_t
{
	EGuitarMidiNoteEvent__None                                                       = 0,
	EGuitarMidiNoteEvent__FretPosition1                                              = 1,
	EGuitarMidiNoteEvent__FretPosition2                                              = 2,
	EGuitarMidiNoteEvent__FretPosition3                                              = 3,
	EGuitarMidiNoteEvent__FretPosition4                                              = 4,
	EGuitarMidiNoteEvent__FretPosition5                                              = 5,
	EGuitarMidiNoteEvent__FretPosition6                                              = 6,
	EGuitarMidiNoteEvent__FretPosition7                                              = 7,
	EGuitarMidiNoteEvent__FretPosition8                                              = 8,
	EGuitarMidiNoteEvent__FretPosition9                                              = 9,
	EGuitarMidiNoteEvent__FretPosition10                                             = 10,
	EGuitarMidiNoteEvent__FretPosition11                                             = 11,
	EGuitarMidiNoteEvent__FretPosition12                                             = 12,
	EGuitarMidiNoteEvent__FretPosition13                                             = 13,
	EGuitarMidiNoteEvent__FretPosition14                                             = 14,
	EGuitarMidiNoteEvent__FretPosition15                                             = 15,
	EGuitarMidiNoteEvent__FretPosition16                                             = 16,
	EGuitarMidiNoteEvent__FretPosition17                                             = 17,
	EGuitarMidiNoteEvent__FretPosition18                                             = 18,
	EGuitarMidiNoteEvent__FretPosition19                                             = 19,
	EGuitarMidiNoteEvent__FretPosition20                                             = 20,
	EGuitarMidiNoteEvent__StrumDown                                                  = 21,
	EGuitarMidiNoteEvent__StrumUp                                                    = 22,
	EGuitarMidiNoteEvent__ChordShape                                                 = 23
};

/// Enum /Script/SparksCoreRuntime.EGuitarMidiTextEvent
/// Size: 0x11
enum class EGuitarMidiTextEvent : uint8_t
{
	EGuitarMidiTextEvent__None                                                       = 0,
	EGuitarMidiTextEvent__PlayingMellow                                              = 1,
	EGuitarMidiTextEvent__PlayingStandard                                            = 2,
	EGuitarMidiTextEvent__PlayingIntense                                             = 3,
	EGuitarMidiTextEvent__IdleRhythmMellow                                           = 4,
	EGuitarMidiTextEvent__IdleRhythmStandard                                         = 5,
	EGuitarMidiTextEvent__IdleRhythmIntense                                          = 6,
	EGuitarMidiTextEvent__IdleRealtime                                               = 7,
	EGuitarMidiTextEvent__UsingInstrumentGuitar                                      = 8,
	EGuitarMidiTextEvent__UsingInstrumentKeytar                                      = 9,
	EGuitarMidiTextEvent__Pickup                                                     = 10
};

/// Enum /Script/SparksCoreRuntime.EVocalsMidiNoteEvent
/// Size: 0x01
enum class EVocalsMidiNoteEvent : uint8_t
{
	EVocalsMidiNoteEvent__None                                                       = 0
};

/// Enum /Script/SparksCoreRuntime.EVocalsMidiTextEvent
/// Size: 0x09
enum class EVocalsMidiTextEvent : uint8_t
{
	EVocalsMidiTextEvent__None                                                       = 0,
	EVocalsMidiTextEvent__PlayingMellow                                              = 1,
	EVocalsMidiTextEvent__PlayingStandard                                            = 2,
	EVocalsMidiTextEvent__PlayingIntense                                             = 3,
	EVocalsMidiTextEvent__IdleRhythmMellow                                           = 4,
	EVocalsMidiTextEvent__IdleRhythmStandard                                         = 5,
	EVocalsMidiTextEvent__IdleRhythmIntense                                          = 6,
	EVocalsMidiTextEvent__IdleRealtime                                               = 7,
	EVocalsMidiTextEvent__Pickup                                                     = 8
};

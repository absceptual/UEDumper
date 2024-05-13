
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Harmonix
/// dependency: HarmonixMidi
/// dependency: MetasoundEngine
/// dependency: MetasoundFrontend

/// Class /Script/HarmonixMetasound.MetasoundOfflinePlayerComponent
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UMetasoundOfflinePlayerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(class UMetaSoundSource*)                   MetaSoundSource                                             OFFSET(get<T>, {0xB0, 8, 0, 0})
};

/// Class /Script/HarmonixMetasound.MidiClockUpdateSubsystem
/// Size: 0x0060 (0x000030 - 0x000090)
class UMidiClockUpdateSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/HarmonixMetasound.MidiEventInfoBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMidiEventInfoBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/HarmonixMetasound.MidiEventInfoBlueprintLibrary.IsNoteOn
	// bool IsNoteOn(FMidiEventInfo& Event);                                                                                    // [0xb6b7a24] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiEventInfoBlueprintLibrary.IsNoteOff
	// bool IsNoteOff(FMidiEventInfo& Event);                                                                                   // [0xb6b798c] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiEventInfoBlueprintLibrary.IsNote
	// bool IsNote(FMidiEventInfo& Event);                                                                                      // [0xb6b78f8] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiEventInfoBlueprintLibrary.IsMidiEventInfo
	// bool IsMidiEventInfo(FMetaSoundOutput& Output);                                                                          // [0xb6b77c0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiEventInfoBlueprintLibrary.GetVelocity
	// int32_t GetVelocity(FMidiEventInfo& Event);                                                                              // [0xb6b72b0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiEventInfoBlueprintLibrary.GetNoteNumber
	// int32_t GetNoteNumber(FMidiEventInfo& Event);                                                                            // [0xb6b70dc] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiEventInfoBlueprintLibrary.GetMidiEventInfo
	// FMidiEventInfo GetMidiEventInfo(FMetaSoundOutput& Output, bool& Success);                                                // [0xb6b6964] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiEventInfoBlueprintLibrary.GetChannel
	// int32_t GetChannel(FMidiEventInfo& Event);                                                                               // [0xb6b68c0] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/HarmonixMetasound.MidiStepSequence
/// Size: 0x0050 (0x000028 - 0x000078)
class UMidiStepSequence : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(int32_t)                                   Pages                                                       OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   Rows                                                        OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   Columns                                                     OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	SMember(FStepSequenceTable)                        StepTable                                                   OFFSET(getStruct<T>, {0x40, 40, 0, 0})


	/// Functions
	// Function /Script/HarmonixMetasound.MidiStepSequence.ToggleCellOnPage
	// FStepSequenceCell ToggleCellOnPage(int32_t Page, int32_t Row, int32_t Column);                                           // [0xb6b8e5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.ToggleCell
	// FStepSequenceCell ToggleCell(int32_t Row, int32_t Column);                                                               // [0xb6b8d88] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetStepTable
	// void SetStepTable(FStepSequenceTable& NewStepTable);                                                                     // [0xb6b8ce4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetStepSkipIndex
	// bool SetStepSkipIndex(int32_t StepIndex);                                                                                // [0xb6b8c58] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetRowVelocity
	// bool SetRowVelocity(int32_t RowIndex, int32_t MidiVelocoty);                                                             // [0xb6b8b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetRowNoteNumber
	// bool SetRowNoteNumber(int32_t RowIndex, int32_t MidiNoteNumber);                                                         // [0xb6b8ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetNumRows
	// void SetNumRows(int32_t Count);                                                                                          // [0xb6b8a30] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetNumPages
	// void SetNumPages(int32_t Count);                                                                                         // [0xb6b89b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetNumColumns
	// void SetNumColumns(int32_t Count);                                                                                       // [0xb6b8930] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetCellOnPage
	// FStepSequenceCell SetCellOnPage(int32_t Page, int32_t Row, int32_t Column, bool State);                                  // [0xb6b7eb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetCellContinuationOnPage
	// FStepSequenceCell SetCellContinuationOnPage(int32_t Page, int32_t Row, int32_t Column, bool bState);                     // [0xb6b7d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetCellContinuation
	// FStepSequenceCell SetCellContinuation(int32_t Row, int32_t Column, bool bState);                                         // [0xb6b7c64] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.SetCell
	// FStepSequenceCell SetCell(int32_t Row, int32_t Column, bool State);                                                      // [0xb6b7b58] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.GetStepTable
	// FStepSequenceTable GetStepTable();                                                                                       // [0xb6b7178] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MidiStepSequence.GetCellOnPage
	// FStepSequenceCell GetCellOnPage(int32_t Page, int32_t Row, int32_t Column);                                              // [0xb6b67bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MidiStepSequence.GetCell
	// FStepSequenceCell GetCell(int32_t Row, int32_t Column);                                                                  // [0xb6b66e8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/HarmonixMetasound.MidiStepSequence.DisableRowsAbove
	// void DisableRowsAbove(int32_t FirstDisabledRow);                                                                         // [0xb6b6668] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/HarmonixMetasound.MusicParameterBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMusicParameterBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/HarmonixMetasound.MusicParameterBlueprintLibrary.SetMusicTimestamp
	// void SetMusicTimestamp(class UMetasoundParameterPack* Target, FName ParameterName, FMusicTimestamp& Value, ESetParamResult& Result, bool OnlyIfExists); // [0xb6b8630] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicParameterBlueprintLibrary.SetMusicSeekRequest
	// void SetMusicSeekRequest(class UMetasoundParameterPack* Target, FName ParameterName, FMusicSeekRequest& Value, ESetParamResult& Result, bool OnlyIfExists); // [0xb6b8318] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicParameterBlueprintLibrary.SetMusicLoopConfiguration
	// void SetMusicLoopConfiguration(class UMetasoundParameterPack* Target, FName ParameterName, FMusicLoopConfiguration& Value, ESetParamResult& Result, bool OnlyIfExists); // [0xb6b8000] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicParameterBlueprintLibrary.HasMusicTimestamp
	// bool HasMusicTimestamp(class UMetasoundParameterPack* Target, FName Name);                                               // [0xb6b7648] Final|Native|Private|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicParameterBlueprintLibrary.HasMusicSeekRequest
	// bool HasMusicSeekRequest(class UMetasoundParameterPack* Target, FName Name);                                             // [0xb6b74d0] Final|Native|Private|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicParameterBlueprintLibrary.HasMusicLoopConfiguration
	// bool HasMusicLoopConfiguration(class UMetasoundParameterPack* Target, FName Name);                                       // [0xb6b7358] Final|Native|Private|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicParameterBlueprintLibrary.GetMusicTimestamp
	// FMusicTimestamp GetMusicTimestamp(class UMetasoundParameterPack* Target, FName ParameterName, ESetParamResult& Result);  // [0xb6b6de0] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicParameterBlueprintLibrary.GetMusicSeekRequest
	// FMusicSeekRequest GetMusicSeekRequest(class UMetasoundParameterPack* Target, FName ParameterName, ESetParamResult& Result); // [0xb6b6c34] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicParameterBlueprintLibrary.GetMusicLoopConfiguration
	// FMusicLoopConfiguration GetMusicLoopConfiguration(class UMetasoundParameterPack* Target, FName ParameterName, ESetParamResult& Result); // [0xb6b6a88] Final|Native|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/HarmonixMetasound.MusicTimestampBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMusicTimestampBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/HarmonixMetasound.MusicTimestampBlueprintLibrary.IsMusicTimestamp
	// bool IsMusicTimestamp(FMetaSoundOutput& Output);                                                                         // [0xb6b785c] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicTimestampBlueprintLibrary.GetMusicTimestamp
	// FMusicTimestamp GetMusicTimestamp(FMetaSoundOutput& Output, bool& Success);                                              // [0xb6b6fb8] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/HarmonixMetasound.HarmonixPeakTamer
/// Size: 0x0020 (0x000028 - 0x000048)
class UHarmonixPeakTamer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:


	/// Functions
	// Function /Script/HarmonixMetasound.HarmonixPeakTamer.Update
	// void Update(float InputValue, float DeltaTimeSeconds);                                                                   // [0xb6b8f60] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.HarmonixPeakTamer.GetValue
	// float GetValue();                                                                                                        // [0x3a008ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.HarmonixPeakTamer.GetPeak
	// float GetPeak();                                                                                                         // [0x37e8c78] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.HarmonixPeakTamer.CreateHarmonixPeakTamer
	// class UHarmonixPeakTamer* CreateHarmonixPeakTamer();                                                                     // [0xb6b663c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.HarmonixPeakTamer.Configure
	// void Configure(FHarmonixPeakTamerSettings& Settings);                                                                    // [0xb6b6590] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/HarmonixMetasound.TimeSignatureBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTimeSignatureBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/HarmonixMetasound.TimeSignatureBlueprintLibrary.IsTimeSignature
	// bool IsTimeSignature(FMetaSoundOutput& Output);                                                                          // [0xb6b7abc] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
	// Function /Script/HarmonixMetasound.TimeSignatureBlueprintLibrary.GetTimeSignature
	// FTimeSignature GetTimeSignature(FMetaSoundOutput& Output, bool& Success);                                                // [0xb6b7194] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/HarmonixMetasound.MusicClockComponent
/// Size: 0x0370 (0x0000A0 - 0x000410)
class UMusicClockComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	CMember(EMusicClockDriveMethod)                    DriveMethod                                                 OFFSET(get<T>, {0xA0, 1, 0, 0})
	SMember(FName)                                     MetasoundOutputName                                         OFFSET(getStruct<T>, {0xA4, 4, 0, 0})
	CMember(class UAudioComponent*)                    MetasoundsAudioComponent                                    OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class UMidiFile*)                          TempoMap                                                    OFFSET(get<T>, {0xB0, 8, 0, 0})
	DMember(float)                                     Tempo                                                       OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(int32_t)                                   TimeSignatureNum                                            OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
	DMember(int32_t)                                   TimeSignatureDenom                                          OFFSET(get<int32_t>, {0xC0, 4, 0, 0})
	DMember(float)                                     CurrentBeatDurationSec                                      OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(float)                                     CurrentBarDurationSec                                       OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     CurrentClockAdvanceRate                                     OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(bool)                                      RunPastMusicEnd                                             OFFSET(get<bool>, {0xD0, 1, 0, 0})
	CMember(ECalibratedMusicTimebase)                  TimebaseForBarAndBeatEvents                                 OFFSET(get<T>, {0xD1, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  PlayStateEvent                                              OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BeatEvent                                                   OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BarEvent                                                    OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  SectionEvent                                                OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  MusicClockConnectedEvent                                    OFFSET(getStruct<T>, {0x118, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  MusicClockDisconnectedEvent                                 OFFSET(getStruct<T>, {0x128, 16, 0, 0})
	SMember(FMidiSongPos)                              CurrentSmoothedAudioRenderSongPos                           OFFSET(getStruct<T>, {0x138, 64, 0, 0})
	SMember(FMidiSongPos)                              CurrentVideoRenderSongPos                                   OFFSET(getStruct<T>, {0x178, 64, 0, 0})
	SMember(FMidiSongPos)                              CurrentPlayerExperiencedSongPos                             OFFSET(getStruct<T>, {0x1B8, 64, 0, 0})


	/// Functions
	// Function /Script/HarmonixMetasound.MusicClockComponent.TickToMs
	// float TickToMs(float Tick);                                                                                              // [0xb766674] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.Stop
	// void Stop();                                                                                                             // [0xb766660] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicClockComponent.Start
	// void Start();                                                                                                            // [0xb76664c] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicClockComponent.Pause
	// void Pause();                                                                                                            // [0xb766400] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicClockComponent.MeasureSpanProgress
	// float MeasureSpanProgress(FMusicalTimeSpan& Span, ECalibratedMusicTimebase Timebase);                                    // [0xb766274] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetState
	// EMusicClockState GetState();                                                                                             // [0xb766174] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSongSections
	// TArray<FSongSection> GetSongSections();                                                                                  // [0xb766148] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSongRemainingMs
	// float GetSongRemainingMs(ECalibratedMusicTimebase Timebase);                                                             // [0xb7660b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSongPos
	// FMidiSongPos GetSongPos(ECalibratedMusicTimebase Timebase);                                                              // [0xb765fe4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSongLengthMs
	// float GetSongLengthMs();                                                                                                 // [0xb765fb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSongLengthBeats
	// float GetSongLengthBeats();                                                                                              // [0xb765f84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSongLengthBars
	// float GetSongLengthBars();                                                                                               // [0xb765f58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSectionStartMsAtMs
	// float GetSectionStartMsAtMs(float Ms);                                                                                   // [0xb765eb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSectionNameAtMs
	// FString GetSectionNameAtMs(float Ms);                                                                                    // [0xb765dfc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSectionLengthMsAtMs
	// float GetSectionLengthMsAtMs(float Ms);                                                                                  // [0xb765d6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSectionEndMsAtMs
	// float GetSectionEndMsAtMs(float Ms);                                                                                     // [0xb765cc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSecondsIncludingCountIn
	// float GetSecondsIncludingCountIn(ECalibratedMusicTimebase Timebase);                                                     // [0xb765c00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetSecondsFromBarOne
	// float GetSecondsFromBarOne(ECalibratedMusicTimebase Timebase);                                                           // [0xb765b38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetNumSections
	// int32_t GetNumSections();                                                                                                // [0xb765b10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetNumBeatsInBarAtMs
	// float GetNumBeatsInBarAtMs(float Ms);                                                                                    // [0xb765a80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetMsPerBeatAtMs
	// float GetMsPerBeatAtMs(float Ms);                                                                                        // [0xb7659f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetMsPerBarAtMs
	// float GetMsPerBarAtMs(float Ms);                                                                                         // [0xb765960] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetDistanceToNextBeat
	// float GetDistanceToNextBeat(ECalibratedMusicTimebase Timebase);                                                          // [0xb765880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetDistanceToNextBar
	// float GetDistanceToNextBar(ECalibratedMusicTimebase Timebase);                                                           // [0xb7657f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetDistanceToClosestBeat
	// float GetDistanceToClosestBeat(ECalibratedMusicTimebase Timebase);                                                       // [0xb765760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetDistanceToClosestBar
	// float GetDistanceToClosestBar(ECalibratedMusicTimebase Timebase);                                                        // [0xb7656d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetDistanceFromCurrentBeat
	// float GetDistanceFromCurrentBeat(ECalibratedMusicTimebase Timebase);                                                     // [0xb765640] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetDistanceFromCurrentBar
	// float GetDistanceFromCurrentBar(ECalibratedMusicTimebase Timebase);                                                      // [0xb7655b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetDeltaBeat
	// float GetDeltaBeat(ECalibratedMusicTimebase Timebase);                                                                   // [0xb765520] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetDeltaBar
	// float GetDeltaBar(ECalibratedMusicTimebase Timebase);                                                                    // [0xb765490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetCurrentVideoRenderSongPos
	// FMidiSongPos GetCurrentVideoRenderSongPos();                                                                             // [0xb765454] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetCurrentTimestamp
	// FMusicTimestamp GetCurrentTimestamp(ECalibratedMusicTimebase Timebase);                                                  // [0xb7653cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetCurrentSmoothedAudioRenderSongPos
	// FMidiSongPos GetCurrentSmoothedAudioRenderSongPos();                                                                     // [0xb765384] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetCurrentSectionStartMs
	// float GetCurrentSectionStartMs(ECalibratedMusicTimebase Timebase);                                                       // [0xb7652f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetCurrentSectionName
	// FString GetCurrentSectionName(ECalibratedMusicTimebase Timebase);                                                        // [0xb765248] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetCurrentSectionLengthMs
	// float GetCurrentSectionLengthMs(ECalibratedMusicTimebase Timebase);                                                      // [0xb7651b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetCurrentSectionIndex
	// int32_t GetCurrentSectionIndex(ECalibratedMusicTimebase Timebase);                                                       // [0xb765110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetCurrentPlayerExperiencedSongPos
	// FMidiSongPos GetCurrentPlayerExperiencedSongPos();                                                                       // [0xb7650c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetCountInSeconds
	// float GetCountInSeconds();                                                                                               // [0xb765098] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetBeatsIncludingCountIn
	// float GetBeatsIncludingCountIn(ECalibratedMusicTimebase Timebase);                                                       // [0xb764f58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetBeatInBarAtMs
	// float GetBeatInBarAtMs(float Ms);                                                                                        // [0xb764e78] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.GetBarsIncludingCountIn
	// float GetBarsIncludingCountIn(ECalibratedMusicTimebase Timebase);                                                        // [0xb764db0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.CreateWallClockDrivenMusicClock
	// class UMusicClockComponent* CreateWallClockDrivenMusicClock(class UObject* WorldContextObject, class UMidiFile* WithTempoMap, bool Start); // [0xb764c1c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicClockComponent.CreateMetasoundDrivenMusicClock
	// class UMusicClockComponent* CreateMetasoundDrivenMusicClock(class UObject* WorldContextObject, class UAudioComponent* InAudioComponent, FName MetasoundOuputPinName, bool Start); // [0xb7649d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicClockComponent.Continue
	// void Continue();                                                                                                         // [0xb76497c] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicClockComponent.ConnectToWallClockForMidi
	// void ConnectToWallClockForMidi(class UMidiFile* InTempoMap);                                                             // [0xb7648fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicClockComponent.ConnectToMetasoundOnAudioComponent
	// bool ConnectToMetasoundOnAudioComponent(class UAudioComponent* InAudioComponent);                                        // [0xb76486c] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicClockComponent.BeatToMs
	// float BeatToMs(float Beat);                                                                                              // [0xb7647dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicClockComponent.BarToMs
	// float BarToMs(float Bar);                                                                                                // [0xb76474c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/HarmonixMetasound.MusicTempometerComponent
/// Size: 0x00B8 (0x0000A0 - 0x000158)
class UMusicTempometerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FName)                                     SecondsIncludingCountInParameterName                        OFFSET(getStruct<T>, {0xA0, 4, 0, 0})
	SMember(FName)                                     BarsIncludingCountInParameterName                           OFFSET(getStruct<T>, {0xA4, 4, 0, 0})
	SMember(FName)                                     BeatsIncludingCountInParameterName                          OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     SecondsFromBarOneParameterName                              OFFSET(getStruct<T>, {0xAC, 4, 0, 0})
	SMember(FName)                                     TimestampBarParameterName                                   OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
	SMember(FName)                                     TimestampBeatInBarParameterName                             OFFSET(getStruct<T>, {0xB4, 4, 0, 0})
	SMember(FName)                                     BarProgressParameterName                                    OFFSET(getStruct<T>, {0xB8, 4, 0, 0})
	SMember(FName)                                     BeatProgressParameterName                                   OFFSET(getStruct<T>, {0xBC, 4, 0, 0})
	SMember(FName)                                     TimeSignatureNumeratorParameterName                         OFFSET(getStruct<T>, {0xC0, 4, 0, 0})
	SMember(FName)                                     TimeSignatureDenominatorParameterName                       OFFSET(getStruct<T>, {0xC4, 4, 0, 0})
	SMember(FName)                                     TempoParameterName                                          OFFSET(getStruct<T>, {0xC8, 4, 0, 0})
	SMember(FMidiSongPos)                              SongPos                                                     OFFSET(getStruct<T>, {0xD0, 64, 0, 0})
	CMember(class UMusicClockComponent*)               MusicClock                                                  OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(class UMaterialParameterCollection*)       MaterialParameterCollection                                 OFFSET(get<T>, {0x148, 8, 0, 0})
	CMember(class UMaterialParameterCollectionInstance*) MaterialParameterCollectionInstance                       OFFSET(get<T>, {0x150, 8, 0, 0})


	/// Functions
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.SetMaterialParameterCollection
	// void SetMaterialParameterCollection(class UMaterialParameterCollection* InMaterialParameterCollection);                  // [0xb7665a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.SetClockFromActor
	// void SetClockFromActor(class AActor* Actor);                                                                             // [0xb7664fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.SetClock
	// void SetClock(class UMusicClockComponent* InClockComponent);                                                             // [0xb766454] Final|Native|Public|BlueprintCallable 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetTimeStamp
	// FMusicTimestamp GetTimeStamp();                                                                                          // [0xb76623c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetTimeSignatureNumerator
	// float GetTimeSignatureNumerator();                                                                                       // [0xb766200] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetTimeSignatureDenominator
	// float GetTimeSignatureDenominator();                                                                                     // [0xb7661c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetTempo
	// float GetTempo();                                                                                                        // [0xb76618c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetSongPos
	// FMidiSongPos GetSongPos();                                                                                               // [0xb76607c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetSecondsIncludingCountIn
	// float GetSecondsIncludingCountIn();                                                                                      // [0xb765c90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetSecondsFromBarOne
	// float GetSecondsFromBarOne();                                                                                            // [0xb765bc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetMaterialParameterCollection
	// class UMaterialParameterCollection* GetMaterialParameterCollection();                                                    // [0xb765910] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetClockNoMutex
	// class UMusicClockComponent* GetClockNoMutex();                                                                           // [0xb765074] Final|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetClock
	// class UMusicClockComponent* GetClock();                                                                                  // [0xb765020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetBeatsIncludingCountIn
	// float GetBeatsIncludingCountIn();                                                                                        // [0xb764fe8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetBeatProgress
	// float GetBeatProgress();                                                                                                 // [0xb764f08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetBarsIncludingCountIn
	// float GetBarsIncludingCountIn();                                                                                         // [0xb764e40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HarmonixMetasound.MusicTempometerComponent.GetBarProgress
	// float GetBarProgress();                                                                                                  // [0xb764d60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/HarmonixMetasound.MidiEventInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FMidiEventInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FMusicTimestamp)                           Timestamp                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   TrackIndex                                                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/HarmonixMetasound.StepSequenceCell
/// Size: 0x0002 (0x000000 - 0x000002)
class FStepSequenceCell : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bContinuation                                               OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/HarmonixMetasound.StepSequenceRow
/// Size: 0x0018 (0x000000 - 0x000018)
class FStepSequenceRow : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FStepSequenceCell>)                 Cells                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bRowEnabled                                                 OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/HarmonixMetasound.StepSequenceNote
/// Size: 0x0008 (0x000000 - 0x000008)
class FStepSequenceNote : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   NoteNumber                                                  OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Velocity                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/HarmonixMetasound.StepSequencePage
/// Size: 0x0010 (0x000000 - 0x000010)
class FStepSequencePage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FStepSequenceRow>)                  Rows                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/HarmonixMetasound.StepSequenceTable
/// Size: 0x0028 (0x000000 - 0x000028)
class FStepSequenceTable : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FStepSequencePage>)                 Pages                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FStepSequenceNote>)                 Notes                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   StepSkipIndex                                               OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/HarmonixMetasound.MusicLoopConfiguration
/// Size: 0x0014 (0x000000 - 0x000014)
class FMusicLoopConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(bool)                                      Enabled                                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FMusicTimestamp)                           RegionStart                                                 OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	SMember(FMusicTimestamp)                           RegionEnd                                                   OFFSET(getStruct<T>, {0xC, 8, 0, 0})
};

/// Struct /Script/HarmonixMetasound.MusicSeekTarget
/// Size: 0x0010 (0x000000 - 0x000010)
class FMusicSeekTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(ESeekPointType)                            Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FMusicTimestamp)                           BarBeat                                                     OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	DMember(float)                                     Ms                                                          OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/HarmonixMetasound.MusicSeekRequest
/// Size: 0x0014 (0x000000 - 0x000014)
class FMusicSeekRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(bool)                                      EmmediateIfPastFromPoint                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FMusicTimestamp)                           FromPoint                                                   OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	SMember(FMusicTimestamp)                           ToPoint                                                     OFFSET(getStruct<T>, {0xC, 8, 0, 0})
};

/// Struct /Script/HarmonixMetasound.HarmonixPeakTamerSettings
/// Size: 0x0014 (0x000000 - 0x000014)
class FHarmonixPeakTamerSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     PeakAttackTimeSeconds                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     PeakReleaseTimeSeconds                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bEnableValueSmoothing                                       OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     ValueAttackTimeSeconds                                      OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     ValueReleaseTimeSeconds                                     OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Enum /Script/HarmonixMetasound.EMusicClockState
/// Size: 0x03
enum class EMusicClockState : uint8_t
{
	EMusicClockState__Stopped                                                        = 0,
	EMusicClockState__Paused                                                         = 1,
	EMusicClockState__Running                                                        = 2
};

/// Enum /Script/HarmonixMetasound.EStdMidiControllerID
/// Size: 0x129
enum class EStdMidiControllerID : uint8_t
{
	EStdMidiControllerID__BankSelection                                              = 0,
	EStdMidiControllerID__ModWheel                                                   = 1,
	EStdMidiControllerID__Breath                                                     = 2,
	EStdMidiControllerID__Undefined3                                                 = 3,
	EStdMidiControllerID__FootController                                             = 4,
	EStdMidiControllerID__PortamentoTime                                             = 5,
	EStdMidiControllerID__DataCoarse                                                 = 6,
	EStdMidiControllerID__Volume                                                     = 7,
	EStdMidiControllerID__Balance                                                    = 8,
	EStdMidiControllerID__Undefined9                                                 = 9,
	EStdMidiControllerID__Pan                                                        = 10,
	EStdMidiControllerID__Expression                                                 = 11,
	EStdMidiControllerID__EffectControl1                                             = 12,
	EStdMidiControllerID__EffectControl2                                             = 13,
	EStdMidiControllerID__Undefined14                                                = 14,
	EStdMidiControllerID__Undefined15                                                = 15,
	EStdMidiControllerID__GeneralPurposeController1                                  = 16,
	EStdMidiControllerID__GeneralPurposeController2                                  = 17,
	EStdMidiControllerID__GeneralPurposeController3                                  = 18,
	EStdMidiControllerID__GeneralPurposeController4                                  = 19,
	EStdMidiControllerID__Undefined20                                                = 20,
	EStdMidiControllerID__Undefined21                                                = 21,
	EStdMidiControllerID__Undefined22                                                = 22,
	EStdMidiControllerID__Undefined23                                                = 23,
	EStdMidiControllerID__Undefined24                                                = 24,
	EStdMidiControllerID__Undefined25                                                = 25,
	EStdMidiControllerID__Undefined26                                                = 26,
	EStdMidiControllerID__Undefined27                                                = 27,
	EStdMidiControllerID__Undefined28                                                = 28,
	EStdMidiControllerID__Undefined29                                                = 29,
	EStdMidiControllerID__Undefined30                                                = 30,
	EStdMidiControllerID__Undefined31                                                = 31,
	EStdMidiControllerID__LSBControl0                                                = 32,
	EStdMidiControllerID__LSBControl1                                                = 33,
	EStdMidiControllerID__LSBControl2                                                = 34,
	EStdMidiControllerID__LSBControl3                                                = 35,
	EStdMidiControllerID__LSBControl4                                                = 36,
	EStdMidiControllerID__LSBControl5                                                = 37,
	EStdMidiControllerID__LSBControl6                                                = 38,
	EStdMidiControllerID__LSBControl7                                                = 39,
	EStdMidiControllerID__LSBControl8                                                = 40,
	EStdMidiControllerID__LSBControl9                                                = 41,
	EStdMidiControllerID__LSBControl10                                               = 42,
	EStdMidiControllerID__LSBControl11                                               = 43,
	EStdMidiControllerID__LSBControl12                                               = 44,
	EStdMidiControllerID__LSBControl13                                               = 45,
	EStdMidiControllerID__LSBControl14                                               = 46,
	EStdMidiControllerID__LSBControl15                                               = 47,
	EStdMidiControllerID__LSBControl16                                               = 48,
	EStdMidiControllerID__LSBControl17                                               = 49,
	EStdMidiControllerID__LSBControl18                                               = 50,
	EStdMidiControllerID__LSBControl19                                               = 51,
	EStdMidiControllerID__LSBControl20                                               = 52,
	EStdMidiControllerID__LSBControl21                                               = 53,
	EStdMidiControllerID__LSBControl22                                               = 54,
	EStdMidiControllerID__LSBControl23                                               = 55,
	EStdMidiControllerID__LSBControl24                                               = 56,
	EStdMidiControllerID__LSBControl25                                               = 57,
	EStdMidiControllerID__LSBControl26                                               = 58,
	EStdMidiControllerID__LSBControl27                                               = 59,
	EStdMidiControllerID__LSBControl28                                               = 60,
	EStdMidiControllerID__LSBControl29                                               = 61,
	EStdMidiControllerID__LSBControl30                                               = 62,
	EStdMidiControllerID__LSBControl31                                               = 63,
	EStdMidiControllerID__Hold                                                       = 64,
	EStdMidiControllerID__PortamentoSwitch                                           = 65,
	EStdMidiControllerID__Sustenuto                                                  = 66,
	EStdMidiControllerID__SoftPedal                                                  = 67,
	EStdMidiControllerID__Legato                                                     = 68,
	EStdMidiControllerID__Hold2                                                      = 69,
	EStdMidiControllerID__SoundController1                                           = 70,
	EStdMidiControllerID__SoundController2                                           = 71,
	EStdMidiControllerID__SoundController3                                           = 72,
	EStdMidiControllerID__SoundController4                                           = 73,
	EStdMidiControllerID__SoundController5                                           = 74,
	EStdMidiControllerID__SoundController6                                           = 75,
	EStdMidiControllerID__SoundController7                                           = 76,
	EStdMidiControllerID__SoundController8                                           = 77,
	EStdMidiControllerID__SoundController9                                           = 78,
	EStdMidiControllerID__SoundController10                                          = 79,
	EStdMidiControllerID__GeneralPurposeController5                                  = 80,
	EStdMidiControllerID__GeneralPurposeController6                                  = 81,
	EStdMidiControllerID__GeneralPurposeController7                                  = 82,
	EStdMidiControllerID__GeneralPurposeController8                                  = 83,
	EStdMidiControllerID__PortamentoControl                                          = 84,
	EStdMidiControllerID__Undefined85                                                = 85,
	EStdMidiControllerID__Undefined86                                                = 86,
	EStdMidiControllerID__Undefined87                                                = 87,
	EStdMidiControllerID__HighResolutionVelocityPrefix                               = 88,
	EStdMidiControllerID__Undefined89                                                = 89,
	EStdMidiControllerID__Undefined90                                                = 90,
	EStdMidiControllerID__Effects1Depth                                              = 91,
	EStdMidiControllerID__Effects2Depth                                              = 92,
	EStdMidiControllerID__Effects3Depth                                              = 93,
	EStdMidiControllerID__Effects4Depth                                              = 94,
	EStdMidiControllerID__Effects5Depth                                              = 95,
	EStdMidiControllerID__DataIncrement                                              = 96,
	EStdMidiControllerID__DataDecrement                                              = 97,
	EStdMidiControllerID__NRPNFine                                                   = 98,
	EStdMidiControllerID__NRPNCoarse                                                 = 99,
	EStdMidiControllerID__RPNFine                                                    = 100,
	EStdMidiControllerID__RPNCoarse                                                  = 101,
	EStdMidiControllerID__Undefined102                                               = 102,
	EStdMidiControllerID__Undefined103                                               = 103,
	EStdMidiControllerID__Undefined104                                               = 104,
	EStdMidiControllerID__Undefined105                                               = 105,
	EStdMidiControllerID__Undefined106                                               = 106,
	EStdMidiControllerID__Undefined107                                               = 107,
	EStdMidiControllerID__Undefined108                                               = 108,
	EStdMidiControllerID__Undefined109                                               = 109,
	EStdMidiControllerID__Undefined110                                               = 110,
	EStdMidiControllerID__Undefined111                                               = 111,
	EStdMidiControllerID__Undefined112                                               = 112,
	EStdMidiControllerID__Undefined113                                               = 113,
	EStdMidiControllerID__Undefined114                                               = 114,
	EStdMidiControllerID__Undefined115                                               = 115,
	EStdMidiControllerID__Undefined116                                               = 116,
	EStdMidiControllerID__Undefined117                                               = 117,
	EStdMidiControllerID__Undefined118                                               = 118,
	EStdMidiControllerID__Undefined119                                               = 119,
	EStdMidiControllerID__AllSoundOff                                                = 120,
	EStdMidiControllerID__Reset                                                      = 121,
	EStdMidiControllerID__LocalKeyboardSwitch                                        = 122,
	EStdMidiControllerID__AllNotesOff                                                = 123,
	EStdMidiControllerID__OmniModeOff                                                = 124,
	EStdMidiControllerID__OmniModeOn                                                 = 125,
	EStdMidiControllerID__MonoMode                                                   = 126,
	EStdMidiControllerID__PolyMode                                                   = 127,
	EStdMidiControllerID__NUM                                                        = 128
};

/// Enum /Script/HarmonixMetasound.ESeekPointType
/// Size: 0x02
enum class ESeekPointType : uint8_t
{
	ESeekPointType__BarBeat                                                          = 0,
	ESeekPointType__Millisecond                                                      = 1
};

/// Enum /Script/HarmonixMetasound.EMusicClockDriveMethod
/// Size: 0x02
enum class EMusicClockDriveMethod : uint8_t
{
	EMusicClockDriveMethod__WallClock                                                = 0,
	EMusicClockDriveMethod__MetaSound                                                = 1
};

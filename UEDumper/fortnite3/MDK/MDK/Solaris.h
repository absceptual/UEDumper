
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: VerseNative

/// Class /Script/Solaris.VerseStruct
/// Size: 0x0050 (0x0000C0 - 0x000110)
class UVerseStruct : public UScriptStruct
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	DMember(uint32_t)                                  VerseClassFlags                                             OFFSET(get<uint32_t>, {0xC0, 4, 0, 0})
	CMember(class UFunction*)                          InitFunction                                                OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(class UVerseClass*)                        ModuleClass                                                 OFFSET(get<T>, {0xD0, 8, 0, 0})
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	CMember(class UFunction*)                          FactoryFunction                                             OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(class UFunction*)                          OverrideFactoryFunction                                     OFFSET(get<T>, {0xF0, 8, 0, 0})
	SMember(FVerseEffectSet)                           ConstructorEffects                                          OFFSET(getStruct<T>, {0xF8, 4, 0, 0})
	SMember(FString)                                   PackageRelativeVerseScope                                   OFFSET(getStruct<T>, {0x100, 16, 0, 0})
};

/// Class /Script/Solaris.SolarisWeakMapLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisWeakMapLibrary : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Solaris.SolarisWeakMapLibrary.Type
	// void Type(class UClass* KeyType, class UClass* ValueType);                                                               // [0x7819a54] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisWeakMapLibrary.RefCall
	// void RefCall(TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key);                                        // [0x7818098] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisWeakMapLibrary.PersistentVarRefCall
	// void PersistentVarRefCall(FString Path, TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key);             // [0x7817784] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisWeakMapLibrary.PersistentVarCall
	// void PersistentVarCall(TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key);                              // [0x78175a4] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisWeakMapLibrary.FitsInPlayerMap
	// void FitsInPlayerMap(FGenericValueType Value);                                                                           // [0x78134fc] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisWeakMapLibrary.CompletelyAssignedRefCall
	// void CompletelyAssignedRefCall(TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key);                      // [0x781232c] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisWeakMapLibrary.CompletelyAssignedPersistentVarRefCall
	// void CompletelyAssignedPersistentVarRefCall(FString Path, TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key); // [0x7812108] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisWeakMapLibrary.Call
	// void Call(TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType Key);                                           // [0x7811bb4] Final|Native|Static|Public|HasOutParms 
};

/// Class /Script/Solaris.VerseAssetsConfig
/// Size: 0x0010 (0x000028 - 0x000038)
class UVerseAssetsConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FVerseAssetConfig>)                 AssetConfigs                                                OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/Solaris.VerseDigest
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UVerseDigest : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<char>)                              DigestCode                                                  OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<char>)                              ManifestCode                                                OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FManifestDependency>)               DependencyPackages                                          OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TSet<FSoftObjectPath>)                     ClassImports                                                OFFSET(get<T>, {0x58, 80, 0, 0})
	SMember(FString)                                   ProjectName                                                 OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	CMember(EVerseDigestVariant)                       Variant                                                     OFFSET(get<T>, {0xB8, 1, 0, 0})
	DMember(uint32_t)                                  VerseVersion                                                OFFSET(get<uint32_t>, {0xBC, 4, 0, 0})
};

/// Class /Script/Solaris.VerseEnum
/// Size: 0x0008 (0x000068 - 0x000070)
class UVerseEnum : public UEnum
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(EVerseEnumFlags)                           VerseEnumFlags                                              OFFSET(get<T>, {0x68, 4, 0, 0})
};

/// Class /Script/Solaris.SolarisArrayLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisArrayLibrary : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Solaris.SolarisArrayLibrary.UnsafeCall
	// void UnsafeCall(TArray<FGenericElementType>& Array, int64_t Index);                                                      // [0x7800a14] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.RefCall
	// void RefCall(TArray<FGenericElementType>& Array, int64_t Index);                                                         // [0x780089c] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.Move
	// void Move(TArray<FGenericElementType>& Target, TArray<FGenericElementType>& Source);                                     // [0x7800748] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.Length
	// int64_t Length(TArray<FGenericElementType>& Array);                                                                      // [0x7800678] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.Empty
	// void Empty(TArray<FGenericElementType>& Array);                                                                          // [0x78005ec] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.ConcatEquals
	// TArray<FGenericElementType> ConcatEquals(TArray<FGenericElementType>& LHS, TArray<FGenericElementType>& RHS);            // [0x7800408] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.Concat
	// TArray<FGenericElementType> Concat(TArray<FGenericElementType>& LHS, TArray<FGenericElementType>& RHS);                  // [0x78002f8] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.Call
	// void Call(TArray<FGenericElementType>& Array, int64_t Index);                                                            // [0x7800070] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisArrayLibrary.Add
	// int64_t Add(TArray<FGenericElementType>& Array, FGenericElementType& new_item);                                          // [0x77ffdf8] Final|Native|Static|Public|HasOutParms 
};

/// Class /Script/Solaris.SolarisCoroutineLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisCoroutineLibrary : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Solaris.SolarisCoroutineLibrary.TaskMake
	// class UObject* TaskMake(class UClass* Type, class UObject* Caller, int64_t CallerResumeState, int64_t CallerCancelState, class UObject* OwnerInstance); // [0x7819888] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisCoroutineLibrary.TaskGetState
	// int64_t TaskGetState(class UObject* Task);                                                                               // [0x7819804] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisCoroutineLibrary.TaskGetReturnProperty
	// void TaskGetReturnProperty(class UObject* Task);                                                                         // [0x7818c84] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisCoroutineLibrary.TaskComplete
	// void TaskComplete(class UObject* Task);                                                                                  // [0x7818bf8] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisCoroutineLibrary.TaskCancel
	// void TaskCancel(class UObject* Task);                                                                                    // [0x7818b88] Final|Native|Static|Public 
};

/// Class /Script/Solaris.GameFeature_SolarisObserver
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameFeature_SolarisObserver : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/Solaris.SolarisMapLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMapLibrary : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Solaris.SolarisMapLibrary.Move
	// void Move(TMap<FGenericKeyType, FGenericValueType>& Dest, TMap<FGenericKeyType, FGenericValueType>& Src);                // [0x7816840] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMapLibrary.Length
	// int64_t Length(TMap<FGenericKeyType, FGenericValueType>& Map);                                                           // [0x781582c] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMapLibrary.InitMap
	// void InitMap(TMap<FGenericKeyType, FGenericValueType>& Map);                                                             // [0x7814dd4] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMapLibrary.GetValueByIndex
	// FGenericValueType GetValueByIndex(TMap<FGenericKeyType, FGenericValueType>& Map, int64_t Index);                         // [0x7814540] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMapLibrary.GetNextValidIndex
	// int64_t GetNextValidIndex(TMap<FGenericKeyType, FGenericValueType>& Map, int64_t InitialIndex);                          // [0x7814104] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMapLibrary.GetKeyByIndex
	// FGenericKeyType GetKeyByIndex(TMap<FGenericKeyType, FGenericValueType>& Map, int64_t Index);                             // [0x7813dc0] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMapLibrary.Concat
	// TMap<FGenericKeyType, FGenericValueType> Concat(TMap<FGenericKeyType, FGenericValueType>& LHS, TMap<FGenericKeyType, FGenericValueType>& RHS); // [0x78123cc] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMapLibrary.Add
	// void Add(TMap<FGenericKeyType, FGenericValueType>& Map, FGenericKeyType& Key, FGenericValueType& Value);                 // [0x781079c] Final|Native|Static|Public|HasOutParms 
};

/// Class /Script/Solaris.SolarisMathLibrary_Bool
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_Bool : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Solaris.SolarisMathLibrary_Bool.Query
	// void Query();                                                                                                            // [0x78179a8] Final|Native|Static|Public 
};

/// Class /Script/Solaris.SolarisMathLibrary_Int
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_Int : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Solaris.SolarisMathLibrary_Int.UncheckedConvertI32I64
	// int32_t UncheckedConvertI32I64(int64_t RHS);                                                                             // [0x6b5c324] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.SubtractEquals
	// void SubtractEquals(int64_t& LHS, int64_t RHS);                                                                          // [0x7818994] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_Int.Subtract
	// void Subtract(int64_t LHS, int64_t RHS);                                                                                 // [0x7818754] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.PredicateNotEqual
	// bool PredicateNotEqual(int64_t LHS, int64_t RHS);                                                                        // [0x6ba1c80] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.PredicateLessEqual
	// bool PredicateLessEqual(int64_t LHS, int64_t RHS);                                                                       // [0x6b8d5d0] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.PredicateLess
	// bool PredicateLess(int64_t LHS, int64_t RHS);                                                                            // [0x6b8d910] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.PredicateGreaterEqual
	// bool PredicateGreaterEqual(int64_t LHS, int64_t RHS);                                                                    // [0x6b805bc] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.PredicateGreater
	// bool PredicateGreater(int64_t LHS, int64_t RHS);                                                                         // [0x6b808fc] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.PredicateEqual
	// bool PredicateEqual(int64_t LHS, int64_t RHS);                                                                           // [0x6b6e4c8] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.Negate
	// void Negate(int64_t Value);                                                                                              // [0x7817410] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.MultiplyEquals
	// void MultiplyEquals(int64_t& LHS, int64_t RHS);                                                                          // [0x7816ffc] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_Int.Multiply
	// void Multiply(int64_t LHS, int64_t RHS);                                                                                 // [0x7816dbc] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.LessEqual
	// void LessEqual(int64_t LHS, int64_t RHS);                                                                                // [0x7815e04] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.Less
	// void Less(int64_t LHS, int64_t RHS);                                                                                     // [0x7815bfc] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.GreaterEqual
	// void GreaterEqual(int64_t LHS, int64_t RHS);                                                                             // [0x7814bb4] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.Greater
	// void Greater(int64_t LHS, int64_t RHS);                                                                                  // [0x78149b0] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.Divide
	// void Divide(int64_t LHS, int64_t RHS);                                                                                   // [0x78132bc] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.CheckConstrainedInt
	// void CheckConstrainedInt(int64_t Min, int64_t Max, int64_t Value);                                                       // [0x7811fd0] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.AddEquals
	// void AddEquals(int64_t& LHS, int64_t RHS);                                                                               // [0x7811280] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_Int.Add
	// void Add(int64_t LHS, int64_t RHS);                                                                                      // [0x7810dec] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Int.abs
	// void abs(int64_t Value);                                                                                                 // [0x78106c8] Final|Native|Static|Public 
};

/// Class /Script/Solaris.SolarisMathLibrary_Rational
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_Rational : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Solaris.SolarisMathLibrary_Rational.floor
	// void floor(FVerseRational Val);                                                                                          // [0x7813888] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Rational.ceil
	// void ceil(FVerseRational Val);                                                                                           // [0x7811d58] Final|Native|Static|Public 
};

/// Class /Script/Solaris.SolarisMathLibrary_Float
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_Float : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Solaris.SolarisMathLibrary_Float.SubtractEquals
	// void SubtractEquals(double& LHS, double RHS);                                                                            // [0x7818868] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_Float.Subtract
	// double Subtract(double LHS, double RHS);                                                                                 // [0x7818680] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.Negate
	// double Negate(double Value);                                                                                             // [0x7817388] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.MultiplyIntFloat
	// double MultiplyIntFloat(int64_t LHS, double RHS);                                                                        // [0x78172bc] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.MultiplyFloatInt
	// double MultiplyFloatInt(double LHS, int64_t RHS);                                                                        // [0x78171f0] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.MultiplyEquals
	// void MultiplyEquals(double& LHS, double RHS);                                                                            // [0x7816ed0] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_Float.Multiply
	// double Multiply(double LHS, double RHS);                                                                                 // [0x7816ce8] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.LessEqual
	// void LessEqual(double LHS, double RHS);                                                                                  // [0x7815cec] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.Less
	// void Less(double LHS, double RHS);                                                                                       // [0x7815ae8] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.GreaterEqual
	// void GreaterEqual(double LHS, double RHS);                                                                               // [0x7814aa0] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.Greater
	// void Greater(double LHS, double RHS);                                                                                    // [0x781489c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.DivideEquals
	// void DivideEquals(double& LHS, double RHS);                                                                              // [0x78133d0] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_Float.Divide
	// double Divide(double LHS, double RHS);                                                                                   // [0x78131e8] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.CheckConstrainedFloat
	// void CheckConstrainedFloat(double Min, double Max, double Value);                                                        // [0x7811e8c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.AddEquals
	// void AddEquals(double& LHS, double RHS);                                                                                 // [0x7811154] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_Float.Add
	// double Add(double LHS, double RHS);                                                                                      // [0x7810d18] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Float.abs
	// double abs(double Value);                                                                                                // [0x7810640] Final|Native|Static|Public 
};

/// Class /Script/Solaris.SolarisMathLibrary_String
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_String : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Solaris.SolarisMathLibrary_String.UncheckedCall
	// void UncheckedCall(int32_t& String, int64_t Index);                                                                      // [0x7819c40] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_String.RefCall
	// void RefCall(int32_t& String, int64_t Index);                                                                            // [0x7817df4] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_String.Move
	// void Move(int32_t& Destination, int32_t& Source);                                                                        // [0x7816ab4] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_String.MakeLiteral
	// int32_t MakeLiteral();                                                                                                   // [0x78163f4] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_String.Make
	// void Make();                                                                                                             // [0x7816064] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_String.Length
	// int64_t Length(int32_t& Array);                                                                                          // [0x78159a8] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_String.ConcatEquals
	// int32_t ConcatEquals(int32_t& LHS, int32_t& RHS);                                                                        // [0x7812d68] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_String.Concat
	// int32_t Concat(int32_t& LHS, int32_t& RHS);                                                                              // [0x7812af0] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_String.Call
	// void Call(int32_t& String, int64_t Index);                                                                               // [0x78117e8] Final|Native|Static|Public|HasOutParms 
	// Function /Script/Solaris.SolarisMathLibrary_String.Add
	// void Add(int32_t& String, int8_t Character);                                                                             // [0x7810f04] Final|Native|Static|Public|HasOutParms 
};

/// Class /Script/Solaris.SolarisMathLibrary_Option
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisMathLibrary_Option : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Solaris.SolarisMathLibrary_Option.Query
	// void Query();                                                                                                            // [0x7817a44] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisMathLibrary_Option.Make
	// void Make();                                                                                                             // [0x7815ef4] Final|Native|Static|Public 
};

/// Class /Script/Solaris.SolarisGameFeaturePluginObserver
/// Size: 0x0008 (0x000028 - 0x000030)
class USolarisGameFeaturePluginObserver : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/Solaris.SolarisGameSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class USolarisGameSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FString>)                           Blacklist                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(int32_t)                                   MaxAllowedSize                                              OFFSET(get<int32_t>, {0x38, 4, 0, 0})
};

/// Class /Script/Solaris.SolarisUtilLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USolarisUtilLibrary : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Solaris.SolarisUtilLibrary.WriteClassVar
	// void WriteClassVar();                                                                                                    // [0x7819f24] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.Validate
	// int64_t Validate(int64_t Property, int64_t Value);                                                                       // [0x7819e7c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.ReplaceOptionValue
	// int64_t ReplaceOptionValue(int64_t ResultProperty, int64_t Option, int64_t Value);                                       // [0x78181a0] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.ReferenceIsValid
	// bool ReferenceIsValid(int64_t Reference);                                                                                // [0x7818138] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.ReadClassVar
	// void ReadClassVar();                                                                                                     // [0x7817b70] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.ObjectHasNoFlags
	// bool ObjectHasNoFlags(class UObject* Object, int32_t Flags);                                                             // [0x78174e0] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.MakeUnsetOption
	// int64_t MakeUnsetOption();                                                                                               // [0x7816794] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.MakeOptionFromValue
	// bool MakeOptionFromValue(class UObject* Property, int64_t Value);                                                        // [0x781659c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.IsOptionSet
	// bool IsOptionSet(int64_t Option);                                                                                        // [0x78156d0] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.IsNonNullObject
	// bool IsNonNullObject(class UObject* Object);                                                                             // [0x781565c] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.InstantiateObject
	// void InstantiateObject(class UClass* Class, int64_t InstancingGraph);                                                    // [0x7815324] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.InstanceFunction
	// void InstanceFunction(class UObject* Object, FName MethodName);                                                          // [0x7815180] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.HasInterface
	// bool HasInterface(class UObject* Object, class UVerseClass* InterfaceClass);                                             // [0x7814ca4] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.GetOptionValue
	// int64_t GetOptionValue(int64_t Option);                                                                                  // [0x78143b0] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.GetFunctionForInterfaceMethod
	// void GetFunctionForInterfaceMethod(class UObject* Object, FName MethodName);                                             // [0x78139dc] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.GetCurrentlyInstantiatedObject
	// class UObject* GetCurrentlyInstantiatedObject();                                                                         // [0x78139b8] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.Dereference
	// int64_t Dereference(int64_t Reference);                                                                                  // [0x7813064] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.CallFunction
	// void CallFunction();                                                                                                     // [0x7811d04] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.CallFinalFunctionWithContext
	// void CallFinalFunctionWithContext();                                                                                     // [0x7811c50] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.Addressof
	// int64_t Addressof(int64_t Value);                                                                                        // [0x78116a4] Final|Native|Static|Public 
	// Function /Script/Solaris.SolarisUtilLibrary.AddPropertyToSubobjectExclusionList
	// void AddPropertyToSubobjectExclusionList(int64_t InstancingGraph, int64_t Property);                                     // [0x7811474] Final|Native|Static|Public 
};

/// Class /Script/Solaris.VerseClass
/// Size: 0x01A0 (0x000200 - 0x0003A0)
class UVerseClass : public UVerseClassBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	DMember(uint32_t)                                  SolClassFlags                                               OFFSET(get<uint32_t>, {0x200, 4, 0, 0})
	CMember(TArray<class UVerseClass*>)                TaskClasses                                                 OFFSET(get<T>, {0x208, 16, 0, 0})
	CMember(TSet<UVerseClass*>)                        InterfaceClasses                                            OFFSET(get<T>, {0x218, 80, 0, 0})
	CMember(TMap<FName, InterfaceMethodFunctionProperties>) InterfaceMethodFunctionProperties                      OFFSET(get<T>, {0x268, 80, 0, 0})
	CMember(class UFunction*)                          InitInstanceFunction                                        OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(TArray<FVersePersistentVar>)               PersistentVars                                              OFFSET(get<T>, {0x2C0, 16, 0, 0})
	CMember(TArray<FVerseSessionVar>)                  SessionVars                                                 OFFSET(get<T>, {0x2D0, 16, 0, 0})
	CMember(TMap<FName, FVerseClassVarAccessors>)      VarAccessors                                                OFFSET(get<T>, {0x2E0, 80, 0, 0})
	SMember(FVerseEffectSet)                           ConstructorEffects                                          OFFSET(getStruct<T>, {0x330, 4, 0, 0})
	SMember(FString)                                   PackageRelativeVerseScope                                   OFFSET(getStruct<T>, {0x338, 16, 0, 0})
	CMember(TMap<FName, FName>)                        MangledToDisplayNameMap                                     OFFSET(get<T>, {0x348, 80, 0, 0})
};

/// Class /Script/Solaris.VerseDebugData
/// Size: 0x0010 (0x000028 - 0x000038)
class UVerseDebugData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Solaris.VerseDynamicallyTypedValueLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseDynamicallyTypedValueLibrary : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.NotEqual
	// void NotEqual(int32_t Left, int32_t Right);                                                                              // [0x781b1ec] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeTuple
	// void MakeRuntimeTypeTuple(TArray<int32_t> ValueType);                                                                    // [0x781b014] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeStruct
	// void MakeRuntimeTypeStruct(class UStruct* Struct);                                                                       // [0x781af94] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeString
	// void MakeRuntimeTypeString();                                                                                            // [0x781af70] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeOption
	// void MakeRuntimeTypeOption(int32_t ValueType);                                                                           // [0x781ae28] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeObject
	// void MakeRuntimeTypeObject();                                                                                            // [0x781ae04] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeMap
	// void MakeRuntimeTypeMap(int32_t KeyType, int32_t ValueType);                                                             // [0x781abc8] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeLogic
	// void MakeRuntimeTypeLogic();                                                                                             // [0x781aba4] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeInt64
	// void MakeRuntimeTypeInt64();                                                                                             // [0x781ab80] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeFunction
	// void MakeRuntimeTypeFunction();                                                                                          // [0x781ab5c] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeFloat
	// void MakeRuntimeTypeFloat();                                                                                             // [0x781ab38] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeEnum
	// void MakeRuntimeTypeEnum(FName Name);                                                                                    // [0x781aab8] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeDynamic
	// void MakeRuntimeTypeDynamic();                                                                                           // [0x781aa94] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeClass
	// void MakeRuntimeTypeClass();                                                                                             // [0x781aa70] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeChar8
	// void MakeRuntimeTypeChar8();                                                                                             // [0x781aa4c] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeChar32
	// void MakeRuntimeTypeChar32();                                                                                            // [0x781aa28] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeArray
	// void MakeRuntimeTypeArray(int32_t ElementType);                                                                          // [0x781a8e0] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.Equal
	// void Equal(int32_t Left, int32_t Right);                                                                                 // [0x781a6a8] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.ConvertToDynamicallyTypedValue
	// void ConvertToDynamicallyTypedValue(int32_t RuntimeType, int32_t Value);                                                 // [0x781a478] Final|Native|Static|Public 
	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.ConvertFromDynamicallyTypedValue
	// void ConvertFromDynamicallyTypedValue(int32_t RuntimeType, int32_t Value);                                               // [0x781a2c0] Final|Native|Static|Public 
};

/// Struct /Script/Solaris.GenericKeyType
/// Size: 0x0001 (0x000000 - 0x000001)
class FGenericKeyType : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Solaris.GenericValueType
/// Size: 0x0001 (0x000000 - 0x000001)
class FGenericValueType : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Solaris.VerseAssetConfig
/// Size: 0x0018 (0x000000 - 0x000018)
class FVerseAssetConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   AssetType                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(uint32_t)                                  PublicVersion                                               OFFSET(get<uint32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/Solaris.ManifestDependency
/// Size: 0x0010 (0x000000 - 0x000010)
class FManifestDependency : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<char>)                              Dependency                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Solaris.VersePackageContainerSettings
/// Size: 0x0040 (0x000000 - 0x000040)
class FVersePackageContainerSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   VersePath                                                   OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(EVersePackageScope)                        VerseScope                                                  OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(TArray<FString>)                           DependencyPackages                                          OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   VniDestDir                                                  OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/Solaris.VerseSourceCode
/// Size: 0x0010 (0x000000 - 0x000010)
class FVerseSourceCode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<char>)                              Code                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Solaris.VerseSourceFile
/// Size: 0x0020 (0x000000 - 0x000020)
class FVerseSourceFile : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Filename                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FVerseSourceCode>)                  CodeChunks                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Solaris.VersePackageContainer
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FVersePackageContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   DirPath                                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(EVersePackageType)                         PackageType                                                 OFFSET(get<T>, {0x20, 1, 0, 0})
	DMember(bool)                                      bEnableVerseAssetReflection                                 OFFSET(get<bool>, {0x21, 1, 0, 0})
	SMember(FVersePackageContainerSettings)            Settings                                                    OFFSET(getStruct<T>, {0x28, 64, 0, 0})
	CMember(TArray<FVerseSourceFile>)                  SourceFiles                                                 OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<char>)                              AssetDigest                                                 OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FString>)                           AssetDependencies                                           OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/Solaris.VerseProjectContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FVerseProjectContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FVersePackageContainer>)            Packages                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Solaris.GenericElementType
/// Size: 0x0001 (0x000000 - 0x000001)
class FGenericElementType : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Solaris.VersePersistentVar
/// Size: 0x0030 (0x000000 - 0x000030)
class FVersePersistentVar : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Path                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Solaris.VerseSessionVar
/// Size: 0x0020 (0x000000 - 0x000020)
class FVerseSessionVar : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/Solaris.VerseClassVarAccessors
/// Size: 0x0020 (0x000000 - 0x000020)
class FVerseClassVarAccessors : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bGetterIsInstanceMember                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(class UFunction*)                          Getter                                                      OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bSetterIsInstanceMember                                     OFFSET(get<bool>, {0x10, 1, 0, 0})
	CMember(class UFunction*)                          Setter                                                      OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/Solaris.VerseEffectSet
/// Size: 0x0004 (0x000000 - 0x000004)
class FVerseEffectSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(bool)                                      suspends                                                    OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      decides                                                     OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      diverges                                                    OFFSET(get<bool>, {0x0, 1, 1, 2})
	DMember(bool)                                      varies                                                      OFFSET(get<bool>, {0x0, 1, 1, 3})
	DMember(bool)                                      reads                                                       OFFSET(get<bool>, {0x0, 1, 1, 4})
	DMember(bool)                                      writes                                                      OFFSET(get<bool>, {0x0, 1, 1, 5})
	DMember(bool)                                      allocates                                                   OFFSET(get<bool>, {0x0, 1, 1, 6})
	DMember(bool)                                      no_rollback                                                 OFFSET(get<bool>, {0x0, 1, 1, 7})
};

/// Enum /Script/Solaris.EVerseDigestVariant
/// Size: 0x03
enum class EVerseDigestVariant : uint8_t
{
	EVerseDigestVariant__PublicAndEpicInternal                                       = 0,
	EVerseDigestVariant__PublicOnly                                                  = 1,
	EVerseDigestVariant__EVerseDigestVariant_MAX                                     = 2
};

/// Enum /Script/Solaris.EVerseEnumFlags
/// Size: 0x03
enum class EVerseEnumFlags : uint32_t
{
	EVerseEnumFlags__None                                                            = 0,
	EVerseEnumFlags__NativeBound                                                     = 1,
	EVerseEnumFlags__EVerseEnumFlags_MAX                                             = 2
};

/// Enum /Script/Solaris.EVersePackageScope
/// Size: 0x05
enum class EVersePackageScope : uint8_t
{
	EVersePackageScope__PublicAPI                                                    = 0,
	EVersePackageScope__InternalAPI                                                  = 1,
	EVersePackageScope__PublicUser                                                   = 2,
	EVersePackageScope__InternalUser                                                 = 3,
	EVersePackageScope__EVersePackageScope_MAX                                       = 4
};

/// Enum /Script/Solaris.EVersePackageType
/// Size: 0x05
enum class EVersePackageType : uint8_t
{
	EVersePackageType__VNI                                                           = 0,
	EVersePackageType__Content                                                       = 1,
	EVersePackageType__PublishedContent                                              = 2,
	EVersePackageType__Assets                                                        = 3,
	EVersePackageType__EVersePackageType_MAX                                         = 4
};

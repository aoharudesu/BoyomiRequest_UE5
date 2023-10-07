// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoyomiRequest/Public/BoyomiRequestBPLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoyomiRequestBPLibrary() {}
// Cross Module References
	BOYOMIREQUEST_API UClass* Z_Construct_UClass_UBoyomiRequestBPLibrary();
	BOYOMIREQUEST_API UClass* Z_Construct_UClass_UBoyomiRequestBPLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_BoyomiRequest();
// End Cross Module References
	DEFINE_FUNCTION(UBoyomiRequestBPLibrary::execBoyomiRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Text);
		P_GET_PROPERTY(FIntProperty,Z_Param_Voice);
		P_GET_PROPERTY(FIntProperty,Z_Param_Volume);
		P_GET_PROPERTY(FIntProperty,Z_Param_Speed);
		P_GET_PROPERTY(FIntProperty,Z_Param_Tone);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBoyomiRequestBPLibrary::BoyomiRequest(Z_Param_Text,Z_Param_Voice,Z_Param_Volume,Z_Param_Speed,Z_Param_Tone);
		P_NATIVE_END;
	}
	void UBoyomiRequestBPLibrary::StaticRegisterNativesUBoyomiRequestBPLibrary()
	{
		UClass* Class = UBoyomiRequestBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BoyomiRequest", &UBoyomiRequestBPLibrary::execBoyomiRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBoyomiRequestBPLibrary_BoyomiRequest_Statics
	{
		struct BoyomiRequestBPLibrary_eventBoyomiRequest_Parms
		{
			FString Text;
			int32 Voice;
			int32 Volume;
			int32 Speed;
			int32 Tone;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Voice;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Volume;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Speed;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Tone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoyomiRequestBPLibrary_BoyomiRequest_Statics::NewProp_Text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBoyomiRequestBPLibrary_BoyomiRequest_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BoyomiRequestBPLibrary_eventBoyomiRequest_Parms, Text), METADATA_PARAMS(Z_Construct_UFunction_UBoyomiRequestBPLibrary_BoyomiRequest_Statics::NewProp_Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoyomiRequestBPLibrary_BoyomiRequest_Statics::NewProp_Text_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBoyomiRequestBPLibrary_BoyomiRequest_Statics::NewProp_Voice = { "Voice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BoyomiRequestBPLibrary_eventBoyomiRequest_Parms, Voice), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBoyomiRequestBPLibrary_BoyomiRequest_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BoyomiRequestBPLibrary_eventBoyomiRequest_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBoyomiRequestBPLibrary_BoyomiRequest_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BoyomiRequestBPLibrary_eventBoyomiRequest_Parms, Speed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBoyomiRequestBPLibrary_BoyomiRequest_Statics::NewProp_Tone = { "Tone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BoyomiRequestBPLibrary_eventBoyomiRequest_Parms, Tone), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBoyomiRequestBPLibrary_BoyomiRequest_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoyomiRequestBPLibrary_BoyomiRequest_Statics::NewProp_Text,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoyomiRequestBPLibrary_BoyomiRequest_Statics::NewProp_Voice,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoyomiRequestBPLibrary_BoyomiRequest_Statics::NewProp_Volume,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoyomiRequestBPLibrary_BoyomiRequest_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBoyomiRequestBPLibrary_BoyomiRequest_Statics::NewProp_Tone,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBoyomiRequestBPLibrary_BoyomiRequest_Statics::Function_MetaDataParams[] = {
		{ "Category", "BoyomiRequest" },
		{ "DisplayName", "BoyomiRequest" },
		{ "Keywords", "BoyomiRequest send http" },
		{ "ModuleRelativePath", "Public/BoyomiRequestBPLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBoyomiRequestBPLibrary_BoyomiRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBoyomiRequestBPLibrary, nullptr, "BoyomiRequest", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBoyomiRequestBPLibrary_BoyomiRequest_Statics::BoyomiRequestBPLibrary_eventBoyomiRequest_Parms), Z_Construct_UFunction_UBoyomiRequestBPLibrary_BoyomiRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoyomiRequestBPLibrary_BoyomiRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBoyomiRequestBPLibrary_BoyomiRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBoyomiRequestBPLibrary_BoyomiRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBoyomiRequestBPLibrary_BoyomiRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBoyomiRequestBPLibrary_BoyomiRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoyomiRequestBPLibrary);
	UClass* Z_Construct_UClass_UBoyomiRequestBPLibrary_NoRegister()
	{
		return UBoyomiRequestBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBoyomiRequestBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoyomiRequestBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_BoyomiRequest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBoyomiRequestBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBoyomiRequestBPLibrary_BoyomiRequest, "BoyomiRequest" }, // 3812028234
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoyomiRequestBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BoyomiRequestBPLibrary.h" },
		{ "ModuleRelativePath", "Public/BoyomiRequestBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoyomiRequestBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoyomiRequestBPLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoyomiRequestBPLibrary_Statics::ClassParams = {
		&UBoyomiRequestBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBoyomiRequestBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBoyomiRequestBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoyomiRequestBPLibrary()
	{
		if (!Z_Registration_Info_UClass_UBoyomiRequestBPLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoyomiRequestBPLibrary.OuterSingleton, Z_Construct_UClass_UBoyomiRequestBPLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBoyomiRequestBPLibrary.OuterSingleton;
	}
	template<> BOYOMIREQUEST_API UClass* StaticClass<UBoyomiRequestBPLibrary>()
	{
		return UBoyomiRequestBPLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoyomiRequestBPLibrary);
	UBoyomiRequestBPLibrary::~UBoyomiRequestBPLibrary() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_BoyomiRequest_Source_BoyomiRequest_Public_BoyomiRequestBPLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_BoyomiRequest_Source_BoyomiRequest_Public_BoyomiRequestBPLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBoyomiRequestBPLibrary, UBoyomiRequestBPLibrary::StaticClass, TEXT("UBoyomiRequestBPLibrary"), &Z_Registration_Info_UClass_UBoyomiRequestBPLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoyomiRequestBPLibrary), 3021113585U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_BoyomiRequest_Source_BoyomiRequest_Public_BoyomiRequestBPLibrary_h_100288867(TEXT("/Script/BoyomiRequest"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_BoyomiRequest_Source_BoyomiRequest_Public_BoyomiRequestBPLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_BoyomiRequest_Source_BoyomiRequest_Public_BoyomiRequestBPLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClashMedieval/ClashMedievalGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClashMedievalGameModeBase() {}
// Cross Module References
	CLASHMEDIEVAL_API UClass* Z_Construct_UClass_AClashMedievalGameModeBase_NoRegister();
	CLASHMEDIEVAL_API UClass* Z_Construct_UClass_AClashMedievalGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ClashMedieval();
// End Cross Module References
	void AClashMedievalGameModeBase::StaticRegisterNativesAClashMedievalGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AClashMedievalGameModeBase);
	UClass* Z_Construct_UClass_AClashMedievalGameModeBase_NoRegister()
	{
		return AClashMedievalGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AClashMedievalGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AClashMedievalGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ClashMedieval,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AClashMedievalGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ClashMedievalGameModeBase.h" },
		{ "ModuleRelativePath", "ClashMedievalGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AClashMedievalGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClashMedievalGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AClashMedievalGameModeBase_Statics::ClassParams = {
		&AClashMedievalGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AClashMedievalGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AClashMedievalGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AClashMedievalGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AClashMedievalGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AClashMedievalGameModeBase.OuterSingleton, Z_Construct_UClass_AClashMedievalGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AClashMedievalGameModeBase.OuterSingleton;
	}
	template<> CLASHMEDIEVAL_API UClass* StaticClass<AClashMedievalGameModeBase>()
	{
		return AClashMedievalGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AClashMedievalGameModeBase);
	struct Z_CompiledInDeferFile_FID_ClashMedieval_Source_ClashMedieval_ClashMedievalGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClashMedieval_Source_ClashMedieval_ClashMedievalGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AClashMedievalGameModeBase, AClashMedievalGameModeBase::StaticClass, TEXT("AClashMedievalGameModeBase"), &Z_Registration_Info_UClass_AClashMedievalGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AClashMedievalGameModeBase), 2658280605U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ClashMedieval_Source_ClashMedieval_ClashMedievalGameModeBase_h_3820006844(TEXT("/Script/ClashMedieval"),
		Z_CompiledInDeferFile_FID_ClashMedieval_Source_ClashMedieval_ClashMedievalGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ClashMedieval_Source_ClashMedieval_ClashMedievalGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS

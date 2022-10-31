// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blank_Lab1/Blank_Lab1GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlank_Lab1GameModeBase() {}
// Cross Module References
	BLANK_LAB1_API UClass* Z_Construct_UClass_ABlank_Lab1GameModeBase_NoRegister();
	BLANK_LAB1_API UClass* Z_Construct_UClass_ABlank_Lab1GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Blank_Lab1();
// End Cross Module References
	void ABlank_Lab1GameModeBase::StaticRegisterNativesABlank_Lab1GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABlank_Lab1GameModeBase_NoRegister()
	{
		return ABlank_Lab1GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABlank_Lab1GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlank_Lab1GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Blank_Lab1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlank_Lab1GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Blank_Lab1GameModeBase.h" },
		{ "ModuleRelativePath", "Blank_Lab1GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlank_Lab1GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlank_Lab1GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlank_Lab1GameModeBase_Statics::ClassParams = {
		&ABlank_Lab1GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABlank_Lab1GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABlank_Lab1GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlank_Lab1GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlank_Lab1GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlank_Lab1GameModeBase, 3343974161);
	template<> BLANK_LAB1_API UClass* StaticClass<ABlank_Lab1GameModeBase>()
	{
		return ABlank_Lab1GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlank_Lab1GameModeBase(Z_Construct_UClass_ABlank_Lab1GameModeBase, &ABlank_Lab1GameModeBase::StaticClass, TEXT("/Script/Blank_Lab1"), TEXT("ABlank_Lab1GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlank_Lab1GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

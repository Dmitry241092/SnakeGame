// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/Food.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFood() {}
// Cross Module References
	SNAKEGAME_API UClass* Z_Construct_UClass_AFood_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_AFood();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_SnakeGame();
	SNAKEGAME_API UClass* Z_Construct_UClass_Uinteractable_NoRegister();
// End Cross Module References
	void AFood::StaticRegisterNativesAFood()
	{
	}
	UClass* Z_Construct_UClass_AFood_NoRegister()
	{
		return AFood::StaticClass();
	}
	struct Z_Construct_UClass_AFood_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFood_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFood_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Food.h" },
		{ "ModuleRelativePath", "Food.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFood_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_Uinteractable_NoRegister, (int32)VTABLE_OFFSET(AFood, Iinteractable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFood_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFood>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFood_Statics::ClassParams = {
		&AFood::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFood_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFood_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFood()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFood_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFood, 3938230407);
	template<> SNAKEGAME_API UClass* StaticClass<AFood>()
	{
		return AFood::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFood(Z_Construct_UClass_AFood, &AFood::StaticClass, TEXT("/Script/SnakeGame"), TEXT("AFood"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFood);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

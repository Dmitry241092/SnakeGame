// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnakeGame/interactable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeinteractable() {}
// Cross Module References
	SNAKEGAME_API UClass* Z_Construct_UClass_Uinteractable_NoRegister();
	SNAKEGAME_API UClass* Z_Construct_UClass_Uinteractable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_SnakeGame();
// End Cross Module References
	void Uinteractable::StaticRegisterNativesUinteractable()
	{
	}
	UClass* Z_Construct_UClass_Uinteractable_NoRegister()
	{
		return Uinteractable::StaticClass();
	}
	struct Z_Construct_UClass_Uinteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Uinteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_SnakeGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Uinteractable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "interactable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Uinteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Iinteractable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Uinteractable_Statics::ClassParams = {
		&Uinteractable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_Uinteractable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Uinteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Uinteractable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Uinteractable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Uinteractable, 3415988533);
	template<> SNAKEGAME_API UClass* StaticClass<Uinteractable>()
	{
		return Uinteractable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Uinteractable(Z_Construct_UClass_Uinteractable, &Uinteractable::StaticClass, TEXT("/Script/SnakeGame"), TEXT("Uinteractable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Uinteractable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif

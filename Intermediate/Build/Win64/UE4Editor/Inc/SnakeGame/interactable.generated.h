// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKEGAME_interactable_generated_h
#error "interactable.generated.h already included, missing '#pragma once' in interactable.h"
#endif
#define SNAKEGAME_interactable_generated_h

#define SnakeGame_Source_SnakeGame_interactable_h_13_SPARSE_DATA
#define SnakeGame_Source_SnakeGame_interactable_h_13_RPC_WRAPPERS
#define SnakeGame_Source_SnakeGame_interactable_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define SnakeGame_Source_SnakeGame_interactable_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SNAKEGAME_API Uinteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Uinteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SNAKEGAME_API, Uinteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Uinteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SNAKEGAME_API Uinteractable(Uinteractable&&); \
	SNAKEGAME_API Uinteractable(const Uinteractable&); \
public:


#define SnakeGame_Source_SnakeGame_interactable_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SNAKEGAME_API Uinteractable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SNAKEGAME_API Uinteractable(Uinteractable&&); \
	SNAKEGAME_API Uinteractable(const Uinteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SNAKEGAME_API, Uinteractable); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Uinteractable); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Uinteractable)


#define SnakeGame_Source_SnakeGame_interactable_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUinteractable(); \
	friend struct Z_Construct_UClass_Uinteractable_Statics; \
public: \
	DECLARE_CLASS(Uinteractable, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/SnakeGame"), SNAKEGAME_API) \
	DECLARE_SERIALIZER(Uinteractable)


#define SnakeGame_Source_SnakeGame_interactable_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SnakeGame_Source_SnakeGame_interactable_h_13_GENERATED_UINTERFACE_BODY() \
	SnakeGame_Source_SnakeGame_interactable_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnakeGame_Source_SnakeGame_interactable_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	SnakeGame_Source_SnakeGame_interactable_h_13_GENERATED_UINTERFACE_BODY() \
	SnakeGame_Source_SnakeGame_interactable_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnakeGame_Source_SnakeGame_interactable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~Iinteractable() {} \
public: \
	typedef Uinteractable UClassType; \
	typedef Iinteractable ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SnakeGame_Source_SnakeGame_interactable_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~Iinteractable() {} \
public: \
	typedef Uinteractable UClassType; \
	typedef Iinteractable ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define SnakeGame_Source_SnakeGame_interactable_h_10_PROLOG
#define SnakeGame_Source_SnakeGame_interactable_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame_Source_SnakeGame_interactable_h_13_SPARSE_DATA \
	SnakeGame_Source_SnakeGame_interactable_h_13_RPC_WRAPPERS \
	SnakeGame_Source_SnakeGame_interactable_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SnakeGame_Source_SnakeGame_interactable_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SnakeGame_Source_SnakeGame_interactable_h_13_SPARSE_DATA \
	SnakeGame_Source_SnakeGame_interactable_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	SnakeGame_Source_SnakeGame_interactable_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKEGAME_API UClass* StaticClass<class Uinteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SnakeGame_Source_SnakeGame_interactable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS

// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/FMODStudioEditorPrivatePCH.h"
#include "FMODStudioEditor.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1FMODStudioEditor() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	UNREALED_API class UClass* Z_Construct_UClass_UActorFactory();

	FMODSTUDIOEDITOR_API class UClass* Z_Construct_UClass_UFMODAmbientSoundActorFactory_NoRegister();
	FMODSTUDIOEDITOR_API class UClass* Z_Construct_UClass_UFMODAmbientSoundActorFactory();
	FMODSTUDIOEDITOR_API class UPackage* Z_Construct_UPackage__Script_FMODStudioEditor();
	void UFMODAmbientSoundActorFactory::StaticRegisterNativesUFMODAmbientSoundActorFactory()
	{
	}
	UClass* Z_Construct_UClass_UFMODAmbientSoundActorFactory_NoRegister()
	{
		return UFMODAmbientSoundActorFactory::StaticClass();
	}
	UClass* Z_Construct_UClass_UFMODAmbientSoundActorFactory()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorFactory();
			Z_Construct_UPackage__Script_FMODStudioEditor();
			OuterClass = UFMODAmbientSoundActorFactory::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x2008308C;


				OuterClass->ClassConfigName = FName(TEXT("Editor"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UFMODAmbientSoundActorFactory> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Object"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FMODAmbientSoundActorFactory.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Classes/FMODAmbientSoundActorFactory.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("FMOD Ambient Sound Actor Factory."));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFMODAmbientSoundActorFactory, 910237895);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFMODAmbientSoundActorFactory(Z_Construct_UClass_UFMODAmbientSoundActorFactory, &UFMODAmbientSoundActorFactory::StaticClass, TEXT("/Script/FMODStudioEditor"), TEXT("UFMODAmbientSoundActorFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODAmbientSoundActorFactory);
	UPackage* Z_Construct_UPackage__Script_FMODStudioEditor()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/FMODStudioEditor")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000040);
			FGuid Guid;
			Guid.A = 0xDEDA0457;
			Guid.B = 0xD6658964;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class JsonEnum; }

#define CLASS_1_AEF643E5EA8B44DD_2__CCTOR_OFFSET UNITYSDK_OFFSET(0x103BF720)

inline static constexpr unsigned int Class_1_AEF643E5EA8B44DD_2_TypeDefinitionIndex = 49845;

class Class_1_AEF643E5EA8B44DD_2 : public ::System::Object
{
public:
	static ::RPG::GameCore::JsonEnum** StaticGet_Field_1_3()
	{
		return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AEF643E5EA8B44DD_2_TypeDefinitionIndex)->GetStaticField(0x6C00);
	}
	static ::RPG::GameCore::JsonEnum** StaticGet_Field_1_1()
	{
		return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AEF643E5EA8B44DD_2_TypeDefinitionIndex)->GetStaticField(0x6C08);
	}
	static ::RPG::GameCore::JsonEnum** StaticGet_Field_1_2()
	{
		return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AEF643E5EA8B44DD_2_TypeDefinitionIndex)->GetStaticField(0x6C10);
	}
	static ::RPG::GameCore::JsonEnum** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::JsonEnum**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AEF643E5EA8B44DD_2_TypeDefinitionIndex)->GetStaticField(0x6C18);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AEF643E5EA8B44DD_2__CCTOR_OFFSET))();
	}
};

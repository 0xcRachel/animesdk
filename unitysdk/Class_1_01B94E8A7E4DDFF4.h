#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_01B94E8A7E4DDFF4__CCTOR_OFFSET UNITYSDK_OFFSET(0x110D4E80)
#define CLASS_1_01B94E8A7E4DDFF4__CTOR_OFFSET UNITYSDK_OFFSET(0x110D4E70)

inline static constexpr unsigned int Class_1_01B94E8A7E4DDFF4_TypeDefinitionIndex = 47555;

class Class_1_01B94E8A7E4DDFF4 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_01B94E8A7E4DDFF4_TypeDefinitionIndex)->GetStaticField(0xBE20);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_01B94E8A7E4DDFF4_TypeDefinitionIndex)->GetStaticField(0xBE28);
	}
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_01B94E8A7E4DDFF4_TypeDefinitionIndex)->GetStaticField(0xBE30);
	}
	static ::System::String** StaticGet_Field_1_4()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_01B94E8A7E4DDFF4_TypeDefinitionIndex)->GetStaticField(0xBE38);
	}
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_01B94E8A7E4DDFF4_TypeDefinitionIndex)->GetStaticField(0xBE40);
	}
	static ::System::String** StaticGet_Field_1_5()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_01B94E8A7E4DDFF4_TypeDefinitionIndex)->GetStaticField(0xBE48);
	}
	static ::System::String** StaticGet_Field_1_6()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_01B94E8A7E4DDFF4_TypeDefinitionIndex)->GetStaticField(0xBE50);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01B94E8A7E4DDFF4__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_01B94E8A7E4DDFF4__CCTOR_OFFSET))();
	}
};

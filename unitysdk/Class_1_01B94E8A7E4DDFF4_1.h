#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_01B94E8A7E4DDFF4_1__CCTOR_OFFSET UNITYSDK_OFFSET(0x113D7D80)
#define CLASS_1_01B94E8A7E4DDFF4_1__CTOR_OFFSET UNITYSDK_OFFSET(0x113D7D70)

inline static constexpr unsigned int Class_1_01B94E8A7E4DDFF4_1_TypeDefinitionIndex = 64206;

class Class_1_01B94E8A7E4DDFF4_1 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_01B94E8A7E4DDFF4_1_TypeDefinitionIndex)->GetStaticField(0x46A0);
	}
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_01B94E8A7E4DDFF4_1_TypeDefinitionIndex)->GetStaticField(0x46A8);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_01B94E8A7E4DDFF4_1_TypeDefinitionIndex)->GetStaticField(0x46B0);
	}
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_01B94E8A7E4DDFF4_1_TypeDefinitionIndex)->GetStaticField(0x46B8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_01B94E8A7E4DDFF4_1__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_01B94E8A7E4DDFF4_1__CCTOR_OFFSET))();
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_31F3FD4EC6646DD6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1832CE40)

inline static constexpr unsigned int Class_1_31F3FD4EC6646DD6_TypeDefinitionIndex = 9527;

class Class_1_31F3FD4EC6646DD6 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_31F3FD4EC6646DD6_TypeDefinitionIndex)->GetStaticField(0xB220);
	}
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_31F3FD4EC6646DD6_TypeDefinitionIndex)->GetStaticField(0xB228);
	}
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_31F3FD4EC6646DD6_TypeDefinitionIndex)->GetStaticField(0xB230);
	}
	static ::System::Int32* StaticGet_Field_1_4()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_31F3FD4EC6646DD6_TypeDefinitionIndex)->GetStaticField(0x3F00);
	}
	static ::System::Int32* StaticGet_Field_1_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_31F3FD4EC6646DD6_TypeDefinitionIndex)->GetStaticField(0x3F04);
	}
	static ::System::Int32* StaticGet_Field_1_6()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_31F3FD4EC6646DD6_TypeDefinitionIndex)->GetStaticField(0x3F08);
	}
	static ::System::Int32* StaticGet_Field_1_5()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_31F3FD4EC6646DD6_TypeDefinitionIndex)->GetStaticField(0x3F0C);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_31F3FD4EC6646DD6__CCTOR_OFFSET))();
	}
};

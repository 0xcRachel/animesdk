#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_7807B2B04302CD7B_25__CCTOR_OFFSET UNITYSDK_OFFSET(0xFF2A600)

inline static constexpr unsigned int Class_1_7807B2B04302CD7B_25_TypeDefinitionIndex = 53136;

class Class_1_7807B2B04302CD7B_25 : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_Field_1_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7807B2B04302CD7B_25_TypeDefinitionIndex)->GetStaticField(0x31D0);
	}
	static ::System::Int32* StaticGet_Field_1_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7807B2B04302CD7B_25_TypeDefinitionIndex)->GetStaticField(0x31D4);
	}
	static ::System::Int32* StaticGet_Field_1_2()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7807B2B04302CD7B_25_TypeDefinitionIndex)->GetStaticField(0x31D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7807B2B04302CD7B_25__CCTOR_OFFSET))();
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_BC7D0AE9CC339A13_METHOD_1_FD8EF41141F13240_OFFSET UNITYSDK_OFFSET(0x106B2410)
#define CLASS_1_BC7D0AE9CC339A13__CCTOR_OFFSET UNITYSDK_OFFSET(0x106B2540)

inline static constexpr unsigned int Class_1_BC7D0AE9CC339A13_TypeDefinitionIndex = 38621;

class Class_1_BC7D0AE9CC339A13 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_2()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC7D0AE9CC339A13_TypeDefinitionIndex)->GetStaticField(0x264C0);
	}
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC7D0AE9CC339A13_TypeDefinitionIndex)->GetStaticField(0x264C8);
	}
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC7D0AE9CC339A13_TypeDefinitionIndex)->GetStaticField(0x264D0);
	}
	static ::System::String** StaticGet_Field_1_3()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC7D0AE9CC339A13_TypeDefinitionIndex)->GetStaticField(0x264D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC7D0AE9CC339A13__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_FD8EF41141F13240(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BC7D0AE9CC339A13_METHOD_1_FD8EF41141F13240_OFFSET))(a1);
	}
};

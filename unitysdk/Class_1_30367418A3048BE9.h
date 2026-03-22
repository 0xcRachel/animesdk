#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace System { class String; }

#define CLASS_1_30367418A3048BE9__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FCAE40)

inline static constexpr unsigned int Class_1_30367418A3048BE9_TypeDefinitionIndex = 27981;

class Class_1_30367418A3048BE9 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30367418A3048BE9_TypeDefinitionIndex)->GetStaticField(0x2C150);
	}
	static ::Il2CppArray<::System::RuntimeTypeHandle>** StaticGet_Field_1_5()
	{
		return (::Il2CppArray<::System::RuntimeTypeHandle>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_30367418A3048BE9_TypeDefinitionIndex)->GetStaticField(0x2C158);
	}
	// static const ::System::Int32 Field_1_0 = 0x0; // 0x0
	// static const ::System::Int32 Field_1_1 = 0x1; // 0x0
	// static const ::System::Int32 Field_1_2 = 0x2; // 0x0
	// static const ::System::Int32 Field_1_3 = 0x3; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_30367418A3048BE9__CCTOR_OFFSET))();
	}
};

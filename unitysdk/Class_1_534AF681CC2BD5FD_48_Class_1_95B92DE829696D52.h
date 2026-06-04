#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ConsoleVariableBoolProperty.h"
#include "unitysdk/UnityEngine/ConsoleVariableStringProperty.h"

#define CLASS_1_534AF681CC2BD5FD_48_CLASS_1_95B92DE829696D52__CCTOR_OFFSET UNITYSDK_OFFSET(0x16393C80)

inline static constexpr unsigned int Class_1_534AF681CC2BD5FD_48_Class_1_95B92DE829696D52_TypeDefinitionIndex = 55459;

class Class_1_534AF681CC2BD5FD_48_Class_1_95B92DE829696D52 : public ::System::Object
{
public:
	static ::UnityEngine::ConsoleVariableStringProperty* StaticGet_Field_1_0()
	{
		return (::UnityEngine::ConsoleVariableStringProperty*)Il2CppClass::FromTypeDefinitionIndex(Class_1_534AF681CC2BD5FD_48_Class_1_95B92DE829696D52_TypeDefinitionIndex)->GetStaticField(0x3A7A0);
	}
	static ::UnityEngine::ConsoleVariableBoolProperty* StaticGet_Field_1_1()
	{
		return (::UnityEngine::ConsoleVariableBoolProperty*)Il2CppClass::FromTypeDefinitionIndex(Class_1_534AF681CC2BD5FD_48_Class_1_95B92DE829696D52_TypeDefinitionIndex)->GetStaticField(0x3A7B0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_534AF681CC2BD5FD_48_CLASS_1_95B92DE829696D52__CCTOR_OFFSET))();
	}
};

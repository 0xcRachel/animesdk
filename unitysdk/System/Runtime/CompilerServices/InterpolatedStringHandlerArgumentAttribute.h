#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_INTERPOLATEDSTRINGHANDLERARGUMENTATTRIBUTE_GET_ARGUMENTS_OFFSET UNITYSDK_OFFSET(0x156AD220)
#define SYSTEM_RUNTIME_COMPILERSERVICES_INTERPOLATEDSTRINGHANDLERARGUMENTATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x156AD210)
#define SYSTEM_RUNTIME_COMPILERSERVICES_INTERPOLATEDSTRINGHANDLERARGUMENTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x156AD1C0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int InterpolatedStringHandlerArgumentAttribute_TypeDefinitionIndex = 9862;

	class InterpolatedStringHandlerArgumentAttribute : public ::System::Attribute
	{
	public:
		::Il2CppArray<::System::String*>* _Arguments_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* argument)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_INTERPOLATEDSTRINGHANDLERARGUMENTATTRIBUTE__CTOR_OFFSET))(this, argument);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::String*>* arguments)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_INTERPOLATEDSTRINGHANDLERARGUMENTATTRIBUTE__CTOR_1_OFFSET))(this, arguments);
		}

		::Il2CppArray<::System::String*>* get_Arguments()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_INTERPOLATEDSTRINGHANDLERARGUMENTATTRIBUTE_GET_ARGUMENTS_OFFSET))(this);
		}
	};
}

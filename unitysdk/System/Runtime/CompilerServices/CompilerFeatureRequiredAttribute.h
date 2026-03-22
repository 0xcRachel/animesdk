#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_COMPILERSERVICES_COMPILERFEATUREREQUIREDATTRIBUTE_GET_FEATURENAME_OFFSET UNITYSDK_OFFSET(0x156AD190)
#define SYSTEM_RUNTIME_COMPILERSERVICES_COMPILERFEATUREREQUIREDATTRIBUTE_GET_ISOPTIONAL_OFFSET UNITYSDK_OFFSET(0x156AD1A0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_COMPILERFEATUREREQUIREDATTRIBUTE_SET_ISOPTIONAL_OFFSET UNITYSDK_OFFSET(0x156AD1B0)
#define SYSTEM_RUNTIME_COMPILERSERVICES_COMPILERFEATUREREQUIREDATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x156AD180)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int CompilerFeatureRequiredAttribute_TypeDefinitionIndex = 9861;

	class CompilerFeatureRequiredAttribute : public ::System::Attribute
	{
	public:
		// static const ::System::String* RefStructs; // 0x0
		// static const ::System::String* RequiredMembers; // 0x0
		::System::String* _FeatureName_k__BackingField; // 0x10
		::System::Boolean _IsOptional_k__BackingField; // 0x18

		::System::Void _ctor(::System::String* featureName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_COMPILERFEATUREREQUIREDATTRIBUTE__CTOR_OFFSET))(this, featureName);
		}

		::System::String* get_FeatureName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_COMPILERFEATUREREQUIREDATTRIBUTE_GET_FEATURENAME_OFFSET))(this);
		}

		::System::Boolean get_IsOptional()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_COMPILERFEATUREREQUIREDATTRIBUTE_GET_ISOPTIONAL_OFFSET))(this);
		}

		::System::Void set_IsOptional(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_COMPILERFEATUREREQUIREDATTRIBUTE_SET_ISOPTIONAL_OFFSET))(this, value);
		}
	};
}

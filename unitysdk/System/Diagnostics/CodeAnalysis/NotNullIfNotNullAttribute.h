#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_NOTNULLIFNOTNULLATTRIBUTE_GET_PARAMETERNAME_OFFSET UNITYSDK_OFFSET(0x156ABD00)
#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_NOTNULLIFNOTNULLATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x156ABCF0)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int NotNullIfNotNullAttribute_TypeDefinitionIndex = 9887;

	class NotNullIfNotNullAttribute : public ::System::Attribute
	{
	public:
		::System::String* _ParameterName_k__BackingField; // 0x10

		::System::Void _ctor(::System::String* parameterName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_NOTNULLIFNOTNULLATTRIBUTE__CTOR_OFFSET))(this, parameterName);
		}

		::System::String* get_ParameterName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_NOTNULLIFNOTNULLATTRIBUTE_GET_PARAMETERNAME_OFFSET))(this);
		}
	};
}

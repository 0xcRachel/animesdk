#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_EXPERIMENTALATTRIBUTE_GET_DIAGNOSTICID_OFFSET UNITYSDK_OFFSET(0x156ABB90)
#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_EXPERIMENTALATTRIBUTE_GET_URLFORMAT_OFFSET UNITYSDK_OFFSET(0x156ABBA0)
#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_EXPERIMENTALATTRIBUTE_SET_URLFORMAT_OFFSET UNITYSDK_OFFSET(0x156ABBB0)
#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_EXPERIMENTALATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x156ABB80)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int ExperimentalAttribute_TypeDefinitionIndex = 9881;

	class ExperimentalAttribute : public ::System::Attribute
	{
	public:
		::System::String* _UrlFormat_k__BackingField; // 0x10
		::System::String* _DiagnosticId_k__BackingField; // 0x18

		::System::Void _ctor(::System::String* diagnosticId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_EXPERIMENTALATTRIBUTE__CTOR_OFFSET))(this, diagnosticId);
		}

		::System::String* get_DiagnosticId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_EXPERIMENTALATTRIBUTE_GET_DIAGNOSTICID_OFFSET))(this);
		}

		::System::String* get_UrlFormat()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_EXPERIMENTALATTRIBUTE_GET_URLFORMAT_OFFSET))(this);
		}

		::System::Void set_UrlFormat(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_EXPERIMENTALATTRIBUTE_SET_URLFORMAT_OFFSET))(this, value);
		}
	};
}

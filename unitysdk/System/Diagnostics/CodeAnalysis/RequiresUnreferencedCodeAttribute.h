#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_REQUIRESUNREFERENCEDCODEATTRIBUTE_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x156ABD80)
#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_REQUIRESUNREFERENCEDCODEATTRIBUTE_GET_URL_OFFSET UNITYSDK_OFFSET(0x156ABD90)
#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_REQUIRESUNREFERENCEDCODEATTRIBUTE_SET_URL_OFFSET UNITYSDK_OFFSET(0x156ABDA0)
#define SYSTEM_DIAGNOSTICS_CODEANALYSIS_REQUIRESUNREFERENCEDCODEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x156ABD70)

namespace System::Diagnostics::CodeAnalysis
{
	inline static constexpr unsigned int RequiresUnreferencedCodeAttribute_TypeDefinitionIndex = 9873;

	class RequiresUnreferencedCodeAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Message_k__BackingField; // 0x10
		::System::String* _Url_k__BackingField; // 0x18

		::System::Void _ctor(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_REQUIRESUNREFERENCEDCODEATTRIBUTE__CTOR_OFFSET))(this, message);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_REQUIRESUNREFERENCEDCODEATTRIBUTE_GET_MESSAGE_OFFSET))(this);
		}

		::System::String* get_Url()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_REQUIRESUNREFERENCEDCODEATTRIBUTE_GET_URL_OFFSET))(this);
		}

		::System::Void set_Url(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_CODEANALYSIS_REQUIRESUNREFERENCEDCODEATTRIBUTE_SET_URL_OFFSET))(this, value);
		}
	};
}

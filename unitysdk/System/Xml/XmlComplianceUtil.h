#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_XML_XMLCOMPLIANCEUTIL_CDATANORMALIZE_OFFSET UNITYSDK_OFFSET(0x17DE4060)
#define SYSTEM_XML_XMLCOMPLIANCEUTIL_NONCDATANORMALIZE_OFFSET UNITYSDK_OFFSET(0x17DE3CD0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlComplianceUtil_TypeDefinitionIndex = 1923;

	class XmlComplianceUtil : public ::System::Object
	{
	public:
		static ::System::String* NonCDataNormalize(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCOMPLIANCEUTIL_NONCDATANORMALIZE_OFFSET))(value);
		}

		static ::System::String* CDataNormalize(::System::String* value)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLCOMPLIANCEUTIL_CDATANORMALIZE_OFFSET))(value);
		}
	};
}

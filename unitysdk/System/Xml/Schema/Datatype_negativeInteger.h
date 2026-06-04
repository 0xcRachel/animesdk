#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/Datatype_nonPositiveInteger.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"

namespace System::Xml::Schema { class FacetsChecker; }

#define SYSTEM_XML_SCHEMA_DATATYPE_NEGATIVEINTEGER_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x18A918D0)
#define SYSTEM_XML_SCHEMA_DATATYPE_NEGATIVEINTEGER_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x18A91930)
#define SYSTEM_XML_SCHEMA_DATATYPE_NEGATIVEINTEGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A91940)
#define SYSTEM_XML_SCHEMA_DATATYPE_NEGATIVEINTEGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A87DE0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int Datatype_negativeInteger_TypeDefinitionIndex = 2124;

	class Datatype_negativeInteger : public ::System::Xml::Schema::Datatype_nonPositiveInteger
	{
	public:
		static ::System::Xml::Schema::FacetsChecker** StaticGet_numeric10FacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(Datatype_negativeInteger_TypeDefinitionIndex)->GetStaticField(0x156A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NEGATIVEINTEGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NEGATIVEINTEGER__CCTOR_OFFSET))();
		}

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return ((::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NEGATIVEINTEGER_GET_FACETSCHECKER_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPE_NEGATIVEINTEGER_GET_TYPECODE_OFFSET))(this);
		}
	};
}

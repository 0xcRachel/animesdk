#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaDatatype.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaDatatypeVariety.h"
#include "unitysdk/System/Xml/Schema/XmlSchemaWhiteSpace.h"
#include "unitysdk/System/Xml/Schema/XmlTypeCode.h"
#include "unitysdk/System/Xml/XmlTokenizedType.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections { class Hashtable; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlNameTable; }
namespace System::Xml { class XmlQualifiedName; }
namespace System::Xml::Schema { class DatatypeImplementation_SchemaDatatypeMap; }
namespace System::Xml::Schema { class FacetsChecker; }
namespace System::Xml::Schema { class RestrictionFacets; }
namespace System::Xml::Schema { class XmlSchemaSimpleType; }
namespace System::Xml::Schema { class XmlSchemaType; }
namespace System::Xml::Schema { class XmlValueConverter; }

#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_COMPARE_OFFSET UNITYSDK_OFFSET(0x18596DA0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_CREATEBUILTINTYPES_OFFSET UNITYSDK_OFFSET(0x185954D0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_CREATEVALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x18596A60)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_DERIVEBYLIST_OFFSET UNITYSDK_OFFSET(0x18593620)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FINISHBUILTINTYPE_OFFSET UNITYSDK_OFFSET(0x185964F0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMTYPENAME_OFFSET UNITYSDK_OFFSET(0x18596300)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMXMLTOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x18596260)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETSIMPLETYPEFROMTYPECODE_OFFSET UNITYSDK_OFFSET(0x18596860)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x18596D00)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_ANYSIMPLETYPE_OFFSET UNITYSDK_OFFSET(0x185961A0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_BUILTINWHITESPACEFACET_OFFSET UNITYSDK_OFFSET(0x18596B80)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_FACETSCHECKER_OFFSET UNITYSDK_OFFSET(0x18596A70)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_RESTRICTION_OFFSET UNITYSDK_OFFSET(0x18596B70)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_TOKENIZEDTYPE_OFFSET UNITYSDK_OFFSET(0x18596B10)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_TYPECODE_OFFSET UNITYSDK_OFFSET(0x18596B60)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_UNTYPEDATOMICTYPE_OFFSET UNITYSDK_OFFSET(0x18596200)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VALUECONVERTER_OFFSET UNITYSDK_OFFSET(0x18596AD0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x18596B20)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VARIETY_OFFSET UNITYSDK_OFFSET(0x18596B50)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_ISEQUAL_OFFSET UNITYSDK_OFFSET(0x18596A40)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x18596B90)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_STARTBUILTINTYPE_OFFSET UNITYSDK_OFFSET(0x185963F0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1858C7B0)
#define SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION__CTOR_OFFSET UNITYSDK_OFFSET(0x18596E00)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int DatatypeImplementation_TypeDefinitionIndex = 2077;

	class DatatypeImplementation : public ::System::Xml::Schema::XmlSchemaDatatype
	{
	public:
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_NMTOKENS()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13C90);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_untypedAtomicType()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13C98);
		}
		static ::Il2CppArray<::System::Xml::Schema::DatatypeImplementation*>** StaticGet_c_tokenizedTypes()
		{
			return (::Il2CppArray<::System::Xml::Schema::DatatypeImplementation*>**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13CA0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_anySimpleType()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13CA8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_yearMonth()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13CB0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_normalizedString()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13CB8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_duration()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13CC0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_dateTimeNoTz()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13CC8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_month()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13CD0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_QName()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13CD8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_nonPositiveInteger()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13CE0);
		}
		static ::System::Xml::Schema::XmlSchemaSimpleType** StaticGet_anyAtomicType()
		{
			return (::System::Xml::Schema::XmlSchemaSimpleType**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13CE8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_boolean()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13CF0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_byte()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13CF8);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_qnameFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13D00);
		}
		static ::System::Xml::Schema::XmlSchemaSimpleType** StaticGet_untypedAtomicType()
		{
			return (::System::Xml::Schema::XmlSchemaSimpleType**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13D08);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_NCName()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13D10);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_floatXdr()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13D18);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_dateTime()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13D20);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_ENTITY()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13D28);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_normalizedStringV1Compat()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13D30);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_date()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13D38);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_ENTITIES()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13D40);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_string()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13D48);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_anyAtomicType()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13D50);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_IDREFS()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13D58);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_durationFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13D60);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_float()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13D68);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_negativeInteger()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13D70);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_IDREF()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13D78);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_monthDay()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13D80);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_ID()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13D88);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_QNameXdr()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13D90);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_positiveInteger()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13D98);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_base64Binary()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13DA0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_token()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13DA8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_dateTimeTz()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13DB0);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_QnAnySimpleType()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13DB8);
		}
		static ::Il2CppArray<::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap*>** StaticGet_c_XdrTypes()
		{
			return (::Il2CppArray<::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap*>**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13DC0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_unsignedShort()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13DC8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_unsignedLong()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13DD0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_year()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13DD8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_anyURI()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13DE0);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_numeric2FacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13DE8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_timeTz()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13DF0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_yearMonthDuration()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13DF8);
		}
		static ::Il2CppArray<::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap*>** StaticGet_c_XsdTypes()
		{
			return (::Il2CppArray<::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap*>**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13E00);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_timeNoTz()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13E08);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_unsignedByte()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13E10);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_integer()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13E18);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_long()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13E20);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_fixed()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13E28);
		}
		static ::System::Xml::Schema::XmlSchemaSimpleType** StaticGet_anySimpleType()
		{
			return (::System::Xml::Schema::XmlSchemaSimpleType**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13E30);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_doubleXdr()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13E38);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_NOTATION()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13E40);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_language()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13E48);
		}
		static ::Il2CppArray<::System::Xml::Schema::XmlSchemaSimpleType*>** StaticGet_enumToTypeCode()
		{
			return (::Il2CppArray<::System::Xml::Schema::XmlSchemaSimpleType*>**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13E50);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_unsignedInt()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13E58);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_hexBinary()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13E60);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_dayTimeDuration()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13E68);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_stringFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13E70);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_nonNegativeInteger()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13E78);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_char()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13E80);
		}
		static ::System::Collections::Hashtable** StaticGet_builtinTypes()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13E88);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_binaryFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13E90);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_day()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13E98);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_double()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13EA0);
		}
		static ::System::Xml::Schema::XmlSchemaSimpleType** StaticGet_yearMonthDurationType()
		{
			return (::System::Xml::Schema::XmlSchemaSimpleType**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13EA8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_Name()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13EB0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_time()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13EB8);
		}
		static ::System::Xml::XmlQualifiedName** StaticGet_QnAnyType()
		{
			return (::System::Xml::XmlQualifiedName**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13EC0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_ENUMERATION()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13EC8);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_miscFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13ED0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_uuid()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13ED8);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_NMTOKEN()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13EE0);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_short()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13EE8);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_listFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13EF0);
		}
		static ::Il2CppArray<::System::Xml::Schema::DatatypeImplementation*>** StaticGet_c_tokenizedTypesXsd()
		{
			return (::Il2CppArray<::System::Xml::Schema::DatatypeImplementation*>**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13EF8);
		}
		static ::System::Xml::Schema::XmlSchemaSimpleType** StaticGet_dayTimeDurationType()
		{
			return (::System::Xml::Schema::XmlSchemaSimpleType**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13F00);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_decimal()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13F08);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_tokenV1Compat()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13F10);
		}
		static ::System::Xml::Schema::DatatypeImplementation** StaticGet_c_int()
		{
			return (::System::Xml::Schema::DatatypeImplementation**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13F18);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_dateTimeFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13F20);
		}
		static ::System::Xml::Schema::FacetsChecker** StaticGet_unionFacetsChecker()
		{
			return (::System::Xml::Schema::FacetsChecker**)Il2CppClass::FromTypeDefinitionIndex(DatatypeImplementation_TypeDefinitionIndex)->GetStaticField(0x13F28);
		}
		::System::Xml::Schema::DatatypeImplementation* baseType; // 0x10
		::System::Xml::Schema::RestrictionFacets* restriction; // 0x18
		::System::Xml::Schema::XmlSchemaType* parentSchemaType; // 0x20
		::System::Xml::Schema::XmlValueConverter* valueConverter; // 0x28
		::System::Xml::Schema::XmlSchemaDatatypeVariety variety; // 0x30

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION__CTOR_OFFSET))(this);
		}

		static ::System::Xml::Schema::XmlSchemaSimpleType* get_AnySimpleType()
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleType*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_ANYSIMPLETYPE_OFFSET))();
		}

		static ::System::Xml::Schema::XmlSchemaSimpleType* get_UntypedAtomicType()
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleType*(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_UNTYPEDATOMICTYPE_OFFSET))();
		}

		static ::System::Xml::Schema::DatatypeImplementation* FromXmlTokenizedType(::System::Xml::XmlTokenizedType token)
		{
			return ((::System::Xml::Schema::DatatypeImplementation*(*)(::System::Xml::XmlTokenizedType))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMXMLTOKENIZEDTYPE_OFFSET))(token);
		}

		static ::System::Xml::Schema::DatatypeImplementation* FromTypeName(::System::String* name)
		{
			return ((::System::Xml::Schema::DatatypeImplementation*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FROMTYPENAME_OFFSET))(name);
		}

		static ::System::Xml::Schema::XmlSchemaSimpleType* StartBuiltinType(::System::Xml::XmlQualifiedName* qname, ::System::Xml::Schema::XmlSchemaDatatype* dataType)
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleType*(*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::XmlSchemaDatatype*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_STARTBUILTINTYPE_OFFSET))(qname, dataType);
		}

		static ::System::Void FinishBuiltinType(::System::Xml::Schema::XmlSchemaSimpleType* derivedType, ::System::Xml::Schema::XmlSchemaSimpleType* baseType)
		{
			return ((::System::Void(*)(::System::Xml::Schema::XmlSchemaSimpleType*, ::System::Xml::Schema::XmlSchemaSimpleType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_FINISHBUILTINTYPE_OFFSET))(derivedType, baseType);
		}

		static ::System::Void CreateBuiltinTypes()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_CREATEBUILTINTYPES_OFFSET))();
		}

		static ::System::Xml::Schema::XmlSchemaSimpleType* GetSimpleTypeFromTypeCode(::System::Xml::Schema::XmlTypeCode typeCode)
		{
			return ((::System::Xml::Schema::XmlSchemaSimpleType*(*)(::System::Xml::Schema::XmlTypeCode))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETSIMPLETYPEFROMTYPECODE_OFFSET))(typeCode);
		}

		::System::Xml::Schema::XmlSchemaDatatype* DeriveByList(::System::Int32 minSize, ::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Xml::Schema::XmlSchemaDatatype*(*)(::PVOID, ::System::Int32, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_DERIVEBYLIST_OFFSET))(this, minSize, schemaType);
		}

		::System::Boolean IsEqual(::System::Object* o1, ::System::Object* o2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_ISEQUAL_OFFSET))(this, o1, o2);
		}

		::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* schemaType)
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_CREATEVALUECONVERTER_OFFSET))(this, schemaType);
		}

		::System::Xml::Schema::FacetsChecker* get_FacetsChecker()
		{
			return ((::System::Xml::Schema::FacetsChecker*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_FACETSCHECKER_OFFSET))(this);
		}

		::System::Xml::Schema::XmlValueConverter* get_ValueConverter()
		{
			return ((::System::Xml::Schema::XmlValueConverter*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VALUECONVERTER_OFFSET))(this);
		}

		::System::Xml::XmlTokenizedType get_TokenizedType()
		{
			return ((::System::Xml::XmlTokenizedType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_TOKENIZEDTYPE_OFFSET))(this);
		}

		::System::Type* get_ValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaDatatypeVariety get_Variety()
		{
			return ((::System::Xml::Schema::XmlSchemaDatatypeVariety(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_VARIETY_OFFSET))(this);
		}

		::System::Xml::Schema::XmlTypeCode get_TypeCode()
		{
			return ((::System::Xml::Schema::XmlTypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_TYPECODE_OFFSET))(this);
		}

		::System::Xml::Schema::RestrictionFacets* get_Restriction()
		{
			return ((::System::Xml::Schema::RestrictionFacets*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_RESTRICTION_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet()
		{
			return ((::System::Xml::Schema::XmlSchemaWhiteSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GET_BUILTINWHITESPACEFACET_OFFSET))(this);
		}

		::System::Object* ParseValue(::System::String* s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Xml::XmlNameTable*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_PARSEVALUE_OFFSET))(this, s, nameTable, nsmgr);
		}

		::System::String* GetTypeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_GETTYPENAME_OFFSET))(this);
		}

		::System::Int32 Compare(::Il2CppArray<::System::Byte>* value1, ::Il2CppArray<::System::Byte>* value2)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_DATATYPEIMPLEMENTATION_COMPARE_OFFSET))(this, value1, value2);
		}
	};
}

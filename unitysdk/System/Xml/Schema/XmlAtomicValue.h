#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/TypeCode.h"
#include "unitysdk/System/Xml/Schema/XmlAtomicValue_Union.h"
#include "unitysdk/System/Xml/XPath/XPathItem.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml::Schema { class XmlAtomicValue_NamespacePrefixForQName; }
namespace System::Xml::Schema { class XmlSchemaType; }

#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GETPREFIXFROMQNAME_OFFSET UNITYSDK_OFFSET(0x1853AB40)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_TYPEDVALUE_OFFSET UNITYSDK_OFFSET(0x1853AC70)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASBOOLEAN_OFFSET UNITYSDK_OFFSET(0x18535820)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASDATETIME_OFFSET UNITYSDK_OFFSET(0x18535D20)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASDOUBLE_OFFSET UNITYSDK_OFFSET(0x185363F0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASINT_OFFSET UNITYSDK_OFFSET(0x18536820)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASLONG_OFFSET UNITYSDK_OFFSET(0x18536C00)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1853AC30)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1853BDC0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_XMLTYPE_OFFSET UNITYSDK_OFFSET(0x1853AC20)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1853AC10)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1853BF70)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE_VALUEAS_OFFSET UNITYSDK_OFFSET(0x18539390)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x185376F0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18537C70)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x18537F40)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_4_OFFSET UNITYSDK_OFFSET(0x18538200)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_5_OFFSET UNITYSDK_OFFSET(0x185384E0)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1853A650)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_7_OFFSET UNITYSDK_OFFSET(0x18537970)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_8_OFFSET UNITYSDK_OFFSET(0x18538F80)
#define SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x18537340)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlAtomicValue_TypeDefinitionIndex = 2169;

	class XmlAtomicValue : public ::System::Xml::XPath::XPathItem
	{
	public:
		::System::Object* objVal; // 0x10
		::System::Xml::Schema::XmlSchemaType* xmlType; // 0x18
		::System::Xml::Schema::XmlAtomicValue_NamespacePrefixForQName* nsPrefix; // 0x20
		::System::TypeCode clrType; // 0x28
		::System::Xml::Schema::XmlAtomicValue_Union unionVal; // 0x30

		::System::Void _ctor(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_OFFSET))(this, xmlType, value);
		}

		::System::Void _ctor_1(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_1_OFFSET))(this, xmlType, value);
		}

		::System::Void _ctor_2(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_2_OFFSET))(this, xmlType, value);
		}

		::System::Void _ctor_3(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_3_OFFSET))(this, xmlType, value);
		}

		::System::Void _ctor_4(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_4_OFFSET))(this, xmlType, value);
		}

		::System::Void _ctor_5(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_5_OFFSET))(this, xmlType, value);
		}

		::System::Void _ctor_6(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::String* value, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*, ::System::String*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_6_OFFSET))(this, xmlType, value, nsResolver);
		}

		::System::Void _ctor_7(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_7_OFFSET))(this, xmlType, value);
		}

		::System::Void _ctor_8(::System::Xml::Schema::XmlSchemaType* xmlType, ::System::Object* value, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaType*, ::System::Object*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE__CTOR_8_OFFSET))(this, xmlType, value, nsResolver);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}

		::System::Xml::Schema::XmlSchemaType* get_XmlType()
		{
			return ((::System::Xml::Schema::XmlSchemaType*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_XMLTYPE_OFFSET))(this);
		}

		::System::Type* get_ValueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Object* get_TypedValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_TYPEDVALUE_OFFSET))(this);
		}

		::System::Boolean get_ValueAsBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASBOOLEAN_OFFSET))(this);
		}

		::System::DateTime get_ValueAsDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASDATETIME_OFFSET))(this);
		}

		::System::Double get_ValueAsDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASDOUBLE_OFFSET))(this);
		}

		::System::Int32 get_ValueAsInt()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASINT_OFFSET))(this);
		}

		::System::Int64 get_ValueAsLong()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUEASLONG_OFFSET))(this);
		}

		::System::Object* ValueAs(::System::Type* type, ::System::Xml::IXmlNamespaceResolver* nsResolver)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_VALUEAS_OFFSET))(this, type, nsResolver);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GET_VALUE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_TOSTRING_OFFSET))(this);
		}

		::System::String* GetPrefixFromQName(::System::String* value)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLATOMICVALUE_GETPREFIXFROMQNAME_OFFSET))(this, value);
		}
	};
}

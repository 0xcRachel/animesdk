#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/Schema/NamespaceList_ListType.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }
namespace System::Collections { class ICollection; }
namespace System::Xml { class XmlQualifiedName; }

#define SYSTEM_XML_SCHEMA_NAMESPACELIST_ALLOWS_1_OFFSET UNITYSDK_OFFSET(0x17D72430)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_ALLOWS_OFFSET UNITYSDK_OFFSET(0x17D723A0)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_GET_ENUMERATE_OFFSET UNITYSDK_OFFSET(0x17D72320)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_GET_EXCLUDED_OFFSET UNITYSDK_OFFSET(0x17D72310)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x17D72300)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17D72460)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17D71F90)
#define SYSTEM_XML_SCHEMA_NAMESPACELIST__CTOR_OFFSET UNITYSDK_OFFSET(0x17D71F80)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int NamespaceList_TypeDefinitionIndex = 2150;

	class NamespaceList : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* set; // 0x10
		::System::String* targetNamespace; // 0x18
		::System::Xml::Schema::NamespaceList_ListType type; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* namespaces, ::System::String* targetNamespace)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST__CTOR_1_OFFSET))(this, namespaces, targetNamespace);
		}

		::System::Xml::Schema::NamespaceList_ListType get_Type()
		{
			return ((::System::Xml::Schema::NamespaceList_ListType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_GET_TYPE_OFFSET))(this);
		}

		::System::String* get_Excluded()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_GET_EXCLUDED_OFFSET))(this);
		}

		::System::Collections::ICollection* get_Enumerate()
		{
			return ((::System::Collections::ICollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_GET_ENUMERATE_OFFSET))(this);
		}

		::System::Boolean Allows(::System::String* ns)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_ALLOWS_OFFSET))(this, ns);
		}

		::System::Boolean Allows_1(::System::Xml::XmlQualifiedName* qname)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Xml::XmlQualifiedName*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_ALLOWS_1_OFFSET))(this, qname);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_NAMESPACELIST_TOSTRING_OFFSET))(this);
		}
	};
}

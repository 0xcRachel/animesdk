#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System { class Object; }
namespace System::Xml::Schema { class XmlSchemaObject; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x17D935C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x17D94AA0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ONINSERT_OFFSET UNITYSDK_OFFSET(0x17D94A20)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x17D94AC0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ONSET_OFFSET UNITYSDK_OFFSET(0x17D94A40)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17D949D0)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaObjectCollection_TypeDefinitionIndex = 2188;

	class XmlSchemaObjectCollection : public ::System::Collections::CollectionBase
	{
	public:
		::System::Xml::Schema::XmlSchemaObject* parent; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Int32 Add(::System::Xml::Schema::XmlSchemaObject* item)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObject*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ADD_OFFSET))(this, item);
		}

		::System::Void OnInsert(::System::Int32 index, ::System::Object* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ONINSERT_OFFSET))(this, index, item);
		}

		::System::Void OnSet(::System::Int32 index, ::System::Object* oldValue, ::System::Object* newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ONSET_OFFSET))(this, index, oldValue, newValue);
		}

		::System::Void OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ONCLEAR_OFFSET))(this);
		}

		::System::Void OnRemove(::System::Int32 index, ::System::Object* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECTCOLLECTION_ONREMOVE_OFFSET))(this, index, item);
		}
	};
}

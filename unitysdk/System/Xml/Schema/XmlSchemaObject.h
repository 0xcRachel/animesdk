#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Xml::Schema { class XmlSchemaObjectCollection; }

#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_ONADD_OFFSET UNITYSDK_OFFSET(0x17D949A0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_ONCLEAR_OFFSET UNITYSDK_OFFSET(0x17D949C0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_ONREMOVE_OFFSET UNITYSDK_OFFSET(0x17D949B0)
#define SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x17D92400)

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaObject_TypeDefinitionIndex = 2187;

	class XmlSchemaObject : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT__CTOR_OFFSET))(this);
		}

		::System::Void OnAdd(::System::Xml::Schema::XmlSchemaObjectCollection* container, ::System::Object* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_ONADD_OFFSET))(this, container, item);
		}

		::System::Void OnRemove(::System::Xml::Schema::XmlSchemaObjectCollection* container, ::System::Object* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_ONREMOVE_OFFSET))(this, container, item);
		}

		::System::Void OnClear(::System::Xml::Schema::XmlSchemaObjectCollection* container)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::Schema::XmlSchemaObjectCollection*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SCHEMA_XMLSCHEMAOBJECT_ONCLEAR_OFFSET))(this, container);
		}
	};
}

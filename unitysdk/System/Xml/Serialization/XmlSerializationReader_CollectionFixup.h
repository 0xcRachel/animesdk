#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Xml::Serialization { class XmlSerializationCollectionFixupCallback; }

#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_COLLECTIONFIXUP_GET_CALLBACK_OFFSET UNITYSDK_OFFSET(0x17A910A0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_COLLECTIONFIXUP_GET_COLLECTIONITEMS_OFFSET UNITYSDK_OFFSET(0x17A910D0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_COLLECTIONFIXUP_GET_COLLECTION_OFFSET UNITYSDK_OFFSET(0x17A910B0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_COLLECTIONFIXUP_GET_ID_OFFSET UNITYSDK_OFFSET(0x17A910C0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_COLLECTIONFIXUP_SET_COLLECTIONITEMS_OFFSET UNITYSDK_OFFSET(0x17A910E0)
#define SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_COLLECTIONFIXUP__CTOR_OFFSET UNITYSDK_OFFSET(0x17A91090)

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int XmlSerializationReader_CollectionFixup_TypeDefinitionIndex = 2018;

	class XmlSerializationReader_CollectionFixup : public ::System::Object
	{
	public:
		::System::String* id; // 0x10
		::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* callback; // 0x18
		::System::Object* collectionItems; // 0x20
		::System::Object* collection; // 0x28

		::System::Void _ctor(::System::Object* collection, ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* callback, ::System::String* id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_COLLECTIONFIXUP__CTOR_OFFSET))(this, collection, callback, id);
		}

		::System::Xml::Serialization::XmlSerializationCollectionFixupCallback* get_Callback()
		{
			return ((::System::Xml::Serialization::XmlSerializationCollectionFixupCallback*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_COLLECTIONFIXUP_GET_CALLBACK_OFFSET))(this);
		}

		::System::Object* get_Collection()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_COLLECTIONFIXUP_GET_COLLECTION_OFFSET))(this);
		}

		::System::Object* get_Id()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_COLLECTIONFIXUP_GET_ID_OFFSET))(this);
		}

		::System::Object* get_CollectionItems()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_COLLECTIONFIXUP_GET_COLLECTIONITEMS_OFFSET))(this);
		}

		::System::Void set_CollectionItems(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_SERIALIZATION_XMLSERIALIZATIONREADER_COLLECTIONFIXUP_SET_COLLECTIONITEMS_OFFSET))(this, value);
		}
	};
}

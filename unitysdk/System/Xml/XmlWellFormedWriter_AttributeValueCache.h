#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Xml/XmlWellFormedWriter_AttributeValueCache_ItemType.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace System::Xml { class XmlWellFormedWriter_AttributeValueCache_Item; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_ADDITEM_OFFSET UNITYSDK_OFFSET(0x1A196B50)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A193460)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_GET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x1A1921D0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_REPLAY_OFFSET UNITYSDK_OFFSET(0x1A1927B0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_STARTCOMPLEXVALUE_OFFSET UNITYSDK_OFFSET(0x1A196B10)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_TRIM_OFFSET UNITYSDK_OFFSET(0x1A192C00)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1A193CF0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x1A194620)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x1A1939A0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x1A194B00)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_WRITERAW_OFFSET UNITYSDK_OFFSET(0x1A1948E0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x1A1943A0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1A193EC0)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x1A195220)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1A194240)
#define SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1953D0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlWellFormedWriter_AttributeValueCache_TypeDefinitionIndex = 1869;

	class XmlWellFormedWriter_AttributeValueCache : public ::System::Object
	{
	public:
		::System::Text::StringBuilder* stringValue; // 0x10
		::System::String* singleStringValue; // 0x18
		::Il2CppArray<::System::Xml::XmlWellFormedWriter_AttributeValueCache_Item*>* items; // 0x20
		::System::Int32 lastItem; // 0x28
		::System::Int32 firstItem; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE__CTOR_OFFSET))(this);
		}

		::System::String* get_StringValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_GET_STRINGVALUE_OFFSET))(this);
		}

		::System::Void WriteEntityRef(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_WRITEENTITYREF_OFFSET))(this, name);
		}

		::System::Void WriteCharEntity(::System::Char ch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_WRITECHARENTITY_OFFSET))(this, ch);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char lowChar, ::System::Char highChar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_WRITESURROGATECHARENTITY_OFFSET))(this, lowChar, highChar);
		}

		::System::Void WriteWhitespace(::System::String* ws)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_WRITEWHITESPACE_OFFSET))(this, ws);
		}

		::System::Void WriteString(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_WRITESTRING_OFFSET))(this, text);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_WRITECHARS_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_WRITERAW_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteRaw_1(::System::String* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_WRITERAW_1_OFFSET))(this, data);
		}

		::System::Void WriteValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_WRITEVALUE_OFFSET))(this, value);
		}

		::System::Void Replay(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_REPLAY_OFFSET))(this, writer);
		}

		::System::Void Trim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_TRIM_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_CLEAR_OFFSET))(this);
		}

		::System::Void StartComplexValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_STARTCOMPLEXVALUE_OFFSET))(this);
		}

		::System::Void AddItem(::System::Xml::XmlWellFormedWriter_AttributeValueCache_ItemType type, ::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWellFormedWriter_AttributeValueCache_ItemType, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLWELLFORMEDWRITER_ATTRIBUTEVALUECACHE_ADDITEM_OFFSET))(this, type, data);
		}
	};
}

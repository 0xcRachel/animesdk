#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/XmlEventCache_XmlEvent.h"
#include "unitysdk/System/Xml/XmlEventCache_XmlEventType.h"
#include "unitysdk/System/Xml/XmlRawWriter.h"
#include "unitysdk/System/Xml/XmlStandalone.h"
#include "unitysdk/System/Xml/Xsl/Runtime/StringConcat.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Xml { class XmlWriter; }

#define SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_1_OFFSET UNITYSDK_OFFSET(0x17DFCBB0)
#define SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_2_OFFSET UNITYSDK_OFFSET(0x17DFCCB0)
#define SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_3_OFFSET UNITYSDK_OFFSET(0x17DFCA30)
#define SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_4_OFFSET UNITYSDK_OFFSET(0x17DFC950)
#define SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_5_OFFSET UNITYSDK_OFFSET(0x17DFCFC0)
#define SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_OFFSET UNITYSDK_OFFSET(0x17DFC020)
#define SYSTEM_XML_XMLEVENTCACHE_CLOSE_OFFSET UNITYSDK_OFFSET(0x17DFD2C0)
#define SYSTEM_XML_XMLEVENTCACHE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17DFD3D0)
#define SYSTEM_XML_XMLEVENTCACHE_ENDEVENTS_OFFSET UNITYSDK_OFFSET(0x17DFBFD0)
#define SYSTEM_XML_XMLEVENTCACHE_EVENTSTOWRITER_OFFSET UNITYSDK_OFFSET(0x17DFC070)
#define SYSTEM_XML_XMLEVENTCACHE_FLUSH_OFFSET UNITYSDK_OFFSET(0x17DFD310)
#define SYSTEM_XML_XMLEVENTCACHE_NEWEVENT_OFFSET UNITYSDK_OFFSET(0x17DFD7A0)
#define SYSTEM_XML_XMLEVENTCACHE_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x17DFD5C0)
#define SYSTEM_XML_XMLEVENTCACHE_TOBYTES_OFFSET UNITYSDK_OFFSET(0x17DFD180)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEBASE64_OFFSET UNITYSDK_OFFSET(0x17DFD0C0)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEBINHEX_OFFSET UNITYSDK_OFFSET(0x17DFD200)
#define SYSTEM_XML_XMLEVENTCACHE_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x17DFCB60)
#define SYSTEM_XML_XMLEVENTCACHE_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x17DFCF50)
#define SYSTEM_XML_XMLEVENTCACHE_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x17DFCDD0)
#define SYSTEM_XML_XMLEVENTCACHE_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x17DFCC00)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x17DFC8E0)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x17DFCB10)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEENDBASE64_OFFSET UNITYSDK_OFFSET(0x17DFD750)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x17DFD610)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x17DFCF00)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x17DFD680)
#define SYSTEM_XML_XMLEVENTCACHE_WRITENAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x17DFD6F0)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x17DFCC50)
#define SYSTEM_XML_XMLEVENTCACHE_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x17DFCEB0)
#define SYSTEM_XML_XMLEVENTCACHE_WRITERAW_OFFSET UNITYSDK_OFFSET(0x17DFCE50)
#define SYSTEM_XML_XMLEVENTCACHE_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x17DFCAA0)
#define SYSTEM_XML_XMLEVENTCACHE_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x17DFC9C0)
#define SYSTEM_XML_XMLEVENTCACHE_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x17DFCD60)
#define SYSTEM_XML_XMLEVENTCACHE_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x17DFD010)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x17DFD360)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x17DFCD10)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEXMLDECLARATION_1_OFFSET UNITYSDK_OFFSET(0x17DFD570)
#define SYSTEM_XML_XMLEVENTCACHE_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x17DFD4E0)
#define SYSTEM_XML_XMLEVENTCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x17DFBFC0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlEventCache_TypeDefinitionIndex = 1819;

	class XmlEventCache : public ::System::Xml::XmlRawWriter
	{
	public:
		::System::Xml::Xsl::Runtime::StringConcat singleText; // 0x20
		::Il2CppArray<::System::Xml::XmlEventCache_XmlEvent>* pageCurr; // 0x58
		::System::String* baseUri; // 0x60
		::System::Collections::Generic::List_1<::Il2CppArray<::System::Xml::XmlEventCache_XmlEvent>*>* pages; // 0x68
		::System::Boolean hasRootNode; // 0x70
		::System::Int32 pageSize; // 0x74

		::System::Void _ctor(::System::String* baseUri, ::System::Boolean hasRootNode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE__CTOR_OFFSET))(this, baseUri, hasRootNode);
		}

		::System::Void EndEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_ENDEVENTS_OFFSET))(this);
		}

		::System::Void EventsToWriter(::System::Xml::XmlWriter* writer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriter*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_EVENTSTOWRITER_OFFSET))(this, writer);
		}

		::System::Void WriteDocType(::System::String* name, ::System::String* pubid, ::System::String* sysid, ::System::String* subset)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEDOCTYPE_OFFSET))(this, name, pubid, sysid, subset);
		}

		::System::Void WriteStartElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITESTARTELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteStartAttribute(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITESTARTATTRIBUTE_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteEndAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEENDATTRIBUTE_OFFSET))(this);
		}

		::System::Void WriteCData(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITECDATA_OFFSET))(this, text);
		}

		::System::Void WriteComment(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITECOMMENT_OFFSET))(this, text);
		}

		::System::Void WriteProcessingInstruction(::System::String* name, ::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEPROCESSINGINSTRUCTION_OFFSET))(this, name, text);
		}

		::System::Void WriteWhitespace(::System::String* ws)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEWHITESPACE_OFFSET))(this, ws);
		}

		::System::Void WriteString(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITESTRING_OFFSET))(this, text);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITECHARS_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITERAW_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteRaw_1(::System::String* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITERAW_1_OFFSET))(this, data);
		}

		::System::Void WriteEntityRef(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEENTITYREF_OFFSET))(this, name);
		}

		::System::Void WriteCharEntity(::System::Char ch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITECHARENTITY_OFFSET))(this, ch);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char lowChar, ::System::Char highChar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITESURROGATECHARENTITY_OFFSET))(this, lowChar, highChar);
		}

		::System::Void WriteBase64(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEBASE64_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteBinHex(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEBINHEX_OFFSET))(this, buffer, index, count);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_CLOSE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_FLUSH_OFFSET))(this);
		}

		::System::Void WriteValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEVALUE_OFFSET))(this, value);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_DISPOSE_OFFSET))(this, disposing);
		}

		::System::Void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlStandalone))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEXMLDECLARATION_OFFSET))(this, standalone);
		}

		::System::Void WriteXmlDeclaration_1(::System::String* xmldecl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEXMLDECLARATION_1_OFFSET))(this, xmldecl);
		}

		::System::Void StartElementContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_STARTELEMENTCONTENT_OFFSET))(this);
		}

		::System::Void WriteEndElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEENDELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteFullEndElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEFULLENDELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteNamespaceDeclaration(::System::String* prefix, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITENAMESPACEDECLARATION_OFFSET))(this, prefix, ns);
		}

		::System::Void WriteEndBase64()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_WRITEENDBASE64_OFFSET))(this);
		}

		::System::Void AddEvent(::System::Xml::XmlEventCache_XmlEventType eventType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlEventCache_XmlEventType))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_OFFSET))(this, eventType);
		}

		::System::Void AddEvent_1(::System::Xml::XmlEventCache_XmlEventType eventType, ::System::String* s1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlEventCache_XmlEventType, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_1_OFFSET))(this, eventType, s1);
		}

		::System::Void AddEvent_2(::System::Xml::XmlEventCache_XmlEventType eventType, ::System::String* s1, ::System::String* s2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlEventCache_XmlEventType, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_2_OFFSET))(this, eventType, s1, s2);
		}

		::System::Void AddEvent_3(::System::Xml::XmlEventCache_XmlEventType eventType, ::System::String* s1, ::System::String* s2, ::System::String* s3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlEventCache_XmlEventType, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_3_OFFSET))(this, eventType, s1, s2, s3);
		}

		::System::Void AddEvent_4(::System::Xml::XmlEventCache_XmlEventType eventType, ::System::String* s1, ::System::String* s2, ::System::String* s3, ::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlEventCache_XmlEventType, ::System::String*, ::System::String*, ::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_4_OFFSET))(this, eventType, s1, s2, s3, o);
		}

		::System::Void AddEvent_5(::System::Xml::XmlEventCache_XmlEventType eventType, ::System::Object* o)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlEventCache_XmlEventType, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_ADDEVENT_5_OFFSET))(this, eventType, o);
		}

		::System::Int32 NewEvent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_NEWEVENT_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Byte>* ToBytes(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLEVENTCACHE_TOBYTES_OFFSET))(buffer, index, count);
		}
	};
}

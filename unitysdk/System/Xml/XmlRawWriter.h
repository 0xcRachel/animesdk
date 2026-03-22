#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/ConformanceLevel.h"
#include "unitysdk/System/Xml/WriteState.h"
#include "unitysdk/System/Xml/XmlStandalone.h"
#include "unitysdk/System/Xml/XmlWriter.h"

namespace System { class String; }
namespace System::Xml { class IXmlNamespaceResolver; }
namespace System::Xml { class XmlRawWriterBase64Encoder; }

#define SYSTEM_XML_XMLRAWWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x17E0BCD0)
#define SYSTEM_XML_XMLRAWWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET UNITYSDK_OFFSET(0x17E0BBB0)
#define SYSTEM_XML_XMLRAWWRITER_GET_WRITESTATE_OFFSET UNITYSDK_OFFSET(0x17E0B860)
#define SYSTEM_XML_XMLRAWWRITER_LOOKUPPREFIX_OFFSET UNITYSDK_OFFSET(0x17E0B800)
#define SYSTEM_XML_XMLRAWWRITER_ONROOTELEMENT_OFFSET UNITYSDK_OFFSET(0x17E0BB80)
#define SYSTEM_XML_XMLRAWWRITER_SET_NAMESPACERESOLVER_OFFSET UNITYSDK_OFFSET(0x17E0BB50)
#define SYSTEM_XML_XMLRAWWRITER_WRITEBASE64_OFFSET UNITYSDK_OFFSET(0x17DFABD0)
#define SYSTEM_XML_XMLRAWWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x17E0B8C0)
#define SYSTEM_XML_XMLRAWWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x17E0B8D0)
#define SYSTEM_XML_XMLRAWWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x17E0BAD0)
#define SYSTEM_XML_XMLRAWWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x17E0B700)
#define SYSTEM_XML_XMLRAWWRITER_WRITEENDBASE64_OFFSET UNITYSDK_OFFSET(0x17E0BC60)
#define SYSTEM_XML_XMLRAWWRITER_WRITEENDDOCUMENT_OFFSET UNITYSDK_OFFSET(0x17E0B6A0)
#define SYSTEM_XML_XMLRAWWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x17E0B710)
#define SYSTEM_XML_XMLRAWWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x17E0BC10)
#define SYSTEM_XML_XMLRAWWRITER_WRITEFULLENDELEMENT_1_OFFSET UNITYSDK_OFFSET(0x17E0BB90)
#define SYSTEM_XML_XMLRAWWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x17E0B770)
#define SYSTEM_XML_XMLRAWWRITER_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x17E0BB30)
#define SYSTEM_XML_XMLRAWWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x17E0BB00)
#define SYSTEM_XML_XMLRAWWRITER_WRITESTARTDOCUMENT_1_OFFSET UNITYSDK_OFFSET(0x17E0B640)
#define SYSTEM_XML_XMLRAWWRITER_WRITESTARTDOCUMENT_OFFSET UNITYSDK_OFFSET(0x17E0B5E0)
#define SYSTEM_XML_XMLRAWWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x17E0BBC0)
#define SYSTEM_XML_XMLRAWWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x17E0B9C0)
#define SYSTEM_XML_XMLRAWWRITER_WRITEVALUE_OFFSET UNITYSDK_OFFSET(0x17E0BB40)
#define SYSTEM_XML_XMLRAWWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x17E0BAC0)
#define SYSTEM_XML_XMLRAWWRITER_WRITEXMLDECLARATION_1_OFFSET UNITYSDK_OFFSET(0x17E0BB70)
#define SYSTEM_XML_XMLRAWWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x17E0BB60)
#define SYSTEM_XML_XMLRAWWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x17DF5E00)

namespace System::Xml
{
	inline static constexpr unsigned int XmlRawWriter_TypeDefinitionIndex = 1823;

	class XmlRawWriter : public ::System::Xml::XmlWriter
	{
	public:
		::System::Xml::XmlRawWriterBase64Encoder* base64Encoder; // 0x10
		::System::Xml::IXmlNamespaceResolver* resolver; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER__CTOR_OFFSET))(this);
		}

		::System::Void WriteStartDocument()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITESTARTDOCUMENT_OFFSET))(this);
		}

		::System::Void WriteStartDocument_1(::System::Boolean standalone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITESTARTDOCUMENT_1_OFFSET))(this, standalone);
		}

		::System::Void WriteEndDocument()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEENDDOCUMENT_OFFSET))(this);
		}

		::System::Void WriteDocType(::System::String* name, ::System::String* pubid, ::System::String* sysid, ::System::String* subset)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEDOCTYPE_OFFSET))(this, name, pubid, sysid, subset);
		}

		::System::Void WriteEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEENDELEMENT_OFFSET))(this);
		}

		::System::Void WriteFullEndElement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEFULLENDELEMENT_OFFSET))(this);
		}

		::System::Void WriteBase64(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEBASE64_OFFSET))(this, buffer, index, count);
		}

		::System::String* LookupPrefix(::System::String* ns)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_LOOKUPPREFIX_OFFSET))(this, ns);
		}

		::System::Xml::WriteState get_WriteState()
		{
			return ((::System::Xml::WriteState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_GET_WRITESTATE_OFFSET))(this);
		}

		::System::Void WriteCData(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITECDATA_OFFSET))(this, text);
		}

		::System::Void WriteCharEntity(::System::Char ch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITECHARENTITY_OFFSET))(this, ch);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char lowChar, ::System::Char highChar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITESURROGATECHARENTITY_OFFSET))(this, lowChar, highChar);
		}

		::System::Void WriteWhitespace(::System::String* ws)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEWHITESPACE_OFFSET))(this, ws);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITECHARS_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITERAW_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteRaw_1(::System::String* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITERAW_1_OFFSET))(this, data);
		}

		::System::Void WriteValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEVALUE_OFFSET))(this, value);
		}

		::System::Void set_NamespaceResolver(::System::Xml::IXmlNamespaceResolver* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::IXmlNamespaceResolver*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_SET_NAMESPACERESOLVER_OFFSET))(this, value);
		}

		::System::Void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlStandalone))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEXMLDECLARATION_OFFSET))(this, standalone);
		}

		::System::Void WriteXmlDeclaration_1(::System::String* xmldecl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEXMLDECLARATION_1_OFFSET))(this, xmldecl);
		}

		::System::Void OnRootElement(::System::Xml::ConformanceLevel conformanceLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::ConformanceLevel))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_ONROOTELEMENT_OFFSET))(this, conformanceLevel);
		}

		::System::Void WriteFullEndElement_1(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEFULLENDELEMENT_1_OFFSET))(this, prefix, localName, ns);
		}

		::System::Boolean get_SupportsNamespaceDeclarationInChunks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET))(this);
		}

		::System::Void WriteStartNamespaceDeclaration(::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET))(this, prefix);
		}

		::System::Void WriteEndNamespaceDeclaration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET))(this);
		}

		::System::Void WriteEndBase64()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_WRITEENDBASE64_OFFSET))(this);
		}

		::System::Void Close(::System::Xml::WriteState currentState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::WriteState))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLRAWWRITER_CLOSE_OFFSET))(this, currentState);
		}
	};
}

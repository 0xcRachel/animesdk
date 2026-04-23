#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Xml/NewLineHandling.h"
#include "unitysdk/System/Xml/XmlCharType.h"
#include "unitysdk/System/Xml/XmlOutputMethod.h"
#include "unitysdk/System/Xml/XmlRawWriter.h"
#include "unitysdk/System/Xml/XmlStandalone.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace System::Text { class Encoding; }
namespace System::Xml { class XmlWriterSettings; }

#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_AMPENTITY_OFFSET UNITYSDK_OFFSET(0x1A18D0D0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_CARRIAGERETURNENTITY_OFFSET UNITYSDK_OFFSET(0x1A18D130)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_CHARENTITY_OFFSET UNITYSDK_OFFSET(0x1A18D5F0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_CHARTOUTF8_OFFSET UNITYSDK_OFFSET(0x1A18D720)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1A18CC60)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_ENCODECHAR_OFFSET UNITYSDK_OFFSET(0x1A18D670)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_ENCODEMULTIBYTEUTF8_OFFSET UNITYSDK_OFFSET(0x1A18D3C0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_ENCODESURROGATE_OFFSET UNITYSDK_OFFSET(0x1A18D150)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_FLUSHBUFFER_OFFSET UNITYSDK_OFFSET(0x1A18CE10)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_FLUSHENCODER_OFFSET UNITYSDK_OFFSET(0x1A18CDC0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x1A18CDD0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET UNITYSDK_OFFSET(0x1A18AFA0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_GTENTITY_OFFSET UNITYSDK_OFFSET(0x1A18D0F0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_INVALIDXMLCHAR_OFFSET UNITYSDK_OFFSET(0x1A18D2A0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_ISSURROGATEBYTE_OFFSET UNITYSDK_OFFSET(0x1A18D0C0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_LINEFEEDENTITY_OFFSET UNITYSDK_OFFSET(0x1A18D140)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_LTENTITY_OFFSET UNITYSDK_OFFSET(0x1A18D0E0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_QUOTEENTITY_OFFSET UNITYSDK_OFFSET(0x1A18D100)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_RAWENDCDATA_OFFSET UNITYSDK_OFFSET(0x1A18D5C0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_RAWSTARTCDATA_OFFSET UNITYSDK_OFFSET(0x1A18D5D0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_RAWTEXT_1_OFFSET UNITYSDK_OFFSET(0x1A18D460)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_RAWTEXT_OFFSET UNITYSDK_OFFSET(0x1A18A440)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x1A18A8A0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_TABENTITY_OFFSET UNITYSDK_OFFSET(0x1A18D120)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_VALIDATECONTENTCHARS_OFFSET UNITYSDK_OFFSET(0x1A189E00)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEATTRIBUTETEXTBLOCK_OFFSET UNITYSDK_OFFSET(0x1A18C010)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECDATASECTION_OFFSET UNITYSDK_OFFSET(0x1A18B290)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x1A18AFB0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1A18BDE0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x1A18C840)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECOMMENTORPI_OFFSET UNITYSDK_OFFSET(0x1A18B7C0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x1A18B600)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x1A18A4E0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEELEMENTTEXTBLOCK_OFFSET UNITYSDK_OFFSET(0x1A18C310)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A18AD60)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1A18A8F0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x1A18AF50)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x1A18BD20)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x1A18AAE0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITENAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x1A18ADB0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITENEWLINE_OFFSET UNITYSDK_OFFSET(0x1A18D400)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x1A18BBA0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITERAWWITHCHARCHECKING_OFFSET UNITYSDK_OFFSET(0x1A18C900)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x1A18CC20)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x1A18C8A0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1A18AC20)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x1A18A7D0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x1A18AE20)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x1A18C6A0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x1A18C6E0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x1A18BFD0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEXMLDECLARATION_1_OFFSET UNITYSDK_OFFSET(0x1A18A470)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x1A18A280)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A18A170)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A189CD0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlUtf8RawTextWriter_TypeDefinitionIndex = 1858;

	class XmlUtf8RawTextWriter : public ::System::Xml::XmlRawWriter
	{
	public:
		::System::Xml::XmlCharType xmlCharType; // 0x20
		::System::Text::Encoding* encoding; // 0x28
		::System::IO::Stream* stream; // 0x30
		::System::String* newLineChars; // 0x38
		::Il2CppArray<::System::Byte>* bufBytes; // 0x40
		::System::Int32 cdataPos; // 0x48
		::System::Int32 textPos; // 0x4C
		::System::Boolean autoXmlDeclaration; // 0x50
		::System::Boolean hadDoubleBracket; // 0x51
		::System::Boolean useAsync; // 0x52
		::System::Boolean closeOutput; // 0x53
		::System::Boolean mergeCDataSections; // 0x54
		::System::Xml::XmlStandalone standalone; // 0x58
		::System::Int32 bufLen; // 0x5C
		::System::Xml::NewLineHandling newLineHandling; // 0x60
		::System::Int32 bufPos; // 0x64
		::System::Xml::XmlOutputMethod outputMethod; // 0x68
		::System::Int32 attrEndPos; // 0x6C
		::System::Int32 contentPos; // 0x70
		::System::Boolean writeToNull; // 0x74
		::System::Boolean checkCharacters; // 0x75
		::System::Boolean omitXmlDeclaration; // 0x76
		::System::Boolean inAttributeValue; // 0x77

		::System::Void _ctor(::System::Xml::XmlWriterSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER__CTOR_OFFSET))(this, settings);
		}

		::System::Void _ctor_1(::System::IO::Stream* stream, ::System::Xml::XmlWriterSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Xml::XmlWriterSettings*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER__CTOR_1_OFFSET))(this, stream, settings);
		}

		::System::Void WriteXmlDeclaration(::System::Xml::XmlStandalone standalone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Xml::XmlStandalone))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET))(this, standalone);
		}

		::System::Void WriteXmlDeclaration_1(::System::String* xmldecl)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEXMLDECLARATION_1_OFFSET))(this, xmldecl);
		}

		::System::Void WriteDocType(::System::String* name, ::System::String* pubid, ::System::String* sysid, ::System::String* subset)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEDOCTYPE_OFFSET))(this, name, pubid, sysid, subset);
		}

		::System::Void WriteStartElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITESTARTELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void StartElementContent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_STARTELEMENTCONTENT_OFFSET))(this);
		}

		::System::Void WriteEndElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEENDELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteFullEndElement(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEFULLENDELEMENT_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteStartAttribute(::System::String* prefix, ::System::String* localName, ::System::String* ns)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET))(this, prefix, localName, ns);
		}

		::System::Void WriteEndAttribute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEENDATTRIBUTE_OFFSET))(this);
		}

		::System::Void WriteNamespaceDeclaration(::System::String* prefix, ::System::String* namespaceName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITENAMESPACEDECLARATION_OFFSET))(this, prefix, namespaceName);
		}

		::System::Boolean get_SupportsNamespaceDeclarationInChunks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET))(this);
		}

		::System::Void WriteStartNamespaceDeclaration(::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET))(this, prefix);
		}

		::System::Void WriteEndNamespaceDeclaration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET))(this);
		}

		::System::Void WriteCData(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECDATA_OFFSET))(this, text);
		}

		::System::Void WriteComment(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECOMMENT_OFFSET))(this, text);
		}

		::System::Void WriteProcessingInstruction(::System::String* name, ::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET))(this, name, text);
		}

		::System::Void WriteEntityRef(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEENTITYREF_OFFSET))(this, name);
		}

		::System::Void WriteCharEntity(::System::Char ch)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECHARENTITY_OFFSET))(this, ch);
		}

		::System::Void WriteWhitespace(::System::String* ws)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEWHITESPACE_OFFSET))(this, ws);
		}

		::System::Void WriteString(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITESTRING_OFFSET))(this, text);
		}

		::System::Void WriteSurrogateCharEntity(::System::Char lowChar, ::System::Char highChar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET))(this, lowChar, highChar);
		}

		::System::Void WriteChars(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECHARS_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteRaw(::Il2CppArray<::System::Char>* buffer, ::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITERAW_OFFSET))(this, buffer, index, count);
		}

		::System::Void WriteRaw_1(::System::String* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITERAW_1_OFFSET))(this, data);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_CLOSE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_FLUSH_OFFSET))(this);
		}

		::System::Void FlushBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_FLUSHBUFFER_OFFSET))(this);
		}

		::System::Void FlushEncoder()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_FLUSHENCODER_OFFSET))(this);
		}

		::System::Void WriteAttributeTextBlock(::System::Char* pSrc, ::System::Char* pSrcEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEATTRIBUTETEXTBLOCK_OFFSET))(this, pSrc, pSrcEnd);
		}

		::System::Void WriteElementTextBlock(::System::Char* pSrc, ::System::Char* pSrcEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEELEMENTTEXTBLOCK_OFFSET))(this, pSrc, pSrcEnd);
		}

		::System::Void RawText(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_RAWTEXT_OFFSET))(this, s);
		}

		::System::Void RawText_1(::System::Char* pSrcBegin, ::System::Char* pSrcEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_RAWTEXT_1_OFFSET))(this, pSrcBegin, pSrcEnd);
		}

		::System::Void WriteRawWithCharChecking(::System::Char* pSrcBegin, ::System::Char* pSrcEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Char*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITERAWWITHCHARCHECKING_OFFSET))(this, pSrcBegin, pSrcEnd);
		}

		::System::Void WriteCommentOrPi(::System::String* text, ::System::Int32 stopChar)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECOMMENTORPI_OFFSET))(this, text, stopChar);
		}

		::System::Void WriteCDataSection(::System::String* text)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECDATASECTION_OFFSET))(this, text);
		}

		static ::System::Boolean IsSurrogateByte(::System::Byte b)
		{
			return ((::System::Boolean(*)(::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_ISSURROGATEBYTE_OFFSET))(b);
		}

		static ::System::Byte* EncodeSurrogate(::System::Char* pSrc, ::System::Char* pSrcEnd, ::System::Byte* pDst)
		{
			return ((::System::Byte*(*)(::System::Char*, ::System::Char*, ::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_ENCODESURROGATE_OFFSET))(pSrc, pSrcEnd, pDst);
		}

		::System::Byte* InvalidXmlChar(::System::Int32 ch, ::System::Byte* pDst, ::System::Boolean entitize)
		{
			return ((::System::Byte*(*)(::PVOID, ::System::Int32, ::System::Byte*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_INVALIDXMLCHAR_OFFSET))(this, ch, pDst, entitize);
		}

		::System::Void EncodeChar(::System::Char*& pSrc, ::System::Char* pSrcEnd, ::System::Byte*& pDst)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*&, ::System::Char*, ::System::Byte*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_ENCODECHAR_OFFSET))(this, pSrc, pSrcEnd, pDst);
		}

		static ::System::Byte* EncodeMultibyteUTF8(::System::Int32 ch, ::System::Byte* pDst)
		{
			return ((::System::Byte*(*)(::System::Int32, ::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_ENCODEMULTIBYTEUTF8_OFFSET))(ch, pDst);
		}

		static ::System::Void CharToUTF8(::System::Char*& pSrc, ::System::Char* pSrcEnd, ::System::Byte*& pDst)
		{
			return ((::System::Void(*)(::System::Char*&, ::System::Char*, ::System::Byte*&))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_CHARTOUTF8_OFFSET))(pSrc, pSrcEnd, pDst);
		}

		::System::Byte* WriteNewLine(::System::Byte* pDst)
		{
			return ((::System::Byte*(*)(::PVOID, ::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITENEWLINE_OFFSET))(this, pDst);
		}

		static ::System::Byte* LtEntity(::System::Byte* pDst)
		{
			return ((::System::Byte*(*)(::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_LTENTITY_OFFSET))(pDst);
		}

		static ::System::Byte* GtEntity(::System::Byte* pDst)
		{
			return ((::System::Byte*(*)(::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_GTENTITY_OFFSET))(pDst);
		}

		static ::System::Byte* AmpEntity(::System::Byte* pDst)
		{
			return ((::System::Byte*(*)(::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_AMPENTITY_OFFSET))(pDst);
		}

		static ::System::Byte* QuoteEntity(::System::Byte* pDst)
		{
			return ((::System::Byte*(*)(::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_QUOTEENTITY_OFFSET))(pDst);
		}

		static ::System::Byte* TabEntity(::System::Byte* pDst)
		{
			return ((::System::Byte*(*)(::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_TABENTITY_OFFSET))(pDst);
		}

		static ::System::Byte* LineFeedEntity(::System::Byte* pDst)
		{
			return ((::System::Byte*(*)(::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_LINEFEEDENTITY_OFFSET))(pDst);
		}

		static ::System::Byte* CarriageReturnEntity(::System::Byte* pDst)
		{
			return ((::System::Byte*(*)(::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_CARRIAGERETURNENTITY_OFFSET))(pDst);
		}

		static ::System::Byte* CharEntity(::System::Byte* pDst, ::System::Char ch)
		{
			return ((::System::Byte*(*)(::System::Byte*, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_CHARENTITY_OFFSET))(pDst, ch);
		}

		static ::System::Byte* RawStartCData(::System::Byte* pDst)
		{
			return ((::System::Byte*(*)(::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_RAWSTARTCDATA_OFFSET))(pDst);
		}

		static ::System::Byte* RawEndCData(::System::Byte* pDst)
		{
			return ((::System::Byte*(*)(::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_RAWENDCDATA_OFFSET))(pDst);
		}

		::System::Void ValidateContentChars(::System::String* chars, ::System::String* propertyName, ::System::Boolean allowOnlyWhitespace)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_XML_XMLUTF8RAWTEXTWRITER_VALIDATECONTENTCHARS_OFFSET))(this, chars, propertyName, allowOnlyWhitespace);
		}
	};
}

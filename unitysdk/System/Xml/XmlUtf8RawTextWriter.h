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

#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_AMPENTITY_OFFSET UNITYSDK_OFFSET(0x17E303A0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_CARRIAGERETURNENTITY_OFFSET UNITYSDK_OFFSET(0x17E30400)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_CHARENTITY_OFFSET UNITYSDK_OFFSET(0x17E308C0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_CHARTOUTF8_OFFSET UNITYSDK_OFFSET(0x17E309F0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_CLOSE_OFFSET UNITYSDK_OFFSET(0x17E2FF30)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_ENCODECHAR_OFFSET UNITYSDK_OFFSET(0x17E30940)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_ENCODEMULTIBYTEUTF8_OFFSET UNITYSDK_OFFSET(0x17E30690)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_ENCODESURROGATE_OFFSET UNITYSDK_OFFSET(0x17E30420)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_FLUSHBUFFER_OFFSET UNITYSDK_OFFSET(0x17E300E0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_FLUSHENCODER_OFFSET UNITYSDK_OFFSET(0x17E30090)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_FLUSH_OFFSET UNITYSDK_OFFSET(0x17E300A0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_GET_SUPPORTSNAMESPACEDECLARATIONINCHUNKS_OFFSET UNITYSDK_OFFSET(0x17E2E270)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_GTENTITY_OFFSET UNITYSDK_OFFSET(0x17E303C0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_INVALIDXMLCHAR_OFFSET UNITYSDK_OFFSET(0x17E30570)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_ISSURROGATEBYTE_OFFSET UNITYSDK_OFFSET(0x17E30390)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_LINEFEEDENTITY_OFFSET UNITYSDK_OFFSET(0x17E30410)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_LTENTITY_OFFSET UNITYSDK_OFFSET(0x17E303B0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_QUOTEENTITY_OFFSET UNITYSDK_OFFSET(0x17E303D0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_RAWENDCDATA_OFFSET UNITYSDK_OFFSET(0x17E30890)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_RAWSTARTCDATA_OFFSET UNITYSDK_OFFSET(0x17E308A0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_RAWTEXT_1_OFFSET UNITYSDK_OFFSET(0x17E30730)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_RAWTEXT_OFFSET UNITYSDK_OFFSET(0x17E2D710)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_STARTELEMENTCONTENT_OFFSET UNITYSDK_OFFSET(0x17E2DB70)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_TABENTITY_OFFSET UNITYSDK_OFFSET(0x17E303F0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_VALIDATECONTENTCHARS_OFFSET UNITYSDK_OFFSET(0x17E2D0D0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEATTRIBUTETEXTBLOCK_OFFSET UNITYSDK_OFFSET(0x17E2F2E0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECDATASECTION_OFFSET UNITYSDK_OFFSET(0x17E2E560)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECDATA_OFFSET UNITYSDK_OFFSET(0x17E2E280)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECHARENTITY_OFFSET UNITYSDK_OFFSET(0x17E2F0B0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECHARS_OFFSET UNITYSDK_OFFSET(0x17E2FB10)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECOMMENTORPI_OFFSET UNITYSDK_OFFSET(0x17E2EA90)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITECOMMENT_OFFSET UNITYSDK_OFFSET(0x17E2E8D0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEDOCTYPE_OFFSET UNITYSDK_OFFSET(0x17E2D7B0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEELEMENTTEXTBLOCK_OFFSET UNITYSDK_OFFSET(0x17E2F5E0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEENDATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x17E2E030)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEENDELEMENT_OFFSET UNITYSDK_OFFSET(0x17E2DBC0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEENDNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x17E2E220)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEENTITYREF_OFFSET UNITYSDK_OFFSET(0x17E2EFF0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEFULLENDELEMENT_OFFSET UNITYSDK_OFFSET(0x17E2DDB0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITENAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x17E2E080)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITENEWLINE_OFFSET UNITYSDK_OFFSET(0x17E306D0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEPROCESSINGINSTRUCTION_OFFSET UNITYSDK_OFFSET(0x17E2EE70)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITERAWWITHCHARCHECKING_OFFSET UNITYSDK_OFFSET(0x17E2FBD0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITERAW_1_OFFSET UNITYSDK_OFFSET(0x17E2FEF0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITERAW_OFFSET UNITYSDK_OFFSET(0x17E2FB70)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITESTARTATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x17E2DEF0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITESTARTELEMENT_OFFSET UNITYSDK_OFFSET(0x17E2DAA0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITESTARTNAMESPACEDECLARATION_OFFSET UNITYSDK_OFFSET(0x17E2E0F0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITESTRING_OFFSET UNITYSDK_OFFSET(0x17E2F970)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITESURROGATECHARENTITY_OFFSET UNITYSDK_OFFSET(0x17E2F9B0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEWHITESPACE_OFFSET UNITYSDK_OFFSET(0x17E2F2A0)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEXMLDECLARATION_1_OFFSET UNITYSDK_OFFSET(0x17E2D740)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER_WRITEXMLDECLARATION_OFFSET UNITYSDK_OFFSET(0x17E2D550)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E2D440)
#define SYSTEM_XML_XMLUTF8RAWTEXTWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x17E2CFA0)

namespace System::Xml
{
	inline static constexpr unsigned int XmlUtf8RawTextWriter_TypeDefinitionIndex = 1852;

	class XmlUtf8RawTextWriter : public ::System::Xml::XmlRawWriter
	{
	public:
		::System::Xml::XmlCharType xmlCharType; // 0x20
		::System::Text::Encoding* encoding; // 0x28
		::System::IO::Stream* stream; // 0x30
		::System::String* newLineChars; // 0x38
		::Il2CppArray<::System::Byte>* bufBytes; // 0x40
		::System::Xml::NewLineHandling newLineHandling; // 0x48
		::System::Int32 attrEndPos; // 0x4C
		::System::Int32 bufLen; // 0x50
		::System::Int32 cdataPos; // 0x54
		::System::Int32 bufPos; // 0x58
		::System::Xml::XmlStandalone standalone; // 0x5C
		::System::Boolean autoXmlDeclaration; // 0x60
		::System::Boolean closeOutput; // 0x61
		::System::Boolean hadDoubleBracket; // 0x62
		::System::Boolean checkCharacters; // 0x63
		::System::Xml::XmlOutputMethod outputMethod; // 0x64
		::System::Int32 contentPos; // 0x68
		::System::Boolean useAsync; // 0x6C
		::System::Boolean writeToNull; // 0x6D
		::System::Boolean inAttributeValue; // 0x6E
		::System::Boolean mergeCDataSections; // 0x6F
		::System::Boolean omitXmlDeclaration; // 0x70
		::System::Int32 textPos; // 0x74

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

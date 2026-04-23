#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_DOMAINNAMEHELPER_IDNEQUIVALENT_1_OFFSET UNITYSDK_OFFSET(0x1831FB30)
#define SYSTEM_DOMAINNAMEHELPER_IDNEQUIVALENT_OFFSET UNITYSDK_OFFSET(0x1831F830)
#define SYSTEM_DOMAINNAMEHELPER_ISASCIILETTERORDIGIT_OFFSET UNITYSDK_OFFSET(0x1831F5F0)
#define SYSTEM_DOMAINNAMEHELPER_ISIDNACE_1_OFFSET UNITYSDK_OFFSET(0x1831FDB0)
#define SYSTEM_DOMAINNAMEHELPER_ISIDNACE_OFFSET UNITYSDK_OFFSET(0x1831FDE0)
#define SYSTEM_DOMAINNAMEHELPER_ISVALIDBYIRI_OFFSET UNITYSDK_OFFSET(0x1831F660)
#define SYSTEM_DOMAINNAMEHELPER_ISVALIDDOMAINLABELCHARACTER_OFFSET UNITYSDK_OFFSET(0x1831F620)
#define SYSTEM_DOMAINNAMEHELPER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1831F480)
#define SYSTEM_DOMAINNAMEHELPER_PARSECANONICALNAME_OFFSET UNITYSDK_OFFSET(0x1831F2B0)
#define SYSTEM_DOMAINNAMEHELPER_UNICODEEQUIVALENT_1_OFFSET UNITYSDK_OFFSET(0x18320020)
#define SYSTEM_DOMAINNAMEHELPER_UNICODEEQUIVALENT_OFFSET UNITYSDK_OFFSET(0x1831FEE0)

namespace System
{
	inline static constexpr unsigned int DomainNameHelper_TypeDefinitionIndex = 2469;

	class DomainNameHelper : public ::System::Object
	{
	public:
		static ::System::String* ParseCanonicalName(::System::String* str, ::System::Int32 start, ::System::Int32 end, ::System::Boolean& loopback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_PARSECANONICALNAME_OFFSET))(str, start, end, loopback);
		}

		static ::System::Boolean IsValid(::System::Char* name, ::System::UInt16 pos, ::System::Int32& returnedEnd, ::System::Boolean& notCanonical, ::System::Boolean notImplicitFile)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::UInt16, ::System::Int32&, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISVALID_OFFSET))(name, pos, returnedEnd, notCanonical, notImplicitFile);
		}

		static ::System::Boolean IsValidByIri(::System::Char* name, ::System::UInt16 pos, ::System::Int32& returnedEnd, ::System::Boolean& notCanonical, ::System::Boolean notImplicitFile)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::UInt16, ::System::Int32&, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISVALIDBYIRI_OFFSET))(name, pos, returnedEnd, notCanonical, notImplicitFile);
		}

		static ::System::String* IdnEquivalent(::System::Char* hostname, ::System::Int32 start, ::System::Int32 end, ::System::Boolean& allAscii, ::System::Boolean& atLeastOneValidIdn)
		{
			return ((::System::String*(*)(::System::Char*, ::System::Int32, ::System::Int32, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_IDNEQUIVALENT_OFFSET))(hostname, start, end, allAscii, atLeastOneValidIdn);
		}

		static ::System::String* IdnEquivalent_1(::System::Char* hostname, ::System::Int32 start, ::System::Int32 end, ::System::Boolean& allAscii, ::System::String*& bidiStrippedHost)
		{
			return ((::System::String*(*)(::System::Char*, ::System::Int32, ::System::Int32, ::System::Boolean&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_IDNEQUIVALENT_1_OFFSET))(hostname, start, end, allAscii, bidiStrippedHost);
		}

		static ::System::Boolean IsIdnAce(::System::String* input, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISIDNACE_OFFSET))(input, index);
		}

		static ::System::Boolean IsIdnAce_1(::System::Char* input, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::Char*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISIDNACE_1_OFFSET))(input, index);
		}

		static ::System::String* UnicodeEquivalent(::System::String* idnHost, ::System::Char* hostname, ::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::String*(*)(::System::String*, ::System::Char*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_UNICODEEQUIVALENT_OFFSET))(idnHost, hostname, start, end);
		}

		static ::System::String* UnicodeEquivalent_1(::System::Char* hostname, ::System::Int32 start, ::System::Int32 end, ::System::Boolean& allAscii, ::System::Boolean& atLeastOneValidIdn)
		{
			return ((::System::String*(*)(::System::Char*, ::System::Int32, ::System::Int32, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_UNICODEEQUIVALENT_1_OFFSET))(hostname, start, end, allAscii, atLeastOneValidIdn);
		}

		static ::System::Boolean IsASCIILetterOrDigit(::System::Char character, ::System::Boolean& notCanonical)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISASCIILETTERORDIGIT_OFFSET))(character, notCanonical);
		}

		static ::System::Boolean IsValidDomainLabelCharacter(::System::Char character, ::System::Boolean& notCanonical)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISVALIDDOMAINLABELCHARACTER_OFFSET))(character, notCanonical);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_CASEINSENSITIVEASCII_COMPARE_OFFSET UNITYSDK_OFFSET(0x1832C1C0)
#define SYSTEM_NET_CASEINSENSITIVEASCII_EQUALS_OFFSET UNITYSDK_OFFSET(0x1832C540)
#define SYSTEM_NET_CASEINSENSITIVEASCII_FASTGETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1832C420)
#define SYSTEM_NET_CASEINSENSITIVEASCII_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1832C090)
#define SYSTEM_NET_CASEINSENSITIVEASCII__CCTOR_OFFSET UNITYSDK_OFFSET(0x1832C710)
#define SYSTEM_NET_CASEINSENSITIVEASCII__CTOR_OFFSET UNITYSDK_OFFSET(0x1832C700)

namespace System::Net
{
	inline static constexpr unsigned int CaseInsensitiveAscii_TypeDefinitionIndex = 2754;

	class CaseInsensitiveAscii : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_AsciiToLower()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(CaseInsensitiveAscii_TypeDefinitionIndex)->GetStaticField(0xC1D0);
		}
		static ::System::Net::CaseInsensitiveAscii** StaticGet_StaticInstance()
		{
			return (::System::Net::CaseInsensitiveAscii**)Il2CppClass::FromTypeDefinitionIndex(CaseInsensitiveAscii_TypeDefinitionIndex)->GetStaticField(0xC1D8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_CASEINSENSITIVEASCII__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_CASEINSENSITIVEASCII__CCTOR_OFFSET))();
		}

		::System::Int32 GetHashCode(::System::Object* myObject)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CASEINSENSITIVEASCII_GETHASHCODE_OFFSET))(this, myObject);
		}

		::System::Int32 Compare(::System::Object* firstObject, ::System::Object* secondObject)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CASEINSENSITIVEASCII_COMPARE_OFFSET))(this, firstObject, secondObject);
		}

		::System::Int32 FastGetHashCode(::System::String* myString)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CASEINSENSITIVEASCII_FASTGETHASHCODE_OFFSET))(this, myString);
		}

		::System::Boolean Equals(::System::Object* firstObject, ::System::Object* secondObject)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CASEINSENSITIVEASCII_EQUALS_OFFSET))(this, firstObject, secondObject);
		}
	};
}

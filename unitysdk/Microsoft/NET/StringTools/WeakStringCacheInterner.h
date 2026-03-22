#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/NET/StringTools/InternableString.h"
#include "unitysdk/Microsoft/NET/StringTools/WeakStringCacheInterner_InternResult.h"
#include "unitysdk/System/Object.h"

namespace Microsoft::NET::StringTools { class WeakStringCache; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHEINTERNER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156B4610)
#define MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHEINTERNER_INTERNABLETOSTRING_OFFSET UNITYSDK_OFFSET(0x156B2F40)
#define MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHEINTERNER_INTERN_OFFSET UNITYSDK_OFFSET(0x156B45D0)
#define MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHEINTERNER__CCTOR_OFFSET UNITYSDK_OFFSET(0x156B4770)
#define MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHEINTERNER__CTOR_OFFSET UNITYSDK_OFFSET(0x156B4670)

namespace Microsoft::NET::StringTools
{
	inline static constexpr unsigned int WeakStringCacheInterner_TypeDefinitionIndex = 8818;

	class WeakStringCacheInterner : public ::System::Object
	{
	public:
		static ::Microsoft::NET::StringTools::WeakStringCacheInterner** StaticGet_Instance()
		{
			return (::Microsoft::NET::StringTools::WeakStringCacheInterner**)Il2CppClass::FromTypeDefinitionIndex(WeakStringCacheInterner_TypeDefinitionIndex)->GetStaticField(0x6C0);
		}
		::Microsoft::NET::StringTools::WeakStringCache* _weakStringCache; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _internCallCountsByString; // 0x18
		::System::Int32 _regularInternHits; // 0x20
		::System::Int32 _regularInternMisses; // 0x24
		::System::Int32 _internEliminatedStrings; // 0x28
		::System::Int32 _internEliminatedChars; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHEINTERNER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHEINTERNER__CCTOR_OFFSET))();
		}

		::Microsoft::NET::StringTools::WeakStringCacheInterner_InternResult Intern(::Microsoft::NET::StringTools::InternableString& candidate, ::System::String*& interned)
		{
			return ((::Microsoft::NET::StringTools::WeakStringCacheInterner_InternResult(*)(::PVOID, ::Microsoft::NET::StringTools::InternableString&, ::System::String*&))((::PBYTE)hIl2Cpp + MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHEINTERNER_INTERN_OFFSET))(this, candidate, interned);
		}

		::System::String* InternableToString(::Microsoft::NET::StringTools::InternableString& candidate)
		{
			return ((::System::String*(*)(::PVOID, ::Microsoft::NET::StringTools::InternableString&))((::PBYTE)hIl2Cpp + MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHEINTERNER_INTERNABLETOSTRING_OFFSET))(this, candidate);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHEINTERNER_DISPOSE_OFFSET))(this);
		}
	};
}

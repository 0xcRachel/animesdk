#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/NET/StringTools/InternableString.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/InteropServices/GCHandle.h"

namespace System { class String; }

#define MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHE_STRINGWEAKHANDLE_FREE_OFFSET UNITYSDK_OFFSET(0x156B4160)
#define MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHE_STRINGWEAKHANDLE_GETSTRING_OFFSET UNITYSDK_OFFSET(0x156B3B70)
#define MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHE_STRINGWEAKHANDLE_GET_ISUSED_OFFSET UNITYSDK_OFFSET(0x156B4110)
#define MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHE_STRINGWEAKHANDLE_SETSTRING_OFFSET UNITYSDK_OFFSET(0x156B3BC0)
#define MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHE_STRINGWEAKHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x156B3BF0)

namespace Microsoft::NET::StringTools
{
	inline static constexpr unsigned int WeakStringCache_StringWeakHandle_TypeDefinitionIndex = 8817;

	class WeakStringCache_StringWeakHandle : public ::System::Object
	{
	public:
		::System::Runtime::InteropServices::GCHandle WeakHandle; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHE_STRINGWEAKHANDLE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsUsed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHE_STRINGWEAKHANDLE_GET_ISUSED_OFFSET))(this);
		}

		::System::String* GetString(::Microsoft::NET::StringTools::InternableString& internable)
		{
			return ((::System::String*(*)(::PVOID, ::Microsoft::NET::StringTools::InternableString&))((::PBYTE)hIl2Cpp + MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHE_STRINGWEAKHANDLE_GETSTRING_OFFSET))(this, internable);
		}

		::System::Void SetString(::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHE_STRINGWEAKHANDLE_SETSTRING_OFFSET))(this, str);
		}

		::System::Void Free()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHE_STRINGWEAKHANDLE_FREE_OFFSET))(this);
		}
	};
}

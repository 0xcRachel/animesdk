#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Microsoft/NET/StringTools/InternableString.h"
#include "unitysdk/System/Object.h"

namespace Microsoft::NET::StringTools { class WeakStringCache_StringWeakHandle; }
namespace System { class String; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }

#define MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHE_DISPOSEIMPL_OFFSET UNITYSDK_OFFSET(0x156B41C0)
#define MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156B44E0)
#define MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x156B4560)
#define MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHE_GETORCREATEENTRY_OFFSET UNITYSDK_OFFSET(0x156B37F0)
#define MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHE_SCAVENGE_OFFSET UNITYSDK_OFFSET(0x156B3C00)
#define MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x156B3730)

namespace Microsoft::NET::StringTools
{
	inline static constexpr unsigned int WeakStringCache_TypeDefinitionIndex = 8816;

	class WeakStringCache : public ::System::Object
	{
	public:
		::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Int32, ::Microsoft::NET::StringTools::WeakStringCache_StringWeakHandle*>* _stringsByHashCode; // 0x10
		::System::Int32 _scavengeThreshold; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHE__CTOR_OFFSET))(this);
		}

		::System::String* GetOrCreateEntry(::Microsoft::NET::StringTools::InternableString& internable, ::System::Boolean& cacheHit)
		{
			return ((::System::String*(*)(::PVOID, ::Microsoft::NET::StringTools::InternableString&, ::System::Boolean&))((::PBYTE)hIl2Cpp + MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHE_GETORCREATEENTRY_OFFSET))(this, internable, cacheHit);
		}

		::System::Void Scavenge()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHE_SCAVENGE_OFFSET))(this);
		}

		::System::Void DisposeImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHE_DISPOSEIMPL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHE_DISPOSE_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICROSOFT_NET_STRINGTOOLS_WEAKSTRINGCACHE_FINALIZE_OFFSET))(this);
		}
	};
}

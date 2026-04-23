#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Version; }

#define SYSTEM_NET_HTTPVERSION__CCTOR_OFFSET UNITYSDK_OFFSET(0x176BC450)

namespace System::Net
{
	inline static constexpr unsigned int HttpVersion_TypeDefinitionIndex = 2728;

	class HttpVersion : public ::System::Object
	{
	public:
		static ::System::Version** StaticGet_Version11()
		{
			return (::System::Version**)Il2CppClass::FromTypeDefinitionIndex(HttpVersion_TypeDefinitionIndex)->GetStaticField(0xB960);
		}
		static ::System::Version** StaticGet_Version10()
		{
			return (::System::Version**)Il2CppClass::FromTypeDefinitionIndex(HttpVersion_TypeDefinitionIndex)->GetStaticField(0xB968);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPVERSION__CCTOR_OFFSET))();
		}
	};
}

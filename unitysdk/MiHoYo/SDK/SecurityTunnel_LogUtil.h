#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_SECURITYTUNNEL_LOGUTIL_FORMATBYTES_OFFSET UNITYSDK_OFFSET(0x8247790)
#define MIHOYO_SDK_SECURITYTUNNEL_LOGUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x824C8D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_LogUtil_TypeDefinitionIndex = 36235;

	class SecurityTunnel_LogUtil : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOGUTIL__CTOR_OFFSET))(this);
		}

		static ::System::String* FormatBytes(::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOGUTIL_FORMATBYTES_OFFSET))(bytes);
		}
	};
}

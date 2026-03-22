#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }

#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x81C9AD0)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS28_0__INITSDK_B__2_OFFSET UNITYSDK_OFFSET(0x81C9AE0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKEOSInterface___c__DisplayClass28_0_TypeDefinitionIndex = 36130;

	class MiHoYoSDKEOSInterface___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::JSONObject* objectJson; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Void _InitSDK_b__2(::System::Int32 ret, ::System::String* epicUserId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS28_0__INITSDK_B__2_OFFSET))(this, ret, epicUserId);
		}
	};
}

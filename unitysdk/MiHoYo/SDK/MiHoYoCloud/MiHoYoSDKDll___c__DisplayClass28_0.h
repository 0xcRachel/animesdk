#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15F45420)
#define MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL___C__DISPLAYCLASS28_0__ONINITRESPONSE_B__0_OFFSET UNITYSDK_OFFSET(0x15F47A20)

namespace MiHoYo::SDK::MiHoYoCloud
{
	inline static constexpr unsigned int MiHoYoSDKDll___c__DisplayClass28_0_TypeDefinitionIndex = 7737;

	class MiHoYoSDKDll___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::System::String* response; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnInitResponse_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOCLOUD_MIHOYOSDKDLL___C__DISPLAYCLASS28_0__ONINITRESPONSE_B__0_OFFSET))(this);
		}
	};
}

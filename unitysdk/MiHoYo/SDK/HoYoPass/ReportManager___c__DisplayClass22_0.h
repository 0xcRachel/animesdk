#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15839A20)
#define MIHOYO_SDK_HOYOPASS_REPORTMANAGER___C__DISPLAYCLASS22_0__WARNING_B__0_OFFSET UNITYSDK_OFFSET(0x1583A9E0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int ReportManager___c__DisplayClass22_0_TypeDefinitionIndex = 7206;

	class ReportManager___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::String* eventName; // 0x10
		::System::String* msg; // 0x18
		::System::String* module; // 0x20
		::System::Int32 tkCode; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _Warning_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_REPORTMANAGER___C__DISPLAYCLASS22_0__WARNING_B__0_OFFSET))(this);
		}
	};
}

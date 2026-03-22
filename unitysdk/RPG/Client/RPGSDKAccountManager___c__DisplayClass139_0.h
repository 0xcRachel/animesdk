#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/MiHoYoSDKUniWebViewMessage.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_RPGSDKACCOUNTMANAGER___C__DISPLAYCLASS139_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9D5BCB0)
#define RPG_CLIENT_RPGSDKACCOUNTMANAGER___C__DISPLAYCLASS139_0___ONUNIWEBVIEWMESSAGEOPENITEMDETAILDIALOG_B__0_OFFSET UNITYSDK_OFFSET(0x9D5F090)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGSDKAccountManager___c__DisplayClass139_0_TypeDefinitionIndex = 48423;

	class RPGSDKAccountManager___c__DisplayClass139_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKUniWebViewMessage message; // 0x10
		::System::UInt32 itemID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGSDKACCOUNTMANAGER___C__DISPLAYCLASS139_0__CTOR_OFFSET))(this);
		}

		::System::Void __OnUniWebViewMessageOpenItemDetailDialog_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGSDKACCOUNTMANAGER___C__DISPLAYCLASS139_0___ONUNIWEBVIEWMESSAGEOPENITEMDETAILDIALOG_B__0_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PrefGroup.h"

namespace System { class String; }

#define RPG_CLIENT_PUSHMESSAGESETTINGS_GET_ENABLEPUSHEXPEDITIONFINISH_OFFSET UNITYSDK_OFFSET(0x17151240)
#define RPG_CLIENT_PUSHMESSAGESETTINGS_GET_ENABLEPUSHSTAMINAFULL_OFFSET UNITYSDK_OFFSET(0x17151100)
#define RPG_CLIENT_PUSHMESSAGESETTINGS_SET_ENABLEPUSHEXPEDITIONFINISH_OFFSET UNITYSDK_OFFSET(0x171512E0)
#define RPG_CLIENT_PUSHMESSAGESETTINGS_SET_ENABLEPUSHSTAMINAFULL_OFFSET UNITYSDK_OFFSET(0x171511A0)
#define RPG_CLIENT_PUSHMESSAGESETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x17151040)

namespace RPG::Client
{
	inline static constexpr unsigned int PushMessageSettings_TypeDefinitionIndex = 55486;

	class PushMessageSettings : public ::RPG::Client::PrefGroup
	{
	public:
		::System::Boolean _DefalutSwitch; // 0x20

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUSHMESSAGESETTINGS__CTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_EnablePushStaminaFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUSHMESSAGESETTINGS_GET_ENABLEPUSHSTAMINAFULL_OFFSET))(this);
		}

		::System::Void set_EnablePushStaminaFull(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUSHMESSAGESETTINGS_SET_ENABLEPUSHSTAMINAFULL_OFFSET))(this, a1);
		}

		::System::Boolean get_EnablePushExpeditionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUSHMESSAGESETTINGS_GET_ENABLEPUSHEXPEDITIONFINISH_OFFSET))(this);
		}

		::System::Void set_EnablePushExpeditionFinish(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PUSHMESSAGESETTINGS_SET_ENABLEPUSHEXPEDITIONFINISH_OFFSET))(this, a1);
		}
	};
}

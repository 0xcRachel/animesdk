#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTargetActionConfig.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_482F3423DE650EAD;

#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_SETPOS_METHOD_2_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0xA266880)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_SETPOS_METHOD_2_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xA2668F0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_SETPOS__CTOR_OFFSET UNITYSDK_OFFSET(0xA2668E0)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTargetActionConfig_SetPos_TypeDefinitionIndex = 54544;

	class WolfBroGunPlayTargetActionConfig_SetPos : public ::RPG::Client::WolfBroGunPlayTargetActionConfig
	{
	public:
		::UnityEngine::Vector2 pos; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_SETPOS__CTOR_OFFSET))(this);
		}

		::Class_1_482F3423DE650EAD* Method_2_9B39F7D7C1FF70D6()
		{
			return ((::Class_1_482F3423DE650EAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_SETPOS_METHOD_2_9B39F7D7C1FF70D6_OFFSET))(this);
		}

		::Class_1_482F3423DE650EAD* Method_2_F8B73ECE7F883AC1()
		{
			return ((::Class_1_482F3423DE650EAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGETACTIONCONFIG_SETPOS_METHOD_2_F8B73ECE7F883AC1_OFFSET))(this);
		}
	};
}

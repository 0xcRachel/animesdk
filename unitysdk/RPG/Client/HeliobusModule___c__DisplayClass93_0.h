#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FA4F4A67B1C04320_420;
namespace RPG::Client { class HeliobusSkillData; }

#define RPG_CLIENT_HELIOBUSMODULE___C__DISPLAYCLASS93_0__CTOR_OFFSET UNITYSDK_OFFSET(0x94B2F80)
#define RPG_CLIENT_HELIOBUSMODULE___C__DISPLAYCLASS93_0___ONCMDHELIOBUSUNLOCKSKILLSCNOTIFY_B__0_OFFSET UNITYSDK_OFFSET(0x94B3410)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusModule___c__DisplayClass93_0_TypeDefinitionIndex = 52198;

	class HeliobusModule___c__DisplayClass93_0 : public ::System::Object
	{
	public:
		::Class_1_FA4F4A67B1C04320_420* ntf; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE___C__DISPLAYCLASS93_0__CTOR_OFFSET))(this);
		}

		::System::Boolean __OnCmdHeliobusUnlockSkillScNotify_b__0(::RPG::Client::HeliobusSkillData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::HeliobusSkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE___C__DISPLAYCLASS93_0___ONCMDHELIOBUSUNLOCKSKILLSCNOTIFY_B__0_OFFSET))(this, x);
		}
	};
}

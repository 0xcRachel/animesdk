#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatEffectSubType.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGEREFFECT_METHOD_3_2286E84EB5F76252_OFFSET UNITYSDK_OFFSET(0x16A41090)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGEREFFECT_METHOD_3_7FB5F0C44D356043_OFFSET UNITYSDK_OFFSET(0x16A431B0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGEREFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x16A41070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_TriggerEffect_TypeDefinitionIndex = 14480;

	class DiceCombatTaskConfig_TriggerEffect : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatEffectSubType SubType; // 0x10
		::System::UInt32 EffectID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGEREFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_7FB5F0C44D356043(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGEREFFECT_METHOD_3_7FB5F0C44D356043_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2286E84EB5F76252(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGEREFFECT_METHOD_3_2286E84EB5F76252_OFFSET))(a1, a2);
		}
	};
}

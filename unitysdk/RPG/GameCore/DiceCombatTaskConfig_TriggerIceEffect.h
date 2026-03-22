#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
#include "unitysdk/RPG/GameCore/IceEffectMode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERICEEFFECT_METHOD_3_37FFC59F4131260D_OFFSET UNITYSDK_OFFSET(0x16A43200)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERICEEFFECT_METHOD_3_6D04F68C454DFE94_OFFSET UNITYSDK_OFFSET(0x16A411F0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERICEEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x16A411D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_TriggerIceEffect_TypeDefinitionIndex = 14527;

	class DiceCombatTaskConfig_TriggerIceEffect : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x10
		::RPG::GameCore::DiceCombatDiceSelectorConfig* Selector; // 0x18
		::RPG::GameCore::IceEffectMode Mode; // 0x20
		::RPG::GameCore::DynamicFloat* ContentID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERICEEFFECT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_37FFC59F4131260D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerIceEffect*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerIceEffect*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERICEEFFECT_METHOD_3_37FFC59F4131260D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_6D04F68C454DFE94(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerIceEffect* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerIceEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERICEEFFECT_METHOD_3_6D04F68C454DFE94_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatIgnoreDefendPointType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATATTACKCONFIG_METHOD_2_F18B1EECBAF9D0A1_OFFSET UNITYSDK_OFFSET(0x16A32720)
#define RPG_GAMECORE_DICECOMBATATTACKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A32850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatAttackConfig_TypeDefinitionIndex = 14489;

	class DiceCombatAttackConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DiceCombatIgnoreDefendPointType IgnoreDefendPointType; // 0x10
		::RPG::GameCore::DynamicFloat* IgnorePartialDefendPointValue; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATATTACKCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F18B1EECBAF9D0A1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatAttackConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatAttackConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATATTACKCONFIG_METHOD_2_F18B1EECBAF9D0A1_OFFSET))(a1, a2);
		}
	};
}

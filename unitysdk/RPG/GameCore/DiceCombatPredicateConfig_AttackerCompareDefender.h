#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER_METHOD_4_5267FDFE5A41EA64_OFFSET UNITYSDK_OFFSET(0x16A3AEF0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER_METHOD_4_88A9E1D3C67CA505_OFFSET UNITYSDK_OFFSET(0x16A38050)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A38030)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_AttackerCompareDefender_TypeDefinitionIndex = 14546;

	class DiceCombatPredicateConfig_AttackerCompareDefender : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatValueCompare Compare; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5267FDFE5A41EA64(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_AttackerCompareDefender*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_AttackerCompareDefender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER_METHOD_4_5267FDFE5A41EA64_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_88A9E1D3C67CA505(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_AttackerCompareDefender* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_AttackerCompareDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER_METHOD_4_88A9E1D3C67CA505_OFFSET))(a1, a2);
		}
	};
}

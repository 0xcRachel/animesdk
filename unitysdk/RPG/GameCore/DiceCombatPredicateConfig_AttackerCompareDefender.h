#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER_METHOD_4_31ABDD56A5992356_OFFSET UNITYSDK_OFFSET(0x1A08FAE0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER_METHOD_4_FE89C18BE6243874_OFFSET UNITYSDK_OFFSET(0x1A093D50)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A08FA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_AttackerCompareDefender_TypeDefinitionIndex = 15343;

	class DiceCombatPredicateConfig_AttackerCompareDefender : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatValueCompare Compare; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_FE89C18BE6243874(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_AttackerCompareDefender*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_AttackerCompareDefender*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER_METHOD_4_FE89C18BE6243874_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_31ABDD56A5992356(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_AttackerCompareDefender* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_AttackerCompareDefender*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_ATTACKERCOMPAREDEFENDER_METHOD_4_31ABDD56A5992356_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLODD_METHOD_4_808FC3A90CFCD050_OFFSET UNITYSDK_OFFSET(0x16A3B0D0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLODD_METHOD_4_DFB325274DB02ED9_OFFSET UNITYSDK_OFFSET(0x16A38C10)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLODD__CTOR_OFFSET UNITYSDK_OFFSET(0x16A38BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_DiceAllOdd_TypeDefinitionIndex = 14531;

	class DiceCombatPredicateConfig_DiceAllOdd : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLODD__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_808FC3A90CFCD050(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllOdd*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllOdd*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLODD_METHOD_4_808FC3A90CFCD050_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_DFB325274DB02ED9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllOdd* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_DiceAllOdd*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_DICEALLODD_METHOD_4_DFB325274DB02ED9_OFFSET))(a1, a2);
		}
	};
}

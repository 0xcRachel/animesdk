#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE_METHOD_4_5B3FEE4F90236613_OFFSET UNITYSDK_OFFSET(0x16A3B3A0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE_METHOD_4_D854BF7B69D97A9A_OFFSET UNITYSDK_OFFSET(0x16A39BE0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A39BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_HasDiceSequence_TypeDefinitionIndex = 14530;

	class DiceCombatPredicateConfig_HasDiceSequence : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_5B3FEE4F90236613(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceSequence*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceSequence*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE_METHOD_4_5B3FEE4F90236613_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_D854BF7B69D97A9A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceSequence* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasDiceSequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASDICESEQUENCE_METHOD_4_D854BF7B69D97A9A_OFFSET))(a1, a2);
		}
	};
}

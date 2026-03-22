#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueCompare.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTHPCOMPARE_METHOD_4_74419A7930D49C16_OFFSET UNITYSDK_OFFSET(0x16A3AF40)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTHPCOMPARE_METHOD_4_C6DEDC7C7E802193_OFFSET UNITYSDK_OFFSET(0x16A381E0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTHPCOMPARE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A381C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_CurrentHPCompare_TypeDefinitionIndex = 14543;

	class DiceCombatPredicateConfig_CurrentHPCompare : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::RPG::GameCore::DiceCombatValueCompare Compare; // 0x24
		::RPG::GameCore::DynamicFloat* Value; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTHPCOMPARE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_74419A7930D49C16(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentHPCompare*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentHPCompare*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTHPCOMPARE_METHOD_4_74419A7930D49C16_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_C6DEDC7C7E802193(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentHPCompare* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_CurrentHPCompare*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_CURRENTHPCOMPARE_METHOD_4_C6DEDC7C7E802193_OFFSET))(a1, a2);
		}
	};
}

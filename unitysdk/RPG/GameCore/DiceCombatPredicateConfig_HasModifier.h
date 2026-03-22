#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatPredicateConfig.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASMODIFIER_METHOD_4_0AD62526A12D212B_OFFSET UNITYSDK_OFFSET(0x16A3B440)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASMODIFIER_METHOD_4_82F2C27ED6A9F5DA_OFFSET UNITYSDK_OFFSET(0x16A39FC0)
#define RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x16A39FA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPredicateConfig_HasModifier_TypeDefinitionIndex = 14522;

	class DiceCombatPredicateConfig_HasModifier : public ::RPG::GameCore::DiceCombatPredicateConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x20
		::System::UInt32 ModifierID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_0AD62526A12D212B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASMODIFIER_METHOD_4_0AD62526A12D212B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_82F2C27ED6A9F5DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatPredicateConfig_HasModifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatPredicateConfig_HasModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATPREDICATECONFIG_HASMODIFIER_METHOD_4_82F2C27ED6A9F5DA_OFFSET))(a1, a2);
		}
	};
}

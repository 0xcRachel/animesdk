#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_HEAL_METHOD_3_D4F051B8544C0754_OFFSET UNITYSDK_OFFSET(0x16A3FB70)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_HEAL_METHOD_3_E7E55E066C9BF937_OFFSET UNITYSDK_OFFSET(0x16A42A40)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_HEAL__CTOR_OFFSET UNITYSDK_OFFSET(0x16A3FB50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_Heal_TypeDefinitionIndex = 14494;

	class DiceCombatTaskConfig_Heal : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x10
		::RPG::GameCore::DynamicFloat* Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_HEAL__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E7E55E066C9BF937(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_Heal*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_Heal*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_HEAL_METHOD_3_E7E55E066C9BF937_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_D4F051B8544C0754(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_Heal* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_Heal*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_HEAL_METHOD_3_D4F051B8544C0754_OFFSET))(a1, a2);
		}
	};
}

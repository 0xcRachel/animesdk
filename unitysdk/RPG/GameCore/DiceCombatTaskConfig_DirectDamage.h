#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDirectDamageStyle.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_DIRECTDAMAGE_METHOD_3_342E37D895836F9F_OFFSET UNITYSDK_OFFSET(0x16A3F870)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_DIRECTDAMAGE_METHOD_3_B4E47BEF34240B7B_OFFSET UNITYSDK_OFFSET(0x16A42950)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_DIRECTDAMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x16A3F850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_DirectDamage_TypeDefinitionIndex = 14492;

	class DiceCombatTaskConfig_DirectDamage : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x10
		::RPG::GameCore::DynamicFloat* Value; // 0x18
		::RPG::GameCore::DiceCombatDirectDamageStyle Style; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_DIRECTDAMAGE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_B4E47BEF34240B7B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_DirectDamage*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_DirectDamage*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_DIRECTDAMAGE_METHOD_3_B4E47BEF34240B7B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_342E37D895836F9F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatTaskConfig_DirectDamage* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatTaskConfig_DirectDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_DIRECTDAMAGE_METHOD_3_342E37D895836F9F_OFFSET))(a1, a2);
		}
	};
}

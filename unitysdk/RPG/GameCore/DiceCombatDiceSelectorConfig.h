#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_METHOD_2_900F972706525836_OFFSET UNITYSDK_OFFSET(0x16A349D0)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_METHOD_2_F4E81CDAFD53271E_OFFSET UNITYSDK_OFFSET(0x16A34180)
#define RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16A349C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatDiceSelectorConfig_TypeDefinitionIndex = 14564;

	class DiceCombatDiceSelectorConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_F4E81CDAFD53271E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_METHOD_2_F4E81CDAFD53271E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_900F972706525836(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DiceCombatDiceSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatDiceSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATDICESELECTORCONFIG_METHOD_2_900F972706525836_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUETITANBLESSSELECTCONFIG_METHOD_5_999275A57E7AAE3A_OFFSET UNITYSDK_OFFSET(0x16E05590)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUETITANBLESSSELECTCONFIG_METHOD_5_C04F105BC0F83BE6_OFFSET UNITYSDK_OFFSET(0x16E053D0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUETITANBLESSSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E054D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueTitanBlessSelectConfig_TypeDefinitionIndex = 17646;

	class RogueActTriggerRogueTitanBlessSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUETITANBLESSSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_C04F105BC0F83BE6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueTitanBlessSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueTitanBlessSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUETITANBLESSSELECTCONFIG_METHOD_5_C04F105BC0F83BE6_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_999275A57E7AAE3A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueTitanBlessSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueTitanBlessSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUETITANBLESSSELECTCONFIG_METHOD_5_999275A57E7AAE3A_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREPAIRROGUEMIRACLECONFIG_METHOD_5_1BD14E174DB0C1BD_OFFSET UNITYSDK_OFFSET(0x16E00060)
#define RPG_GAMECORE_ROGUEACTREPAIRROGUEMIRACLECONFIG_METHOD_5_6A8687A5B00B01A9_OFFSET UNITYSDK_OFFSET(0x16DFFEA0)
#define RPG_GAMECORE_ROGUEACTREPAIRROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFFFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActRepairRogueMiracleConfig_TypeDefinitionIndex = 17559;

	class RogueActRepairRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPAIRROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_6A8687A5B00B01A9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRepairRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRepairRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPAIRROGUEMIRACLECONFIG_METHOD_5_6A8687A5B00B01A9_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_1BD14E174DB0C1BD(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActRepairRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActRepairRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPAIRROGUEMIRACLECONFIG_METHOD_5_1BD14E174DB0C1BD_OFFSET))(a1, a2);
		}
	};
}

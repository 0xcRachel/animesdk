#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMTSKILLCONFIG_METHOD_4_0F801EBC3F1090DA_OFFSET UNITYSDK_OFFSET(0x17100410)
#define RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMTSKILLCONFIG_METHOD_4_1385C051050C5BDA_OFFSET UNITYSDK_OFFSET(0x17100630)
#define RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMTSKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171003F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionTrigerAddMtSkillConfig_TypeDefinitionIndex = 16217;

	class TrainPartyActionTrigerAddMtSkillConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMTSKILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1385C051050C5BDA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionTrigerAddMtSkillConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionTrigerAddMtSkillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMTSKILLCONFIG_METHOD_4_1385C051050C5BDA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0F801EBC3F1090DA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionTrigerAddMtSkillConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionTrigerAddMtSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMTSKILLCONFIG_METHOD_4_0F801EBC3F1090DA_OFFSET))(a1, a2);
		}
	};
}

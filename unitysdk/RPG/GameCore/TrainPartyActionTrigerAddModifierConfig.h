#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMODIFIERCONFIG_METHOD_4_5430307A70F5E089_OFFSET UNITYSDK_OFFSET(0x171003E0)
#define RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMODIFIERCONFIG_METHOD_4_D1C3DF9B23C03879_OFFSET UNITYSDK_OFFSET(0x171005D0)
#define RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMODIFIERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171003C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionTrigerAddModifierConfig_TypeDefinitionIndex = 16216;

	class TrainPartyActionTrigerAddModifierConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMODIFIERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_D1C3DF9B23C03879(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionTrigerAddModifierConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionTrigerAddModifierConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMODIFIERCONFIG_METHOD_4_D1C3DF9B23C03879_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5430307A70F5E089(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionTrigerAddModifierConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionTrigerAddModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONTRIGERADDMODIFIERCONFIG_METHOD_4_5430307A70F5E089_OFFSET))(a1, a2);
		}
	};
}

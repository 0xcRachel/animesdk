#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINBYSTEPCONFIG_METHOD_4_741869B39023E36A_OFFSET UNITYSDK_OFFSET(0x170FF230)
#define RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINBYSTEPCONFIG_METHOD_4_F215437136E8F2E1_OFFSET UNITYSDK_OFFSET(0x170FF380)
#define RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINBYSTEPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170FF360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionAddBuildCoinByStepConfig_TypeDefinitionIndex = 16212;

	class TrainPartyActionAddBuildCoinByStepConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Int32 AddNumPerStep; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINBYSTEPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_741869B39023E36A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionAddBuildCoinByStepConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionAddBuildCoinByStepConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINBYSTEPCONFIG_METHOD_4_741869B39023E36A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_F215437136E8F2E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionAddBuildCoinByStepConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionAddBuildCoinByStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDBUILDCOINBYSTEPCONFIG_METHOD_4_F215437136E8F2E1_OFFSET))(a1, a2);
		}
	};
}

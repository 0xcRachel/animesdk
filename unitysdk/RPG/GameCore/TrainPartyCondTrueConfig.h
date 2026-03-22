#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYCONDTRUECONFIG_METHOD_4_5B05B7949F4D316E_OFFSET UNITYSDK_OFFSET(0x17102A30)
#define RPG_GAMECORE_TRAINPARTYCONDTRUECONFIG_METHOD_4_95980A22E3C8E597_OFFSET UNITYSDK_OFFSET(0x17102960)
#define RPG_GAMECORE_TRAINPARTYCONDTRUECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171029E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyCondTrueConfig_TypeDefinitionIndex = 16222;

	class TrainPartyCondTrueConfig : public ::RPG::GameCore::TrainPartyConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDTRUECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_95980A22E3C8E597(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCondTrueConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCondTrueConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDTRUECONFIG_METHOD_4_95980A22E3C8E597_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_5B05B7949F4D316E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyCondTrueConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyCondTrueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYCONDTRUECONFIG_METHOD_4_5B05B7949F4D316E_OFFSET))(a1, a2);
		}
	};
}

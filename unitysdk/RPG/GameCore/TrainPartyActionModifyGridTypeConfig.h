#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYACTIONMODIFYGRIDTYPECONFIG_METHOD_4_02142FC14DA4CCBE_OFFSET UNITYSDK_OFFSET(0x17100350)
#define RPG_GAMECORE_TRAINPARTYACTIONMODIFYGRIDTYPECONFIG_METHOD_4_9CCB4E49BEA1A49E_OFFSET UNITYSDK_OFFSET(0x171004B0)
#define RPG_GAMECORE_TRAINPARTYACTIONMODIFYGRIDTYPECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17100330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionModifyGridTypeConfig_TypeDefinitionIndex = 16213;

	class TrainPartyActionModifyGridTypeConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONMODIFYGRIDTYPECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9CCB4E49BEA1A49E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionModifyGridTypeConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionModifyGridTypeConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONMODIFYGRIDTYPECONFIG_METHOD_4_9CCB4E49BEA1A49E_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_02142FC14DA4CCBE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionModifyGridTypeConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionModifyGridTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONMODIFYGRIDTYPECONFIG_METHOD_4_02142FC14DA4CCBE_OFFSET))(a1, a2);
		}
	};
}

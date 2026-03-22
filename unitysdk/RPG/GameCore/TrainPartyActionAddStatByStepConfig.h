#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"
#include "unitysdk/RPG/GameCore/TrainPartyPassengerType.h"
#include "unitysdk/RPG/GameCore/TrainPartyStatType.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYACTIONADDSTATBYSTEPCONFIG_METHOD_4_0F26F5A6206636EB_OFFSET UNITYSDK_OFFSET(0x170FF6C0)
#define RPG_GAMECORE_TRAINPARTYACTIONADDSTATBYSTEPCONFIG_METHOD_4_AABBBB8E519DA5E5_OFFSET UNITYSDK_OFFSET(0x170FF630)
#define RPG_GAMECORE_TRAINPARTYACTIONADDSTATBYSTEPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170FF6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionAddStatByStepConfig_TypeDefinitionIndex = 16209;

	class TrainPartyActionAddStatByStepConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::RPG::GameCore::TrainPartyPassengerType PassengerType; // 0x10
		::System::UInt32 PassengerParam; // 0x14
		::Il2CppArray<::RPG::GameCore::TrainPartyStatType>* AddTypeList; // 0x18
		::System::Int32 UpdatePerStep; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDSTATBYSTEPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_AABBBB8E519DA5E5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionAddStatByStepConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionAddStatByStepConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDSTATBYSTEPCONFIG_METHOD_4_AABBBB8E519DA5E5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_0F26F5A6206636EB(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionAddStatByStepConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionAddStatByStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDSTATBYSTEPCONFIG_METHOD_4_0F26F5A6206636EB_OFFSET))(a1, a2);
		}
	};
}

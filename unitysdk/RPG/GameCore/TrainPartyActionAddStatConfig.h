#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"
#include "unitysdk/RPG/GameCore/TrainPartyPassengerType.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrainPartyStat; }

#define RPG_GAMECORE_TRAINPARTYACTIONADDSTATCONFIG_METHOD_4_16E5DA5744CCC10C_OFFSET UNITYSDK_OFFSET(0x170FF980)
#define RPG_GAMECORE_TRAINPARTYACTIONADDSTATCONFIG_METHOD_4_E9C226A9207592E3_OFFSET UNITYSDK_OFFSET(0x170FF8F0)
#define RPG_GAMECORE_TRAINPARTYACTIONADDSTATCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x170FF960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionAddStatConfig_TypeDefinitionIndex = 16208;

	class TrainPartyActionAddStatConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::RPG::GameCore::TrainPartyPassengerType PassengerType; // 0x10
		::System::UInt32 PassengerParam; // 0x14
		::Il2CppArray<::RPG::GameCore::TrainPartyStat*>* AddList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDSTATCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_E9C226A9207592E3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionAddStatConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionAddStatConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDSTATCONFIG_METHOD_4_E9C226A9207592E3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_16E5DA5744CCC10C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionAddStatConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionAddStatConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONADDSTATCONFIG_METHOD_4_16E5DA5744CCC10C_OFFSET))(a1, a2);
		}
	};
}

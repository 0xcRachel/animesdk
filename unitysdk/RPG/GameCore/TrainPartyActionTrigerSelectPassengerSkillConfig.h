#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TRAINPARTYACTIONTRIGERSELECTPASSENGERSKILLCONFIG_METHOD_4_11F7C7019C27DBFC_OFFSET UNITYSDK_OFFSET(0x17100440)
#define RPG_GAMECORE_TRAINPARTYACTIONTRIGERSELECTPASSENGERSKILLCONFIG_METHOD_4_1AF89D50A72F5FBC_OFFSET UNITYSDK_OFFSET(0x17100690)
#define RPG_GAMECORE_TRAINPARTYACTIONTRIGERSELECTPASSENGERSKILLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17100420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionTrigerSelectPassengerSkillConfig_TypeDefinitionIndex = 16215;

	class TrainPartyActionTrigerSelectPassengerSkillConfig : public ::RPG::GameCore::TrainPartyActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONTRIGERSELECTPASSENGERSKILLCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1AF89D50A72F5FBC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionTrigerSelectPassengerSkillConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionTrigerSelectPassengerSkillConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONTRIGERSELECTPASSENGERSKILLCONFIG_METHOD_4_1AF89D50A72F5FBC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_11F7C7019C27DBFC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TrainPartyActionTrigerSelectPassengerSkillConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TrainPartyActionTrigerSelectPassengerSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONTRIGERSELECTPASSENGERSKILLCONFIG_METHOD_4_11F7C7019C27DBFC_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNAREADIVISIONLEVELCONFIG_METHOD_5_39EE6027163C97F4_OFFSET UNITYSDK_OFFSET(0x16EB4CE0)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNAREADIVISIONLEVELCONFIG_METHOD_5_E0BE16DCDED37E57_OFFSET UNITYSDK_OFFSET(0x16EB4B70)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNAREADIVISIONLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB4C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournAreaDivisionLevelConfig_TypeDefinitionIndex = 17699;

	class RogueParamRogueTournAreaDivisionLevelConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNAREADIVISIONLEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_E0BE16DCDED37E57(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournAreaDivisionLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournAreaDivisionLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNAREADIVISIONLEVELCONFIG_METHOD_5_E0BE16DCDED37E57_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_39EE6027163C97F4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueTournAreaDivisionLevelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueTournAreaDivisionLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNAREADIVISIONLEVELCONFIG_METHOD_5_39EE6027163C97F4_OFFSET))(a1, a2);
		}
	};
}

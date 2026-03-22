#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDWITHDIFFICULTYCOMPCONFIG_METHOD_5_6158B7CD1380669C_OFFSET UNITYSDK_OFFSET(0x16E62460)
#define RPG_GAMECORE_ROGUECONDWITHDIFFICULTYCOMPCONFIG_METHOD_5_EF2A5C086F977AAF_OFFSET UNITYSDK_OFFSET(0x16E625D0)
#define RPG_GAMECORE_ROGUECONDWITHDIFFICULTYCOMPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E62530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondWithDifficultyCompConfig_TypeDefinitionIndex = 17670;

	class RogueCondWithDifficultyCompConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDWITHDIFFICULTYCOMPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_6158B7CD1380669C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondWithDifficultyCompConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondWithDifficultyCompConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDWITHDIFFICULTYCOMPCONFIG_METHOD_5_6158B7CD1380669C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_EF2A5C086F977AAF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondWithDifficultyCompConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondWithDifficultyCompConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDWITHDIFFICULTYCOMPCONFIG_METHOD_5_EF2A5C086F977AAF_OFFSET))(a1, a2);
		}
	};
}

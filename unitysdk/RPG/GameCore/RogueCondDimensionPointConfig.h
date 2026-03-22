#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUECONDDIMENSIONPOINTCONFIG_METHOD_5_BB748186D3B0DE90_OFFSET UNITYSDK_OFFSET(0x16E61860)
#define RPG_GAMECORE_ROGUECONDDIMENSIONPOINTCONFIG_METHOD_5_D3F478890905623B_OFFSET UNITYSDK_OFFSET(0x16E619D0)
#define RPG_GAMECORE_ROGUECONDDIMENSIONPOINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E61930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondDimensionPointConfig_TypeDefinitionIndex = 17663;

	class RogueCondDimensionPointConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDDIMENSIONPOINTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_BB748186D3B0DE90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondDimensionPointConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondDimensionPointConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDDIMENSIONPOINTCONFIG_METHOD_5_BB748186D3B0DE90_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_D3F478890905623B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueCondDimensionPointConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueCondDimensionPointConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDDIMENSIONPOINTCONFIG_METHOD_5_D3F478890905623B_OFFSET))(a1, a2);
		}
	};
}

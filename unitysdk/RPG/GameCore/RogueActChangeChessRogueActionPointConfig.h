#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEACTIONPOINTCONFIG_METHOD_5_3845D55FCDFFBFD7_OFFSET UNITYSDK_OFFSET(0x16DF8700)
#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEACTIONPOINTCONFIG_METHOD_5_80B43E522FB4B73B_OFFSET UNITYSDK_OFFSET(0x16DF88C0)
#define RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEACTIONPOINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF8800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeChessRogueActionPointConfig_TypeDefinitionIndex = 17588;

	class RogueActChangeChessRogueActionPointConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEACTIONPOINTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_3845D55FCDFFBFD7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeChessRogueActionPointConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeChessRogueActionPointConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEACTIONPOINTCONFIG_METHOD_5_3845D55FCDFFBFD7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_80B43E522FB4B73B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeChessRogueActionPointConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeChessRogueActionPointConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGECHESSROGUEACTIONPOINTCONFIG_METHOD_5_80B43E522FB4B73B_OFFSET))(a1, a2);
		}
	};
}

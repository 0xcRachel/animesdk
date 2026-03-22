#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICSCEPTERWITHLEVELCONFIG_METHOD_5_5B41AC935E2775F8_OFFSET UNITYSDK_OFFSET(0x16DFE540)
#define RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICSCEPTERWITHLEVELCONFIG_METHOD_5_D50A1458F44B841C_OFFSET UNITYSDK_OFFSET(0x16DFE700)
#define RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICSCEPTERWITHLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFE640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActLevelUpRandomRogueMagicScepterWithLevelConfig_TypeDefinitionIndex = 17636;

	class RogueActLevelUpRandomRogueMagicScepterWithLevelConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICSCEPTERWITHLEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_5B41AC935E2775F8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActLevelUpRandomRogueMagicScepterWithLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActLevelUpRandomRogueMagicScepterWithLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICSCEPTERWITHLEVELCONFIG_METHOD_5_5B41AC935E2775F8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_D50A1458F44B841C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActLevelUpRandomRogueMagicScepterWithLevelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActLevelUpRandomRogueMagicScepterWithLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTLEVELUPRANDOMROGUEMAGICSCEPTERWITHLEVELCONFIG_METHOD_5_D50A1458F44B841C_OFFSET))(a1, a2);
		}
	};
}

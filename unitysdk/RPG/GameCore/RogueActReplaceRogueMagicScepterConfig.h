#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICSCEPTERCONFIG_METHOD_5_99A0B012640835E0_OFFSET UNITYSDK_OFFSET(0x16E00D20)
#define RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICSCEPTERCONFIG_METHOD_5_D4C6F36BF360A344_OFFSET UNITYSDK_OFFSET(0x16E00EE0)
#define RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICSCEPTERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E00E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActReplaceRogueMagicScepterConfig_TypeDefinitionIndex = 17645;

	class RogueActReplaceRogueMagicScepterConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICSCEPTERCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_99A0B012640835E0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceRogueMagicScepterConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceRogueMagicScepterConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICSCEPTERCONFIG_METHOD_5_99A0B012640835E0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_D4C6F36BF360A344(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceRogueMagicScepterConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceRogueMagicScepterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEMAGICSCEPTERCONFIG_METHOD_5_D4C6F36BF360A344_OFFSET))(a1, a2);
		}
	};
}

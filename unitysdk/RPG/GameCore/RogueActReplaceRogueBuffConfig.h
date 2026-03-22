#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFCONFIG_METHOD_5_CF83BB99ACE68CD2_OFFSET UNITYSDK_OFFSET(0x16E00970)
#define RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFCONFIG_METHOD_5_EB749AD2D23246BE_OFFSET UNITYSDK_OFFSET(0x16E007B0)
#define RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E008B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActReplaceRogueBuffConfig_TypeDefinitionIndex = 17545;

	class RogueActReplaceRogueBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_EB749AD2D23246BE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceRogueBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceRogueBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFCONFIG_METHOD_5_EB749AD2D23246BE_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_CF83BB99ACE68CD2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceRogueBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceRogueBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFCONFIG_METHOD_5_CF83BB99ACE68CD2_OFFSET))(a1, a2);
		}
	};
}

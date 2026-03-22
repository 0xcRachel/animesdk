#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFKEEPLEVELCONFIG_METHOD_5_8A89200271EA5F19_OFFSET UNITYSDK_OFFSET(0x16E00980)
#define RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFKEEPLEVELCONFIG_METHOD_5_8F5CDAF7B3E02BED_OFFSET UNITYSDK_OFFSET(0x16E00B40)
#define RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFKEEPLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E00A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActReplaceRogueBuffKeepLevelConfig_TypeDefinitionIndex = 17546;

	class RogueActReplaceRogueBuffKeepLevelConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFKEEPLEVELCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_8A89200271EA5F19(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceRogueBuffKeepLevelConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceRogueBuffKeepLevelConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFKEEPLEVELCONFIG_METHOD_5_8A89200271EA5F19_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_8F5CDAF7B3E02BED(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActReplaceRogueBuffKeepLevelConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActReplaceRogueBuffKeepLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTREPLACEROGUEBUFFKEEPLEVELCONFIG_METHOD_5_8F5CDAF7B3E02BED_OFFSET))(a1, a2);
		}
	};
}

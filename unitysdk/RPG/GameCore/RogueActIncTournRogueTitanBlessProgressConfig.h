#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTINCTOURNROGUETITANBLESSPROGRESSCONFIG_METHOD_5_8FBCE36081AAA33D_OFFSET UNITYSDK_OFFSET(0x16DFE530)
#define RPG_GAMECORE_ROGUEACTINCTOURNROGUETITANBLESSPROGRESSCONFIG_METHOD_5_DE721CEEE404E329_OFFSET UNITYSDK_OFFSET(0x16DFE370)
#define RPG_GAMECORE_ROGUEACTINCTOURNROGUETITANBLESSPROGRESSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFE470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActIncTournRogueTitanBlessProgressConfig_TypeDefinitionIndex = 17651;

	class RogueActIncTournRogueTitanBlessProgressConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTINCTOURNROGUETITANBLESSPROGRESSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_DE721CEEE404E329(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActIncTournRogueTitanBlessProgressConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActIncTournRogueTitanBlessProgressConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTINCTOURNROGUETITANBLESSPROGRESSCONFIG_METHOD_5_DE721CEEE404E329_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_8FBCE36081AAA33D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActIncTournRogueTitanBlessProgressConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActIncTournRogueTitanBlessProgressConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTINCTOURNROGUETITANBLESSPROGRESSCONFIG_METHOD_5_8FBCE36081AAA33D_OFFSET))(a1, a2);
		}
	};
}

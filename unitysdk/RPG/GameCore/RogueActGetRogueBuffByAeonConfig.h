#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYAEONCONFIG_METHOD_5_871739C00B2393CC_OFFSET UNITYSDK_OFFSET(0x16DFC4A0)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYAEONCONFIG_METHOD_5_C71C1347926A12E8_OFFSET UNITYSDK_OFFSET(0x16DFC660)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYAEONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFC5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueBuffByAeonConfig_TypeDefinitionIndex = 17541;

	class RogueActGetRogueBuffByAeonConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYAEONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_871739C00B2393CC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffByAeonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffByAeonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYAEONCONFIG_METHOD_5_871739C00B2393CC_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_C71C1347926A12E8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffByAeonConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffByAeonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYAEONCONFIG_METHOD_5_C71C1347926A12E8_OFFSET))(a1, a2);
		}
	};
}

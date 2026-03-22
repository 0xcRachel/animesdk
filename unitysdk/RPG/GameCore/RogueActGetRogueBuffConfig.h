#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFCONFIG_METHOD_5_145C76404B8AAAA2_OFFSET UNITYSDK_OFFSET(0x16DFCDB0)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFCONFIG_METHOD_5_309F1DDBA8166A2E_OFFSET UNITYSDK_OFFSET(0x16DFCF70)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFCEB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueBuffConfig_TypeDefinitionIndex = 17539;

	class RogueActGetRogueBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_145C76404B8AAAA2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFCONFIG_METHOD_5_145C76404B8AAAA2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_309F1DDBA8166A2E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFCONFIG_METHOD_5_309F1DDBA8166A2E_OFFSET))(a1, a2);
		}
	};
}

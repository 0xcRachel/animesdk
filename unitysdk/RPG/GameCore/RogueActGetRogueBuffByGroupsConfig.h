#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYGROUPSCONFIG_METHOD_5_30ED0C2ED8977E7F_OFFSET UNITYSDK_OFFSET(0x16DFC840)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYGROUPSCONFIG_METHOD_5_9E3A3D069E98CFA3_OFFSET UNITYSDK_OFFSET(0x16DFCA00)
#define RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYGROUPSCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFC940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueBuffByGroupsConfig_TypeDefinitionIndex = 17608;

	class RogueActGetRogueBuffByGroupsConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYGROUPSCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_30ED0C2ED8977E7F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffByGroupsConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffByGroupsConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYGROUPSCONFIG_METHOD_5_30ED0C2ED8977E7F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_9E3A3D069E98CFA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetRogueBuffByGroupsConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetRogueBuffByGroupsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEBUFFBYGROUPSCONFIG_METHOD_5_9E3A3D069E98CFA3_OFFSET))(a1, a2);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEPARAMROGUEAREADIFFICULTYCONFIG_METHOD_5_8D8B34DBE83F44E4_OFFSET UNITYSDK_OFFSET(0x16EB3F60)
#define RPG_GAMECORE_ROGUEPARAMROGUEAREADIFFICULTYCONFIG_METHOD_5_EE6F0CECB4AFAC47_OFFSET UNITYSDK_OFFSET(0x16EB3DF0)
#define RPG_GAMECORE_ROGUEPARAMROGUEAREADIFFICULTYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB3EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueAreaDifficultyConfig_TypeDefinitionIndex = 17698;

	class RogueParamRogueAreaDifficultyConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEAREADIFFICULTYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_EE6F0CECB4AFAC47(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueAreaDifficultyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueAreaDifficultyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEAREADIFFICULTYCONFIG_METHOD_5_EE6F0CECB4AFAC47_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_8D8B34DBE83F44E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueParamRogueAreaDifficultyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueParamRogueAreaDifficultyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEAREADIFFICULTYCONFIG_METHOD_5_8D8B34DBE83F44E4_OFFSET))(a1, a2);
		}
	};
}

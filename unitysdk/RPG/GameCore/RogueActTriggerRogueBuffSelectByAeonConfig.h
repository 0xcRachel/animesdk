#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYAEONCONFIG_METHOD_5_9F6836BAA15E55F0_OFFSET UNITYSDK_OFFSET(0x16E02F80)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYAEONCONFIG_METHOD_5_D9ACC46BAE245174_OFFSET UNITYSDK_OFFSET(0x16E02DC0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYAEONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E02EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueBuffSelectByAeonConfig_TypeDefinitionIndex = 17596;

	class RogueActTriggerRogueBuffSelectByAeonConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYAEONCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_D9ACC46BAE245174(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueBuffSelectByAeonConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueBuffSelectByAeonConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYAEONCONFIG_METHOD_5_D9ACC46BAE245174_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_9F6836BAA15E55F0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueBuffSelectByAeonConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueBuffSelectByAeonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTBYAEONCONFIG_METHOD_5_9F6836BAA15E55F0_OFFSET))(a1, a2);
		}
	};
}

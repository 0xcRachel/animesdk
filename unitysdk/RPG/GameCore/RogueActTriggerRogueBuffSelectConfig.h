#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTCONFIG_METHOD_5_692940502DC8771A_OFFSET UNITYSDK_OFFSET(0x16E03160)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTCONFIG_METHOD_5_C8F6DA26742DC086_OFFSET UNITYSDK_OFFSET(0x16E03320)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16E03260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueBuffSelectConfig_TypeDefinitionIndex = 17536;

	class RogueActTriggerRogueBuffSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_692940502DC8771A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueBuffSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueBuffSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTCONFIG_METHOD_5_692940502DC8771A_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_C8F6DA26742DC086(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueBuffSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueBuffSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEBUFFSELECTCONFIG_METHOD_5_C8F6DA26742DC086_OFFSET))(a1, a2);
		}
	};
}

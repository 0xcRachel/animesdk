#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitDialogueBegin; }
namespace System { class Object; }

#define RPG_GAMECORE_WAITDIALOGUEBEGINTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5C3A40)
#define RPG_GAMECORE_WAITDIALOGUEBEGINTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA5C3B00)
#define RPG_GAMECORE_WAITDIALOGUEBEGINTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA5C3BE0)
#define RPG_GAMECORE_WAITDIALOGUEBEGINTASK_TICK_OFFSET UNITYSDK_OFFSET(0xA5C3C80)
#define RPG_GAMECORE_WAITDIALOGUEBEGINTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xA5C39B0)
#define RPG_GAMECORE_WAITDIALOGUEBEGINTASK__ONDIALOGUEBEGIN_OFFSET UNITYSDK_OFFSET(0xA5C3CE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitDialogueBeginTask_TypeDefinitionIndex = 46473;

	class WaitDialogueBeginTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::RPG::GameCore::WaitDialogueBegin* _ConfigRef; // 0x18
		::Class_3_BCCE950C2E8DF1F0* _BeginCallback; // 0x20
		::RPG::GameCore::TaskContext* _TaskContext; // 0x28
		::RPG::GameCore::GameEntity* _TargetEntity; // 0x30

		::System::Void _ctor(::RPG::GameCore::TaskContext* Context, ::RPG::GameCore::WaitDialogueBegin* Config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitDialogueBegin*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEBEGINTASK__CTOR_OFFSET))(this, Context, Config);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEBEGINTASK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEBEGINTASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEBEGINTASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEBEGINTASK_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _OnDialogueBegin(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDIALOGUEBEGINTASK__ONDIALOGUEBEGIN_OFFSET))(this, arg);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/StartMusicRhythmTask_Phase.h"

class Class_0_16E4307DCC419505_347;
class Class_3_BCCE950C2E8DF1F0;
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class MusicRhythmBoard; }
namespace RPG::GameCore { class StartMusicRhythm; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define RPG_GAMECORE_STARTMUSICRHYTHMTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA5064B0)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK_ONPUZZLEEVENT_OFFSET UNITYSDK_OFFSET(0xA506ED0)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA506030)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA506460)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK_SHOWMAINPAGE_OFFSET UNITYSDK_OFFSET(0xA506B80)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK_TICK_OFFSET UNITYSDK_OFFSET(0xA506640)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xA505EC0)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK__ONCHOOSELEVELPAGEEXIT_OFFSET UNITYSDK_OFFSET(0xA506380)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK__ONMAINPAGEENTER_OFFSET UNITYSDK_OFFSET(0xA507060)
#define RPG_GAMECORE_STARTMUSICRHYTHMTASK__ONMUSICREADYPAGECLOSE_OFFSET UNITYSDK_OFFSET(0xA507000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartMusicRhythmTask_TypeDefinitionIndex = 42100;

	class StartMusicRhythmTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::RPG::Client::LuaUIController* _MainPage; // 0x18
		::Class_3_BCCE950C2E8DF1F0* _TutorialFlow; // 0x20
		::Class_3_BCCE950C2E8DF1F0* _OnShowUi; // 0x28
		::Class_3_BCCE950C2E8DF1F0* _FormalFlow; // 0x30
		::RPG::GameCore::TaskContext* _Context; // 0x38
		::RPG::Client::MusicRhythmBoard* _MusicBoard; // 0x40
		::RPG::GameCore::StartMusicRhythm* _Config; // 0x48
		::System::Single _TransitionDuration; // 0x50
		::System::Single _TransitionTimer; // 0x54
		::RPG::GameCore::StartMusicRhythmTask_Phase _Phase; // 0x58
		::System::Boolean _AddListener; // 0x5C

		::System::Void _ctor(::RPG::GameCore::TaskContext* pContext, ::RPG::GameCore::StartMusicRhythm* pConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartMusicRhythm*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK__CTOR_OFFSET))(this, pContext, pConfig);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void ShowMainPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK_SHOWMAINPAGE_OFFSET))(this);
		}

		::System::Void OnPuzzleEvent(::Class_0_16E4307DCC419505_347* evt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK_ONPUZZLEEVENT_OFFSET))(this, evt);
		}

		::System::Void _OnMusicReadyPageClose(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK__ONMUSICREADYPAGECLOSE_OFFSET))(this, arg);
		}

		::System::Void _OnMainPageEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK__ONMAINPAGEENTER_OFFSET))(this);
		}

		::System::Void _OnChooseLevelPageExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTMUSICRHYTHMTASK__ONCHOOSELEVELPAGEEXIT_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class AkCallbackInfo;
class Class_3_BCCE950C2E8DF1F0;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client { class MonoEffectSerialBellControl; }
namespace RPG::GameCore { class PlaySerialBells; }
namespace RPG::GameCore { class SerialBellsNoteConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define RPG_GAMECORE_PLAYSERIALBELLSTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4CBA60)
#define RPG_GAMECORE_PLAYSERIALBELLSTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA4CBB90)
#define RPG_GAMECORE_PLAYSERIALBELLSTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA4CBF80)
#define RPG_GAMECORE_PLAYSERIALBELLSTASK_TICK_OFFSET UNITYSDK_OFFSET(0xA4CBFD0)
#define RPG_GAMECORE_PLAYSERIALBELLSTASK__CTOR_OFFSET UNITYSDK_OFFSET(0xA4CB9D0)
#define RPG_GAMECORE_PLAYSERIALBELLSTASK__DOPLAYSERIALBELLS_OFFSET UNITYSDK_OFFSET(0xA4CBDD0)
#define RPG_GAMECORE_PLAYSERIALBELLSTASK__ONFINISH_OFFSET UNITYSDK_OFFSET(0xA4CC440)
#define RPG_GAMECORE_PLAYSERIALBELLSTASK__ONSTOPSERIALBELLS_OFFSET UNITYSDK_OFFSET(0xA4CC880)
#define RPG_GAMECORE_PLAYSERIALBELLSTASK__SERIALBELLSCALLBACK_OFFSET UNITYSDK_OFFSET(0xA4CC030)
#define RPG_GAMECORE_PLAYSERIALBELLSTASK__TRIGGEREFFECT_OFFSET UNITYSDK_OFFSET(0xA4CC5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlaySerialBellsTask_TypeDefinitionIndex = 45953;

	class PlaySerialBellsTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::Class_3_BCCE950C2E8DF1F0* _FinishSequence; // 0x18
		::RPG::GameCore::PlaySerialBells* _ConfigRef; // 0x20
		::RPG::Client::MonoEffectManager* _MonoEffectManager; // 0x28
		::RPG::Client::MonoEffectSerialBellControl* _SerialBellController; // 0x30
		::RPG::Client::AttachPointMapping* _AttachPoint; // 0x38
		::RPG::GameCore::TaskContext* _TaskContext; // 0x40
		::System::Int32 _LoopCount; // 0x48
		::System::UInt32 _PlayingEventID; // 0x4C

		::System::Void _ctor(::RPG::GameCore::TaskContext* Context, ::RPG::GameCore::PlaySerialBells* Config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlaySerialBells*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLSTASK__CTOR_OFFSET))(this, Context, Config);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLSTASK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLSTASK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLSTASK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLSTASK_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void _DoPlaySerialBells()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLSTASK__DOPLAYSERIALBELLS_OFFSET))(this);
		}

		::System::Void _SerialBellsCallback(::System::UInt32 playingID, ::AkCallbackType cbType, ::AkCallbackInfo* cbInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLSTASK__SERIALBELLSCALLBACK_OFFSET))(this, playingID, cbType, cbInfo);
		}

		::System::Void _OnStopSerialBells(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLSTASK__ONSTOPSERIALBELLS_OFFSET))(this, arg);
		}

		::System::Void _OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLSTASK__ONFINISH_OFFSET))(this);
		}

		::System::Void _TriggerEffect(::RPG::GameCore::SerialBellsNoteConfig* noteConfig)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SerialBellsNoteConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLSTASK__TRIGGEREFFECT_OFFSET))(this, noteConfig);
		}
	};
}

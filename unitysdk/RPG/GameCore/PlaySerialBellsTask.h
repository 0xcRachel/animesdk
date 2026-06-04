#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class AkCallbackInfo;
class Class_3_07C3C4D2990C49EE;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client { class MonoEffectSerialBellControl; }
namespace RPG::GameCore { class PlaySerialBells; }
namespace RPG::GameCore { class SerialBellsNoteConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define RPG_GAMECORE_PLAYSERIALBELLSTASK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14B20AE0)
#define RPG_GAMECORE_PLAYSERIALBELLSTASK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x14B20C20)
#define RPG_GAMECORE_PLAYSERIALBELLSTASK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x14B21030)
#define RPG_GAMECORE_PLAYSERIALBELLSTASK_TICK_OFFSET UNITYSDK_OFFSET(0x14B21080)
#define RPG_GAMECORE_PLAYSERIALBELLSTASK__CTOR_OFFSET UNITYSDK_OFFSET(0x14B20A50)
#define RPG_GAMECORE_PLAYSERIALBELLSTASK__DOPLAYSERIALBELLS_OFFSET UNITYSDK_OFFSET(0x14B20E70)
#define RPG_GAMECORE_PLAYSERIALBELLSTASK__ONFINISH_OFFSET UNITYSDK_OFFSET(0x14B21540)
#define RPG_GAMECORE_PLAYSERIALBELLSTASK__ONSTOPSERIALBELLS_OFFSET UNITYSDK_OFFSET(0x14B219F0)
#define RPG_GAMECORE_PLAYSERIALBELLSTASK__SERIALBELLSCALLBACK_OFFSET UNITYSDK_OFFSET(0x14B210E0)
#define RPG_GAMECORE_PLAYSERIALBELLSTASK__TRIGGEREFFECT_OFFSET UNITYSDK_OFFSET(0x14B216B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlaySerialBellsTask_TypeDefinitionIndex = 54478;

	class PlaySerialBellsTask : public ::Class_1_5F51D4049EA87B7B
	{
	public:
		::RPG::GameCore::TaskContext* _TaskContext; // 0x18
		::Class_3_07C3C4D2990C49EE* _FinishSequence; // 0x20
		::RPG::Client::AttachPointMapping* _AttachPoint; // 0x28
		::RPG::Client::MonoEffectManager* _MonoEffectManager; // 0x30
		::RPG::GameCore::PlaySerialBells* _ConfigRef; // 0x38
		::RPG::Client::MonoEffectSerialBellControl* _SerialBellController; // 0x40
		::System::Int32 _LoopCount; // 0x48
		::System::UInt32 _PlayingEventID; // 0x4C

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PlaySerialBells* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PlaySerialBells*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLSTASK__CTOR_OFFSET))(this, a1, a2);
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

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLSTASK_TICK_OFFSET))(this, a1);
		}

		::System::Void _DoPlaySerialBells()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLSTASK__DOPLAYSERIALBELLS_OFFSET))(this);
		}

		::System::Void _SerialBellsCallback(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLSTASK__SERIALBELLSCALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnStopSerialBells(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLSTASK__ONSTOPSERIALBELLS_OFFSET))(this, a1);
		}

		::System::Void _OnFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLSTASK__ONFINISH_OFFSET))(this);
		}

		::System::Void _TriggerEffect(::RPG::GameCore::SerialBellsNoteConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SerialBellsNoteConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYSERIALBELLSTASK__TRIGGEREFFECT_OFFSET))(this, a1);
		}
	};
}

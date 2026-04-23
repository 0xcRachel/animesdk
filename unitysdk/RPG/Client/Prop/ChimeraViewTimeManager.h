#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1150;
namespace RPG::Client { class BaseChimeraViewProxy; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_APPLYTIMESCALETOPROXY_OFFSET UNITYSDK_OFFSET(0x14FE55F0)
#define RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14FE4F30)
#define RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x14FE5290)
#define RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_GET_TIMESCALE_OFFSET UNITYSDK_OFFSET(0x14FE61C0)
#define RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_GET__VIEW_OFFSET UNITYSDK_OFFSET(0x14FE5D00)
#define RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_PAUSEGAME_OFFSET UNITYSDK_OFFSET(0x14FE5DA0)
#define RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_REGISTERTICKABLE_OFFSET UNITYSDK_OFFSET(0x14FE6130)
#define RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_SETTIMESCALE_OFFSET UNITYSDK_OFFSET(0x14FE5450)
#define RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x14FE4F70)
#define RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_UPDATEONACCELERATIONCHANGED_OFFSET UNITYSDK_OFFSET(0x14FE52A0)
#define RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x14FE4EC0)
#define RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER__GETTIMESCALE_OFFSET UNITYSDK_OFFSET(0x14FE5F90)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraViewTimeManager_TypeDefinitionIndex = 72003;

	class ChimeraViewTimeManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1150*>* _TickableList; // 0x10
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_1150*>* _PendingTickableList; // 0x18
		::System::Int32 _PauseLockCount; // 0x20
		::System::Single _TimeScale; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_TICK_OFFSET))(this, time);
		}

		::System::Void UpdateOnAccelerationChanged(::System::Boolean isAccelerated)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_UPDATEONACCELERATIONCHANGED_OFFSET))(this, isAccelerated);
		}

		::System::Void ApplyTimeScaleToProxy(::RPG::Client::BaseChimeraViewProxy* proxy)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseChimeraViewProxy*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_APPLYTIMESCALETOPROXY_OFFSET))(this, proxy);
		}

		::System::Void SetTimeScale(::System::Single timeScale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_SETTIMESCALE_OFFSET))(this, timeScale);
		}

		::System::Void PauseGame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_PAUSEGAME_OFFSET))(this, value);
		}

		::System::Single _GetTimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER__GETTIMESCALE_OFFSET))(this);
		}

		::System::Void RegisterTickable(::Class_0_16E4307DCC419505_1150* cmpt)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1150*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_REGISTERTICKABLE_OFFSET))(this, cmpt);
		}

		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* get__View()
		{
			return ((::RPG::Client::Prop::ChimeraBattlePuzzleBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_GET__VIEW_OFFSET))(this);
		}

		::System::Boolean get_IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Single get_TimeScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_CHIMERAVIEWTIMEMANAGER_GET_TIMESCALE_OFFSET))(this);
		}
	};
}

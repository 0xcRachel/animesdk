#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MONOTIMER_CLEANTIMER_OFFSET UNITYSDK_OFFSET(0x9869680)
#define RPG_CLIENT_MONOTIMER_GET_INTERVAL_OFFSET UNITYSDK_OFFSET(0x9869840)
#define RPG_CLIENT_MONOTIMER_GET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0x9869850)
#define RPG_CLIENT_MONOTIMER_RESET_OFFSET UNITYSDK_OFFSET(0x9869630)
#define RPG_CLIENT_MONOTIMER_SETTIMER_OFFSET UNITYSDK_OFFSET(0x98694E0)
#define RPG_CLIENT_MONOTIMER_SET_INTERVAL_OFFSET UNITYSDK_OFFSET(0x98695D0)
#define RPG_CLIENT_MONOTIMER_SET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0x9869860)
#define RPG_CLIENT_MONOTIMER_UPDATE_OFFSET UNITYSDK_OFFSET(0x98696F0)
#define RPG_CLIENT_MONOTIMER__CTOR_OFFSET UNITYSDK_OFFSET(0x9869870)
#define RPG_CLIENT_MONOTIMER__SHOULDTICK_OFFSET UNITYSDK_OFFSET(0x98697E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTimer_TypeDefinitionIndex = 57881;

	class MonoTimer : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean _IsPause_k__BackingField; // 0x18
		::System::Action_2<::XLua::LuaTable*, ::System::Int32>* _TimerCallback; // 0x20
		::XLua::LuaTable* _LuaSelf; // 0x28
		::System::Single _Interval; // 0x30
		::System::Single _CurrentTime; // 0x34
		::System::Int32 _Count; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMER__CTOR_OFFSET))(this);
		}

		::System::Void SetTimer(::System::Action_2<::XLua::LuaTable*, ::System::Int32>* timerCallback, ::XLua::LuaTable* luaSelf, ::System::Single interval)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::XLua::LuaTable*, ::System::Int32>*, ::XLua::LuaTable*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMER_SETTIMER_OFFSET))(this, timerCallback, luaSelf, interval);
		}

		::System::Void CleanTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMER_CLEANTIMER_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMER_RESET_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMER_UPDATE_OFFSET))(this);
		}

		::System::Boolean _ShouldTick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMER__SHOULDTICK_OFFSET))(this);
		}

		::System::Single get_Interval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMER_GET_INTERVAL_OFFSET))(this);
		}

		::System::Void set_Interval(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMER_SET_INTERVAL_OFFSET))(this, value);
		}

		::System::Boolean get_IsPause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMER_GET_ISPAUSE_OFFSET))(this);
		}

		::System::Void set_IsPause(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTIMER_SET_ISPAUSE_OFFSET))(this, value);
		}
	};
}

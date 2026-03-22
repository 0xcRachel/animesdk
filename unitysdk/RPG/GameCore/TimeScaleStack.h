#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_8914B164A728534C.h"
#include "unitysdk/System/Object.h"

class Class_1_83AB3963F9C15714;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_GAMECORE_TIMESCALESTACK_CALCCURRENTVALUE_OFFSET UNITYSDK_OFFSET(0xA53F840)
#define RPG_GAMECORE_TIMESCALESTACK_CALCVALUEFORINDEX_OFFSET UNITYSDK_OFFSET(0xA540640)
#define RPG_GAMECORE_TIMESCALESTACK_CALCVALUEIGNOREINDEX_OFFSET UNITYSDK_OFFSET(0xA5405A0)
#define RPG_GAMECORE_TIMESCALESTACK_CONTAINSFINITELYSCALE_OFFSET UNITYSDK_OFFSET(0xA540510)
#define RPG_GAMECORE_TIMESCALESTACK_CONTAINSINDEX_OFFSET UNITYSDK_OFFSET(0xA540460)
#define RPG_GAMECORE_TIMESCALESTACK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA53DFD0)
#define RPG_GAMECORE_TIMESCALESTACK_FLUSH_OFFSET UNITYSDK_OFFSET(0xA53F5E0)
#define RPG_GAMECORE_TIMESCALESTACK_GETINDEXVALUE_OFFSET UNITYSDK_OFFSET(0xA540A30)
#define RPG_GAMECORE_TIMESCALESTACK_GET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0xA53DFC0)
#define RPG_GAMECORE_TIMESCALESTACK_GET_MUTETIMESCALE_OFFSET UNITYSDK_OFFSET(0xA5412A0)
#define RPG_GAMECORE_TIMESCALESTACK_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xA53DFB0)
#define RPG_GAMECORE_TIMESCALESTACK_MUTEINDEX_OFFSET UNITYSDK_OFFSET(0xA540D30)
#define RPG_GAMECORE_TIMESCALESTACK_NOTIFYVALUEUPDATE_OFFSET UNITYSDK_OFFSET(0xA53F8D0)
#define RPG_GAMECORE_TIMESCALESTACK_PAUSE_OFFSET UNITYSDK_OFFSET(0xA53F930)
#define RPG_GAMECORE_TIMESCALESTACK_PUBLICPAUSE_OFFSET UNITYSDK_OFFSET(0xA53FFB0)
#define RPG_GAMECORE_TIMESCALESTACK_REMOVEALLFINITELYSCALE_OFFSET UNITYSDK_OFFSET(0xA53F3E0)
#define RPG_GAMECORE_TIMESCALESTACK_REMOVEALLINFINITELYSCALE_OFFSET UNITYSDK_OFFSET(0xA53F1E0)
#define RPG_GAMECORE_TIMESCALESTACK_REMOVESCALEBYINDEX_OFFSET UNITYSDK_OFFSET(0xA53EE70)
#define RPG_GAMECORE_TIMESCALESTACK_REMOVESCALEBYKEY_OFFSET UNITYSDK_OFFSET(0xA53EA00)
#define RPG_GAMECORE_TIMESCALESTACK_SAFELYREMOVESCALEBYINDEX_OFFSET UNITYSDK_OFFSET(0xA53F160)
#define RPG_GAMECORE_TIMESCALESTACK_SCALEBYCURVE_OFFSET UNITYSDK_OFFSET(0xA540070)
#define RPG_GAMECORE_TIMESCALESTACK_SCALEBYDURATION_OFFSET UNITYSDK_OFFSET(0xA53FCC0)
#define RPG_GAMECORE_TIMESCALESTACK_SCALEBYINDEX_OFFSET UNITYSDK_OFFSET(0xA5403A0)
#define RPG_GAMECORE_TIMESCALESTACK_SCALEINFINITELY_OFFSET UNITYSDK_OFFSET(0xA53FA00)
#define RPG_GAMECORE_TIMESCALESTACK_SETINDEXVALUE_OFFSET UNITYSDK_OFFSET(0xA540AF0)
#define RPG_GAMECORE_TIMESCALESTACK_SET_MUTETIMESCALE_OFFSET UNITYSDK_OFFSET(0xA5412B0)
#define RPG_GAMECORE_TIMESCALESTACK_STRETCHENTRYBYINDEX_OFFSET UNITYSDK_OFFSET(0xA540790)
#define RPG_GAMECORE_TIMESCALESTACK_TICK_OFFSET UNITYSDK_OFFSET(0xA53E060)
#define RPG_GAMECORE_TIMESCALESTACK__CTOR_OFFSET UNITYSDK_OFFSET(0xA53DE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeScaleStack_TypeDefinitionIndex = 46836;

	class TimeScaleStack : public ::System::Object
	{
	public:
		::System::Action_1<::System::Int32>* SlowEntryRemoveCallback; // 0x10
		::System::Collections::Generic::List_1<::Struct_2_8914B164A728534C>* _TimeSlowEntries; // 0x18
		::Class_1_83AB3963F9C15714* _TimeScaleStack; // 0x20
		::System::Action_1<::System::Single>* ValueUpdateCallback; // 0x28
		::System::Single _MaxValue; // 0x30
		::System::Int32 _PublicPauseIndex; // 0x34
		::System::Single _CurrentValue; // 0x38
		::System::Single _MinValue; // 0x3C
		::System::Boolean _HasTimeSlowEntry; // 0x40
		::System::Boolean _MuteTimeScale; // 0x41

		::System::Void _ctor(::RPG::GameCore::FixPoint min, ::RPG::GameCore::FixPoint max)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK__CTOR_OFFSET))(this, min, max);
		}

		::System::Single get_Value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_GET_VALUE_OFFSET))(this);
		}

		::System::Boolean get_IsPause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_GET_ISPAUSE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single elapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_TICK_OFFSET))(this, elapsedTimeInSec);
		}

		::System::Void RemoveScaleByKey(::System::String* key, ::System::Boolean fadeRemove)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_REMOVESCALEBYKEY_OFFSET))(this, key, fadeRemove);
		}

		::System::Void RemoveScaleByIndex(::System::Int32 index, ::System::Boolean fadeRemove)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_REMOVESCALEBYINDEX_OFFSET))(this, index, fadeRemove);
		}

		::System::Void SafelyRemoveScaleByIndex(::System::Int32 index, ::System::Int32 stackHashCode, ::System::Boolean fadeRemove)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_SAFELYREMOVESCALEBYINDEX_OFFSET))(this, index, stackHashCode, fadeRemove);
		}

		::System::Void RemoveAllInfinitelyScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_REMOVEALLINFINITELYSCALE_OFFSET))(this);
		}

		::System::Void RemoveAllFinitelyScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_REMOVEALLFINITELYSCALE_OFFSET))(this);
		}

		::System::Void Flush()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_FLUSH_OFFSET))(this);
		}

		::System::Int32 Pause(::System::Single fDuration, ::System::Boolean skipFirstFrame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_PAUSE_OFFSET))(this, fDuration, skipFirstFrame);
		}

		::System::Void PublicPause(::System::Boolean isPause)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_PUBLICPAUSE_OFFSET))(this, isPause);
		}

		::System::Int32 ScaleByDuration(::System::Single fScale, ::System::Single fDuration, ::System::String* key, ::System::Single fadeInTime, ::System::Single fadeOutTime, ::UnityEngine::AnimationCurve* fadeInCurve, ::UnityEngine::AnimationCurve* fadeOutCurve, ::System::Single activeDelay, ::System::Boolean skipFirstFrame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single, ::System::String*, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_SCALEBYDURATION_OFFSET))(this, fScale, fDuration, key, fadeInTime, fadeOutTime, fadeInCurve, fadeOutCurve, activeDelay, skipFirstFrame);
		}

		::System::Int32 ScaleByCurve(::System::Single fDuration, ::UnityEngine::AnimationCurve* pCurve, ::System::String* key, ::System::Single fNormalizedScale, ::System::Boolean skipFirstFrame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::UnityEngine::AnimationCurve*, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_SCALEBYCURVE_OFFSET))(this, fDuration, pCurve, key, fNormalizedScale, skipFirstFrame);
		}

		::System::Int32 ScaleByIndex(::System::Int32 nIndex, ::System::Single fScale)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_SCALEBYINDEX_OFFSET))(this, nIndex, fScale);
		}

		::System::Int32 ScaleInfinitely(::System::Single fScale, ::System::String* key, ::System::Single fadeInTime, ::System::Single fadeOutTime, ::UnityEngine::AnimationCurve* fadeInCurve, ::UnityEngine::AnimationCurve* fadeOutCurve, ::System::Single activeDelay, ::System::Boolean skipFirstFrame)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::String*, ::System::Single, ::System::Single, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_SCALEINFINITELY_OFFSET))(this, fScale, key, fadeInTime, fadeOutTime, fadeInCurve, fadeOutCurve, activeDelay, skipFirstFrame);
		}

		::System::Boolean ContainsIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_CONTAINSINDEX_OFFSET))(this, index);
		}

		::System::Boolean ContainsFinitelyScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_CONTAINSFINITELYSCALE_OFFSET))(this);
		}

		::System::Single CalcValueIgnoreIndex(::System::Collections::Generic::List_1<::System::Int32>* ignoreIndexList)
		{
			return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_CALCVALUEIGNOREINDEX_OFFSET))(this, ignoreIndexList);
		}

		::System::Single CalcValueForIndex(::System::Collections::Generic::List_1<::System::Int32>* indexList)
		{
			return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_CALCVALUEFORINDEX_OFFSET))(this, indexList);
		}

		::System::Boolean StretchEntryByIndex(::System::Int32 index, ::System::Single scale)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_STRETCHENTRYBYINDEX_OFFSET))(this, index, scale);
		}

		::System::Single GetIndexValue(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_GETINDEXVALUE_OFFSET))(this, index);
		}

		::System::Void SetIndexValue(::System::Int32 nIndex, ::System::Single fValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_SETINDEXVALUE_OFFSET))(this, nIndex, fValue);
		}

		::System::Void MuteIndex(::System::Int32 nIndex, ::System::Boolean mute)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_MUTEINDEX_OFFSET))(this, nIndex, mute);
		}

		::System::Void NotifyValueUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_NOTIFYVALUEUPDATE_OFFSET))(this);
		}

		::System::Void CalcCurrentValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_CALCCURRENTVALUE_OFFSET))(this);
		}

		::System::Boolean get_MuteTimeScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_GET_MUTETIMESCALE_OFFSET))(this);
		}

		::System::Void set_MuteTimeScale(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMESCALESTACK_SET_MUTETIMESCALE_OFFSET))(this, value);
		}
	};
}

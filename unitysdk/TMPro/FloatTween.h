#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace TMPro { class FloatTween_FloatTweenCallback; }
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define TMPRO_FLOATTWEEN_ADDONCHANGEDCALLBACK_OFFSET UNITYSDK_OFFSET(0x37A8590)
#define TMPRO_FLOATTWEEN_GETDURATION_OFFSET UNITYSDK_OFFSET(0x6678E0)
#define TMPRO_FLOATTWEEN_GETIGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0x37A05C0)
#define TMPRO_FLOATTWEEN_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x6678E0)
#define TMPRO_FLOATTWEEN_GET_IGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0x37A05C0)
#define TMPRO_FLOATTWEEN_GET_STARTVALUE_OFFSET UNITYSDK_OFFSET(0xFD2FD0)
#define TMPRO_FLOATTWEEN_GET_TARGETVALUE_OFFSET UNITYSDK_OFFSET(0xFD35D0)
#define TMPRO_FLOATTWEEN_SET_DURATION_OFFSET UNITYSDK_OFFSET(0x37A8530)
#define TMPRO_FLOATTWEEN_SET_IGNORETIMESCALE_OFFSET UNITYSDK_OFFSET(0x37A05D0)
#define TMPRO_FLOATTWEEN_SET_STARTVALUE_OFFSET UNITYSDK_OFFSET(0x3740CB0)
#define TMPRO_FLOATTWEEN_SET_TARGETVALUE_OFFSET UNITYSDK_OFFSET(0x3740CC0)
#define TMPRO_FLOATTWEEN_TWEENVALUE_OFFSET UNITYSDK_OFFSET(0x37A8540)
#define TMPRO_FLOATTWEEN_VALIDTARGET_OFFSET UNITYSDK_OFFSET(0xBC76D0)

namespace TMPro
{
	inline static constexpr unsigned int FloatTween_TypeDefinitionIndex = 40936;

	struct alignas(8) FloatTween
	{
		::TMPro::FloatTween_FloatTweenCallback* m_Target; // 0x10
		::System::Single m_StartValue; // 0x18
		::System::Single m_TargetValue; // 0x1C
		::System::Single m_Duration; // 0x20
		::System::Boolean m_IgnoreTimeScale; // 0x24

		::System::Single get_startValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_GET_STARTVALUE_OFFSET))(this);
		}

		::System::Void set_startValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_SET_STARTVALUE_OFFSET))(this, a1);
		}

		::System::Single get_targetValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_GET_TARGETVALUE_OFFSET))(this);
		}

		::System::Void set_targetValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_SET_TARGETVALUE_OFFSET))(this, a1);
		}

		::System::Single get_duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_GET_DURATION_OFFSET))(this);
		}

		::System::Void set_duration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_SET_DURATION_OFFSET))(this, a1);
		}

		::System::Boolean get_ignoreTimeScale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_GET_IGNORETIMESCALE_OFFSET))(this);
		}

		::System::Void set_ignoreTimeScale(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_SET_IGNORETIMESCALE_OFFSET))(this, a1);
		}

		::System::Void TweenValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_TWEENVALUE_OFFSET))(this, a1);
		}

		::System::Void AddOnChangedCallback(::UnityEngine::Events::UnityAction_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction_1<::System::Single>*))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_ADDONCHANGEDCALLBACK_OFFSET))(this, a1);
		}

		::System::Boolean GetIgnoreTimescale()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_GETIGNORETIMESCALE_OFFSET))(this);
		}

		::System::Single GetDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_GETDURATION_OFFSET))(this);
		}

		::System::Boolean ValidTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_VALIDTARGET_OFFSET))(this);
		}
	};
}

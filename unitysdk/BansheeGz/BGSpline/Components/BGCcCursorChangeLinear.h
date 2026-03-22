#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcCursorChangeLinear_OverflowControlEnum.h"
#include "unitysdk/BansheeGz/BGSpline/Components/BGCcWithCursor.h"

namespace BansheeGz::BGSpline::Components { class BGCcCursor; }
namespace BansheeGz::BGSpline::Components { class BGCcCursorChangeLinear_PointReachedArgs; }
namespace BansheeGz::BGSpline::Components { class BGCcCursorChangeLinear_PointReachedEvent; }
namespace BansheeGz::BGSpline::Curve { class BGCurveBaseMath; }
namespace BansheeGz::BGSpline::Curve { class BGCurvePointField; }
namespace System { template <typename T> class EventHandler_1; }

#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_ADD_POINTREACHED_OFFSET UNITYSDK_OFFSET(0x15EA8F30)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_CHECKDELAYATPOINT_OFFSET UNITYSDK_OFFSET(0x15EAB6F0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_CHECKDELAYATSECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x15EAB160)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_CHECKFORNEWDELAY_OFFSET UNITYSDK_OFFSET(0x15EAA4B0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_CHECKIFDELAYISOVER_OFFSET UNITYSDK_OFFSET(0x15EAA030)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_FIREPOINTREACHEDEVENT_OFFSET UNITYSDK_OFFSET(0x15EAB5A0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x15EAA020)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GETDELAYATPOINT_OFFSET UNITYSDK_OFFSET(0x15EAACA0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GETSPEEDATPOINT_OFFSET UNITYSDK_OFFSET(0x15EAAE20)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_ADJUSTBYTOTALLENGTH_OFFSET UNITYSDK_OFFSET(0x15EA90B0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_CURRENTSPEED_OFFSET UNITYSDK_OFFSET(0x15EA92D0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_DELAYFIELD_OFFSET UNITYSDK_OFFSET(0x15EA91B0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_DELAY_OFFSET UNITYSDK_OFFSET(0x15EA9190)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_OVERFLOWCONTROL_OFFSET UNITYSDK_OFFSET(0x15EA9030)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_SPEEDFIELD_OFFSET UNITYSDK_OFFSET(0x15EA90D0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_SPEEDREVERSED_OFFSET UNITYSDK_OFFSET(0x15EA92C0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_SPEED_OFFSET UNITYSDK_OFFSET(0x15EA9090)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_STOPPED_OFFSET UNITYSDK_OFFSET(0x15EA92A0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_USEFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x15EA9280)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_ISDELAYREQUIRED_OFFSET UNITYSDK_OFFSET(0x15EAAFA0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_OVERFLOW_OFFSET UNITYSDK_OFFSET(0x15EAA730)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_REMOVE_POINTREACHED_OFFSET UNITYSDK_OFFSET(0x15EA8FB0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_ADJUSTBYTOTALLENGTH_OFFSET UNITYSDK_OFFSET(0x15EA90C0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_DELAYFIELD_OFFSET UNITYSDK_OFFSET(0x15EA91C0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_DELAY_OFFSET UNITYSDK_OFFSET(0x15EA91A0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_OVERFLOWCONTROL_OFFSET UNITYSDK_OFFSET(0x15EA9040)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_SPEEDFIELD_OFFSET UNITYSDK_OFFSET(0x15EA90E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_SPEED_OFFSET UNITYSDK_OFFSET(0x15EA90A0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_STOPPED_OFFSET UNITYSDK_OFFSET(0x15EA92B0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_USEFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x15EA9290)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_STARTDELAY_OFFSET UNITYSDK_OFFSET(0x15EAB130)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_START_OFFSET UNITYSDK_OFFSET(0x15EA95E0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_STEP_OFFSET UNITYSDK_OFFSET(0x15EA9AA0)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_UPDATE_OFFSET UNITYSDK_OFFSET(0x15EA9A90)
#define BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR__CTOR_OFFSET UNITYSDK_OFFSET(0x15EAB9B0)

namespace BansheeGz::BGSpline::Components
{
	inline static constexpr unsigned int BGCcCursorChangeLinear_TypeDefinitionIndex = 27472;

	class BGCcCursorChangeLinear : public ::BansheeGz::BGSpline::Components::BGCcWithCursor
	{
	public:
		// static const ::System::Single SpeedThreshold; // 0x0
		::System::EventHandler_1<::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_PointReachedArgs*>* PointReached; // 0x58
		::System::Boolean useFixedUpdate; // 0x60
		::System::Single speed; // 0x64
		::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_OverflowControlEnum overflowControl; // 0x68
		::System::Boolean adjustByTotalLength; // 0x6C
		::BansheeGz::BGSpline::Curve::BGCurvePointField* speedField; // 0x70
		::System::Single delay; // 0x78
		::BansheeGz::BGSpline::Curve::BGCurvePointField* delayField; // 0x80
		::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_PointReachedEvent* pointReachedEvent; // 0x88
		::System::Single oldLength; // 0x90
		::System::Boolean speedReversed; // 0x94
		::System::Int32 currentSectionIndex; // 0x98
		::System::Single delayStarted; // 0x9C
		::System::Boolean speedWasPositiveWhileDelayed; // 0xA0
		::System::Boolean skipZeroPoint; // 0xA1
		::System::Boolean _Stopped_k__BackingField; // 0xA2

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR__CTOR_OFFSET))(this);
		}

		::System::Void add_PointReached(::System::EventHandler_1<::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_PointReachedArgs*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_PointReachedArgs*>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_ADD_POINTREACHED_OFFSET))(this, value);
		}

		::System::Void remove_PointReached(::System::EventHandler_1<::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_PointReachedArgs*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventHandler_1<::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_PointReachedArgs*>*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_REMOVE_POINTREACHED_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_OverflowControlEnum get_OverflowControl()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_OverflowControlEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_OVERFLOWCONTROL_OFFSET))(this);
		}

		::System::Void set_OverflowControl(::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_OverflowControlEnum value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcCursorChangeLinear_OverflowControlEnum))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_OVERFLOWCONTROL_OFFSET))(this, value);
		}

		::System::Single get_Speed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_SPEED_OFFSET))(this);
		}

		::System::Void set_Speed(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_SPEED_OFFSET))(this, value);
		}

		::System::Boolean get_AdjustByTotalLength()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_ADJUSTBYTOTALLENGTH_OFFSET))(this);
		}

		::System::Void set_AdjustByTotalLength(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_ADJUSTBYTOTALLENGTH_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePointField* get_SpeedField()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePointField*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_SPEEDFIELD_OFFSET))(this);
		}

		::System::Void set_SpeedField(::BansheeGz::BGSpline::Curve::BGCurvePointField* value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePointField*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_SPEEDFIELD_OFFSET))(this, value);
		}

		::System::Single get_Delay()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_DELAY_OFFSET))(this);
		}

		::System::Void set_Delay(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_DELAY_OFFSET))(this, value);
		}

		::BansheeGz::BGSpline::Curve::BGCurvePointField* get_DelayField()
		{
			return ((::BansheeGz::BGSpline::Curve::BGCurvePointField*(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_DELAYFIELD_OFFSET))(this);
		}

		::System::Void set_DelayField(::BansheeGz::BGSpline::Curve::BGCurvePointField* value)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurvePointField*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_DELAYFIELD_OFFSET))(this, value);
		}

		::System::Boolean get_UseFixedUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_USEFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void set_UseFixedUpdate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_USEFIXEDUPDATE_OFFSET))(this, value);
		}

		::System::Boolean get_Stopped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_STOPPED_OFFSET))(this);
		}

		::System::Void set_Stopped(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_SET_STOPPED_OFFSET))(this, value);
		}

		::System::Boolean get_SpeedReversed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_SPEEDREVERSED_OFFSET))(this);
		}

		::System::Single get_CurrentSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GET_CURRENTSPEED_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_UPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void Step()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_STEP_OFFSET))(this);
		}

		::System::Single GetDelayAtPoint(::System::Int32 point)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GETDELAYATPOINT_OFFSET))(this, point);
		}

		::System::Single GetSpeedAtPoint(::System::Int32 point)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_GETSPEEDATPOINT_OFFSET))(this, point);
		}

		::System::Boolean IsDelayRequired(::System::Int32 pointIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_ISDELAYREQUIRED_OFFSET))(this, pointIndex);
		}

		::System::Void StartDelay(::System::Boolean speedIsPositive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_STARTDELAY_OFFSET))(this, speedIsPositive);
		}

		::System::Boolean CheckForNewDelay(::BansheeGz::BGSpline::Curve::BGCurveBaseMath* math, ::System::Single distance, ::System::Int32& newSectionIndex, ::System::Boolean checkDelay, ::System::Boolean firingEvents)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath*, ::System::Single, ::System::Int32&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_CHECKFORNEWDELAY_OFFSET))(this, math, distance, newSectionIndex, checkDelay, firingEvents);
		}

		::System::Boolean CheckDelayAtSectionChanged(::System::Int32 newSectionIndex, ::System::Boolean checkDelay, ::System::Boolean firingEvents, ::System::Boolean speedPositive)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_CHECKDELAYATSECTIONCHANGED_OFFSET))(this, newSectionIndex, checkDelay, firingEvents, speedPositive);
		}

		::System::Boolean CheckDelayAtPoint(::BansheeGz::BGSpline::Curve::BGCurveBaseMath* math, ::BansheeGz::BGSpline::Components::BGCcCursor* cursor, ::System::Int32 pointIndex, ::System::Boolean speedPositive)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath*, ::BansheeGz::BGSpline::Components::BGCcCursor*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_CHECKDELAYATPOINT_OFFSET))(this, math, cursor, pointIndex, speedPositive);
		}

		::System::Void Overflow(::BansheeGz::BGSpline::Curve::BGCurveBaseMath* math, ::System::Single& newDistance, ::System::Boolean currentSpeedPositive, ::System::Boolean checkDelay, ::System::Boolean firingEvents)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath*, ::System::Single&, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_OVERFLOW_OFFSET))(this, math, newDistance, currentSpeedPositive, checkDelay, firingEvents);
		}

		::System::Boolean CheckIfDelayIsOver(::BansheeGz::BGSpline::Curve::BGCurveBaseMath* math, ::BansheeGz::BGSpline::Components::BGCcCursor* cursor)
		{
			return ((::System::Boolean(*)(::PVOID, ::BansheeGz::BGSpline::Curve::BGCurveBaseMath*, ::BansheeGz::BGSpline::Components::BGCcCursor*))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_CHECKIFDELAYISOVER_OFFSET))(this, math, cursor);
		}

		::System::Void FirePointReachedEvent(::System::Int32 pointIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BANSHEEGZ_BGSPLINE_COMPONENTS_BGCCCURSORCHANGELINEAR_FIREPOINTREACHEDEVENT_OFFSET))(this, pointIndex);
		}
	};
}

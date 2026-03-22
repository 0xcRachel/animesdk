#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/QuickBase.h"
#include "unitysdk/HedgehogTeam/EasyTouch/QuickPinch_ActionPinchDirection.h"
#include "unitysdk/HedgehogTeam/EasyTouch/QuickPinch_ActionTiggering.h"

namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace HedgehogTeam::EasyTouch { class QuickPinch_OnPinchAction; }

#define HEDGEHOGTEAM_EASYTOUCH_QUICKPINCH_DOACTION_OFFSET UNITYSDK_OFFSET(0x113131C0)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKPINCH_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11313190)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKPINCH_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x11312E60)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKPINCH_ONENABLE_OFFSET UNITYSDK_OFFSET(0x11312B40)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKPINCH_ON_PICHEND_OFFSET UNITYSDK_OFFSET(0x11313450)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKPINCH_ON_PINCHIN_OFFSET UNITYSDK_OFFSET(0x11313410)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKPINCH_ON_PINCHOUT_OFFSET UNITYSDK_OFFSET(0x11313430)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKPINCH_ON_PINCH_OFFSET UNITYSDK_OFFSET(0x113131A0)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKPINCH_UNSUBSCRIBEEVENT_OFFSET UNITYSDK_OFFSET(0x11312E70)
#define HEDGEHOGTEAM_EASYTOUCH_QUICKPINCH__CTOR_OFFSET UNITYSDK_OFFSET(0x11312AB0)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int QuickPinch_TypeDefinitionIndex = 30406;

	class QuickPinch : public ::HedgehogTeam::EasyTouch::QuickBase
	{
	public:
		::HedgehogTeam::EasyTouch::QuickPinch_OnPinchAction* onPinchAction; // 0x70
		::System::Boolean isGestureOnMe; // 0x78
		::HedgehogTeam::EasyTouch::QuickPinch_ActionTiggering actionTriggering; // 0x7C
		::HedgehogTeam::EasyTouch::QuickPinch_ActionPinchDirection pinchDirection; // 0x80
		::System::Single axisActionValue; // 0x84
		::System::Boolean enableSimpleAction; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKPINCH__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKPINCH_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKPINCH_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKPINCH_ONDESTROY_OFFSET))(this);
		}

		::System::Void UnsubscribeEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKPINCH_UNSUBSCRIBEEVENT_OFFSET))(this);
		}

		::System::Void On_Pinch(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKPINCH_ON_PINCH_OFFSET))(this, gesture);
		}

		::System::Void On_PinchIn(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKPINCH_ON_PINCHIN_OFFSET))(this, gesture);
		}

		::System::Void On_PinchOut(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKPINCH_ON_PINCHOUT_OFFSET))(this, gesture);
		}

		::System::Void On_PichEnd(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKPINCH_ON_PICHEND_OFFSET))(this, gesture);
		}

		::System::Void DoAction(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_QUICKPINCH_DOACTION_OFFSET))(this, gesture);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_43FD6E21AEF38B88;
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace UnityEngine::EventSystems { class BaseEventData; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define RPG_CLIENT_FREELOOKPAGECONTEXT_GET_VIEW_OFFSET UNITYSDK_OFFSET(0x11348790)
#define RPG_CLIENT_FREELOOKPAGECONTEXT_ON_PINCHOUT_OFFSET UNITYSDK_OFFSET(0x11349B10)
#define RPG_CLIENT_FREELOOKPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11348460)
#define RPG_CLIENT_FREELOOKPAGECONTEXT__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x11348500)
#define RPG_CLIENT_FREELOOKPAGECONTEXT__ONBTNMOVEDOWN_OFFSET UNITYSDK_OFFSET(0x113498D0)
#define RPG_CLIENT_FREELOOKPAGECONTEXT__ONBTNMOVEUP_OFFSET UNITYSDK_OFFSET(0x11349920)
#define RPG_CLIENT_FREELOOKPAGECONTEXT__ONEXITBTN_OFFSET UNITYSDK_OFFSET(0x11348F20)
#define RPG_CLIENT_FREELOOKPAGECONTEXT__ONPINCHEND_OFFSET UNITYSDK_OFFSET(0x11349E00)
#define RPG_CLIENT_FREELOOKPAGECONTEXT__ONPINCHIN_OFFSET UNITYSDK_OFFSET(0x11349970)
#define RPG_CLIENT_FREELOOKPAGECONTEXT__ONRESETBTN_OFFSET UNITYSDK_OFFSET(0x11349010)
#define RPG_CLIENT_FREELOOKPAGECONTEXT__ONSCREENDRAGING_OFFSET UNITYSDK_OFFSET(0x113490E0)
#define RPG_CLIENT_FREELOOKPAGECONTEXT__ONSCROLL_OFFSET UNITYSDK_OFFSET(0x113495E0)
#define RPG_CLIENT_FREELOOKPAGECONTEXT__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x113487F0)
#define RPG_CLIENT_FREELOOKPAGECONTEXT___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x11349F70)
#define RPG_CLIENT_FREELOOKPAGECONTEXT___IFIXBASEPROXY__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x11349FD0)

namespace RPG::Client
{
	inline static constexpr unsigned int FreeLookPageContext_TypeDefinitionIndex = 67121;

	class FreeLookPageContext : public ::RPG::Client::UIController
	{
	public:
		::System::Single _MinimumDistanc_MinDistance; // 0x180
		::System::Boolean _IsPressMove; // 0x184
		::UnityEngine::Vector3 _Offset; // 0x188
		::UnityEngine::Vector3 _InitLookAtPos; // 0x194

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREELOOKPAGECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREELOOKPAGECONTEXT__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREELOOKPAGECONTEXT__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnExitBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREELOOKPAGECONTEXT__ONEXITBTN_OFFSET))(this);
		}

		::System::Void _OnResetBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREELOOKPAGECONTEXT__ONRESETBTN_OFFSET))(this);
		}

		::System::Void _OnScreenDraging(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREELOOKPAGECONTEXT__ONSCREENDRAGING_OFFSET))(this, eventData);
		}

		::System::Void _OnScroll(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREELOOKPAGECONTEXT__ONSCROLL_OFFSET))(this, eventData);
		}

		::System::Void _OnBtnMoveDown(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREELOOKPAGECONTEXT__ONBTNMOVEDOWN_OFFSET))(this, eventData);
		}

		::System::Void _OnBtnMoveUp(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREELOOKPAGECONTEXT__ONBTNMOVEUP_OFFSET))(this, eventData);
		}

		::System::Void _OnPinchIn(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREELOOKPAGECONTEXT__ONPINCHIN_OFFSET))(this, gesture);
		}

		::System::Void On_PinchOut(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREELOOKPAGECONTEXT_ON_PINCHOUT_OFFSET))(this, gesture);
		}

		::System::Void _OnPinchEnd(::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREELOOKPAGECONTEXT__ONPINCHEND_OFFSET))(this, gesture);
		}

		::Class_2_43FD6E21AEF38B88* get_View()
		{
			return ((::Class_2_43FD6E21AEF38B88*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREELOOKPAGECONTEXT_GET_VIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREELOOKPAGECONTEXT___IFIXBASEPROXY__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FREELOOKPAGECONTEXT___IFIXBASEPROXY__SETUPVIEW_OFFSET))(this);
		}
	};
}

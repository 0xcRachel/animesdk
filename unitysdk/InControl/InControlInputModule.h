#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InControlInputModule_Button.h"
#include "unitysdk/InControl/InControlInputModule_NavigationControlType.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/EventSystems/PointerInputModule.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace InControl { class InControlInputModule_IInputProcessor; }
namespace InControl { class InputControl; }
namespace InControl { class InputDevice; }
namespace InControl { class PlayerAction; }
namespace InControl { class PlayerTwoAxisAction; }
namespace InControl { class TwoAxisInputControl; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::EventSystems { class PointerInputModule_MouseButtonEventData; }

#define INCONTROL_INCONTROLINPUTMODULE_ACTIVATEMODULE_OFFSET UNITYSDK_OFFSET(0x152277C0)
#define INCONTROL_INCONTROLINPUTMODULE_ADDINPUTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1522A650)
#define INCONTROL_INCONTROLINPUTMODULE_FORCERELEASEDRAG_OFFSET UNITYSDK_OFFSET(0x152281A0)
#define INCONTROL_INCONTROLINPUTMODULE_GET_CANCELACTION_OFFSET UNITYSDK_OFFSET(0x15226F90)
#define INCONTROL_INCONTROLINPUTMODULE_GET_CANCELBUTTON_OFFSET UNITYSDK_OFFSET(0x1522A4A0)
#define INCONTROL_INCONTROLINPUTMODULE_GET_CANCELWASPRESSED_OFFSET UNITYSDK_OFFSET(0x15227620)
#define INCONTROL_INCONTROLINPUTMODULE_GET_DEVICE_OFFSET UNITYSDK_OFFSET(0x1522A250)
#define INCONTROL_INCONTROLINPUTMODULE_GET_ISSHOWSDKUI_OFFSET UNITYSDK_OFFSET(0x1522A7A0)
#define INCONTROL_INCONTROLINPUTMODULE_GET_MOUSEBUTTONWASPRESSED_OFFSET UNITYSDK_OFFSET(0x15227720)
#define INCONTROL_INCONTROLINPUTMODULE_GET_MOUSEHASMOVED_OFFSET UNITYSDK_OFFSET(0x152276C0)
#define INCONTROL_INCONTROLINPUTMODULE_GET_MOVEACTION_OFFSET UNITYSDK_OFFSET(0x15226FB0)
#define INCONTROL_INCONTROLINPUTMODULE_GET_SUBMITACTION_OFFSET UNITYSDK_OFFSET(0x15226F70)
#define INCONTROL_INCONTROLINPUTMODULE_GET_SUBMITBUTTON_OFFSET UNITYSDK_OFFSET(0x1522A3A0)
#define INCONTROL_INCONTROLINPUTMODULE_GET_SUBMITWASPRESSED_OFFSET UNITYSDK_OFFSET(0x15227600)
#define INCONTROL_INCONTROLINPUTMODULE_GET_SUBMITWASRELEASED_OFFSET UNITYSDK_OFFSET(0x15229E60)
#define INCONTROL_INCONTROLINPUTMODULE_GET_VECTORHASCHANGED_OFFSET UNITYSDK_OFFSET(0x1522A750)
#define INCONTROL_INCONTROLINPUTMODULE_GET_VECTORISPRESSED_OFFSET UNITYSDK_OFFSET(0x1522A360)
#define INCONTROL_INCONTROLINPUTMODULE_GET_VECTORISRELEASED_OFFSET UNITYSDK_OFFSET(0x1522A320)
#define INCONTROL_INCONTROLINPUTMODULE_GET_VECTORWASPRESSED_OFFSET UNITYSDK_OFFSET(0x15227640)
#define INCONTROL_INCONTROLINPUTMODULE_ISMODULESUPPORTED_OFFSET UNITYSDK_OFFSET(0x15227160)
#define INCONTROL_INCONTROLINPUTMODULE_PROCESSMOUSEEVENT_1_OFFSET UNITYSDK_OFFSET(0x1522A7B0)
#define INCONTROL_INCONTROLINPUTMODULE_PROCESSMOUSEEVENT_OFFSET UNITYSDK_OFFSET(0x15228190)
#define INCONTROL_INCONTROLINPUTMODULE_PROCESSMOUSEPRESS_OFFSET UNITYSDK_OFFSET(0x15229080)
#define INCONTROL_INCONTROLINPUTMODULE_PROCESSMOVE_OFFSET UNITYSDK_OFFSET(0x15229CB0)
#define INCONTROL_INCONTROLINPUTMODULE_PROCESSTOUCHEVENTS_OFFSET UNITYSDK_OFFSET(0x15227FE0)
#define INCONTROL_INCONTROLINPUTMODULE_PROCESSTOUCHPRESS_OFFSET UNITYSDK_OFFSET(0x15228430)
#define INCONTROL_INCONTROLINPUTMODULE_PROCESS_OFFSET UNITYSDK_OFFSET(0x152278B0)
#define INCONTROL_INCONTROLINPUTMODULE_REMOVEINPUTPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1522A6F0)
#define INCONTROL_INCONTROLINPUTMODULE_SENDBUTTONEVENTTOSELECTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x15227E60)
#define INCONTROL_INCONTROLINPUTMODULE_SENDUPDATEEVENTTOSELECTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x15227A50)
#define INCONTROL_INCONTROLINPUTMODULE_SENDVECTOREVENTTOSELECTEDOBJECT_OFFSET UNITYSDK_OFFSET(0x15227B40)
#define INCONTROL_INCONTROLINPUTMODULE_SETVECTORREPEATTIMER_OFFSET UNITYSDK_OFFSET(0x15229E80)
#define INCONTROL_INCONTROLINPUTMODULE_SET_CANCELACTION_OFFSET UNITYSDK_OFFSET(0x15226FA0)
#define INCONTROL_INCONTROLINPUTMODULE_SET_DEVICE_OFFSET UNITYSDK_OFFSET(0x1522A5A0)
#define INCONTROL_INCONTROLINPUTMODULE_SET_ISSHOWSDKUI_OFFSET UNITYSDK_OFFSET(0x1522A790)
#define INCONTROL_INCONTROLINPUTMODULE_SET_MOVEACTION_OFFSET UNITYSDK_OFFSET(0x15226FC0)
#define INCONTROL_INCONTROLINPUTMODULE_SET_SUBMITACTION_OFFSET UNITYSDK_OFFSET(0x15226F80)
#define INCONTROL_INCONTROLINPUTMODULE_SHOULDACTIVATEMODULE_OFFSET UNITYSDK_OFFSET(0x152271D0)
#define INCONTROL_INCONTROLINPUTMODULE_SIMULATEMOUSEEVENT_OFFSET UNITYSDK_OFFSET(0x15229C90)
#define INCONTROL_INCONTROLINPUTMODULE_SWITCHSUBMITANDCANCELBUTTON_OFFSET UNITYSDK_OFFSET(0x1522A630)
#define INCONTROL_INCONTROLINPUTMODULE_UPDATEINPUTSTATE_OFFSET UNITYSDK_OFFSET(0x15227400)
#define INCONTROL_INCONTROLINPUTMODULE_UPDATEMODULE_OFFSET UNITYSDK_OFFSET(0x152270D0)
#define INCONTROL_INCONTROLINPUTMODULE_UPDATE_OFFSET UNITYSDK_OFFSET(0x15229EC0)
#define INCONTROL_INCONTROLINPUTMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1522AC70)
#define INCONTROL_INCONTROLINPUTMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x15226FD0)

namespace InControl
{
	inline static constexpr unsigned int InControlInputModule_TypeDefinitionIndex = 37887;

	class InControlInputModule : public ::UnityEngine::EventSystems::PointerInputModule
	{
	public:
		static ::Unity::Profiling::ProfilerMarker* StaticGet_InControlInputModuleUpdateMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(InControlInputModule_TypeDefinitionIndex)->GetStaticField(0x5440);
		}
		::InControl::InControlInputModule_Button submitButton; // 0x58
		::InControl::InControlInputModule_Button cancelButton; // 0x5C
		::System::Single analogMoveThreshold; // 0x60
		::System::Single moveRepeatFirstDuration; // 0x64
		::System::Single moveRepeatDelayDuration; // 0x68
		::System::Boolean forceModuleActive; // 0x6C
		::System::Boolean allowMouseInput; // 0x6D
		::System::Boolean focusOnMouseHover; // 0x6E
		::System::Boolean allowTouchInput; // 0x6F
		::InControl::InControlInputModule_NavigationControlType navigationControlType; // 0x70
		::System::Collections::Generic::List_1<::InControl::InControlInputModule_IInputProcessor*>* _ExtraInputProcessors; // 0x78
		::System::Boolean AllMouseHover; // 0x80
		::InControl::InputDevice* inputDevice; // 0x88
		::UnityEngine::Vector3 thisMousePosition; // 0x90
		::UnityEngine::Vector3 lastMousePosition; // 0x9C
		::UnityEngine::Vector2 thisVectorState; // 0xA8
		::UnityEngine::Vector2 lastVectorState; // 0xB0
		::System::Boolean thisSubmitState; // 0xB8
		::System::Boolean lastSubmitState; // 0xB9
		::System::Boolean thisCancelState; // 0xBA
		::System::Boolean lastCancelState; // 0xBB
		::System::Boolean moveWasRepeated; // 0xBC
		::System::Single nextMoveRepeatTime; // 0xC0
		::InControl::TwoAxisInputControl* direction; // 0xC8
		::InControl::PlayerAction* _SubmitAction_k__BackingField; // 0xD0
		::InControl::PlayerAction* _CancelAction_k__BackingField; // 0xD8
		::InControl::PlayerTwoAxisAction* _MoveAction_k__BackingField; // 0xE0
		::UnityEngine::GameObject* lastSelectedGameObject; // 0xE8
		::System::Boolean _IsShowSDKUI; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE__CCTOR_OFFSET))();
		}

		::InControl::PlayerAction* get_SubmitAction()
		{
			return ((::InControl::PlayerAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_GET_SUBMITACTION_OFFSET))(this);
		}

		::System::Void set_SubmitAction(::InControl::PlayerAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_SET_SUBMITACTION_OFFSET))(this, a1);
		}

		::InControl::PlayerAction* get_CancelAction()
		{
			return ((::InControl::PlayerAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_GET_CANCELACTION_OFFSET))(this);
		}

		::System::Void set_CancelAction(::InControl::PlayerAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerAction*))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_SET_CANCELACTION_OFFSET))(this, a1);
		}

		::InControl::PlayerTwoAxisAction* get_MoveAction()
		{
			return ((::InControl::PlayerTwoAxisAction*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_GET_MOVEACTION_OFFSET))(this);
		}

		::System::Void set_MoveAction(::InControl::PlayerTwoAxisAction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::PlayerTwoAxisAction*))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_SET_MOVEACTION_OFFSET))(this, a1);
		}

		::System::Void UpdateModule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_UPDATEMODULE_OFFSET))(this);
		}

		::System::Boolean IsModuleSupported()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_ISMODULESUPPORTED_OFFSET))(this);
		}

		::System::Boolean ShouldActivateModule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_SHOULDACTIVATEMODULE_OFFSET))(this);
		}

		::System::Void ActivateModule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_ACTIVATEMODULE_OFFSET))(this);
		}

		::System::Void Process()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_PROCESS_OFFSET))(this);
		}

		::System::Void ForceReleaseDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_FORCERELEASEDRAG_OFFSET))(this);
		}

		::System::Void SimulateMouseEvent(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_SIMULATEMOUSEEVENT_OFFSET))(this, a1);
		}

		::System::Boolean ProcessTouchEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_PROCESSTOUCHEVENTS_OFFSET))(this);
		}

		::System::Boolean SendButtonEventToSelectedObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_SENDBUTTONEVENTTOSELECTEDOBJECT_OFFSET))(this);
		}

		::System::Boolean SendVectorEventToSelectedObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_SENDVECTOREVENTTOSELECTEDOBJECT_OFFSET))(this);
		}

		::System::Void ProcessMove(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_PROCESSMOVE_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateInputState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_UPDATEINPUTSTATE_OFFSET))(this);
		}

		::System::Void set_Device(::InControl::InputDevice* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDevice*))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_SET_DEVICE_OFFSET))(this, a1);
		}

		::InControl::InputDevice* get_Device()
		{
			return ((::InControl::InputDevice*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_GET_DEVICE_OFFSET))(this);
		}

		::InControl::InputControl* get_SubmitButton()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_GET_SUBMITBUTTON_OFFSET))(this);
		}

		::InControl::InputControl* get_CancelButton()
		{
			return ((::InControl::InputControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_GET_CANCELBUTTON_OFFSET))(this);
		}

		::System::Void SwitchSubmitAndCancelButton(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_SWITCHSUBMITANDCANCELBUTTON_OFFSET))(this, a1);
		}

		::System::Void AddInputProcessor(::InControl::InControlInputModule_IInputProcessor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InControlInputModule_IInputProcessor*))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_ADDINPUTPROCESSOR_OFFSET))(this, a1);
		}

		::System::Void RemoveInputProcessor(::InControl::InControlInputModule_IInputProcessor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InControlInputModule_IInputProcessor*))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_REMOVEINPUTPROCESSOR_OFFSET))(this, a1);
		}

		::System::Void SetVectorRepeatTimer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_SETVECTORREPEATTIMER_OFFSET))(this);
		}

		::System::Boolean get_VectorIsPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_GET_VECTORISPRESSED_OFFSET))(this);
		}

		::System::Boolean get_VectorIsReleased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_GET_VECTORISRELEASED_OFFSET))(this);
		}

		::System::Boolean get_VectorHasChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_GET_VECTORHASCHANGED_OFFSET))(this);
		}

		::System::Boolean get_VectorWasPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_GET_VECTORWASPRESSED_OFFSET))(this);
		}

		::System::Boolean get_SubmitWasPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_GET_SUBMITWASPRESSED_OFFSET))(this);
		}

		::System::Boolean get_SubmitWasReleased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_GET_SUBMITWASRELEASED_OFFSET))(this);
		}

		::System::Boolean get_CancelWasPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_GET_CANCELWASPRESSED_OFFSET))(this);
		}

		::System::Boolean get_MouseHasMoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_GET_MOUSEHASMOVED_OFFSET))(this);
		}

		static ::System::Boolean get_MouseButtonWasPressed()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_GET_MOUSEBUTTONWASPRESSED_OFFSET))();
		}

		::System::Void set_IsShowSDKUI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_SET_ISSHOWSDKUI_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShowSDKUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_GET_ISSHOWSDKUI_OFFSET))(this);
		}

		::System::Boolean SendUpdateEventToSelectedObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_SENDUPDATEEVENTTOSELECTEDOBJECT_OFFSET))(this);
		}

		::System::Void ProcessMouseEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_PROCESSMOUSEEVENT_OFFSET))(this);
		}

		::System::Void ProcessMouseEvent_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_PROCESSMOUSEEVENT_1_OFFSET))(this, a1);
		}

		::System::Void ProcessMousePress(::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_PROCESSMOUSEPRESS_OFFSET))(this, a1);
		}

		::System::Void ProcessTouchPress(::UnityEngine::EventSystems::PointerEventData* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + INCONTROL_INCONTROLINPUTMODULE_PROCESSTOUCHPRESS_OFFSET))(this, a1, a2, a3);
		}
	};
}

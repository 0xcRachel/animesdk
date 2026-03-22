#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_DoubleTapDetection.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_EvtType.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_GesturePriority.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_GestureType.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_SwipeDirection.h"
#include "unitysdk/HedgehogTeam/EasyTouch/EasyTouch_TwoFingerPickMethod.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/KeyCode.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/RaycastHit2D.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace HedgehogTeam::EasyTouch { class BaseFinger; }
namespace HedgehogTeam::EasyTouch { class ECamera; }
namespace HedgehogTeam::EasyTouch { class EasyTouchInput; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_Cancel2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_DoubleTap2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_DoubleTap; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_DoubleTapHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_Drag2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_DragEnd2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_DragEndHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_DragHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_DragStart2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_DragStartHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_EasyTouchIsReadyHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_LongTap2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_LongTapEnd2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_LongTapEndHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_LongTapHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_LongTapStart2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_LongTapStartHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_OverUIElementHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_PickedObject; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_PinchEndHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_PinchHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_PinchInHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_PinchOutHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_SimpleTap2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_SimpleTapHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_Swipe2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_SwipeEnd2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_SwipeEndHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_SwipeHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_SwipeStart2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_SwipeStartHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_TouchCancelHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_TouchDown2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_TouchDownHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_TouchStart2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_TouchStartHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_TouchUp2FingersHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_TouchUpHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_TwistEndHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_TwistHandler; }
namespace HedgehogTeam::EasyTouch { class EasyTouch_UIElementTouchUpHandler; }
namespace HedgehogTeam::EasyTouch { class Finger; }
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace HedgehogTeam::EasyTouch { class TwoFingerGesture; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::EventSystems { class EventSystem; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADDCAMERA_OFFSET UNITYSDK_OFFSET(0x11306F40)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADDUIIGNOREDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x11308430)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADDUIIGNORED_OFFSET UNITYSDK_OFFSET(0x11305A70)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_CANCEL2FINGERS_OFFSET UNITYSDK_OFFSET(0x112E78E0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_CANCEL_OFFSET UNITYSDK_OFFSET(0x112E77A0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DOUBLETAP2FINGERS_OFFSET UNITYSDK_OFFSET(0x112E90A0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DOUBLETAP_OFFSET UNITYSDK_OFFSET(0x112E7F20)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DRAG2FINGERS_OFFSET UNITYSDK_OFFSET(0x112E9E60)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DRAGEND2FINGERS_OFFSET UNITYSDK_OFFSET(0x112E9FA0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DRAGEND_OFFSET UNITYSDK_OFFSET(0x112E86A0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DRAGSTART2FINGERS_OFFSET UNITYSDK_OFFSET(0x112E9D20)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DRAGSTART_OFFSET UNITYSDK_OFFSET(0x112E8420)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DRAG_OFFSET UNITYSDK_OFFSET(0x112E8560)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_EASYTOUCHISREADY_OFFSET UNITYSDK_OFFSET(0x112EA4A0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_LONGTAP2FINGERS_OFFSET UNITYSDK_OFFSET(0x112E9320)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_LONGTAPEND2FINGERS_OFFSET UNITYSDK_OFFSET(0x112E9460)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_LONGTAPEND_OFFSET UNITYSDK_OFFSET(0x112E82E0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_LONGTAPSTART2FINGERS_OFFSET UNITYSDK_OFFSET(0x112E91E0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_LONGTAPSTART_OFFSET UNITYSDK_OFFSET(0x112E8060)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_LONGTAP_OFFSET UNITYSDK_OFFSET(0x112E81A0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_OVERUIELEMENT_OFFSET UNITYSDK_OFFSET(0x112EA5E0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_PINCHEND_OFFSET UNITYSDK_OFFSET(0x112E9BE0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_PINCHIN_OFFSET UNITYSDK_OFFSET(0x112E9960)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_PINCHOUT_OFFSET UNITYSDK_OFFSET(0x112E9AA0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_PINCH_OFFSET UNITYSDK_OFFSET(0x112E9820)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SIMPLETAP2FINGERS_OFFSET UNITYSDK_OFFSET(0x112E8F60)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SIMPLETAP_OFFSET UNITYSDK_OFFSET(0x112E7DE0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SWIPE2FINGERS_OFFSET UNITYSDK_OFFSET(0x112EA220)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SWIPEEND2FINGERS_OFFSET UNITYSDK_OFFSET(0x112EA360)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SWIPEEND_OFFSET UNITYSDK_OFFSET(0x112E8A60)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SWIPESTART2FINGERS_OFFSET UNITYSDK_OFFSET(0x112EA0E0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SWIPESTART_OFFSET UNITYSDK_OFFSET(0x112E87E0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SWIPE_OFFSET UNITYSDK_OFFSET(0x112E8920)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TOUCHDOWN2FINGERS_OFFSET UNITYSDK_OFFSET(0x112E8CE0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TOUCHDOWN_OFFSET UNITYSDK_OFFSET(0x112E7B60)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TOUCHSTART2FINGERS_OFFSET UNITYSDK_OFFSET(0x112E8BA0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TOUCHSTART_OFFSET UNITYSDK_OFFSET(0x112E7A20)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TOUCHUP2FINGERS_OFFSET UNITYSDK_OFFSET(0x112E8E20)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TOUCHUP_OFFSET UNITYSDK_OFFSET(0x112E7CA0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TWISTEND_OFFSET UNITYSDK_OFFSET(0x112E96E0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TWIST_OFFSET UNITYSDK_OFFSET(0x112E95A0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_UIELEMENTTOUCHUP_OFFSET UNITYSDK_OFFSET(0x112EA720)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_AWAKE_OFFSET UNITYSDK_OFFSET(0x112EAF00)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_CANHANDLETOUCH_OFFSET UNITYSDK_OFFSET(0x112F26C0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_CLEARALLGESTURE_OFFSET UNITYSDK_OFFSET(0x113058B0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_CREATEGESTURE2FINGER_OFFSET UNITYSDK_OFFSET(0x112EB830)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_CREATEGESTURE_OFFSET UNITYSDK_OFFSET(0x112EF820)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_CREATESTATEEND2FINGERS_OFFSET UNITYSDK_OFFSET(0x112F2DB0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_DETECTPINCH_OFFSET UNITYSDK_OFFSET(0x112F3640)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_DETECTWIST_OFFSET UNITYSDK_OFFSET(0x112F3DE0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_FINGERINTOLERANCE_OFFSET UNITYSDK_OFFSET(0x112F0910)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GET2DPICKABLELAYER_OFFSET UNITYSDK_OFFSET(0x11307510)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GET3DPICKABLELAYER_OFFSET UNITYSDK_OFFSET(0x11306DF0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETAUTOUPDATEPICKEDOBJECT_OFFSET UNITYSDK_OFFSET(0x11306CF0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETAUTOUPDATEUI_OFFSET UNITYSDK_OFFSET(0x113069F0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETCAMERA_OFFSET UNITYSDK_OFFSET(0x11307290)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETCURRENTPICKEDOBJECT_OFFSET UNITYSDK_OFFSET(0x11305E70)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETCURRENTPICKEDUIELEMENT_OFFSET UNITYSDK_OFFSET(0x11305CA0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETDOUBLETAPMETHOD_OFFSET UNITYSDK_OFFSET(0x11307AD0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETDOUBLETAPTIME_OFFSET UNITYSDK_OFFSET(0x113079D0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLE2DCOLLIDER_OFFSET UNITYSDK_OFFSET(0x11307410)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLE2FINGERSGESTURE_OFFSET UNITYSDK_OFFSET(0x11307CC0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLE2FINGERSSWIPE_OFFSET UNITYSDK_OFFSET(0x11307DC0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLEAUTOSELECT_OFFSET UNITYSDK_OFFSET(0x11306BF0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLED_OFFSET UNITYSDK_OFFSET(0x113066F0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLEPINCH_OFFSET UNITYSDK_OFFSET(0x11307FB0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLETWIST_OFFSET UNITYSDK_OFFSET(0x113081B0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLEUIDETECTION_OFFSET UNITYSDK_OFFSET(0x113067F0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETFINGER_OFFSET UNITYSDK_OFFSET(0x11305A10)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETFIRSTUIELEMENTFROMCACHE_OFFSET UNITYSDK_OFFSET(0x112F08E0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETFIRSTUIELEMENT_OFFSET UNITYSDK_OFFSET(0x11305B30)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETGAMEOBJECTAT_1_OFFSET UNITYSDK_OFFSET(0x11306000)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETGAMEOBJECTAT_OFFSET UNITYSDK_OFFSET(0x113054D0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETGESTUREPRIORITY_OFFSET UNITYSDK_OFFSET(0x113076E0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETLONGTAPTIME_OFFSET UNITYSDK_OFFSET(0x113078D0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETMINPINCHLENGTH_OFFSET UNITYSDK_OFFSET(0x113080B0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETMINTWISTANGLE_OFFSET UNITYSDK_OFFSET(0x113082B0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETNGUICOMPATIBILITY_OFFSET UNITYSDK_OFFSET(0x11306AF0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETPICKEDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x112F04B0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETSECONDEFINGERSIMULATION_OFFSET UNITYSDK_OFFSET(0x11308330)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETSTATIONARYTOLERANCE_OFFSET UNITYSDK_OFFSET(0x113077D0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETSWIPETOLERANCE_OFFSET UNITYSDK_OFFSET(0x11307BC0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETSWIPE_OFFSET UNITYSDK_OFFSET(0x112EF680)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETTOUCHCOUNT_OFFSET UNITYSDK_OFFSET(0x113063D0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETTWOFINGERPICKEDOBJECT_OFFSET UNITYSDK_OFFSET(0x112F2950)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETTWOFINGERPICKEDUIELEMENT_OFFSET UNITYSDK_OFFSET(0x112F2B00)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETTWOFINGERPICKMETHOD_OFFSET UNITYSDK_OFFSET(0x11307EC0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETTWOFINGER_OFFSET UNITYSDK_OFFSET(0x112F28D0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETUICOMPTABILITY_OFFSET UNITYSDK_OFFSET(0x113068F0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x112EAA40)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x112EA860)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_INIT_OFFSET UNITYSDK_OFFSET(0x112EAE60)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ISFINGEROVERUIELEMENT_OFFSET UNITYSDK_OFFSET(0x11305B70)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ISSCREENPOSITIONOVERUI_OFFSET UNITYSDK_OFFSET(0x112F06A0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ISTOUCHABLEUIELEMENT_OFFSET UNITYSDK_OFFSET(0x112F2860)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ISTOUCHOVERNGUI_OFFSET UNITYSDK_OFFSET(0x112F09C0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x112EF330)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x112EF340)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x112EB620)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ONEFINGER_OFFSET UNITYSDK_OFFSET(0x112EDF90)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ONENABLE_OFFSET UNITYSDK_OFFSET(0x112EAE50)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_RAISEEVENT_OFFSET UNITYSDK_OFFSET(0x112F1000)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVECAMERA_OFFSET UNITYSDK_OFFSET(0x11306FF0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVEUIIGNOREDGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x113084F0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVEUIIGNORED_OFFSET UNITYSDK_OFFSET(0x11305AD0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_CANCEL2FINGERS_OFFSET UNITYSDK_OFFSET(0x112E7980)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_CANCEL_OFFSET UNITYSDK_OFFSET(0x112E7840)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DOUBLETAP2FINGERS_OFFSET UNITYSDK_OFFSET(0x112E9140)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DOUBLETAP_OFFSET UNITYSDK_OFFSET(0x112E7FC0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DRAG2FINGERS_OFFSET UNITYSDK_OFFSET(0x112E9F00)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DRAGEND2FINGERS_OFFSET UNITYSDK_OFFSET(0x112EA040)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DRAGEND_OFFSET UNITYSDK_OFFSET(0x112E8740)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DRAGSTART2FINGERS_OFFSET UNITYSDK_OFFSET(0x112E9DC0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DRAGSTART_OFFSET UNITYSDK_OFFSET(0x112E84C0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DRAG_OFFSET UNITYSDK_OFFSET(0x112E8600)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_EASYTOUCHISREADY_OFFSET UNITYSDK_OFFSET(0x112EA540)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_LONGTAP2FINGERS_OFFSET UNITYSDK_OFFSET(0x112E93C0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_LONGTAPEND2FINGERS_OFFSET UNITYSDK_OFFSET(0x112E9500)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_LONGTAPEND_OFFSET UNITYSDK_OFFSET(0x112E8380)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_LONGTAPSTART2FINGERS_OFFSET UNITYSDK_OFFSET(0x112E9280)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_LONGTAPSTART_OFFSET UNITYSDK_OFFSET(0x112E8100)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_LONGTAP_OFFSET UNITYSDK_OFFSET(0x112E8240)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_OVERUIELEMENT_OFFSET UNITYSDK_OFFSET(0x112EA680)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_PINCHEND_OFFSET UNITYSDK_OFFSET(0x112E9C80)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_PINCHIN_OFFSET UNITYSDK_OFFSET(0x112E9A00)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_PINCHOUT_OFFSET UNITYSDK_OFFSET(0x112E9B40)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_PINCH_OFFSET UNITYSDK_OFFSET(0x112E98C0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SIMPLETAP2FINGERS_OFFSET UNITYSDK_OFFSET(0x112E9000)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SIMPLETAP_OFFSET UNITYSDK_OFFSET(0x112E7E80)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SWIPE2FINGERS_OFFSET UNITYSDK_OFFSET(0x112EA2C0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SWIPEEND2FINGERS_OFFSET UNITYSDK_OFFSET(0x112EA400)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SWIPEEND_OFFSET UNITYSDK_OFFSET(0x112E8B00)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SWIPESTART2FINGERS_OFFSET UNITYSDK_OFFSET(0x112EA180)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SWIPESTART_OFFSET UNITYSDK_OFFSET(0x112E8880)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SWIPE_OFFSET UNITYSDK_OFFSET(0x112E89C0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TOUCHDOWN2FINGERS_OFFSET UNITYSDK_OFFSET(0x112E8D80)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TOUCHDOWN_OFFSET UNITYSDK_OFFSET(0x112E7C00)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TOUCHSTART2FINGERS_OFFSET UNITYSDK_OFFSET(0x112E8C40)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TOUCHSTART_OFFSET UNITYSDK_OFFSET(0x112E7AC0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TOUCHUP2FINGERS_OFFSET UNITYSDK_OFFSET(0x112E8EC0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TOUCHUP_OFFSET UNITYSDK_OFFSET(0x112E7D40)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TWISTEND_OFFSET UNITYSDK_OFFSET(0x112E9780)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TWIST_OFFSET UNITYSDK_OFFSET(0x112E9640)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_UIELEMENTTOUCHUP_OFFSET UNITYSDK_OFFSET(0x112EA7C0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_RESETTOUCHES_OFFSET UNITYSDK_OFFSET(0x112EFBD0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_RESETTOUCH_OFFSET UNITYSDK_OFFSET(0x11306460)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_RESET_OFFSET UNITYSDK_OFFSET(0x113085B0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SET2DPICKABLELAYER_OFFSET UNITYSDK_OFFSET(0x11307490)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SET3DPICKABLELAYER_OFFSET UNITYSDK_OFFSET(0x11306D70)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETAUTOUPDATEPICKEDOBJECT_OFFSET UNITYSDK_OFFSET(0x11306C70)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETAUTOUPDATEUI_OFFSET UNITYSDK_OFFSET(0x11306970)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETDOUBLETAPMETHOD_OFFSET UNITYSDK_OFFSET(0x11307A50)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETDOUBLETAPTIME_OFFSET UNITYSDK_OFFSET(0x11307950)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLE2DCOLLIDER_OFFSET UNITYSDK_OFFSET(0x11307390)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLE2FINGERSGESTURE_OFFSET UNITYSDK_OFFSET(0x11307C40)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLE2FINGERSSWIPE_OFFSET UNITYSDK_OFFSET(0x11307D40)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLEAUTOSELECT_OFFSET UNITYSDK_OFFSET(0x11306B70)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLED_OFFSET UNITYSDK_OFFSET(0x113065F0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLEPINCH_OFFSET UNITYSDK_OFFSET(0x11307F30)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLETWIST_OFFSET UNITYSDK_OFFSET(0x11308130)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLEUIDETECTION_OFFSET UNITYSDK_OFFSET(0x11306770)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETGESTUREPRIORITY_OFFSET UNITYSDK_OFFSET(0x11307660)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETLONGTAPTIME_OFFSET UNITYSDK_OFFSET(0x11307850)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETMINPINCHLENGTH_OFFSET UNITYSDK_OFFSET(0x11308030)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETMINTWISTANGLE_OFFSET UNITYSDK_OFFSET(0x11308230)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETNGUICOMPATIBILITY_OFFSET UNITYSDK_OFFSET(0x11306A70)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETSECONDFINGERSIMULATION_OFFSET UNITYSDK_OFFSET(0x113083B0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETSTATIONARYTOLERANCE_OFFSET UNITYSDK_OFFSET(0x11307750)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETSWIPETOLERANCE_OFFSET UNITYSDK_OFFSET(0x11307B40)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETTWOFINGERPICKMETHOD_OFFSET UNITYSDK_OFFSET(0x11307E40)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETUICOMPATIBILY_OFFSET UNITYSDK_OFFSET(0x11306870)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SHOULDFIREEVENT_OFFSET UNITYSDK_OFFSET(0x112F0CF0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SINGLEORDOUBLE2FINGERS_OFFSET UNITYSDK_OFFSET(0x112F40F0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SINGLEORDOUBLE_OFFSET UNITYSDK_OFFSET(0x112F0960)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_START_OFFSET UNITYSDK_OFFSET(0x112EAFA0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_TRYGETGESTURE_OFFSET UNITYSDK_OFFSET(0x112F0DA0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_TWOFINGER_OFFSET UNITYSDK_OFFSET(0x112EC430)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_UPDATETOUCHES_OFFSET UNITYSDK_OFFSET(0x112EBDC0)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_UPDATE_OFFSET UNITYSDK_OFFSET(0x112EB630)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH__CCTOR_OFFSET UNITYSDK_OFFSET(0x11308660)
#define HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH__CTOR_OFFSET UNITYSDK_OFFSET(0x112EAA80)

namespace HedgehogTeam::EasyTouch
{
	inline static constexpr unsigned int EasyTouch_TypeDefinitionIndex = 30427;

	class EasyTouch : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::HedgehogTeam::EasyTouch::EasyTouch_UIElementTouchUpHandler** StaticGet_On_UIElementTouchUp()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_UIElementTouchUpHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F0E0);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_LongTapStartHandler** StaticGet_On_LongTapStart()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_LongTapStartHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F0E8);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_Cancel2FingersHandler** StaticGet_On_Cancel2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_Cancel2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F0F0);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_LongTapHandler** StaticGet_On_LongTap()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_LongTapHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F0F8);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_TouchStartHandler** StaticGet_On_TouchStart()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_TouchStartHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F100);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_EasyTouchIsReadyHandler** StaticGet_On_EasyTouchIsReady()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_EasyTouchIsReadyHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F108);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_DoubleTap2FingersHandler** StaticGet_On_DoubleTap2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_DoubleTap2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F110);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_PinchOutHandler** StaticGet_On_PinchOut()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_PinchOutHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F118);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_PinchHandler** StaticGet_On_Pinch()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_PinchHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F120);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_DoubleTapHandler** StaticGet_On_DoubleTap()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_DoubleTapHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F128);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_TouchDown2FingersHandler** StaticGet_On_TouchDown2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_TouchDown2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F130);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_PinchEndHandler** StaticGet_On_PinchEnd()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_PinchEndHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F138);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_SimpleTap2FingersHandler** StaticGet_On_SimpleTap2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_SimpleTap2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F140);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_LongTapStart2FingersHandler** StaticGet_On_LongTapStart2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_LongTapStart2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F148);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_SwipeEnd2FingersHandler** StaticGet_On_SwipeEnd2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_SwipeEnd2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F150);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_SimpleTapHandler** StaticGet_On_SimpleTap()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_SimpleTapHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F158);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_DragEnd2FingersHandler** StaticGet_On_DragEnd2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_DragEnd2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F160);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_Swipe2FingersHandler** StaticGet_On_Swipe2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_Swipe2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F168);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_TouchStart2FingersHandler** StaticGet_On_TouchStart2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_TouchStart2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F170);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_TouchDownHandler** StaticGet_On_TouchDown()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_TouchDownHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F178);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_SwipeHandler** StaticGet_On_Swipe()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_SwipeHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F180);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_DragHandler** StaticGet_On_Drag()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_DragHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F188);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_TouchCancelHandler** StaticGet_On_Cancel()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_TouchCancelHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F190);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_TouchUpHandler** StaticGet_On_TouchUp()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_TouchUpHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F198);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch** StaticGet__instance()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F1A0);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_TwistEndHandler** StaticGet_On_TwistEnd()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_TwistEndHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F1A8);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_PinchInHandler** StaticGet_On_PinchIn()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_PinchInHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F1B0);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_LongTapEndHandler** StaticGet_On_LongTapEnd()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_LongTapEndHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F1B8);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_SwipeStartHandler** StaticGet_On_SwipeStart()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_SwipeStartHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F1C0);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_TwistHandler** StaticGet_On_Twist()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_TwistHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F1C8);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_DragStart2FingersHandler** StaticGet_On_DragStart2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_DragStart2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F1D0);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_SwipeStart2FingersHandler** StaticGet_On_SwipeStart2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_SwipeStart2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F1D8);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_DragEndHandler** StaticGet_On_DragEnd()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_DragEndHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F1E0);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_LongTap2FingersHandler** StaticGet_On_LongTap2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_LongTap2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F1E8);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_OverUIElementHandler** StaticGet_On_OverUIElement()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_OverUIElementHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F1F0);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_DragStartHandler** StaticGet_On_DragStart()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_DragStartHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F1F8);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_SwipeEndHandler** StaticGet_On_SwipeEnd()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_SwipeEndHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F200);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_TouchUp2FingersHandler** StaticGet_On_TouchUp2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_TouchUp2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F208);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_Drag2FingersHandler** StaticGet_On_Drag2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_Drag2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F210);
		}
		static ::HedgehogTeam::EasyTouch::EasyTouch_LongTapEnd2FingersHandler** StaticGet_On_LongTapEnd2Fingers()
		{
			return (::HedgehogTeam::EasyTouch::EasyTouch_LongTapEnd2FingersHandler**)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0x2F218);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_EasyTouchUpdateMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(EasyTouch_TypeDefinitionIndex)->GetStaticField(0xB0F0);
		}
		::HedgehogTeam::EasyTouch::Gesture* _currentGesture; // 0x18
		::System::Collections::Generic::List_1<::HedgehogTeam::EasyTouch::Gesture*>* _currentGestures; // 0x20
		::System::Collections::Generic::Dictionary_2<::HedgehogTeam::EasyTouch::EasyTouch_EvtType, ::HedgehogTeam::EasyTouch::Gesture*>* _EvtGesturesDic; // 0x28
		::Il2CppArray<::UnityEngine::RaycastHit2D>* _Hit2D; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::Component*>* _Components; // 0x38
		::System::Boolean enable; // 0x40
		::System::Boolean enableRemote; // 0x41
		::HedgehogTeam::EasyTouch::EasyTouch_GesturePriority gesturePriority; // 0x44
		::System::Single StationaryTolerance; // 0x48
		::System::Single longTapTime; // 0x4C
		::System::Single swipeTolerance; // 0x50
		::System::Single minPinchLength; // 0x54
		::System::Single minTwistAngle; // 0x58
		::HedgehogTeam::EasyTouch::EasyTouch_DoubleTapDetection doubleTapDetection; // 0x5C
		::System::Single doubleTapTime; // 0x60
		::System::Boolean alwaysSendSwipe; // 0x64
		::System::Boolean enable2FingersGesture; // 0x65
		::System::Boolean enableTwist; // 0x66
		::System::Boolean enablePinch; // 0x67
		::System::Boolean enable2FingersSwipe; // 0x68
		::HedgehogTeam::EasyTouch::EasyTouch_TwoFingerPickMethod twoFingerPickMethod; // 0x6C
		::System::Collections::Generic::List_1<::HedgehogTeam::EasyTouch::ECamera*>* touchCameras; // 0x70
		::System::Boolean autoSelect; // 0x78
		::UnityEngine::LayerMask pickableLayers3D; // 0x7C
		::System::Boolean enable2D; // 0x80
		::UnityEngine::LayerMask pickableLayers2D; // 0x84
		::System::Boolean autoUpdatePickedObject; // 0x88
		::System::Boolean allowUIDetection; // 0x89
		::System::Boolean enableUIMode; // 0x8A
		::System::Boolean autoUpdatePickedUI; // 0x8B
		::System::Boolean enabledNGuiMode; // 0x8C
		::UnityEngine::LayerMask nGUILayers; // 0x90
		::System::Collections::Generic::List_1<::UnityEngine::Camera*>* nGUICameras; // 0x98
		::System::Boolean enableSimulation; // 0xA0
		::UnityEngine::KeyCode twistKey; // 0xA4
		::UnityEngine::KeyCode swipeKey; // 0xA8
		::System::Boolean showGuiInspector; // 0xAC
		::System::Boolean showSelectInspector; // 0xAD
		::System::Boolean showGestureInspector; // 0xAE
		::System::Boolean showTwoFingerInspector; // 0xAF
		::System::Boolean showSecondFingerInspector; // 0xB0
		::System::Single dpi; // 0xB4
		::HedgehogTeam::EasyTouch::EasyTouchInput* input; // 0xB8
		::Il2CppArray<::HedgehogTeam::EasyTouch::Finger*>* fingers; // 0xC0
		::UnityEngine::Texture* secondFingerTexture; // 0xC8
		::HedgehogTeam::EasyTouch::TwoFingerGesture* twoFinger; // 0xD0
		::System::Int32 oldTouchCount; // 0xD8
		::Il2CppArray<::HedgehogTeam::EasyTouch::EasyTouch_DoubleTap*>* singleDoubleTap; // 0xE0
		::Il2CppArray<::HedgehogTeam::EasyTouch::Finger*>* tmpArray; // 0xE8
		::HedgehogTeam::EasyTouch::EasyTouch_PickedObject* pickedObject; // 0xF0
		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* uiRaycastResultCache; // 0xF8
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* uiIgnoredList; // 0x100
		::UnityEngine::EventSystems::PointerEventData* uiPointerEventData; // 0x108
		::UnityEngine::EventSystems::EventSystem* uiEventSystem; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH__CCTOR_OFFSET))();
		}

		static ::System::Void add_On_Cancel(::HedgehogTeam::EasyTouch::EasyTouch_TouchCancelHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TouchCancelHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_CANCEL_OFFSET))(value);
		}

		static ::System::Void remove_On_Cancel(::HedgehogTeam::EasyTouch::EasyTouch_TouchCancelHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TouchCancelHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_CANCEL_OFFSET))(value);
		}

		static ::System::Void add_On_Cancel2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_Cancel2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_Cancel2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_CANCEL2FINGERS_OFFSET))(value);
		}

		static ::System::Void remove_On_Cancel2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_Cancel2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_Cancel2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_CANCEL2FINGERS_OFFSET))(value);
		}

		static ::System::Void add_On_TouchStart(::HedgehogTeam::EasyTouch::EasyTouch_TouchStartHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TouchStartHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TOUCHSTART_OFFSET))(value);
		}

		static ::System::Void remove_On_TouchStart(::HedgehogTeam::EasyTouch::EasyTouch_TouchStartHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TouchStartHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TOUCHSTART_OFFSET))(value);
		}

		static ::System::Void add_On_TouchDown(::HedgehogTeam::EasyTouch::EasyTouch_TouchDownHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TouchDownHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TOUCHDOWN_OFFSET))(value);
		}

		static ::System::Void remove_On_TouchDown(::HedgehogTeam::EasyTouch::EasyTouch_TouchDownHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TouchDownHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TOUCHDOWN_OFFSET))(value);
		}

		static ::System::Void add_On_TouchUp(::HedgehogTeam::EasyTouch::EasyTouch_TouchUpHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TouchUpHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TOUCHUP_OFFSET))(value);
		}

		static ::System::Void remove_On_TouchUp(::HedgehogTeam::EasyTouch::EasyTouch_TouchUpHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TouchUpHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TOUCHUP_OFFSET))(value);
		}

		static ::System::Void add_On_SimpleTap(::HedgehogTeam::EasyTouch::EasyTouch_SimpleTapHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_SimpleTapHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SIMPLETAP_OFFSET))(value);
		}

		static ::System::Void remove_On_SimpleTap(::HedgehogTeam::EasyTouch::EasyTouch_SimpleTapHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_SimpleTapHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SIMPLETAP_OFFSET))(value);
		}

		static ::System::Void add_On_DoubleTap(::HedgehogTeam::EasyTouch::EasyTouch_DoubleTapHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DoubleTapHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DOUBLETAP_OFFSET))(value);
		}

		static ::System::Void remove_On_DoubleTap(::HedgehogTeam::EasyTouch::EasyTouch_DoubleTapHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DoubleTapHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DOUBLETAP_OFFSET))(value);
		}

		static ::System::Void add_On_LongTapStart(::HedgehogTeam::EasyTouch::EasyTouch_LongTapStartHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_LongTapStartHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_LONGTAPSTART_OFFSET))(value);
		}

		static ::System::Void remove_On_LongTapStart(::HedgehogTeam::EasyTouch::EasyTouch_LongTapStartHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_LongTapStartHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_LONGTAPSTART_OFFSET))(value);
		}

		static ::System::Void add_On_LongTap(::HedgehogTeam::EasyTouch::EasyTouch_LongTapHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_LongTapHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_LONGTAP_OFFSET))(value);
		}

		static ::System::Void remove_On_LongTap(::HedgehogTeam::EasyTouch::EasyTouch_LongTapHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_LongTapHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_LONGTAP_OFFSET))(value);
		}

		static ::System::Void add_On_LongTapEnd(::HedgehogTeam::EasyTouch::EasyTouch_LongTapEndHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_LongTapEndHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_LONGTAPEND_OFFSET))(value);
		}

		static ::System::Void remove_On_LongTapEnd(::HedgehogTeam::EasyTouch::EasyTouch_LongTapEndHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_LongTapEndHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_LONGTAPEND_OFFSET))(value);
		}

		static ::System::Void add_On_DragStart(::HedgehogTeam::EasyTouch::EasyTouch_DragStartHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DragStartHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DRAGSTART_OFFSET))(value);
		}

		static ::System::Void remove_On_DragStart(::HedgehogTeam::EasyTouch::EasyTouch_DragStartHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DragStartHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DRAGSTART_OFFSET))(value);
		}

		static ::System::Void add_On_Drag(::HedgehogTeam::EasyTouch::EasyTouch_DragHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DragHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DRAG_OFFSET))(value);
		}

		static ::System::Void remove_On_Drag(::HedgehogTeam::EasyTouch::EasyTouch_DragHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DragHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DRAG_OFFSET))(value);
		}

		static ::System::Void add_On_DragEnd(::HedgehogTeam::EasyTouch::EasyTouch_DragEndHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DragEndHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DRAGEND_OFFSET))(value);
		}

		static ::System::Void remove_On_DragEnd(::HedgehogTeam::EasyTouch::EasyTouch_DragEndHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DragEndHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DRAGEND_OFFSET))(value);
		}

		static ::System::Void add_On_SwipeStart(::HedgehogTeam::EasyTouch::EasyTouch_SwipeStartHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_SwipeStartHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SWIPESTART_OFFSET))(value);
		}

		static ::System::Void remove_On_SwipeStart(::HedgehogTeam::EasyTouch::EasyTouch_SwipeStartHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_SwipeStartHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SWIPESTART_OFFSET))(value);
		}

		static ::System::Void add_On_Swipe(::HedgehogTeam::EasyTouch::EasyTouch_SwipeHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_SwipeHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SWIPE_OFFSET))(value);
		}

		static ::System::Void remove_On_Swipe(::HedgehogTeam::EasyTouch::EasyTouch_SwipeHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_SwipeHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SWIPE_OFFSET))(value);
		}

		static ::System::Void add_On_SwipeEnd(::HedgehogTeam::EasyTouch::EasyTouch_SwipeEndHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_SwipeEndHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SWIPEEND_OFFSET))(value);
		}

		static ::System::Void remove_On_SwipeEnd(::HedgehogTeam::EasyTouch::EasyTouch_SwipeEndHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_SwipeEndHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SWIPEEND_OFFSET))(value);
		}

		static ::System::Void add_On_TouchStart2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_TouchStart2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TouchStart2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TOUCHSTART2FINGERS_OFFSET))(value);
		}

		static ::System::Void remove_On_TouchStart2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_TouchStart2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TouchStart2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TOUCHSTART2FINGERS_OFFSET))(value);
		}

		static ::System::Void add_On_TouchDown2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_TouchDown2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TouchDown2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TOUCHDOWN2FINGERS_OFFSET))(value);
		}

		static ::System::Void remove_On_TouchDown2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_TouchDown2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TouchDown2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TOUCHDOWN2FINGERS_OFFSET))(value);
		}

		static ::System::Void add_On_TouchUp2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_TouchUp2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TouchUp2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TOUCHUP2FINGERS_OFFSET))(value);
		}

		static ::System::Void remove_On_TouchUp2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_TouchUp2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TouchUp2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TOUCHUP2FINGERS_OFFSET))(value);
		}

		static ::System::Void add_On_SimpleTap2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_SimpleTap2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_SimpleTap2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SIMPLETAP2FINGERS_OFFSET))(value);
		}

		static ::System::Void remove_On_SimpleTap2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_SimpleTap2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_SimpleTap2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SIMPLETAP2FINGERS_OFFSET))(value);
		}

		static ::System::Void add_On_DoubleTap2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_DoubleTap2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DoubleTap2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DOUBLETAP2FINGERS_OFFSET))(value);
		}

		static ::System::Void remove_On_DoubleTap2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_DoubleTap2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DoubleTap2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DOUBLETAP2FINGERS_OFFSET))(value);
		}

		static ::System::Void add_On_LongTapStart2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_LongTapStart2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_LongTapStart2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_LONGTAPSTART2FINGERS_OFFSET))(value);
		}

		static ::System::Void remove_On_LongTapStart2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_LongTapStart2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_LongTapStart2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_LONGTAPSTART2FINGERS_OFFSET))(value);
		}

		static ::System::Void add_On_LongTap2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_LongTap2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_LongTap2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_LONGTAP2FINGERS_OFFSET))(value);
		}

		static ::System::Void remove_On_LongTap2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_LongTap2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_LongTap2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_LONGTAP2FINGERS_OFFSET))(value);
		}

		static ::System::Void add_On_LongTapEnd2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_LongTapEnd2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_LongTapEnd2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_LONGTAPEND2FINGERS_OFFSET))(value);
		}

		static ::System::Void remove_On_LongTapEnd2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_LongTapEnd2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_LongTapEnd2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_LONGTAPEND2FINGERS_OFFSET))(value);
		}

		static ::System::Void add_On_Twist(::HedgehogTeam::EasyTouch::EasyTouch_TwistHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TwistHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TWIST_OFFSET))(value);
		}

		static ::System::Void remove_On_Twist(::HedgehogTeam::EasyTouch::EasyTouch_TwistHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TwistHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TWIST_OFFSET))(value);
		}

		static ::System::Void add_On_TwistEnd(::HedgehogTeam::EasyTouch::EasyTouch_TwistEndHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TwistEndHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_TWISTEND_OFFSET))(value);
		}

		static ::System::Void remove_On_TwistEnd(::HedgehogTeam::EasyTouch::EasyTouch_TwistEndHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TwistEndHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_TWISTEND_OFFSET))(value);
		}

		static ::System::Void add_On_Pinch(::HedgehogTeam::EasyTouch::EasyTouch_PinchHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_PinchHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_PINCH_OFFSET))(value);
		}

		static ::System::Void remove_On_Pinch(::HedgehogTeam::EasyTouch::EasyTouch_PinchHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_PinchHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_PINCH_OFFSET))(value);
		}

		static ::System::Void add_On_PinchIn(::HedgehogTeam::EasyTouch::EasyTouch_PinchInHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_PinchInHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_PINCHIN_OFFSET))(value);
		}

		static ::System::Void remove_On_PinchIn(::HedgehogTeam::EasyTouch::EasyTouch_PinchInHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_PinchInHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_PINCHIN_OFFSET))(value);
		}

		static ::System::Void add_On_PinchOut(::HedgehogTeam::EasyTouch::EasyTouch_PinchOutHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_PinchOutHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_PINCHOUT_OFFSET))(value);
		}

		static ::System::Void remove_On_PinchOut(::HedgehogTeam::EasyTouch::EasyTouch_PinchOutHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_PinchOutHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_PINCHOUT_OFFSET))(value);
		}

		static ::System::Void add_On_PinchEnd(::HedgehogTeam::EasyTouch::EasyTouch_PinchEndHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_PinchEndHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_PINCHEND_OFFSET))(value);
		}

		static ::System::Void remove_On_PinchEnd(::HedgehogTeam::EasyTouch::EasyTouch_PinchEndHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_PinchEndHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_PINCHEND_OFFSET))(value);
		}

		static ::System::Void add_On_DragStart2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_DragStart2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DragStart2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DRAGSTART2FINGERS_OFFSET))(value);
		}

		static ::System::Void remove_On_DragStart2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_DragStart2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DragStart2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DRAGSTART2FINGERS_OFFSET))(value);
		}

		static ::System::Void add_On_Drag2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_Drag2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_Drag2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DRAG2FINGERS_OFFSET))(value);
		}

		static ::System::Void remove_On_Drag2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_Drag2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_Drag2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DRAG2FINGERS_OFFSET))(value);
		}

		static ::System::Void add_On_DragEnd2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_DragEnd2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DragEnd2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_DRAGEND2FINGERS_OFFSET))(value);
		}

		static ::System::Void remove_On_DragEnd2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_DragEnd2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DragEnd2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_DRAGEND2FINGERS_OFFSET))(value);
		}

		static ::System::Void add_On_SwipeStart2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_SwipeStart2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_SwipeStart2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SWIPESTART2FINGERS_OFFSET))(value);
		}

		static ::System::Void remove_On_SwipeStart2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_SwipeStart2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_SwipeStart2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SWIPESTART2FINGERS_OFFSET))(value);
		}

		static ::System::Void add_On_Swipe2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_Swipe2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_Swipe2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SWIPE2FINGERS_OFFSET))(value);
		}

		static ::System::Void remove_On_Swipe2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_Swipe2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_Swipe2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SWIPE2FINGERS_OFFSET))(value);
		}

		static ::System::Void add_On_SwipeEnd2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_SwipeEnd2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_SwipeEnd2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_SWIPEEND2FINGERS_OFFSET))(value);
		}

		static ::System::Void remove_On_SwipeEnd2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_SwipeEnd2FingersHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_SwipeEnd2FingersHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_SWIPEEND2FINGERS_OFFSET))(value);
		}

		static ::System::Void add_On_EasyTouchIsReady(::HedgehogTeam::EasyTouch::EasyTouch_EasyTouchIsReadyHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_EasyTouchIsReadyHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_EASYTOUCHISREADY_OFFSET))(value);
		}

		static ::System::Void remove_On_EasyTouchIsReady(::HedgehogTeam::EasyTouch::EasyTouch_EasyTouchIsReadyHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_EasyTouchIsReadyHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_EASYTOUCHISREADY_OFFSET))(value);
		}

		static ::System::Void add_On_OverUIElement(::HedgehogTeam::EasyTouch::EasyTouch_OverUIElementHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_OverUIElementHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_OVERUIELEMENT_OFFSET))(value);
		}

		static ::System::Void remove_On_OverUIElement(::HedgehogTeam::EasyTouch::EasyTouch_OverUIElementHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_OverUIElementHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_OVERUIELEMENT_OFFSET))(value);
		}

		static ::System::Void add_On_UIElementTouchUp(::HedgehogTeam::EasyTouch::EasyTouch_UIElementTouchUpHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_UIElementTouchUpHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADD_ON_UIELEMENTTOUCHUP_OFFSET))(value);
		}

		static ::System::Void remove_On_UIElementTouchUp(::HedgehogTeam::EasyTouch::EasyTouch_UIElementTouchUpHandler* value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_UIElementTouchUpHandler*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVE_ON_UIELEMENTTOUCHUP_OFFSET))(value);
		}

		static ::HedgehogTeam::EasyTouch::EasyTouch* get_instance()
		{
			return ((::HedgehogTeam::EasyTouch::EasyTouch*(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GET_INSTANCE_OFFSET))();
		}

		static ::HedgehogTeam::EasyTouch::Gesture* get_current()
		{
			return ((::HedgehogTeam::EasyTouch::Gesture*(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GET_CURRENT_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ONENABLE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_START_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_INIT_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ONDRAWGIZMOS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnApplicationFocus(::System::Boolean hasFocus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ONAPPLICATIONFOCUS_OFFSET))(this, hasFocus);
		}

		::System::Void UpdateTouches(::System::Boolean realTouch, ::System::Int32 touchCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_UPDATETOUCHES_OFFSET))(this, realTouch, touchCount);
		}

		::System::Void ResetTouches()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_RESETTOUCHES_OFFSET))(this);
		}

		::System::Void OneFinger(::System::Int32 fingerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ONEFINGER_OFFSET))(this, fingerIndex);
		}

		::System::Collections::IEnumerator* SingleOrDouble(::System::Int32 fingerIndex)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SINGLEORDOUBLE_OFFSET))(this, fingerIndex);
		}

		::System::Void CreateGesture(::System::Int32 touchIndex, ::HedgehogTeam::EasyTouch::EasyTouch_EvtType message, ::HedgehogTeam::EasyTouch::Finger* finger, ::HedgehogTeam::EasyTouch::EasyTouch_SwipeDirection swipe, ::System::Single swipeLength, ::UnityEngine::Vector2 swipeVector)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::HedgehogTeam::EasyTouch::EasyTouch_EvtType, ::HedgehogTeam::EasyTouch::Finger*, ::HedgehogTeam::EasyTouch::EasyTouch_SwipeDirection, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_CREATEGESTURE_OFFSET))(this, touchIndex, message, finger, swipe, swipeLength, swipeVector);
		}

		::System::Boolean CanHandleTouch(::UnityEngine::GameObject* go)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_CANHANDLETOUCH_OFFSET))(this, go);
		}

		::System::Boolean IsTouchableUIElement(::UnityEngine::Component* component)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Component*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ISTOUCHABLEUIELEMENT_OFFSET))(this, component);
		}

		::System::Boolean ShouldFireEvent(::HedgehogTeam::EasyTouch::BaseFinger* finger)
		{
			return ((::System::Boolean(*)(::PVOID, ::HedgehogTeam::EasyTouch::BaseFinger*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SHOULDFIREEVENT_OFFSET))(this, finger);
		}

		::HedgehogTeam::EasyTouch::Gesture* TryGetGesture(::HedgehogTeam::EasyTouch::EasyTouch_EvtType message, ::HedgehogTeam::EasyTouch::Finger* finger)
		{
			return ((::HedgehogTeam::EasyTouch::Gesture*(*)(::PVOID, ::HedgehogTeam::EasyTouch::EasyTouch_EvtType, ::HedgehogTeam::EasyTouch::Finger*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_TRYGETGESTURE_OFFSET))(this, message, finger);
		}

		::System::Void TwoFinger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_TWOFINGER_OFFSET))(this);
		}

		::System::Void DetectPinch(::System::Single currentDelta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_DETECTPINCH_OFFSET))(this, currentDelta);
		}

		::System::Void DetecTwist(::UnityEngine::Vector2 previousDistance, ::UnityEngine::Vector2 currentDistance, ::System::Single currentDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_DETECTWIST_OFFSET))(this, previousDistance, currentDistance, currentDelta);
		}

		::System::Void CreateStateEnd2Fingers(::HedgehogTeam::EasyTouch::EasyTouch_GestureType gesture, ::UnityEngine::Vector2 startPosition, ::UnityEngine::Vector2 position, ::UnityEngine::Vector2 deltaPosition, ::System::Single time, ::System::Boolean realEnd, ::System::Single fingerDistance, ::System::Single twist, ::System::Single pinch)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::EasyTouch_GestureType, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Boolean, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_CREATESTATEEND2FINGERS_OFFSET))(this, gesture, startPosition, position, deltaPosition, time, realEnd, fingerDistance, twist, pinch);
		}

		::System::Collections::IEnumerator* SingleOrDouble2Fingers()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SINGLEORDOUBLE2FINGERS_OFFSET))(this);
		}

		::System::Void CreateGesture2Finger(::HedgehogTeam::EasyTouch::EasyTouch_EvtType message, ::UnityEngine::Vector2 startPosition, ::UnityEngine::Vector2 position, ::UnityEngine::Vector2 deltaPosition, ::System::Single actionTime, ::HedgehogTeam::EasyTouch::EasyTouch_SwipeDirection swipe, ::System::Single swipeLength, ::UnityEngine::Vector2 swipeVector, ::System::Single twist, ::System::Single pinch, ::System::Single twoDistance)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::EasyTouch_EvtType, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::HedgehogTeam::EasyTouch::EasyTouch_SwipeDirection, ::System::Single, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_CREATEGESTURE2FINGER_OFFSET))(this, message, startPosition, position, deltaPosition, actionTime, swipe, swipeLength, swipeVector, twist, pinch, twoDistance);
		}

		::System::Int32 GetTwoFinger(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETTWOFINGER_OFFSET))(this, index);
		}

		::System::Boolean GetTwoFingerPickedObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETTWOFINGERPICKEDOBJECT_OFFSET))(this);
		}

		::System::Boolean GetTwoFingerPickedUIElement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETTWOFINGERPICKEDUIELEMENT_OFFSET))(this);
		}

		::System::Void RaiseEvent(::HedgehogTeam::EasyTouch::EasyTouch_EvtType evnt, ::HedgehogTeam::EasyTouch::Gesture* gesture)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::EasyTouch_EvtType, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_RAISEEVENT_OFFSET))(this, evnt, gesture);
		}

		::System::Boolean GetPickedGameObject(::HedgehogTeam::EasyTouch::Finger* finger, ::System::Boolean isTowFinger)
		{
			return ((::System::Boolean(*)(::PVOID, ::HedgehogTeam::EasyTouch::Finger*, ::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETPICKEDGAMEOBJECT_OFFSET))(this, finger, isTowFinger);
		}

		::System::Boolean GetGameObjectAt(::UnityEngine::Vector2 position, ::UnityEngine::Camera* cam, ::System::Boolean isGuiCam)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETGAMEOBJECTAT_OFFSET))(this, position, cam, isGuiCam);
		}

		::HedgehogTeam::EasyTouch::EasyTouch_SwipeDirection GetSwipe(::UnityEngine::Vector2 start, ::UnityEngine::Vector2 end)
		{
			return ((::HedgehogTeam::EasyTouch::EasyTouch_SwipeDirection(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETSWIPE_OFFSET))(this, start, end);
		}

		::System::Boolean FingerInTolerance(::HedgehogTeam::EasyTouch::Finger* finger)
		{
			return ((::System::Boolean(*)(::PVOID, ::HedgehogTeam::EasyTouch::Finger*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_FINGERINTOLERANCE_OFFSET))(this, finger);
		}

		::System::Void ClearAllGesture()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_CLEARALLGESTURE_OFFSET))(this);
		}

		::System::Boolean IsTouchOverNGui(::UnityEngine::Vector2 position, ::System::Boolean isTwoFingers)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ISTOUCHOVERNGUI_OFFSET))(this, position, isTwoFingers);
		}

		::HedgehogTeam::EasyTouch::Finger* GetFinger(::System::Int32 finderId)
		{
			return ((::HedgehogTeam::EasyTouch::Finger*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETFINGER_OFFSET))(this, finderId);
		}

		::System::Void AddUIIgnored(::UnityEngine::GameObject* uiGo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADDUIIGNORED_OFFSET))(this, uiGo);
		}

		::System::Void RemoveUIIgnored(::UnityEngine::GameObject* uiGo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVEUIIGNORED_OFFSET))(this, uiGo);
		}

		::System::Boolean IsScreenPositionOverUI(::UnityEngine::Vector2 position)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ISSCREENPOSITIONOVERUI_OFFSET))(this, position);
		}

		::UnityEngine::GameObject* GetFirstUIElementFromCache()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETFIRSTUIELEMENTFROMCACHE_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetFirstUIElement(::UnityEngine::Vector2 position)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETFIRSTUIELEMENT_OFFSET))(this, position);
		}

		static ::System::Boolean IsFingerOverUIElement(::System::Int32 fingerIndex)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ISFINGEROVERUIELEMENT_OFFSET))(fingerIndex);
		}

		static ::UnityEngine::GameObject* GetCurrentPickedUIElement(::System::Int32 fingerIndex, ::System::Boolean isTwoFinger)
		{
			return ((::UnityEngine::GameObject*(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETCURRENTPICKEDUIELEMENT_OFFSET))(fingerIndex, isTwoFinger);
		}

		static ::UnityEngine::GameObject* GetCurrentPickedObject(::System::Int32 fingerIndex, ::System::Boolean isTwoFinger)
		{
			return ((::UnityEngine::GameObject*(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETCURRENTPICKEDOBJECT_OFFSET))(fingerIndex, isTwoFinger);
		}

		static ::UnityEngine::GameObject* GetGameObjectAt_1(::UnityEngine::Vector2 position, ::System::Boolean isTwoFinger)
		{
			return ((::UnityEngine::GameObject*(*)(::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETGAMEOBJECTAT_1_OFFSET))(position, isTwoFinger);
		}

		static ::System::Int32 GetTouchCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETTOUCHCOUNT_OFFSET))();
		}

		static ::System::Void ResetTouch(::System::Int32 fingerIndex)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_RESETTOUCH_OFFSET))(fingerIndex);
		}

		static ::System::Void SetEnabled(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLED_OFFSET))(enable);
		}

		static ::System::Boolean GetEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLED_OFFSET))();
		}

		static ::System::Void SetEnableUIDetection(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLEUIDETECTION_OFFSET))(enable);
		}

		static ::System::Boolean GetEnableUIDetection()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLEUIDETECTION_OFFSET))();
		}

		static ::System::Void SetUICompatibily(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETUICOMPATIBILY_OFFSET))(value);
		}

		static ::System::Boolean GetUIComptability()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETUICOMPTABILITY_OFFSET))();
		}

		static ::System::Void SetAutoUpdateUI(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETAUTOUPDATEUI_OFFSET))(value);
		}

		static ::System::Boolean GetAutoUpdateUI()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETAUTOUPDATEUI_OFFSET))();
		}

		static ::System::Void SetNGUICompatibility(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETNGUICOMPATIBILITY_OFFSET))(value);
		}

		static ::System::Boolean GetNGUICompatibility()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETNGUICOMPATIBILITY_OFFSET))();
		}

		static ::System::Void SetEnableAutoSelect(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLEAUTOSELECT_OFFSET))(value);
		}

		static ::System::Boolean GetEnableAutoSelect()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLEAUTOSELECT_OFFSET))();
		}

		static ::System::Void SetAutoUpdatePickedObject(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETAUTOUPDATEPICKEDOBJECT_OFFSET))(value);
		}

		static ::System::Boolean GetAutoUpdatePickedObject()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETAUTOUPDATEPICKEDOBJECT_OFFSET))();
		}

		static ::System::Void Set3DPickableLayer(::UnityEngine::LayerMask mask)
		{
			return ((::System::Void(*)(::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SET3DPICKABLELAYER_OFFSET))(mask);
		}

		static ::UnityEngine::LayerMask Get3DPickableLayer()
		{
			return ((::UnityEngine::LayerMask(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GET3DPICKABLELAYER_OFFSET))();
		}

		static ::System::Void AddCamera(::UnityEngine::Camera* cam, ::System::Boolean guiCam)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADDCAMERA_OFFSET))(cam, guiCam);
		}

		static ::System::Void RemoveCamera(::UnityEngine::Camera* cam)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVECAMERA_OFFSET))(cam);
		}

		static ::UnityEngine::Camera* GetCamera(::System::Int32 index)
		{
			return ((::UnityEngine::Camera*(*)(::System::Int32))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETCAMERA_OFFSET))(index);
		}

		static ::System::Void SetEnable2DCollider(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLE2DCOLLIDER_OFFSET))(value);
		}

		static ::System::Boolean GetEnable2DCollider()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLE2DCOLLIDER_OFFSET))();
		}

		static ::System::Void Set2DPickableLayer(::UnityEngine::LayerMask mask)
		{
			return ((::System::Void(*)(::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SET2DPICKABLELAYER_OFFSET))(mask);
		}

		static ::UnityEngine::LayerMask Get2DPickableLayer()
		{
			return ((::UnityEngine::LayerMask(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GET2DPICKABLELAYER_OFFSET))();
		}

		static ::System::Void SetGesturePriority(::HedgehogTeam::EasyTouch::EasyTouch_GesturePriority value)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_GesturePriority))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETGESTUREPRIORITY_OFFSET))(value);
		}

		static ::HedgehogTeam::EasyTouch::EasyTouch_GesturePriority GetGesturePriority()
		{
			return ((::HedgehogTeam::EasyTouch::EasyTouch_GesturePriority(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETGESTUREPRIORITY_OFFSET))();
		}

		static ::System::Void SetStationaryTolerance(::System::Single tolerance)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETSTATIONARYTOLERANCE_OFFSET))(tolerance);
		}

		static ::System::Single GetStationaryTolerance()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETSTATIONARYTOLERANCE_OFFSET))();
		}

		static ::System::Void SetLongTapTime(::System::Single time)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETLONGTAPTIME_OFFSET))(time);
		}

		static ::System::Single GetlongTapTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETLONGTAPTIME_OFFSET))();
		}

		static ::System::Void SetDoubleTapTime(::System::Single time)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETDOUBLETAPTIME_OFFSET))(time);
		}

		static ::System::Single GetDoubleTapTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETDOUBLETAPTIME_OFFSET))();
		}

		static ::System::Void SetDoubleTapMethod(::HedgehogTeam::EasyTouch::EasyTouch_DoubleTapDetection detection)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_DoubleTapDetection))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETDOUBLETAPMETHOD_OFFSET))(detection);
		}

		static ::HedgehogTeam::EasyTouch::EasyTouch_DoubleTapDetection GetDoubleTapMethod()
		{
			return ((::HedgehogTeam::EasyTouch::EasyTouch_DoubleTapDetection(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETDOUBLETAPMETHOD_OFFSET))();
		}

		static ::System::Void SetSwipeTolerance(::System::Single tolerance)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETSWIPETOLERANCE_OFFSET))(tolerance);
		}

		static ::System::Single GetSwipeTolerance()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETSWIPETOLERANCE_OFFSET))();
		}

		static ::System::Void SetEnable2FingersGesture(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLE2FINGERSGESTURE_OFFSET))(enable);
		}

		static ::System::Boolean GetEnable2FingersGesture()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLE2FINGERSGESTURE_OFFSET))();
		}

		static ::System::Void SetEnable2FingersSwipe(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLE2FINGERSSWIPE_OFFSET))(enable);
		}

		static ::System::Boolean GetEnable2FingersSwipe()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLE2FINGERSSWIPE_OFFSET))();
		}

		static ::System::Void SetTwoFingerPickMethod(::HedgehogTeam::EasyTouch::EasyTouch_TwoFingerPickMethod pickMethod)
		{
			return ((::System::Void(*)(::HedgehogTeam::EasyTouch::EasyTouch_TwoFingerPickMethod))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETTWOFINGERPICKMETHOD_OFFSET))(pickMethod);
		}

		static ::HedgehogTeam::EasyTouch::EasyTouch_TwoFingerPickMethod GetTwoFingerPickMethod()
		{
			return ((::HedgehogTeam::EasyTouch::EasyTouch_TwoFingerPickMethod(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETTWOFINGERPICKMETHOD_OFFSET))();
		}

		static ::System::Void SetEnablePinch(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLEPINCH_OFFSET))(enable);
		}

		static ::System::Boolean GetEnablePinch()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLEPINCH_OFFSET))();
		}

		static ::System::Void SetMinPinchLength(::System::Single length)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETMINPINCHLENGTH_OFFSET))(length);
		}

		static ::System::Single GetMinPinchLength()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETMINPINCHLENGTH_OFFSET))();
		}

		static ::System::Void SetEnableTwist(::System::Boolean enable)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETENABLETWIST_OFFSET))(enable);
		}

		static ::System::Boolean GetEnableTwist()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETENABLETWIST_OFFSET))();
		}

		static ::System::Void SetMinTwistAngle(::System::Single angle)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETMINTWISTANGLE_OFFSET))(angle);
		}

		static ::System::Single GetMinTwistAngle()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETMINTWISTANGLE_OFFSET))();
		}

		static ::System::Boolean GetSecondeFingerSimulation()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_GETSECONDEFINGERSIMULATION_OFFSET))();
		}

		static ::System::Void SetSecondFingerSimulation(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_SETSECONDFINGERSIMULATION_OFFSET))(value);
		}

		static ::System::Void AddUIIgnoredGameobject(::UnityEngine::GameObject* uiGo)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_ADDUIIGNOREDGAMEOBJECT_OFFSET))(uiGo);
		}

		static ::System::Void RemoveUIIgnoredGameobject(::UnityEngine::GameObject* uiGo)
		{
			return ((::System::Void(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_REMOVEUIIGNOREDGAMEOBJECT_OFFSET))(uiGo);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEDGEHOGTEAM_EASYTOUCH_EASYTOUCH_RESET_OFFSET))(this);
		}
	};
}

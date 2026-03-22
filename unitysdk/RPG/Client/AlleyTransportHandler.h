#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AlleyTransportRouteState.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_1_1ACAE102162D8EA1;
class Class_1_A582CC0DF852C4EA;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class AlleyGrid; }
namespace RPG::Client { class MonoExUICamera; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GETCUREDITSHOPID_OFFSET UNITYSDK_OFFSET(0x8C79AD0)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GETRECENTLYEDITSHOPID_OFFSET UNITYSDK_OFFSET(0x8C79B30)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_BIRDINTERVAL_OFFSET UNITYSDK_OFFSET(0x8C79120)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_BIRDSPEED_OFFSET UNITYSDK_OFFSET(0x8C79130)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_DRAWRATIO_OFFSET UNITYSDK_OFFSET(0x8C790D0)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_MAXCAMERADISTANCE_OFFSET UNITYSDK_OFFSET(0x8C79160)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_MINCAMERADISTANCE_OFFSET UNITYSDK_OFFSET(0x8C79150)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_MOBILEMAXCAMERADISTANCE_OFFSET UNITYSDK_OFFSET(0x8C79180)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_MOBILEMINCAMERADISTANCE_OFFSET UNITYSDK_OFFSET(0x8C79170)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_ROLLBACKRATIO_OFFSET UNITYSDK_OFFSET(0x8C79100)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_SQUADSINTERVAL_OFFSET UNITYSDK_OFFSET(0x8C79110)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_STRAIGHTRATIO_OFFSET UNITYSDK_OFFSET(0x8C790E0)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_TOUCHRADIUS_OFFSET UNITYSDK_OFFSET(0x8C79140)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_TURNRATIO_OFFSET UNITYSDK_OFFSET(0x8C790F0)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_INITVIRTUALCURSOR_OFFSET UNITYSDK_OFFSET(0x8C79D90)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_INIT_OFFSET UNITYSDK_OFFSET(0x8C79190)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x8C79F70)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETALLEYGRID_OFFSET UNITYSDK_OFFSET(0x8C79660)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETCAMERACANDRAG_OFFSET UNITYSDK_OFFSET(0x8C79500)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETCAMERACANZOOM_OFFSET UNITYSDK_OFFSET(0x8C79570)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETCONFIRMPRESSEDBYGAMEPAD_OFFSET UNITYSDK_OFFSET(0x8C79C70)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETDRAWCALLBACK_OFFSET UNITYSDK_OFFSET(0x8C79800)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETDRAW_OFFSET UNITYSDK_OFFSET(0x8C79400)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETEDITCAMERAZOOM_OFFSET UNITYSDK_OFFSET(0x8C795E0)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETENDDRAWCALLBACK_OFFSET UNITYSDK_OFFSET(0x8C79880)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETERASECALLBACK_OFFSET UNITYSDK_OFFSET(0x8C79900)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETERASE_OFFSET UNITYSDK_OFFSET(0x8C79480)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETROUTESTATECHANGECALLBACK_OFFSET UNITYSDK_OFFSET(0x8C79980)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETSOFTZONEOBJECT_OFFSET UNITYSDK_OFFSET(0x8C79DF0)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETVIRTUALCURSORPOSITION_OFFSET UNITYSDK_OFFSET(0x8C79B90)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_SWITCHTOEDITCAMERA_OFFSET UNITYSDK_OFFSET(0x8C79E60)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_UPDATEEDITVCLOOKATPOSITIONBYGAMEPAD_OFFSET UNITYSDK_OFFSET(0x8C79CF0)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x8C79EC0)
#define RPG_CLIENT_ALLEYTRANSPORTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8C79FD0)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyTransportHandler_TypeDefinitionIndex = 49457;

	class AlleyTransportHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Texture2D* drawCursor; // 0x18
		::UnityEngine::Texture2D* eraseCursor; // 0x20
		::UnityEngine::Transform* editCursorHitPoint; // 0x28
		::Cinemachine::CinemachineVirtualCamera* viewCam; // 0x30
		::Cinemachine::CinemachineVirtualCamera* editCam; // 0x38
		::RPG::Client::MonoExUICamera* exUICamera; // 0x40
		::System::Single minCameraDistance; // 0x48
		::System::Single maxCameraDistance; // 0x4C
		::System::Single mobileMinCameraDistance; // 0x50
		::System::Single mobileMaxCameraDistance; // 0x54
		::Il2CppArray<::UnityEngine::Material*>* roadMaterials; // 0x58
		::System::Single drawRatio; // 0x60
		::System::Single straightRatio; // 0x64
		::System::Single turnRatio; // 0x68
		::System::Single rollbackRatio; // 0x6C
		::System::Single squadsInterval; // 0x70
		::System::Single birdInterval; // 0x74
		::System::Single birdSpeed; // 0x78
		::System::Single touchRadius; // 0x7C
		::Class_1_1ACAE102162D8EA1* _AlleyTransportRoute; // 0x80
		::Class_1_A582CC0DF852C4EA* _InputManager; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER__CTOR_OFFSET))(this);
		}

		::System::Single get_DrawRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_DRAWRATIO_OFFSET))(this);
		}

		::System::Single get_StraightRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_STRAIGHTRATIO_OFFSET))(this);
		}

		::System::Single get_TurnRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_TURNRATIO_OFFSET))(this);
		}

		::System::Single get_RollbackRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_ROLLBACKRATIO_OFFSET))(this);
		}

		::System::Single get_SquadsInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_SQUADSINTERVAL_OFFSET))(this);
		}

		::System::Single get_BirdInterval()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_BIRDINTERVAL_OFFSET))(this);
		}

		::System::Single get_BirdSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_BIRDSPEED_OFFSET))(this);
		}

		::System::Single get_TouchRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_TOUCHRADIUS_OFFSET))(this);
		}

		::System::Single get_MinCameraDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_MINCAMERADISTANCE_OFFSET))(this);
		}

		::System::Single get_MaxCameraDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_MAXCAMERADISTANCE_OFFSET))(this);
		}

		::System::Single get_MobileMinCameraDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_MOBILEMINCAMERADISTANCE_OFFSET))(this);
		}

		::System::Single get_MobileMaxCameraDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GET_MOBILEMAXCAMERADISTANCE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_INIT_OFFSET))(this);
		}

		::System::Void SetDraw()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETDRAW_OFFSET))(this);
		}

		::System::Void SetErase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETERASE_OFFSET))(this);
		}

		::System::Void SetCameraCanDrag(::System::Boolean isCanDrag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETCAMERACANDRAG_OFFSET))(this, isCanDrag);
		}

		::System::Void SetCameraCanZoom(::System::Boolean isCanZoom)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETCAMERACANZOOM_OFFSET))(this, isCanZoom);
		}

		::System::Void SetEditCameraZoom(::System::Single zoomValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETEDITCAMERAZOOM_OFFSET))(this, zoomValue);
		}

		::System::Void SetAlleyGrid(::System::UInt32 mapID, ::RPG::Client::AlleyGrid* alleyGrid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::AlleyGrid*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETALLEYGRID_OFFSET))(this, mapID, alleyGrid);
		}

		::System::Void SetDrawCallback(::System::Action_1<::System::Object*>* drawCallback, ::System::Object* callbackObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETDRAWCALLBACK_OFFSET))(this, drawCallback, callbackObject);
		}

		::System::Void SetEndDrawCallback(::System::Action_1<::System::Object*>* endDrawCallback, ::System::Object* callbackObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETENDDRAWCALLBACK_OFFSET))(this, endDrawCallback, callbackObject);
		}

		::System::Void SetEraseCallback(::System::Action_1<::System::Object*>* eraseCallback, ::System::Object* callbackObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETERASECALLBACK_OFFSET))(this, eraseCallback, callbackObject);
		}

		::System::Void SetRouteStateChangeCallback(::System::Action_2<::System::Object*, ::RPG::Client::AlleyTransportRouteState>* callback, ::System::Object* callbackObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Object*, ::RPG::Client::AlleyTransportRouteState>*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETROUTESTATECHANGECALLBACK_OFFSET))(this, callback, callbackObject);
		}

		::System::UInt32 GetCurEditShopID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GETCUREDITSHOPID_OFFSET))(this);
		}

		::System::UInt32 GetRecentlyEditShopID(::System::UInt32 mapID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_GETRECENTLYEDITSHOPID_OFFSET))(this, mapID);
		}

		::System::Void SetVirtualCursorPosition(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETVIRTUALCURSORPOSITION_OFFSET))(this, x, y, z);
		}

		::System::Void SetConfirmPressedByGamepad(::System::Boolean isPressed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETCONFIRMPRESSEDBYGAMEPAD_OFFSET))(this, isPressed);
		}

		::System::Void UpdateEditVCLookAtPositionByGamepad(::System::Single deltaX, ::System::Single deltaY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_UPDATEEDITVCLOOKATPOSITIONBYGAMEPAD_OFFSET))(this, deltaX, deltaY);
		}

		::System::Void InitVirtualCursor(::UnityEngine::Transform* virtualCursor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_INITVIRTUALCURSOR_OFFSET))(this, virtualCursor);
		}

		::System::Void SetSoftZoneObject(::UnityEngine::Transform* obj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SETSOFTZONEOBJECT_OFFSET))(this, obj);
		}

		::System::Void SwitchToEditCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_SWITCHTOEDITCAMERA_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYTRANSPORTHANDLER_ONDESTROY_OFFSET))(this);
		}
	};
}

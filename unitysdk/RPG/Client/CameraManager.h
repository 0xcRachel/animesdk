#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MainCameraDisableReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace UnityEngine { class Camera; }

#define RPG_CLIENT_CAMERAMANAGER_ADDUICAMERATOCAMERASTACK_OFFSET UNITYSDK_OFFSET(0x15E27AD0)
#define RPG_CLIENT_CAMERAMANAGER_DISABLEMAINCAMERA_OFFSET UNITYSDK_OFFSET(0x15E27D60)
#define RPG_CLIENT_CAMERAMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E275E0)
#define RPG_CLIENT_CAMERAMANAGER_ENABLEMAINCAMERA_OFFSET UNITYSDK_OFFSET(0x15E27C30)
#define RPG_CLIENT_CAMERAMANAGER_GET_ACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x15E27F40)
#define RPG_CLIENT_CAMERAMANAGER_GET_DEVICEADAPTEDCAMERARECT_OFFSET UNITYSDK_OFFSET(0x15E27E20)
#define RPG_CLIENT_CAMERAMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x15E27F60)
#define RPG_CLIENT_CAMERAMANAGER_GET_MAINCAMERA_OFFSET UNITYSDK_OFFSET(0x15E27EE0)
#define RPG_CLIENT_CAMERAMANAGER_GET_UI3DCAMERA_OFFSET UNITYSDK_OFFSET(0x15E27F20)
#define RPG_CLIENT_CAMERAMANAGER_GET_UICAMERA_OFFSET UNITYSDK_OFFSET(0x15E27F00)
#define RPG_CLIENT_CAMERAMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x15E271D0)
#define RPG_CLIENT_CAMERAMANAGER_MUTEMAINCAMERAMASK_OFFSET UNITYSDK_OFFSET(0x15E27BD0)
#define RPG_CLIENT_CAMERAMANAGER_RECOVERMAINCAMERAMASK_OFFSET UNITYSDK_OFFSET(0x15E27670)
#define RPG_CLIENT_CAMERAMANAGER_REFRESHCAMERAADAPTION_OFFSET UNITYSDK_OFFSET(0x15E27300)
#define RPG_CLIENT_CAMERAMANAGER_RESETDISABLEMAINCAMERA_OFFSET UNITYSDK_OFFSET(0x15E27280)
#define RPG_CLIENT_CAMERAMANAGER_SETACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x15E276D0)
#define RPG_CLIENT_CAMERAMANAGER_SET_ACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x15E27F50)
#define RPG_CLIENT_CAMERAMANAGER_SET_MAINCAMERA_OFFSET UNITYSDK_OFFSET(0x15E27EF0)
#define RPG_CLIENT_CAMERAMANAGER_SET_UI3DCAMERA_OFFSET UNITYSDK_OFFSET(0x15E27F30)
#define RPG_CLIENT_CAMERAMANAGER_SET_UICAMERA_OFFSET UNITYSDK_OFFSET(0x15E27F10)
#define RPG_CLIENT_CAMERAMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E27F90)
#define RPG_CLIENT_CAMERAMANAGER__REFRESHDISABLEMAINCAMERA_OFFSET UNITYSDK_OFFSET(0x15E27CF0)
#define RPG_CLIENT_CAMERAMANAGER__SETCAMERARECT_OFFSET UNITYSDK_OFFSET(0x15E27E60)

namespace RPG::Client
{
	inline static constexpr unsigned int CameraManager_TypeDefinitionIndex = 64153;

	class CameraManager : public ::System::Object
	{
	public:
		::UnityEngine::Camera* _UICamera_k__BackingField; // 0x10
		::UnityEngine::Camera* _MainCamera_k__BackingField; // 0x18
		::UnityEngine::Camera* _UI3DCamera_k__BackingField; // 0x20
		::UnityEngine::Camera* _ActiveCamera_k__BackingField; // 0x28
		::System::Int32 _orginalMainCameraMask; // 0x30
		::RPG::Client::ReasonBool_1<::RPG::Client::MainCameraDisableReason> _MainCameraEnableReasonBool; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SetActiveCamera(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_SETACTIVECAMERA_OFFSET))(this, camera);
		}

		::System::Void AddUICameraToCameraStack(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_ADDUICAMERATOCAMERASTACK_OFFSET))(this, camera);
		}

		::System::Void MuteMainCameraMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_MUTEMAINCAMERAMASK_OFFSET))(this);
		}

		::System::Void RecoverMainCameraMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_RECOVERMAINCAMERAMASK_OFFSET))(this);
		}

		::System::Void EnableMainCamera(::RPG::Client::MainCameraDisableReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MainCameraDisableReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_ENABLEMAINCAMERA_OFFSET))(this, reason);
		}

		::System::Void DisableMainCamera(::RPG::Client::MainCameraDisableReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MainCameraDisableReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_DISABLEMAINCAMERA_OFFSET))(this, reason);
		}

		::System::Void ResetDisableMainCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_RESETDISABLEMAINCAMERA_OFFSET))(this);
		}

		::System::Void _RefreshDisableMainCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER__REFRESHDISABLEMAINCAMERA_OFFSET))(this);
		}

		::System::Void RefreshCameraAdaption()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_REFRESHCAMERAADAPTION_OFFSET))(this);
		}

		::UnityEngine::Rect get_DeviceAdaptedCameraRect()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_GET_DEVICEADAPTEDCAMERARECT_OFFSET))(this);
		}

		::System::Void _SetCameraRect(::UnityEngine::Camera* camera, ::UnityEngine::Rect newRect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER__SETCAMERARECT_OFFSET))(this, camera, newRect);
		}

		::UnityEngine::Camera* get_MainCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_GET_MAINCAMERA_OFFSET))(this);
		}

		::System::Void set_MainCamera(::UnityEngine::Camera* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_SET_MAINCAMERA_OFFSET))(this, value);
		}

		::UnityEngine::Camera* get_UICamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_GET_UICAMERA_OFFSET))(this);
		}

		::System::Void set_UICamera(::UnityEngine::Camera* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_SET_UICAMERA_OFFSET))(this, value);
		}

		::UnityEngine::Camera* get_UI3DCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_GET_UI3DCAMERA_OFFSET))(this);
		}

		::System::Void set_UI3DCamera(::UnityEngine::Camera* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_SET_UI3DCAMERA_OFFSET))(this, value);
		}

		::UnityEngine::Camera* get_ActiveCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_GET_ACTIVECAMERA_OFFSET))(this);
		}

		::System::Void set_ActiveCamera(::UnityEngine::Camera* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_SET_ACTIVECAMERA_OFFSET))(this, value);
		}

		static ::RPG::Client::CameraManager* get_Instance()
		{
			return ((::RPG::Client::CameraManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAMANAGER_GET_INSTANCE_OFFSET))();
		}
	};
}

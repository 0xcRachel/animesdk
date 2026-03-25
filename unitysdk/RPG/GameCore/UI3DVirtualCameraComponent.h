#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineBlendDefinition_Style.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace Cinemachine { class CinemachineBrain; }
namespace RPG::Client { class BlendDefinition; }
namespace RPG::Client { class ClientInputData; }
namespace RPG::Client { class EnvironmentSystem; }
namespace RPG::Client { class InputDataController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ManikinAreaConfig; }
namespace RPG::GameCore { class UI3DCameraStateBase; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_ACTIVEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xAAFA3E0)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_CREATECAMERASTATE_1_OFFSET UNITYSDK_OFFSET(0xAB03FA0)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_CREATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0xAB03EA0)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAB03A50)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_ENABLEMAINLIGHTCHANGE_OFFSET UNITYSDK_OFFSET(0xAB04360)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_GET_AREACONFIG_OFFSET UNITYSDK_OFFSET(0xAB048A0)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_GET_AREAROOTTRANS_OFFSET UNITYSDK_OFFSET(0xAB048C0)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_GET_BRAIN_OFFSET UNITYSDK_OFFSET(0xAB04880)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_GET_CAMERA_OFFSET UNITYSDK_OFFSET(0xAB04820)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_GET_INPUTDATA_OFFSET UNITYSDK_OFFSET(0xAAF8AC0)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_GET_ISENABLEMAINLIGHTCHANGE_OFFSET UNITYSDK_OFFSET(0xAB04840)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_GET_TARGETENTITY_OFFSET UNITYSDK_OFFSET(0xAB04860)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0xAB03C00)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAB04610)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_RESETINPUTCONTROLLER_OFFSET UNITYSDK_OFFSET(0xAB04490)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_RESETMAINLIGHTDIR_OFFSET UNITYSDK_OFFSET(0xAB03B90)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SETBLEND_OFFSET UNITYSDK_OFFSET(0xAB04150)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SETMAINLIGHTDIROFFSET_OFFSET UNITYSDK_OFFSET(0xAB040B0)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0xAB04100)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SET_AREACONFIG_OFFSET UNITYSDK_OFFSET(0xAB048B0)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SET_AREAROOTTRANS_OFFSET UNITYSDK_OFFSET(0xAB048D0)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SET_BRAIN_OFFSET UNITYSDK_OFFSET(0xAB04890)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SET_CAMERA_OFFSET UNITYSDK_OFFSET(0xAB04830)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SET_ISENABLEMAINLIGHTCHANGE_OFFSET UNITYSDK_OFFSET(0xAB04850)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SET_TARGETENTITY_OFFSET UNITYSDK_OFFSET(0xAB04870)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_TICK_OFFSET UNITYSDK_OFFSET(0xAB04590)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_UPDATECINEMACHINEBRAIN_OFFSET UNITYSDK_OFFSET(0xAB04530)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xAB04A70)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT__GETACTIVECAMERASTATE_OFFSET UNITYSDK_OFFSET(0xAB044F0)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT__SETUPBLEND_OFFSET UNITYSDK_OFFSET(0xAB042E0)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT__TICKENVIROMENT_OFFSET UNITYSDK_OFFSET(0xAB04710)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT__UPDATEMAINLIGHTDIR_OFFSET UNITYSDK_OFFSET(0xAB048E0)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT__UPDATEUI3DCAMERASTATE_OFFSET UNITYSDK_OFFSET(0xAB04790)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT___IFIXBASEPROXY_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAB04AA0)
#define RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0xAB04A90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DVirtualCameraComponent_TypeDefinitionIndex = 46378;

	class UI3DVirtualCameraComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		// static const ::System::String* _BLEND_CONFIG_PATH; // 0x0
		::UnityEngine::Camera* _Camera_k__BackingField; // 0x18
		::RPG::GameCore::UI3DCameraStateBase* _ActiveCameraState; // 0x20
		::RPG::Client::InputDataController* _InputControllerRef; // 0x28
		::RPG::GameCore::ManikinAreaConfig* _AreaConfig_k__BackingField; // 0x30
		::RPG::Client::EnvironmentSystem* _EnvironmentSystemRef; // 0x38
		::UnityEngine::Transform* _AreaRootTrans_k__BackingField; // 0x40
		::RPG::GameCore::GameEntity* _TargetEntity_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::RPG::GameCore::UI3DCameraStateBase*>* _CameraStates; // 0x50
		::Cinemachine::CinemachineBrain* _Brain_k__BackingField; // 0x58
		::UnityEngine::Transform* _CameraTrans; // 0x60
		::RPG::Client::BlendDefinition* _BlendConfig; // 0x68
		::UnityEngine::Vector2 _MainLightDirOffset; // 0x70
		::UnityEngine::Vector4 _MainLightDir; // 0x78
		::System::Boolean _IsEnableMainLightChange_k__BackingField; // 0x88
		::System::Boolean _IsEnviromentProfileActive; // 0x89
		::UnityEngine::Vector2 _DEFAULT_MAIN_LIGHT_DIR; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void InitComponent(::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_INITCOMPONENT_OFFSET))(this, camera);
		}

		::RPG::GameCore::UI3DCameraStateBase* CreateCameraState(::UnityEngine::Transform* virtualCameraTrans)
		{
			return ((::RPG::GameCore::UI3DCameraStateBase*(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_CREATECAMERASTATE_OFFSET))(this, virtualCameraTrans);
		}

		::RPG::GameCore::UI3DCameraStateBase* CreateCameraState_1(::System::Type* cameraStateType, ::UnityEngine::Transform* virtualCameraTrans)
		{
			return ((::RPG::GameCore::UI3DCameraStateBase*(*)(::PVOID, ::System::Type*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_CREATECAMERASTATE_1_OFFSET))(this, cameraStateType, virtualCameraTrans);
		}

		::System::Void SetMainLightDirOffset(::UnityEngine::Vector2 offset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SETMAINLIGHTDIROFFSET_OFFSET))(this, offset);
		}

		::System::Void SetTargetEntity(::RPG::GameCore::GameEntity* model)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SETTARGETENTITY_OFFSET))(this, model);
		}

		::System::Void SetBlend(::System::Int32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SETBLEND_OFFSET))(this, id);
		}

		::System::Void ResetMainLightDir()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_RESETMAINLIGHTDIR_OFFSET))(this);
		}

		::System::Void EnableMainLightChange(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_ENABLEMAINLIGHTCHANGE_OFFSET))(this, value);
		}

		::System::Void ResetInputController()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_RESETINPUTCONTROLLER_OFFSET))(this);
		}

		::System::Void ActiveVirtualCamera(::RPG::GameCore::UI3DCameraStateBase* cameraState)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UI3DCameraStateBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_ACTIVEVIRTUALCAMERA_OFFSET))(this, cameraState);
		}

		::System::Void UpdateCinemachineBrain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_UPDATECINEMACHINEBRAIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::Void LateUpdate(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_LATEUPDATE_OFFSET))(this, fElapsedTimeInSec);
		}

		::UnityEngine::Camera* get_Camera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_GET_CAMERA_OFFSET))(this);
		}

		::System::Void set_Camera(::UnityEngine::Camera* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SET_CAMERA_OFFSET))(this, value);
		}

		::System::Boolean get_IsEnableMainLightChange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_GET_ISENABLEMAINLIGHTCHANGE_OFFSET))(this);
		}

		::System::Void set_IsEnableMainLightChange(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SET_ISENABLEMAINLIGHTCHANGE_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_TargetEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_GET_TARGETENTITY_OFFSET))(this);
		}

		::System::Void set_TargetEntity(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SET_TARGETENTITY_OFFSET))(this, value);
		}

		::Cinemachine::CinemachineBrain* get_Brain()
		{
			return ((::Cinemachine::CinemachineBrain*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_GET_BRAIN_OFFSET))(this);
		}

		::System::Void set_Brain(::Cinemachine::CinemachineBrain* value)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SET_BRAIN_OFFSET))(this, value);
		}

		::RPG::GameCore::ManikinAreaConfig* get_AreaConfig()
		{
			return ((::RPG::GameCore::ManikinAreaConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_GET_AREACONFIG_OFFSET))(this);
		}

		::System::Void set_AreaConfig(::RPG::GameCore::ManikinAreaConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ManikinAreaConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SET_AREACONFIG_OFFSET))(this, value);
		}

		::RPG::Client::ClientInputData* get_InputData()
		{
			return ((::RPG::Client::ClientInputData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_GET_INPUTDATA_OFFSET))(this);
		}

		::UnityEngine::Transform* get_AreaRootTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_GET_AREAROOTTRANS_OFFSET))(this);
		}

		::System::Void set_AreaRootTrans(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT_SET_AREAROOTTRANS_OFFSET))(this, value);
		}

		::System::Void _TickEnviroment()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT__TICKENVIROMENT_OFFSET))(this);
		}

		::System::Void _UpdateMainLightDir()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT__UPDATEMAINLIGHTDIR_OFFSET))(this);
		}

		::System::Void _UpdateUI3DCameraState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT__UPDATEUI3DCAMERASTATE_OFFSET))(this);
		}

		::RPG::GameCore::UI3DCameraStateBase* _GetActiveCameraState()
		{
			return ((::RPG::GameCore::UI3DCameraStateBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT__GETACTIVECAMERASTATE_OFFSET))(this);
		}

		::System::Void _SetupBlend(::Cinemachine::CinemachineBlendDefinition_Style style, ::System::Single time, ::UnityEngine::AnimationCurve* curve)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBlendDefinition_Style, ::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT__SETUPBLEND_OFFSET))(this, style, time, curve);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_LateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DVIRTUALCAMERACOMPONENT___IFIXBASEPROXY_LATEUPDATE_OFFSET))(this, P0);
		}
	};
}

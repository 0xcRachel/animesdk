#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineCore_UpdateFilter.h"
#include "unitysdk/Cinemachine/UpdateTracker_UpdateClock.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineBrain_BrainEvent; }
namespace Cinemachine { class CinemachineCore_AxisInputDelegate; }
namespace Cinemachine { class CinemachineCore_GetBlendOverrideDelegate; }
namespace Cinemachine { class CinemachineCore_UpdateStatus; }
namespace Cinemachine { class CinemachineMixingCamera; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace Cinemachine { class ICinemachineCamera; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_CINEMACHINECORE_ADDACTIVEBRAIN_OFFSET UNITYSDK_OFFSET(0x1679AB60)
#define CINEMACHINE_CINEMACHINECORE_ADDACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x167AC710)
#define CINEMACHINE_CINEMACHINECORE_CAMERADESTROYED_OFFSET UNITYSDK_OFFSET(0x167AC7F0)
#define CINEMACHINE_CINEMACHINECORE_CAMERADISABLED_OFFSET UNITYSDK_OFFSET(0x167ACAF0)
#define CINEMACHINE_CINEMACHINECORE_CAMERAENABLED_OFFSET UNITYSDK_OFFSET(0x167AC8B0)
#define CINEMACHINE_CINEMACHINECORE_DELAYMIXINGVCAMUPDATEORDER_OFFSET UNITYSDK_OFFSET(0x167ACBB0)
#define CINEMACHINE_CINEMACHINECORE_FINDPOTENTIALTARGETBRAIN_OFFSET UNITYSDK_OFFSET(0x167AD750)
#define CINEMACHINE_CINEMACHINECORE_GENERATECAMERAACTIVATIONEVENT_OFFSET UNITYSDK_OFFSET(0x16798FF0)
#define CINEMACHINE_CINEMACHINECORE_GENERATECAMERACUTEVENT_OFFSET UNITYSDK_OFFSET(0x167990A0)
#define CINEMACHINE_CINEMACHINECORE_GETACTIVEBRAIN_OFFSET UNITYSDK_OFFSET(0x167AC6E0)
#define CINEMACHINE_CINEMACHINECORE_GETUPDATETARGET_OFFSET UNITYSDK_OFFSET(0x167AD550)
#define CINEMACHINE_CINEMACHINECORE_GETVCAMUPDATESTATUS_OFFSET UNITYSDK_OFFSET(0x167AD6B0)
#define CINEMACHINE_CINEMACHINECORE_GETVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x1679E920)
#define CINEMACHINE_CINEMACHINECORE_GET_BRAINCOUNT_OFFSET UNITYSDK_OFFSET(0x167AC6C0)
#define CINEMACHINE_CINEMACHINECORE_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x1678F290)
#define CINEMACHINE_CINEMACHINECORE_GET_CURRENTUPDATEFILTER_OFFSET UNITYSDK_OFFSET(0x167AD690)
#define CINEMACHINE_CINEMACHINECORE_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x1679A440)
#define CINEMACHINE_CINEMACHINECORE_GET_FIXEDFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x167ACDD0)
#define CINEMACHINE_CINEMACHINECORE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x16798ED0)
#define CINEMACHINE_CINEMACHINECORE_GET_VIRTUALCAMERACOUNT_OFFSET UNITYSDK_OFFSET(0x1679E900)
#define CINEMACHINE_CINEMACHINECORE_INITIALIZEMODULE_OFFSET UNITYSDK_OFFSET(0x167AD5F0)
#define CINEMACHINE_CINEMACHINECORE_ISLIVE_OFFSET UNITYSDK_OFFSET(0x1679A3B0)
#define CINEMACHINE_CINEMACHINECORE_REMOVEACTIVEBRAIN_OFFSET UNITYSDK_OFFSET(0x1679AED0)
#define CINEMACHINE_CINEMACHINECORE_REMOVEACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x167AC7C0)
#define CINEMACHINE_CINEMACHINECORE_SET_CURRENTUPDATEFILTER_OFFSET UNITYSDK_OFFSET(0x167AD6A0)
#define CINEMACHINE_CINEMACHINECORE_SET_FIXEDFRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x167ACE00)
#define CINEMACHINE_CINEMACHINECORE_UPDATEALLACTIVEVIRTUALCAMERAS_OFFSET UNITYSDK_OFFSET(0x1679D7D0)
#define CINEMACHINE_CINEMACHINECORE_UPDATEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x167ACE30)
#define CINEMACHINE_CINEMACHINECORE__CCTOR_OFFSET UNITYSDK_OFFSET(0x167AD920)
#define CINEMACHINE_CINEMACHINECORE__CTOR_OFFSET UNITYSDK_OFFSET(0x167AC640)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineCore_TypeDefinitionIndex = 36572;

	class CinemachineCore : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_kVersionString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0x1040);
		}
		static ::Cinemachine::CinemachineCore** StaticGet_sInstance()
		{
			return (::Cinemachine::CinemachineCore**)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0x1048);
		}
		static ::Cinemachine::CinemachineCore_AxisInputDelegate** StaticGet_GetInputAxis()
		{
			return (::Cinemachine::CinemachineCore_AxisInputDelegate**)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0x1050);
		}
		static ::Cinemachine::CinemachineBrain_BrainEvent** StaticGet_CameraUpdatedEvent()
		{
			return (::Cinemachine::CinemachineBrain_BrainEvent**)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0x1058);
		}
		static ::Cinemachine::CinemachineBrain_BrainEvent** StaticGet_CameraCutEvent()
		{
			return (::Cinemachine::CinemachineBrain_BrainEvent**)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0x1060);
		}
		static ::Cinemachine::CinemachineCore_GetBlendOverrideDelegate** StaticGet_GetBlendOverride()
		{
			return (::Cinemachine::CinemachineCore_GetBlendOverrideDelegate**)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0x1068);
		}
		static ::System::Single* StaticGet_mLastUpdateTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0xF60);
		}
		static ::System::Single* StaticGet_CurrentTimeOverride()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0xF64);
		}
		static ::System::Int32* StaticGet_kStreamingVersion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0xF68);
		}
		static ::System::Int32* StaticGet__FixedFrameCount_k__BackingField()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0xF6C);
		}
		static ::System::Boolean* StaticGet_DontSkipWhenCameraCullingMaskAll()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0xF70);
		}
		static ::System::Boolean* StaticGet_sShowHiddenObjects()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0xF71);
		}
		static ::System::Single* StaticGet_UniformDeltaTimeOverride()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(CinemachineCore_TypeDefinitionIndex)->GetStaticField(0xF74);
		}
		::System::Collections::Generic::List_1<::Cinemachine::CinemachineVirtualCameraBase*>* mActiveCameras; // 0x10
		::System::Collections::Generic::Dictionary_2<::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_UpdateStatus*>* mUpdateStatus; // 0x18
		::Cinemachine::CinemachineVirtualCameraBase* mRoundRobinVcamLastFrame; // 0x20
		::System::Collections::Generic::List_1<::Cinemachine::CinemachineBrain*>* mActiveBrains; // 0x28
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Cinemachine::CinemachineVirtualCameraBase*>*>* mAllCameras; // 0x30
		::Cinemachine::CinemachineCore_UpdateFilter _CurrentUpdateFilter_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE__CCTOR_OFFSET))();
		}

		static ::Cinemachine::CinemachineCore* get_Instance()
		{
			return ((::Cinemachine::CinemachineCore*(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GET_INSTANCE_OFFSET))();
		}

		static ::System::Single get_DeltaTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GET_DELTATIME_OFFSET))();
		}

		static ::System::Single get_CurrentTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GET_CURRENTTIME_OFFSET))();
		}

		::System::Int32 get_BrainCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GET_BRAINCOUNT_OFFSET))(this);
		}

		::Cinemachine::CinemachineBrain* GetActiveBrain(::System::Int32 index)
		{
			return ((::Cinemachine::CinemachineBrain*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GETACTIVEBRAIN_OFFSET))(this, index);
		}

		::System::Void AddActiveBrain(::Cinemachine::CinemachineBrain* brain)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_ADDACTIVEBRAIN_OFFSET))(this, brain);
		}

		::System::Void RemoveActiveBrain(::Cinemachine::CinemachineBrain* brain)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_REMOVEACTIVEBRAIN_OFFSET))(this, brain);
		}

		::System::Int32 get_VirtualCameraCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GET_VIRTUALCAMERACOUNT_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCameraBase* GetVirtualCamera(::System::Int32 index)
		{
			return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GETVIRTUALCAMERA_OFFSET))(this, index);
		}

		::System::Void AddActiveCamera(::Cinemachine::CinemachineVirtualCameraBase* vcam)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_ADDACTIVECAMERA_OFFSET))(this, vcam);
		}

		::System::Void RemoveActiveCamera(::Cinemachine::CinemachineVirtualCameraBase* vcam)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_REMOVEACTIVECAMERA_OFFSET))(this, vcam);
		}

		::System::Void CameraDestroyed(::Cinemachine::CinemachineVirtualCameraBase* vcam)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_CAMERADESTROYED_OFFSET))(this, vcam);
		}

		::System::Void CameraEnabled(::Cinemachine::CinemachineVirtualCameraBase* vcam)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_CAMERAENABLED_OFFSET))(this, vcam);
		}

		::System::Void CameraDisabled(::Cinemachine::CinemachineVirtualCameraBase* vcam)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_CAMERADISABLED_OFFSET))(this, vcam);
		}

		::System::Void DelayMixingVCamUpdateOrder(::Cinemachine::CinemachineMixingCamera* mixVCam)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineMixingCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_DELAYMIXINGVCAMUPDATEORDER_OFFSET))(this, mixVCam);
		}

		static ::System::Int32 get_FixedFrameCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GET_FIXEDFRAMECOUNT_OFFSET))();
		}

		static ::System::Void set_FixedFrameCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_SET_FIXEDFRAMECOUNT_OFFSET))(value);
		}

		::System::Void UpdateAllActiveVirtualCameras(::System::Int32 layerMask, ::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_UPDATEALLACTIVEVIRTUALCAMERAS_OFFSET))(this, layerMask, worldUp, deltaTime);
		}

		::System::Void UpdateVirtualCamera(::Cinemachine::CinemachineVirtualCameraBase* vcam, ::UnityEngine::Vector3 worldUp, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_UPDATEVIRTUALCAMERA_OFFSET))(this, vcam, worldUp, deltaTime);
		}

		static ::System::Void InitializeModule()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_INITIALIZEMODULE_OFFSET))();
		}

		::Cinemachine::CinemachineCore_UpdateFilter get_CurrentUpdateFilter()
		{
			return ((::Cinemachine::CinemachineCore_UpdateFilter(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GET_CURRENTUPDATEFILTER_OFFSET))(this);
		}

		::System::Void set_CurrentUpdateFilter(::Cinemachine::CinemachineCore_UpdateFilter value)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineCore_UpdateFilter))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_SET_CURRENTUPDATEFILTER_OFFSET))(this, value);
		}

		static ::UnityEngine::Transform* GetUpdateTarget(::Cinemachine::CinemachineVirtualCameraBase* vcam)
		{
			return ((::UnityEngine::Transform*(*)(::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GETUPDATETARGET_OFFSET))(vcam);
		}

		::Cinemachine::UpdateTracker_UpdateClock GetVcamUpdateStatus(::Cinemachine::CinemachineVirtualCameraBase* vcam)
		{
			return ((::Cinemachine::UpdateTracker_UpdateClock(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GETVCAMUPDATESTATUS_OFFSET))(this, vcam);
		}

		::System::Boolean IsLive(::Cinemachine::ICinemachineCamera* vcam)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_ISLIVE_OFFSET))(this, vcam);
		}

		::System::Void GenerateCameraActivationEvent(::Cinemachine::ICinemachineCamera* vcam, ::Cinemachine::ICinemachineCamera* vcamFrom)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GENERATECAMERAACTIVATIONEVENT_OFFSET))(this, vcam, vcamFrom);
		}

		::System::Void GenerateCameraCutEvent(::Cinemachine::ICinemachineCamera* vcam)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_GENERATECAMERACUTEVENT_OFFSET))(this, vcam);
		}

		::Cinemachine::CinemachineBrain* FindPotentialTargetBrain(::Cinemachine::CinemachineVirtualCameraBase* vcam)
		{
			return ((::Cinemachine::CinemachineBrain*(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINECORE_FINDPOTENTIALTARGETBRAIN_OFFSET))(this, vcam);
		}
	};
}

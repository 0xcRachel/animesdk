#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Cinemachine { class CinemachineBlend; }
namespace Cinemachine { class ICinemachineCamera; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_CALCULATENEWSTATE_OFFSET UNITYSDK_OFFSET(0x150CEA70)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_BLEND_OFFSET UNITYSDK_OFFSET(0x150CE3C0)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x150CE420)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x150CE870)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x150CE8D0)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x150CE850)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x150CE3E0)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_PARENTCAMERA_OFFSET UNITYSDK_OFFSET(0x150CEA40)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x150CE830)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x150CE890)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_VIRTUALCAMERAGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x150CE8C0)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_INTERNALUPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x150CF560)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_ISLIVECHILD_OFFSET UNITYSDK_OFFSET(0x150CEA50)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_ONTARGETOBJECTWARPED_OFFSET UNITYSDK_OFFSET(0x150CF580)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_ONTRANSITIONFROMCAMERA_OFFSET UNITYSDK_OFFSET(0x150CF570)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_BLEND_OFFSET UNITYSDK_OFFSET(0x150CE3D0)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_FOLLOW_OFFSET UNITYSDK_OFFSET(0x150CE880)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_LOOKAT_OFFSET UNITYSDK_OFFSET(0x150CE860)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x150CE840)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_STATE_OFFSET UNITYSDK_OFFSET(0x150CE8B0)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_UPDATECAMERASTATE_OFFSET UNITYSDK_OFFSET(0x150CEA90)
#define CINEMACHINE_BLENDSOURCEVIRTUALCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x150CE3B0)

namespace Cinemachine
{
	inline static constexpr unsigned int BlendSourceVirtualCamera_TypeDefinitionIndex = 36868;

	class BlendSourceVirtualCamera : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _Follow_k__BackingField; // 0x10
		::Cinemachine::CinemachineBlend* _Blend_k__BackingField; // 0x18
		::UnityEngine::Transform* _LookAt_k__BackingField; // 0x20
		::Cinemachine::CameraState _State_k__BackingField; // 0x28
		::System::Int32 _Priority_k__BackingField; // 0x108

		::System::Void _ctor(::Cinemachine::CinemachineBlend* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBlend*))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA__CTOR_OFFSET))(this, a1);
		}

		::Cinemachine::CinemachineBlend* get_Blend()
		{
			return ((::Cinemachine::CinemachineBlend*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_BLEND_OFFSET))(this);
		}

		::System::Void set_Blend(::Cinemachine::CinemachineBlend* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineBlend*))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_BLEND_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void set_Priority(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_PRIORITY_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_LookAt()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_LOOKAT_OFFSET))(this);
		}

		::System::Void set_LookAt(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_LOOKAT_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Follow()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_FOLLOW_OFFSET))(this);
		}

		::System::Void set_Follow(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_FOLLOW_OFFSET))(this, a1);
		}

		::Cinemachine::CameraState get_State()
		{
			return ((::Cinemachine::CameraState(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::Cinemachine::CameraState a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_SET_STATE_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* get_VirtualCameraGameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_VIRTUALCAMERAGAMEOBJECT_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_ISVALID_OFFSET))(this);
		}

		::Cinemachine::ICinemachineCamera* get_ParentCamera()
		{
			return ((::Cinemachine::ICinemachineCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_GET_PARENTCAMERA_OFFSET))(this);
		}

		::System::Boolean IsLiveChild(::Cinemachine::ICinemachineCamera* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::System::Boolean))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_ISLIVECHILD_OFFSET))(this, a1, a2);
		}

		::Cinemachine::CameraState CalculateNewState(::System::Single a1)
		{
			return ((::Cinemachine::CameraState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_CALCULATENEWSTATE_OFFSET))(this, a1);
		}

		::System::Void UpdateCameraState(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_UPDATECAMERASTATE_OFFSET))(this, a1, a2);
		}

		::System::Void InternalUpdateCameraState(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_INTERNALUPDATECAMERASTATE_OFFSET))(this, a1, a2);
		}

		::System::Void OnTransitionFromCamera(::Cinemachine::ICinemachineCamera* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::ICinemachineCamera*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_ONTRANSITIONFROMCAMERA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnTargetObjectWarped(::UnityEngine::Transform* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_BLENDSOURCEVIRTUALCAMERA_ONTARGETOBJECTWARPED_OFFSET))(this, a1, a2);
		}
	};
}

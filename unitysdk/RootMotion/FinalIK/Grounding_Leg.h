#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/GroundRaycastHit.h"
#include "unitysdk/RootMotion/FinalIK/GroundingThread_Leg.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class Grounding; }
namespace RootMotion::FinalIK { class IKSolver_TipPoint; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_GROUNDING_LEG_COPYFROM_OFFSET UNITYSDK_OFFSET(0x175E2AC0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_COPYTO_OFFSET UNITYSDK_OFFSET(0x175E28C0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_FINDTOEBONE_OFFSET UNITYSDK_OFFSET(0x175E5FD0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GETHEIGHTFROMGROUND_OFFSET UNITYSDK_OFFSET(0x175E7BB0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GETLEGLOCKTRANSFORM_OFFSET UNITYSDK_OFFSET(0x175E6160)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GETRAYCASTHIT_OFFSET UNITYSDK_OFFSET(0x175E6630)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GETROTATIONOFFSETTARGET_OFFSET UNITYSDK_OFFSET(0x175E79F0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GETSPHEREHIT_OFFSET UNITYSDK_OFFSET(0x175E6A70)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_FOOTHEIGHT_OFFSET UNITYSDK_OFFSET(0x175E5FC0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_HEIGHTFROMGROUND_OFFSET UNITYSDK_OFFSET(0x175E5EF0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_IKOFFSET_OFFSET UNITYSDK_OFFSET(0x175E5FA0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_IKPOSITION_OFFSET UNITYSDK_OFFSET(0x175E5E70)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_INITIATED_OFFSET UNITYSDK_OFFSET(0x175E5ED0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ISGROUNDED_OFFSET UNITYSDK_OFFSET(0x175E5E50)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ISLASTLOCKIKPOSITION_OFFSET UNITYSDK_OFFSET(0x175E5E30)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ISLOCKIKPHYSICS_OFFSET UNITYSDK_OFFSET(0x175E5E10)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ISLOCKIKPOSITION_OFFSET UNITYSDK_OFFSET(0x175E5DF0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ROOTYOFFSET_OFFSET UNITYSDK_OFFSET(0x175E6080)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ROTATIONOFFSET_OFFSET UNITYSDK_OFFSET(0x175E5EB0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_STEPHEIGHTFROMGROUND_OFFSET UNITYSDK_OFFSET(0x175E7430)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_TIPPOINT_OFFSET UNITYSDK_OFFSET(0x175E5F80)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_TOETRANSFORM_OFFSET UNITYSDK_OFFSET(0x175E5F60)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x175E5F40)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x175E5F10)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_INITIATE_OFFSET UNITYSDK_OFFSET(0x175E36F0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_MOVEIKOFFSET_OFFSET UNITYSDK_OFFSET(0x175E47D0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x175E2C60)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_PROCESSROTATION_OFFSET UNITYSDK_OFFSET(0x175E4830)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_PROCESS_OFFSET UNITYSDK_OFFSET(0x175E39D0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_RESETPOSITIONIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x175E2E80)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0x175E2E70)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_RESET_OFFSET UNITYSDK_OFFSET(0x175E5490)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_ROTATEFOOT_OFFSET UNITYSDK_OFFSET(0x175E7C20)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_ROTATENORMAL_OFFSET UNITYSDK_OFFSET(0x175E7B10)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SETFOOTTOPLANE_OFFSET UNITYSDK_OFFSET(0x175E6FD0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SETFOOTTOPOINT_OFFSET UNITYSDK_OFFSET(0x175E6890)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_HEIGHTFROMGROUND_OFFSET UNITYSDK_OFFSET(0x175E5F00)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_IKOFFSET_OFFSET UNITYSDK_OFFSET(0x175E5FB0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_IKPOSITION_OFFSET UNITYSDK_OFFSET(0x175E5E90)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_INITIATED_OFFSET UNITYSDK_OFFSET(0x175E5EE0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_ISGROUNDED_OFFSET UNITYSDK_OFFSET(0x175E5E60)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_ISLASTLOCKIKPOSITION_OFFSET UNITYSDK_OFFSET(0x175E5E40)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_ISLOCKIKPHYSICS_OFFSET UNITYSDK_OFFSET(0x175E5E20)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_ISLOCKIKPOSITION_OFFSET UNITYSDK_OFFSET(0x175E5E00)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_ROTATIONOFFSET_OFFSET UNITYSDK_OFFSET(0x175E5EC0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_TIPPOINT_OFFSET UNITYSDK_OFFSET(0x175E5F90)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_TOETRANSFORM_OFFSET UNITYSDK_OFFSET(0x175E5F70)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x175E5F50)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x175E5F30)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_STEPUPFOOTOFFSET_OFFSET UNITYSDK_OFFSET(0x175E7480)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_UPDATETRANSFORM_OFFSET UNITYSDK_OFFSET(0x175E6370)
#define ROOTMOTION_FINALIK_GROUNDING_LEG__CTOR_OFFSET UNITYSDK_OFFSET(0x175E3680)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Grounding_Leg_TypeDefinitionIndex = 41023;

	class Grounding_Leg : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _transform_k__BackingField; // 0x10
		::UnityEngine::Transform* _toeTransform_k__BackingField; // 0x18
		::RootMotion::FinalIK::Grounding* grounding; // 0x20
		::RootMotion::FinalIK::IKSolver_TipPoint* _tipPoint_k__BackingField; // 0x28
		::UnityEngine::Vector3 lastPosition; // 0x30
		::System::Single deltaTime; // 0x3C
		::UnityEngine::Quaternion lockRotation; // 0x40
		::UnityEngine::Vector3 _velocity_k__BackingField; // 0x50
		::System::Boolean _initiated_k__BackingField; // 0x5C
		::System::Boolean _isLockIKPosition_k__BackingField; // 0x5D
		::System::Boolean resetPositionFlag; // 0x5E
		::System::Boolean _isLockIKPhysics_k__BackingField; // 0x5F
		::UnityEngine::Vector3 lockPosition; // 0x60
		::System::Boolean _isGrounded_k__BackingField; // 0x6C
		::System::Boolean _isLastLockIKPosition_k__BackingField; // 0x6D
		::UnityEngine::Vector3 transformPosition; // 0x70
		::UnityEngine::Quaternion _rotationOffset_k__BackingField; // 0x7C
		::System::Single _IKOffset_k__BackingField; // 0x8C
		::UnityEngine::Quaternion transformRotation; // 0x90
		::UnityEngine::Quaternion r; // 0xA0
		::System::Single lastTime; // 0xB0
		::System::Single _heightFromGround_k__BackingField; // 0xB4
		::RootMotion::FinalIK::GroundRaycastHit heelHit; // 0xB8
		::UnityEngine::Vector3 _IKPosition_k__BackingField; // 0xDC
		::UnityEngine::Quaternion toHitNormal; // 0xE8
		::System::Single footHeight; // 0xF8
		::UnityEngine::Vector3 up; // 0xFC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG__CTOR_OFFSET))(this);
		}

		::System::Boolean get_isLockIKPosition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ISLOCKIKPOSITION_OFFSET))(this);
		}

		::System::Void set_isLockIKPosition(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_ISLOCKIKPOSITION_OFFSET))(this, value);
		}

		::System::Boolean get_isLockIKPhysics()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ISLOCKIKPHYSICS_OFFSET))(this);
		}

		::System::Void set_isLockIKPhysics(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_ISLOCKIKPHYSICS_OFFSET))(this, value);
		}

		::System::Boolean get_isLastLockIKPosition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ISLASTLOCKIKPOSITION_OFFSET))(this);
		}

		::System::Void set_isLastLockIKPosition(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_ISLASTLOCKIKPOSITION_OFFSET))(this, value);
		}

		::System::Boolean get_isGrounded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ISGROUNDED_OFFSET))(this);
		}

		::System::Void set_isGrounded(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_ISGROUNDED_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_IKPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_IKPOSITION_OFFSET))(this);
		}

		::System::Void set_IKPosition(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_IKPOSITION_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_rotationOffset()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ROTATIONOFFSET_OFFSET))(this);
		}

		::System::Void set_rotationOffset(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_ROTATIONOFFSET_OFFSET))(this, value);
		}

		::System::Boolean get_initiated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_INITIATED_OFFSET))(this);
		}

		::System::Void set_initiated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_INITIATED_OFFSET))(this, value);
		}

		::System::Single get_heightFromGround()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_HEIGHTFROMGROUND_OFFSET))(this);
		}

		::System::Void set_heightFromGround(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_HEIGHTFROMGROUND_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_velocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_VELOCITY_OFFSET))(this);
		}

		::System::Void set_velocity(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_VELOCITY_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_transform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_TRANSFORM_OFFSET))(this);
		}

		::System::Void set_transform(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_TRANSFORM_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_toeTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_TOETRANSFORM_OFFSET))(this);
		}

		::System::Void set_toeTransform(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_TOETRANSFORM_OFFSET))(this, value);
		}

		::RootMotion::FinalIK::IKSolver_TipPoint* get_tipPoint()
		{
			return ((::RootMotion::FinalIK::IKSolver_TipPoint*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_TIPPOINT_OFFSET))(this);
		}

		::System::Void set_tipPoint(::RootMotion::FinalIK::IKSolver_TipPoint* value)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::IKSolver_TipPoint*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_TIPPOINT_OFFSET))(this, value);
		}

		::System::Single get_IKOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_IKOFFSET_OFFSET))(this);
		}

		::System::Void set_IKOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SET_IKOFFSET_OFFSET))(this, value);
		}

		::System::Single get_FootHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_FOOTHEIGHT_OFFSET))(this);
		}

		::System::Void Initiate(::RootMotion::FinalIK::Grounding* grounding, ::UnityEngine::Transform* transform, ::RootMotion::FinalIK::IKSolver_TipPoint* tipPoint)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::Grounding*, ::UnityEngine::Transform*, ::RootMotion::FinalIK::IKSolver_TipPoint*))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_INITIATE_OFFSET))(this, grounding, transform, tipPoint);
		}

		::UnityEngine::Transform* FindToeBone()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_FINDTOEBONE_OFFSET))(this);
		}

		::System::Void CopyTo(::RootMotion::FinalIK::GroundingThread_Leg& solver)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::GroundingThread_Leg&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_COPYTO_OFFSET))(this, solver);
		}

		::System::Void CopyFrom(::RootMotion::FinalIK::GroundingThread_Leg& solver)
		{
			return ((::System::Void(*)(::PVOID, ::RootMotion::FinalIK::GroundingThread_Leg&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_COPYFROM_OFFSET))(this, solver);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_ONENABLE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_RESET_OFFSET))(this);
		}

		::System::Void ResetPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_RESETPOSITION_OFFSET))(this);
		}

		::System::Void ResetPositionImmediately(::UnityEngine::Vector3 deltaMove)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_RESETPOSITIONIMMEDIATELY_OFFSET))(this, deltaMove);
		}

		::System::Void MoveIKOffset(::System::Single offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_MOVEIKOFFSET_OFFSET))(this, offset);
		}

		::System::Void Process()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_PROCESS_OFFSET))(this);
		}

		::System::Void StepUpFootOffset(::System::Single& offsetTarget)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_STEPUPFOOTOFFSET_OFFSET))(this, offsetTarget);
		}

		::System::Single get_stepHeightFromGround()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_STEPHEIGHTFROMGROUND_OFFSET))(this);
		}

		::System::Void GetLegLockTransform(::UnityEngine::Vector3& outPosition, ::UnityEngine::Quaternion& outRotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GETLEGLOCKTRANSFORM_OFFSET))(this, outPosition, outRotation);
		}

		::RootMotion::FinalIK::GroundRaycastHit GetSphereHit(::UnityEngine::Vector3 offsetFromHeel, ::System::Single radius)
		{
			return ((::RootMotion::FinalIK::GroundRaycastHit(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GETSPHEREHIT_OFFSET))(this, offsetFromHeel, radius);
		}

		::RootMotion::FinalIK::GroundRaycastHit GetRaycastHit(::UnityEngine::Vector3 offsetFromHeel)
		{
			return ((::RootMotion::FinalIK::GroundRaycastHit(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GETRAYCASTHIT_OFFSET))(this, offsetFromHeel);
		}

		::UnityEngine::Vector3 RotateNormal(::UnityEngine::Vector3 normal)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_ROTATENORMAL_OFFSET))(this, normal);
		}

		::System::Void SetFootToPoint(::UnityEngine::Vector3 normal, ::UnityEngine::Vector3 point)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SETFOOTTOPOINT_OFFSET))(this, normal, point);
		}

		::System::Void SetFootToPlane(::UnityEngine::Vector3 planeNormal, ::UnityEngine::Vector3 planePoint, ::UnityEngine::Vector3 heelHitPoint)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_SETFOOTTOPLANE_OFFSET))(this, planeNormal, planePoint, heelHitPoint);
		}

		::System::Single GetHeightFromGround(::UnityEngine::Vector3 hitPoint)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GETHEIGHTFROMGROUND_OFFSET))(this, hitPoint);
		}

		::System::Void RotateFoot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_ROTATEFOOT_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetRotationOffsetTarget()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GETROTATIONOFFSETTARGET_OFFSET))(this);
		}

		::System::Single get_rootYOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ROOTYOFFSET_OFFSET))(this);
		}

		::System::Void UpdateTransform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_UPDATETRANSFORM_OFFSET))(this);
		}

		::System::Void ProcessRotation(::System::Single lowestOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDING_LEG_PROCESSROTATION_OFFSET))(this, lowestOffset);
		}
	};
}

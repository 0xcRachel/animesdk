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

#define ROOTMOTION_FINALIK_GROUNDING_LEG_COPYFROM_OFFSET UNITYSDK_OFFSET(0x8297C30)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_COPYTO_OFFSET UNITYSDK_OFFSET(0x8297A40)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_FINDTOEBONE_OFFSET UNITYSDK_OFFSET(0x829B190)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GETHEIGHTFROMGROUND_OFFSET UNITYSDK_OFFSET(0x829CDF0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GETLEGLOCKTRANSFORM_OFFSET UNITYSDK_OFFSET(0x829B320)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GETRAYCASTHIT_OFFSET UNITYSDK_OFFSET(0x829B800)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GETROTATIONOFFSETTARGET_OFFSET UNITYSDK_OFFSET(0x829CC10)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GETSPHEREHIT_OFFSET UNITYSDK_OFFSET(0x829BC30)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_FOOTHEIGHT_OFFSET UNITYSDK_OFFSET(0x829B180)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_HEIGHTFROMGROUND_OFFSET UNITYSDK_OFFSET(0x829B0B0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_IKOFFSET_OFFSET UNITYSDK_OFFSET(0x829B160)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_IKPOSITION_OFFSET UNITYSDK_OFFSET(0x829B030)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_INITIATED_OFFSET UNITYSDK_OFFSET(0x829B090)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ISGROUNDED_OFFSET UNITYSDK_OFFSET(0x829B010)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ISLASTLOCKIKPOSITION_OFFSET UNITYSDK_OFFSET(0x829AFF0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ISLOCKIKPHYSICS_OFFSET UNITYSDK_OFFSET(0x829AFD0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ISLOCKIKPOSITION_OFFSET UNITYSDK_OFFSET(0x829AFB0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ROOTYOFFSET_OFFSET UNITYSDK_OFFSET(0x829B240)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_ROTATIONOFFSET_OFFSET UNITYSDK_OFFSET(0x829B070)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_STEPHEIGHTFROMGROUND_OFFSET UNITYSDK_OFFSET(0x829C610)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_TIPPOINT_OFFSET UNITYSDK_OFFSET(0x829B140)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_TOETRANSFORM_OFFSET UNITYSDK_OFFSET(0x829B120)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x829B100)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_GET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x829B0D0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_INITIATE_OFFSET UNITYSDK_OFFSET(0x8298850)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_MOVEIKOFFSET_OFFSET UNITYSDK_OFFSET(0x8299960)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x8297DC0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_PROCESSROTATION_OFFSET UNITYSDK_OFFSET(0x82999B0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_PROCESS_OFFSET UNITYSDK_OFFSET(0x8298B80)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_RESETPOSITIONIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x8297FD0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0x8297FC0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_RESET_OFFSET UNITYSDK_OFFSET(0x829A650)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_ROTATEFOOT_OFFSET UNITYSDK_OFFSET(0x829D000)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_ROTATENORMAL_OFFSET UNITYSDK_OFFSET(0x829CD50)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SETFOOTTOPLANE_OFFSET UNITYSDK_OFFSET(0x829C1B0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SETFOOTTOPOINT_OFFSET UNITYSDK_OFFSET(0x829BA60)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_HEIGHTFROMGROUND_OFFSET UNITYSDK_OFFSET(0x829B0C0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_IKOFFSET_OFFSET UNITYSDK_OFFSET(0x829B170)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_IKPOSITION_OFFSET UNITYSDK_OFFSET(0x829B050)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_INITIATED_OFFSET UNITYSDK_OFFSET(0x829B0A0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_ISGROUNDED_OFFSET UNITYSDK_OFFSET(0x829B020)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_ISLASTLOCKIKPOSITION_OFFSET UNITYSDK_OFFSET(0x829B000)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_ISLOCKIKPHYSICS_OFFSET UNITYSDK_OFFSET(0x829AFE0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_ISLOCKIKPOSITION_OFFSET UNITYSDK_OFFSET(0x829AFC0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_ROTATIONOFFSET_OFFSET UNITYSDK_OFFSET(0x829B080)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_TIPPOINT_OFFSET UNITYSDK_OFFSET(0x829B150)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_TOETRANSFORM_OFFSET UNITYSDK_OFFSET(0x829B130)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_TRANSFORM_OFFSET UNITYSDK_OFFSET(0x829B110)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_SET_VELOCITY_OFFSET UNITYSDK_OFFSET(0x829B0F0)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_STEPUPFOOTOFFSET_OFFSET UNITYSDK_OFFSET(0x829C660)
#define ROOTMOTION_FINALIK_GROUNDING_LEG_UPDATETRANSFORM_OFFSET UNITYSDK_OFFSET(0x829B530)
#define ROOTMOTION_FINALIK_GROUNDING_LEG__CTOR_OFFSET UNITYSDK_OFFSET(0x82987D0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int Grounding_Leg_TypeDefinitionIndex = 34263;

	class Grounding_Leg : public ::System::Object
	{
	public:
		::RootMotion::FinalIK::Grounding* grounding; // 0x10
		::UnityEngine::Transform* _transform_k__BackingField; // 0x18
		::UnityEngine::Transform* _toeTransform_k__BackingField; // 0x20
		::RootMotion::FinalIK::IKSolver_TipPoint* _tipPoint_k__BackingField; // 0x28
		::System::Single footHeight; // 0x30
		::UnityEngine::Quaternion toHitNormal; // 0x34
		::System::Boolean _isGrounded_k__BackingField; // 0x44
		::System::Boolean _isLastLockIKPosition_k__BackingField; // 0x45
		::System::Boolean _isLockIKPosition_k__BackingField; // 0x46
		::System::Boolean resetPositionFlag; // 0x47
		::System::Single deltaTime; // 0x48
		::UnityEngine::Vector3 lastPosition; // 0x4C
		::System::Single _IKOffset_k__BackingField; // 0x58
		::System::Boolean _initiated_k__BackingField; // 0x5C
		::System::Boolean _isLockIKPhysics_k__BackingField; // 0x5D
		::UnityEngine::Vector3 transformPosition; // 0x60
		::UnityEngine::Vector3 _velocity_k__BackingField; // 0x6C
		::RootMotion::FinalIK::GroundRaycastHit heelHit; // 0x78
		::UnityEngine::Quaternion r; // 0x9C
		::UnityEngine::Vector3 up; // 0xAC
		::UnityEngine::Vector3 lockPosition; // 0xB8
		::System::Single _heightFromGround_k__BackingField; // 0xC4
		::UnityEngine::Vector3 _IKPosition_k__BackingField; // 0xC8
		::UnityEngine::Quaternion _rotationOffset_k__BackingField; // 0xD4
		::UnityEngine::Quaternion lockRotation; // 0xE4
		::System::Single lastTime; // 0xF4
		::UnityEngine::Quaternion transformRotation; // 0xF8

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

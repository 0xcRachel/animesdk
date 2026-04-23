#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/GroundRaycastHit.h"
#include "unitysdk/RootMotion/FinalIK/GroundingThread_Leg.h"
#include "unitysdk/RootMotion/FinalIK/GroundingThread_Pelvis.h"
#include "unitysdk/RootMotion/IKJob/IKTransformRef.h"
#include "unitysdk/RootMotion/NativeCurve.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x175E7D10)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_FLATTEN_OFFSET UNITYSDK_OFFSET(0x175E9CE0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GETROOTHIT_OFFSET UNITYSDK_OFFSET(0x175E7D50)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GETVERTICALOFFSET_OFFSET UNITYSDK_OFFSET(0x175E9E60)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_ROOTGROUNDED_OFFSET UNITYSDK_OFFSET(0x175E7CF0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_UP_OFFSET UNITYSDK_OFFSET(0x175E8250)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_USEROOTROTATION_OFFSET UNITYSDK_OFFSET(0x175E9C50)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_UPDATE_OFFSET UNITYSDK_OFFSET(0x175DFEF0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD__CTOR_OFFSET UNITYSDK_OFFSET(0x175DAD50)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GroundingThread_TypeDefinitionIndex = 41014;

	class GroundingThread : public ::System::Object
	{
	public:
		::RootMotion::FinalIK::GroundingThread_Pelvis pelvis; // 0x10
		::Il2CppArray<::RootMotion::FinalIK::GroundingThread_Leg>* legs; // 0x40
		::RootMotion::IKJob::IKTransformRef root; // 0x48
		::System::Single maxStep; // 0x58
		::System::Single maxFootRotationRollAngle; // 0x5C
		::UnityEngine::Vector3 deltaRootPosition; // 0x60
		::System::Single pelvisDamper; // 0x6C
		::System::Single lowerPelvisWeight; // 0x70
		::System::Boolean IsRootMove; // 0x74
		::System::Boolean bUseStepUp; // 0x75
		::System::Boolean isGrounded; // 0x76
		::System::Boolean stayOriginIfNoGround; // 0x77
		::System::Single heightOffset; // 0x78
		::System::Single IKPositionWeight; // 0x7C
		::UnityEngine::LayerMask layers; // 0x80
		::System::Single pelvisSpeed; // 0x84
		::System::Single rootSphereCastRadius; // 0x88
		::RootMotion::NativeCurve maxFootUpperRotateRatioCurve; // 0x90
		::UnityEngine::Quaternion deltaRootRotation; // 0xA8
		::RootMotion::FinalIK::GroundRaycastHit rootHit; // 0xB8
		::System::Single IKRotationWeight; // 0xDC
		::UnityEngine::Quaternion lastRootRotation; // 0xE0
		::System::Single prediction; // 0xF0
		::System::Single footRadius; // 0xF4
		::UnityEngine::Vector3 lastRootPosition; // 0xF8
		::System::Single footSpeed; // 0x104
		::System::Single maxFootRotationAngle; // 0x108
		::System::Single liftPelvisWeight; // 0x10C
		::System::Single footRotationSpeed; // 0x110
		::System::Boolean useToeBone; // 0x114
		::System::Boolean rotateSolver; // 0x115

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD__CTOR_OFFSET))(this);
		}

		::System::Boolean get_rootGrounded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_ROOTGROUNDED_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_DISPOSE_OFFSET))(this);
		}

		::RootMotion::FinalIK::GroundRaycastHit GetRootHit(::System::Single maxDistanceMlp)
		{
			return ((::RootMotion::FinalIK::GroundRaycastHit(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_GETROOTHIT_OFFSET))(this, maxDistanceMlp);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_UPDATE_OFFSET))(this, deltaTime);
		}

		::UnityEngine::Vector3 get_up()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_UP_OFFSET))(this);
		}

		::UnityEngine::Vector3 Flatten(::UnityEngine::Vector3 v)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_FLATTEN_OFFSET))(this, v);
		}

		::System::Single GetVerticalOffset(::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_GETVERTICALOFFSET_OFFSET))(this, p1, p2);
		}

		::System::Boolean get_useRootRotation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_USEROOTROTATION_OFFSET))(this);
		}
	};
}

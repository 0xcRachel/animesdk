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

#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x829D0F0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_FLATTEN_OFFSET UNITYSDK_OFFSET(0x829F600)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GETROOTHIT_OFFSET UNITYSDK_OFFSET(0x829D160)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GETVERTICALOFFSET_OFFSET UNITYSDK_OFFSET(0x829F890)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_ROOTGROUNDED_OFFSET UNITYSDK_OFFSET(0x829D0D0)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_UP_OFFSET UNITYSDK_OFFSET(0x829D530)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_GET_USEROOTROTATION_OFFSET UNITYSDK_OFFSET(0x829F280)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD_UPDATE_OFFSET UNITYSDK_OFFSET(0x8294640)
#define ROOTMOTION_FINALIK_GROUNDINGTHREAD__CTOR_OFFSET UNITYSDK_OFFSET(0x828F1F0)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GroundingThread_TypeDefinitionIndex = 34254;

	class GroundingThread : public ::System::Object
	{
	public:
		::Il2CppArray<::RootMotion::FinalIK::GroundingThread_Leg>* legs; // 0x10
		::RootMotion::FinalIK::GroundingThread_Pelvis pelvis; // 0x18
		::RootMotion::IKJob::IKTransformRef root; // 0x48
		::System::Single prediction; // 0x58
		::System::Single maxFootRotationRollAngle; // 0x5C
		::System::Single lowerPelvisWeight; // 0x60
		::System::Single footRadius; // 0x64
		::UnityEngine::LayerMask layers; // 0x68
		::System::Boolean useToeBone; // 0x6C
		::System::Boolean rotateSolver; // 0x6D
		::System::Boolean IsRootMove; // 0x6E
		::System::Boolean stayOriginIfNoGround; // 0x6F
		::System::Single maxFootRotationAngle; // 0x70
		::System::Single footSpeed; // 0x74
		::System::Boolean isGrounded; // 0x78
		::System::Boolean bUseStepUp; // 0x79
		::System::Single IKPositionWeight; // 0x7C
		::System::Single liftPelvisWeight; // 0x80
		::RootMotion::NativeCurve maxFootUpperRotateRatioCurve; // 0x88
		::UnityEngine::Vector3 lastRootPosition; // 0xA0
		::System::Single IKRotationWeight; // 0xAC
		::System::Single pelvisDamper; // 0xB0
		::UnityEngine::Quaternion lastRootRotation; // 0xB4
		::System::Single maxStep; // 0xC4
		::System::Single footRotationSpeed; // 0xC8
		::RootMotion::FinalIK::GroundRaycastHit rootHit; // 0xCC
		::System::Single rootSphereCastRadius; // 0xF0
		::UnityEngine::Vector3 deltaRootPosition; // 0xF4
		::System::Single heightOffset; // 0x100
		::UnityEngine::Quaternion deltaRootRotation; // 0x104
		::System::Single pelvisSpeed; // 0x114

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

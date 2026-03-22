#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PhotoGraphAimUnionNodeType.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimIdentifyType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class SmoothMask; }

#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM_SWITCHTONORMAL_OFFSET UNITYSDK_OFFSET(0x9A78530)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM_SWITCHTOSUCCESS_OFFSET UNITYSDK_OFFSET(0x9A78610)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM__CTOR_OFFSET UNITYSDK_OFFSET(0x9A77440)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphAimContainer_PhotoGraphAim_TypeDefinitionIndex = 55167;

	class PhotoGraphAimContainer_PhotoGraphAim : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* Rect; // 0x10
		::UnityEngine::Transform* NodeStatus; // 0x18
		::UnityEngine::UI::Image* NodeImage; // 0x20
		::UnityEngine::Animation* AnimationPending; // 0x28
		::UnityEngine::GameObject* ManualAimGO; // 0x30
		::UnityEngine::Collider* TargetCollider; // 0x38
		::UnityEngine::RectTransform* RectPending; // 0x40
		::UnityEngine::Animation* AnimationBg; // 0x48
		::RPG::GameCore::GameEntity* TargetEntity; // 0x50
		::UnityEngine::Transform* TargetTransform; // 0x58
		::UnityEngine::GameObject* PendingAimGO; // 0x60
		::UnityEngine::Transform* NodeFail; // 0x68
		::UnityEngine::UI::SmoothMask* ProgressSM; // 0x70
		::UnityEngine::Transform* NodeSuccess; // 0x78
		::System::Int32 UnionIndex; // 0x80
		::System::Int32 UnionNodeUnitIndex; // 0x84
		::System::Single ShowTagDirRange; // 0x88
		::System::Int32 UnionNodeIndex; // 0x8C
		::RPG::Client::PhotoGraphAimUnionNodeType AimNodeType; // 0x90
		::UnityEngine::Vector3 TransformOffset; // 0x94
		::UnityEngine::Vector3 WorldPos; // 0xA0
		::System::Boolean _IsSuccessStyle; // 0xAC
		::System::Boolean IsInUse; // 0xAD
		::System::Boolean ShowTag; // 0xAE
		::System::Boolean UseAimUnion; // 0xAF
		::System::Int32 HandlerIndex; // 0xB0
		::RPG::GameCore::PhotoGraphAimIdentifyType IdentifyType; // 0xB4
		::UnityEngine::Vector3 ExtraAimTagOffset; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM__CTOR_OFFSET))(this);
		}

		::System::Void SwitchToNormal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM_SWITCHTONORMAL_OFFSET))(this);
		}

		::System::Void SwitchToSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM_SWITCHTOSUCCESS_OFFSET))(this);
		}
	};
}

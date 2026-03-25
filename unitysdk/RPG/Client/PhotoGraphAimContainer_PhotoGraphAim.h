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

#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM_SWITCHTONORMAL_OFFSET UNITYSDK_OFFSET(0x9F4C000)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM_SWITCHTOSUCCESS_OFFSET UNITYSDK_OFFSET(0x9F4C0B0)
#define RPG_CLIENT_PHOTOGRAPHAIMCONTAINER_PHOTOGRAPHAIM__CTOR_OFFSET UNITYSDK_OFFSET(0x9F4AF40)

namespace RPG::Client
{
	inline static constexpr unsigned int PhotoGraphAimContainer_PhotoGraphAim_TypeDefinitionIndex = 56732;

	class PhotoGraphAimContainer_PhotoGraphAim : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* RectPending; // 0x10
		::UnityEngine::GameObject* PendingAimGO; // 0x18
		::UnityEngine::Transform* NodeStatus; // 0x20
		::UnityEngine::Transform* NodeSuccess; // 0x28
		::RPG::GameCore::GameEntity* TargetEntity; // 0x30
		::UnityEngine::UI::Image* NodeImage; // 0x38
		::UnityEngine::Transform* TargetTransform; // 0x40
		::UnityEngine::Transform* NodeFail; // 0x48
		::UnityEngine::GameObject* ManualAimGO; // 0x50
		::UnityEngine::RectTransform* Rect; // 0x58
		::UnityEngine::UI::SmoothMask* ProgressSM; // 0x60
		::UnityEngine::Animation* AnimationPending; // 0x68
		::UnityEngine::Animation* AnimationBg; // 0x70
		::UnityEngine::Collider* TargetCollider; // 0x78
		::System::Single ShowTagDirRange; // 0x80
		::UnityEngine::Vector3 WorldPos; // 0x84
		::UnityEngine::Vector3 ExtraAimTagOffset; // 0x90
		::System::Int32 UnionNodeIndex; // 0x9C
		::RPG::GameCore::PhotoGraphAimIdentifyType IdentifyType; // 0xA0
		::System::Int32 UnionNodeUnitIndex; // 0xA4
		::System::Boolean IsInUse; // 0xA8
		::System::Boolean ShowTag; // 0xA9
		::System::Boolean _IsSuccessStyle; // 0xAA
		::System::Boolean UseAimUnion; // 0xAB
		::RPG::Client::PhotoGraphAimUnionNodeType AimNodeType; // 0xAC
		::System::Int32 HandlerIndex; // 0xB0
		::UnityEngine::Vector3 TransformOffset; // 0xB4
		::System::Int32 UnionIndex; // 0xC0

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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_CLOSEUPSHOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8FAD2D0)

namespace RPG::Client
{
	inline static constexpr unsigned int CloseupShotData_TypeDefinitionIndex = 55341;

	class CloseupShotData : public ::System::Object
	{
	public:
		::System::String* LightTeamCustomizeFormationName; // 0x10
		::System::String* ShotPrefabPath; // 0x18
		::System::Action* OnFinishCB; // 0x20
		::RPG::GameCore::GameEntity* CasterEntity; // 0x28
		::RPG::GameCore::GameEntityList* AimTargetEntityList; // 0x30
		::System::String* CameraTimelineAssetName; // 0x38
		::System::String* DarkTeamCustomizeFormationName; // 0x40
		::RPG::GameCore::TargetEvaluator* ParentType; // 0x48
		::RPG::GameCore::GameEntity* TimelineCaster; // 0x50
		::RPG::GameCore::TargetEvaluator* LookAtType; // 0x58
		::System::Boolean KeepLastFrame; // 0x60
		::System::Boolean IsOverride; // 0x61
		::System::Boolean HideMonsterEffect; // 0x62
		::System::Boolean IsFromPrepareAbility; // 0x63
		::System::Single LightTeamCenterOffset; // 0x64
		::RPG::GameCore::TeamType ParentTeamType; // 0x68
		::UnityEngine::Vector3 LookAtOffset; // 0x6C
		::System::Single PauseTime; // 0x78
		::System::Single StageRootOffset; // 0x7C
		::UnityEngine::Vector3 ParentOffset; // 0x80
		::System::Single DarkTeamCenterOffset; // 0x8C
		::System::Single TimelineStartTime; // 0x90
		::System::Single TimelineFinishTime; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOSEUPSHOTDATA__CTOR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_43BD383C98B4C0C5_148;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_CLOSEUPSHOTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x178C7DD0)

namespace RPG::Client
{
	inline static constexpr unsigned int CloseupShotData_TypeDefinitionIndex = 64156;

	class CloseupShotData : public ::System::Object
	{
	public:
		::System::String* CameraTimelineAssetName; // 0x10
		::System::String* LightTeamCustomizeFormationName; // 0x18
		::RPG::GameCore::TargetEvaluator* ParentType; // 0x20
		::RPG::GameCore::GameEntity* AnchorEntity; // 0x28
		::System::Action* OnFinishCB; // 0x30
		::System::String* ShotPrefabPath; // 0x38
		::RPG::GameCore::GameEntityList* AimTargetEntityList; // 0x40
		::System::String* DarkTeamCustomizeFormationName; // 0x48
		::RPG::GameCore::GameEntity* TimelineCaster; // 0x50
		::Class_1_43BD383C98B4C0C5_148* ProcedureData; // 0x58
		::RPG::GameCore::TargetEvaluator* LookAtType; // 0x60
		::System::Single PauseTime; // 0x68
		::UnityEngine::Vector3 ParentOffset; // 0x6C
		::System::Single TimelineFinishTime; // 0x78
		::System::Single LightTeamCenterOffset; // 0x7C
		::System::Boolean KeepLastFrame; // 0x80
		::System::Boolean HideMonsterEffect; // 0x81
		::System::Boolean IsOverride; // 0x82
		::System::Boolean IsFromPrepareAbility; // 0x83
		::RPG::GameCore::TeamType ParentTeamType; // 0x84
		::UnityEngine::Vector3 LookAtOffset; // 0x88
		::System::Single DarkTeamCenterOffset; // 0x94
		::System::Single TimelineStartTime; // 0x98
		::System::Single StageRootOffset; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOSEUPSHOTDATA__CTOR_OFFSET))(this);
		}
	};
}

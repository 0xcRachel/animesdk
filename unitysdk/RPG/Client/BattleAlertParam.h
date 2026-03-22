#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleAlertType.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/UltraSkillAlertType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define RPG_CLIENT_BATTLEALERTPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x8D7FFA0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAlertParam_TypeDefinitionIndex = 58403;

	class BattleAlertParam : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::SkillType>* SkillTypes; // 0x10
		::System::String* SkillButtonPrefabPath; // 0x18
		::System::String* SidePrefabPath; // 0x20
		::System::String* ActiveIconPath; // 0x28
		::System::String* UnactiveIconPath; // 0x30
		::RPG::GameCore::GameEntity* Entity; // 0x38
		::RPG::GameCore::BattleAlertType AlertType; // 0x40
		::System::Boolean IsShow; // 0x44
		::RPG::GameCore::UltraSkillAlertType UltraSkillAlertType; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEALERTPARAM__CTOR_OFFSET))(this);
		}
	};
}

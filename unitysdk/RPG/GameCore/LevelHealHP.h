#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_105;
namespace System { class String; }

#define RPG_GAMECORE_LEVELHEALHP_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xA999F00)
#define RPG_GAMECORE_LEVELHEALHP_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA999EB0)
#define RPG_GAMECORE_LEVELHEALHP__CTOR_OFFSET UNITYSDK_OFFSET(0xA999E60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelHealHP_TypeDefinitionIndex = 45638;

	class LevelHealHP : public ::System::Object
	{
	public:
		::Class_1_43BD383C98B4C0C5_105* HealDataRef; // 0x10
		::System::String* AbilityID; // 0x18
		::RPG::GameCore::FixPoint PostHP; // 0x20
		::System::UInt32 TargetID; // 0x28
		::RPG::GameCore::FixPoint HealValue; // 0x30
		::RPG::GameCore::FixPoint PreHP; // 0x38
		::System::UInt32 HealerID; // 0x40
		::System::UInt32 SourceHealerID; // 0x44
		::RPG::GameCore::FixPoint HealPercentage; // 0x48
		::RPG::GameCore::FixPoint ActualHealValue; // 0x50

		::System::Void _ctor(::System::UInt32 healerId, ::System::UInt32 sourceHealerID, ::System::UInt32 targetId, ::RPG::GameCore::FixPoint healPercentage, ::RPG::GameCore::FixPoint healValue, ::RPG::GameCore::FixPoint actualHealValue, ::RPG::GameCore::FixPoint preHp, ::RPG::GameCore::FixPoint postHp, ::Class_1_43BD383C98B4C0C5_105* pHealData, ::System::String* sAbilityID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::Class_1_43BD383C98B4C0C5_105*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELHEALHP__CTOR_OFFSET))(this, healerId, sourceHealerID, targetId, healPercentage, healValue, actualHealValue, preHp, postHp, pHealData, sAbilityID);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELHEALHP_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELHEALHP_GETEVENTTYPE_OFFSET))(this);
		}
	};
}

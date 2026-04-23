#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_FCA657D695DD9485;
namespace System { class String; }

#define RPG_GAMECORE_ILBATTLEAVATARSKILLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A84460)
#define RPG_GAMECORE_ILBATTLEAVATARSKILLCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A849C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleAvatarSkillConfigRow_TypeDefinitionIndex = 13057;

	class ILBattleAvatarSkillConfigRow : public ::System::Object
	{
	public:
		::System::String* SkillNameKey; // 0x10
		::Il2CppArray<::Class_1_FCA657D695DD9485*>* ParamList; // 0x18
		::System::String* SkillTriggerKey; // 0x20
		::System::UInt32 RatedPromotionID; // 0x28
		::RPG::GameCore::AttackType AttackType; // 0x2C
		::RPG::GameCore::FixPoint InitialCD; // 0x30
		::RPG::Client::TextID SimpleSkillDesc; // 0x38
		::RPG::GameCore::FixPoint CoolDown; // 0x48
		::RPG::Client::TextID SkillDesc; // 0x50
		::System::UInt32 ID; // 0x60
		::System::UInt32 MaxLevel; // 0x64
		::RPG::Client::TextID SkillName; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEAVATARSKILLCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ILBattleAvatarSkillConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ILBattleAvatarSkillConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEAVATARSKILLCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

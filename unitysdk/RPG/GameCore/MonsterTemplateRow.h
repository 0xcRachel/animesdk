#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/System/Object.h"

class Class_1_2EC0EF10CE4B8713;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONSTERTEMPLATEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x190E9680)
#define RPG_GAMECORE_MONSTERTEMPLATEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x190EA8B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterTemplateRow_TypeDefinitionIndex = 13505;

	class MonsterTemplateRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::TextID>* MonsterStrategy; // 0x10
		::System::String* ManikinPrefabPath; // 0x18
		::System::String* IconPath; // 0x20
		::System::String* PrefabPath; // 0x28
		::Il2CppArray<::Class_1_2EC0EF10CE4B8713*>* AISkillSequence; // 0x30
		::System::String* ImagePath; // 0x38
		::System::String* AIPath; // 0x40
		::System::String* ManikinImagePath; // 0x48
		::System::String* ManikinConfigPath; // 0x50
		::Il2CppArray<::System::UInt32>* NPCMonsterList; // 0x58
		::System::String* RoundIconPath; // 0x60
		::System::String* JsonConfig; // 0x68
		::RPG::GameCore::FixPoint MinimumFatigueRatio; // 0x70
		::System::UInt32 NatureID; // 0x78
		::RPG::GameCore::MonsterRank Rank; // 0x7C
		::System::Int32 AtlasSortID; // 0x80
		::System::UInt32 MonsterTemplateID; // 0x84
		::RPG::GameCore::FixPoint StanceModifyValue; // 0x88
		::System::Int32 StanceCount; // 0x90
		::System::UInt32 TemplateGroupID; // 0x94
		::RPG::GameCore::FixPoint StatusResistanceBase; // 0x98
		::RPG::GameCore::FixPoint HPBase; // 0xA0
		::RPG::GameCore::FixPoint AttackBase; // 0xA8
		::RPG::GameCore::FixPoint SpeedModifyValue; // 0xB0
		::RPG::GameCore::FixPoint StanceBase; // 0xB8
		::RPG::GameCore::FixPoint CriticalDamageBase; // 0xC0
		::RPG::GameCore::AttackDamageType StanceType; // 0xC8
		::System::UInt32 MonsterCampID; // 0xCC
		::RPG::GameCore::FixPoint SpeedBase; // 0xD0
		::RPG::GameCore::FixPoint InitialDelayRatio; // 0xD8
		::RPG::Client::TextID MonsterName; // 0xE0
		::RPG::GameCore::FixPoint DefenceBase; // 0xF0
		::RPG::GameCore::FixPoint CriticalChanceBase; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterTemplateRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterTemplateRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

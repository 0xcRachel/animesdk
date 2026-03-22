#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FC0540)
#define RPG_GAMECORE_SWORDTRAININGSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16FC0B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingSkillRow_TypeDefinitionIndex = 11303;

	class SwordTrainingSkillRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* AvatarStatusAddList; // 0x10
		::Il2CppArray<::System::UInt32>* NextSkillIDList; // 0x18
		::System::String* SkillIcon; // 0x20
		::RPG::GameCore::ItemConfig* Cost; // 0x28
		::Il2CppArray<::System::Single>* ParamList; // 0x30
		::System::UInt32 Condition; // 0x38
		::System::UInt32 SkillTypeID; // 0x3C
		::System::UInt32 MazeBuffID; // 0x40
		::System::UInt32 Rare; // 0x44
		::System::UInt32 SkillPower; // 0x48
		::System::UInt32 SkillStatusLevel; // 0x4C
		::System::UInt32 SkillID; // 0x50
		::System::UInt32 SkillRank; // 0x54
		::RPG::Client::TextID SkillDesc; // 0x58
		::RPG::Client::TextID SkillTag; // 0x68
		::RPG::Client::TextID SkillName; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSKILLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SwordTrainingSkillRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSKILLROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

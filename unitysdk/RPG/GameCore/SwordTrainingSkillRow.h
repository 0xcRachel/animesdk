#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarPropertyValue; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19869050)
#define RPG_GAMECORE_SWORDTRAININGSKILLROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19869620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingSkillRow_TypeDefinitionIndex = 11870;

	class SwordTrainingSkillRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* NextSkillIDList; // 0x10
		::System::String* SkillIcon; // 0x18
		::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* AvatarStatusAddList; // 0x20
		::RPG::GameCore::ItemConfig* Cost; // 0x28
		::Il2CppArray<::System::Single>* ParamList; // 0x30
		::RPG::Client::TextID SkillTag; // 0x38
		::System::UInt32 Rare; // 0x48
		::System::UInt32 SkillRank; // 0x4C
		::System::UInt32 SkillPower; // 0x50
		::System::UInt32 MazeBuffID; // 0x54
		::System::UInt32 SkillStatusLevel; // 0x58
		::System::UInt32 SkillTypeID; // 0x5C
		::System::UInt32 Condition; // 0x60
		::System::UInt32 SkillID; // 0x64
		::RPG::Client::TextID SkillDesc; // 0x68
		::RPG::Client::TextID SkillName; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSKILLROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SwordTrainingSkillRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingSkillRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

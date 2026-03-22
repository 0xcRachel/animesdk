#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FightFestPhaseType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_FIGHTFESTPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16AA2170)
#define RPG_GAMECORE_FIGHTFESTPHASEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16AA2AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestPhaseRow_TypeDefinitionIndex = 12040;

	class FightFestPhaseRow : public ::System::Object
	{
	public:
		::System::String* IconPath1; // 0x10
		::Il2CppArray<::System::UInt32>* PhaseTutorialParams; // 0x18
		::System::String* Board3DTexture; // 0x20
		::System::String* IconPath2; // 0x28
		::System::String* LukaAnimTrigger; // 0x30
		::System::String* MiniIconPath1; // 0x38
		::RPG::Client::TextID TargetTips; // 0x40
		::RPG::GameCore::FightFestPhaseType PhaseType; // 0x50
		::System::UInt32 SortWeight; // 0x54
		::RPG::Client::TextID BoardTitle; // 0x58
		::System::UInt32 PhaseID; // 0x68
		::System::UInt32 UnlockSubMissionID; // 0x6C
		::RPG::Client::TextID PhaseTitle; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTPHASEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FightFestPhaseRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FightFestPhaseRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTPHASEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

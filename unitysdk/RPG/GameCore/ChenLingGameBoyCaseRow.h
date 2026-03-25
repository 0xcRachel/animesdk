#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGGAMEBOYCASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1709A100)
#define RPG_GAMECORE_CHENLINGGAMEBOYCASEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1709A6F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingGameBoyCaseRow_TypeDefinitionIndex = 12891;

	class ChenLingGameBoyCaseRow : public ::System::Object
	{
	public:
		::System::String* GameBoyThemeID; // 0x10
		::Il2CppArray<::System::UInt32>* RankingsNPCList; // 0x18
		::Il2CppArray<::System::UInt32>* GameBoyChallengeIDList; // 0x20
		::System::String* CheatCodeList; // 0x28
		::System::String* CoverImagePath; // 0x30
		::RPG::Client::TextID GameBoyNameID; // 0x38
		::System::UInt32 FDHardEntityID; // 0x48
		::System::UInt32 CheatQuestID; // 0x4C
		::System::Single ChallengeTimeLimit; // 0x50
		::System::UInt32 FDHardInstanceID; // 0x54
		::System::UInt32 FDCheatEntityID; // 0x58
		::System::UInt32 FDGroupID; // 0x5C
		::System::UInt32 GameBoyCaseID; // 0x60
		::System::UInt32 FDCheatInstanceID; // 0x64
		::RPG::Client::TextID SettlementTitleID; // 0x68
		::RPG::Client::TextID CheatSettlementTitleID; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCASEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChenLingGameBoyCaseRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingGameBoyCaseRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGAMEBOYCASEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

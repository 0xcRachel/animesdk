#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHENLINGGAMEBOYCASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x196A79A0)
#define RPG_GAMECORE_CHENLINGGAMEBOYCASEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x196A7F90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingGameBoyCaseRow_TypeDefinitionIndex = 13353;

	class ChenLingGameBoyCaseRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RankingsNPCList; // 0x10
		::System::String* CoverImagePath; // 0x18
		::System::String* GameBoyThemeID; // 0x20
		::System::String* CheatCodeList; // 0x28
		::Il2CppArray<::System::UInt32>* GameBoyChallengeIDList; // 0x30
		::System::UInt32 FDGroupID; // 0x38
		::System::UInt32 FDCheatEntityID; // 0x3C
		::System::UInt32 GameBoyCaseID; // 0x40
		::System::Single ChallengeTimeLimit; // 0x44
		::RPG::Client::TextID CheatSettlementTitleID; // 0x48
		::RPG::Client::TextID SettlementTitleID; // 0x58
		::System::UInt32 CheatQuestID; // 0x68
		::System::UInt32 FDHardEntityID; // 0x6C
		::System::UInt32 FDHardInstanceID; // 0x70
		::System::UInt32 FDCheatInstanceID; // 0x74
		::RPG::Client::TextID GameBoyNameID; // 0x78

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

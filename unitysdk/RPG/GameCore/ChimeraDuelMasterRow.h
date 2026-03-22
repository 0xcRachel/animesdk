#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELMASTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16991F70)
#define RPG_GAMECORE_CHIMERADUELMASTERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16992EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelMasterRow_TypeDefinitionIndex = 10327;

	class ChimeraDuelMasterRow : public ::System::Object
	{
	public:
		::System::String* FigurePath; // 0x10
		::System::String* VictoryEmojiPath; // 0x18
		::System::String* MasterAudio; // 0x20
		::System::String* FriendChallengeMasterIcon; // 0x28
		::System::String* MasterHeadIconPath; // 0x30
		::System::String* LossEmojiPath; // 0x38
		::System::String* DrawEmojiPath; // 0x40
		::System::String* BattleVSBodyType; // 0x48
		::Il2CppArray<::System::UInt32>* SkillIDList; // 0x50
		::System::UInt32 MasterSelectAvatarFloorConfigID; // 0x58
		::RPG::Client::TextID RecommendationTitle; // 0x60
		::System::UInt32 TalkSentenceID; // 0x70
		::System::UInt32 BattleAvatarFloorConfigID; // 0x74
		::RPG::Client::TextID MasterSkillDescription; // 0x78
		::RPG::Client::TextID VictoryText; // 0x88
		::RPG::Client::TextID LossText; // 0x98
		::System::UInt32 MasterID; // 0xA8
		::System::UInt32 SignatureChimeraID; // 0xAC
		::System::UInt32 MasterDisplayOrder; // 0xB0
		::System::UInt32 Difficulty; // 0xB4
		::RPG::Client::TextID DrawText; // 0xB8
		::RPG::Client::TextID ChimeraSkillDescription; // 0xC8
		::System::UInt32 AvatarID; // 0xD8
		::System::UInt32 BattleOpponentAvatarFloorConfigID; // 0xDC
		::System::UInt32 FloorGroupID; // 0xE0
		::System::UInt32 UnlockRequiredGameID; // 0xE4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTERROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChimeraDuelMasterRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelMasterRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELMASTERROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

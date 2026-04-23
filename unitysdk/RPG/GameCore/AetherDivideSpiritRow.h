#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AetherPassiveSkillType.h"
#include "unitysdk/RPG/GameCore/AetherRarityType.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AETHERDIVIDESPIRITROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18ABB200)
#define RPG_GAMECORE_AETHERDIVIDESPIRITROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18ABD810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideSpiritRow_TypeDefinitionIndex = 10458;

	class AetherDivideSpiritRow : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::System::String* TeamRightPrefabPath; // 0x18
		::System::String* TeamLeftPrefabPath; // 0x20
		::System::String* DefaultAvatarHeadIconPath; // 0x28
		::System::String* AtlasAvatarHeadIconPath; // 0x30
		::System::String* MiddleAvatarHeadIconPath; // 0x38
		::System::String* AIPath; // 0x40
		::System::String* AvatarVOTag; // 0x48
		::System::String* ManikinJsonPath; // 0x50
		::System::String* AvatarSideIconPath; // 0x58
		::System::String* ManikinAvatarModelPath; // 0x60
		::Il2CppArray<::RPG::GameCore::AetherPassiveSkillType>* PassiveSkillSlotList; // 0x68
		::System::String* SideAvatarHeadIconPath; // 0x70
		::System::String* DefaultAvatarModelPath; // 0x78
		::Il2CppArray<::System::UInt32>* SkillList; // 0x80
		::System::String* WaitingAvatarHeadIconPath; // 0x88
		::Il2CppArray<::System::UInt32>* RecommendPassiveSkillList; // 0x90
		::System::String* ActionAvatarHeadIconPath; // 0x98
		::System::String* UltraSkillCutInPrefabPath; // 0xA0
		::RPG::Client::TextID SpiritDescription; // 0xA8
		::System::UInt32 MaxPromotion; // 0xB8
		::RPG::GameCore::AttackDamageType DamageType; // 0xBC
		::RPG::GameCore::AetherSpiritType SpiritType; // 0xC0
		::System::UInt32 AvatarID; // 0xC4
		::RPG::GameCore::FixPoint SPMax; // 0xC8
		::System::UInt32 ExpItemID; // 0xD0
		::RPG::Client::TextID AvatarName; // 0xD8
		::RPG::Client::TextID SpiritUnlockDescription; // 0xE8
		::System::UInt32 GymLocation; // 0xF8
		::RPG::GameCore::AetherRarityType Rarity; // 0xFC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AetherDivideSpiritRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AetherDivideSpiritRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDESPIRITROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

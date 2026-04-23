#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/CombatPowerAvatarRarityType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18201010)
#define RPG_GAMECORE_AVATARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1820FCA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarRow_TypeDefinitionIndex = 12004;

	class AvatarRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RankIDList; // 0x10
		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* DamageTypeResistance; // 0x18
		::System::String* ActionAvatarHeadIconPath; // 0x20
		::Il2CppArray<::System::UInt32>* SkillList; // 0x28
		::Il2CppArray<::System::Single>* AssistBgOffset; // 0x30
		::System::String* UltraSkillCutInPrefabPath; // 0x38
		::Il2CppArray<::System::Single>* AvatarSelfShowOffset; // 0x40
		::System::String* AvatarGachaResultImgPath; // 0x48
		::Il2CppArray<::System::Single>* AvatarTrialOffset; // 0x50
		::Il2CppArray<::System::Single>* PlayerCardOffset; // 0x58
		::System::String* AvatarSideIconPath; // 0x60
		::Il2CppArray<::System::Single>* AvatarDropOffset; // 0x68
		::System::String* AvatarVOTag; // 0x70
		::System::String* SideAvatarHeadIconPath; // 0x78
		::System::String* AvatarMiniIconPath; // 0x80
		::System::String* JsonPath; // 0x88
		::System::String* DefaultAvatarModelPath; // 0x90
		::System::String* DefaultAvatarHeadIconPath; // 0x98
		::Il2CppArray<::System::Single>* AssistOffset; // 0xA0
		::System::String* AvatarCutinFrontImgPath; // 0xA8
		::System::String* UIAvatarModelPath; // 0xB0
		::System::String* ManikinJsonPath; // 0xB8
		::System::String* SkilltreePrefabPath; // 0xC0
		::System::String* WaitingAvatarHeadIconPath; // 0xC8
		::System::String* AvatarCutinBgImgPath; // 0xD0
		::System::String* AIPath; // 0xD8
		::System::String* AvatarCutinImgPath; // 0xE0
		::RPG::Client::TextID AvatarDesc; // 0xE8
		::RPG::Client::TextID AvatarFullName; // 0xF8
		::RPG::Client::TextID AvatarCutinIntroText; // 0x108
		::RPG::GameCore::AttackDamageType DamageType; // 0x118
		::RPG::GameCore::CombatPowerAvatarRarityType Rarity; // 0x11C
		::System::UInt32 MaxRank; // 0x120
		::System::Boolean Release; // 0x124
		::RPG::GameCore::FixPoint SPNeed; // 0x128
		::RPG::Client::TextID AvatarInitialSkinDesc; // 0x130
		::RPG::GameCore::AvatarBaseType AvatarBaseType; // 0x140
		::System::UInt32 ExpGroup; // 0x144
		::System::UInt32 AdventurePlayerID; // 0x148
		::System::UInt32 MaxPromotion; // 0x14C
		::RPG::Client::TextID AvatarName; // 0x150
		::System::UInt32 AvatarID; // 0x160
		::System::UInt32 NatureID; // 0x164
		::RPG::Client::TextID AvatarInitialSkinName; // 0x168

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

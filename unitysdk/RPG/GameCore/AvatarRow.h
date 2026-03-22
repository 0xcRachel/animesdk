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

#define RPG_GAMECORE_AVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x168A4250)
#define RPG_GAMECORE_AVATARROW__CTOR_OFFSET UNITYSDK_OFFSET(0x168B2870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarRow_TypeDefinitionIndex = 11523;

	class AvatarRow : public ::System::Object
	{
	public:
		::System::String* UltraSkillCutInPrefabPath; // 0x10
		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* DamageTypeResistance; // 0x18
		::Il2CppArray<::System::Single>* AvatarTrialOffset; // 0x20
		::Il2CppArray<::System::Single>* AvatarDropOffset; // 0x28
		::System::String* AvatarCutinFrontImgPath; // 0x30
		::System::String* AvatarCutinImgPath; // 0x38
		::Il2CppArray<::System::UInt32>* SkillList; // 0x40
		::System::String* DefaultAvatarHeadIconPath; // 0x48
		::System::String* DefaultAvatarModelPath; // 0x50
		::System::String* SkilltreePrefabPath; // 0x58
		::System::String* ManikinJsonPath; // 0x60
		::Il2CppArray<::System::UInt32>* RankIDList; // 0x68
		::Il2CppArray<::System::Single>* AssistOffset; // 0x70
		::System::String* AvatarGachaResultImgPath; // 0x78
		::Il2CppArray<::System::Single>* PlayerCardOffset; // 0x80
		::System::String* AIPath; // 0x88
		::Il2CppArray<::System::Single>* AvatarSelfShowOffset; // 0x90
		::System::String* WaitingAvatarHeadIconPath; // 0x98
		::System::String* AvatarMiniIconPath; // 0xA0
		::System::String* SideAvatarHeadIconPath; // 0xA8
		::System::String* UIAvatarModelPath; // 0xB0
		::System::String* AvatarCutinBgImgPath; // 0xB8
		::System::String* AvatarVOTag; // 0xC0
		::Il2CppArray<::System::Single>* AssistBgOffset; // 0xC8
		::System::String* AvatarSideIconPath; // 0xD0
		::System::String* JsonPath; // 0xD8
		::System::String* ActionAvatarHeadIconPath; // 0xE0
		::RPG::GameCore::FixPoint SPNeed; // 0xE8
		::System::UInt32 NatureID; // 0xF0
		::System::UInt32 MaxPromotion; // 0xF4
		::System::UInt32 MaxRank; // 0xF8
		::System::UInt32 AdventurePlayerID; // 0xFC
		::RPG::Client::TextID AvatarInitialSkinName; // 0x100
		::RPG::GameCore::AvatarBaseType AvatarBaseType; // 0x110
		::System::Boolean Release; // 0x114
		::System::UInt32 AvatarID; // 0x118
		::System::UInt32 ExpGroup; // 0x11C
		::RPG::GameCore::AttackDamageType DamageType; // 0x120
		::RPG::GameCore::CombatPowerAvatarRarityType Rarity; // 0x124
		::RPG::Client::TextID AvatarFullName; // 0x128
		::RPG::Client::TextID AvatarInitialSkinDesc; // 0x138
		::RPG::Client::TextID AvatarDesc; // 0x148
		::RPG::Client::TextID AvatarCutinIntroText; // 0x158
		::RPG::Client::TextID AvatarName; // 0x168

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

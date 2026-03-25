#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarSkinType.h"
#include "unitysdk/RPG/GameCore/PersonalizeShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AVATARSKINROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16FCFE30)
#define RPG_GAMECORE_AVATARSKINROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16FD0F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSkinRow_TypeDefinitionIndex = 11599;

	class AvatarSkinRow : public ::System::Object
	{
	public:
		::System::String* DressIconPath; // 0x10
		::System::String* DefaultAvatarModelPath; // 0x18
		::System::String* AvatarCutinBgImgPath; // 0x20
		::Il2CppArray<::System::Single>* AssistOffset; // 0x28
		::System::String* AvatarCutinImgPath; // 0x30
		::System::String* AvatarMiniIconPath; // 0x38
		::System::String* AvatarCutinFrontImgPath; // 0x40
		::System::String* AudioEventTag; // 0x48
		::System::String* WaitingAvatarHeadIconPath; // 0x50
		::System::String* SideAvatarHeadIconPath; // 0x58
		::System::String* AdventureDefaultAvatarHeadIconPath; // 0x60
		::System::String* AvatarSideIconPath; // 0x68
		::System::String* FreeStyleCharacterID; // 0x70
		::Il2CppArray<::System::Single>* AvatarDropOffset; // 0x78
		::System::String* SkinConfigPath; // 0x80
		::System::String* PlayerPrefabPath; // 0x88
		::System::String* ActionAvatarHeadIconPath; // 0x90
		::System::String* UIAvatarModelPath; // 0x98
		::System::String* ShopRecommendTabBgPath; // 0xA0
		::System::String* DefaultAvatarHeadIconPath; // 0xA8
		::System::String* AdventureCharacterConfigOverrideJsonPath; // 0xB0
		::Il2CppArray<::System::Single>* AvatarSelfShowOffset; // 0xB8
		::System::String* UltraSkillCutInPrefabPath; // 0xC0
		::System::String* ShopBgPath; // 0xC8
		::RPG::GameCore::PersonalizeShowType ShowType; // 0xD0
		::RPG::Client::TextID PlayerCardTitleText; // 0xD8
		::System::UInt32 ShowParam; // 0xE8
		::System::UInt32 PanelID; // 0xEC
		::RPG::Client::TextID AvatarSkinName; // 0xF0
		::System::UInt32 AvatarID; // 0x100
		::System::UInt32 IntroDataID; // 0x104
		::RPG::GameCore::AvatarSkinType Type; // 0x108
		::System::UInt32 ID; // 0x10C
		::RPG::Client::TextID AvatarNameOnDropSkin; // 0x110
		::RPG::Client::TextID AvatarSkinSynopsis; // 0x120
		::System::UInt32 PlayerCardID; // 0x130
		::System::UInt32 VideoID; // 0x134
		::RPG::Client::TextID AvatarSkinStory; // 0x138

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::AvatarSkinRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarSkinRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSKINROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

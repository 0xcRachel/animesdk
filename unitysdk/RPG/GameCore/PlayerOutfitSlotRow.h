#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/PlayerOutfitSlotType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PLAYEROUTFITSLOTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16D6B230)
#define RPG_GAMECORE_PLAYEROUTFITSLOTROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16D6B4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerOutfitSlotRow_TypeDefinitionIndex = 13180;

	class PlayerOutfitSlotRow : public ::System::Object
	{
	public:
		::System::String* SlotIconPath; // 0x10
		::System::String* VirtualCameraPath; // 0x18
		::System::UInt32 SlotTipsIntroID; // 0x20
		::System::UInt32 DefaultOutfitID; // 0x24
		::RPG::GameCore::PlayerOutfitSlotType SlotType; // 0x28
		::RPG::GameCore::AvatarBaseType LimitBaseType; // 0x2C
		::RPG::Client::TextID SlotName; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYEROUTFITSLOTROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::PlayerOutfitSlotRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PlayerOutfitSlotRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYEROUTFITSLOTROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

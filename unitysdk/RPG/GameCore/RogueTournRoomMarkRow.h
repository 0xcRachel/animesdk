#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournMarkType.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNROOMMARKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16ECDD70)
#define RPG_GAMECORE_ROGUETOURNROOMMARKROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16ECE080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournRoomMarkRow_TypeDefinitionIndex = 13620;

	class RogueTournRoomMarkRow : public ::System::Object
	{
	public:
		::System::String* RoomIconEffect; // 0x10
		::System::String* RoomTypeIcon; // 0x18
		::System::String* ToastIcon; // 0x20
		::RPG::Client::TextID RoomTypeDesc; // 0x28
		::RPG::Client::TextID RoomTypeName; // 0x38
		::RPG::GameCore::RogueTournRoomType RoomType; // 0x48
		::RPG::GameCore::RogueTournMarkType MarkType; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNROOMMARKROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueTournRoomMarkRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournRoomMarkRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNROOMMARKROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BACKGROUNDMUSICCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x168C7F40)
#define RPG_GAMECORE_BACKGROUNDMUSICCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x168C8700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BackGroundMusicConfigRow_TypeDefinitionIndex = 11633;

	class BackGroundMusicConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID UnlockDesc; // 0x10
		::RPG::Client::TextID MusicName; // 0x20
		::RPG::Client::TextID BGMDesc; // 0x30
		::System::Boolean Unlock; // 0x40
		::System::UInt32 GroupID; // 0x44
		::System::UInt32 ID; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKGROUNDMUSICCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BackGroundMusicConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BackGroundMusicConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKGROUNDMUSICCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

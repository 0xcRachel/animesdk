#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BackGroundMusicGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_BACKGROUNDMUSICGROUPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x168C8710)
#define RPG_GAMECORE_BACKGROUNDMUSICGROUPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x168C8900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BackGroundMusicGroupConfigRow_TypeDefinitionIndex = 11630;

	class BackGroundMusicGroupConfigRow : public ::System::Object
	{
	public:
		::System::String* GroupIcon; // 0x10
		::RPG::Client::TextID GroupName; // 0x18
		::RPG::GameCore::BackGroundMusicGroupType Type; // 0x28
		::System::UInt32 ID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKGROUNDMUSICGROUPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::BackGroundMusicGroupConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::BackGroundMusicGroupConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKGROUNDMUSICGROUPCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

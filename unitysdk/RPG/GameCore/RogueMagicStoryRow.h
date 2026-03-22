#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMagicStoryCategory.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMAGICSTORYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16E88E30)
#define RPG_GAMECORE_ROGUEMAGICSTORYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16E89100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicStoryRow_TypeDefinitionIndex = 13547;

	class RogueMagicStoryRow : public ::System::Object
	{
	public:
		::System::String* LevelGraphPath; // 0x10
		::System::String* StoryImage; // 0x18
		::System::UInt32 UnLockDisplay; // 0x20
		::System::UInt32 StoryID; // 0x24
		::RPG::Client::TextID StoryName; // 0x28
		::RPG::GameCore::RogueMagicStoryCategory StoryCategory; // 0x38
		::System::Boolean IsHide; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSTORYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueMagicStoryRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueMagicStoryRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSTORYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

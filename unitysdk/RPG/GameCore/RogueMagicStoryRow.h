#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMagicStoryCategory.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMAGICSTORYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19970270)
#define RPG_GAMECORE_ROGUEMAGICSTORYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19970540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicStoryRow_TypeDefinitionIndex = 14097;

	class RogueMagicStoryRow : public ::System::Object
	{
	public:
		::System::String* LevelGraphPath; // 0x10
		::System::String* StoryImage; // 0x18
		::RPG::Client::TextID StoryName; // 0x20
		::System::UInt32 UnLockDisplay; // 0x30
		::RPG::GameCore::RogueMagicStoryCategory StoryCategory; // 0x34
		::System::UInt32 StoryID; // 0x38
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

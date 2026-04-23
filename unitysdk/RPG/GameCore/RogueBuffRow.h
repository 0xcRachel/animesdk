#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueBuffAeonType.h"
#include "unitysdk/RPG/GameCore/RogueBuffCategory.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ROGUEBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19242190)
#define RPG_GAMECORE_ROGUEBUFFROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19242B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueBuffRow_TypeDefinitionIndex = 13932;

	class RogueBuffRow : public ::System::Object
	{
	public:
		::System::String* AeonCrossIcon; // 0x10
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x18
		::Il2CppArray<::System::UInt32>* UnlockIDList; // 0x20
		::System::UInt32 RogueBuffType; // 0x28
		::RPG::GameCore::RogueBuffCategory RogueBuffCategory; // 0x2C
		::RPG::Client::TextID HandbookUnlockDesc; // 0x30
		::System::UInt32 RogueBuffTag; // 0x40
		::System::UInt32 MazeBuffLevel; // 0x44
		::RPG::GameCore::RogueBuffAeonType BattleEventBuffType; // 0x48
		::System::UInt32 ActivityModuleID; // 0x4C
		::System::UInt32 RogueVersion; // 0x50
		::System::UInt32 AeonID; // 0x54
		::System::UInt32 MazeBuffID; // 0x58
		::System::Boolean IsShow; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueBuffRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueBuffRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

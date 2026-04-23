#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYTELEVISIONSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18DADF40)
#define RPG_GAMECORE_ACTIVITYTELEVISIONSTAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18DAE620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityTelevisionStageRow_TypeDefinitionIndex = 11796;

	class ActivityTelevisionStageRow : public ::System::Object
	{
	public:
		::System::String* OriginalOutlineImagePath; // 0x10
		::System::String* OriginalMiniImagePath; // 0x18
		::System::String* ImagePath; // 0x20
		::System::String* MiniImagePath; // 0x28
		::System::String* OriginalImagePath; // 0x30
		::System::UInt32 TelevisionID; // 0x38
		::System::UInt32 MappingInfo; // 0x3C
		::RPG::Client::TextID ChannelName; // 0x40
		::System::UInt32 MissionID; // 0x50
		::System::UInt32 QuestGroupID; // 0x54
		::System::UInt32 Season; // 0x58
		::System::UInt32 GotoID; // 0x5C
		::RPG::Client::TextID Desc; // 0x60
		::RPG::Client::TextID OriginalStageName; // 0x70
		::System::UInt32 EntranceID; // 0x80
		::System::UInt32 ActivityModuleID; // 0x84
		::RPG::Client::TextID OriginalDesc; // 0x88
		::RPG::Client::TextID StageName; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONSTAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityTelevisionStageRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityTelevisionStageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONSTAGEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEAEONLEVELCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A9CD720)
#define RPG_GAMECORE_ROGUEAEONLEVELCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9CDFB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAeonLevelConfigRow_TypeDefinitionIndex = 14106;

	class RogueAeonLevelConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID AeonStory_Name; // 0x10
		::RPG::Client::TextID AeonStory; // 0x20
		::System::UInt32 Reward; // 0x30
		::System::UInt32 AeonStoryID; // 0x34
		::System::UInt32 KeyPointRewardItemID; // 0x38
		::System::UInt32 Level; // 0x3C
		::System::UInt32 RogueAeonID; // 0x40
		::System::UInt32 UnlockID; // 0x44
		::System::UInt32 Exp; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONLEVELCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueAeonLevelConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueAeonLevelConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONLEVELCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

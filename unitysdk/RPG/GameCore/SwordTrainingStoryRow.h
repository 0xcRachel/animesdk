#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SwordTrainingStoryType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGSTORYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x199C5BD0)
#define RPG_GAMECORE_SWORDTRAININGSTORYROW__CTOR_OFFSET UNITYSDK_OFFSET(0x199C61F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingStoryRow_TypeDefinitionIndex = 11782;

	class SwordTrainingStoryRow : public ::System::Object
	{
	public:
		::System::String* StoryImage; // 0x10
		::Il2CppArray<::System::UInt32>* EffectIDList; // 0x18
		::System::UInt32 PartnerID; // 0x20
		::System::UInt32 MissionID; // 0x24
		::RPG::GameCore::SwordTrainingStoryType StoryType; // 0x28
		::System::UInt32 RepeatPerformanceID; // 0x2C
		::RPG::Client::TextID StoryDesc; // 0x30
		::RPG::Client::TextID EffectDesc; // 0x40
		::System::UInt32 Condition; // 0x50
		::System::UInt32 PerformanceID; // 0x54
		::RPG::Client::TextID ConditionDesc; // 0x58
		::RPG::Client::TextID StoryTitle; // 0x68
		::RPG::Client::TextID StoryHint; // 0x78
		::System::UInt32 StoryID; // 0x88
		::System::UInt32 ExamID; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTORYROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::SwordTrainingStoryRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SwordTrainingStoryRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTORYROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

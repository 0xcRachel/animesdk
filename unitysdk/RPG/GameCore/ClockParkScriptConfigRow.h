#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ClockParkScriptType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ClockParkUnlockCost; }
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKSCRIPTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x194DFE30)
#define RPG_GAMECORE_CLOCKPARKSCRIPTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x194E0990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkScriptConfigRow_TypeDefinitionIndex = 10666;

	class ClockParkScriptConfigRow : public ::System::Object
	{
	public:
		::System::String* ScriptResultLogoMaskPath; // 0x10
		::Il2CppArray<::System::UInt32>* TalentCanBeUsed; // 0x18
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* ScriptUnlockCondition; // 0x20
		::RPG::GameCore::ClockParkUnlockCost* ScriptUnlockCost; // 0x28
		::System::String* IconPath; // 0x30
		::System::String* ImgPath; // 0x38
		::System::String* ScriptBGM; // 0x40
		::System::String* ScriptPostPrefabPath; // 0x48
		::System::String* PrefabPath; // 0x50
		::System::UInt32 ScriptEndingUnlockChapterID; // 0x58
		::System::UInt32 ScriptGamePlayGuideGroupID; // 0x5C
		::RPG::Client::TextID ScriptDesc; // 0x60
		::RPG::Client::TextID ScriptTitle; // 0x70
		::RPG::Client::TextID ScriptCharacteristic; // 0x80
		::System::UInt32 ActivityStudioScriptID; // 0x90
		::RPG::GameCore::ClockParkScriptType ScriptType; // 0x94
		::RPG::Client::TextID ScriptGamePlayDesc; // 0x98
		::System::UInt32 ActivityModuleID; // 0xA8
		::System::UInt32 StartChapterID; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSCRIPTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ClockParkScriptConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkScriptConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSCRIPTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

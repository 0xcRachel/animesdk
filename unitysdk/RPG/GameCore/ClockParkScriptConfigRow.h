#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ClockParkScriptType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ClockParkUnlockCost; }
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKSCRIPTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1A319DF0)
#define RPG_GAMECORE_CLOCKPARKSCRIPTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A31A960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkScriptConfigRow_TypeDefinitionIndex = 10722;

	class ClockParkScriptConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* ScriptUnlockCondition; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* PrefabPath; // 0x20
		::System::String* ImgPath; // 0x28
		::System::String* ScriptPostPrefabPath; // 0x30
		::RPG::GameCore::ClockParkUnlockCost* ScriptUnlockCost; // 0x38
		::System::String* ScriptBGM; // 0x40
		::System::String* ScriptResultLogoMaskPath; // 0x48
		::Il2CppArray<::System::UInt32>* TalentCanBeUsed; // 0x50
		::RPG::Client::TextID ScriptGamePlayDesc; // 0x58
		::RPG::Client::TextID ScriptDesc; // 0x68
		::System::UInt32 ActivityModuleID; // 0x78
		::RPG::GameCore::ClockParkScriptType ScriptType; // 0x7C
		::RPG::Client::TextID ScriptCharacteristic; // 0x80
		::System::UInt32 ActivityStudioScriptID; // 0x90
		::System::UInt32 ScriptGamePlayGuideGroupID; // 0x94
		::System::UInt32 ScriptEndingUnlockChapterID; // 0x98
		::System::UInt32 StartChapterID; // 0x9C
		::RPG::Client::TextID ScriptTitle; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSCRIPTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ClockParkScriptConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ClockParkScriptConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSCRIPTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

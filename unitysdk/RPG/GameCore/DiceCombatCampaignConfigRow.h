#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C_1;
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17171D40)
#define RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17172960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatCampaignConfigRow_TypeDefinitionIndex = 10559;

	class DiceCombatCampaignConfigRow : public ::System::Object
	{
	public:
		::System::String* MainPageIMGPath; // 0x10
		::System::String* MainPageSilhouettePath; // 0x18
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_1*>* RuleGroupMapList; // 0x20
		::Il2CppArray<::System::UInt32>* DisplayProgress; // 0x28
		::System::String* ProgressIMGPath; // 0x30
		::System::String* IMGPath; // 0x38
		::RPG::Client::TextID ExitProgress; // 0x40
		::RPG::Client::TextID WinBattle; // 0x50
		::RPG::Client::TextID EnterProgress; // 0x60
		::RPG::Client::TextID ProgressTitle; // 0x70
		::System::UInt32 Progress; // 0x80
		::System::UInt32 GroupEntityID; // 0x84
		::RPG::Client::TextID Name; // 0x88
		::System::UInt32 SubMissonID; // 0x98
		::RPG::Client::TextID LoseBattle; // 0xA0
		::System::UInt32 DiceCampaignID; // 0xB0
		::System::Boolean MustLose; // 0xB4
		::System::Boolean ExitMainPage; // 0xB5

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DiceCombatCampaignConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DiceCombatCampaignConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

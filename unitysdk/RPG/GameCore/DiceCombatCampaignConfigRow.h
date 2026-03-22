#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A88C3AAF0DD46F4C_1;
namespace System { class String; }

#define RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16A331A0)
#define RPG_GAMECORE_DICECOMBATCAMPAIGNCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16A33DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatCampaignConfigRow_TypeDefinitionIndex = 10491;

	class DiceCombatCampaignConfigRow : public ::System::Object
	{
	public:
		::System::String* ProgressIMGPath; // 0x10
		::Il2CppArray<::Class_1_A88C3AAF0DD46F4C_1*>* RuleGroupMapList; // 0x18
		::System::String* MainPageSilhouettePath; // 0x20
		::System::String* MainPageIMGPath; // 0x28
		::Il2CppArray<::System::UInt32>* DisplayProgress; // 0x30
		::System::String* IMGPath; // 0x38
		::System::Boolean MustLose; // 0x40
		::System::Boolean ExitMainPage; // 0x41
		::System::UInt32 SubMissonID; // 0x44
		::RPG::Client::TextID ProgressTitle; // 0x48
		::System::UInt32 GroupEntityID; // 0x58
		::RPG::Client::TextID WinBattle; // 0x60
		::System::UInt32 Progress; // 0x70
		::System::UInt32 DiceCampaignID; // 0x74
		::RPG::Client::TextID Name; // 0x78
		::RPG::Client::TextID LoseBattle; // 0x88
		::RPG::Client::TextID ExitProgress; // 0x98
		::RPG::Client::TextID EnterProgress; // 0xA8

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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityPanelFinishType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYPANELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19533DE0)
#define RPG_GAMECORE_ACTIVITYPANELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19534AC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityPanelRow_TypeDefinitionIndex = 10762;

	class ActivityPanelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x10
		::System::String* FinishConditions; // 0x18
		::System::String* TabIcon; // 0x20
		::Il2CppArray<::System::UInt32>* ActivityTagList; // 0x28
		::System::String* UnlockConditions; // 0x30
		::System::String* UIPrefab; // 0x38
		::RPG::Client::TextID PanelDesc; // 0x40
		::RPG::Client::TextID TabName; // 0x50
		::RPG::Client::TextID TagDesc; // 0x60
		::RPG::Client::TextID PanelBrief; // 0x70
		::RPG::Client::TextID TitleName; // 0x80
		::System::UInt32 PanelID; // 0x90
		::System::UInt32 SortWeight; // 0x94
		::RPG::Client::TextID IntroDesc; // 0x98
		::System::UInt32 IsSocialShow; // 0xA8
		::RPG::GameCore::ActivityPanelFinishType FinishType; // 0xAC
		::System::Boolean IsSkipSwitchStoryLine; // 0xB0
		::System::Boolean DisplayItemManualSort; // 0xB1
		::System::Boolean DailyHint; // 0xB2
		::System::UInt32 ActivityThemeID; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityPanelRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityPanelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}

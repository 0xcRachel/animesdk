#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityPanelFinishType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYPANELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F18180)
#define RPG_GAMECORE_ACTIVITYPANELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F18E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityPanelRow_TypeDefinitionIndex = 10482;

	class ActivityPanelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x10
		::System::String* UnlockConditions; // 0x18
		::System::String* FinishConditions; // 0x20
		::Il2CppArray<::System::UInt32>* ActivityTagList; // 0x28
		::System::String* UIPrefab; // 0x30
		::System::String* TabIcon; // 0x38
		::RPG::Client::TextID TitleName; // 0x40
		::RPG::Client::TextID PanelBrief; // 0x50
		::System::UInt32 SortWeight; // 0x60
		::System::UInt32 PanelID; // 0x64
		::System::UInt32 ActivityThemeID; // 0x68
		::RPG::GameCore::ActivityPanelFinishType FinishType; // 0x6C
		::RPG::Client::TextID IntroDesc; // 0x70
		::RPG::Client::TextID PanelDesc; // 0x80
		::System::Boolean DisplayItemManualSort; // 0x90
		::System::Boolean IsSkipSwitchStoryLine; // 0x91
		::System::Boolean DailyHint; // 0x92
		::RPG::Client::TextID TagDesc; // 0x98
		::RPG::Client::TextID TabName; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityPanelRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityPanelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPANELROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

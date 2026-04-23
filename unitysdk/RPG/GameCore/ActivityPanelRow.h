#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityPanelFinishType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYPANELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18D98A30)
#define RPG_GAMECORE_ACTIVITYPANELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18D99700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityPanelRow_TypeDefinitionIndex = 10706;

	class ActivityPanelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x10
		::System::String* FinishConditions; // 0x18
		::Il2CppArray<::System::UInt32>* ActivityTagList; // 0x20
		::System::String* UnlockConditions; // 0x28
		::System::String* UIPrefab; // 0x30
		::System::String* TabIcon; // 0x38
		::RPG::GameCore::ActivityPanelFinishType FinishType; // 0x40
		::System::Boolean DailyHint; // 0x44
		::System::Boolean IsSkipSwitchStoryLine; // 0x45
		::System::Boolean DisplayItemManualSort; // 0x46
		::RPG::Client::TextID TitleName; // 0x48
		::RPG::Client::TextID IntroDesc; // 0x58
		::RPG::Client::TextID TagDesc; // 0x68
		::RPG::Client::TextID TabName; // 0x78
		::RPG::Client::TextID PanelBrief; // 0x88
		::System::UInt32 IsSocialShow; // 0x98
		::System::UInt32 PanelID; // 0x9C
		::RPG::Client::TextID PanelDesc; // 0xA0
		::System::UInt32 SortWeight; // 0xB0
		::System::UInt32 ActivityThemeID; // 0xB4

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

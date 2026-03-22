#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityCountRefreshType.h"
#include "unitysdk/RPG/GameCore/ActivityFarmMultipleDropType.h"
#include "unitysdk/RPG/GameCore/MultipleDropTypeConfig.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16790D80)
#define RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16791890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFarmMultipleDropRow_TypeDefinitionIndex = 10651;

	class ActivityFarmMultipleDropRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::MultipleDropTypeConfig>* MultipleDropTypeList; // 0x10
		::RPG::GameCore::ActivityCountRefreshType CountRefreshType; // 0x18
		::RPG::GameCore::ActivityFarmMultipleDropType Type; // 0x1C
		::RPG::Client::TextID HintText; // 0x20
		::RPG::Client::TextID BannerText; // 0x30
		::System::UInt32 ActivityModuleID; // 0x40
		::System::UInt32 ID; // 0x44
		::RPG::Client::TextID ActivityPanelBannerText; // 0x48
		::RPG::Client::TextID NameText; // 0x58
		::RPG::Client::TextID LabelText; // 0x68
		::System::UInt32 Priority; // 0x78
		::System::UInt32 ActivityThemeID; // 0x7C
		::System::UInt32 CountValue; // 0x80
		::System::UInt32 DropMultiple; // 0x84
		::RPG::Client::TextID MappingInfoBannerText; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityFarmMultipleDropRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityFarmMultipleDropRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

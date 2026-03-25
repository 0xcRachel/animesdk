#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ActivityCountRefreshType.h"
#include "unitysdk/RPG/GameCore/ActivityFarmMultipleDropType.h"
#include "unitysdk/RPG/GameCore/MultipleDropTypeConfig.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16EC7FD0)
#define RPG_GAMECORE_ACTIVITYFARMMULTIPLEDROPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16EC8AE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFarmMultipleDropRow_TypeDefinitionIndex = 10719;

	class ActivityFarmMultipleDropRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::MultipleDropTypeConfig>* MultipleDropTypeList; // 0x10
		::RPG::Client::TextID LabelText; // 0x18
		::RPG::Client::TextID NameText; // 0x28
		::RPG::Client::TextID ActivityPanelBannerText; // 0x38
		::RPG::Client::TextID HintText; // 0x48
		::System::UInt32 ActivityModuleID; // 0x58
		::System::UInt32 Priority; // 0x5C
		::RPG::Client::TextID BannerText; // 0x60
		::RPG::GameCore::ActivityCountRefreshType CountRefreshType; // 0x70
		::System::UInt32 ActivityThemeID; // 0x74
		::System::UInt32 ID; // 0x78
		::System::UInt32 DropMultiple; // 0x7C
		::System::UInt32 CountValue; // 0x80
		::RPG::GameCore::ActivityFarmMultipleDropType Type; // 0x84
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

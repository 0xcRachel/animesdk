#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTACTIVITYRESIDENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16B19220)
#define RPG_GAMECORE_GRIDFIGHTACTIVITYRESIDENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16B19720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActivityResidentConfigRow_TypeDefinitionIndex = 12211;

	class GridFightActivityResidentConfigRow : public ::System::Object
	{
	public:
		::System::String* IntroGuideImg; // 0x10
		::System::String* TitleIconPath; // 0x18
		::Il2CppArray<::System::UInt32>* ActivityTagList; // 0x20
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x28
		::System::UInt32 RelatedActivityPanelID; // 0x30
		::System::Boolean IsShowRemainTime; // 0x34
		::System::UInt32 ActivityModuleID; // 0x38
		::System::UInt32 SortWeight; // 0x3C
		::RPG::Client::TextID ResidentDesc; // 0x40
		::RPG::Client::TextID ResidentBrief; // 0x50
		::RPG::Client::TextID ResidentName; // 0x60
		::System::UInt32 ActivityID; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIVITYRESIDENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::GridFightActivityResidentConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightActivityResidentConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIVITYRESIDENTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

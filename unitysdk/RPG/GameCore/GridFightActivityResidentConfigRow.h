#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTACTIVITYRESIDENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19565420)
#define RPG_GAMECORE_GRIDFIGHTACTIVITYRESIDENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19565900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActivityResidentConfigRow_TypeDefinitionIndex = 12712;

	class GridFightActivityResidentConfigRow : public ::System::Object
	{
	public:
		::System::String* TitleIconPath; // 0x10
		::Il2CppArray<::System::UInt32>* ActivityTagList; // 0x18
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x20
		::System::String* IntroGuideImg; // 0x28
		::System::UInt32 SortWeight; // 0x30
		::System::Boolean IsShowRemainTime; // 0x34
		::RPG::Client::TextID ResidentDesc; // 0x38
		::RPG::Client::TextID ResidentBrief; // 0x48
		::System::UInt32 ActivityModuleID; // 0x58
		::System::UInt32 RelatedActivityPanelID; // 0x5C
		::System::UInt32 ActivityID; // 0x60
		::RPG::Client::TextID ResidentName; // 0x68

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

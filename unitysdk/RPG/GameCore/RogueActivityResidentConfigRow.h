#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEACTIVITYRESIDENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16E10FF0)
#define RPG_GAMECORE_ROGUEACTIVITYRESIDENTCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16E115A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActivityResidentConfigRow_TypeDefinitionIndex = 13356;

	class RogueActivityResidentConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* DisplayItemList; // 0x10
		::System::String* TitleIconPath; // 0x18
		::Il2CppArray<::System::UInt32>* ActivityTagList; // 0x20
		::System::String* IntroGuideImg; // 0x28
		::System::UInt32 IntroID; // 0x30
		::System::UInt32 RelatedActivityPanelID; // 0x34
		::RPG::Client::TextID ResidentName; // 0x38
		::System::Boolean IsShowRemainTime; // 0x48
		::System::UInt32 SortWeight; // 0x4C
		::RPG::Client::TextID ResidentDesc; // 0x50
		::RPG::Client::TextID ResidentBrief; // 0x60
		::System::UInt32 ActivityID; // 0x70
		::RPG::GameCore::RogueSubMode SubMode; // 0x74
		::System::UInt32 ActivityModuleID; // 0x78
		::System::UInt32 UnlockID; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIVITYRESIDENTCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::RogueActivityResidentConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActivityResidentConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTIVITYRESIDENTCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

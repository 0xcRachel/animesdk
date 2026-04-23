#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DOCUMENTARYPHASEQUESTPANELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x191349A0)
#define RPG_GAMECORE_DOCUMENTARYPHASEQUESTPANELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19134C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DocumentaryPhaseQuestPanelRow_TypeDefinitionIndex = 10720;

	class DocumentaryPhaseQuestPanelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::RPG::Client::TextID PanelDesc; // 0x18
		::System::UInt32 ExtraQuest; // 0x28
		::System::UInt32 NextPhase; // 0x2C
		::System::UInt32 PhaseID; // 0x30
		::RPG::Client::TextID PanelTitle; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DOCUMENTARYPHASEQUESTPANELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::DocumentaryPhaseQuestPanelRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DocumentaryPhaseQuestPanelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DOCUMENTARYPHASEQUESTPANELROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}

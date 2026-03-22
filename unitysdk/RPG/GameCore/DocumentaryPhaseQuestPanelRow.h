#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DOCUMENTARYPHASEQUESTPANELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16A45E90)
#define RPG_GAMECORE_DOCUMENTARYPHASEQUESTPANELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16A46150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DocumentaryPhaseQuestPanelRow_TypeDefinitionIndex = 10426;

	class DocumentaryPhaseQuestPanelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::UInt32 NextPhase; // 0x18
		::System::UInt32 PhaseID; // 0x1C
		::System::UInt32 ExtraQuest; // 0x20
		::RPG::Client::TextID PanelDesc; // 0x28
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

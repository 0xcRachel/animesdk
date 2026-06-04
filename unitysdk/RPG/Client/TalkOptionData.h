#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ITalkOptionExtData; }
namespace RPG::Client { class RogueTalkOptionDataExt; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define RPG_CLIENT_TALKOPTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x180B5580)

namespace RPG::Client
{
	inline static constexpr unsigned int TalkOptionData_TypeDefinitionIndex = 63657;

	class TalkOptionData : public ::System::Object
	{
	public:
		::RPG::Client::RogueTalkOptionDataExt* RogueExt; // 0x10
		::RPG::Client::ITalkOptionExtData* ExtData; // 0x18
		::RPG::GameCore::JsonEnum* OptionIconType; // 0x20
		::System::String* IconPath; // 0x28
		::System::UInt32 MenuItemExtraInfo; // 0x30
		::System::Boolean IsValid; // 0x34
		::System::Boolean HasBeenTriggeredLogic; // 0x35
		::System::Boolean DeleteAfterSelection; // 0x36
		::System::UInt32 DialogueGroupID; // 0x38
		::System::UInt32 SubMissionIDForMenuItem; // 0x3C
		::System::Int32 InfoIndex; // 0x40
		::RPG::Client::TextID Text; // 0x48
		::System::Boolean HasTriggered; // 0x58
		::System::Boolean IsSkipDefault; // 0x59
		::System::UInt32 TalkSentenceID; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKOPTIONDATA__CTOR_OFFSET))(this);
		}
	};
}

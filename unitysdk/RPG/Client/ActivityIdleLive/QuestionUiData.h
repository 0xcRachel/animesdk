#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class GiftSenderUiData; }
namespace RPG::GameCore { class IdleLiveQuestionRow; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONUIDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1730F5E0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONUIDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1730F5D0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONUIDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0x1730F5C0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONUIDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1730F6A0)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int QuestionUiData_TypeDefinitionIndex = 69491;

	class QuestionUiData : public ::System::Object
	{
	public:
		::System::String* SenderIcon; // 0x10
		::System::String* Option2Icon; // 0x18
		::System::String* Option1Icon; // 0x20
		::RPG::Client::ActivityIdleLive::GiftSenderUiData* SenderUiData; // 0x28
		::System::Single Duration; // 0x30
		::System::UInt32 Option2Id; // 0x34
		::System::UInt32 _Uid_k__BackingField; // 0x38
		::System::UInt32 _Id_k__BackingField; // 0x3C
		::RPG::Client::TextID Content; // 0x40
		::System::Boolean IsShow; // 0x50
		::System::UInt32 Option1Id; // 0x54

		::System::Void _ctor(::RPG::GameCore::IdleLiveQuestionRow* questionRow, ::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveQuestionRow*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONUIDATA__CTOR_OFFSET))(this, questionRow, uid);
		}

		::System::UInt32 get_Uid()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONUIDATA_GET_UID_OFFSET))(this);
		}

		::System::UInt32 get_Id()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONUIDATA_GET_ID_OFFSET))(this);
		}

		static ::RPG::Client::ActivityIdleLive::QuestionUiData* Create(::System::UInt32 id, ::System::UInt32 uid)
		{
			return ((::RPG::Client::ActivityIdleLive::QuestionUiData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_QUESTIONUIDATA_CREATE_OFFSET))(id, uid);
		}
	};
}

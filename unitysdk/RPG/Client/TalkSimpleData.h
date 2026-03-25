#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_TALKSIMPLEDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xA553770)
#define RPG_CLIENT_TALKSIMPLEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA553660)
#define RPG_CLIENT_TALKSIMPLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA553760)

namespace RPG::Client
{
	inline static constexpr unsigned int TalkSimpleData_TypeDefinitionIndex = 55534;

	class TalkSimpleData : public ::System::Object
	{
	public:
		::System::UInt32 TalkSentenceID; // 0x10
		::System::UInt32 VoiceID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKSIMPLEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TalkSimpleData* Create(::System::UInt32 talkSentenceID)
		{
			return ((::RPG::Client::TalkSimpleData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKSIMPLEDATA_CREATE_OFFSET))(talkSentenceID);
		}

		static ::RPG::Client::TalkSimpleData* Create_1(::System::UInt32 talkSentenceID, ::System::UInt32 voiceID)
		{
			return ((::RPG::Client::TalkSimpleData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TALKSIMPLEDATA_CREATE_1_OFFSET))(talkSentenceID, voiceID);
		}
	};
}

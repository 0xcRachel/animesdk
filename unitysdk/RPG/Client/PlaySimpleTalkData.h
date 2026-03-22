#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_PLAYSIMPLETALKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B10B80)

namespace RPG::Client
{
	inline static constexpr unsigned int PlaySimpleTalkData_TypeDefinitionIndex = 53983;

	class PlaySimpleTalkData : public ::System::Object
	{
	public:
		::System::Boolean KeepDisplay; // 0x10
		::System::UInt32 TalkSentenceID; // 0x14
		::System::UInt32 VoiceID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYSIMPLETALKDATA__CTOR_OFFSET))(this);
		}
	};
}

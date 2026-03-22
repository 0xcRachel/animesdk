#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MessageContentBlock.h"
#include "unitysdk/RPG/Client/MessageContentBlock_BlockType.h"

class Class_0_16E4307DCC419505_571;

#define RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x96F7390)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK_GET_RECOMMENDLINEUPDATA_OFFSET UNITYSDK_OFFSET(0x96F7430)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x96F7190)
#define RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x96F71A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MessageContentChallengePeakTeamBlock_TypeDefinitionIndex = 50211;

	class MessageContentChallengePeakTeamBlock : public ::RPG::Client::MessageContentBlock
	{
	public:
		::Class_0_16E4307DCC419505_571* _RecommendLineupData_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK__CTOR_OFFSET))(this);
		}

		::RPG::Client::MessageContentBlock_BlockType get_Type()
		{
			return ((::RPG::Client::MessageContentBlock_BlockType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK_GET_TYPE_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::MessageContentBlock* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK_EQUALS_OFFSET))(this, other);
		}

		::Class_0_16E4307DCC419505_571* get_RecommendLineupData()
		{
			return ((::Class_0_16E4307DCC419505_571*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MESSAGECONTENTCHALLENGEPEAKTEAMBLOCK_GET_RECOMMENDLINEUPDATA_OFFSET))(this);
		}
	};
}

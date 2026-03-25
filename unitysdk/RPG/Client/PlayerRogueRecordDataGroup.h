#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4C5FA33230DE3480;
namespace RPG::Client { class PlayerChessRogueRecordData; }
namespace RPG::Client { class PlayerMagicRogueRecordData; }
namespace RPG::Client { class PlayerNousChessRogueRecordData; }
namespace RPG::Client { class PlayerRogueTournRecordData; }

#define RPG_CLIENT_PLAYERROGUERECORDDATAGROUP_CREATE_OFFSET UNITYSDK_OFFSET(0x9FFA050)
#define RPG_CLIENT_PLAYERROGUERECORDDATAGROUP_SYNCDATA_OFFSET UNITYSDK_OFFSET(0x9FF9D80)
#define RPG_CLIENT_PLAYERROGUERECORDDATAGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x9FFA0C0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerRogueRecordDataGroup_TypeDefinitionIndex = 52193;

	class PlayerRogueRecordDataGroup : public ::System::Object
	{
	public:
		::RPG::Client::PlayerMagicRogueRecordData* MagicRogueRecordData; // 0x10
		::RPG::Client::PlayerRogueTournRecordData* TournRogueRecordData; // 0x18
		::RPG::Client::PlayerChessRogueRecordData* ChessRogueRecordData; // 0x20
		::RPG::Client::PlayerNousChessRogueRecordData* NousChessRogueRecordData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATAGROUP__CTOR_OFFSET))(this);
		}

		::System::Void SyncData(::Class_1_4C5FA33230DE3480* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4C5FA33230DE3480*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATAGROUP_SYNCDATA_OFFSET))(this, info);
		}

		static ::RPG::Client::PlayerRogueRecordDataGroup* Create()
		{
			return ((::RPG::Client::PlayerRogueRecordDataGroup*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATAGROUP_CREATE_OFFSET))();
		}
	};
}

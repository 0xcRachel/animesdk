#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlayerChallengeRecordData.h"

class Class_1_F381659723E3F143;

#define RPG_CLIENT_PLAYERBOSSRECORDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9B168A0)
#define RPG_CLIENT_PLAYERBOSSRECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B16840)
#define RPG_CLIENT_PLAYERBOSSRECORDDATA___IFIXBASEPROXY_SYNC_OFFSET UNITYSDK_OFFSET(0x9B169B0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerBossRecordData_TypeDefinitionIndex = 51051;

	class PlayerBossRecordData : public ::RPG::Client::PlayerChallengeRecordData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOSSRECORDDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_F381659723E3F143* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F381659723E3F143*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOSSRECORDDATA_SYNC_OFFSET))(this, info);
		}

		::System::Void __iFixBaseProxy_Sync(::Class_1_F381659723E3F143* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F381659723E3F143*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOSSRECORDDATA___IFIXBASEPROXY_SYNC_OFFSET))(this, P0);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeRoyalePlayerData; }
namespace RPG::Client { class MatchThreeRoyalePvpManager; }

#define RPG_CLIENT_MATCHTHREEROYALEDATAMANAGER_CREATE_OFFSET UNITYSDK_OFFSET(0x17EF3C20)
#define RPG_CLIENT_MATCHTHREEROYALEDATAMANAGER_GET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0x17EF3C00)
#define RPG_CLIENT_MATCHTHREEROYALEDATAMANAGER_GET_ROYALEPVPMANAGER_OFFSET UNITYSDK_OFFSET(0x17EF3BE0)
#define RPG_CLIENT_MATCHTHREEROYALEDATAMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x17EF3C90)
#define RPG_CLIENT_MATCHTHREEROYALEDATAMANAGER_ISSCOREREACHLIMIT_OFFSET UNITYSDK_OFFSET(0x17EF3E80)
#define RPG_CLIENT_MATCHTHREEROYALEDATAMANAGER_SET_PLAYERDATA_OFFSET UNITYSDK_OFFSET(0x17EF3C10)
#define RPG_CLIENT_MATCHTHREEROYALEDATAMANAGER_SET_ROYALEPVPMANAGER_OFFSET UNITYSDK_OFFSET(0x17EF3BF0)
#define RPG_CLIENT_MATCHTHREEROYALEDATAMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x17EF3C80)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeRoyaleDataManager_TypeDefinitionIndex = 60829;

	class MatchThreeRoyaleDataManager : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeRoyalePlayerData* _PlayerData_k__BackingField; // 0x10
		::RPG::Client::MatchThreeRoyalePvpManager* _RoyalePvpManager_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALEDATAMANAGER__CTOR_OFFSET))(this);
		}

		::RPG::Client::MatchThreeRoyalePvpManager* get_RoyalePvpManager()
		{
			return ((::RPG::Client::MatchThreeRoyalePvpManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALEDATAMANAGER_GET_ROYALEPVPMANAGER_OFFSET))(this);
		}

		::System::Void set_RoyalePvpManager(::RPG::Client::MatchThreeRoyalePvpManager* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeRoyalePvpManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALEDATAMANAGER_SET_ROYALEPVPMANAGER_OFFSET))(this, value);
		}

		::RPG::Client::MatchThreeRoyalePlayerData* get_PlayerData()
		{
			return ((::RPG::Client::MatchThreeRoyalePlayerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALEDATAMANAGER_GET_PLAYERDATA_OFFSET))(this);
		}

		::System::Void set_PlayerData(::RPG::Client::MatchThreeRoyalePlayerData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeRoyalePlayerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALEDATAMANAGER_SET_PLAYERDATA_OFFSET))(this, value);
		}

		static ::RPG::Client::MatchThreeRoyaleDataManager* Create()
		{
			return ((::RPG::Client::MatchThreeRoyaleDataManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALEDATAMANAGER_CREATE_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALEDATAMANAGER_INIT_OFFSET))(this);
		}

		::System::Boolean IsScoreReachLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEROYALEDATAMANAGER_ISSCOREREACHLIMIT_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChimeraDuelGameSessionState.h"
#include "unitysdk/System/Object.h"

class Class_1_2135BD0826D34A80;
class Class_1_405D9D5C58031AA5;
class Class_1_E473F14F738B1BF5_10;
class Class_1_F39C4BFF3EB82CCB;
namespace RPG::Client { class ChimeraDuelGameData; }
namespace RPG::Client { class ChimeraDuelGameSessionBattle; }
namespace RPG::Client { class ChimeraDuelGameSessionCache; }
namespace RPG::Client { class ChimeraDuelGameSessionCurrentRound; }
namespace RPG::Client { class ChimeraDuelGameSessionShop; }
namespace RPG::Client { class ChimeraDuelGameSessionTeam; }
namespace RPG::Client { class ChimeraDuelPvpTeamSnapshot; }
namespace RPG::Client { class IChimeraDuelChallengeTeam; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELGAMESESSION_CONSUMEDELAYEDCHANGES_OFFSET UNITYSDK_OFFSET(0x8F06180)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_CREATEFAKE_OFFSET UNITYSDK_OFFSET(0x8F04D30)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_CREATELOCALGAMESESSION_OFFSET UNITYSDK_OFFSET(0x8F008C0)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8F05780)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_GET_BATTLE_OFFSET UNITYSDK_OFFSET(0x8F03FC0)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_GET_CACHE_OFFSET UNITYSDK_OFFSET(0x8F03F40)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_GET_CURRENTCOINCOUNT_OFFSET UNITYSDK_OFFSET(0x8F03F20)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_GET_CURRENTLIFECOUNT_OFFSET UNITYSDK_OFFSET(0x8F03F00)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_GET_CURRENTROUND_OFFSET UNITYSDK_OFFSET(0x8F03F60)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_GET_CURRENTWINCOUNT_OFFSET UNITYSDK_OFFSET(0x8F03EE0)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_GET_GAMEDATA_OFFSET UNITYSDK_OFFSET(0x8EF9790)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_GET_GAMEID_OFFSET UNITYSDK_OFFSET(0x8F03E60)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_GET_ISGAMEINFOFEATUREUNLOCKED_OFFSET UNITYSDK_OFFSET(0x8EF96A0)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_GET_ISLOCALGAMESESSION_OFFSET UNITYSDK_OFFSET(0x8F04040)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_GET_ISNEWRARITYUNLOCKED_OFFSET UNITYSDK_OFFSET(0x8F03E70)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_GET_SHOP_OFFSET UNITYSDK_OFFSET(0x8F03FA0)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_GET_STATE_OFFSET UNITYSDK_OFFSET(0x8F03FE0)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_GET_TEAM_OFFSET UNITYSDK_OFFSET(0x8F03F80)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_HANDLECHANGES_OFFSET UNITYSDK_OFFSET(0x8F062D0)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_ISCHANGERELEVANT_OFFSET UNITYSDK_OFFSET(0x8F06020)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_ONENDROUNDBATTLESTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x8F05E00)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_ONENDROUNDSHOPSTAGESCRSP_OFFSET UNITYSDK_OFFSET(0x8F05B40)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_ONNOTIFYCOINUPDATE_OFFSET UNITYSDK_OFFSET(0x8F06FB0)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_SAVEDELAYEDCHANGES_OFFSET UNITYSDK_OFFSET(0x8F06090)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_SET_BATTLE_OFFSET UNITYSDK_OFFSET(0x8F03FD0)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_SET_CACHE_OFFSET UNITYSDK_OFFSET(0x8F03F50)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_SET_CURRENTCOINCOUNT_OFFSET UNITYSDK_OFFSET(0x8F03F30)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_SET_CURRENTLIFECOUNT_OFFSET UNITYSDK_OFFSET(0x8F03F10)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_SET_CURRENTROUND_OFFSET UNITYSDK_OFFSET(0x8F03F70)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_SET_CURRENTWINCOUNT_OFFSET UNITYSDK_OFFSET(0x8F03EF0)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_SET_ISLOCALGAMESESSION_OFFSET UNITYSDK_OFFSET(0x8F04050)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_SET_SHOP_OFFSET UNITYSDK_OFFSET(0x8F03FB0)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_SET_TEAM_OFFSET UNITYSDK_OFFSET(0x8F03F90)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_TRYCREATE_OFFSET UNITYSDK_OFFSET(0x8F04060)
#define RPG_CLIENT_CHIMERADUELGAMESESSION_TRYENDGAME_OFFSET UNITYSDK_OFFSET(0x8F059D0)
#define RPG_CLIENT_CHIMERADUELGAMESESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x8F042C0)
#define RPG_CLIENT_CHIMERADUELGAMESESSION__SYNCGAMEINFO_OFFSET UNITYSDK_OFFSET(0x8F05BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelGameSession_TypeDefinitionIndex = 50239;

	class ChimeraDuelGameSession : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelGameSessionBattle* _Battle_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::Class_1_F39C4BFF3EB82CCB*>* _DelayedChanges; // 0x18
		::RPG::Client::ChimeraDuelGameSessionTeam* _Team_k__BackingField; // 0x20
		::RPG::Client::ChimeraDuelGameSessionCurrentRound* _CurrentRound_k__BackingField; // 0x28
		::RPG::Client::ChimeraDuelGameSessionShop* _Shop_k__BackingField; // 0x30
		::RPG::Client::ChimeraDuelGameSessionCache* _Cache_k__BackingField; // 0x38
		::System::Int32 _CurrentWinCount_k__BackingField; // 0x40
		::System::Boolean _IsLocalGameSession_k__BackingField; // 0x44
		::System::Int32 _CurrentCoinCount_k__BackingField; // 0x48
		::System::UInt32 _GameID_k__BackingField; // 0x4C
		::System::Int32 _CurrentLifeCount_k__BackingField; // 0x50

		::System::Void _ctor(::System::UInt32 gameID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION__CTOR_OFFSET))(this, gameID);
		}

		::System::UInt32 get_GameID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_GET_GAMEID_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelGameData* get_GameData()
		{
			return ((::RPG::Client::ChimeraDuelGameData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_GET_GAMEDATA_OFFSET))(this);
		}

		::System::Boolean get_IsGameInfoFeatureUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_GET_ISGAMEINFOFEATUREUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsNewRarityUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_GET_ISNEWRARITYUNLOCKED_OFFSET))(this);
		}

		::System::Int32 get_CurrentWinCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_GET_CURRENTWINCOUNT_OFFSET))(this);
		}

		::System::Void set_CurrentWinCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_SET_CURRENTWINCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_CurrentLifeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_GET_CURRENTLIFECOUNT_OFFSET))(this);
		}

		::System::Void set_CurrentLifeCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_SET_CURRENTLIFECOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_CurrentCoinCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_GET_CURRENTCOINCOUNT_OFFSET))(this);
		}

		::System::Void set_CurrentCoinCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_SET_CURRENTCOINCOUNT_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraDuelGameSessionCache* get_Cache()
		{
			return ((::RPG::Client::ChimeraDuelGameSessionCache*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_GET_CACHE_OFFSET))(this);
		}

		::System::Void set_Cache(::RPG::Client::ChimeraDuelGameSessionCache* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionCache*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_SET_CACHE_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraDuelGameSessionCurrentRound* get_CurrentRound()
		{
			return ((::RPG::Client::ChimeraDuelGameSessionCurrentRound*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_GET_CURRENTROUND_OFFSET))(this);
		}

		::System::Void set_CurrentRound(::RPG::Client::ChimeraDuelGameSessionCurrentRound* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionCurrentRound*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_SET_CURRENTROUND_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraDuelGameSessionTeam* get_Team()
		{
			return ((::RPG::Client::ChimeraDuelGameSessionTeam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_GET_TEAM_OFFSET))(this);
		}

		::System::Void set_Team(::RPG::Client::ChimeraDuelGameSessionTeam* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionTeam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_SET_TEAM_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraDuelGameSessionShop* get_Shop()
		{
			return ((::RPG::Client::ChimeraDuelGameSessionShop*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_GET_SHOP_OFFSET))(this);
		}

		::System::Void set_Shop(::RPG::Client::ChimeraDuelGameSessionShop* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionShop*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_SET_SHOP_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraDuelGameSessionBattle* get_Battle()
		{
			return ((::RPG::Client::ChimeraDuelGameSessionBattle*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_GET_BATTLE_OFFSET))(this);
		}

		::System::Void set_Battle(::RPG::Client::ChimeraDuelGameSessionBattle* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelGameSessionBattle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_SET_BATTLE_OFFSET))(this, value);
		}

		::RPG::Client::ChimeraDuelGameSessionState get_State()
		{
			return ((::RPG::Client::ChimeraDuelGameSessionState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_GET_STATE_OFFSET))(this);
		}

		::System::Boolean get_IsLocalGameSession()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_GET_ISLOCALGAMESESSION_OFFSET))(this);
		}

		::System::Void set_IsLocalGameSession(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_SET_ISLOCALGAMESESSION_OFFSET))(this, value);
		}

		static ::RPG::Client::ChimeraDuelGameSession* TryCreate(::Class_1_2135BD0826D34A80* serverData)
		{
			return ((::RPG::Client::ChimeraDuelGameSession*(*)(::Class_1_2135BD0826D34A80*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_TRYCREATE_OFFSET))(serverData);
		}

		static ::RPG::Client::ChimeraDuelGameSession* CreateFake(::System::UInt32 gameID)
		{
			return ((::RPG::Client::ChimeraDuelGameSession*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_CREATEFAKE_OFFSET))(gameID);
		}

		static ::RPG::Client::ChimeraDuelGameSession* CreateLocalGameSession(::System::Tuple_2<::RPG::Client::IChimeraDuelChallengeTeam*, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*>* info)
		{
			return ((::RPG::Client::ChimeraDuelGameSession*(*)(::System::Tuple_2<::RPG::Client::IChimeraDuelChallengeTeam*, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_CREATELOCALGAMESESSION_OFFSET))(info);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_DISPOSE_OFFSET))(this);
		}

		::System::Void TryEndGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_TRYENDGAME_OFFSET))(this);
		}

		::System::Void OnEndRoundShopStageScRsp(::Class_1_E473F14F738B1BF5_10* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E473F14F738B1BF5_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_ONENDROUNDSHOPSTAGESCRSP_OFFSET))(this, rsp);
		}

		::System::Void OnEndRoundBattleStageScRsp(::Class_1_405D9D5C58031AA5* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_405D9D5C58031AA5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_ONENDROUNDBATTLESTAGESCRSP_OFFSET))(this, rsp);
		}

		::System::Void _SyncGameInfo(::Class_1_2135BD0826D34A80* gameInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2135BD0826D34A80*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION__SYNCGAMEINFO_OFFSET))(this, gameInfo);
		}

		::System::Boolean IsChangeRelevant(::Class_1_F39C4BFF3EB82CCB* change)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_F39C4BFF3EB82CCB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_ISCHANGERELEVANT_OFFSET))(this, change);
		}

		::System::Void SaveDelayedChanges(::System::Collections::Generic::IEnumerable_1<::Class_1_F39C4BFF3EB82CCB*>* changes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_F39C4BFF3EB82CCB*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_SAVEDELAYEDCHANGES_OFFSET))(this, changes);
		}

		::System::Void ConsumeDelayedChanges()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_CONSUMEDELAYEDCHANGES_OFFSET))(this);
		}

		::System::Void HandleChanges(::System::Collections::Generic::IEnumerable_1<::Class_1_F39C4BFF3EB82CCB*>* changes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::Class_1_F39C4BFF3EB82CCB*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_HANDLECHANGES_OFFSET))(this, changes);
		}

		::System::Void OnNotifyCoinUpdate(::System::UInt32 changeGoldNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELGAMESESSION_ONNOTIFYCOINUPDATE_OFFSET))(this, changeGoldNum);
		}
	};
}

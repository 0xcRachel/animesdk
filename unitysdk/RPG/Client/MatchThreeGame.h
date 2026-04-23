#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/Match3GameState.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/MatchThreeGameMode.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MatchThreeV2FirstRoleType.h"
#include "unitysdk/Struct_2_52A902145F5BE51F.h"
#include "unitysdk/Struct_2_D828E592C9D2FCC9.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_1CBA230307F9C289_26;
class Class_1_3AD2528CD53B1639_7;
class Class_1_3AD2528CD53B1639_8;
class Class_1_3AD2528CD53B1639_9;
class Class_1_4BC858D7C27E10ED_22;
class Class_1_4BC858D7C27E10ED_25;
class Class_1_4BC858D7C27E10ED_26;
class Class_1_BB4B99DE4C2501EC_6;
class Class_1_C30510A2D20EA22C;
class Class_1_C9DFE5EE7107C629_10;
class Class_1_DC55B9E766BF1C8D;
class Class_1_F3CA30716D4FAF92_11;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class IMatchThreePropData; }
namespace RPG::Client { class IMatchThreeScore; }
namespace RPG::Client { class MatchThreeEnvironmentData; }
namespace RPG::Client { class MatchThreeGameOpponent; }
namespace RPG::Client { class MatchThreeLevelData; }
namespace RPG::Client { class MatchThreeV2LevelData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEGAME_ADDGAMESTATECHANGEHANDLER_OFFSET UNITYSDK_OFFSET(0x17EDF340)
#define RPG_CLIENT_MATCHTHREEGAME_ADDINPUTSTATECHANGEHANDLER_OFFSET UNITYSDK_OFFSET(0x17EDF3E0)
#define RPG_CLIENT_MATCHTHREEGAME_CHANGEENEMY_OFFSET UNITYSDK_OFFSET(0x16F7BAB0)
#define RPG_CLIENT_MATCHTHREEGAME_CREATEENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x16F7B4B0)
#define RPG_CLIENT_MATCHTHREEGAME_CREATEONEONONEGAME_OFFSET UNITYSDK_OFFSET(0x16F78130)
#define RPG_CLIENT_MATCHTHREEGAME_CREATEPVEGAME_OFFSET UNITYSDK_OFFSET(0x16F7A9E0)
#define RPG_CLIENT_MATCHTHREEGAME_CREATEPVPGAME_OFFSET UNITYSDK_OFFSET(0x16F7B000)
#define RPG_CLIENT_MATCHTHREEGAME_CREATEROYALEGAME_OFFSET UNITYSDK_OFFSET(0x16F795C0)
#define RPG_CLIENT_MATCHTHREEGAME_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16F7B2F0)
#define RPG_CLIENT_MATCHTHREEGAME_GETALLOPPONENTS_OFFSET UNITYSDK_OFFSET(0x17EDF480)
#define RPG_CLIENT_MATCHTHREEGAME_GETBASICDAMAGE_OFFSET UNITYSDK_OFFSET(0x16F7BBB0)
#define RPG_CLIENT_MATCHTHREEGAME_GETEMOJIIDS_OFFSET UNITYSDK_OFFSET(0x16F7BCD0)
#define RPG_CLIENT_MATCHTHREEGAME_GETEMOJIPATH_OFFSET UNITYSDK_OFFSET(0x16F7BE90)
#define RPG_CLIENT_MATCHTHREEGAME_GETINPUTTIMEOUTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x16F7BFB0)
#define RPG_CLIENT_MATCHTHREEGAME_GETMAXDAMAGE_OFFSET UNITYSDK_OFFSET(0x16F7BC40)
#define RPG_CLIENT_MATCHTHREEGAME_GETNEXTTIPTEXTID_OFFSET UNITYSDK_OFFSET(0x16F7B7F0)
#define RPG_CLIENT_MATCHTHREEGAME_GETPROCESSEDOPPONENTSFORROYALE_OFFSET UNITYSDK_OFFSET(0x16F7A4C0)
#define RPG_CLIENT_MATCHTHREEGAME_GETRANKRESULTSCORE_OFFSET UNITYSDK_OFFSET(0x17EE2570)
#define RPG_CLIENT_MATCHTHREEGAME_GETRESULTSCORES_OFFSET UNITYSDK_OFFSET(0x17EE08E0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ALLENVIRONMENTS_OFFSET UNITYSDK_OFFSET(0x17EE2CC0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_CURRENTACTIONROLE_OFFSET UNITYSDK_OFFSET(0x16F79580)
#define RPG_CLIENT_MATCHTHREEGAME_GET_CURRENTROUND_OFFSET UNITYSDK_OFFSET(0x16F7A9C0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_CURRENTSECTION_OFFSET UNITYSDK_OFFSET(0x16F79520)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ENEMY_OFFSET UNITYSDK_OFFSET(0x17EE2C90)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ENVIRONMENTS_OFFSET UNITYSDK_OFFSET(0x17EE2CB0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_FINALRANK_OFFSET UNITYSDK_OFFSET(0x17EE3350)
#define RPG_CLIENT_MATCHTHREEGAME_GET_GAMEECSINSTANCE_OFFSET UNITYSDK_OFFSET(0x17EE3670)
#define RPG_CLIENT_MATCHTHREEGAME_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0x17EE2C00)
#define RPG_CLIENT_MATCHTHREEGAME_GET_GAMESTATE_OFFSET UNITYSDK_OFFSET(0x17EE2C20)
#define RPG_CLIENT_MATCHTHREEGAME_GET_INPUTTIMEPERSECTION_OFFSET UNITYSDK_OFFSET(0x16F795A0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_IS1V1GAMEMODE_OFFSET UNITYSDK_OFFSET(0x17EE3120)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISBIRDSKILLDISABLED_OFFSET UNITYSDK_OFFSET(0x17EE35C0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISBOARDIDLE_OFFSET UNITYSDK_OFFSET(0x17EE3070)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISLOSE_OFFSET UNITYSDK_OFFSET(0x17EE2E30)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISOUTOFSTEP_OFFSET UNITYSDK_OFFSET(0x17EE30D0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISPVP1V1ENEMYGIVEUP_OFFSET UNITYSDK_OFFSET(0x17EE3290)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISPVP1V1GIVEUP_OFFSET UNITYSDK_OFFSET(0x17EE3230)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISPVP1V1NETWORKDATAREADY_OFFSET UNITYSDK_OFFSET(0x17EE3030)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISPVPGAMEMODE_OFFSET UNITYSDK_OFFSET(0x17EE3170)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISPVPGIVEUP_OFFSET UNITYSDK_OFFSET(0x17EE31D0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISPVPNETWORKDATAREADY_OFFSET UNITYSDK_OFFSET(0x17EE3010)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISPVPROYALEGIVEUP_OFFSET UNITYSDK_OFFSET(0x17EE32F0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISPVPROYALENETWORKDATAREADY_OFFSET UNITYSDK_OFFSET(0x17EE3050)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISROYALEGAMEMODE_OFFSET UNITYSDK_OFFSET(0x17EE31C0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISTIE_OFFSET UNITYSDK_OFFSET(0x17EE2F50)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISVICTORY_OFFSET UNITYSDK_OFFSET(0x17EE2D10)
#define RPG_CLIENT_MATCHTHREEGAME_GET_LEVELDATA_OFFSET UNITYSDK_OFFSET(0x17EE3650)
#define RPG_CLIENT_MATCHTHREEGAME_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x17EE2CD0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_MAXSECTION_OFFSET UNITYSDK_OFFSET(0x16F79560)
#define RPG_CLIENT_MATCHTHREEGAME_GET_MAXSTEP_OFFSET UNITYSDK_OFFSET(0x17EE2CF0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_RESULTSTATICDATA_OFFSET UNITYSDK_OFFSET(0x17EE3410)
#define RPG_CLIENT_MATCHTHREEGAME_GET_SELF_OFFSET UNITYSDK_OFFSET(0x17EE2C70)
#define RPG_CLIENT_MATCHTHREEGAME_GET_STEPPERSECTION_OFFSET UNITYSDK_OFFSET(0x16F79540)
#define RPG_CLIENT_MATCHTHREEGAME_GET_V2LEVELDATA_OFFSET UNITYSDK_OFFSET(0x16F79500)
#define RPG_CLIENT_MATCHTHREEGAME_HASINPUTTIMELIMIT_OFFSET UNITYSDK_OFFSET(0x16F7BF20)
#define RPG_CLIENT_MATCHTHREEGAME_INITALLENVIRONMENTS_OFFSET UNITYSDK_OFFSET(0x16F7ACC0)
#define RPG_CLIENT_MATCHTHREEGAME_INITGAMEESCINSTANCE_OFFSET UNITYSDK_OFFSET(0x16F7B910)
#define RPG_CLIENT_MATCHTHREEGAME_INITPLAYERS_1_OFFSET UNITYSDK_OFFSET(0x16F78700)
#define RPG_CLIENT_MATCHTHREEGAME_INITPLAYERS_2_OFFSET UNITYSDK_OFFSET(0x16F79650)
#define RPG_CLIENT_MATCHTHREEGAME_INITPLAYERS_3_OFFSET UNITYSDK_OFFSET(0x17EDF630)
#define RPG_CLIENT_MATCHTHREEGAME_INITPLAYERS_OFFSET UNITYSDK_OFFSET(0x16F78310)
#define RPG_CLIENT_MATCHTHREEGAME_INITPVEPLAYERS_OFFSET UNITYSDK_OFFSET(0x16F783E0)
#define RPG_CLIENT_MATCHTHREEGAME_INITROYALEPLAYER_OFFSET UNITYSDK_OFFSET(0x16F78640)
#define RPG_CLIENT_MATCHTHREEGAME_REFRESHPREVIOUSRANKS_OFFSET UNITYSDK_OFFSET(0x17EE00A0)
#define RPG_CLIENT_MATCHTHREEGAME_REFRESHPREVLIVESTATE_OFFSET UNITYSDK_OFFSET(0x16F79B80)
#define RPG_CLIENT_MATCHTHREEGAME_REMOVEGAMESTATECHANGEHANDLER_OFFSET UNITYSDK_OFFSET(0x17EDF390)
#define RPG_CLIENT_MATCHTHREEGAME_REMOVEINPUTSTATECHANGEHANDLER_OFFSET UNITYSDK_OFFSET(0x17EDF430)
#define RPG_CLIENT_MATCHTHREEGAME_SAVEGAMERESULT_OFFSET UNITYSDK_OFFSET(0x16F7B8D0)
#define RPG_CLIENT_MATCHTHREEGAME_SET_CURRENTACTIONROLE_OFFSET UNITYSDK_OFFSET(0x16F79590)
#define RPG_CLIENT_MATCHTHREEGAME_SET_CURRENTROUND_OFFSET UNITYSDK_OFFSET(0x16F7A9D0)
#define RPG_CLIENT_MATCHTHREEGAME_SET_CURRENTSECTION_OFFSET UNITYSDK_OFFSET(0x16F79530)
#define RPG_CLIENT_MATCHTHREEGAME_SET_ENEMY_OFFSET UNITYSDK_OFFSET(0x17EE2CA0)
#define RPG_CLIENT_MATCHTHREEGAME_SET_GAMEECSINSTANCE_OFFSET UNITYSDK_OFFSET(0x17EE3680)
#define RPG_CLIENT_MATCHTHREEGAME_SET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0x17EE2C10)
#define RPG_CLIENT_MATCHTHREEGAME_SET_INPUTTIMEPERSECTION_OFFSET UNITYSDK_OFFSET(0x16F795B0)
#define RPG_CLIENT_MATCHTHREEGAME_SET_LEVELDATA_OFFSET UNITYSDK_OFFSET(0x17EE3660)
#define RPG_CLIENT_MATCHTHREEGAME_SET_MAXHP_OFFSET UNITYSDK_OFFSET(0x17EE2CE0)
#define RPG_CLIENT_MATCHTHREEGAME_SET_MAXSECTION_OFFSET UNITYSDK_OFFSET(0x16F79570)
#define RPG_CLIENT_MATCHTHREEGAME_SET_MAXSTEP_OFFSET UNITYSDK_OFFSET(0x17EE2D00)
#define RPG_CLIENT_MATCHTHREEGAME_SET_SELF_OFFSET UNITYSDK_OFFSET(0x17EE2C80)
#define RPG_CLIENT_MATCHTHREEGAME_SET_STEPPERSECTION_OFFSET UNITYSDK_OFFSET(0x16F79550)
#define RPG_CLIENT_MATCHTHREEGAME_SET_V2LEVELDATA_OFFSET UNITYSDK_OFFSET(0x16F79510)
#define RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERREALTIMEDATA_OFFSET UNITYSDK_OFFSET(0x16F7A0D0)
#define RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERS_1_OFFSET UNITYSDK_OFFSET(0x16F79B10)
#define RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERS_2_OFFSET UNITYSDK_OFFSET(0x16F79CD0)
#define RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERS_3_OFFSET UNITYSDK_OFFSET(0x17EDFD10)
#define RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERS_OFFSET UNITYSDK_OFFSET(0x16F78D40)
#define RPG_CLIENT_MATCHTHREEGAME__CREATESCORELIST_OFFSET UNITYSDK_OFFSET(0x17EE0B60)
#define RPG_CLIENT_MATCHTHREEGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x17EE37D0)
#define RPG_CLIENT_MATCHTHREEGAME__FINDENEMYDATA_OFFSET UNITYSDK_OFFSET(0x17EE0720)
#define RPG_CLIENT_MATCHTHREEGAME__GETPVP1V1SCOREDATA_OFFSET UNITYSDK_OFFSET(0x17EE1690)
#define RPG_CLIENT_MATCHTHREEGAME__GETPVPROYALESCOREDATA_OFFSET UNITYSDK_OFFSET(0x17EE1E30)
#define RPG_CLIENT_MATCHTHREEGAME__GETPVPSCOREDATA_OFFSET UNITYSDK_OFFSET(0x17EE0D70)
#define RPG_CLIENT_MATCHTHREEGAME__ONBIRDSKILLDISABLECHANGE_OFFSET UNITYSDK_OFFSET(0x17EE3780)
#define RPG_CLIENT_MATCHTHREEGAME__ONGAMESTATECHANGE_OFFSET UNITYSDK_OFFSET(0x17EE3690)
#define RPG_CLIENT_MATCHTHREEGAME__ONINPUTSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x17EE3730)
#define RPG_CLIENT_MATCHTHREEGAME__REFRESHLOCALRANKDATA_OFFSET UNITYSDK_OFFSET(0x16F7A570)
#define RPG_CLIENT_MATCHTHREEGAME__UPDATEPLAYER_1_OFFSET UNITYSDK_OFFSET(0x17EE01F0)
#define RPG_CLIENT_MATCHTHREEGAME__UPDATEPLAYER_OFFSET UNITYSDK_OFFSET(0x16F79010)
#define RPG_CLIENT_MATCHTHREEGAME__UPDATEROYALEPLAYERREALTIMEDATA_OFFSET UNITYSDK_OFFSET(0x16F7A390)
#define RPG_CLIENT_MATCHTHREEGAME__UPDATEROYALEPLAYER_OFFSET UNITYSDK_OFFSET(0x16F79FB0)
#define RPG_CLIENT_MATCHTHREEGAME__UPDATESELFPLAYER_OFFSET UNITYSDK_OFFSET(0x17EE06A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeGame_TypeDefinitionIndex = 60701;

	class MatchThreeGame : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeEnvironmentData*>* _AllEnvironments_k__BackingField; // 0x10
		::Class_1_DC55B9E766BF1C8D* _GameEcsInstance_k__BackingField; // 0x18
		::System::String* EnvConfigPathV2; // 0x20
		::RPG::Client::MatchThreeLevelData* _LevelData_k__BackingField; // 0x28
		::System::Action_1<::RPG::Client::LittleGame::Match3::Match3GameState>* _OnGameStateChangeHandler; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeEnvironmentData*>* _Environments_k__BackingField; // 0x38
		::System::Action* _OnInputStateChangeHandler; // 0x40
		::RPG::Client::MatchThreeGameOpponent* _Enemy_k__BackingField; // 0x48
		::RPG::Client::MatchThreeV2LevelData* _V2LevelData_k__BackingField; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameOpponent*>* _Opponents; // 0x58
		::RPG::Client::MatchThreeGameOpponent* _Self_k__BackingField; // 0x60
		::Class_1_C30510A2D20EA22C* _MatchThreeTipManager; // 0x68
		::System::UInt32 _MaxSection_k__BackingField; // 0x70
		::System::UInt32 _CurrentRound_k__BackingField; // 0x74
		::System::UInt32 _MaxStep_k__BackingField; // 0x78
		::System::Single _InputTimePerSection_k__BackingField; // 0x7C
		::RPG::Client::LittleGame::Match3::MatchThreeGameMode _GameMode_k__BackingField; // 0x80
		::RPG::Client::LittleGame::Match3::OpponentRole _CurrentActionRole_k__BackingField; // 0x84
		::System::UInt32 _CurrentSection_k__BackingField; // 0x88
		::RPG::GameCore::MatchThreeV2FirstRoleType FirstRoleType; // 0x8C
		::System::UInt32 _MaxHp_k__BackingField; // 0x90
		::System::UInt32 RandomSeed; // 0x94
		::System::UInt32 EnemyAILevel; // 0x98
		::System::UInt32 _StepPerSection_k__BackingField; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeGame* CreateOneOnOneGame(::RPG::Client::LittleGame::Match3::MatchThreeGameMode gameMode)
		{
			return ((::RPG::Client::MatchThreeGame*(*)(::RPG::Client::LittleGame::Match3::MatchThreeGameMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_CREATEONEONONEGAME_OFFSET))(gameMode);
		}

		::System::Void InitPlayers(::System::UInt32 birdLeft, ::System::UInt32 birdRight, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* propLeft, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* propRight)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_INITPLAYERS_OFFSET))(this, birdLeft, birdRight, propLeft, propRight);
		}

		::System::Void InitPvePlayers(::System::UInt32 birdLeft, ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>* propLeft)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_INITPVEPLAYERS_OFFSET))(this, birdLeft, propLeft);
		}

		::System::Void InitRoyalePlayer(::System::UInt32 birdLeft)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_INITROYALEPLAYER_OFFSET))(this, birdLeft);
		}

		::System::Void InitPlayers_1(::Class_1_4BC858D7C27E10ED_25* match3DataScRsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_25*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_INITPLAYERS_1_OFFSET))(this, match3DataScRsp);
		}

		::System::Void UpdateAllPlayers(::Class_1_3AD2528CD53B1639_8* match3Data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERS_OFFSET))(this, match3Data);
		}

		::System::Void _UpdatePlayer(::Class_1_3AD2528CD53B1639_7* match3PlayerData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__UPDATEPLAYER_OFFSET))(this, match3PlayerData);
		}

		::RPG::Client::MatchThreeV2LevelData* get_V2LevelData()
		{
			return ((::RPG::Client::MatchThreeV2LevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_V2LEVELDATA_OFFSET))(this);
		}

		::System::Void set_V2LevelData(::RPG::Client::MatchThreeV2LevelData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeV2LevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SET_V2LEVELDATA_OFFSET))(this, value);
		}

		::System::UInt32 get_CurrentSection()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_CURRENTSECTION_OFFSET))(this);
		}

		::System::Void set_CurrentSection(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SET_CURRENTSECTION_OFFSET))(this, value);
		}

		::System::UInt32 get_StepPerSection()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_STEPPERSECTION_OFFSET))(this);
		}

		::System::Void set_StepPerSection(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SET_STEPPERSECTION_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxSection()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_MAXSECTION_OFFSET))(this);
		}

		::System::Void set_MaxSection(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SET_MAXSECTION_OFFSET))(this, value);
		}

		::RPG::Client::LittleGame::Match3::OpponentRole get_CurrentActionRole()
		{
			return ((::RPG::Client::LittleGame::Match3::OpponentRole(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_CURRENTACTIONROLE_OFFSET))(this);
		}

		::System::Void set_CurrentActionRole(::RPG::Client::LittleGame::Match3::OpponentRole value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Match3::OpponentRole))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SET_CURRENTACTIONROLE_OFFSET))(this, value);
		}

		::System::Single get_InputTimePerSection()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_INPUTTIMEPERSECTION_OFFSET))(this);
		}

		::System::Void set_InputTimePerSection(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SET_INPUTTIMEPERSECTION_OFFSET))(this, value);
		}

		static ::RPG::Client::MatchThreeGame* CreateRoyaleGame()
		{
			return ((::RPG::Client::MatchThreeGame*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_CREATEROYALEGAME_OFFSET))();
		}

		::System::Void InitPlayers_2(::Class_1_4BC858D7C27E10ED_26* match3DataScRsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_INITPLAYERS_2_OFFSET))(this, match3DataScRsp);
		}

		::System::Void UpdateAllPlayers_1(::Class_1_3AD2528CD53B1639_9* match3Data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_9*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERS_1_OFFSET))(this, match3Data);
		}

		::System::Void UpdateAllPlayers_2(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_26*>* playerDataList, ::System::UInt32 round)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_26*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERS_2_OFFSET))(this, playerDataList, round);
		}

		::System::Void RefreshPrevLiveState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_REFRESHPREVLIVESTATE_OFFSET))(this);
		}

		::System::Void UpdateAllPlayerRealTimeData(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_26*>* playerDataList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_1CBA230307F9C289_26*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERREALTIMEDATA_OFFSET))(this, playerDataList);
		}

		::System::Void _UpdateRoyalePlayerRealTimeData(::Class_1_1CBA230307F9C289_26* playerData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_26*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__UPDATEROYALEPLAYERREALTIMEDATA_OFFSET))(this, playerData);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameOpponent*>* GetProcessedOpponentsForRoyale()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameOpponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GETPROCESSEDOPPONENTSFORROYALE_OFFSET))(this);
		}

		::System::Void _UpdateRoyalePlayer(::Class_1_1CBA230307F9C289_26* playerData, ::System::UInt32 round)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_1CBA230307F9C289_26*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__UPDATEROYALEPLAYER_OFFSET))(this, playerData, round);
		}

		::System::Void _RefreshLocalRankData(::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameOpponent*>*& list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameOpponent*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__REFRESHLOCALRANKDATA_OFFSET))(this, list);
		}

		::System::UInt32 get_CurrentRound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_CURRENTROUND_OFFSET))(this);
		}

		::System::Void set_CurrentRound(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SET_CURRENTROUND_OFFSET))(this, value);
		}

		static ::RPG::Client::MatchThreeGame* CreatePVEGame(::RPG::Client::MatchThreeLevelData* level, ::System::UInt32 birdID)
		{
			return ((::RPG::Client::MatchThreeGame*(*)(::RPG::Client::MatchThreeLevelData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_CREATEPVEGAME_OFFSET))(level, birdID);
		}

		static ::RPG::Client::MatchThreeGame* CreatePVPGame()
		{
			return ((::RPG::Client::MatchThreeGame*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_CREATEPVPGAME_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_DISPOSE_OFFSET))(this);
		}

		::System::Void CreateEnvironment(::System::Collections::Generic::IList_1<::System::UInt32>* envIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_CREATEENVIRONMENT_OFFSET))(this, envIDs);
		}

		::System::Void InitAllEnvironments(::System::Collections::Generic::IList_1<::System::UInt32>* envIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_INITALLENVIRONMENTS_OFFSET))(this, envIDs);
		}

		::RPG::Client::TextID GetNextTipTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GETNEXTTIPTEXTID_OFFSET))(this);
		}

		::System::Void SaveGameResult()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SAVEGAMERESULT_OFFSET))(this);
		}

		::System::Void InitGameEscInstance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_INITGAMEESCINSTANCE_OFFSET))(this);
		}

		::System::Void ChangeEnemy(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_CHANGEENEMY_OFFSET))(this, uid);
		}

		::System::UInt32 GetBasicDamage()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GETBASICDAMAGE_OFFSET))(this);
		}

		::System::UInt32 GetMaxDamage()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GETMAXDAMAGE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetEmojiIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GETEMOJIIDS_OFFSET))(this);
		}

		::System::String* GetEmojiPath(::System::UInt32 emojiID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GETEMOJIPATH_OFFSET))(this, emojiID);
		}

		::System::Boolean HasInputTimeLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_HASINPUTTIMELIMIT_OFFSET))(this);
		}

		::System::UInt64 GetInputTimeoutTimeStamp()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GETINPUTTIMEOUTTIMESTAMP_OFFSET))(this);
		}

		::System::Void AddGameStateChangeHandler(::System::Action_1<::RPG::Client::LittleGame::Match3::Match3GameState>* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGame::Match3::Match3GameState>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_ADDGAMESTATECHANGEHANDLER_OFFSET))(this, handler);
		}

		::System::Void RemoveGameStateChangeHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_REMOVEGAMESTATECHANGEHANDLER_OFFSET))(this);
		}

		::System::Void AddInputStateChangeHandler(::System::Action* handler)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_ADDINPUTSTATECHANGEHANDLER_OFFSET))(this, handler);
		}

		::System::Void RemoveInputStateChangeHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_REMOVEINPUTSTATECHANGEHANDLER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameOpponent*>* GetAllOpponents()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameOpponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GETALLOPPONENTS_OFFSET))(this);
		}

		::System::Void InitPlayers_3(::Class_1_4BC858D7C27E10ED_22* fightMatch3DataScRsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4BC858D7C27E10ED_22*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_INITPLAYERS_3_OFFSET))(this, fightMatch3DataScRsp);
		}

		::System::Void UpdateAllPlayers_3(::Class_1_BB4B99DE4C2501EC_6* match3Data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERS_3_OFFSET))(this, match3Data);
		}

		::System::Void RefreshPreviousRanks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_REFRESHPREVIOUSRANKS_OFFSET))(this);
		}

		::System::Void _UpdatePlayer_1(::System::UInt32 uid, ::System::UInt32 round, ::Class_1_F3CA30716D4FAF92_11* match3PlayerData)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_1_F3CA30716D4FAF92_11*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__UPDATEPLAYER_1_OFFSET))(this, uid, round, match3PlayerData);
		}

		::System::Void _UpdateSelfPlayer(::Class_1_C9DFE5EE7107C629_10* snapshot)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_10*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__UPDATESELFPLAYER_OFFSET))(this, snapshot);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IMatchThreeScore*>* GetResultScores()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IMatchThreeScore*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GETRESULTSCORES_OFFSET))(this);
		}

		::RPG::Client::IMatchThreeScore* GetRankResultScore()
		{
			return ((::RPG::Client::IMatchThreeScore*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GETRANKRESULTSCORE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IMatchThreeScore*>* _GetPVPScoreData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IMatchThreeScore*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__GETPVPSCOREDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IMatchThreeScore*>* _GetPVP1V1ScoreData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IMatchThreeScore*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__GETPVP1V1SCOREDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IMatchThreeScore*>* _GetPVPRoyaleScoreData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IMatchThreeScore*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__GETPVPROYALESCOREDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IMatchThreeScore*>* _CreateScoreList(::System::Nullable_1<::Struct_2_D828E592C9D2FCC9> data)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IMatchThreeScore*>*(*)(::PVOID, ::System::Nullable_1<::Struct_2_D828E592C9D2FCC9>))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__CREATESCORELIST_OFFSET))(this, data);
		}

		::Class_1_F3CA30716D4FAF92_11* _FindEnemyData(::Class_1_BB4B99DE4C2501EC_6* match3Data)
		{
			return ((::Class_1_F3CA30716D4FAF92_11*(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__FINDENEMYDATA_OFFSET))(this, match3Data);
		}

		::RPG::Client::LittleGame::Match3::MatchThreeGameMode get_GameMode()
		{
			return ((::RPG::Client::LittleGame::Match3::MatchThreeGameMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_GAMEMODE_OFFSET))(this);
		}

		::System::Void set_GameMode(::RPG::Client::LittleGame::Match3::MatchThreeGameMode value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Match3::MatchThreeGameMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SET_GAMEMODE_OFFSET))(this, value);
		}

		::RPG::Client::LittleGame::Match3::Match3GameState get_GameState()
		{
			return ((::RPG::Client::LittleGame::Match3::Match3GameState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_GAMESTATE_OFFSET))(this);
		}

		::RPG::Client::MatchThreeGameOpponent* get_Self()
		{
			return ((::RPG::Client::MatchThreeGameOpponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_SELF_OFFSET))(this);
		}

		::System::Void set_Self(::RPG::Client::MatchThreeGameOpponent* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeGameOpponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SET_SELF_OFFSET))(this, value);
		}

		::RPG::Client::MatchThreeGameOpponent* get_Enemy()
		{
			return ((::RPG::Client::MatchThreeGameOpponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ENEMY_OFFSET))(this);
		}

		::System::Void set_Enemy(::RPG::Client::MatchThreeGameOpponent* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeGameOpponent*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SET_ENEMY_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeEnvironmentData*>* get_Environments()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeEnvironmentData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ENVIRONMENTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeEnvironmentData*>* get_AllEnvironments()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeEnvironmentData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ALLENVIRONMENTS_OFFSET))(this);
		}

		::System::UInt32 get_MaxHp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_MAXHP_OFFSET))(this);
		}

		::System::Void set_MaxHp(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SET_MAXHP_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxStep()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_MAXSTEP_OFFSET))(this);
		}

		::System::Void set_MaxStep(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SET_MAXSTEP_OFFSET))(this, value);
		}

		::System::Boolean get_IsVictory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISVICTORY_OFFSET))(this);
		}

		::System::Boolean get_IsLose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISLOSE_OFFSET))(this);
		}

		::System::Boolean get_IsTie()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISTIE_OFFSET))(this);
		}

		::System::Boolean get_IsPvpNetworkDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISPVPNETWORKDATAREADY_OFFSET))(this);
		}

		::System::Boolean get_IsPvp1v1NetworkDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISPVP1V1NETWORKDATAREADY_OFFSET))(this);
		}

		::System::Boolean get_IsPvpRoyaleNetworkDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISPVPROYALENETWORKDATAREADY_OFFSET))(this);
		}

		::System::Boolean get_IsBoardIdle()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISBOARDIDLE_OFFSET))(this);
		}

		::System::Boolean get_IsOutOfStep()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISOUTOFSTEP_OFFSET))(this);
		}

		::System::Boolean get_Is1v1GameMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_IS1V1GAMEMODE_OFFSET))(this);
		}

		::System::Boolean get_IsPvPGameMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISPVPGAMEMODE_OFFSET))(this);
		}

		::System::Boolean get_IsRoyaleGameMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISROYALEGAMEMODE_OFFSET))(this);
		}

		::System::Boolean get_IsPvPGiveUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISPVPGIVEUP_OFFSET))(this);
		}

		::System::Boolean get_IsPvP1v1GiveUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISPVP1V1GIVEUP_OFFSET))(this);
		}

		::System::Boolean get_IsPvP1v1EnemyGiveUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISPVP1V1ENEMYGIVEUP_OFFSET))(this);
		}

		::System::Boolean get_IsPvpRoyaleGiveUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISPVPROYALEGIVEUP_OFFSET))(this);
		}

		::System::UInt32 get_FinalRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_FINALRANK_OFFSET))(this);
		}

		::Struct_2_52A902145F5BE51F get_ResultStaticData()
		{
			return ((::Struct_2_52A902145F5BE51F(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_RESULTSTATICDATA_OFFSET))(this);
		}

		::System::Boolean get_IsBirdSkillDisabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_ISBIRDSKILLDISABLED_OFFSET))(this);
		}

		::RPG::Client::MatchThreeLevelData* get_LevelData()
		{
			return ((::RPG::Client::MatchThreeLevelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_LEVELDATA_OFFSET))(this);
		}

		::System::Void set_LevelData(::RPG::Client::MatchThreeLevelData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SET_LEVELDATA_OFFSET))(this, value);
		}

		::Class_1_DC55B9E766BF1C8D* get_GameEcsInstance()
		{
			return ((::Class_1_DC55B9E766BF1C8D*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_GAMEECSINSTANCE_OFFSET))(this);
		}

		::System::Void set_GameEcsInstance(::Class_1_DC55B9E766BF1C8D* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DC55B9E766BF1C8D*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SET_GAMEECSINSTANCE_OFFSET))(this, value);
		}

		::System::Void _OnGameStateChange(::RPG::Client::LittleGame::Match3::Match3GameState state)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::Match3::Match3GameState))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__ONGAMESTATECHANGE_OFFSET))(this, state);
		}

		::System::Void _OnInputStateChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__ONINPUTSTATECHANGE_OFFSET))(this);
		}

		::System::Void _OnBirdSkillDisableChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__ONBIRDSKILLDISABLECHANGE_OFFSET))(this);
		}
	};
}

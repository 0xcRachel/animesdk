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

class Class_1_32FA849AD093D43B;
class Class_1_352A8B3482C80E7D_23;
class Class_1_3AD2528CD53B1639_5;
class Class_1_3AD2528CD53B1639_6;
class Class_1_99BD961747420BEB_20;
class Class_1_99BD961747420BEB_22;
class Class_1_99BD961747420BEB_23;
class Class_1_A5CBD6EBD02154CA;
class Class_1_BB4B99DE4C2501EC_5;
class Class_1_C30510A2D20EA22C;
class Class_1_C9DFE5EE7107C629_7;
class Class_1_F3CA30716D4FAF92_6;
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

#define RPG_CLIENT_MATCHTHREEGAME_ADDGAMESTATECHANGEHANDLER_OFFSET UNITYSDK_OFFSET(0x9660700)
#define RPG_CLIENT_MATCHTHREEGAME_ADDINPUTSTATECHANGEHANDLER_OFFSET UNITYSDK_OFFSET(0x9660750)
#define RPG_CLIENT_MATCHTHREEGAME_CHANGEENEMY_OFFSET UNITYSDK_OFFSET(0x9660170)
#define RPG_CLIENT_MATCHTHREEGAME_CREATEENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x965FB60)
#define RPG_CLIENT_MATCHTHREEGAME_CREATEONEONONEGAME_OFFSET UNITYSDK_OFFSET(0x965C240)
#define RPG_CLIENT_MATCHTHREEGAME_CREATEPVEGAME_OFFSET UNITYSDK_OFFSET(0x965EE40)
#define RPG_CLIENT_MATCHTHREEGAME_CREATEPVPGAME_OFFSET UNITYSDK_OFFSET(0x965F660)
#define RPG_CLIENT_MATCHTHREEGAME_CREATEROYALEGAME_OFFSET UNITYSDK_OFFSET(0x965D880)
#define RPG_CLIENT_MATCHTHREEGAME_DISPOSE_OFFSET UNITYSDK_OFFSET(0x965F940)
#define RPG_CLIENT_MATCHTHREEGAME_GETALLOPPONENTS_OFFSET UNITYSDK_OFFSET(0x96607F0)
#define RPG_CLIENT_MATCHTHREEGAME_GETBASICDAMAGE_OFFSET UNITYSDK_OFFSET(0x9660280)
#define RPG_CLIENT_MATCHTHREEGAME_GETEMOJIIDS_OFFSET UNITYSDK_OFFSET(0x96603A0)
#define RPG_CLIENT_MATCHTHREEGAME_GETEMOJIPATH_OFFSET UNITYSDK_OFFSET(0x9660560)
#define RPG_CLIENT_MATCHTHREEGAME_GETINPUTTIMEOUTTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x9660690)
#define RPG_CLIENT_MATCHTHREEGAME_GETMAXDAMAGE_OFFSET UNITYSDK_OFFSET(0x9660310)
#define RPG_CLIENT_MATCHTHREEGAME_GETNEXTTIPTEXTID_OFFSET UNITYSDK_OFFSET(0x965FEA0)
#define RPG_CLIENT_MATCHTHREEGAME_GETPROCESSEDOPPONENTSFORROYALE_OFFSET UNITYSDK_OFFSET(0x965E8F0)
#define RPG_CLIENT_MATCHTHREEGAME_GETRANKRESULTSCORE_OFFSET UNITYSDK_OFFSET(0x9663720)
#define RPG_CLIENT_MATCHTHREEGAME_GETRESULTSCORES_OFFSET UNITYSDK_OFFSET(0x9661A90)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ALLENVIRONMENTS_OFFSET UNITYSDK_OFFSET(0x9663C00)
#define RPG_CLIENT_MATCHTHREEGAME_GET_CURRENTACTIONROLE_OFFSET UNITYSDK_OFFSET(0x965D840)
#define RPG_CLIENT_MATCHTHREEGAME_GET_CURRENTROUND_OFFSET UNITYSDK_OFFSET(0x965EE20)
#define RPG_CLIENT_MATCHTHREEGAME_GET_CURRENTSECTION_OFFSET UNITYSDK_OFFSET(0x965D7E0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ENEMY_OFFSET UNITYSDK_OFFSET(0x9663BD0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ENVIRONMENTS_OFFSET UNITYSDK_OFFSET(0x9663BF0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_FINALRANK_OFFSET UNITYSDK_OFFSET(0x9664220)
#define RPG_CLIENT_MATCHTHREEGAME_GET_GAMEECSINSTANCE_OFFSET UNITYSDK_OFFSET(0x9664550)
#define RPG_CLIENT_MATCHTHREEGAME_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0x9663B40)
#define RPG_CLIENT_MATCHTHREEGAME_GET_GAMESTATE_OFFSET UNITYSDK_OFFSET(0x9663B60)
#define RPG_CLIENT_MATCHTHREEGAME_GET_INPUTTIMEPERSECTION_OFFSET UNITYSDK_OFFSET(0x965D860)
#define RPG_CLIENT_MATCHTHREEGAME_GET_IS1V1GAMEMODE_OFFSET UNITYSDK_OFFSET(0x9664000)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISBIRDSKILLDISABLED_OFFSET UNITYSDK_OFFSET(0x9664490)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISBOARDIDLE_OFFSET UNITYSDK_OFFSET(0x9656F00)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISLOSE_OFFSET UNITYSDK_OFFSET(0x9663D70)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISOUTOFSTEP_OFFSET UNITYSDK_OFFSET(0x9663FB0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISPVP1V1ENEMYGIVEUP_OFFSET UNITYSDK_OFFSET(0x9664160)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISPVP1V1GIVEUP_OFFSET UNITYSDK_OFFSET(0x9664100)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISPVP1V1NETWORKDATAREADY_OFFSET UNITYSDK_OFFSET(0x9663F70)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISPVPGAMEMODE_OFFSET UNITYSDK_OFFSET(0x9664050)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISPVPGIVEUP_OFFSET UNITYSDK_OFFSET(0x96640A0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISPVPNETWORKDATAREADY_OFFSET UNITYSDK_OFFSET(0x9663F50)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISPVPROYALEGIVEUP_OFFSET UNITYSDK_OFFSET(0x96641C0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISPVPROYALENETWORKDATAREADY_OFFSET UNITYSDK_OFFSET(0x9663F90)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISROYALEGAMEMODE_OFFSET UNITYSDK_OFFSET(0x965E9A0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISTIE_OFFSET UNITYSDK_OFFSET(0x9663E90)
#define RPG_CLIENT_MATCHTHREEGAME_GET_ISVICTORY_OFFSET UNITYSDK_OFFSET(0x9663C50)
#define RPG_CLIENT_MATCHTHREEGAME_GET_LEVELDATA_OFFSET UNITYSDK_OFFSET(0x9664530)
#define RPG_CLIENT_MATCHTHREEGAME_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0x9663C10)
#define RPG_CLIENT_MATCHTHREEGAME_GET_MAXSECTION_OFFSET UNITYSDK_OFFSET(0x965D820)
#define RPG_CLIENT_MATCHTHREEGAME_GET_MAXSTEP_OFFSET UNITYSDK_OFFSET(0x9663C30)
#define RPG_CLIENT_MATCHTHREEGAME_GET_RESULTSTATICDATA_OFFSET UNITYSDK_OFFSET(0x96642E0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_SELF_OFFSET UNITYSDK_OFFSET(0x9663BB0)
#define RPG_CLIENT_MATCHTHREEGAME_GET_STEPPERSECTION_OFFSET UNITYSDK_OFFSET(0x965D800)
#define RPG_CLIENT_MATCHTHREEGAME_GET_V2LEVELDATA_OFFSET UNITYSDK_OFFSET(0x965D7C0)
#define RPG_CLIENT_MATCHTHREEGAME_HASINPUTTIMELIMIT_OFFSET UNITYSDK_OFFSET(0x96605F0)
#define RPG_CLIENT_MATCHTHREEGAME_INITALLENVIRONMENTS_OFFSET UNITYSDK_OFFSET(0x965F320)
#define RPG_CLIENT_MATCHTHREEGAME_INITGAMEESCINSTANCE_OFFSET UNITYSDK_OFFSET(0x965FFC0)
#define RPG_CLIENT_MATCHTHREEGAME_INITPLAYERS_1_OFFSET UNITYSDK_OFFSET(0x965C980)
#define RPG_CLIENT_MATCHTHREEGAME_INITPLAYERS_2_OFFSET UNITYSDK_OFFSET(0x965D910)
#define RPG_CLIENT_MATCHTHREEGAME_INITPLAYERS_3_OFFSET UNITYSDK_OFFSET(0x96609A0)
#define RPG_CLIENT_MATCHTHREEGAME_INITPLAYERS_OFFSET UNITYSDK_OFFSET(0x965C4F0)
#define RPG_CLIENT_MATCHTHREEGAME_INITPVEPLAYERS_OFFSET UNITYSDK_OFFSET(0x965C660)
#define RPG_CLIENT_MATCHTHREEGAME_INITROYALEPLAYER_OFFSET UNITYSDK_OFFSET(0x965C8C0)
#define RPG_CLIENT_MATCHTHREEGAME_REFRESHPREVIOUSRANKS_OFFSET UNITYSDK_OFFSET(0x965DFA0)
#define RPG_CLIENT_MATCHTHREEGAME_REFRESHPREVLIVESTATE_OFFSET UNITYSDK_OFFSET(0x965DE50)
#define RPG_CLIENT_MATCHTHREEGAME_REMOVEGAMESTATECHANGEHANDLER_OFFSET UNITYSDK_OFFSET(0x965FB10)
#define RPG_CLIENT_MATCHTHREEGAME_REMOVEINPUTSTATECHANGEHANDLER_OFFSET UNITYSDK_OFFSET(0x96607A0)
#define RPG_CLIENT_MATCHTHREEGAME_SAVEGAMERESULT_OFFSET UNITYSDK_OFFSET(0x965FF80)
#define RPG_CLIENT_MATCHTHREEGAME_SET_CURRENTACTIONROLE_OFFSET UNITYSDK_OFFSET(0x965D850)
#define RPG_CLIENT_MATCHTHREEGAME_SET_CURRENTROUND_OFFSET UNITYSDK_OFFSET(0x965EE30)
#define RPG_CLIENT_MATCHTHREEGAME_SET_CURRENTSECTION_OFFSET UNITYSDK_OFFSET(0x965D7F0)
#define RPG_CLIENT_MATCHTHREEGAME_SET_ENEMY_OFFSET UNITYSDK_OFFSET(0x9663BE0)
#define RPG_CLIENT_MATCHTHREEGAME_SET_GAMEECSINSTANCE_OFFSET UNITYSDK_OFFSET(0x9664560)
#define RPG_CLIENT_MATCHTHREEGAME_SET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0x9663B50)
#define RPG_CLIENT_MATCHTHREEGAME_SET_INPUTTIMEPERSECTION_OFFSET UNITYSDK_OFFSET(0x965D870)
#define RPG_CLIENT_MATCHTHREEGAME_SET_LEVELDATA_OFFSET UNITYSDK_OFFSET(0x9664540)
#define RPG_CLIENT_MATCHTHREEGAME_SET_MAXHP_OFFSET UNITYSDK_OFFSET(0x9663C20)
#define RPG_CLIENT_MATCHTHREEGAME_SET_MAXSECTION_OFFSET UNITYSDK_OFFSET(0x965D830)
#define RPG_CLIENT_MATCHTHREEGAME_SET_MAXSTEP_OFFSET UNITYSDK_OFFSET(0x9663C40)
#define RPG_CLIENT_MATCHTHREEGAME_SET_SELF_OFFSET UNITYSDK_OFFSET(0x9663BC0)
#define RPG_CLIENT_MATCHTHREEGAME_SET_STEPPERSECTION_OFFSET UNITYSDK_OFFSET(0x965D810)
#define RPG_CLIENT_MATCHTHREEGAME_SET_V2LEVELDATA_OFFSET UNITYSDK_OFFSET(0x965D7D0)
#define RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERREALTIMEDATA_OFFSET UNITYSDK_OFFSET(0x965E4F0)
#define RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERS_1_OFFSET UNITYSDK_OFFSET(0x965DDE0)
#define RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERS_2_OFFSET UNITYSDK_OFFSET(0x965E0F0)
#define RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERS_3_OFFSET UNITYSDK_OFFSET(0x9660F50)
#define RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERS_OFFSET UNITYSDK_OFFSET(0x965CFE0)
#define RPG_CLIENT_MATCHTHREEGAME__CREATESCORELIST_OFFSET UNITYSDK_OFFSET(0x9661D00)
#define RPG_CLIENT_MATCHTHREEGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x965C420)
#define RPG_CLIENT_MATCHTHREEGAME__FINDENEMYDATA_OFFSET UNITYSDK_OFFSET(0x9661800)
#define RPG_CLIENT_MATCHTHREEGAME__GETPVP1V1SCOREDATA_OFFSET UNITYSDK_OFFSET(0x9662840)
#define RPG_CLIENT_MATCHTHREEGAME__GETPVPROYALESCOREDATA_OFFSET UNITYSDK_OFFSET(0x9662FF0)
#define RPG_CLIENT_MATCHTHREEGAME__GETPVPSCOREDATA_OFFSET UNITYSDK_OFFSET(0x9661F10)
#define RPG_CLIENT_MATCHTHREEGAME__ONBIRDSKILLDISABLECHANGE_OFFSET UNITYSDK_OFFSET(0x9664660)
#define RPG_CLIENT_MATCHTHREEGAME__ONGAMESTATECHANGE_OFFSET UNITYSDK_OFFSET(0x9664570)
#define RPG_CLIENT_MATCHTHREEGAME__ONINPUTSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x9664610)
#define RPG_CLIENT_MATCHTHREEGAME__REFRESHLOCALRANKDATA_OFFSET UNITYSDK_OFFSET(0x965E9B0)
#define RPG_CLIENT_MATCHTHREEGAME__UPDATEPLAYER_1_OFFSET UNITYSDK_OFFSET(0x96612E0)
#define RPG_CLIENT_MATCHTHREEGAME__UPDATEPLAYER_OFFSET UNITYSDK_OFFSET(0x965D2B0)
#define RPG_CLIENT_MATCHTHREEGAME__UPDATEROYALEPLAYERREALTIMEDATA_OFFSET UNITYSDK_OFFSET(0x965E7B0)
#define RPG_CLIENT_MATCHTHREEGAME__UPDATEROYALEPLAYER_OFFSET UNITYSDK_OFFSET(0x965E3D0)
#define RPG_CLIENT_MATCHTHREEGAME__UPDATESELFPLAYER_OFFSET UNITYSDK_OFFSET(0x9661780)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeGame_TypeDefinitionIndex = 52421;

	class MatchThreeGame : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeGameOpponent* _Self_k__BackingField; // 0x10
		::RPG::Client::MatchThreeV2LevelData* _V2LevelData_k__BackingField; // 0x18
		::System::String* EnvConfigPathV2; // 0x20
		::RPG::Client::MatchThreeLevelData* _LevelData_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeEnvironmentData*>* _AllEnvironments_k__BackingField; // 0x30
		::RPG::Client::MatchThreeGameOpponent* _Enemy_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameOpponent*>* _Opponents; // 0x40
		::Class_1_A5CBD6EBD02154CA* _GameEcsInstance_k__BackingField; // 0x48
		::Class_1_C30510A2D20EA22C* _MatchThreeTipManager; // 0x50
		::System::Action* _OnInputStateChangeHandler; // 0x58
		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeEnvironmentData*>* _Environments_k__BackingField; // 0x60
		::System::Action_1<::RPG::Client::LittleGame::Match3::Match3GameState>* _OnGameStateChangeHandler; // 0x68
		::System::UInt32 _CurrentSection_k__BackingField; // 0x70
		::System::UInt32 _MaxSection_k__BackingField; // 0x74
		::RPG::Client::LittleGame::Match3::MatchThreeGameMode _GameMode_k__BackingField; // 0x78
		::System::UInt32 _MaxHp_k__BackingField; // 0x7C
		::System::UInt32 RandomSeed; // 0x80
		::System::UInt32 _StepPerSection_k__BackingField; // 0x84
		::System::UInt32 _CurrentRound_k__BackingField; // 0x88
		::RPG::GameCore::MatchThreeV2FirstRoleType FirstRoleType; // 0x8C
		::RPG::Client::LittleGame::Match3::OpponentRole _CurrentActionRole_k__BackingField; // 0x90
		::System::UInt32 _MaxStep_k__BackingField; // 0x94
		::System::Single _InputTimePerSection_k__BackingField; // 0x98
		::System::UInt32 EnemyAILevel; // 0x9C

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

		::System::Void InitPlayers_1(::Class_1_99BD961747420BEB_22* match3DataScRsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_22*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_INITPLAYERS_1_OFFSET))(this, match3DataScRsp);
		}

		::System::Void UpdateAllPlayers(::Class_1_3AD2528CD53B1639_6* match3Data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERS_OFFSET))(this, match3Data);
		}

		::System::Void _UpdatePlayer(::Class_1_3AD2528CD53B1639_5* match3PlayerData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3AD2528CD53B1639_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__UPDATEPLAYER_OFFSET))(this, match3PlayerData);
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

		::System::Void InitPlayers_2(::Class_1_99BD961747420BEB_23* match3DataScRsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_23*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_INITPLAYERS_2_OFFSET))(this, match3DataScRsp);
		}

		::System::Void UpdateAllPlayers_1(::Class_1_32FA849AD093D43B* match3Data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_32FA849AD093D43B*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERS_1_OFFSET))(this, match3Data);
		}

		::System::Void UpdateAllPlayers_2(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_23*>* playerDataList, ::System::UInt32 round)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_23*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERS_2_OFFSET))(this, playerDataList, round);
		}

		::System::Void RefreshPrevLiveState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_REFRESHPREVLIVESTATE_OFFSET))(this);
		}

		::System::Void UpdateAllPlayerRealTimeData(::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_23*>* playerDataList)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::Class_1_352A8B3482C80E7D_23*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERREALTIMEDATA_OFFSET))(this, playerDataList);
		}

		::System::Void _UpdateRoyalePlayerRealTimeData(::Class_1_352A8B3482C80E7D_23* playerData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_23*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__UPDATEROYALEPLAYERREALTIMEDATA_OFFSET))(this, playerData);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameOpponent*>* GetProcessedOpponentsForRoyale()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MatchThreeGameOpponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GETPROCESSEDOPPONENTSFORROYALE_OFFSET))(this);
		}

		::System::Void _UpdateRoyalePlayer(::Class_1_352A8B3482C80E7D_23* playerData, ::System::UInt32 round)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_352A8B3482C80E7D_23*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__UPDATEROYALEPLAYER_OFFSET))(this, playerData, round);
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

		::System::Void InitPlayers_3(::Class_1_99BD961747420BEB_20* fightMatch3DataScRsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_20*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_INITPLAYERS_3_OFFSET))(this, fightMatch3DataScRsp);
		}

		::System::Void UpdateAllPlayers_3(::Class_1_BB4B99DE4C2501EC_5* match3Data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_UPDATEALLPLAYERS_3_OFFSET))(this, match3Data);
		}

		::System::Void RefreshPreviousRanks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_REFRESHPREVIOUSRANKS_OFFSET))(this);
		}

		::System::Void _UpdatePlayer_1(::System::UInt32 uid, ::System::UInt32 round, ::Class_1_F3CA30716D4FAF92_6* match3PlayerData)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::Class_1_F3CA30716D4FAF92_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__UPDATEPLAYER_1_OFFSET))(this, uid, round, match3PlayerData);
		}

		::System::Void _UpdateSelfPlayer(::Class_1_C9DFE5EE7107C629_7* snapshot)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9DFE5EE7107C629_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__UPDATESELFPLAYER_OFFSET))(this, snapshot);
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

		::Class_1_F3CA30716D4FAF92_6* _FindEnemyData(::Class_1_BB4B99DE4C2501EC_5* match3Data)
		{
			return ((::Class_1_F3CA30716D4FAF92_6*(*)(::PVOID, ::Class_1_BB4B99DE4C2501EC_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME__FINDENEMYDATA_OFFSET))(this, match3Data);
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

		::Class_1_A5CBD6EBD02154CA* get_GameEcsInstance()
		{
			return ((::Class_1_A5CBD6EBD02154CA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_GET_GAMEECSINSTANCE_OFFSET))(this);
		}

		::System::Void set_GameEcsInstance(::Class_1_A5CBD6EBD02154CA* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A5CBD6EBD02154CA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEGAME_SET_GAMEECSINSTANCE_OFFSET))(this, value);
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonopolyGameType.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_64;
class Class_1_4CF8088A158DCE25_55;
class Class_1_81EEA3F759B06252;
class Class_1_964D3E99C6883FD7_13;
class Class_1_CEB0D1FB248C9C52_4;
class Class_1_E577B5580A99D425_5;
class Class_1_FA4F4A67B1C04320_557;
namespace Proto { class MonopolyActionResult; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class LuaUIController; }
namespace RPG::Client { class MonopolyGameBingoData; }
namespace RPG::Client { class MonopolyGameData; }
namespace RPG::Client { class MonopolyGameGuessData; }
namespace RPG::Client { class MonopolyGameQuizData; }
namespace RPG::Client { class MonopolyGameResourceData; }
namespace RPG::Client { class MonopolyQuizSettleParam; }
namespace RPG::GameCore { class MonopolyGameConfigRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOPOLYGAMEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9888760)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GETACTIVATEGAMEDATA_OFFSET UNITYSDK_OFFSET(0x988AC10)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GETGUESSDATA_OFFSET UNITYSDK_OFFSET(0x988A790)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GETQUIZDATA_OFFSET UNITYSDK_OFFSET(0x9889E10)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_ACTIVATEGAMETYPE_OFFSET UNITYSDK_OFFSET(0x988B460)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_BINGODATA_OFFSET UNITYSDK_OFFSET(0x988B610)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_CURGUESSDATA_OFFSET UNITYSDK_OFFSET(0x9889750)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_CURRENTGUESSID_OFFSET UNITYSDK_OFFSET(0x988B480)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_CURRENTQUIZID_OFFSET UNITYSDK_OFFSET(0x988B4E0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_DOINGQUIZIDS_OFFSET UNITYSDK_OFFSET(0x988B4C0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_GAMEDICT_OFFSET UNITYSDK_OFFSET(0x988B360)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_GUESSDATAS_OFFSET UNITYSDK_OFFSET(0x988B4A0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_QUIZDATAS_OFFSET UNITYSDK_OFFSET(0x988B500)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_QUIZDISPLAYROW_OFFSET UNITYSDK_OFFSET(0x988B520)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_RATIOEXTRALIMIT_OFFSET UNITYSDK_OFFSET(0x988B440)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_RATIOMAXLIMIT_OFFSET UNITYSDK_OFFSET(0x988B3E0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_RATIOUNLOCKED_OFFSET UNITYSDK_OFFSET(0x988B3C0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x988B3A0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_RESOURCEDICT_OFFSET UNITYSDK_OFFSET(0x988B380)
#define RPG_CLIENT_MONOPOLYGAMEINFO_HASFINISHEDQUIZ_OFFSET UNITYSDK_OFFSET(0x988A810)
#define RPG_CLIENT_MONOPOLYGAMEINFO_INIT_OFFSET UNITYSDK_OFFSET(0x98881A0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_MODIFY_OFFSET UNITYSDK_OFFSET(0x9889540)
#define RPG_CLIENT_MONOPOLYGAMEINFO_ONGUESSCHOSEN_OFFSET UNITYSDK_OFFSET(0x9889690)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SETGUESSFINISHED_OFFSET UNITYSDK_OFFSET(0x98897D0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SETQUIZCHOSEN_OFFSET UNITYSDK_OFFSET(0x9889D40)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SETQUIZDURATION_OFFSET UNITYSDK_OFFSET(0x988A0A0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SETQUIZFINISHED_OFFSET UNITYSDK_OFFSET(0x988A200)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SET_ACTIVATEGAMETYPE_OFFSET UNITYSDK_OFFSET(0x988B470)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SET_BINGODATA_OFFSET UNITYSDK_OFFSET(0x988B620)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SET_CURRENTGUESSID_OFFSET UNITYSDK_OFFSET(0x988B490)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SET_CURRENTQUIZID_OFFSET UNITYSDK_OFFSET(0x988B4F0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SET_DOINGQUIZIDS_OFFSET UNITYSDK_OFFSET(0x988B4D0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SET_GAMEDICT_OFFSET UNITYSDK_OFFSET(0x988B370)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SET_GUESSDATAS_OFFSET UNITYSDK_OFFSET(0x988B4B0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SET_QUIZDATAS_OFFSET UNITYSDK_OFFSET(0x988B510)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SET_RATIOEXTRALIMIT_OFFSET UNITYSDK_OFFSET(0x988B450)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SET_RATIOUNLOCKED_OFFSET UNITYSDK_OFFSET(0x988B3D0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SET_RATIO_OFFSET UNITYSDK_OFFSET(0x988B3B0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SET_RESOURCEDICT_OFFSET UNITYSDK_OFFSET(0x988B390)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SYNCCURRENTGAME_OFFSET UNITYSDK_OFFSET(0x9889620)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SYNCRATIO_OFFSET UNITYSDK_OFFSET(0x9889310)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x98889C0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_TRYGETMONOPOLYGAMEDATA_1_OFFSET UNITYSDK_OFFSET(0x9886ED0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_TRYGETMONOPOLYGAMEDATA_OFFSET UNITYSDK_OFFSET(0x988AA50)
#define RPG_CLIENT_MONOPOLYGAMEINFO_TRYGETMONOPOLYGAMERESOURCEDATA_OFFSET UNITYSDK_OFFSET(0x988AB30)
#define RPG_CLIENT_MONOPOLYGAMEINFO_TRYSHOWQUIZFINISHEDUI_OFFSET UNITYSDK_OFFSET(0x988A870)
#define RPG_CLIENT_MONOPOLYGAMEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x988B630)
#define RPG_CLIENT_MONOPOLYGAMEINFO__INITGAMES_OFFSET UNITYSDK_OFFSET(0x9888200)
#define RPG_CLIENT_MONOPOLYGAMEINFO__INITMONOPOLYGAMERESOURCES_OFFSET UNITYSDK_OFFSET(0x9888510)
#define RPG_CLIENT_MONOPOLYGAMEINFO__SAFECREATEGUESSDATA_OFFSET UNITYSDK_OFFSET(0x988AC60)
#define RPG_CLIENT_MONOPOLYGAMEINFO__SAFECREATEQUIZDATA_OFFSET UNITYSDK_OFFSET(0x988AD90)
#define RPG_CLIENT_MONOPOLYGAMEINFO__SETCURRENTGAME_OFFSET UNITYSDK_OFFSET(0x9889370)
#define RPG_CLIENT_MONOPOLYGAMEINFO__SYNCGAMEINFO_OFFSET UNITYSDK_OFFSET(0x9888F00)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyGameInfo_TypeDefinitionIndex = 52744;

	class MonopolyGameInfo : public ::System::Object
	{
	public:
		::RPG::Client::MonopolyGameBingoData* _BingoData_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyGameData*>* _GameDict_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyGameGuessData*>* _GuessDatas_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyQuizSettleParam*>* _CachedFinishedQuizs; // 0x28
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonopolyGameType, ::System::UInt32>* _TypeIndex; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyGameQuizData*>* _QuizDatas_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* _DoingQuizIDs_k__BackingField; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyGameResourceData*>* _ResourceDict_k__BackingField; // 0x48
		::System::Boolean _RatioUnlocked_k__BackingField; // 0x50
		::System::UInt32 _Ratio_k__BackingField; // 0x54
		::System::UInt32 _CurrentGuessID_k__BackingField; // 0x58
		::System::UInt32 _RatioExtraLimit_k__BackingField; // 0x5C
		::RPG::GameCore::MonopolyGameType _ActivateGameType_k__BackingField; // 0x60
		::System::UInt32 _CurrentQuizID_k__BackingField; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_INIT_OFFSET))(this);
		}

		::System::Void _InitGames()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO__INITGAMES_OFFSET))(this);
		}

		::System::Void _InitMonopolyGameResources()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO__INITMONOPOLYGAMERESOURCES_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_CEB0D1FB248C9C52_4* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CEB0D1FB248C9C52_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_SYNC_OFFSET))(this, info);
		}

		::System::Void Modify(::Proto::MonopolyActionResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_MODIFY_OFFSET))(this, result);
		}

		::System::Void SyncCurrentGame(::Class_1_81EEA3F759B06252* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_81EEA3F759B06252*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_SYNCCURRENTGAME_OFFSET))(this, info);
		}

		::System::Void SyncRatio(::Class_1_4CF8088A158DCE25_55* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_55*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_SYNCRATIO_OFFSET))(this, info);
		}

		::System::Void OnGuessChosen(::System::UInt32 playerID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_ONGUESSCHOSEN_OFFSET))(this, playerID);
		}

		::System::Void SetGuessFinished(::System::Collections::Generic::List_1<::Class_1_964D3E99C6883FD7_13*>* infos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_964D3E99C6883FD7_13*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_SETGUESSFINISHED_OFFSET))(this, infos);
		}

		::System::Void SetQuizChosen(::System::UInt32 quizID, ::System::Collections::Generic::List_1<::Class_1_FA4F4A67B1C04320_557*>* taskInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_FA4F4A67B1C04320_557*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_SETQUIZCHOSEN_OFFSET))(this, quizID, taskInfos);
		}

		::System::Void SetQuizDuration(::Class_1_120319518E6F6581_64* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_64*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_SETQUIZDURATION_OFFSET))(this, info);
		}

		::System::Void SetQuizFinished(::Class_1_E577B5580A99D425_5* game, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* rewardItems, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* extraRewardItems)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E577B5580A99D425_5*, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_SETQUIZFINISHED_OFFSET))(this, game, rewardItems, extraRewardItems);
		}

		::RPG::Client::MonopolyGameGuessData* GetGuessData(::System::UInt32 guessID)
		{
			return ((::RPG::Client::MonopolyGameGuessData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_GETGUESSDATA_OFFSET))(this, guessID);
		}

		::RPG::Client::MonopolyGameQuizData* GetQuizData(::System::UInt32 id)
		{
			return ((::RPG::Client::MonopolyGameQuizData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_GETQUIZDATA_OFFSET))(this, id);
		}

		::System::Boolean HasFinishedQuiz()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_HASFINISHEDQUIZ_OFFSET))(this);
		}

		::RPG::Client::LuaUIController* TryShowQuizFinishedUI()
		{
			return ((::RPG::Client::LuaUIController*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_TRYSHOWQUIZFINISHEDUI_OFFSET))(this);
		}

		::RPG::Client::MonopolyGameData* TryGetMonopolyGameData(::System::UInt32 gameID)
		{
			return ((::RPG::Client::MonopolyGameData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_TRYGETMONOPOLYGAMEDATA_OFFSET))(this, gameID);
		}

		::RPG::Client::MonopolyGameData* TryGetMonopolyGameData_1(::RPG::GameCore::MonopolyGameType gameType)
		{
			return ((::RPG::Client::MonopolyGameData*(*)(::PVOID, ::RPG::GameCore::MonopolyGameType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_TRYGETMONOPOLYGAMEDATA_1_OFFSET))(this, gameType);
		}

		::RPG::Client::MonopolyGameResourceData* TryGetMonopolyGameResourceData(::System::UInt32 resourceID)
		{
			return ((::RPG::Client::MonopolyGameResourceData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_TRYGETMONOPOLYGAMERESOURCEDATA_OFFSET))(this, resourceID);
		}

		::RPG::Client::MonopolyGameData* GetActivateGameData()
		{
			return ((::RPG::Client::MonopolyGameData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_GETACTIVATEGAMEDATA_OFFSET))(this);
		}

		::System::Void _SetCurrentGame(::Class_1_81EEA3F759B06252* game)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_81EEA3F759B06252*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO__SETCURRENTGAME_OFFSET))(this, game);
		}

		::System::Void _SyncGameInfo(::Class_1_81EEA3F759B06252* game)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_81EEA3F759B06252*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO__SYNCGAMEINFO_OFFSET))(this, game);
		}

		::RPG::Client::MonopolyGameGuessData* _SafeCreateGuessData(::System::UInt32 guessID)
		{
			return ((::RPG::Client::MonopolyGameGuessData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO__SAFECREATEGUESSDATA_OFFSET))(this, guessID);
		}

		::RPG::Client::MonopolyGameQuizData* _SafeCreateQuizData(::System::UInt32 id)
		{
			return ((::RPG::Client::MonopolyGameQuizData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO__SAFECREATEQUIZDATA_OFFSET))(this, id);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyGameData*>* get_GameDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyGameData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_GET_GAMEDICT_OFFSET))(this);
		}

		::System::Void set_GameDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyGameData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyGameData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_SET_GAMEDICT_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyGameResourceData*>* get_ResourceDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyGameResourceData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_GET_RESOURCEDICT_OFFSET))(this);
		}

		::System::Void set_ResourceDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyGameResourceData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyGameResourceData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_SET_RESOURCEDICT_OFFSET))(this, value);
		}

		::System::UInt32 get_Ratio()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_GET_RATIO_OFFSET))(this);
		}

		::System::Void set_Ratio(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_SET_RATIO_OFFSET))(this, value);
		}

		::System::Boolean get_RatioUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_GET_RATIOUNLOCKED_OFFSET))(this);
		}

		::System::Void set_RatioUnlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_SET_RATIOUNLOCKED_OFFSET))(this, value);
		}

		::System::UInt32 get_RatioMaxLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_GET_RATIOMAXLIMIT_OFFSET))(this);
		}

		::System::UInt32 get_RatioExtraLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_GET_RATIOEXTRALIMIT_OFFSET))(this);
		}

		::System::Void set_RatioExtraLimit(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_SET_RATIOEXTRALIMIT_OFFSET))(this, value);
		}

		::RPG::GameCore::MonopolyGameType get_ActivateGameType()
		{
			return ((::RPG::GameCore::MonopolyGameType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_GET_ACTIVATEGAMETYPE_OFFSET))(this);
		}

		::System::Void set_ActivateGameType(::RPG::GameCore::MonopolyGameType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MonopolyGameType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_SET_ACTIVATEGAMETYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_CurrentGuessID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_GET_CURRENTGUESSID_OFFSET))(this);
		}

		::System::Void set_CurrentGuessID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_SET_CURRENTGUESSID_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyGameGuessData*>* get_GuessDatas()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyGameGuessData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_GET_GUESSDATAS_OFFSET))(this);
		}

		::System::Void set_GuessDatas(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyGameGuessData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyGameGuessData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_SET_GUESSDATAS_OFFSET))(this, value);
		}

		::RPG::Client::MonopolyGameGuessData* get_CurGuessData()
		{
			return ((::RPG::Client::MonopolyGameGuessData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_GET_CURGUESSDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_DoingQuizIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_GET_DOINGQUIZIDS_OFFSET))(this);
		}

		::System::Void set_DoingQuizIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_SET_DOINGQUIZIDS_OFFSET))(this, value);
		}

		::System::UInt32 get_CurrentQuizID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_GET_CURRENTQUIZID_OFFSET))(this);
		}

		::System::Void set_CurrentQuizID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_SET_CURRENTQUIZID_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyGameQuizData*>* get_QuizDatas()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyGameQuizData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_GET_QUIZDATAS_OFFSET))(this);
		}

		::System::Void set_QuizDatas(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyGameQuizData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyGameQuizData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_SET_QUIZDATAS_OFFSET))(this, value);
		}

		::RPG::GameCore::MonopolyGameConfigRow* get_QuizDisplayRow()
		{
			return ((::RPG::GameCore::MonopolyGameConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_GET_QUIZDISPLAYROW_OFFSET))(this);
		}

		::RPG::Client::MonopolyGameBingoData* get_BingoData()
		{
			return ((::RPG::Client::MonopolyGameBingoData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_GET_BINGODATA_OFFSET))(this);
		}

		::System::Void set_BingoData(::RPG::Client::MonopolyGameBingoData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonopolyGameBingoData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_SET_BINGODATA_OFFSET))(this, value);
		}
	};
}

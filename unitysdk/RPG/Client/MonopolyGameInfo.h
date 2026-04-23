#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MonopolyGameType.h"
#include "unitysdk/System/Object.h"

class Class_1_21C7581DFE99F091_67;
class Class_1_752A428518BC8100_4;
class Class_1_905995C4C61F81F7_13;
class Class_1_D17272E82AE804C2_613;
class Class_1_D1E0AD3915BCCF29_72;
class Class_1_D5163FD2F1F43324;
class Class_1_E577B5580A99D425_6;
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

#define RPG_CLIENT_MONOPOLYGAMEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x175FDCF0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GETACTIVATEGAMEDATA_OFFSET UNITYSDK_OFFSET(0x176001C0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GETGUESSDATA_OFFSET UNITYSDK_OFFSET(0x175FFD40)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GETQUIZDATA_OFFSET UNITYSDK_OFFSET(0x175FF3B0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_ACTIVATEGAMETYPE_OFFSET UNITYSDK_OFFSET(0x17600B30)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_BINGODATA_OFFSET UNITYSDK_OFFSET(0x17600CE0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_CURGUESSDATA_OFFSET UNITYSDK_OFFSET(0x175FECE0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_CURRENTGUESSID_OFFSET UNITYSDK_OFFSET(0x17600B50)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_CURRENTQUIZID_OFFSET UNITYSDK_OFFSET(0x17600BB0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_DOINGQUIZIDS_OFFSET UNITYSDK_OFFSET(0x17600B90)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_GAMEDICT_OFFSET UNITYSDK_OFFSET(0x17600930)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_GUESSDATAS_OFFSET UNITYSDK_OFFSET(0x17600B70)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_QUIZDATAS_OFFSET UNITYSDK_OFFSET(0x17600BD0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_QUIZDISPLAYROW_OFFSET UNITYSDK_OFFSET(0x17600BF0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_RATIOEXTRALIMIT_OFFSET UNITYSDK_OFFSET(0x17600B10)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_RATIOMAXLIMIT_OFFSET UNITYSDK_OFFSET(0x176009B0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_RATIOUNLOCKED_OFFSET UNITYSDK_OFFSET(0x17600990)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x17600970)
#define RPG_CLIENT_MONOPOLYGAMEINFO_GET_RESOURCEDICT_OFFSET UNITYSDK_OFFSET(0x17600950)
#define RPG_CLIENT_MONOPOLYGAMEINFO_HASFINISHEDQUIZ_OFFSET UNITYSDK_OFFSET(0x175FFDC0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_INIT_OFFSET UNITYSDK_OFFSET(0x175FD730)
#define RPG_CLIENT_MONOPOLYGAMEINFO_MODIFY_OFFSET UNITYSDK_OFFSET(0x175FEAD0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_ONGUESSCHOSEN_OFFSET UNITYSDK_OFFSET(0x175FEC20)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SETGUESSFINISHED_OFFSET UNITYSDK_OFFSET(0x175FED60)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SETQUIZCHOSEN_OFFSET UNITYSDK_OFFSET(0x175FF2E0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SETQUIZDURATION_OFFSET UNITYSDK_OFFSET(0x175FF640)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SETQUIZFINISHED_OFFSET UNITYSDK_OFFSET(0x175FF7A0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SET_ACTIVATEGAMETYPE_OFFSET UNITYSDK_OFFSET(0x17600B40)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SET_BINGODATA_OFFSET UNITYSDK_OFFSET(0x17600CF0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SET_CURRENTGUESSID_OFFSET UNITYSDK_OFFSET(0x17600B60)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SET_CURRENTQUIZID_OFFSET UNITYSDK_OFFSET(0x17600BC0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SET_DOINGQUIZIDS_OFFSET UNITYSDK_OFFSET(0x17600BA0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SET_GAMEDICT_OFFSET UNITYSDK_OFFSET(0x17600940)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SET_GUESSDATAS_OFFSET UNITYSDK_OFFSET(0x17600B80)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SET_QUIZDATAS_OFFSET UNITYSDK_OFFSET(0x17600BE0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SET_RATIOEXTRALIMIT_OFFSET UNITYSDK_OFFSET(0x17600B20)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SET_RATIOUNLOCKED_OFFSET UNITYSDK_OFFSET(0x176009A0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SET_RATIO_OFFSET UNITYSDK_OFFSET(0x17600980)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SET_RESOURCEDICT_OFFSET UNITYSDK_OFFSET(0x17600960)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SYNCCURRENTGAME_OFFSET UNITYSDK_OFFSET(0x175FEBB0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SYNCRATIO_OFFSET UNITYSDK_OFFSET(0x175FE8A0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x175FDF50)
#define RPG_CLIENT_MONOPOLYGAMEINFO_TRYGETMONOPOLYGAMEDATA_1_OFFSET UNITYSDK_OFFSET(0x175FC3F0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_TRYGETMONOPOLYGAMEDATA_OFFSET UNITYSDK_OFFSET(0x17600000)
#define RPG_CLIENT_MONOPOLYGAMEINFO_TRYGETMONOPOLYGAMERESOURCEDATA_OFFSET UNITYSDK_OFFSET(0x176000E0)
#define RPG_CLIENT_MONOPOLYGAMEINFO_TRYSHOWQUIZFINISHEDUI_OFFSET UNITYSDK_OFFSET(0x175FFE20)
#define RPG_CLIENT_MONOPOLYGAMEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17600D00)
#define RPG_CLIENT_MONOPOLYGAMEINFO__INITGAMES_OFFSET UNITYSDK_OFFSET(0x175FD790)
#define RPG_CLIENT_MONOPOLYGAMEINFO__INITMONOPOLYGAMERESOURCES_OFFSET UNITYSDK_OFFSET(0x175FDAA0)
#define RPG_CLIENT_MONOPOLYGAMEINFO__SAFECREATEGUESSDATA_OFFSET UNITYSDK_OFFSET(0x17600210)
#define RPG_CLIENT_MONOPOLYGAMEINFO__SAFECREATEQUIZDATA_OFFSET UNITYSDK_OFFSET(0x17600340)
#define RPG_CLIENT_MONOPOLYGAMEINFO__SETCURRENTGAME_OFFSET UNITYSDK_OFFSET(0x175FE900)
#define RPG_CLIENT_MONOPOLYGAMEINFO__SYNCGAMEINFO_OFFSET UNITYSDK_OFFSET(0x175FE490)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyGameInfo_TypeDefinitionIndex = 61025;

	class MonopolyGameInfo : public ::System::Object
	{
	public:
		::RPG::Client::MonopolyGameBingoData* _BingoData_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyGameData*>* _GameDict_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::MonopolyGameType, ::System::UInt32>* _TypeIndex; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyGameQuizData*>* _QuizDatas_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::MonopolyQuizSettleParam*>* _CachedFinishedQuizs; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyGameResourceData*>* _ResourceDict_k__BackingField; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MonopolyGameGuessData*>* _GuessDatas_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::System::UInt32>* _DoingQuizIDs_k__BackingField; // 0x48
		::System::UInt32 _CurrentQuizID_k__BackingField; // 0x50
		::System::UInt32 _RatioExtraLimit_k__BackingField; // 0x54
		::System::UInt32 _CurrentGuessID_k__BackingField; // 0x58
		::RPG::GameCore::MonopolyGameType _ActivateGameType_k__BackingField; // 0x5C
		::System::Boolean _RatioUnlocked_k__BackingField; // 0x60
		::System::UInt32 _Ratio_k__BackingField; // 0x64

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

		::System::Void Sync(::Class_1_752A428518BC8100_4* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_752A428518BC8100_4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_SYNC_OFFSET))(this, info);
		}

		::System::Void Modify(::Proto::MonopolyActionResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MonopolyActionResult*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_MODIFY_OFFSET))(this, result);
		}

		::System::Void SyncCurrentGame(::Class_1_D5163FD2F1F43324* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D5163FD2F1F43324*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_SYNCCURRENTGAME_OFFSET))(this, info);
		}

		::System::Void SyncRatio(::Class_1_21C7581DFE99F091_67* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_21C7581DFE99F091_67*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_SYNCRATIO_OFFSET))(this, info);
		}

		::System::Void OnGuessChosen(::System::UInt32 playerID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_ONGUESSCHOSEN_OFFSET))(this, playerID);
		}

		::System::Void SetGuessFinished(::System::Collections::Generic::List_1<::Class_1_905995C4C61F81F7_13*>* infos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_905995C4C61F81F7_13*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_SETGUESSFINISHED_OFFSET))(this, infos);
		}

		::System::Void SetQuizChosen(::System::UInt32 quizID, ::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_613*>* taskInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::Class_1_D17272E82AE804C2_613*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_SETQUIZCHOSEN_OFFSET))(this, quizID, taskInfos);
		}

		::System::Void SetQuizDuration(::Class_1_D1E0AD3915BCCF29_72* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1E0AD3915BCCF29_72*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_SETQUIZDURATION_OFFSET))(this, info);
		}

		::System::Void SetQuizFinished(::Class_1_E577B5580A99D425_6* game, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* rewardItems, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* extraRewardItems)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E577B5580A99D425_6*, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO_SETQUIZFINISHED_OFFSET))(this, game, rewardItems, extraRewardItems);
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

		::System::Void _SetCurrentGame(::Class_1_D5163FD2F1F43324* game)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D5163FD2F1F43324*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO__SETCURRENTGAME_OFFSET))(this, game);
		}

		::System::Void _SyncGameInfo(::Class_1_D5163FD2F1F43324* game)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D5163FD2F1F43324*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYGAMEINFO__SYNCGAMEINFO_OFFSET))(this, game);
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

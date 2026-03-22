#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/RPG/GameCore/RogueTournAreaGroupID.h"
#include "unitysdk/RPG/GameCore/RogueTournDifficultyType.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_5728D1BA9A6E1148;
class Class_1_BD2C8496C23D4C2D_3;
class Class_1_FA4F4A67B1C04320_790;
class Class_1_FF220487FAB45279_1;
namespace Proto { class ItemList; }
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class RogueBuffInfo; }
namespace RPG::Client { class RogueFormulaInfo; }
namespace RPG::Client { class RogueKeywordInfo; }
namespace RPG::Client { class RogueMiracleInfo; }
namespace RPG::Client { class RogueTournGameData; }
namespace RPG::Client { class RogueTournGameScoreInfoItem; }
namespace RPG::Client { class RogueTournSettleTournExpInfoItem; }
namespace RPG::Client { class RogueTournTitanBlessInfo; }
namespace RPG::GameCore { class RogueTournAreaRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNSETTLEDATA_CACHECURGAMEBUILDREFID_OFFSET UNITYSDK_OFFSET(0x9F19A90)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F19880)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GETALLANDFINISHEDROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x9F19AF0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUEBUFFINFO_OFFSET UNITYSDK_OFFSET(0x9F19670)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUEFORMULAINFO_OFFSET UNITYSDK_OFFSET(0x9F19750)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUEKEYWORDINFO_OFFSET UNITYSDK_OFFSET(0x9F197C0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUEMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x9F196E0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUETOURNTITANBLESSINFO_OFFSET UNITYSDK_OFFSET(0x9F19830)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_AREADIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x9F1AB20)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_AREAGROUPID_OFFSET UNITYSDK_OFFSET(0x9F1A780)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x9F1A700)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_AVATARDATALIST_OFFSET UNITYSDK_OFFSET(0x9F1ABD0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0x9F1AC10)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_BUILDREFID_OFFSET UNITYSDK_OFFSET(0x9F1AEA0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_DIFFICULTYTYPE_OFFSET UNITYSDK_OFFSET(0x9F1A950)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x9F1AAE0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_DIVISIONPROGRESS_OFFSET UNITYSDK_OFFSET(0x9F1AB00)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ENABLEFREEMODE_OFFSET UNITYSDK_OFFSET(0x9F1AE80)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ENABLEGODMODE_OFFSET UNITYSDK_OFFSET(0x9F1AE60)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_FIRSTREWARDITEMS_OFFSET UNITYSDK_OFFSET(0x9F1ACF0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_FORMULAINFO_OFFSET UNITYSDK_OFFSET(0x9F1AC50)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ISALLCURRENCYREACHLIMIT_OFFSET UNITYSDK_OFFSET(0x9F1AD30)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ISGUIDE_OFFSET UNITYSDK_OFFSET(0x9F1AAC0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ISHARD_OFFSET UNITYSDK_OFFSET(0x9F1AA00)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0x9F1A720)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_KEYWORDINFO_OFFSET UNITYSDK_OFFSET(0x9F1ACD0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x9F1AC30)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ROGUECOINNUM_OFFSET UNITYSDK_OFFSET(0x9F1ABF0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ROGUESCOREINFO_OFFSET UNITYSDK_OFFSET(0x9F1AE00)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_TALENTCOININFO_OFFSET UNITYSDK_OFFSET(0x9F1AE20)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_TITANBLESSINFO_OFFSET UNITYSDK_OFFSET(0x9F1AC70)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_TITANTALENTCOININFO_OFFSET UNITYSDK_OFFSET(0x9F1AE40)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_TOURNEXPINFO_OFFSET UNITYSDK_OFFSET(0x9F1ADE0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0x9F1A8A0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_WEEKCHALLENGEREWARDITEMS_OFFSET UNITYSDK_OFFSET(0x9F1AD10)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_GET__AREAROW_OFFSET UNITYSDK_OFFSET(0x9F1A830)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_AVATARDATALIST_OFFSET UNITYSDK_OFFSET(0x9F1ABE0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_BUILDREFID_OFFSET UNITYSDK_OFFSET(0x9F1AEC0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x9F1AAF0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_DIVISIONPROGRESS_OFFSET UNITYSDK_OFFSET(0x9F1AB10)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_FIRSTREWARDITEMS_OFFSET UNITYSDK_OFFSET(0x9F1AD00)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_ROGUECOINNUM_OFFSET UNITYSDK_OFFSET(0x9F1AC00)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_ROGUESCOREINFO_OFFSET UNITYSDK_OFFSET(0x9F1AE10)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_TALENTCOININFO_OFFSET UNITYSDK_OFFSET(0x9F1AE30)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_TITANTALENTCOININFO_OFFSET UNITYSDK_OFFSET(0x9F1AE50)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_TOURNEXPINFO_OFFSET UNITYSDK_OFFSET(0x9F1ADF0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_WEEKCHALLENGEREWARDITEMS_OFFSET UNITYSDK_OFFSET(0x9F1AD20)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA_SYNCREWARDS_OFFSET UNITYSDK_OFFSET(0x9F19970)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9F19400)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNCAVATARDATA_OFFSET UNITYSDK_OFFSET(0x9F1A190)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNCDIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x9F1A4A0)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNCROGUECOIN_OFFSET UNITYSDK_OFFSET(0x9F1A100)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNCSCOREINFO_OFFSET UNITYSDK_OFFSET(0x9F19E70)
#define RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNC_OFFSET UNITYSDK_OFFSET(0x9F19510)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournSettleData_TypeDefinitionIndex = 53806;

	class RogueTournSettleData : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournGameScoreInfoItem* _TalentCoinInfo_k__BackingField; // 0x10
		::RPG::Client::RogueTournSettleTournExpInfoItem* _TournExpInfo_k__BackingField; // 0x18
		::RPG::Client::RogueTournGameScoreInfoItem* _TitanTalentCoinInfo_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _WeekChallengeRewardItems_k__BackingField; // 0x28
		::RPG::Client::RogueTournGameData* _GameData; // 0x30
		::RPG::Client::RogueTournGameScoreInfoItem* _RogueScoreInfo_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _FirstRewardItems_k__BackingField; // 0x40
		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* _AvatarDataList_k__BackingField; // 0x48
		::System::UInt32 _RogueCoinNum_k__BackingField; // 0x50
		::RPG::Client::MongoObjectId _BuildRefID_k__BackingField; // 0x54
		::System::UInt32 _DivisionLevel_k__BackingField; // 0x60
		::System::UInt32 _DivisionProgress_k__BackingField; // 0x64

		::System::Void _ctor(::Class_1_FF220487FAB45279_1* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FF220487FAB45279_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA__CTOR_OFFSET))(this, proto);
		}

		::RPG::Client::RogueBuffInfo* GetRogueBuffInfo()
		{
			return ((::RPG::Client::RogueBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUEBUFFINFO_OFFSET))(this);
		}

		::RPG::Client::RogueMiracleInfo* GetRogueMiracleInfo()
		{
			return ((::RPG::Client::RogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUEMIRACLEINFO_OFFSET))(this);
		}

		::RPG::Client::RogueFormulaInfo* GetRogueFormulaInfo()
		{
			return ((::RPG::Client::RogueFormulaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUEFORMULAINFO_OFFSET))(this);
		}

		::RPG::Client::RogueKeywordInfo* GetRogueKeywordInfo()
		{
			return ((::RPG::Client::RogueKeywordInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUEKEYWORDINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournTitanBlessInfo* GetRogueTournTitanBlessInfo()
		{
			return ((::RPG::Client::RogueTournTitanBlessInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GETROGUETOURNTITANBLESSINFO_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncRewards(::Proto::ItemList* firstRewards, ::Proto::ItemList* weekChallengeRewards)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SYNCREWARDS_OFFSET))(this, firstRewards, weekChallengeRewards);
		}

		::System::Void CacheCurGameBuildRefID(::RPG::Client::MongoObjectId buildRefID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_CACHECURGAMEBUILDREFID_OFFSET))(this, buildRefID);
		}

		::System::Void GetAllAndFinishedRoomCount(::System::UInt32& allRoomCount, ::System::UInt32& finishedRoomCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GETALLANDFINISHEDROOMCOUNT_OFFSET))(this, allRoomCount, finishedRoomCount);
		}

		::System::Void _Sync(::Class_1_FF220487FAB45279_1* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FF220487FAB45279_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNC_OFFSET))(this, proto);
		}

		::System::Void _SyncScoreInfo(::Class_1_FF220487FAB45279_1* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FF220487FAB45279_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNCSCOREINFO_OFFSET))(this, proto);
		}

		::System::Void _SyncRogueCoin(::Class_1_BD2C8496C23D4C2D_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_BD2C8496C23D4C2D_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNCROGUECOIN_OFFSET))(this, proto);
		}

		::System::Void _SyncAvatarData(::Class_1_5728D1BA9A6E1148* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5728D1BA9A6E1148*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNCAVATARDATA_OFFSET))(this, proto);
		}

		::System::Void _SyncDivisionLevel(::Class_1_FA4F4A67B1C04320_790* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FA4F4A67B1C04320_790*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA__SYNCDIVISIONLEVEL_OFFSET))(this, proto);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_AREAID_OFFSET))(this);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ISWIN_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournAreaGroupID get_AreaGroupID()
		{
			return ((::RPG::GameCore::RogueTournAreaGroupID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_AREAGROUPID_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournMode get_TournMode()
		{
			return ((::RPG::GameCore::RogueTournMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_TOURNMODE_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournDifficultyType get_DifficultyType()
		{
			return ((::RPG::GameCore::RogueTournDifficultyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_DIFFICULTYTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsHard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ISHARD_OFFSET))(this);
		}

		::System::Boolean get_IsGuide()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ISGUIDE_OFFSET))(this);
		}

		::System::UInt32 get_DivisionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_DIVISIONLEVEL_OFFSET))(this);
		}

		::System::Void set_DivisionLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_DIVISIONLEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_DivisionProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_DIVISIONPROGRESS_OFFSET))(this);
		}

		::System::Void set_DivisionProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_DIVISIONPROGRESS_OFFSET))(this, value);
		}

		::System::UInt32 get_AreaDivisionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_AREADIVISIONLEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* get_AvatarDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_AVATARDATALIST_OFFSET))(this);
		}

		::System::Void set_AvatarDataList(::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_AVATARDATALIST_OFFSET))(this, value);
		}

		::System::UInt32 get_RogueCoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ROGUECOINNUM_OFFSET))(this);
		}

		::System::Void set_RogueCoinNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_ROGUECOINNUM_OFFSET))(this, value);
		}

		::RPG::Client::RogueBuffInfo* get_BuffInfo()
		{
			return ((::RPG::Client::RogueBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_BUFFINFO_OFFSET))(this);
		}

		::RPG::Client::RogueMiracleInfo* get_MiracleInfo()
		{
			return ((::RPG::Client::RogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_MIRACLEINFO_OFFSET))(this);
		}

		::RPG::Client::RogueFormulaInfo* get_FormulaInfo()
		{
			return ((::RPG::Client::RogueFormulaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_FORMULAINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournTitanBlessInfo* get_TitanBlessInfo()
		{
			return ((::RPG::Client::RogueTournTitanBlessInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_TITANBLESSINFO_OFFSET))(this);
		}

		::RPG::Client::RogueKeywordInfo* get_KeywordInfo()
		{
			return ((::RPG::Client::RogueKeywordInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_KEYWORDINFO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_FirstRewardItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_FIRSTREWARDITEMS_OFFSET))(this);
		}

		::System::Void set_FirstRewardItems(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_FIRSTREWARDITEMS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_WeekChallengeRewardItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_WEEKCHALLENGEREWARDITEMS_OFFSET))(this);
		}

		::System::Void set_WeekChallengeRewardItems(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_WEEKCHALLENGEREWARDITEMS_OFFSET))(this, value);
		}

		::System::Boolean get_IsAllCurrencyReachLimit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ISALLCURRENCYREACHLIMIT_OFFSET))(this);
		}

		::RPG::Client::RogueTournSettleTournExpInfoItem* get_TournExpInfo()
		{
			return ((::RPG::Client::RogueTournSettleTournExpInfoItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_TOURNEXPINFO_OFFSET))(this);
		}

		::System::Void set_TournExpInfo(::RPG::Client::RogueTournSettleTournExpInfoItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournSettleTournExpInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_TOURNEXPINFO_OFFSET))(this, value);
		}

		::RPG::Client::RogueTournGameScoreInfoItem* get_RogueScoreInfo()
		{
			return ((::RPG::Client::RogueTournGameScoreInfoItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ROGUESCOREINFO_OFFSET))(this);
		}

		::System::Void set_RogueScoreInfo(::RPG::Client::RogueTournGameScoreInfoItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournGameScoreInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_ROGUESCOREINFO_OFFSET))(this, value);
		}

		::RPG::Client::RogueTournGameScoreInfoItem* get_TalentCoinInfo()
		{
			return ((::RPG::Client::RogueTournGameScoreInfoItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_TALENTCOININFO_OFFSET))(this);
		}

		::System::Void set_TalentCoinInfo(::RPG::Client::RogueTournGameScoreInfoItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournGameScoreInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_TALENTCOININFO_OFFSET))(this, value);
		}

		::RPG::Client::RogueTournGameScoreInfoItem* get_TitanTalentCoinInfo()
		{
			return ((::RPG::Client::RogueTournGameScoreInfoItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_TITANTALENTCOININFO_OFFSET))(this);
		}

		::System::Void set_TitanTalentCoinInfo(::RPG::Client::RogueTournGameScoreInfoItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournGameScoreInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_TITANTALENTCOININFO_OFFSET))(this, value);
		}

		::System::Boolean get_EnableGodMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ENABLEGODMODE_OFFSET))(this);
		}

		::System::Boolean get_EnableFreeMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_ENABLEFREEMODE_OFFSET))(this);
		}

		::RPG::Client::MongoObjectId get_BuildRefID()
		{
			return ((::RPG::Client::MongoObjectId(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET_BUILDREFID_OFFSET))(this);
		}

		::System::Void set_BuildRefID(::RPG::Client::MongoObjectId value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_SET_BUILDREFID_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueTournAreaRow* get__AreaRow()
		{
			return ((::RPG::GameCore::RogueTournAreaRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNSETTLEDATA_GET__AREAROW_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MarblePhaseType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityMarble { class MarbleGroupPlayerRankInfo; }
namespace RPG::Client::ActivityMarble { class MarblePlayerProgressInfo; }
namespace RPG::Client::ActivityMarble { class MarblePvePlayer; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GETLASTPLAYERRANKINFOLIST_OFFSET UNITYSDK_OFFSET(0x8B65EB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GETPLAYERRANKINFOLIST_OFFSET UNITYSDK_OFFSET(0x8B65E70)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_CURRENTMATCHNUMBER_OFFSET UNITYSDK_OFFSET(0x8B66230)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_ENEMYPLAYER_OFFSET UNITYSDK_OFFSET(0x8B662D0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x8B65B20)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_PROGRESSID_OFFSET UNITYSDK_OFFSET(0x8B662B0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_PROGRESSNAME_OFFSET UNITYSDK_OFFSET(0x8B66270)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_REWARDID_OFFSET UNITYSDK_OFFSET(0x8B66380)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_STAGENAME_OFFSET UNITYSDK_OFFSET(0x8B66290)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_TOTALMATCHCOUNT_OFFSET UNITYSDK_OFFSET(0x8B66250)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_INIT_OFFSET UNITYSDK_OFFSET(0x8B65B30)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_OPENSETTLEPAGEVIEW_OFFSET UNITYSDK_OFFSET(0x8B66090)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_OPENSTAGEINFOPAGEVIEW_OFFSET UNITYSDK_OFFSET(0x8B65EF0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_SET_CURRENTMATCHNUMBER_OFFSET UNITYSDK_OFFSET(0x8B66240)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_SET_PROGRESSID_OFFSET UNITYSDK_OFFSET(0x8B662C0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_SET_PROGRESSNAME_OFFSET UNITYSDK_OFFSET(0x8B66280)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_SET_REWARDID_OFFSET UNITYSDK_OFFSET(0x8B66390)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_SET_STAGENAME_OFFSET UNITYSDK_OFFSET(0x8B662A0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_SET_TOTALMATCHCOUNT_OFFSET UNITYSDK_OFFSET(0x8B66260)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_SYNC_OFFSET UNITYSDK_OFFSET(0x8B65BB0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x8B659C0)
#define RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE__UPDATEPLAYERLIST_OFFSET UNITYSDK_OFFSET(0x8B65C70)

namespace RPG::Client::ActivityMarble
{
	inline static constexpr unsigned int MarbleGroupStage_TypeDefinitionIndex = 59681;

	class MarbleGroupStage : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleGroupPlayerRankInfo*>* _LastPlayerRankInfoList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleGroupPlayerRankInfo*>* _PlayerRankInfoList; // 0x18
		::System::UInt32 _TotalMatchCount_k__BackingField; // 0x20
		::System::UInt32 _EmmyPlayerID; // 0x24
		::System::UInt32 _RewardID_k__BackingField; // 0x28
		::System::UInt32 _CurrentMatchNumber_k__BackingField; // 0x2C
		::System::UInt32 _ProgressID_k__BackingField; // 0x30
		::RPG::Client::TextID _StageName_k__BackingField; // 0x38
		::RPG::Client::TextID _ProgressName_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_INIT_OFFSET))(this);
		}

		::System::Void Sync(::System::UInt32 progressID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_SYNC_OFFSET))(this, progressID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleGroupPlayerRankInfo*>* GetPlayerRankInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleGroupPlayerRankInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GETPLAYERRANKINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleGroupPlayerRankInfo*>* GetLastPlayerRankInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleGroupPlayerRankInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GETLASTPLAYERRANKINFOLIST_OFFSET))(this);
		}

		::System::Void OpenStageInfoPageView(::RPG::Client::ActivityMarble::MarblePlayerProgressInfo* progressInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePlayerProgressInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_OPENSTAGEINFOPAGEVIEW_OFFSET))(this, progressInfo);
		}

		::System::Void OpenSettlePageView(::RPG::Client::ActivityMarble::MarblePlayerProgressInfo* progressInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActivityMarble::MarblePlayerProgressInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_OPENSETTLEPAGEVIEW_OFFSET))(this, progressInfo);
		}

		::System::Void _UpdatePlayerList(::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleGroupPlayerRankInfo*>* rankInfoList, ::System::UInt32 progressID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityMarble::MarbleGroupPlayerRankInfo*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE__UPDATEPLAYERLIST_OFFSET))(this, rankInfoList, progressID);
		}

		::System::UInt32 get_CurrentMatchNumber()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_CURRENTMATCHNUMBER_OFFSET))(this);
		}

		::System::Void set_CurrentMatchNumber(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_SET_CURRENTMATCHNUMBER_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalMatchCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_TOTALMATCHCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalMatchCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_SET_TOTALMATCHCOUNT_OFFSET))(this, value);
		}

		::RPG::GameCore::MarblePhaseType get_Phase()
		{
			return ((::RPG::GameCore::MarblePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_PHASE_OFFSET))(this);
		}

		::RPG::Client::TextID get_ProgressName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_PROGRESSNAME_OFFSET))(this);
		}

		::System::Void set_ProgressName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_SET_PROGRESSNAME_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_StageName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_STAGENAME_OFFSET))(this);
		}

		::System::Void set_StageName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_SET_STAGENAME_OFFSET))(this, value);
		}

		::System::UInt32 get_ProgressID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_PROGRESSID_OFFSET))(this);
		}

		::System::Void set_ProgressID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_SET_PROGRESSID_OFFSET))(this, value);
		}

		::RPG::Client::ActivityMarble::MarblePvePlayer* get_EnemyPlayer()
		{
			return ((::RPG::Client::ActivityMarble::MarblePvePlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_ENEMYPLAYER_OFFSET))(this);
		}

		::System::UInt32 get_RewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_GET_REWARDID_OFFSET))(this);
		}

		::System::Void set_RewardID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYMARBLE_MARBLEGROUPSTAGE_SET_REWARDID_OFFSET))(this, value);
		}
	};
}

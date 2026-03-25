#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace RPG::Client { class ILineupRecommendation; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEPEAKTEAMAPPLIER_APPLY_OFFSET UNITYSDK_OFFSET(0x92FE6C0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMAPPLIER_CREATE_OFFSET UNITYSDK_OFFSET(0x92FE330)
#define RPG_CLIENT_CHALLENGEPEAKTEAMAPPLIER_GET_BOSSAVATARIDS_OFFSET UNITYSDK_OFFSET(0x92FE2F0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMAPPLIER_GET_BOSSBUFFID_OFFSET UNITYSDK_OFFSET(0x92FE310)
#define RPG_CLIENT_CHALLENGEPEAKTEAMAPPLIER_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x92FE2D0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMAPPLIER_GET_RECOMMENDATION_OFFSET UNITYSDK_OFFSET(0x92FE2E0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMAPPLIER_REPORT_OFFSET UNITYSDK_OFFSET(0x92FE880)
#define RPG_CLIENT_CHALLENGEPEAKTEAMAPPLIER_SETBOSSTEAMINFO_OFFSET UNITYSDK_OFFSET(0x92FE660)
#define RPG_CLIENT_CHALLENGEPEAKTEAMAPPLIER_SETNORMALTEAMINFO_OFFSET UNITYSDK_OFFSET(0x92FE4C0)
#define RPG_CLIENT_CHALLENGEPEAKTEAMAPPLIER_SET_BOSSAVATARIDS_OFFSET UNITYSDK_OFFSET(0x92FE300)
#define RPG_CLIENT_CHALLENGEPEAKTEAMAPPLIER_SET_BOSSBUFFID_OFFSET UNITYSDK_OFFSET(0x92FE320)
#define RPG_CLIENT_CHALLENGEPEAKTEAMAPPLIER_TRYGETNORMALAVATARIDS_OFFSET UNITYSDK_OFFSET(0x92FE580)
#define RPG_CLIENT_CHALLENGEPEAKTEAMAPPLIER__CTOR_OFFSET UNITYSDK_OFFSET(0x92FE430)
#define RPG_CLIENT_CHALLENGEPEAKTEAMAPPLIER__GETREPORTINFO_OFFSET UNITYSDK_OFFSET(0x92FE990)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakTeamApplier_TypeDefinitionIndex = 51300;

	class ChallengePeakTeamApplier : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _BossAvatarIDs_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*>* _NormalAvatarIDs; // 0x18
		::RPG::Client::ILineupRecommendation* _Recommendation_k__BackingField; // 0x20
		::System::UInt32 _BossBuffID_k__BackingField; // 0x28
		::System::Int32 _Index_k__BackingField; // 0x2C

		::System::Void _ctor(::RPG::Client::ILineupRecommendation* recommendation, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ILineupRecommendation*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMAPPLIER__CTOR_OFFSET))(this, recommendation, index);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMAPPLIER_GET_INDEX_OFFSET))(this);
		}

		::RPG::Client::ILineupRecommendation* get_Recommendation()
		{
			return ((::RPG::Client::ILineupRecommendation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMAPPLIER_GET_RECOMMENDATION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_BossAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMAPPLIER_GET_BOSSAVATARIDS_OFFSET))(this);
		}

		::System::Void set_BossAvatarIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMAPPLIER_SET_BOSSAVATARIDS_OFFSET))(this, value);
		}

		::System::UInt32 get_BossBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMAPPLIER_GET_BOSSBUFFID_OFFSET))(this);
		}

		::System::Void set_BossBuffID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMAPPLIER_SET_BOSSBUFFID_OFFSET))(this, value);
		}

		static ::RPG::Client::ChallengePeakTeamApplier* Create(::RPG::Client::ILineupRecommendation* recommendation, ::System::Int32 index)
		{
			return ((::RPG::Client::ChallengePeakTeamApplier*(*)(::RPG::Client::ILineupRecommendation*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMAPPLIER_CREATE_OFFSET))(recommendation, index);
		}

		::System::Void SetNormalTeamInfo(::System::Int32 teamIndex, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMAPPLIER_SETNORMALTEAMINFO_OFFSET))(this, teamIndex, avatarIDs);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* TryGetNormalAvatarIDs(::System::Int32 teamIndex)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMAPPLIER_TRYGETNORMALAVATARIDS_OFFSET))(this, teamIndex);
		}

		::System::Void SetBossTeamInfo(::System::Collections::Generic::List_1<::System::UInt32>* avatarIDs, ::System::UInt32 buffID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMAPPLIER_SETBOSSTEAMINFO_OFFSET))(this, avatarIDs, buffID);
		}

		::System::Void Apply()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMAPPLIER_APPLY_OFFSET))(this);
		}

		::System::Void Report()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMAPPLIER_REPORT_OFFSET))(this);
		}

		::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::UInt32> _GetReportInfo()
		{
			return ((::System::ValueTuple_3<::System::UInt32, ::System::UInt32, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKTEAMAPPLIER__GETREPORTINFO_OFFSET))(this);
		}
	};
}

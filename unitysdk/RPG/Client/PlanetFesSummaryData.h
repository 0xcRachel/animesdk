#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlanetFesEventType.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

class Class_1_FB0633E85BD6CF8E_6;
namespace RPG::Client { class PlanetFesAvatarStatsData; }
namespace RPG::Client { class PlanetFesSummaryPlayerNominate; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESSUMMARYDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9AF2520)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GETEVENTCOUNT_OFFSET UNITYSDK_OFFSET(0x9B04DE0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GETMOSTINCOMEAVATAR_OFFSET UNITYSDK_OFFSET(0x9B04010)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GETMOSTINCOMESPEEDAVATAR_OFFSET UNITYSDK_OFFSET(0x9B04140)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GETMOSTPAMEVENTAVATAR_OFFSET UNITYSDK_OFFSET(0x9B04770)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GETMOSTTALKCOUNTAVATAR_OFFSET UNITYSDK_OFFSET(0x9B048A0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GETMOSTWORKTIMEAVATAR_OFFSET UNITYSDK_OFFSET(0x9B04640)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_ACTIVATECARDNUMS_OFFSET UNITYSDK_OFFSET(0x9B04F60)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_AVATARGACHATOTALCNT_OFFSET UNITYSDK_OFFSET(0x9B04F20)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_AVATARSTATSDATAS_OFFSET UNITYSDK_OFFSET(0x9B05000)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_CARDGACHATOTALCNT_OFFSET UNITYSDK_OFFSET(0x9B04F40)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_CURINCOMESPEED_OFFSET UNITYSDK_OFFSET(0x9B04EE0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_EVENTCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0x9B04FE0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_FINISHEDBUSINESSDAY_OFFSET UNITYSDK_OFFSET(0x9B04F80)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_LARGEBONUSTOTALINCOME_OFFSET UNITYSDK_OFFSET(0x9B04F00)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_PLAYERNOMINATE_OFFSET UNITYSDK_OFFSET(0x9B05020)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_SENDCARDCOUNT_OFFSET UNITYSDK_OFFSET(0x9B04FC0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_TOTALINCOME_OFFSET UNITYSDK_OFFSET(0x9B04EC0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_GET_USESKILLPOINTCOUNT_OFFSET UNITYSDK_OFFSET(0x9B04FA0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_REFRESHPLAYERNOMINATE_OFFSET UNITYSDK_OFFSET(0x9B03EA0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_ACTIVATECARDNUMS_OFFSET UNITYSDK_OFFSET(0x9B04F70)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_AVATARGACHATOTALCNT_OFFSET UNITYSDK_OFFSET(0x9B04F30)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_AVATARSTATSDATAS_OFFSET UNITYSDK_OFFSET(0x9B05010)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_CARDGACHATOTALCNT_OFFSET UNITYSDK_OFFSET(0x9B04F50)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_CURINCOMESPEED_OFFSET UNITYSDK_OFFSET(0x9B04EF0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_EVENTCOUNTTYPE_OFFSET UNITYSDK_OFFSET(0x9B04FF0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_FINISHEDBUSINESSDAY_OFFSET UNITYSDK_OFFSET(0x9B04F90)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_LARGEBONUSTOTALINCOME_OFFSET UNITYSDK_OFFSET(0x9B04F10)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_PLAYERNOMINATE_OFFSET UNITYSDK_OFFSET(0x9B05030)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_SENDCARDCOUNT_OFFSET UNITYSDK_OFFSET(0x9B04FD0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_TOTALINCOME_OFFSET UNITYSDK_OFFSET(0x9B04ED0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA_SET_USESKILLPOINTCOUNT_OFFSET UNITYSDK_OFFSET(0x9B04FB0)
#define RPG_CLIENT_PLANETFESSUMMARYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B03DE0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesSummaryData_TypeDefinitionIndex = 53097;

	class PlanetFesSummaryData : public ::System::Object
	{
	public:
		::RPG::Client::PlanetFesSummaryPlayerNominate* _PlayerNominate_k__BackingField; // 0x10
		::System::Numerics::BigInteger _LargeBonusTotalIncome_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::System::UInt32>* _EventCountType_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarStatsData*>* _AvatarStatsDatas_k__BackingField; // 0x30
		::System::Numerics::BigInteger _TotalIncome_k__BackingField; // 0x38
		::System::Numerics::BigInteger _CurIncomeSpeed_k__BackingField; // 0x48
		::System::UInt32 _FinishedBusinessDay_k__BackingField; // 0x58
		::System::UInt32 _SendCardCount_k__BackingField; // 0x5C
		::System::UInt32 _CardGachaTotalCnt_k__BackingField; // 0x60
		::System::UInt32 _UseSkillPointCount_k__BackingField; // 0x64
		::System::UInt32 _AvatarGachaTotalCnt_k__BackingField; // 0x68
		::System::UInt32 _ActivateCardNums_k__BackingField; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::PlanetFesSummaryData* Create(::Class_1_FB0633E85BD6CF8E_6* serverData)
		{
			return ((::RPG::Client::PlanetFesSummaryData*(*)(::Class_1_FB0633E85BD6CF8E_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_CREATE_OFFSET))(serverData);
		}

		::RPG::Client::PlanetFesAvatarStatsData* GetMostIncomeAvatar()
		{
			return ((::RPG::Client::PlanetFesAvatarStatsData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GETMOSTINCOMEAVATAR_OFFSET))(this);
		}

		::RPG::Client::PlanetFesAvatarStatsData* GetMostIncomeSpeedAvatar()
		{
			return ((::RPG::Client::PlanetFesAvatarStatsData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GETMOSTINCOMESPEEDAVATAR_OFFSET))(this);
		}

		::RPG::Client::PlanetFesAvatarStatsData* GetMostWorkTimeAvatar()
		{
			return ((::RPG::Client::PlanetFesAvatarStatsData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GETMOSTWORKTIMEAVATAR_OFFSET))(this);
		}

		::RPG::Client::PlanetFesAvatarStatsData* GetMostPamEventAvatar()
		{
			return ((::RPG::Client::PlanetFesAvatarStatsData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GETMOSTPAMEVENTAVATAR_OFFSET))(this);
		}

		::RPG::Client::PlanetFesAvatarStatsData* GetMostTalkCountAvatar()
		{
			return ((::RPG::Client::PlanetFesAvatarStatsData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GETMOSTTALKCOUNTAVATAR_OFFSET))(this);
		}

		::System::Void RefreshPlayerNominate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_REFRESHPLAYERNOMINATE_OFFSET))(this);
		}

		::System::UInt32 GetEventCount(::RPG::GameCore::PlanetFesEventType type)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::PlanetFesEventType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GETEVENTCOUNT_OFFSET))(this, type);
		}

		::System::Numerics::BigInteger get_TotalIncome()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_TOTALINCOME_OFFSET))(this);
		}

		::System::Void set_TotalIncome(::System::Numerics::BigInteger value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_TOTALINCOME_OFFSET))(this, value);
		}

		::System::Numerics::BigInteger get_CurIncomeSpeed()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_CURINCOMESPEED_OFFSET))(this);
		}

		::System::Void set_CurIncomeSpeed(::System::Numerics::BigInteger value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_CURINCOMESPEED_OFFSET))(this, value);
		}

		::System::Numerics::BigInteger get_LargeBonusTotalIncome()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_LARGEBONUSTOTALINCOME_OFFSET))(this);
		}

		::System::Void set_LargeBonusTotalIncome(::System::Numerics::BigInteger value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_LARGEBONUSTOTALINCOME_OFFSET))(this, value);
		}

		::System::UInt32 get_AvatarGachaTotalCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_AVATARGACHATOTALCNT_OFFSET))(this);
		}

		::System::Void set_AvatarGachaTotalCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_AVATARGACHATOTALCNT_OFFSET))(this, value);
		}

		::System::UInt32 get_CardGachaTotalCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_CARDGACHATOTALCNT_OFFSET))(this);
		}

		::System::Void set_CardGachaTotalCnt(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_CARDGACHATOTALCNT_OFFSET))(this, value);
		}

		::System::UInt32 get_ActivateCardNums()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_ACTIVATECARDNUMS_OFFSET))(this);
		}

		::System::Void set_ActivateCardNums(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_ACTIVATECARDNUMS_OFFSET))(this, value);
		}

		::System::UInt32 get_FinishedBusinessDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_FINISHEDBUSINESSDAY_OFFSET))(this);
		}

		::System::Void set_FinishedBusinessDay(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_FINISHEDBUSINESSDAY_OFFSET))(this, value);
		}

		::System::UInt32 get_UseSkillPointCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_USESKILLPOINTCOUNT_OFFSET))(this);
		}

		::System::Void set_UseSkillPointCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_USESKILLPOINTCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_SendCardCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_SENDCARDCOUNT_OFFSET))(this);
		}

		::System::Void set_SendCardCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_SENDCARDCOUNT_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::System::UInt32>* get_EventCountType()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_EVENTCOUNTTYPE_OFFSET))(this);
		}

		::System::Void set_EventCountType(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesEventType, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_EVENTCOUNTTYPE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarStatsData*>* get_AvatarStatsDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarStatsData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_AVATARSTATSDATAS_OFFSET))(this);
		}

		::System::Void set_AvatarStatsDatas(::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarStatsData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::PlanetFesAvatarStatsData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_AVATARSTATSDATAS_OFFSET))(this, value);
		}

		::RPG::Client::PlanetFesSummaryPlayerNominate* get_PlayerNominate()
		{
			return ((::RPG::Client::PlanetFesSummaryPlayerNominate*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_GET_PLAYERNOMINATE_OFFSET))(this);
		}

		::System::Void set_PlayerNominate(::RPG::Client::PlanetFesSummaryPlayerNominate* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesSummaryPlayerNominate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESSUMMARYDATA_SET_PLAYERNOMINATE_OFFSET))(this, value);
		}
	};
}

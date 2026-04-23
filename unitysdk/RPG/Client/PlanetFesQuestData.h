#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_50.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlanetFesQuestType.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

class Class_1_24E6AD662FB2A263;
namespace RPG::GameCore { class FinishWayRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }

#define RPG_CLIENT_PLANETFESQUESTDATA_GET_ACHIEVEMENTLEVEL_OFFSET UNITYSDK_OFFSET(0x17DBF140)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0x17DBEBC0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_DESCRIPTIONSTR_OFFSET UNITYSDK_OFFSET(0x17DC06D0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x17DC1690)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_DYNAMICTARGETAVATARLEVEL_OFFSET UNITYSDK_OFFSET(0x17DBF0B0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_DYNAMICTARGETPROFITRATE_OFFSET UNITYSDK_OFFSET(0x17DBF090)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_FINISHBUSINESSDAY_OFFSET UNITYSDK_OFFSET(0x17DBF050)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_FINISHWAYROW_OFFSET UNITYSDK_OFFSET(0x17DBF0F0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x17DC16D0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_ISACHIEVEMENTVISIBLE_OFFSET UNITYSDK_OFFSET(0x17DBF6F0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_ISCLOSE_OFFSET UNITYSDK_OFFSET(0x17DBF110)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_ISDOING_OFFSET UNITYSDK_OFFSET(0x17DBF130)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x17DBF120)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_ISLASTACHIEVEMENTLEVEL_OFFSET UNITYSDK_OFFSET(0x17DBF300)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_NAMESTR_OFFSET UNITYSDK_OFFSET(0x17DBF770)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17DC1670)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_OVERRIDEREWARDID_OFFSET UNITYSDK_OFFSET(0x17DBF0D0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_PREVACHIEVEMENTQUESTDATA_OFFSET UNITYSDK_OFFSET(0x17DBF4D0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_PROGRESSRATIO_OFFSET UNITYSDK_OFFSET(0x17DBEBE0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0x17DBEBA0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_QUESTTYPE_OFFSET UNITYSDK_OFFSET(0x17DC1630)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_REWARDITEMLIST_OFFSET UNITYSDK_OFFSET(0x17DC1650)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_STATE_OFFSET UNITYSDK_OFFSET(0x17DBF070)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_TASKTIPS_OFFSET UNITYSDK_OFFSET(0x17DC16B0)
#define RPG_CLIENT_PLANETFESQUESTDATA_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x17DBEFE0)
#define RPG_CLIENT_PLANETFESQUESTDATA_SETTASKOVERRIDEREWARDID_OFFSET UNITYSDK_OFFSET(0x17DBE910)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0x17DBEBD0)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x17DC16A0)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_DYNAMICTARGETAVATARLEVEL_OFFSET UNITYSDK_OFFSET(0x17DBF0C0)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_DYNAMICTARGETPROFITRATE_OFFSET UNITYSDK_OFFSET(0x17DBF0A0)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_FINISHBUSINESSDAY_OFFSET UNITYSDK_OFFSET(0x17DBF060)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_FINISHWAYROW_OFFSET UNITYSDK_OFFSET(0x17DBF100)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x17DC16E0)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0x17DC1680)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_OVERRIDEREWARDID_OFFSET UNITYSDK_OFFSET(0x17DBF0E0)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_QUESTID_OFFSET UNITYSDK_OFFSET(0x17DBEBB0)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_QUESTTYPE_OFFSET UNITYSDK_OFFSET(0x17DC1640)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_REWARDITEMLIST_OFFSET UNITYSDK_OFFSET(0x17DC1660)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_STATE_OFFSET UNITYSDK_OFFSET(0x17DBF080)
#define RPG_CLIENT_PLANETFESQUESTDATA_SET_TASKTIPS_OFFSET UNITYSDK_OFFSET(0x17DC16C0)
#define RPG_CLIENT_PLANETFESQUESTDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x17DBE670)
#define RPG_CLIENT_PLANETFESQUESTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17DBE490)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesQuestData_TypeDefinitionIndex = 61383;

	class PlanetFesQuestData : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::Numerics::BigInteger _DynamicTargetProfitRate_k__BackingField; // 0x18
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* _RewardItemList_k__BackingField; // 0x28
		::RPG::GameCore::FinishWayRow* _FinishWayRow_k__BackingField; // 0x30
		::RPG::GameCore::PlanetFesQuestType _QuestType_k__BackingField; // 0x38
		::RPG::Client::TextID _Description_k__BackingField; // 0x40
		::RPG::Client::TextID _TaskTips_k__BackingField; // 0x50
		::System::UInt32 _OverrideRewardID_k__BackingField; // 0x60
		::System::UInt32 _CurProgress_k__BackingField; // 0x64
		::System::UInt32 _DynamicTargetAvatarLevel_k__BackingField; // 0x68
		::Enum_3_DB663931210BBC27_50 _State_k__BackingField; // 0x6C
		::RPG::Client::TextID _Name_k__BackingField; // 0x70
		::System::UInt32 _QuestID_k__BackingField; // 0x80
		::System::UInt32 _FinishBusinessDay_k__BackingField; // 0x84

		::System::Void _ctor(::System::UInt32 questID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA__CTOR_OFFSET))(this, questID);
		}

		::System::Void Sync(::Class_1_24E6AD662FB2A263* quest)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_24E6AD662FB2A263*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SYNC_OFFSET))(this, quest);
		}

		::System::Void SetTaskOverrideRewardID(::System::UInt32 rewardID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SETTASKOVERRIDEREWARDID_OFFSET))(this, rewardID);
		}

		::System::UInt32 get_QuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_QUESTID_OFFSET))(this);
		}

		::System::Void set_QuestID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_QUESTID_OFFSET))(this, value);
		}

		::System::UInt32 get_CurProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_CURPROGRESS_OFFSET))(this);
		}

		::System::Void set_CurProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_CURPROGRESS_OFFSET))(this, value);
		}

		::System::Single get_ProgressRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_PROGRESSRATIO_OFFSET))(this);
		}

		::System::UInt32 get_FinishBusinessDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_FINISHBUSINESSDAY_OFFSET))(this);
		}

		::System::Void set_FinishBusinessDay(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_FINISHBUSINESSDAY_OFFSET))(this, value);
		}

		::Enum_3_DB663931210BBC27_50 get_State()
		{
			return ((::Enum_3_DB663931210BBC27_50(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::Enum_3_DB663931210BBC27_50 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_DB663931210BBC27_50))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_STATE_OFFSET))(this, value);
		}

		::System::Numerics::BigInteger get_DynamicTargetProfitRate()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_DYNAMICTARGETPROFITRATE_OFFSET))(this);
		}

		::System::Void set_DynamicTargetProfitRate(::System::Numerics::BigInteger value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_DYNAMICTARGETPROFITRATE_OFFSET))(this, value);
		}

		::System::UInt32 get_DynamicTargetAvatarLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_DYNAMICTARGETAVATARLEVEL_OFFSET))(this);
		}

		::System::Void set_DynamicTargetAvatarLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_DYNAMICTARGETAVATARLEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_OverrideRewardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_OVERRIDEREWARDID_OFFSET))(this);
		}

		::System::Void set_OverrideRewardID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_OVERRIDEREWARDID_OFFSET))(this, value);
		}

		::RPG::GameCore::FinishWayRow* get_FinishWayRow()
		{
			return ((::RPG::GameCore::FinishWayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_FINISHWAYROW_OFFSET))(this);
		}

		::System::Void set_FinishWayRow(::RPG::GameCore::FinishWayRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FinishWayRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_FINISHWAYROW_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_TOTALPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_IsClose()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_ISCLOSE_OFFSET))(this);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_ISFINISH_OFFSET))(this);
		}

		::System::Boolean get_IsDoing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_ISDOING_OFFSET))(this);
		}

		::System::UInt32 get_AchievementLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_ACHIEVEMENTLEVEL_OFFSET))(this);
		}

		::System::Boolean get_IsLastAchievementLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_ISLASTACHIEVEMENTLEVEL_OFFSET))(this);
		}

		::RPG::Client::PlanetFesQuestData* get_PrevAchievementQuestData()
		{
			return ((::RPG::Client::PlanetFesQuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_PREVACHIEVEMENTQUESTDATA_OFFSET))(this);
		}

		::System::Boolean get_IsAchievementVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_ISACHIEVEMENTVISIBLE_OFFSET))(this);
		}

		::System::String* get_NameStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_NAMESTR_OFFSET))(this);
		}

		::System::String* get_DescriptionStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_DESCRIPTIONSTR_OFFSET))(this);
		}

		::RPG::GameCore::PlanetFesQuestType get_QuestType()
		{
			return ((::RPG::GameCore::PlanetFesQuestType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_QUESTTYPE_OFFSET))(this);
		}

		::System::Void set_QuestType(::RPG::GameCore::PlanetFesQuestType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesQuestType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_QUESTTYPE_OFFSET))(this, value);
		}

		::Il2CppArray<::RPG::GameCore::ItemConfig*>* get_RewardItemList()
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_REWARDITEMLIST_OFFSET))(this);
		}

		::System::Void set_RewardItemList(::Il2CppArray<::RPG::GameCore::ItemConfig*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_REWARDITEMLIST_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_NAME_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Description()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_Description(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_DESCRIPTION_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_TaskTips()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_TASKTIPS_OFFSET))(this);
		}

		::System::Void set_TaskTips(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_TASKTIPS_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESQUESTDATA_SET_ICONPATH_OFFSET))(this, value);
		}
	};
}

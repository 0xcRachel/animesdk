#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_24.h"
#include "unitysdk/System/Object.h"

class Class_1_13D50D0521B5E431;
class Class_1_99BD961747420BEB_33;
class Class_1_C9281D1A95E9298A;
namespace RPG::Client { class QuestData; }
namespace RPG::GameCore { class AchievementDataRow; }
namespace RPG::GameCore { class FinishWayRow; }
namespace RPG::GameCore { class RewardRow; }
namespace System { class String; }

#define RPG_CLIENT_ACHIEVEMENTDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x8AD3CF0)
#define RPG_CLIENT_ACHIEVEMENTDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8AD3E50)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_ACHIEVEDTIME_OFFSET UNITYSDK_OFFSET(0x8AD49A0)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_ADDITIONALVOICEDATA_OFFSET UNITYSDK_OFFSET(0x8AD49C0)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_CURRENTPROGRESS_OFFSET UNITYSDK_OFFSET(0x8AD4880)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_FINISHWAY_OFFSET UNITYSDK_OFFSET(0x8AD3F30)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_FIRSTSORTINGPARAM_OFFSET UNITYSDK_OFFSET(0x8AD4490)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x8AD43A0)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_ISPSTROPHY_OFFSET UNITYSDK_OFFSET(0x8AD49E0)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_PSTROPHYID_OFFSET UNITYSDK_OFFSET(0x8AD4AA0)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0x8AD43C0)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_QUESTSTATUS_OFFSET UNITYSDK_OFFSET(0x8AD45E0)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_QUEST_OFFSET UNITYSDK_OFFSET(0x8AD46E0)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_REWARD_OFFSET UNITYSDK_OFFSET(0x8AD47F0)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x8AD4430)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_SERIESID_OFFSET UNITYSDK_OFFSET(0x8AD4640)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_SHOWQUESTIONMARK_OFFSET UNITYSDK_OFFSET(0x8AD4380)
#define RPG_CLIENT_ACHIEVEMENTDATA_GET_SORTPARAM_OFFSET UNITYSDK_OFFSET(0x8AD48E0)
#define RPG_CLIENT_ACHIEVEMENTDATA_INITADDITIONALDATABASEDONFINISHTYPE_OFFSET UNITYSDK_OFFSET(0x8AD3D70)
#define RPG_CLIENT_ACHIEVEMENTDATA_SET_ACHIEVEDTIME_OFFSET UNITYSDK_OFFSET(0x8AD49B0)
#define RPG_CLIENT_ACHIEVEMENTDATA_SET_ADDITIONALVOICEDATA_OFFSET UNITYSDK_OFFSET(0x8AD49D0)
#define RPG_CLIENT_ACHIEVEMENTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x8AD43B0)
#define RPG_CLIENT_ACHIEVEMENTDATA_SET_SHOWQUESTIONMARK_OFFSET UNITYSDK_OFFSET(0x8AD4390)
#define RPG_CLIENT_ACHIEVEMENTDATA_TRYUPDATEADDITIONALINFOBYQUEST_OFFSET UNITYSDK_OFFSET(0x8AD3E90)
#define RPG_CLIENT_ACHIEVEMENTDATA_TRYUPDATEADDITIONALINFOBYRSP_OFFSET UNITYSDK_OFFSET(0x8AD40A0)
#define RPG_CLIENT_ACHIEVEMENTDATA_TRYUPDATEVOICEADDTIONALINFO_OFFSET UNITYSDK_OFFSET(0x8AD4040)
#define RPG_CLIENT_ACHIEVEMENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8AD3D60)

namespace RPG::Client
{
	inline static constexpr unsigned int AchievementData_TypeDefinitionIndex = 48667;

	class AchievementData : public ::System::Object
	{
	public:
		::Class_1_13D50D0521B5E431* _AdditionalVoiceData_k__BackingField; // 0x10
		::System::Int64 _AchievedTime_k__BackingField; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20
		::System::Boolean _ShowQuestionMark_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::AchievementData* Create(::System::UInt32 ID)
		{
			return ((::RPG::Client::AchievementData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_CREATE_OFFSET))(ID);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void TryUpdateAdditionalInfoByQuest(::Class_1_C9281D1A95E9298A* quest)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9281D1A95E9298A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_TRYUPDATEADDITIONALINFOBYQUEST_OFFSET))(this, quest);
		}

		::System::Void TryUpdateAdditionalInfoByRsp(::Class_1_99BD961747420BEB_33* req)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_99BD961747420BEB_33*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_TRYUPDATEADDITIONALINFOBYRSP_OFFSET))(this, req);
		}

		::System::Void InitAdditionalDataBasedOnFinishType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_INITADDITIONALDATABASEDONFINISHTYPE_OFFSET))(this);
		}

		::System::Void TryUpdateVoiceAddtionalInfo(::Class_1_C9281D1A95E9298A* quest)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_C9281D1A95E9298A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_TRYUPDATEVOICEADDTIONALINFO_OFFSET))(this, quest);
		}

		::System::Boolean get_ShowQuestionMark()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_SHOWQUESTIONMARK_OFFSET))(this);
		}

		::System::Void set_ShowQuestionMark(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_SET_SHOWQUESTIONMARK_OFFSET))(this, value);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_QuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_QUESTID_OFFSET))(this);
		}

		::RPG::GameCore::AchievementDataRow* get_Row()
		{
			return ((::RPG::GameCore::AchievementDataRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_FirstSortingParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_FIRSTSORTINGPARAM_OFFSET))(this);
		}

		::System::UInt32 get_SeriesID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_SERIESID_OFFSET))(this);
		}

		::RPG::Client::QuestData* get_Quest()
		{
			return ((::RPG::Client::QuestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_QUEST_OFFSET))(this);
		}

		::RPG::GameCore::RewardRow* get_Reward()
		{
			return ((::RPG::GameCore::RewardRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_REWARD_OFFSET))(this);
		}

		::RPG::GameCore::FinishWayRow* get_FinishWay()
		{
			return ((::RPG::GameCore::FinishWayRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_FINISHWAY_OFFSET))(this);
		}

		::System::UInt32 get_CurrentProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_CURRENTPROGRESS_OFFSET))(this);
		}

		::System::Single get_SortParam()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_SORTPARAM_OFFSET))(this);
		}

		::Enum_3_4608E37A1B3D374A_24 get_QuestStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_24(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_QUESTSTATUS_OFFSET))(this);
		}

		::System::Int64 get_AchievedTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_ACHIEVEDTIME_OFFSET))(this);
		}

		::System::Void set_AchievedTime(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_SET_ACHIEVEDTIME_OFFSET))(this, value);
		}

		::Class_1_13D50D0521B5E431* get_AdditionalVoiceData()
		{
			return ((::Class_1_13D50D0521B5E431*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_ADDITIONALVOICEDATA_OFFSET))(this);
		}

		::System::Void set_AdditionalVoiceData(::Class_1_13D50D0521B5E431* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_13D50D0521B5E431*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_SET_ADDITIONALVOICEDATA_OFFSET))(this, value);
		}

		::System::Boolean get_IsPSTrophy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_ISPSTROPHY_OFFSET))(this);
		}

		::System::String* get_PSTrophyID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACHIEVEMENTDATA_GET_PSTROPHYID_OFFSET))(this);
		}
	};
}

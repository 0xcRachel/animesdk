#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_96F6662CA3713095_33.h"
#include "unitysdk/RPG/Client/SwordTrainingSettleReason.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_DB57B006CFFCF00A_8;
namespace RPG::Client { class SwordTrainingGameSettleStatusData; }
namespace RPG::GameCore { class SwordTrainingEndingRow; }
namespace RPG::GameCore { class SwordTrainingPowerRankConfigRow; }
namespace RPG::GameCore { class SwordTrainingStoryRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x16FEB910)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_DEQUEUETCONTROLLERNAME_OFFSET UNITYSDK_OFFSET(0x16FF0A40)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_DONEXT_OFFSET UNITYSDK_OFFSET(0x16FF0EB0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_ENQUEUECONTROLLERNAME_OFFSET UNITYSDK_OFFSET(0x16FF0AC0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_DIFFICULTYLEVELHINTCONTENT_OFFSET UNITYSDK_OFFSET(0x16FF08E0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_ENDINGROW_OFFSET UNITYSDK_OFFSET(0x16FF0980)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_FIRSTPASSENDINGROW_OFFSET UNITYSDK_OFFSET(0x16FF09E0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_JOINEDPARTNERIMGPATH_OFFSET UNITYSDK_OFFSET(0x16FF08C0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_POWERICON_OFFSET UNITYSDK_OFFSET(0x16FF0960)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_POWERRANKID_OFFSET UNITYSDK_OFFSET(0x16FF0940)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_POWERVALUE_OFFSET UNITYSDK_OFFSET(0x16FF0920)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_REASON_OFFSET UNITYSDK_OFFSET(0x16FF0900)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_UNLOCKEDHINTSTRLIST_OFFSET UNITYSDK_OFFSET(0x16FF08A0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_HASNEXTPAGE_OFFSET UNITYSDK_OFFSET(0x16FF0D00)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SETUPQUEUE_OFFSET UNITYSDK_OFFSET(0x16FEE720)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SET_DIFFICULTYLEVELHINTCONTENT_OFFSET UNITYSDK_OFFSET(0x16FF08F0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SET_JOINEDPARTNERIMGPATH_OFFSET UNITYSDK_OFFSET(0x16FF08D0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SET_POWERICON_OFFSET UNITYSDK_OFFSET(0x16FF0970)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SET_POWERRANKID_OFFSET UNITYSDK_OFFSET(0x16FF0950)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SET_POWERVALUE_OFFSET UNITYSDK_OFFSET(0x16FF0930)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SET_REASON_OFFSET UNITYSDK_OFFSET(0x16FF0910)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SET_UNLOCKEDHINTSTRLIST_OFFSET UNITYSDK_OFFSET(0x16FF08B0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_TRYSHOWNEXT_OFFSET UNITYSDK_OFFSET(0x16FF0B50)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16FEDF90)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__GETPOWERRANKROWBYPOWERVALUE_OFFSET UNITYSDK_OFFSET(0x16FF0570)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__INITALLPOWERRANKROW_OFFSET UNITYSDK_OFFSET(0x16FF0630)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__ISALLENDINGFINISHED_OFFSET UNITYSDK_OFFSET(0x16FF1170)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__ISANYENDINGFINISHED_OFFSET UNITYSDK_OFFSET(0x16FF0E10)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__SETPOWER_OFFSET UNITYSDK_OFFSET(0x16FEE6A0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__SETSETTLEREASON_OFFSET UNITYSDK_OFFSET(0x16FEE460)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__SETSTATUSDATA_OFFSET UNITYSDK_OFFSET(0x16FEE500)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__SHOULDSHOWFINISHPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x16FF0D60)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__TRYADDGENREUNLOCKHINT_OFFSET UNITYSDK_OFFSET(0x16FEF8B0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__TRYADDPARTNERBYUNLOCKID_OFFSET UNITYSDK_OFFSET(0x16FEE130)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__TRYADDPARTNERUPPERBOUNDHINT_OFFSET UNITYSDK_OFFSET(0x16FEEA60)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__TRYADDSKILLBYUNLOCKID_OFFSET UNITYSDK_OFFSET(0x16FEE2F0)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__TRYADDSTORYLINEUNLOCKEDHINT_OFFSET UNITYSDK_OFFSET(0x16FEED50)
#define RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__TRYADDUNLOCKEDHINTINFOS_OFFSET UNITYSDK_OFFSET(0x16FEE630)

namespace RPG::Client
{
	inline static constexpr unsigned int SwordTrainingGameSettleData_TypeDefinitionIndex = 57151;

	class SwordTrainingGameSettleData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* UnlockedPartnerList; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::SwordTrainingPowerRankConfigRow*>* _AllPowerRankRowList; // 0x18
		::System::String* _DifficultyLevelHintContent_k__BackingField; // 0x20
		::System::Collections::Generic::Queue_1<::System::String*>* _UIControllerQueue; // 0x28
		::System::String* _PowerIcon_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::SwordTrainingGameSettleStatusData*>* StatusDataList; // 0x38
		::System::Collections::Generic::List_1<::System::UInt32>* SkillTypeIDs; // 0x40
		::System::Collections::Generic::List_1<::System::String*>* _JoinedPartnerImgPath_k__BackingField; // 0x48
		::System::Collections::Generic::List_1<::System::String*>* _UnlockedHintStrList_k__BackingField; // 0x50
		::System::UInt32 _PowerValue_k__BackingField; // 0x58
		::System::UInt32 _FirstPassEndingID; // 0x5C
		::RPG::Client::SwordTrainingSettleReason _Reason_k__BackingField; // 0x60
		::System::UInt32 _EndingStoryID; // 0x64
		::RPG::Client::TextID _PowerRankID_k__BackingField; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::SwordTrainingGameSettleData* Create(::Class_1_DB57B006CFFCF00A_8* ntf)
		{
			return ((::RPG::Client::SwordTrainingGameSettleData*(*)(::Class_1_DB57B006CFFCF00A_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_CREATE_OFFSET))(ntf);
		}

		::System::Void _TryAddSkillByUnlockID(::System::UInt32 unlockID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__TRYADDSKILLBYUNLOCKID_OFFSET))(this, unlockID);
		}

		::System::Void _TryAddUnlockedHintInfos(::Class_1_DB57B006CFFCF00A_8* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DB57B006CFFCF00A_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__TRYADDUNLOCKEDHINTINFOS_OFFSET))(this, ntf);
		}

		::System::Void _TryAddPartnerUpperBoundHint(::Class_1_DB57B006CFFCF00A_8* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DB57B006CFFCF00A_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__TRYADDPARTNERUPPERBOUNDHINT_OFFSET))(this, ntf);
		}

		::System::Void _TryAddStoryLineUnlockedHint(::Class_1_DB57B006CFFCF00A_8* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DB57B006CFFCF00A_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__TRYADDSTORYLINEUNLOCKEDHINT_OFFSET))(this, ntf);
		}

		::System::Void _TryAddGenreUnlockHint(::Class_1_DB57B006CFFCF00A_8* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DB57B006CFFCF00A_8*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__TRYADDGENREUNLOCKHINT_OFFSET))(this, ntf);
		}

		::System::Void _TryAddPartnerByUnlockID(::System::UInt32 unlockID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__TRYADDPARTNERBYUNLOCKID_OFFSET))(this, unlockID);
		}

		::System::Void _SetSettleReason(::Enum_3_96F6662CA3713095_33 reason)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_96F6662CA3713095_33))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__SETSETTLEREASON_OFFSET))(this, reason);
		}

		::System::Void _SetStatusData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__SETSTATUSDATA_OFFSET))(this);
		}

		::System::Void _SetPower(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__SETPOWER_OFFSET))(this, value);
		}

		::RPG::GameCore::SwordTrainingPowerRankConfigRow* _GetPowerRankRowByPowerValue(::System::UInt32 value)
		{
			return ((::RPG::GameCore::SwordTrainingPowerRankConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__GETPOWERRANKROWBYPOWERVALUE_OFFSET))(this, value);
		}

		::System::Void _InitAllPowerRankRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__INITALLPOWERRANKROW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_UnlockedHintStrList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_UNLOCKEDHINTSTRLIST_OFFSET))(this);
		}

		::System::Void set_UnlockedHintStrList(::System::Collections::Generic::List_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SET_UNLOCKEDHINTSTRLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_JoinedPartnerImgPath()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_JOINEDPARTNERIMGPATH_OFFSET))(this);
		}

		::System::Void set_JoinedPartnerImgPath(::System::Collections::Generic::List_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SET_JOINEDPARTNERIMGPATH_OFFSET))(this, value);
		}

		::System::String* get_DifficultyLevelHintContent()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_DIFFICULTYLEVELHINTCONTENT_OFFSET))(this);
		}

		::System::Void set_DifficultyLevelHintContent(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SET_DIFFICULTYLEVELHINTCONTENT_OFFSET))(this, value);
		}

		::RPG::Client::SwordTrainingSettleReason get_Reason()
		{
			return ((::RPG::Client::SwordTrainingSettleReason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_REASON_OFFSET))(this);
		}

		::System::Void set_Reason(::RPG::Client::SwordTrainingSettleReason value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingSettleReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SET_REASON_OFFSET))(this, value);
		}

		::System::UInt32 get_PowerValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_POWERVALUE_OFFSET))(this);
		}

		::System::Void set_PowerValue(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SET_POWERVALUE_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_PowerRankID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_POWERRANKID_OFFSET))(this);
		}

		::System::Void set_PowerRankID(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SET_POWERRANKID_OFFSET))(this, value);
		}

		::System::String* get_PowerIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_POWERICON_OFFSET))(this);
		}

		::System::Void set_PowerIcon(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SET_POWERICON_OFFSET))(this, value);
		}

		::RPG::GameCore::SwordTrainingStoryRow* get_EndingRow()
		{
			return ((::RPG::GameCore::SwordTrainingStoryRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_ENDINGROW_OFFSET))(this);
		}

		::RPG::GameCore::SwordTrainingEndingRow* get_FirstPassEndingRow()
		{
			return ((::RPG::GameCore::SwordTrainingEndingRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_GET_FIRSTPASSENDINGROW_OFFSET))(this);
		}

		::System::String* DequeuetControllerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_DEQUEUETCONTROLLERNAME_OFFSET))(this);
		}

		::System::Void EnqueueControllerName(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_ENQUEUECONTROLLERNAME_OFFSET))(this, name);
		}

		::System::Boolean TryShowNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_TRYSHOWNEXT_OFFSET))(this);
		}

		::System::Void SetupQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_SETUPQUEUE_OFFSET))(this);
		}

		::System::Boolean HasNextPage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_HASNEXTPAGE_OFFSET))(this);
		}

		::System::Void DoNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA_DONEXT_OFFSET))(this);
		}

		::System::Boolean _IsAllEndingFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__ISALLENDINGFINISHED_OFFSET))(this);
		}

		::System::Boolean _IsAnyEndingFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__ISANYENDINGFINISHED_OFFSET))(this);
		}

		::System::Boolean _ShouldShowFinishPerformance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SWORDTRAININGGAMESETTLEDATA__SHOULDSHOWFINISHPERFORMANCE_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/HeliobusSNSPostPhase.h"
#include "unitysdk/System/Object.h"

class Class_1_070964BB68D18B9F_2;
namespace RPG::Client { class HeliobusSNSAccountBeforeData; }
namespace RPG::Client { class HeliobusSNSPostData; }
namespace RPG::Client { class MainMissionData; }
namespace RPG::GameCore { class HeliobusSpecialPostRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HELIOBUSSNSDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1522B9E0)
#define RPG_CLIENT_HELIOBUSSNSDATA_GETALLPOSTMAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x15232860)
#define RPG_CLIENT_HELIOBUSSNSDATA_GETANCHROPOSTCANTAKE_OFFSET UNITYSDK_OFFSET(0x1522A210)
#define RPG_CLIENT_HELIOBUSSNSDATA_GETPOSTCOUNT_OFFSET UNITYSDK_OFFSET(0x15232D90)
#define RPG_CLIENT_HELIOBUSSNSDATA_GETPOSTINPROGRESS_OFFSET UNITYSDK_OFFSET(0x15232EF0)
#define RPG_CLIENT_HELIOBUSSNSDATA_GETSPPOSTDATACANSEND_OFFSET UNITYSDK_OFFSET(0x152326D0)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_ACTIONDAY_OFFSET UNITYSDK_OFFSET(0x152333F0)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_ALLHELIOBUSSNSPOSTDATADICT_OFFSET UNITYSDK_OFFSET(0x15233560)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_FANS_OFFSET UNITYSDK_OFFSET(0x152333D0)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_HELIOBUSSNSACCOUNTBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x15233520)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_INCOMELEVEL_OFFSET UNITYSDK_OFFSET(0x15233430)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_INCOMES_OFFSET UNITYSDK_OFFSET(0x1522AD00)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_ISMISSIONPREPARED_OFFSET UNITYSDK_OFFSET(0x152335C0)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_ISSENDINGLIKE_OFFSET UNITYSDK_OFFSET(0x152335A0)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_LASTPOSTMISSIONINPROGRESS_OFFSET UNITYSDK_OFFSET(0x15233500)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_MAXINCOMELEVEL_OFFSET UNITYSDK_OFFSET(0x15233450)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_PLAYERUSERID_OFFSET UNITYSDK_OFFSET(0x15233580)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_POPPHASE_OFFSET UNITYSDK_OFFSET(0x15233410)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_POSTMAINMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0x15233540)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_POSTMISSIONINPROGRESS_OFFSET UNITYSDK_OFFSET(0x152334E0)
#define RPG_CLIENT_HELIOBUSSNSDATA_GET_POSTPHASE_OFFSET UNITYSDK_OFFSET(0x15233470)
#define RPG_CLIENT_HELIOBUSSNSDATA_INIT_OFFSET UNITYSDK_OFFSET(0x1522B3F0)
#define RPG_CLIENT_HELIOBUSSNSDATA_ISALLMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x15232C00)
#define RPG_CLIENT_HELIOBUSSNSDATA_PREPAREALLMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1522D360)
#define RPG_CLIENT_HELIOBUSSNSDATA_REFRESHTAKENMISSIONINFO_OFFSET UNITYSDK_OFFSET(0x1522BE00)
#define RPG_CLIENT_HELIOBUSSNSDATA_RESETBEFOREFANSDATA_OFFSET UNITYSDK_OFFSET(0x152330A0)
#define RPG_CLIENT_HELIOBUSSNSDATA_SETPOSTISLIKE_OFFSET UNITYSDK_OFFSET(0x1522E630)
#define RPG_CLIENT_HELIOBUSSNSDATA_SETPOSTISREAD_OFFSET UNITYSDK_OFFSET(0x1522E3C0)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_ACTIONDAY_OFFSET UNITYSDK_OFFSET(0x15233400)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_ALLHELIOBUSSNSPOSTDATADICT_OFFSET UNITYSDK_OFFSET(0x15233570)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_FANS_OFFSET UNITYSDK_OFFSET(0x152333E0)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_HELIOBUSSNSACCOUNTBEFOREDATA_OFFSET UNITYSDK_OFFSET(0x15233530)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_INCOMELEVEL_OFFSET UNITYSDK_OFFSET(0x15233440)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_ISSENDINGLIKE_OFFSET UNITYSDK_OFFSET(0x152335B0)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_LASTPOSTMISSIONINPROGRESS_OFFSET UNITYSDK_OFFSET(0x15233510)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_MAXINCOMELEVEL_OFFSET UNITYSDK_OFFSET(0x15233460)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_PLAYERUSERID_OFFSET UNITYSDK_OFFSET(0x15233590)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_POPPHASE_OFFSET UNITYSDK_OFFSET(0x15233420)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_POSTMAINMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0x15233550)
#define RPG_CLIENT_HELIOBUSSNSDATA_SET_POSTMISSIONINPROGRESS_OFFSET UNITYSDK_OFFSET(0x152334F0)
#define RPG_CLIENT_HELIOBUSSNSDATA_SYNCACCOUNTINFO_OFFSET UNITYSDK_OFFSET(0x1522D2D0)
#define RPG_CLIENT_HELIOBUSSNSDATA_SYNCACTIONDAY_OFFSET UNITYSDK_OFFSET(0x1522CF20)
#define RPG_CLIENT_HELIOBUSSNSDATA_SYNCINCOMELEVEL_OFFSET UNITYSDK_OFFSET(0x1522D270)
#define RPG_CLIENT_HELIOBUSSNSDATA_SYNCPOSTLIST_OFFSET UNITYSDK_OFFSET(0x1522CF70)
#define RPG_CLIENT_HELIOBUSSNSDATA_SYNCSINGLEPOST_OFFSET UNITYSDK_OFFSET(0x1522E0C0)
#define RPG_CLIENT_HELIOBUSSNSDATA__CHECKISPOSTAVAILABLE_OFFSET UNITYSDK_OFFSET(0x152317C0)
#define RPG_CLIENT_HELIOBUSSNSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1522AF90)
#define RPG_CLIENT_HELIOBUSSNSDATA__GETPOSTCOUNT_OFFSET UNITYSDK_OFFSET(0x15232DF0)
#define RPG_CLIENT_HELIOBUSSNSDATA__PREPAREALLMISSIONDATA_B__12_0_OFFSET UNITYSDK_OFFSET(0x152335D0)
#define RPG_CLIENT_HELIOBUSSNSDATA__RECORDACCOUNTBEFORE_OFFSET UNITYSDK_OFFSET(0x152330F0)
#define RPG_CLIENT_HELIOBUSSNSDATA__REFRESHACCOUNTBEFORE_OFFSET UNITYSDK_OFFSET(0x15232350)
#define RPG_CLIENT_HELIOBUSSNSDATA__REFRESHTAKENMISSIONINFO_OFFSET UNITYSDK_OFFSET(0x15231FA0)
#define RPG_CLIENT_HELIOBUSSNSDATA__SETMAXINCOMELEVEL_OFFSET UNITYSDK_OFFSET(0x152316C0)
#define RPG_CLIENT_HELIOBUSSNSDATA__UPDATEALLPOSTLIKE_OFFSET UNITYSDK_OFFSET(0x152325B0)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusSNSData_TypeDefinitionIndex = 60471;

	class HeliobusSNSData : public ::System::Object
	{
	public:
		// static const ::System::String* _IncomeItemString; // 0x0
		// static const ::System::String* _PlayerUserIDString; // 0x0
		::RPG::Client::HeliobusSNSAccountBeforeData* _HeliobusSNSAccountBeforeData_k__BackingField; // 0x10
		::RPG::Client::MainMissionData* _PostMissionInProgress_k__BackingField; // 0x18
		::RPG::Client::HeliobusSNSAccountBeforeData* _RecordAccountBeforeData; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSPostData*>* _AllHeliobusSNSPostDataDict_k__BackingField; // 0x28
		::RPG::Client::MainMissionData* _LastPostMissionInProgress_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _PostMainMissionIDList_k__BackingField; // 0x38
		::System::UInt32 _Fans_k__BackingField; // 0x40
		::System::UInt32 _PopPhase_k__BackingField; // 0x44
		::System::UInt32 _ActionDay_k__BackingField; // 0x48
		::System::UInt32 _PlayerUserID_k__BackingField; // 0x4C
		::System::UInt32 _IncomeLevel_k__BackingField; // 0x50
		::System::Boolean _IsMissionPrepared; // 0x54
		::System::Boolean _IsSendingLike_k__BackingField; // 0x55
		::System::UInt32 _MaxIncomeLevel_k__BackingField; // 0x58
		::System::UInt32 _IncomeItemID; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_INIT_OFFSET))(this);
		}

		::System::Void SyncPostList(::System::Collections::Generic::IList_1<::Class_1_070964BB68D18B9F_2*>* postProtoList, ::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_070964BB68D18B9F_2*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SYNCPOSTLIST_OFFSET))(this, postProtoList, isInit);
		}

		::System::Void SyncSinglePost(::Class_1_070964BB68D18B9F_2* postProto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_070964BB68D18B9F_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SYNCSINGLEPOST_OFFSET))(this, postProto);
		}

		::System::Void SetPostIsRead(::System::UInt32 postId, ::System::Boolean isRead)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SETPOSTISREAD_OFFSET))(this, postId, isRead);
		}

		::System::Void SetPostIsLike(::System::UInt32 postId, ::System::Boolean isLike)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SETPOSTISLIKE_OFFSET))(this, postId, isLike);
		}

		::System::Void SyncActionDay(::System::UInt32 actionDay)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SYNCACTIONDAY_OFFSET))(this, actionDay);
		}

		::System::Void SyncAccountInfo(::System::UInt32 fans, ::System::UInt32 actionDay, ::System::UInt32 phase, ::System::Boolean isFromLogin)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SYNCACCOUNTINFO_OFFSET))(this, fans, actionDay, phase, isFromLogin);
		}

		::System::Void SyncIncomeLevel(::System::UInt32 incomeLevel)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SYNCINCOMELEVEL_OFFSET))(this, incomeLevel);
		}

		::RPG::GameCore::HeliobusSpecialPostRow* GetSPPostDataCanSend()
		{
			return ((::RPG::GameCore::HeliobusSpecialPostRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GETSPPOSTDATACANSEND_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAllPostMainMissionID()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GETALLPOSTMAINMISSIONID_OFFSET))(this);
		}

		::System::Void PrepareAllMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_PREPAREALLMISSIONDATA_OFFSET))(this);
		}

		::System::Boolean IsAllMissionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_ISALLMISSIONFINISH_OFFSET))(this);
		}

		::System::Void RefreshTakenMissionInfo(::System::UInt32 missionId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_REFRESHTAKENMISSIONINFO_OFFSET))(this, missionId);
		}

		::System::UInt32 GetPostCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GETPOSTCOUNT_OFFSET))(this);
		}

		::RPG::Client::HeliobusSNSPostData* GetPostInProgress()
		{
			return ((::RPG::Client::HeliobusSNSPostData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GETPOSTINPROGRESS_OFFSET))(this);
		}

		::RPG::Client::HeliobusSNSPostData* GetAnchroPostCanTake()
		{
			return ((::RPG::Client::HeliobusSNSPostData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GETANCHROPOSTCANTAKE_OFFSET))(this);
		}

		::System::Void ResetBeforeFansData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_RESETBEFOREFANSDATA_OFFSET))(this);
		}

		::System::Void _RefreshTakenMissionInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA__REFRESHTAKENMISSIONINFO_OFFSET))(this);
		}

		::System::Void _RefreshAccountBefore(::System::Boolean isFromLogin)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA__REFRESHACCOUNTBEFORE_OFFSET))(this, isFromLogin);
		}

		::System::Void _RecordAccountBefore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA__RECORDACCOUNTBEFORE_OFFSET))(this);
		}

		::System::UInt32 _GetPostCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA__GETPOSTCOUNT_OFFSET))(this);
		}

		::System::Boolean _CheckIsPostAvailable(::System::UInt32 postID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA__CHECKISPOSTAVAILABLE_OFFSET))(this, postID);
		}

		::System::Void _UpdateAllPostLike()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA__UPDATEALLPOSTLIKE_OFFSET))(this);
		}

		::System::Void _SetMaxIncomeLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA__SETMAXINCOMELEVEL_OFFSET))(this);
		}

		::System::UInt32 get_Fans()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_FANS_OFFSET))(this);
		}

		::System::Void set_Fans(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_FANS_OFFSET))(this, value);
		}

		::System::UInt32 get_ActionDay()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_ACTIONDAY_OFFSET))(this);
		}

		::System::Void set_ActionDay(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_ACTIONDAY_OFFSET))(this, value);
		}

		::System::UInt32 get_PopPhase()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_POPPHASE_OFFSET))(this);
		}

		::System::Void set_PopPhase(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_POPPHASE_OFFSET))(this, value);
		}

		::System::UInt32 get_Incomes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_INCOMES_OFFSET))(this);
		}

		::System::UInt32 get_IncomeLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_INCOMELEVEL_OFFSET))(this);
		}

		::System::Void set_IncomeLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_INCOMELEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxIncomeLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_MAXINCOMELEVEL_OFFSET))(this);
		}

		::System::Void set_MaxIncomeLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_MAXINCOMELEVEL_OFFSET))(this, value);
		}

		::RPG::Client::HeliobusSNSPostPhase get_PostPhase()
		{
			return ((::RPG::Client::HeliobusSNSPostPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_POSTPHASE_OFFSET))(this);
		}

		::RPG::Client::MainMissionData* get_PostMissionInProgress()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_POSTMISSIONINPROGRESS_OFFSET))(this);
		}

		::System::Void set_PostMissionInProgress(::RPG::Client::MainMissionData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_POSTMISSIONINPROGRESS_OFFSET))(this, value);
		}

		::RPG::Client::MainMissionData* get_LastPostMissionInProgress()
		{
			return ((::RPG::Client::MainMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_LASTPOSTMISSIONINPROGRESS_OFFSET))(this);
		}

		::System::Void set_LastPostMissionInProgress(::RPG::Client::MainMissionData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_LASTPOSTMISSIONINPROGRESS_OFFSET))(this, value);
		}

		::RPG::Client::HeliobusSNSAccountBeforeData* get_HeliobusSNSAccountBeforeData()
		{
			return ((::RPG::Client::HeliobusSNSAccountBeforeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_HELIOBUSSNSACCOUNTBEFOREDATA_OFFSET))(this);
		}

		::System::Void set_HeliobusSNSAccountBeforeData(::RPG::Client::HeliobusSNSAccountBeforeData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HeliobusSNSAccountBeforeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_HELIOBUSSNSACCOUNTBEFOREDATA_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_PostMainMissionIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_POSTMAINMISSIONIDLIST_OFFSET))(this);
		}

		::System::Void set_PostMainMissionIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_POSTMAINMISSIONIDLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSPostData*>* get_AllHeliobusSNSPostDataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSPostData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_ALLHELIOBUSSNSPOSTDATADICT_OFFSET))(this);
		}

		::System::Void set_AllHeliobusSNSPostDataDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSPostData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::HeliobusSNSPostData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_ALLHELIOBUSSNSPOSTDATADICT_OFFSET))(this, value);
		}

		::System::UInt32 get_PlayerUserID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_PLAYERUSERID_OFFSET))(this);
		}

		::System::Void set_PlayerUserID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_PLAYERUSERID_OFFSET))(this, value);
		}

		::System::Boolean get_IsSendingLike()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_ISSENDINGLIKE_OFFSET))(this);
		}

		::System::Void set_IsSendingLike(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_SET_ISSENDINGLIKE_OFFSET))(this, value);
		}

		::System::Boolean get_IsMissionPrepared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA_GET_ISMISSIONPREPARED_OFFSET))(this);
		}

		::System::Void _PrepareAllMissionData_b__12_0(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* missionDataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSSNSDATA__PREPAREALLMISSIONDATA_B__12_0_OFFSET))(this, missionDataList);
		}
	};
}

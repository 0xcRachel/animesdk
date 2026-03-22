#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/WaitForDisplayPageType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/BoxingClubActivityType.h"
#include "unitysdk/System/Object.h"

class Class_1_12A9E44435FBA7F9_1;
class Class_1_24B2AFBC155BAEAC;
class Class_1_58C02EFC41D1F04D_7;
class Class_1_A40145A90ACDEF85;
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::Client { class BoxingClubBattleRecord; }
namespace RPG::Client { class BoxingClubFailInfo; }
namespace RPG::Client { class BoxingClubWinInfo; }
namespace RPG::Client { class PVEBattleResultInfo; }
namespace RPG::GameCore { class BoxingClubChallengeConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_CLEARWAITFORRANDOMMARK_OFFSET UNITYSDK_OFFSET(0x8E04530)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8E026F0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GETCURSTAGERECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0x8E039C0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GETCURSTAGE_OFFSET UNITYSDK_OFFSET(0x8E04B30)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GETRECOMMENDLEVEL_OFFSET UNITYSDK_OFFSET(0x8E03550)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ACTIVITYMODUELID_OFFSET UNITYSDK_OFFSET(0x8E05830)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ACTIVITYTYPE_OFFSET UNITYSDK_OFFSET(0x8E05BB0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_AVATARIDLIST_OFFSET UNITYSDK_OFFSET(0x8E05B70)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_BATTLERECORD_OFFSET UNITYSDK_OFFSET(0x8E05AE0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_BESTROUNDRECORD_OFFSET UNITYSDK_OFFSET(0x8E05B30)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_BOXINGCLUBCHALLENGEID_OFFSET UNITYSDK_OFFSET(0x8E015A0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_CANUSETRIAL_OFFSET UNITYSDK_OFFSET(0x8E05C90)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_CHALLENGEMAXROUNDNUM_OFFSET UNITYSDK_OFFSET(0x8E04BC0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_CHALLENGENAME_OFFSET UNITYSDK_OFFSET(0x8E058D0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_DAMAGETYPE_OFFSET UNITYSDK_OFFSET(0x8E05A40)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_FIRSTPASSREWARDARRAY_OFFSET UNITYSDK_OFFSET(0x8E05790)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_HASTAKENREWARD_OFFSET UNITYSDK_OFFSET(0x8E05B50)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_HASUNFINISHEDBATTLERECORD_OFFSET UNITYSDK_OFFSET(0x8E05B20)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x8E059A0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ID_OFFSET UNITYSDK_OFFSET(0x8E056D0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x8E05B00)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ISNEWLEVEL_OFFSET UNITYSDK_OFFSET(0x8E05C70)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x8E04850)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ROW_OFFSET UNITYSDK_OFFSET(0x8E01B90)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_STAGEARRAY_OFFSET UNITYSDK_OFFSET(0x8E056F0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_TRIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0x8E05E10)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x8E05B90)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GIVEUPMATCH_OFFSET UNITYSDK_OFFSET(0x8E024B0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_INIT_OFFSET UNITYSDK_OFFSET(0x8E01190)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_RESETDISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x8E03C50)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SETBATTLESUCCESS_OFFSET UNITYSDK_OFFSET(0x8E02680)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SETLEVELREAD_OFFSET UNITYSDK_OFFSET(0x8E04660)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_AVATARIDLIST_OFFSET UNITYSDK_OFFSET(0x8E05B80)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_BATTLERECORD_OFFSET UNITYSDK_OFFSET(0x8E05AF0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_BESTROUNDRECORD_OFFSET UNITYSDK_OFFSET(0x8E05B40)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_HASTAKENREWARD_OFFSET UNITYSDK_OFFSET(0x8E05B60)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_ID_OFFSET UNITYSDK_OFFSET(0x8E056E0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x8E05B10)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_ISNEWLEVEL_OFFSET UNITYSDK_OFFSET(0x8E05C80)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x8E05C20)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x8E05BA0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_STARTBOXINGCLUBBATTLE_OFFSET UNITYSDK_OFFSET(0x8E022D0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_STARTMATCHING_OFFSET UNITYSDK_OFFSET(0x8E01C80)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SYNCBATTLERECORD_OFFSET UNITYSDK_OFFSET(0x8E01640)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SYNCGIVEUP_OFFSET UNITYSDK_OFFSET(0x8E016E0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SYNCUPDATE_OFFSET UNITYSDK_OFFSET(0x8E01BF0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SYNC_OFFSET UNITYSDK_OFFSET(0x8E011D0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_TRYRECOVERAVATARIDS_OFFSET UNITYSDK_OFFSET(0x8E03E00)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_TRYSETBATTLEREWARD_OFFSET UNITYSDK_OFFSET(0x8E03CA0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_TRYSETLEVELNEW_OFFSET UNITYSDK_OFFSET(0x8E049E0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_TRYSHOWNEXTROUNDINFOPAGE_OFFSET UNITYSDK_OFFSET(0x8E02810)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_UPDATELOCALAVATARIDLIST_OFFSET UNITYSDK_OFFSET(0x8E03B40)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x8E01180)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__DORETURNTOMAZE_OFFSET UNITYSDK_OFFSET(0x8E05150)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__EXITTOTOWNBYSERVERQUITNOTIFY_OFFSET UNITYSDK_OFFSET(0x8E05380)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__GENERATEFAILINFO_OFFSET UNITYSDK_OFFSET(0x8E01A10)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__ISPREVLEVELCLEARED_OFFSET UNITYSDK_OFFSET(0x8E054D0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__ONBATTLERESULTCONFIRM_OFFSET UNITYSDK_OFFSET(0x8E04F80)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__REMOVEHANDBLERS_OFFSET UNITYSDK_OFFSET(0x8E02790)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__SETNEWLEVELSTATUS_OFFSET UNITYSDK_OFFSET(0x8E04A30)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__STOREWAITFORRANDOMSTATUS_OFFSET UNITYSDK_OFFSET(0x8E02ED0)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__UPDATEINFOBYBATTLERESULT_OFFSET UNITYSDK_OFFSET(0x8E05000)

namespace RPG::Client
{
	inline static constexpr unsigned int BoxingClubLevelInstance_TypeDefinitionIndex = 49966;

	class BoxingClubLevelInstance : public ::System::Object
	{
	public:
		::RPG::Client::BoxingClubFailInfo* _FailInfo; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _AvatarIDList_k__BackingField; // 0x18
		::RPG::Client::BoxingClubBattleRecord* _BattleRecord_k__BackingField; // 0x20
		::RPG::Client::BoxingClubWinInfo* _WinInfo; // 0x28
		::System::Int32 _UnClickEntranceNum; // 0x30
		::System::UInt32 _BestRoundRecord_k__BackingField; // 0x34
		::System::Boolean _HasTakenReward_k__BackingField; // 0x38
		::System::Boolean WaitForDisplayPage; // 0x39
		::System::Boolean _IsFinished_k__BackingField; // 0x3A
		::System::Boolean _IsNewLevel_k__BackingField; // 0x3B
		::System::UInt32 _ID_k__BackingField; // 0x3C
		::RPG::Client::WaitForDisplayPageType _Type_k__BackingField; // 0x40

		::System::Void _ctor(::System::UInt32 challengeID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__CTOR_OFFSET))(this, challengeID);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_INIT_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_24B2AFBC155BAEAC* packet)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_24B2AFBC155BAEAC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SYNC_OFFSET))(this, packet);
		}

		::System::Void SyncBattleRecord(::Class_1_24B2AFBC155BAEAC* packet)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_24B2AFBC155BAEAC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SYNCBATTLERECORD_OFFSET))(this, packet);
		}

		::System::Void SyncGiveUp(::Class_1_58C02EFC41D1F04D_7* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_58C02EFC41D1F04D_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SYNCGIVEUP_OFFSET))(this, rsp);
		}

		::System::Void SyncUpdate(::Class_1_12A9E44435FBA7F9_1* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_12A9E44435FBA7F9_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SYNCUPDATE_OFFSET))(this, rsp);
		}

		::System::Void StartMatching(::System::Collections::Generic::List_1<::System::UInt32>* avatarIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_STARTMATCHING_OFFSET))(this, avatarIDs);
		}

		::System::Void StartBoxingClubBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_STARTBOXINGCLUBBATTLE_OFFSET))(this);
		}

		::System::Void GiveUpMatch(::System::UInt32 challengeID, ::System::Boolean isGiveUp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GIVEUPMATCH_OFFSET))(this, challengeID, isGiveUp);
		}

		::System::Void SetBattleSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SETBATTLESUCCESS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_DISPOSE_OFFSET))(this);
		}

		::System::Void TryShowNextRoundInfoPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_TRYSHOWNEXTROUNDINFOPAGE_OFFSET))(this);
		}

		::System::UInt32 GetRecommendLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GETRECOMMENDLEVEL_OFFSET))(this);
		}

		::System::UInt32 GetCurStageRecommendLevel(::System::UInt32 eventID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GETCURSTAGERECOMMENDLEVEL_OFFSET))(this, eventID);
		}

		::System::Void UpdateLocalAvatarIDList(::System::Collections::Generic::List_1<::System::UInt32>* ids)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_UPDATELOCALAVATARIDLIST_OFFSET))(this, ids);
		}

		::System::Void ResetDisplayType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_RESETDISPLAYTYPE_OFFSET))(this);
		}

		::System::Void TrySetBattleReward(::Class_1_A40145A90ACDEF85* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A40145A90ACDEF85*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_TRYSETBATTLEREWARD_OFFSET))(this, ntf);
		}

		::System::Void TryRecoverAvatarIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_TRYRECOVERAVATARIDS_OFFSET))(this);
		}

		::System::Void ClearWaitForRandomMark()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_CLEARWAITFORRANDOMMARK_OFFSET))(this);
		}

		::System::Void SetLevelRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SETLEVELREAD_OFFSET))(this);
		}

		::System::Void TrySetLevelNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_TRYSETLEVELNEW_OFFSET))(this);
		}

		::System::UInt32 GetCurStage()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GETCURSTAGE_OFFSET))(this);
		}

		::System::Void _RemoveHandblers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__REMOVEHANDBLERS_OFFSET))(this);
		}

		::System::Void _OnBattleResultConfirm(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__ONBATTLERESULTCONFIRM_OFFSET))(this, obj);
		}

		::System::Void _UpdateInfoByBattleResult(::RPG::Client::PVEBattleResultInfo* param)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PVEBattleResultInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__UPDATEINFOBYBATTLERESULT_OFFSET))(this, param);
		}

		::System::Void _GenerateFailInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__GENERATEFAILINFO_OFFSET))(this);
		}

		::System::Void _DoReturnToMaze()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__DORETURNTOMAZE_OFFSET))(this);
		}

		::System::Void _ExitToTownByServerQuitNotify(::RPG::Client::BattleGamePhase* phase)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleGamePhase*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__EXITTOTOWNBYSERVERQUITNOTIFY_OFFSET))(this, phase);
		}

		::System::Boolean _IsPrevLevelCleared()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__ISPREVLEVELCLEARED_OFFSET))(this);
		}

		::System::Void _SetNewLevelStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__SETNEWLEVELSTATUS_OFFSET))(this);
		}

		::System::Void _StoreWaitForRandomStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE__STOREWAITFORRANDOMSTATUS_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_ID_OFFSET))(this, value);
		}

		::RPG::GameCore::BoxingClubChallengeConfigRow* get_Row()
		{
			return ((::RPG::GameCore::BoxingClubChallengeConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_BoxingClubChallengeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_BOXINGCLUBCHALLENGEID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_StageArray()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_STAGEARRAY_OFFSET))(this);
		}

		::System::UInt32 get_FirstPassRewardArray()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_FIRSTPASSREWARDARRAY_OFFSET))(this);
		}

		::System::UInt32 get_ActivityModuelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ACTIVITYMODUELID_OFFSET))(this);
		}

		::RPG::Client::TextID get_ChallengeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_CHALLENGENAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ICONPATH_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::AttackDamageType>* get_DamageType()
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_DAMAGETYPE_OFFSET))(this);
		}

		::RPG::Client::BoxingClubBattleRecord* get_BattleRecord()
		{
			return ((::RPG::Client::BoxingClubBattleRecord*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_BATTLERECORD_OFFSET))(this);
		}

		::System::Void set_BattleRecord(::RPG::Client::BoxingClubBattleRecord* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BoxingClubBattleRecord*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_BATTLERECORD_OFFSET))(this, value);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void set_IsFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_ISFINISHED_OFFSET))(this, value);
		}

		::System::Boolean get_HasUnFinishedBattleRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_HASUNFINISHEDBATTLERECORD_OFFSET))(this);
		}

		::System::UInt32 get_BestRoundRecord()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_BESTROUNDRECORD_OFFSET))(this);
		}

		::System::Void set_BestRoundRecord(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_BESTROUNDRECORD_OFFSET))(this, value);
		}

		::System::Boolean get_HasTakenReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_HASTAKENREWARD_OFFSET))(this);
		}

		::System::Void set_HasTakenReward(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_HASTAKENREWARD_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AvatarIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_AVATARIDLIST_OFFSET))(this);
		}

		::System::Void set_AvatarIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_AVATARIDLIST_OFFSET))(this, value);
		}

		::RPG::Client::WaitForDisplayPageType get_Type()
		{
			return ((::RPG::Client::WaitForDisplayPageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::WaitForDisplayPageType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::WaitForDisplayPageType))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_TYPE_OFFSET))(this, value);
		}

		::RPG::GameCore::BoxingClubActivityType get_ActivityType()
		{
			return ((::RPG::GameCore::BoxingClubActivityType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ACTIVITYTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_ISUNLOCKED_OFFSET))(this, value);
		}

		::System::UInt32 get_ChallengeMaxRoundNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_CHALLENGEMAXROUNDNUM_OFFSET))(this);
		}

		::System::Boolean get_IsNewLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_ISNEWLEVEL_OFFSET))(this);
		}

		::System::Void set_IsNewLevel(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_SET_ISNEWLEVEL_OFFSET))(this, value);
		}

		::System::Boolean get_CanUseTrial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_CANUSETRIAL_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TrialAvatarIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE_GET_TRIALAVATARIDS_OFFSET))(this);
		}
	};
}

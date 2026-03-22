#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_735612C94F558EAE_34;
class Class_1_E9FAC3539FD8861A_12;
namespace Proto { class HeliobusChallengeLineup; }
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class HeliobusChallengeData; }
namespace RPG::Client { class HeliobusRedDotFilter; }
namespace RPG::Client { class HeliobusSNSData; }
namespace RPG::Client { class HeliobusSkillData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HELIOBUSMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x94AFD90)
#define RPG_CLIENT_HELIOBUSMODULE_ENTERCHALLENGEBATTLE_OFFSET UNITYSDK_OFFSET(0x94A9D10)
#define RPG_CLIENT_HELIOBUSMODULE_GETCHALLENGECACHETEAM_OFFSET UNITYSDK_OFFSET(0x94AA130)
#define RPG_CLIENT_HELIOBUSMODULE_GETCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x94AA010)
#define RPG_CLIENT_HELIOBUSMODULE_GETCHALLENGEGROUP_OFFSET UNITYSDK_OFFSET(0x94A9E50)
#define RPG_CLIENT_HELIOBUSMODULE_GETCHALLENGELINEUPDATA_OFFSET UNITYSDK_OFFSET(0x94AA4A0)
#define RPG_CLIENT_HELIOBUSMODULE_GETCHALLENGEUNCLAIMEDREWARDTAB_OFFSET UNITYSDK_OFFSET(0x94ACA50)
#define RPG_CLIENT_HELIOBUSMODULE_GETINCOMEENTRYREDDOT_OFFSET UNITYSDK_OFFSET(0x94AEEE0)
#define RPG_CLIENT_HELIOBUSMODULE_GETINCOMEUPGRADEREDDOT_OFFSET UNITYSDK_OFFSET(0x94AF080)
#define RPG_CLIENT_HELIOBUSMODULE_GETNEWUNLOCKCHALLENGEGROUPLEVEL_OFFSET UNITYSDK_OFFSET(0x94AC050)
#define RPG_CLIENT_HELIOBUSMODULE_GETNEWUNLOCKCHALLENGERAIDLEVEL_OFFSET UNITYSDK_OFFSET(0x94AC4F0)
#define RPG_CLIENT_HELIOBUSMODULE_GETNEWUNLOCKSKILL_OFFSET UNITYSDK_OFFSET(0x94AC8A0)
#define RPG_CLIENT_HELIOBUSMODULE_GETRAIDCHALLENGESELECTEDAVATARS_OFFSET UNITYSDK_OFFSET(0x94AA860)
#define RPG_CLIENT_HELIOBUSMODULE_GETRAIDCHALLENGESELECTEDSKILL_OFFSET UNITYSDK_OFFSET(0x94AA740)
#define RPG_CLIENT_HELIOBUSMODULE_GETSKILLDATA_OFFSET UNITYSDK_OFFSET(0x94AF6C0)
#define RPG_CLIENT_HELIOBUSMODULE_GETSNSCANREPLYCOMMENTPOSTIDLIST_OFFSET UNITYSDK_OFFSET(0x94AE790)
#define RPG_CLIENT_HELIOBUSMODULE_GETSNSCANREPLYMISSIONPOSTIDLIST_OFFSET UNITYSDK_OFFSET(0x94ADA50)
#define RPG_CLIENT_HELIOBUSMODULE_GETSNSHELIOBUSCANTAKEANCHORPOSTID_OFFSET UNITYSDK_OFFSET(0x94AE620)
#define RPG_CLIENT_HELIOBUSMODULE_GETSNSNEWPOSTIDLIST_OFFSET UNITYSDK_OFFSET(0x94AED00)
#define RPG_CLIENT_HELIOBUSMODULE_GETSNSTABCANREPLYCOMMENTPOSTTYPELIST_OFFSET UNITYSDK_OFFSET(0x94AEA60)
#define RPG_CLIENT_HELIOBUSMODULE_GETSNSTABPOSTTYPELIST_OFFSET UNITYSDK_OFFSET(0x94AE380)
#define RPG_CLIENT_HELIOBUSMODULE_GETTIMELIMITEDUNCLAIMEDREWARD_OFFSET UNITYSDK_OFFSET(0x94ACF70)
#define RPG_CLIENT_HELIOBUSMODULE_GETUNLOCKEDSKILLS_OFFSET UNITYSDK_OFFSET(0x94AF4F0)
#define RPG_CLIENT_HELIOBUSMODULE_GET_CHALLENGERAIDLIST_OFFSET UNITYSDK_OFFSET(0x94AB180)
#define RPG_CLIENT_HELIOBUSMODULE_GET_HELIOBUSCHALLENGES_OFFSET UNITYSDK_OFFSET(0x94AB160)
#define RPG_CLIENT_HELIOBUSMODULE_GET_HELIOBUSREDDOTFILTER_OFFSET UNITYSDK_OFFSET(0x94AF270)
#define RPG_CLIENT_HELIOBUSMODULE_GET_HELIOBUSSKILLS_OFFSET UNITYSDK_OFFSET(0x94B09B0)
#define RPG_CLIENT_HELIOBUSMODULE_GET_HELIOBUSSNSDATA_OFFSET UNITYSDK_OFFSET(0x94B0990)
#define RPG_CLIENT_HELIOBUSMODULE_GET_NEEDAUTOTRIGGERCHALLENGEENTRANCE_OFFSET UNITYSDK_OFFSET(0x94AB1C0)
#define RPG_CLIENT_HELIOBUSMODULE_GET_SELECTEDHELIOBUSSKILLID_OFFSET UNITYSDK_OFFSET(0x94B09D0)
#define RPG_CLIENT_HELIOBUSMODULE_GET_TARGETCHALLENGEGROUPID_OFFSET UNITYSDK_OFFSET(0x94AB1A0)
#define RPG_CLIENT_HELIOBUSMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x94AF7A0)
#define RPG_CLIENT_HELIOBUSMODULE_MARKNEEDAUTOCHALLENGEENTER_OFFSET UNITYSDK_OFFSET(0x94AAEE0)
#define RPG_CLIENT_HELIOBUSMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x94AFFB0)
#define RPG_CLIENT_HELIOBUSMODULE_SAVECHALLENGECACHETEAM_OFFSET UNITYSDK_OFFSET(0x94AA580)
#define RPG_CLIENT_HELIOBUSMODULE_SET_CHALLENGERAIDLIST_OFFSET UNITYSDK_OFFSET(0x94AB190)
#define RPG_CLIENT_HELIOBUSMODULE_SET_HELIOBUSCHALLENGES_OFFSET UNITYSDK_OFFSET(0x94AB170)
#define RPG_CLIENT_HELIOBUSMODULE_SET_HELIOBUSREDDOTFILTER_OFFSET UNITYSDK_OFFSET(0x94AF280)
#define RPG_CLIENT_HELIOBUSMODULE_SET_HELIOBUSSKILLS_OFFSET UNITYSDK_OFFSET(0x94B09C0)
#define RPG_CLIENT_HELIOBUSMODULE_SET_HELIOBUSSNSDATA_OFFSET UNITYSDK_OFFSET(0x94B09A0)
#define RPG_CLIENT_HELIOBUSMODULE_SET_NEEDAUTOTRIGGERCHALLENGEENTRANCE_OFFSET UNITYSDK_OFFSET(0x94AB1D0)
#define RPG_CLIENT_HELIOBUSMODULE_SET_SELECTEDHELIOBUSSKILLID_OFFSET UNITYSDK_OFFSET(0x94B09E0)
#define RPG_CLIENT_HELIOBUSMODULE_SET_TARGETCHALLENGEGROUPID_OFFSET UNITYSDK_OFFSET(0x94AB1B0)
#define RPG_CLIENT_HELIOBUSMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0x94AAF30)
#define RPG_CLIENT_HELIOBUSMODULE_TRYMARKCHALLENGEGROUPLEVELSEEN_OFFSET UNITYSDK_OFFSET(0x94AD570)
#define RPG_CLIENT_HELIOBUSMODULE_TRYMARKCHALLENGERAIDLEVELSEEN_OFFSET UNITYSDK_OFFSET(0x94AD790)
#define RPG_CLIENT_HELIOBUSMODULE_TRYMARKSKILLSEEN_OFFSET UNITYSDK_OFFSET(0x94AD8C0)
#define RPG_CLIENT_HELIOBUSMODULE_TRYSAVERAIDCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x94AAAF0)
#define RPG_CLIENT_HELIOBUSMODULE_TRYUNLOCKCHALLENGES_OFFSET UNITYSDK_OFFSET(0x94AAFC0)
#define RPG_CLIENT_HELIOBUSMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x94AFFF0)
#define RPG_CLIENT_HELIOBUSMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x94B09F0)
#define RPG_CLIENT_HELIOBUSMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x94AF290)
#define RPG_CLIENT_HELIOBUSMODULE__GETHELIOBUSSKILLDATA_OFFSET UNITYSDK_OFFSET(0x94B06B0)
#define RPG_CLIENT_HELIOBUSMODULE__INITHELIOBUSCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x94AB1E0)
#define RPG_CLIENT_HELIOBUSMODULE__INITHELIOBUSCHALLENGELINEUPDATA_OFFSET UNITYSDK_OFFSET(0x94AB510)
#define RPG_CLIENT_HELIOBUSMODULE__INITHELIOBUSCHALLENGERAIDDATA_OFFSET UNITYSDK_OFFSET(0x94AB760)
#define RPG_CLIENT_HELIOBUSMODULE__INITHELIOBUSSKILLDATA_OFFSET UNITYSDK_OFFSET(0x94AF9F0)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSACTIVITYDATASCRSP_OFFSET UNITYSDK_OFFSET(0x94B0CB0)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSCHALLENGEUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x94B3010)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSINFOCHANGEDSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x94B22B0)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSLINEUPUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x94B3090)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSELECTSKILLSCRSP_OFFSET UNITYSDK_OFFSET(0x94B2F90)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSNSCOMMENTSCRSP_OFFSET UNITYSDK_OFFSET(0x94B2710)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSNSLIKESCRSP_OFFSET UNITYSDK_OFFSET(0x94B2A20)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSNSPOSTSCRSP_OFFSET UNITYSDK_OFFSET(0x94B24C0)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSNSREADSCRSP_OFFSET UNITYSDK_OFFSET(0x94B27D0)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSNSUPDATESCNOTIFY_OFFSET UNITYSDK_OFFSET(0x94B2430)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSUNLOCKSKILLSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x94B2D90)
#define RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSUPGRADELEVELSCRSP_OFFSET UNITYSDK_OFFSET(0x94B2CA0)
#define RPG_CLIENT_HELIOBUSMODULE__ONFINISHEDMAINMISSION_OFFSET UNITYSDK_OFFSET(0x94B0270)
#define RPG_CLIENT_HELIOBUSMODULE__ONHELIOBUSRAIDCHALLENGEFINISH_OFFSET UNITYSDK_OFFSET(0x94B04C0)
#define RPG_CLIENT_HELIOBUSMODULE__ONSHOWHELIOBUSONCHALLENGEUNLOCKTOAST_OFFSET UNITYSDK_OFFSET(0x94ABD30)
#define RPG_CLIENT_HELIOBUSMODULE__ONSHOWHELIOBUSONSKILLUNLOCKTOAST_OFFSET UNITYSDK_OFFSET(0x94B0430)
#define RPG_CLIENT_HELIOBUSMODULE__ONTAKENSUBMISSION_OFFSET UNITYSDK_OFFSET(0x94B0360)
#define RPG_CLIENT_HELIOBUSMODULE__PREPAREMAINMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x94B1B50)
#define RPG_CLIENT_HELIOBUSMODULE__UPDATEHELIOBUSCHALLENGEDATA_OFFSET UNITYSDK_OFFSET(0x94AB8F0)
#define RPG_CLIENT_HELIOBUSMODULE__UPDATEHELIOBUSCHALLENGELINEUPDATA_OFFSET UNITYSDK_OFFSET(0x94ABC30)
#define RPG_CLIENT_HELIOBUSMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x94B31A0)
#define RPG_CLIENT_HELIOBUSMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x94B3110)
#define RPG_CLIENT_HELIOBUSMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x94B31B0)
#define RPG_CLIENT_HELIOBUSMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x94B3210)
#define RPG_CLIENT_HELIOBUSMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x94B3270)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusModule_TypeDefinitionIndex = 52194;

	class HeliobusModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeData*>* _HeliobusChallenges_k__BackingField; // 0x10
		::RPG::Client::HeliobusRedDotFilter* _HeliobusRedDotFilter_k__BackingField; // 0x18
		::RPG::Client::HeliobusSNSData* _HeliobusSNSData_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _ChallengeRaidList_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::HeliobusSkillData*>* _HeliobusSkills_k__BackingField; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Proto::HeliobusChallengeLineup*>* _ChallengeLineupDataDict; // 0x38
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockSkillToastSubMissionIDs; // 0x40
		::System::Boolean _HasNewUnlockSkillToast; // 0x48
		::System::Boolean _IsMissionDataRequired; // 0x49
		::System::Boolean _NeedAutoTriggerChallengeEntrance_k__BackingField; // 0x4A
		::System::UInt32 _FirstSkillID; // 0x4C
		::System::UInt32 _TargetChallengeGroupID_k__BackingField; // 0x50
		::System::UInt32 _SelectedHeliobusSkillID_k__BackingField; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__CTOR_OFFSET))(this);
		}

		::System::Void EnterChallengeBattle(::System::UInt32 challengeStageID, ::System::UInt32 skillID, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_ENTERCHALLENGEBATTLE_OFFSET))(this, challengeStageID, skillID, avatarIDList);
		}

		::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeData*>* GetChallengeGroup(::System::UInt32 challengeGroupID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETCHALLENGEGROUP_OFFSET))(this, challengeGroupID);
		}

		::RPG::Client::HeliobusChallengeData* GetChallengeData(::System::UInt32 challengeID)
		{
			return ((::RPG::Client::HeliobusChallengeData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETCHALLENGEDATA_OFFSET))(this, challengeID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* GetChallengeCacheTeam(::System::UInt32 challengeGroupID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETCHALLENGECACHETEAM_OFFSET))(this, challengeGroupID);
		}

		::System::Void SaveChallengeCacheTeam(::System::UInt32 challengeGroupID, ::System::UInt32 skillID, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_SAVECHALLENGECACHETEAM_OFFSET))(this, challengeGroupID, skillID, avatarIDList);
		}

		::Proto::HeliobusChallengeLineup* GetChallengeLineupData(::System::UInt32 groupID)
		{
			return ((::Proto::HeliobusChallengeLineup*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETCHALLENGELINEUPDATA_OFFSET))(this, groupID);
		}

		::System::UInt32 GetRaidChallengeSelectedSkill(::System::UInt32 raidID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETRAIDCHALLENGESELECTEDSKILL_OFFSET))(this, raidID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* GetRaidChallengeSelectedAvatars(::System::UInt32 raidID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETRAIDCHALLENGESELECTEDAVATARS_OFFSET))(this, raidID);
		}

		::System::Void TrySaveRaidChallengeData(::System::UInt32 raidID, ::System::UInt32 skillID, ::System::Collections::Generic::List_1<::System::UInt32>* avatarIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_TRYSAVERAIDCHALLENGEDATA_OFFSET))(this, raidID, skillID, avatarIDs);
		}

		::System::Void MarkNeedAutoChallengeEnter(::System::UInt32 challengeGroupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_MARKNEEDAUTOCHALLENGEENTER_OFFSET))(this, challengeGroupID);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Boolean TryUnlockChallenges()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_TRYUNLOCKCHALLENGES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeData*>* get_HeliobusChallenges()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GET_HELIOBUSCHALLENGES_OFFSET))(this);
		}

		::System::Void set_HeliobusChallenges(::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::HeliobusChallengeData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_SET_HELIOBUSCHALLENGES_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_ChallengeRaidList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GET_CHALLENGERAIDLIST_OFFSET))(this);
		}

		::System::Void set_ChallengeRaidList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_SET_CHALLENGERAIDLIST_OFFSET))(this, value);
		}

		::System::UInt32 get_TargetChallengeGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GET_TARGETCHALLENGEGROUPID_OFFSET))(this);
		}

		::System::Void set_TargetChallengeGroupID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_SET_TARGETCHALLENGEGROUPID_OFFSET))(this, value);
		}

		::System::Boolean get_NeedAutoTriggerChallengeEntrance()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GET_NEEDAUTOTRIGGERCHALLENGEENTRANCE_OFFSET))(this);
		}

		::System::Void set_NeedAutoTriggerChallengeEntrance(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_SET_NEEDAUTOTRIGGERCHALLENGEENTRANCE_OFFSET))(this, value);
		}

		::System::Void _InitHeliobusChallengeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__INITHELIOBUSCHALLENGEDATA_OFFSET))(this);
		}

		::System::Void _InitHeliobusChallengeLineupData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__INITHELIOBUSCHALLENGELINEUPDATA_OFFSET))(this);
		}

		::System::Void _InitHeliobusChallengeRaidData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__INITHELIOBUSCHALLENGERAIDDATA_OFFSET))(this);
		}

		::System::Void _UpdateHeliobusChallengeData(::Class_1_E9FAC3539FD8861A_12* challenge, ::System::Boolean bNotifyChange)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E9FAC3539FD8861A_12*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__UPDATEHELIOBUSCHALLENGEDATA_OFFSET))(this, challenge, bNotifyChange);
		}

		::System::Void _UpdateHeliobusChallengeLineupData(::Proto::HeliobusChallengeLineup* lineup)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::HeliobusChallengeLineup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__UPDATEHELIOBUSCHALLENGELINEUPDATA_OFFSET))(this, lineup);
		}

		::System::Void _OnShowHeliobusOnChallengeUnlockToast(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONSHOWHELIOBUSONCHALLENGEUNLOCKTOAST_OFFSET))(this, arg);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* GetNewUnlockChallengeGroupLevel()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETNEWUNLOCKCHALLENGEGROUPLEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewUnlockChallengeRaidLevel()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETNEWUNLOCKCHALLENGERAIDLEVEL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewUnlockSkill()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETNEWUNLOCKSKILL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetChallengeUnclaimedRewardTab()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETCHALLENGEUNCLAIMEDREWARDTAB_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetTimeLimitedUnclaimedReward(::System::Collections::Generic::List_1<::System::UInt32>* typeGroups, ::System::Boolean isGetTabID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETTIMELIMITEDUNCLAIMEDREWARD_OFFSET))(this, typeGroups, isGetTabID);
		}

		::System::Void TryMarkChallengeGroupLevelSeen(::System::UInt32 groupID, ::System::UInt32 levelID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_TRYMARKCHALLENGEGROUPLEVELSEEN_OFFSET))(this, groupID, levelID);
		}

		::System::Void TryMarkChallengeRaidLevelSeen(::System::UInt32 raidID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_TRYMARKCHALLENGERAIDLEVELSEEN_OFFSET))(this, raidID);
		}

		::System::Void TryMarkSkillSeen(::System::UInt32 skillID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_TRYMARKSKILLSEEN_OFFSET))(this, skillID);
		}

		::System::Void GetSNSCanReplyMissionPostIDList(::System::Collections::Generic::List_1<::System::UInt32>*& canReplyMissionPostIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETSNSCANREPLYMISSIONPOSTIDLIST_OFFSET))(this, canReplyMissionPostIDList);
		}

		::System::Void GetSNSTabPostTypeList(::System::Collections::Generic::List_1<::System::UInt32>*& tabPostTypeList, ::System::Collections::Generic::List_1<::System::UInt32>*& canReplyPostIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*&, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETSNSTABPOSTTYPELIST_OFFSET))(this, tabPostTypeList, canReplyPostIDList);
		}

		::System::UInt32 GetSNSHeliobusCanTakeAnchorPostID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETSNSHELIOBUSCANTAKEANCHORPOSTID_OFFSET))(this);
		}

		::System::Void GetSNSCanReplyCommentPostIDList(::System::Collections::Generic::List_1<::System::UInt32>*& canReplyCommentPostIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETSNSCANREPLYCOMMENTPOSTIDLIST_OFFSET))(this, canReplyCommentPostIDList);
		}

		::System::Void GetSNSTabCanReplyCommentPostTypeList(::System::Collections::Generic::List_1<::System::UInt32>*& tabCanReplyCommentPostTypeList, ::System::Collections::Generic::List_1<::System::UInt32>*& canReplyCommentPostIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*&, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETSNSTABCANREPLYCOMMENTPOSTTYPELIST_OFFSET))(this, tabCanReplyCommentPostTypeList, canReplyCommentPostIDList);
		}

		::System::Void GetSNSNewPostIDList(::System::Collections::Generic::List_1<::System::UInt32>*& newPostIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETSNSNEWPOSTIDLIST_OFFSET))(this, newPostIDList);
		}

		::System::Boolean GetIncomeEntryRedDot(::System::Collections::Generic::List_1<::System::UInt32>*& incomeQuestIdList)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETINCOMEENTRYREDDOT_OFFSET))(this, incomeQuestIdList);
		}

		::System::Boolean GetIncomeUpgradeRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETINCOMEUPGRADEREDDOT_OFFSET))(this);
		}

		::RPG::Client::HeliobusRedDotFilter* get_HeliobusRedDotFilter()
		{
			return ((::RPG::Client::HeliobusRedDotFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GET_HELIOBUSREDDOTFILTER_OFFSET))(this);
		}

		::System::Void set_HeliobusRedDotFilter(::RPG::Client::HeliobusRedDotFilter* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HeliobusRedDotFilter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_SET_HELIOBUSREDDOTFILTER_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetUnlockedSkills()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETUNLOCKEDSKILLS_OFFSET))(this);
		}

		::RPG::Client::HeliobusSkillData* GetSkillData(::System::UInt32 skillID)
		{
			return ((::RPG::Client::HeliobusSkillData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GETSKILLDATA_OFFSET))(this, skillID);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnFinishedMainMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONFINISHEDMAINMISSION_OFFSET))(this, arg);
		}

		::System::Void _OnTakenSubMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONTAKENSUBMISSION_OFFSET))(this, arg);
		}

		::System::Void _OnShowHeliobusOnSkillUnlockToast(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONSHOWHELIOBUSONSKILLUNLOCKTOAST_OFFSET))(this, arg);
		}

		::System::Void _OnHeliobusRaidChallengeFinish(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONHELIOBUSRAIDCHALLENGEFINISH_OFFSET))(this, arg);
		}

		::System::Void _InitHeliobusSkillData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__INITHELIOBUSSKILLDATA_OFFSET))(this);
		}

		::System::Void _GetHeliobusSkillData(::Class_1_735612C94F558EAE_34* skillInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_735612C94F558EAE_34*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__GETHELIOBUSSKILLDATA_OFFSET))(this, skillInfo);
		}

		::RPG::Client::HeliobusSNSData* get_HeliobusSNSData()
		{
			return ((::RPG::Client::HeliobusSNSData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GET_HELIOBUSSNSDATA_OFFSET))(this);
		}

		::System::Void set_HeliobusSNSData(::RPG::Client::HeliobusSNSData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::HeliobusSNSData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_SET_HELIOBUSSNSDATA_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::HeliobusSkillData*>* get_HeliobusSkills()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::HeliobusSkillData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GET_HELIOBUSSKILLS_OFFSET))(this);
		}

		::System::Void set_HeliobusSkills(::System::Collections::Generic::List_1<::RPG::Client::HeliobusSkillData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::HeliobusSkillData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_SET_HELIOBUSSKILLS_OFFSET))(this, value);
		}

		::System::UInt32 get_SelectedHeliobusSkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_GET_SELECTEDHELIOBUSSKILLID_OFFSET))(this);
		}

		::System::Void set_SelectedHeliobusSkillID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE_SET_SELECTEDHELIOBUSSKILLID_OFFSET))(this, value);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnCmdHeliobusActivityDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSACTIVITYDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdHeliobusInfoChangedScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSINFOCHANGEDSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdHeliobusSnsUpdateScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSNSUPDATESCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdHeliobusSnsPostScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSNSPOSTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdHeliobusSnsCommentScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSNSCOMMENTSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdHeliobusSnsReadScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSNSREADSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdHeliobusSnsLikeScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSNSLIKESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdHeliobusUpgradeLevelScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSUPGRADELEVELSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdHeliobusUnlockSkillScNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSUNLOCKSKILLSCNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnCmdHeliobusSelectSkillScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSSELECTSKILLSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnCmdHeliobusChallengeUpdateScNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSCHALLENGEUPDATESCNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _OnCmdHeliobusLineupUpdateScNotify(::System::UInt16 cmd, ::System::Object* ntfObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__ONCMDHELIOBUSLINEUPUPDATESCNOTIFY_OFFSET))(this, cmd, ntfObject);
		}

		::System::Void _PrepareMainMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE__PREPAREMAINMISSIONDATA_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}

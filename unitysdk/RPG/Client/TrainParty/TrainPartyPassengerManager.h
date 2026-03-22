#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_120319518E6F6581_116;
class Class_1_3C58D309C7A040F5_41;
class Class_1_48AADA497C3F117F_3;
class Class_1_4DF3292AA5AADAD0_23;
class Class_1_5FEFAED860528596_101;
class Class_1_61AB926B0DCFDD4A_5;
class Class_1_6E708EAB438EC183_102;
class Class_1_E85FDBE62E39A5EA_29;
namespace RPG::Client::TrainParty { class TrainPartyPassengerData; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerDiaryInfo; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerSkillInfo; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerSkillSettleData; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerStatusRankConfig; }
namespace RPG::GameCore { class TrainPartyTeamRow; }
namespace RPG::GameCore { class TrainPartyWorkingBuffConfigRow; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_CLEARGAMEPLAYDATA_OFFSET UNITYSDK_OFFSET(0xA0DD110)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_CLEARPAMDIARYREDDOT_OFFSET UNITYSDK_OFFSET(0xA0EFFC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_CLEARSKILLSETTLEDATA_OFFSET UNITYSDK_OFFSET(0xA0E1A90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0DF140)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETALLPASSENGERLIST_OFFSET UNITYSDK_OFFSET(0xA0F0920)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETINVITABLEPASSENGERCOUNT_OFFSET UNITYSDK_OFFSET(0xA0F0120)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETINVITABLEPASSENGERDATALIST_OFFSET UNITYSDK_OFFSET(0xA0EFD50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETPASSENGERDATABYID_OFFSET UNITYSDK_OFFSET(0xA0DE180)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETPASSENGERDATALIST_OFFSET UNITYSDK_OFFSET(0xA0E1560)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETPASSENGERSTATUSRANKCONFIGBYEXP_OFFSET UNITYSDK_OFFSET(0xA0F0240)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETPASSENGERSTATUSRANKCONFIGBYVALUE_OFFSET UNITYSDK_OFFSET(0xA0F0830)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETSKILLINFOS_OFFSET UNITYSDK_OFFSET(0xA0EA010)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_LEADERPASSENGERDATA_OFFSET UNITYSDK_OFFSET(0xA0F0F60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_LEADERPASSENGERID_OFFSET UNITYSDK_OFFSET(0xA0F0F40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_LEADERWORKINGBUFFID_OFFSET UNITYSDK_OFFSET(0xA0F10B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_PLAYERPASSENGERID_OFFSET UNITYSDK_OFFSET(0xA0F1090)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_REMAINSTEPNUM_OFFSET UNITYSDK_OFFSET(0xA0F0EF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_SKILLSETTLEDATA_OFFSET UNITYSDK_OFFSET(0xA0F1130)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_TEAMID_OFFSET UNITYSDK_OFFSET(0xA0F0E70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_TEAMROW_OFFSET UNITYSDK_OFFSET(0xA0F0E90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_WORKINGBUFFROW_OFFSET UNITYSDK_OFFSET(0xA0F10D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_HANDLEREPLACESKILLACTION_OFFSET UNITYSDK_OFFSET(0xA0E32C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_HASANYREWARDCANTAKE_OFFSET UNITYSDK_OFFSET(0xA0F0A80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xA0DEC90)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_ONREPLACESKILL_OFFSET UNITYSDK_OFFSET(0xA0E0B00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_ONSHOWSETTLEFINISH_OFFSET UNITYSDK_OFFSET(0xA0E1E40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SET_LEADERPASSENGERID_OFFSET UNITYSDK_OFFSET(0xA0F0F50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SET_LEADERWORKINGBUFFID_OFFSET UNITYSDK_OFFSET(0xA0F10C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SET_PLAYERPASSENGERID_OFFSET UNITYSDK_OFFSET(0xA0F10A0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SET_SKILLSETTLEDATA_OFFSET UNITYSDK_OFFSET(0xA0F1140)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SET_TEAMID_OFFSET UNITYSDK_OFFSET(0xA0F0E80)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SYNCDIARYINFO_OFFSET UNITYSDK_OFFSET(0xA0DEB10)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SYNCPERSISTENTDATA_OFFSET UNITYSDK_OFFSET(0xA0DE990)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SYNCPERSISTENT_OFFSET UNITYSDK_OFFSET(0xA0DCB50)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SYNCSKILLLIST_OFFSET UNITYSDK_OFFSET(0xA0DEAC0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SYNC_OFFSET UNITYSDK_OFFSET(0xA0DD050)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_UPDATEPASSEDSTEPNUM_OFFSET UNITYSDK_OFFSET(0xA0DE260)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_UPDATESKILLINFO_OFFSET UNITYSDK_OFFSET(0xA0DE750)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA0DEC20)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__DISPLAYPASSENGERSORTFUNC_OFFSET UNITYSDK_OFFSET(0xA0F0D30)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__GETONTRAINPASSENGERDATALIST_OFFSET UNITYSDK_OFFSET(0xA0EFBF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__GETUNLOCKPASSENGERDATALIST_OFFSET UNITYSDK_OFFSET(0xA0EFE60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__INITALLPASSENGERS_OFFSET UNITYSDK_OFFSET(0xA0EED60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__INITPASSENGERSTATUSRANKCONFIG_OFFSET UNITYSDK_OFFSET(0xA0F0350)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__INVITATIONPASSENGERSORTFUNC_OFFSET UNITYSDK_OFFSET(0xA0F0DD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__SYNCPASSENGERLIST_OFFSET UNITYSDK_OFFSET(0xA0EEFB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__SYNCPERSISTENTDATALIST_OFFSET UNITYSDK_OFFSET(0xA0EF5C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__SYNCSKILLINFOS_OFFSET UNITYSDK_OFFSET(0xA0EF370)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyPassengerManager_TypeDefinitionIndex = 59375;

	class TrainPartyPassengerManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>* _AllPassengers; // 0x10
		::RPG::Client::TrainParty::TrainPartyPassengerSkillSettleData* _SkillSettleData_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerStatusRankConfig*>* _AllPassengerStatusRankConfigs; // 0x20
		::RPG::Client::TrainParty::TrainPartyPassengerDiaryInfo* DiaryInfo; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerSkillInfo*>* _SkillList; // 0x30
		::System::UInt32 _TeamID_k__BackingField; // 0x38
		::System::UInt32 _PassedStepNum; // 0x3C
		::System::UInt32 _PlayerPassengerID_k__BackingField; // 0x40
		::System::UInt32 _LeaderPassengerID_k__BackingField; // 0x44
		::System::UInt32 _TotalStep; // 0x48
		::System::UInt32 _LeaderWorkingBuffID_k__BackingField; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncDiaryInfo(::Class_1_6E708EAB438EC183_102* serverInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_102*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SYNCDIARYINFO_OFFSET))(this, serverInfo);
		}

		::System::Void Sync(::Class_1_48AADA497C3F117F_3* serverInfo, ::System::UInt32 teamID)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_48AADA497C3F117F_3*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SYNC_OFFSET))(this, serverInfo, teamID);
		}

		::System::Void SyncPersistent(::Class_1_5FEFAED860528596_101* serverInfo, ::System::Boolean markNewPassenger)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5FEFAED860528596_101*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SYNCPERSISTENT_OFFSET))(this, serverInfo, markNewPassenger);
		}

		::System::Void SyncPersistentData(::Class_1_61AB926B0DCFDD4A_5* serverInfo, ::System::Boolean markNewPassenger)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_61AB926B0DCFDD4A_5*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SYNCPERSISTENTDATA_OFFSET))(this, serverInfo, markNewPassenger);
		}

		::System::Void ClearGameplayData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_CLEARGAMEPLAYDATA_OFFSET))(this);
		}

		::System::Void ClearSkillSettleData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_CLEARSKILLSETTLEDATA_OFFSET))(this);
		}

		::System::Void UpdatePassedStepNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_UPDATEPASSEDSTEPNUM_OFFSET))(this, value);
		}

		::System::Void UpdateSkillInfo(::Class_1_120319518E6F6581_116* skillInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_120319518E6F6581_116*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_UPDATESKILLINFO_OFFSET))(this, skillInfo);
		}

		::System::Void SyncSkillList(::System::Collections::Generic::IList_1<::Class_1_120319518E6F6581_116*>* skillInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_120319518E6F6581_116*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SYNCSKILLLIST_OFFSET))(this, skillInfos);
		}

		::System::Void HandleReplaceSkillAction(::Class_1_3C58D309C7A040F5_41* action)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_3C58D309C7A040F5_41*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_HANDLEREPLACESKILLACTION_OFFSET))(this, action);
		}

		::System::Void OnShowSettleFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_ONSHOWSETTLEFINISH_OFFSET))(this);
		}

		::System::Void OnReplaceSkill(::Class_1_E85FDBE62E39A5EA_29* actionResult)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E85FDBE62E39A5EA_29*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_ONREPLACESKILL_OFFSET))(this, actionResult);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>* GetPassengerDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETPASSENGERDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>* GetInvitablePassengerDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETINVITABLEPASSENGERDATALIST_OFFSET))(this);
		}

		::System::Void ClearPamDiaryReddot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_CLEARPAMDIARYREDDOT_OFFSET))(this);
		}

		::System::UInt32 GetInvitablePassengerCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETINVITABLEPASSENGERCOUNT_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyPassengerData* GetPassengerDataByID(::System::UInt32 id)
		{
			return ((::RPG::Client::TrainParty::TrainPartyPassengerData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETPASSENGERDATABYID_OFFSET))(this, id);
		}

		::RPG::Client::TrainParty::TrainPartyPassengerStatusRankConfig* GetPassengerStatusRankConfigByExp(::System::UInt32 value)
		{
			return ((::RPG::Client::TrainParty::TrainPartyPassengerStatusRankConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETPASSENGERSTATUSRANKCONFIGBYEXP_OFFSET))(this, value);
		}

		::RPG::Client::TrainParty::TrainPartyPassengerStatusRankConfig* GetPassengerStatusRankConfigByValue(::System::UInt32 value)
		{
			return ((::RPG::Client::TrainParty::TrainPartyPassengerStatusRankConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETPASSENGERSTATUSRANKCONFIGBYVALUE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerSkillInfo*>* GetSkillInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerSkillInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETSKILLINFOS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>* GetAllPassengerList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GETALLPASSENGERLIST_OFFSET))(this);
		}

		::System::Boolean HasAnyRewardCanTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_HASANYREWARDCANTAKE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>* _GetOnTrainPassengerDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__GETONTRAINPASSENGERDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>* _GetUnlockPassengerDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__GETUNLOCKPASSENGERDATALIST_OFFSET))(this);
		}

		::System::Void _InitAllPassengers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__INITALLPASSENGERS_OFFSET))(this);
		}

		::System::Void _SyncPersistentDataList(::System::Collections::Generic::IList_1<::Class_1_61AB926B0DCFDD4A_5*>* serverInfos, ::System::Boolean markNewPassenger)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_61AB926B0DCFDD4A_5*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__SYNCPERSISTENTDATALIST_OFFSET))(this, serverInfos, markNewPassenger);
		}

		::System::Void _SyncPassengerList(::System::Collections::Generic::IList_1<::Class_1_4DF3292AA5AADAD0_23*>* serverPassengerList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_4DF3292AA5AADAD0_23*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__SYNCPASSENGERLIST_OFFSET))(this, serverPassengerList);
		}

		::System::Void _InitPassengerStatusRankConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__INITPASSENGERSTATUSRANKCONFIG_OFFSET))(this);
		}

		::System::Int32 _DisplayPassengerSortFunc(::RPG::Client::TrainParty::TrainPartyPassengerData* a, ::RPG::Client::TrainParty::TrainPartyPassengerData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerData*, ::RPG::Client::TrainParty::TrainPartyPassengerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__DISPLAYPASSENGERSORTFUNC_OFFSET))(this, a, b);
		}

		::System::Int32 _InvitationPassengerSortFunc(::RPG::Client::TrainParty::TrainPartyPassengerData* a, ::RPG::Client::TrainParty::TrainPartyPassengerData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerData*, ::RPG::Client::TrainParty::TrainPartyPassengerData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__INVITATIONPASSENGERSORTFUNC_OFFSET))(this, a, b);
		}

		::System::Void _SyncSkillInfos(::System::Collections::Generic::IList_1<::Class_1_120319518E6F6581_116*>* serverInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_120319518E6F6581_116*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER__SYNCSKILLINFOS_OFFSET))(this, serverInfos);
		}

		::System::UInt32 get_TeamID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_TEAMID_OFFSET))(this);
		}

		::System::Void set_TeamID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SET_TEAMID_OFFSET))(this, value);
		}

		::RPG::GameCore::TrainPartyTeamRow* get_TeamRow()
		{
			return ((::RPG::GameCore::TrainPartyTeamRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_TEAMROW_OFFSET))(this);
		}

		::System::UInt32 get_RemainStepNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_REMAINSTEPNUM_OFFSET))(this);
		}

		::System::UInt32 get_LeaderPassengerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_LEADERPASSENGERID_OFFSET))(this);
		}

		::System::Void set_LeaderPassengerID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SET_LEADERPASSENGERID_OFFSET))(this, value);
		}

		::RPG::Client::TrainParty::TrainPartyPassengerData* get_LeaderPassengerData()
		{
			return ((::RPG::Client::TrainParty::TrainPartyPassengerData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_LEADERPASSENGERDATA_OFFSET))(this);
		}

		::System::UInt32 get_PlayerPassengerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_PLAYERPASSENGERID_OFFSET))(this);
		}

		::System::Void set_PlayerPassengerID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SET_PLAYERPASSENGERID_OFFSET))(this, value);
		}

		::System::UInt32 get_LeaderWorkingBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_LEADERWORKINGBUFFID_OFFSET))(this);
		}

		::System::Void set_LeaderWorkingBuffID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SET_LEADERWORKINGBUFFID_OFFSET))(this, value);
		}

		::RPG::GameCore::TrainPartyWorkingBuffConfigRow* get_WorkingBuffRow()
		{
			return ((::RPG::GameCore::TrainPartyWorkingBuffConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_WORKINGBUFFROW_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyPassengerSkillSettleData* get_SkillSettleData()
		{
			return ((::RPG::Client::TrainParty::TrainPartyPassengerSkillSettleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_GET_SKILLSETTLEDATA_OFFSET))(this);
		}

		::System::Void set_SkillSettleData(::RPG::Client::TrainParty::TrainPartyPassengerSkillSettleData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerSkillSettleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYPASSENGERMANAGER_SET_SKILLSETTLEDATA_OFFSET))(this, value);
		}
	};
}

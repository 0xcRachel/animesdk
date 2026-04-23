#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_7AB88D713F5121B3_48;
namespace RPG::Client { class BattleCollegeData; }
namespace RPG::Client { class BattleCollegeGroupData; }
namespace RPG::Client { class ItemDisplayData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLECOLLEGEMODULE_CLEARBATTLETEMPPARAM_OFFSET UNITYSDK_OFFSET(0xF3BB5C0)
#define RPG_CLIENT_BATTLECOLLEGEMODULE_CLEARNEWUNLOCKBATTLECOLLEGEGROUPID_OFFSET UNITYSDK_OFFSET(0xF3BBE30)
#define RPG_CLIENT_BATTLECOLLEGEMODULE_GETBATTLECOLLEGEDATA_OFFSET UNITYSDK_OFFSET(0xF3BAAD0)
#define RPG_CLIENT_BATTLECOLLEGEMODULE_GETBATTLECOLLEGEGROUPDATA_OFFSET UNITYSDK_OFFSET(0xF3BAB90)
#define RPG_CLIENT_BATTLECOLLEGEMODULE_GETBATTLECOLLEGELEVELNOTSEENLIST_OFFSET UNITYSDK_OFFSET(0xF3BC480)
#define RPG_CLIENT_BATTLECOLLEGEMODULE_GET_ALLBATTLECOLLEGEDATA_OFFSET UNITYSDK_OFFSET(0xF3BC820)
#define RPG_CLIENT_BATTLECOLLEGEMODULE_GET_ALLBATTLECOLLEGEGROUPDATA_OFFSET UNITYSDK_OFFSET(0xF3BC840)
#define RPG_CLIENT_BATTLECOLLEGEMODULE_GET_CURRENTBATTLECOLLEGEAIMPARAM_OFFSET UNITYSDK_OFFSET(0xF3BC8C0)
#define RPG_CLIENT_BATTLECOLLEGEMODULE_GET_CURRENTBATTLECOLLEGEDATA_OFFSET UNITYSDK_OFFSET(0xF3BB4D0)
#define RPG_CLIENT_BATTLECOLLEGEMODULE_GET_CURRENTBATTLECOLLEGEID_OFFSET UNITYSDK_OFFSET(0xF3BC860)
#define RPG_CLIENT_BATTLECOLLEGEMODULE_GET_NEWUNLOCKBATTLECOLLEGEGROUPID_OFFSET UNITYSDK_OFFSET(0xF3BC880)
#define RPG_CLIENT_BATTLECOLLEGEMODULE_GET_SAVEDSUCCESSREWARDDATA_OFFSET UNITYSDK_OFFSET(0xF3BC8A0)
#define RPG_CLIENT_BATTLECOLLEGEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xF3B9BB0)
#define RPG_CLIENT_BATTLECOLLEGEMODULE_ISALLBATTLECOLLEGEFINISHED_OFFSET UNITYSDK_OFFSET(0xF3BB640)
#define RPG_CLIENT_BATTLECOLLEGEMODULE_SENDMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0xF3BB740)
#define RPG_CLIENT_BATTLECOLLEGEMODULE_SETAUTOSHOWONEXITBATTLE_OFFSET UNITYSDK_OFFSET(0xF3BC1A0)
#define RPG_CLIENT_BATTLECOLLEGEMODULE_SET_ALLBATTLECOLLEGEDATA_OFFSET UNITYSDK_OFFSET(0xF3BC830)
#define RPG_CLIENT_BATTLECOLLEGEMODULE_SET_ALLBATTLECOLLEGEGROUPDATA_OFFSET UNITYSDK_OFFSET(0xF3BC850)
#define RPG_CLIENT_BATTLECOLLEGEMODULE_SET_CURRENTBATTLECOLLEGEAIMPARAM_OFFSET UNITYSDK_OFFSET(0xF3BC8D0)
#define RPG_CLIENT_BATTLECOLLEGEMODULE_SET_CURRENTBATTLECOLLEGEID_OFFSET UNITYSDK_OFFSET(0xF3BC870)
#define RPG_CLIENT_BATTLECOLLEGEMODULE_SET_NEWUNLOCKBATTLECOLLEGEGROUPID_OFFSET UNITYSDK_OFFSET(0xF3BC890)
#define RPG_CLIENT_BATTLECOLLEGEMODULE_SET_SAVEDSUCCESSREWARDDATA_OFFSET UNITYSDK_OFFSET(0xF3BC8B0)
#define RPG_CLIENT_BATTLECOLLEGEMODULE_TRYAUTOSHOW_OFFSET UNITYSDK_OFFSET(0xF3BBE80)
#define RPG_CLIENT_BATTLECOLLEGEMODULE_UPDATEAIMDATAINBATTLE_OFFSET UNITYSDK_OFFSET(0xF3BC3C0)
#define RPG_CLIENT_BATTLECOLLEGEMODULE__ADDBATTLECOLLEGEDATA_OFFSET UNITYSDK_OFFSET(0xF3BC600)
#define RPG_CLIENT_BATTLECOLLEGEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xF3B9EB0)
#define RPG_CLIENT_BATTLECOLLEGEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xF3B9F60)
#define RPG_CLIENT_BATTLECOLLEGEMODULE__CMDGETBATTLECOLLEGEDATASCRSP_OFFSET UNITYSDK_OFFSET(0xF3BAE80)
#define RPG_CLIENT_BATTLECOLLEGEMODULE__CMDSTARTBATTLECOLLEGESCRSP_OFFSET UNITYSDK_OFFSET(0xF3BA040)
#define RPG_CLIENT_BATTLECOLLEGEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xF3BC8E0)
#define RPG_CLIENT_BATTLECOLLEGEMODULE__INITBATTLECOLLEGEDATA_OFFSET UNITYSDK_OFFSET(0xF3B9D60)
#define RPG_CLIENT_BATTLECOLLEGEMODULE__INITBATTLECOLLEGEGROUPDATA_OFFSET UNITYSDK_OFFSET(0xF3B9C50)
#define RPG_CLIENT_BATTLECOLLEGEMODULE__ISINORIGINMAP_OFFSET UNITYSDK_OFFSET(0xF3BC040)
#define RPG_CLIENT_BATTLECOLLEGEMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0xF3BC710)
#define RPG_CLIENT_BATTLECOLLEGEMODULE__ONBATTLEGAMEPHASELEAVE_OFFSET UNITYSDK_OFFSET(0xF3BB360)
#define RPG_CLIENT_BATTLECOLLEGEMODULE__ONSYNCBATTLECOLLEGEDATACHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xF3BA140)
#define RPG_CLIENT_BATTLECOLLEGEMODULE__PREPAREUNLOCKRELATEDMISSION_OFFSET UNITYSDK_OFFSET(0xF3BB7D0)
#define RPG_CLIENT_BATTLECOLLEGEMODULE__TRYNOTIFYALLFINISH_OFFSET UNITYSDK_OFFSET(0xF3BADC0)
#define RPG_CLIENT_BATTLECOLLEGEMODULE__TRYSAVENEWUNLOCKBATTLECOLLEGEGROUPID_OFFSET UNITYSDK_OFFSET(0xF3BAC30)
#define RPG_CLIENT_BATTLECOLLEGEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0xF3BCA10)
#define RPG_CLIENT_BATTLECOLLEGEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xF3BCAA0)
#define RPG_CLIENT_BATTLECOLLEGEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xF3BCAE0)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleCollegeModule_TypeDefinitionIndex = 57914;

	class BattleCollegeModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _UnlockMissionID; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::BattleCollegeData*>* _NotSeenBattleCollegeList; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BattleCollegeData*>* _AllBattleCollegeData_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::BattleCollegeGroupData*>* _AllBattleCollegeGroupData_k__BackingField; // 0x28
		::Class_1_7AB88D713F5121B3_48* _CurrentBattleCollegeAimParam_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _SavedSuccessRewardData_k__BackingField; // 0x38
		::System::UInt32 _OriginFloorID; // 0x40
		::System::UInt32 _NewUnlockBattleCollegeGroupID_k__BackingField; // 0x44
		::System::UInt32 _CurrentBattleCollegeID_k__BackingField; // 0x48
		::System::Int32 _AutoShowLevelID; // 0x4C
		::System::Int32 _AutoShowGroupID; // 0x50
		::System::UInt32 _OriginPlaneID; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _CmdStartBattleCollegeScRsp(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE__CMDSTARTBATTLECOLLEGESCRSP_OFFSET))(this, cmd, rsp);
		}

		::System::Void _OnSyncBattleCollegeDataChangeScNotify(::System::UInt16 cmd, ::System::Object* ntf)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE__ONSYNCBATTLECOLLEGEDATACHANGESCNOTIFY_OFFSET))(this, cmd, ntf);
		}

		::System::Void _CmdGetBattleCollegeDataScRsp(::System::UInt16 cmd, ::System::Object* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE__CMDGETBATTLECOLLEGEDATASCRSP_OFFSET))(this, cmd, rsp);
		}

		::System::Void _OnBattleGamePhaseLeave(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE__ONBATTLEGAMEPHASELEAVE_OFFSET))(this, arg);
		}

		::System::Boolean IsAllBattleCollegeFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE_ISALLBATTLECOLLEGEFINISHED_OFFSET))(this);
		}

		::RPG::Client::BattleCollegeGroupData* GetBattleCollegeGroupData(::System::UInt32 groupID)
		{
			return ((::RPG::Client::BattleCollegeGroupData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE_GETBATTLECOLLEGEGROUPDATA_OFFSET))(this, groupID);
		}

		::RPG::Client::BattleCollegeData* GetBattleCollegeData(::System::UInt32 id)
		{
			return ((::RPG::Client::BattleCollegeData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE_GETBATTLECOLLEGEDATA_OFFSET))(this, id);
		}

		::System::Void SendModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE_SENDMODULEINITREQUEST_OFFSET))(this);
		}

		::System::Void ClearBattleTempParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE_CLEARBATTLETEMPPARAM_OFFSET))(this);
		}

		::System::Void ClearNewUnlockBattleCollegeGroupID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE_CLEARNEWUNLOCKBATTLECOLLEGEGROUPID_OFFSET))(this);
		}

		::System::Void TryAutoShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE_TRYAUTOSHOW_OFFSET))(this);
		}

		::System::Void SetAutoShowOnExitBattle(::System::Int32 defaultGroupID, ::System::Int32 defaultLevelID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE_SETAUTOSHOWONEXITBATTLE_OFFSET))(this, defaultGroupID, defaultLevelID);
		}

		::System::Void UpdateAimDataInBattle(::Class_1_7AB88D713F5121B3_48* param)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7AB88D713F5121B3_48*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE_UPDATEAIMDATAINBATTLE_OFFSET))(this, param);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BattleCollegeData*>* GetBattleCollegeLevelNotSeenList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BattleCollegeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE_GETBATTLECOLLEGELEVELNOTSEENLIST_OFFSET))(this);
		}

		::System::Void _InitBattleCollegeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE__INITBATTLECOLLEGEDATA_OFFSET))(this);
		}

		::System::Void _InitBattleCollegeGroupData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE__INITBATTLECOLLEGEGROUPDATA_OFFSET))(this);
		}

		::System::Void _AddBattleCollegeData(::RPG::Client::BattleCollegeData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleCollegeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE__ADDBATTLECOLLEGEDATA_OFFSET))(this, data);
		}

		::System::Void _PrepareUnlockRelatedMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE__PREPAREUNLOCKRELATEDMISSION_OFFSET))(this);
		}

		::System::Boolean _IsInOriginMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE__ISINORIGINMAP_OFFSET))(this);
		}

		::System::Void _TrySaveNewUnlockBattleCollegeGroupID(::RPG::Client::BattleCollegeGroupData* groupData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleCollegeGroupData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE__TRYSAVENEWUNLOCKBATTLECOLLEGEGROUPID_OFFSET))(this, groupData);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, arg);
		}

		::System::Void _TryNotifyAllFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE__TRYNOTIFYALLFINISH_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BattleCollegeData*>* get_AllBattleCollegeData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BattleCollegeData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE_GET_ALLBATTLECOLLEGEDATA_OFFSET))(this);
		}

		::System::Void set_AllBattleCollegeData(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BattleCollegeData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BattleCollegeData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE_SET_ALLBATTLECOLLEGEDATA_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BattleCollegeGroupData*>* get_AllBattleCollegeGroupData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BattleCollegeGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE_GET_ALLBATTLECOLLEGEGROUPDATA_OFFSET))(this);
		}

		::System::Void set_AllBattleCollegeGroupData(::System::Collections::Generic::List_1<::RPG::Client::BattleCollegeGroupData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::BattleCollegeGroupData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE_SET_ALLBATTLECOLLEGEGROUPDATA_OFFSET))(this, value);
		}

		::System::UInt32 get_CurrentBattleCollegeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE_GET_CURRENTBATTLECOLLEGEID_OFFSET))(this);
		}

		::System::Void set_CurrentBattleCollegeID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE_SET_CURRENTBATTLECOLLEGEID_OFFSET))(this, value);
		}

		::RPG::Client::BattleCollegeData* get_CurrentBattleCollegeData()
		{
			return ((::RPG::Client::BattleCollegeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE_GET_CURRENTBATTLECOLLEGEDATA_OFFSET))(this);
		}

		::System::UInt32 get_NewUnlockBattleCollegeGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE_GET_NEWUNLOCKBATTLECOLLEGEGROUPID_OFFSET))(this);
		}

		::System::Void set_NewUnlockBattleCollegeGroupID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE_SET_NEWUNLOCKBATTLECOLLEGEGROUPID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_SavedSuccessRewardData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE_GET_SAVEDSUCCESSREWARDDATA_OFFSET))(this);
		}

		::System::Void set_SavedSuccessRewardData(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE_SET_SAVEDSUCCESSREWARDDATA_OFFSET))(this, value);
		}

		::Class_1_7AB88D713F5121B3_48* get_CurrentBattleCollegeAimParam()
		{
			return ((::Class_1_7AB88D713F5121B3_48*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE_GET_CURRENTBATTLECOLLEGEAIMPARAM_OFFSET))(this);
		}

		::System::Void set_CurrentBattleCollegeAimParam(::Class_1_7AB88D713F5121B3_48* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7AB88D713F5121B3_48*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE_SET_CURRENTBATTLECOLLEGEAIMPARAM_OFFSET))(this, value);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLECOLLEGEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}

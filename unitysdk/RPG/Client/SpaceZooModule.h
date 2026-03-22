#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/SpaceZooQuestType.h"

namespace RPG::Client { class MainMissionData; }
namespace RPG::Client { class SpaceZooCatData; }
namespace RPG::Client { class SpaceZooData; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_SPACEZOOMODULE_GETAVAILACTIVITYREWARDQUESTIDLIST_OFFSET UNITYSDK_OFFSET(0x9F8D2F0)
#define RPG_CLIENT_SPACEZOOMODULE_GETAVAILACTIVITYREWARDTABINDEX_OFFSET UNITYSDK_OFFSET(0x9F96D90)
#define RPG_CLIENT_SPACEZOOMODULE_GETNEWCATS_OFFSET UNITYSDK_OFFSET(0x9F97330)
#define RPG_CLIENT_SPACEZOOMODULE_GETNEWSPECIALCATS_OFFSET UNITYSDK_OFFSET(0x9F97690)
#define RPG_CLIENT_SPACEZOOMODULE_GETSPACEZOOINFO_OFFSET UNITYSDK_OFFSET(0x9F96C80)
#define RPG_CLIENT_SPACEZOOMODULE_GET_BREEDITEMCOST_OFFSET UNITYSDK_OFFSET(0x9F981A0)
#define RPG_CLIENT_SPACEZOOMODULE_GET_BREEDITEMID_OFFSET UNITYSDK_OFFSET(0x9F98180)
#define RPG_CLIENT_SPACEZOOMODULE_GET_ISRAIDUNLOCK_OFFSET UNITYSDK_OFFSET(0x9F982D0)
#define RPG_CLIENT_SPACEZOOMODULE_GET_ISSPECIALEVENTUNLOCK_OFFSET UNITYSDK_OFFSET(0x9F981C0)
#define RPG_CLIENT_SPACEZOOMODULE_GET_SPACEZOODATA_OFFSET UNITYSDK_OFFSET(0x9F98160)
#define RPG_CLIENT_SPACEZOOMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9F94180)
#define RPG_CLIENT_SPACEZOOMODULE_ISSPACEZOOGOTOEVERYDATACTIVE_OFFSET UNITYSDK_OFFSET(0x9F8DB90)
#define RPG_CLIENT_SPACEZOOMODULE_REFRESHALLUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x9F968E0)
#define RPG_CLIENT_SPACEZOOMODULE_REFRESHALLUNLOCKSUBMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x9F96AB0)
#define RPG_CLIENT_SPACEZOOMODULE_SENDMODULEINITREQUEST_OFFSET UNITYSDK_OFFSET(0x9F96700)
#define RPG_CLIENT_SPACEZOOMODULE_SET_BREEDITEMCOST_OFFSET UNITYSDK_OFFSET(0x9F981B0)
#define RPG_CLIENT_SPACEZOOMODULE_SET_BREEDITEMID_OFFSET UNITYSDK_OFFSET(0x9F98190)
#define RPG_CLIENT_SPACEZOOMODULE_SET_SPACEZOODATA_OFFSET UNITYSDK_OFFSET(0x9F98170)
#define RPG_CLIENT_SPACEZOOMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9F94530)
#define RPG_CLIENT_SPACEZOOMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9F94340)
#define RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOBORNSCRSP_OFFSET UNITYSDK_OFFSET(0x9F94710)
#define RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOODATASCRSP_OFFSET UNITYSDK_OFFSET(0x9F94650)
#define RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOODELETECATSCRSP_OFFSET UNITYSDK_OFFSET(0x9F95250)
#define RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOEXCHANGEITEMSCRSP_OFFSET UNITYSDK_OFFSET(0x9F953A0)
#define RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOMUTATESCRSP_OFFSET UNITYSDK_OFFSET(0x9F94F40)
#define RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOOPCATTERYSCRSP_OFFSET UNITYSDK_OFFSET(0x9F951C0)
#define RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOTAKESCRSP_OFFSET UNITYSDK_OFFSET(0x9F95400)
#define RPG_CLIENT_SPACEZOOMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9F93F00)
#define RPG_CLIENT_SPACEZOOMODULE__INITFUNCTIONUNLOCKMISSION_OFFSET UNITYSDK_OFFSET(0x9F979F0)
#define RPG_CLIENT_SPACEZOOMODULE__INITMATERIALUNLOCKMISSION_OFFSET UNITYSDK_OFFSET(0x9F97BE0)
#define RPG_CLIENT_SPACEZOOMODULE__INITPHASEMISSION_OFFSET UNITYSDK_OFFSET(0x9F97E80)
#define RPG_CLIENT_SPACEZOOMODULE__INITPHASESUBMISSION_OFFSET UNITYSDK_OFFSET(0x9F97F20)
#define RPG_CLIENT_SPACEZOOMODULE__INITSPACEZOOSPECIALEVENTTIPMISSION_OFFSET UNITYSDK_OFFSET(0x9F97D20)
#define RPG_CLIENT_SPACEZOOMODULE__INITUNLOCKMISSION_OFFSET UNITYSDK_OFFSET(0x9F942D0)
#define RPG_CLIENT_SPACEZOOMODULE__ISCATNEEDHINT_OFFSET UNITYSDK_OFFSET(0x9F96170)
#define RPG_CLIENT_SPACEZOOMODULE__ONFINISHSUBMISSION_OFFSET UNITYSDK_OFFSET(0x9F96230)
#define RPG_CLIENT_SPACEZOOMODULE__ONRECEIVEUNLOCKMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x9F980A0)
#define RPG_CLIENT_SPACEZOOMODULE__ONRECEIVEUNLOCKSUBMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x9F98100)
#define RPG_CLIENT_SPACEZOOMODULE__ONSPACEZOOCATUPDATENOTIFY_OFFSET UNITYSDK_OFFSET(0x9F95620)
#define RPG_CLIENT_SPACEZOOMODULE__ONTRYNOTIFYNEWCATHINT_OFFSET UNITYSDK_OFFSET(0x9F965E0)
#define RPG_CLIENT_SPACEZOOMODULE__REFRESHUNLOCKFEATUREPREF_OFFSET UNITYSDK_OFFSET(0x9F94BF0)
#define RPG_CLIENT_SPACEZOOMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9F98420)
#define RPG_CLIENT_SPACEZOOMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x9F98510)
#define RPG_CLIENT_SPACEZOOMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x9F984B0)

namespace RPG::Client
{
	inline static constexpr unsigned int SpaceZooModule_TypeDefinitionIndex = 53916;

	class SpaceZooModule : public ::RPG::Client::BaseModule
	{
	public:
		// static const ::System::String* _MUTATE_ITEM_KEY; // 0x0
		// static const ::System::String* _SPECIAL_EVENT_UNLOCK_KEY; // 0x0
		// static const ::System::String* _RAID_UNLOCK_KEY; // 0x0
		// static const ::System::String* _PHASE_SUBMISSION_LIST_KEY; // 0x0
		// static const ::System::String* _FINIAL_MISSION_KEY; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::SpaceZooCatData*>* _WaitHintCats; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockMissionIDs; // 0x18
		::RPG::Client::SpaceZooData* _SpaceZooData_k__BackingField; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UnlockSubMissionIDs; // 0x28
		::RPG::Client::Promises::Promise* _UnlockSubMissionDataPromise; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotRewardList; // 0x38
		::RPG::Client::Promises::Promise* _UnlockMissionDataPromise; // 0x40
		::RPG::Client::Promises::Promise* _GetSpaceZooInfoPromise; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotNewSpecialCats; // 0x50
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotNewCats; // 0x58
		::System::UInt32 _SpecialEventUnlockSubMissionID; // 0x60
		::System::UInt32 _RaidUnlockMissionID; // 0x64
		::System::UInt32 _SpaceZooFinishMissionID; // 0x68
		::System::UInt32 _BreedItemCost_k__BackingField; // 0x6C
		::System::UInt32 _BreedItemID_k__BackingField; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_INIT_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _CmdSpaceZooDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOODATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _CmdSpaceZooBornScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOBORNSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _CmdSpaceZooMutateScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOMUTATESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _CmdSpaceZooOpCatteryScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOOPCATTERYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _CmdSpaceZooDeleteCatScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOODELETECATSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _CmdSpaceZooExchangeItemScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOEXCHANGEITEMSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _CmdSpaceZooTakeScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__CMDSPACEZOOTAKESCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnSpaceZooCatUpdateNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__ONSPACEZOOCATUPDATENOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnFinishSubMission(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__ONFINISHSUBMISSION_OFFSET))(this, arg);
		}

		::System::Void _OnTryNotifyNewCatHint(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__ONTRYNOTIFYNEWCATHINT_OFFSET))(this, arg);
		}

		::System::Boolean _IsCatNeedHint(::RPG::Client::SpaceZooCatData* catData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::SpaceZooCatData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__ISCATNEEDHINT_OFFSET))(this, catData);
		}

		::System::Void SendModuleInitRequest()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_SENDMODULEINITREQUEST_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* RefreshAllUnlockMissionData()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_REFRESHALLUNLOCKMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* RefreshAllUnlockSubMissionData()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_REFRESHALLUNLOCKSUBMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* GetSpaceZooInfo()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_GETSPACEZOOINFO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAvailActivityRewardTabIndex()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_GETAVAILACTIVITYREWARDTABINDEX_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetAvailActivityRewardQuestIDList(::RPG::GameCore::SpaceZooQuestType type)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::SpaceZooQuestType))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_GETAVAILACTIVITYREWARDQUESTIDLIST_OFFSET))(this, type);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewCats()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_GETNEWCATS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewSpecialCats()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_GETNEWSPECIALCATS_OFFSET))(this);
		}

		::System::Boolean IsSpaceZooGoToEveryDatActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_ISSPACEZOOGOTOEVERYDATACTIVE_OFFSET))(this);
		}

		::System::Void _InitUnlockMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__INITUNLOCKMISSION_OFFSET))(this);
		}

		::System::Void _InitFunctionUnlockMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__INITFUNCTIONUNLOCKMISSION_OFFSET))(this);
		}

		::System::Void _InitPhaseSubMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__INITPHASESUBMISSION_OFFSET))(this);
		}

		::System::Void _InitMaterialUnlockMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__INITMATERIALUNLOCKMISSION_OFFSET))(this);
		}

		::System::Void _InitSpaceZooSpecialEventTipMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__INITSPACEZOOSPECIALEVENTTIPMISSION_OFFSET))(this);
		}

		::System::Void _InitPhaseMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__INITPHASEMISSION_OFFSET))(this);
		}

		::System::Void _OnReceiveUnlockMissionData(::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>* dataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::MainMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__ONRECEIVEUNLOCKMISSIONDATA_OFFSET))(this, dataList);
		}

		::System::Void _OnReceiveUnlockSubMissionData(::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>* dataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::SubMissionData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__ONRECEIVEUNLOCKSUBMISSIONDATA_OFFSET))(this, dataList);
		}

		::System::Void _RefreshUnlockFeaturePref(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* featuresID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE__REFRESHUNLOCKFEATUREPREF_OFFSET))(this, featuresID);
		}

		::RPG::Client::SpaceZooData* get_SpaceZooData()
		{
			return ((::RPG::Client::SpaceZooData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_GET_SPACEZOODATA_OFFSET))(this);
		}

		::System::Void set_SpaceZooData(::RPG::Client::SpaceZooData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SpaceZooData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_SET_SPACEZOODATA_OFFSET))(this, value);
		}

		::System::UInt32 get_BreedItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_GET_BREEDITEMID_OFFSET))(this);
		}

		::System::Void set_BreedItemID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_SET_BREEDITEMID_OFFSET))(this, value);
		}

		::System::UInt32 get_BreedItemCost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_GET_BREEDITEMCOST_OFFSET))(this);
		}

		::System::Void set_BreedItemCost(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_SET_BREEDITEMCOST_OFFSET))(this, value);
		}

		::System::Boolean get_IsSpecialEventUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_GET_ISSPECIALEVENTUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsRaidUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE_GET_ISRAIDUNLOCK_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPACEZOOMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}

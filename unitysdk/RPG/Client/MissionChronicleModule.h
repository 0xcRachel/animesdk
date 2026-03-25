#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

class Class_1_5A422511FB64752E;
class Class_1_C68048984BDA3388;
namespace RPG::Client { class MissionChronicleBasePathData; }
namespace RPG::Client { class MissionChronicleMainPathData; }
namespace RPG::Client { class MissionChronicleRedDotFilter; }
namespace RPG::Client { class MissionChronicleSubPathData; }
namespace RPG::Client { class PenaconyEndmostChronicleData; }
namespace RPG::Client::Promises { class IPromise; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MISSIONCHRONICLEMODULE_CHECKPREFSOVERFLOW_OFFSET UNITYSDK_OFFSET(0x9BC70F0)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9BC8680)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_GETAVAILABLEMIDDLESINGLEPACKMISSION_OFFSET UNITYSDK_OFFSET(0x9BC5330)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_GETEMPTYMISSIONDATALIST_OFFSET UNITYSDK_OFFSET(0x9BC6B10)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_GETNEWPATHDATABYMISSIONID_OFFSET UNITYSDK_OFFSET(0x9BC7130)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_GETPENACONYENDMOSTCHRONICLEDATA_OFFSET UNITYSDK_OFFSET(0x9BC87C0)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_GET_CANTAKEMISSIONPATHIDLIST_OFFSET UNITYSDK_OFFSET(0x9BC96C0)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_GET_CHRONICLEMAINPATHDICT_OFFSET UNITYSDK_OFFSET(0x9BC9680)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_GET_CHRONICLEMIDDLEMISSIONPACKDICT_OFFSET UNITYSDK_OFFSET(0x9BC9730)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_GET_FIRSTPATHID_OFFSET UNITYSDK_OFFSET(0x9BC96A0)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_GET_MISSIONCHRONICLEREDDOTFILTER_OFFSET UNITYSDK_OFFSET(0x9BC9710)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_GET_WORLDPATHDICT_OFFSET UNITYSDK_OFFSET(0x9BC9750)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x9BC78C0)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x9BC85F0)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9BC8750)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_PREPARECHRONICLEMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x9BC5900)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_REFRESHEARLYACCESSINFO_OFFSET UNITYSDK_OFFSET(0x9BC7410)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_REFRESHINFO_OFFSET UNITYSDK_OFFSET(0x9BC73C0)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_REFRESHWORLDUNLOCK_OFFSET UNITYSDK_OFFSET(0x9BC7630)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_SET_CHRONICLEMAINPATHDICT_OFFSET UNITYSDK_OFFSET(0x9BC9690)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_SET_CHRONICLEMIDDLEMISSIONPACKDICT_OFFSET UNITYSDK_OFFSET(0x9BC9740)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_SET_FIRSTPATHID_OFFSET UNITYSDK_OFFSET(0x9BC96B0)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_SET_MISSIONCHRONICLEREDDOTFILTER_OFFSET UNITYSDK_OFFSET(0x9BC9720)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE_SET_WORLDPATHDICT_OFFSET UNITYSDK_OFFSET(0x9BC9760)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__CHECKISMISSIONEMPTY_OFFSET UNITYSDK_OFFSET(0x9BC6E20)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__CHECKISSUBMISSIONEMPTY_OFFSET UNITYSDK_OFFSET(0x9BC6F80)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x9BC58D0)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__GENERATECHRONICLEMIDDLEMISSIONPACK_OFFSET UNITYSDK_OFFSET(0x9BC8260)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__GENERATECHRONICLEPATH_OFFSET UNITYSDK_OFFSET(0x9BC79F0)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__GENERATEFILTER_OFFSET UNITYSDK_OFFSET(0x9BC8150)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__GETMISSIONNEEDPREPAREIDLIST_OFFSET UNITYSDK_OFFSET(0x9BC5A70)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__ONLOGINFINISH_B__10_0_OFFSET UNITYSDK_OFFSET(0x9BC9770)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__SEARCHEARLYACCESSEFFECTED_OFFSET UNITYSDK_OFFSET(0x9BC7770)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__SEARCHNEWMAINPATHBYMISSIONID_OFFSET UNITYSDK_OFFSET(0x9BC7210)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__SEARCHNEWSUBPATHBYMISSIONID_OFFSET UNITYSDK_OFFSET(0x9BC9110)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__SETASSISTPATHDATALISTEAEFFECTED_OFFSET UNITYSDK_OFFSET(0x9BC95D0)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__SETCANTAKEMISSIONPATHIDLIST_OFFSET UNITYSDK_OFFSET(0x9BC8E00)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__SETCONNECTIONWAYDATA_OFFSET UNITYSDK_OFFSET(0x9BC8820)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE__SETMAINPATHCANTAKEMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x9BC8F60)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9BC98A0)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x9BC97B0)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x9BC9840)
#define RPG_CLIENT_MISSIONCHRONICLEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x9BC98B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MissionChronicleModule_TypeDefinitionIndex = 53711;

	class MissionChronicleModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::String* ChronicleMiddleMissionPackJsonFilePath; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::MissionChronicleMainPathData*>* _AssistEAPathDataList; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _AllSubMissionIDList; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _AllMissionIDList; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleMainPathData*>* _WorldPathDict_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _CanTakeMissionPathIDList; // 0x38
		::RPG::Client::MissionChronicleRedDotFilter* _MissionChronicleRedDotFilter_k__BackingField; // 0x40
		::RPG::Client::PenaconyEndmostChronicleData* _PenaconyEndmostChronicleData; // 0x48
		::System::String* ChronicleMainPathJsonFilePath; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C68048984BDA3388*>* _ChronicleMiddleMissionPackDict_k__BackingField; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleMainPathData*>* _ChronicleMainPathDict_k__BackingField; // 0x60
		::System::UInt32 _FirstPathID_k__BackingField; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PrepareChronicleMissionData()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_PREPARECHRONICLEMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* GetEmptyMissionDataList()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_GETEMPTYMISSIONDATALIST_OFFSET))(this);
		}

		::System::Void CheckPrefsOverFlow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_CHECKPREFSOVERFLOW_OFFSET))(this);
		}

		::RPG::Client::MissionChronicleBasePathData* GetNewPathDataByMissionID(::System::UInt32 missionId)
		{
			return ((::RPG::Client::MissionChronicleBasePathData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_GETNEWPATHDATABYMISSIONID_OFFSET))(this, missionId);
		}

		::Class_1_5A422511FB64752E* GetAvailableMiddleSinglePackMission(::System::UInt32 missionPack)
		{
			return ((::Class_1_5A422511FB64752E*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_GETAVAILABLEMIDDLESINGLEPACKMISSION_OFFSET))(this, missionPack);
		}

		::System::Void RefreshInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_REFRESHINFO_OFFSET))(this);
		}

		::System::Void RefreshEarlyAccessInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_REFRESHEARLYACCESSINFO_OFFSET))(this);
		}

		::System::Void RefreshWorldUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_REFRESHWORLDUNLOCK_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_INIT_OFFSET))(this);
		}

		::System::Void OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::RPG::Client::PenaconyEndmostChronicleData* GetPenaconyEndmostChronicleData()
		{
			return ((::RPG::Client::PenaconyEndmostChronicleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_GETPENACONYENDMOSTCHRONICLEDATA_OFFSET))(this);
		}

		::System::Void _GenerateChroniclePath()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__GENERATECHRONICLEPATH_OFFSET))(this);
		}

		::System::Void _SetConnectionWayData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__SETCONNECTIONWAYDATA_OFFSET))(this);
		}

		::System::Void _GenerateChronicleMiddleMissionPack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__GENERATECHRONICLEMIDDLEMISSIONPACK_OFFSET))(this);
		}

		::System::Void _GetMissionNeedPrepareIDList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__GETMISSIONNEEDPREPAREIDLIST_OFFSET))(this);
		}

		::System::Void _SetCanTakeMissionPathIDList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__SETCANTAKEMISSIONPATHIDLIST_OFFSET))(this);
		}

		::System::Void _SetMainPathCanTakeMissionList(::RPG::Client::MissionChronicleMainPathData* mainPathData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__SETMAINPATHCANTAKEMISSIONLIST_OFFSET))(this, mainPathData);
		}

		::RPG::Client::MissionChronicleBasePathData* _SearchNewMainPathByMissionID(::RPG::Client::MissionChronicleMainPathData* mainPathData, ::System::UInt32 missionId)
		{
			return ((::RPG::Client::MissionChronicleBasePathData*(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__SEARCHNEWMAINPATHBYMISSIONID_OFFSET))(this, mainPathData, missionId);
		}

		::RPG::Client::MissionChronicleBasePathData* _SearchNewSubPathByMissionID(::RPG::Client::MissionChronicleSubPathData* subPathData, ::System::UInt32 missionId)
		{
			return ((::RPG::Client::MissionChronicleBasePathData*(*)(::PVOID, ::RPG::Client::MissionChronicleSubPathData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__SEARCHNEWSUBPATHBYMISSIONID_OFFSET))(this, subPathData, missionId);
		}

		::System::Void _GenerateFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__GENERATEFILTER_OFFSET))(this);
		}

		::System::Boolean _CheckIsMissionEmpty(::System::UInt32 missionId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__CHECKISMISSIONEMPTY_OFFSET))(this, missionId);
		}

		::System::Boolean _CheckIsSubMissionEmpty(::System::UInt32 subMissionId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__CHECKISSUBMISSIONEMPTY_OFFSET))(this, subMissionId);
		}

		::System::Void _SearchEarlyAccessEffected(::RPG::Client::MissionChronicleMainPathData* pathData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleMainPathData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__SEARCHEARLYACCESSEFFECTED_OFFSET))(this, pathData);
		}

		::System::Void _SetAssistPathDataListEAEffected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__SETASSISTPATHDATALISTEAEFFECTED_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleMainPathData*>* get_ChronicleMainPathDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleMainPathData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_GET_CHRONICLEMAINPATHDICT_OFFSET))(this);
		}

		::System::Void set_ChronicleMainPathDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleMainPathData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleMainPathData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_SET_CHRONICLEMAINPATHDICT_OFFSET))(this, value);
		}

		::System::UInt32 get_FirstPathID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_GET_FIRSTPATHID_OFFSET))(this);
		}

		::System::Void set_FirstPathID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_SET_FIRSTPATHID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_CanTakeMissionPathIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_GET_CANTAKEMISSIONPATHIDLIST_OFFSET))(this);
		}

		::RPG::Client::MissionChronicleRedDotFilter* get_MissionChronicleRedDotFilter()
		{
			return ((::RPG::Client::MissionChronicleRedDotFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_GET_MISSIONCHRONICLEREDDOTFILTER_OFFSET))(this);
		}

		::System::Void set_MissionChronicleRedDotFilter(::RPG::Client::MissionChronicleRedDotFilter* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MissionChronicleRedDotFilter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_SET_MISSIONCHRONICLEREDDOTFILTER_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C68048984BDA3388*>* get_ChronicleMiddleMissionPackDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C68048984BDA3388*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_GET_CHRONICLEMIDDLEMISSIONPACKDICT_OFFSET))(this);
		}

		::System::Void set_ChronicleMiddleMissionPackDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C68048984BDA3388*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_C68048984BDA3388*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_SET_CHRONICLEMIDDLEMISSIONPACKDICT_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleMainPathData*>* get_WorldPathDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleMainPathData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_GET_WORLDPATHDICT_OFFSET))(this);
		}

		::System::Void set_WorldPathDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleMainPathData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MissionChronicleMainPathData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE_SET_WORLDPATHDICT_OFFSET))(this, value);
		}

		::System::Void _OnLoginFinish_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE__ONLOGINFINISH_B__10_0_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE___IFIXBASEPROXY_ONLOGINFINISH_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MISSIONCHRONICLEMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}
	};
}

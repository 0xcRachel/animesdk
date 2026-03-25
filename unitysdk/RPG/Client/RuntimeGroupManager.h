#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EntitySpawnTransitionType.h"
#include "unitysdk/RPG/Client/LockHoyoGroupReason.h"
#include "unitysdk/RPG/Client/LockHoyoGroupRule.h"
#include "unitysdk/RPG/GameCore/EntityClassifyType.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_12.h"
#include "unitysdk/Struct_2_C2B892F638207307.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_43BD383C98B4C0C5_122;
class Class_1_4C9F1682233ECDD3;
class Class_1_4C9F1682233ECDD3_1;
class Class_1_ECBCF86CDE61CBCA;
class Class_1_F236C4DB0600E05D;
class Class_2_D8257A310CAD757C;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace RPG::Client { class Map; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class Map_RefreshEntitiesExtraInfo; }
namespace RPG::Client { class RuntimeGroupManager_GroupRefreshExtraInfo; }
namespace RPG::Client { class RuntimeGroupManager_HoYoGroupStreamingInfo; }
namespace RPG::Client { class RuntimeGroupManager_HoYoGroupUnit; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GroupEntityCreateConfig; }
namespace RPG::GameCore { class HoyoTag; }
namespace RPG::GameCore { class LevelGroupMissionCondition; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ADDGROUPSTREAMINGFILTERTAG_OFFSET UNITYSDK_OFFSET(0xA40B760)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ADDLOCALLEGACYNPC_OFFSET UNITYSDK_OFFSET(0xA412AF0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ADDLOCALLEGACYPROP_OFFSET UNITYSDK_OFFSET(0xA412D20)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_APPLYREGIONCHANGEREFRESH_OFFSET UNITYSDK_OFFSET(0xA40B510)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_APPLYVISIONRANGEGROUPCHANGE_OFFSET UNITYSDK_OFFSET(0xA40B6E0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_BEFORESTORYLINECHANGE_OFFSET UNITYSDK_OFFSET(0xA417AF0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_BEFORESWITCHMAP_OFFSET UNITYSDK_OFFSET(0xA417B80)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_CLEARALLSERVERGROUPUNITS_OFFSET UNITYSDK_OFFSET(0xA40D5E0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_CLEARHOYOGROUPPART_OFFSET UNITYSDK_OFFSET(0xA40C440)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_CLEARLEGACYPART_OFFSET UNITYSDK_OFFSET(0xA410030)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0xA4178B0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_COLLECTUNFINISHMAINMISSIONSBYFLOOR_OFFSET UNITYSDK_OFFSET(0xA409100)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_CREATELOCALENTITY_1_OFFSET UNITYSDK_OFFSET(0xA416590)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_CREATELOCALENTITY_OFFSET UNITYSDK_OFFSET(0xA415530)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_DESTROYLOCALENTITY_OFFSET UNITYSDK_OFFSET(0xA416880)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_DISPOSEINHOYOPART_OFFSET UNITYSDK_OFFSET(0xA40E040)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA4179A0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_FINDOCCUPIEDGROUP_OFFSET UNITYSDK_OFFSET(0xA40CDA0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_FORCERELOADGROUPS_OFFSET UNITYSDK_OFFSET(0xA40A7E0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_FORCEUNLOADGROUPS_OFFSET UNITYSDK_OFFSET(0xA40AE80)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_GETALLACTIVEGROUPUNITSWITHPREDICATE_OFFSET UNITYSDK_OFFSET(0xA40CBA0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_GETGROUPENTITY_OFFSET UNITYSDK_OFFSET(0xA40C840)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_GETGROUPSTATE_OFFSET UNITYSDK_OFFSET(0xA40C990)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_GETGROUPUNITS_OFFSET UNITYSDK_OFFSET(0xA4180A0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_GETHOYOGROUPUNIT_OFFSET UNITYSDK_OFFSET(0xA40ACB0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_GETMAPDEF_OFFSET UNITYSDK_OFFSET(0xA40AC70)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_GET_INVISIONRANGEHOYOGROUPS_OFFSET UNITYSDK_OFFSET(0xA40BE90)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_GET_ISGROUPSTREAMINGENABLED_OFFSET UNITYSDK_OFFSET(0xA409D00)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HASLOCALENTITY_OFFSET UNITYSDK_OFFSET(0xA416330)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HASMAPENTITY_OFFSET UNITYSDK_OFFSET(0xA4180E0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_INITCLIENTLEGACYPART_OFFSET UNITYSDK_OFFSET(0xA4101E0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_INITIALHOYOGROUPREFRESHANDLOAD_OFFSET UNITYSDK_OFFSET(0xA40D9D0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_INITIALIZEHOYOPART_OFFSET UNITYSDK_OFFSET(0xA40E8B0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xA417760)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISCURRENTMAP_OFFSET UNITYSDK_OFFSET(0xA40D590)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISGROUPFORCEUNLOAD_OFFSET UNITYSDK_OFFSET(0xA413150)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISGROUPLOADED_OFFSET UNITYSDK_OFFSET(0xA417C10)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISGROUPUNLOADEDBYCONFLICT_OFFSET UNITYSDK_OFFSET(0xA40DE40)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISHOYOGROUPLOADED_OFFSET UNITYSDK_OFFSET(0xA40CAD0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYGROUPCANLOAD_OFFSET UNITYSDK_OFFSET(0xA4131C0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYGROUPCANUNLOAD_OFFSET UNITYSDK_OFFSET(0xA413320)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYGROUPLOADED_OFFSET UNITYSDK_OFFSET(0xA40FA40)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYGROUP_OFFSET UNITYSDK_OFFSET(0xA405B80)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYNPCADDED_OFFSET UNITYSDK_OFFSET(0xA40FAA0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYPROPADDED_OFFSET UNITYSDK_OFFSET(0xA40FB90)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISSERVERGROUPLOADED_OFFSET UNITYSDK_OFFSET(0xA417CB0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_LOCKGROUPLOADSTATE_1_OFFSET UNITYSDK_OFFSET(0xA405C60)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_LOCKGROUPLOADSTATE_OFFSET UNITYSDK_OFFSET(0xA405AF0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ONNETWORKDISCONNECTED_OFFSET UNITYSDK_OFFSET(0xA417A60)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_REFRESHENTITIES_OFFSET UNITYSDK_OFFSET(0xA40AD70)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_REFRESHHOYOGROUPENTITIESBYCUSTOM_OFFSET UNITYSDK_OFFSET(0xA40D360)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_REGISTERGROUPSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xA40D1E0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_REGISTERGROUPUNLOADLISTENER_OFFSET UNITYSDK_OFFSET(0xA40DC30)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_REMOVEGROUPSTREAMINGFILTERTAG_OFFSET UNITYSDK_OFFSET(0xA40B9B0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_REMOVELOCALLEGACYNPC_OFFSET UNITYSDK_OFFSET(0xA4150E0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_REMOVELOCALLEGACYPROP_OFFSET UNITYSDK_OFFSET(0xA415250)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_STARTGROUPLEVELGRAPHS_1_OFFSET UNITYSDK_OFFSET(0xA40BF60)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_STARTGROUPLEVELGRAPHS_OFFSET UNITYSDK_OFFSET(0xA40BEF0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_TRYCREATEGROUPENTITIES_OFFSET UNITYSDK_OFFSET(0xA40A340)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_TRYGETGROUPSTATE_OFFSET UNITYSDK_OFFSET(0xA40CA00)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_UNLOCKGROUPLOADSTATE_1_OFFSET UNITYSDK_OFFSET(0xA4060A0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_UNLOCKGROUPLOADSTATE_OFFSET UNITYSDK_OFFSET(0xA406010)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_UNREGISTERGROUPSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xA40D2A0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_UNREGISTERGROUPUNLOADLISTENER_OFFSET UNITYSDK_OFFSET(0xA40DD40)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_VALIDATEGROUPSTATETRANSITION_OFFSET UNITYSDK_OFFSET(0xA40D020)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ADDADVENTURENOTIFYINHOYOPART_OFFSET UNITYSDK_OFFSET(0xA40E570)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ADDADVENTURENOTIFYINLEGACYPART_OFFSET UNITYSDK_OFFSET(0xA40FC80)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ADDADVENTURENOTIFY_OFFSET UNITYSDK_OFFSET(0xA417850)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ADDLOCALLEGACYDISTRICT_OFFSET UNITYSDK_OFFSET(0xA413C80)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ADDTODICT_OFFSET UNITYSDK_OFFSET(0xA411B30)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDGROUPREFRESHINPUTEX_ACTIVEGROUPUNITS_OFFSET UNITYSDK_OFFSET(0xA407600)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDGROUPREFRESHINPUTEX_ACTIVEREGIONS_OFFSET UNITYSDK_OFFSET(0xA4078A0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDGROUPREFRESHINPUTEX_OFFSET UNITYSDK_OFFSET(0xA4096F0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDMAP_OFFSET UNITYSDK_OFFSET(0xA411AA0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDMISSIONTOGROUPIDMAP_OFFSET UNITYSDK_OFFSET(0xA411860)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDREFRESHCONTEXT_OFFSET UNITYSDK_OFFSET(0xA4072E0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__CALCFINALTRACKINGMISSIONID_OFFSET UNITYSDK_OFFSET(0xA408FE0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__CALCULATEOTHERFLOORACTIVATEDGROUPS_OFFSET UNITYSDK_OFFSET(0xA407E50)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__CALCULATEOTHERFLOORLOADEDGROUPS_OFFSET UNITYSDK_OFFSET(0xA408AC0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA4184F0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__COLLECTALLOTHERFLOORSMAINMISSIONS_OFFSET UNITYSDK_OFFSET(0xA4094D0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__COLLECTOTHERFLOORSLOADEDGROUPS_OFFSET UNITYSDK_OFFSET(0xA407AE0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__COLLECTSTATEBEFOREREFRESH_OFFSET UNITYSDK_OFFSET(0xA407410)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA418200)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__DIFFAFTERREFRESH_OFFSET UNITYSDK_OFFSET(0xA409DB0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__DISPOSELEGACYPART_OFFSET UNITYSDK_OFFSET(0xA40FFC0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__DOREFRESHHOYOGROUPLOADSTATE_OFFSET UNITYSDK_OFFSET(0xA406D80)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__GROUPUNITSLOADUNLOADOPERATIONS_OFFSET UNITYSDK_OFFSET(0xA407150)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__INITCLIENTLEGACYGROUPBYSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xA410260)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__INITCLIENTLEGACYGROUPSBYSTANDALONEPERFORMANCETAG_OFFSET UNITYSDK_OFFSET(0xA410AC0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__INITCLIENTLEGACYGROUPS_OFFSET UNITYSDK_OFFSET(0xA410F10)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__INITCLIENTLEGACYGROUP_OFFSET UNITYSDK_OFFSET(0xA411310)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__INITIALIZEHOYOGROUPUNITSBYMAPDEF_OFFSET UNITYSDK_OFFSET(0xA40E900)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__INITLOADCLIENTLEGACYGROUP_OFFSET UNITYSDK_OFFSET(0xA413390)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__INITMISSIONTOLEGACYGROUPRELATION_OFFSET UNITYSDK_OFFSET(0xA4114B0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__INITREGIONSTATE_OFFSET UNITYSDK_OFFSET(0xA40B2B0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ISADVENTUREPHASEINITIALIZED_OFFSET UNITYSDK_OFFSET(0xA40EFB0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__LOADCLIENTLEGACYGROUP_OFFSET UNITYSDK_OFFSET(0xA413E50)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__MISSIONVALIDCHECK_OFFSET UNITYSDK_OFFSET(0xA40F860)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__NOTIFYGROUPREFRESHEND_OFFSET UNITYSDK_OFFSET(0xA4181B0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONCURRENTREGIONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0xA40B4B0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONGROUPLOADFINISH_OFFSET UNITYSDK_OFFSET(0xA40EE80)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONHOYOGROUPACTIVE_OFFSET UNITYSDK_OFFSET(0xA40EBC0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONHOYOGROUPDEACTIVE_OFFSET UNITYSDK_OFFSET(0xA40F660)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONHOYOGROUPSTREAMLOADED_OFFSET UNITYSDK_OFFSET(0xA40BCA0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONHOYOGROUPSTREAMUNLOADED_OFFSET UNITYSDK_OFFSET(0xA40BDB0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONMAINMISSIONDELETE_OFFSET UNITYSDK_OFFSET(0xA4130B0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONREFRESHANDLOADHOYOGROUP_OFFSET UNITYSDK_OFFSET(0xA40F030)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONREFRESHFIVEDIMGROUP_OFFSET UNITYSDK_OFFSET(0xA40F1C0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONREFRESHMAPGROUPDEFS_OFFSET UNITYSDK_OFFSET(0xA40F240)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONREFRESHPUZZLEGROUP_OFFSET UNITYSDK_OFFSET(0xA40F380)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONROTATABLEREGIONCHANGED_OFFSET UNITYSDK_OFFSET(0xA40F140)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__RECONFIGUREGROUPSTREAMING_OFFSET UNITYSDK_OFFSET(0xA4064A0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHCLIENTLEGACYGROUPLIST_OFFSET UNITYSDK_OFFSET(0xA411DB0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHCLIENTLEGACYGROUP_OFFSET UNITYSDK_OFFSET(0xA412280)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHENTITIES_OFFSET UNITYSDK_OFFSET(0xA412420)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHHOYOGROUPENTITIESBYLOADSTATECALC_OFFSET UNITYSDK_OFFSET(0xA407330)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHHOYOGROUPLOADSTATE_OFFSET UNITYSDK_OFFSET(0xA4063C0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHLEGACYCLIENTGROUPBYMAINMISSION_OFFSET UNITYSDK_OFFSET(0xA411CE0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHLEGACYCLIENTGROUPBYSUBMISSION_OFFSET UNITYSDK_OFFSET(0xA412160)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHLEGACYCLIENTGROUPBYSYNCMISSION_OFFSET UNITYSDK_OFFSET(0xA412230)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REMOVEADVENTURENOTIFYINHOYOPART_OFFSET UNITYSDK_OFFSET(0xA40E710)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REMOVEADVENTURENOTIFYINLEGACYPART_OFFSET UNITYSDK_OFFSET(0xA40FE20)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REMOVEADVENTURENOTIFY_OFFSET UNITYSDK_OFFSET(0xA417940)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REMOVELOCALLEGACYDISTRICT_OFFSET UNITYSDK_OFFSET(0xA4153C0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__SETVISIONRANGEREFRESHDIRTY_OFFSET UNITYSDK_OFFSET(0xA40BD70)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__TRIGGERDEACTIVEWHENPENDINGDEACTIVEGROUPMEETUNLOAD_OFFSET UNITYSDK_OFFSET(0xA406E30)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__TRIGGERHOYOGROUPENTITIESREFRESHWITHSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0xA40A4E0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__TRYINITLOADCLIENTLEGACYGROUP_OFFSET UNITYSDK_OFFSET(0xA412FA0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__TRYREFRESHLOADCLIENTLEGACYGROUP_OFFSET UNITYSDK_OFFSET(0xA4124A0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__TRYUNLOADCLIENTLEGACYGROUP_OFFSET UNITYSDK_OFFSET(0xA4125E0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__UNINITREGIONSTATE_OFFSET UNITYSDK_OFFSET(0xA40B3B0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__UNLOADCLIENTLEGACYGROUP_OFFSET UNITYSDK_OFFSET(0xA414A10)

namespace RPG::Client
{
	inline static constexpr unsigned int RuntimeGroupManager_TypeDefinitionIndex = 50389;

	class RuntimeGroupManager : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_NewRefreshPipeline()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RuntimeGroupManager_TypeDefinitionIndex)->GetStaticField(0xC250);
		}
		::System::Collections::Generic::List_1<::RPG::GameCore::RuntimeGroupInfo*>* _delayUnloadGroups; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::ICollection_1<::System::UInt32>*>* _EventMissionToLegacyGroupIDList; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _tempList; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::ICollection_1<::System::UInt32>*>* _SubMissionToLegacyGroupIDList; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*>* GroupUnits; // 0x30
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _InVisionRangeHoYoGroups_k__BackingField; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::ICollection_1<::System::UInt32>*>* _MainMissionToLegacyGroupIDList; // 0x40
		::RPG::Client::MapDef* _MapDef; // 0x48
		::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>* _TmpEntityDefsToRemove; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RuntimeGroupManager_HoYoGroupStreamingInfo*>* _HoYoGroupStreamingInfos; // 0x58
		::System::Boolean _IsHoYoPartDataInitialized; // 0x60
		::System::Boolean _RegionRefreshDirty; // 0x61
		::System::Boolean _VisionRangeRefreshDirty; // 0x62
		::System::Boolean _IsInitialLoadFinish; // 0x63
		::System::Boolean _NotifyRegistered; // 0x64
		::System::UInt32 _delayUnloadMission; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__CCTOR_OFFSET))();
		}

		::System::Void LockGroupLoadState(::System::UInt32 groupID, ::RPG::Client::LockHoyoGroupReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LockHoyoGroupReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_LOCKGROUPLOADSTATE_OFFSET))(this, groupID, reason);
		}

		::System::Void LockGroupLoadState_1(::System::UInt32 groupID, ::RPG::Client::LockHoyoGroupRule rule, ::RPG::Client::LockHoyoGroupReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LockHoyoGroupRule, ::RPG::Client::LockHoyoGroupReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_LOCKGROUPLOADSTATE_1_OFFSET))(this, groupID, rule, reason);
		}

		::System::Void UnlockGroupLoadState(::System::UInt32 groupID, ::RPG::Client::LockHoyoGroupReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LockHoyoGroupReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_UNLOCKGROUPLOADSTATE_OFFSET))(this, groupID, reason);
		}

		::System::Void UnlockGroupLoadState_1(::System::UInt32 groupID, ::RPG::Client::LockHoyoGroupRule rule, ::RPG::Client::LockHoyoGroupReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::LockHoyoGroupRule, ::RPG::Client::LockHoyoGroupReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_UNLOCKGROUPLOADSTATE_1_OFFSET))(this, groupID, rule, reason);
		}

		::System::Void _RefreshHoyoGroupLoadState(::RPG::Client::RuntimeGroupManager_GroupRefreshExtraInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_GroupRefreshExtraInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHHOYOGROUPLOADSTATE_OFFSET))(this, info);
		}

		::RPG::PoolDictionary_2<::System::UInt32, ::Struct_2_B6A3FA7992F9F37E_12>* _CollectStateBeforeRefresh()
		{
			return ((::RPG::PoolDictionary_2<::System::UInt32, ::Struct_2_B6A3FA7992F9F37E_12>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__COLLECTSTATEBEFOREREFRESH_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_43BD383C98B4C0C5_122*>* _BuildGroupRefreshInputEx_ActiveGroupUnits()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_43BD383C98B4C0C5_122*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDGROUPREFRESHINPUTEX_ACTIVEGROUPUNITS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _BuildGroupRefreshInputEx_ActiveRegions()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDGROUPREFRESHINPUTEX_ACTIVEREGIONS_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4C9F1682233ECDD3_1*>* _CollectOtherFloorsLoadedGroups(::System::UInt32 conflictGroupID)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_4C9F1682233ECDD3_1*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__COLLECTOTHERFLOORSLOADEDGROUPS_OFFSET))(this, conflictGroupID);
		}

		::Class_1_4C9F1682233ECDD3* _CalculateOtherFloorActivatedGroups(::RPG::Client::MapDef* mapDef)
		{
			return ((::Class_1_4C9F1682233ECDD3*(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__CALCULATEOTHERFLOORACTIVATEDGROUPS_OFFSET))(this, mapDef);
		}

		::System::UInt32 _CalcFinalTrackingMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__CALCFINALTRACKINGMISSIONID_OFFSET))(this);
		}

		::Class_1_4C9F1682233ECDD3_1* _CalculateOtherFloorLoadedGroups(::Class_1_4C9F1682233ECDD3* activatedGroups, ::RPG::Client::MapDef* mapDef)
		{
			return ((::Class_1_4C9F1682233ECDD3_1*(*)(::PVOID, ::Class_1_4C9F1682233ECDD3*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__CALCULATEOTHERFLOORLOADEDGROUPS_OFFSET))(this, activatedGroups, mapDef);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* CollectUnFinishMainMissionsByFloor(::RPG::Client::MapDef* mapDef)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_COLLECTUNFINISHMAINMISSIONSBYFLOOR_OFFSET))(mapDef);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* _CollectAllOtherFloorsMainMissions(::System::UInt32 conflictGroupID)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__COLLECTALLOTHERFLOORSMAINMISSIONS_OFFSET))(this, conflictGroupID);
		}

		::Class_1_F236C4DB0600E05D* _BuildGroupRefreshInputEx(::RPG::Client::RuntimeGroupManager_GroupRefreshExtraInfo* extraInfo)
		{
			return ((::Class_1_F236C4DB0600E05D*(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_GroupRefreshExtraInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDGROUPREFRESHINPUTEX_OFFSET))(this, extraInfo);
		}

		::System::Boolean _DiffAfterRefresh(::RPG::PoolDictionary_2<::System::UInt32, ::Struct_2_B6A3FA7992F9F37E_12>* records)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::PoolDictionary_2<::System::UInt32, ::Struct_2_B6A3FA7992F9F37E_12>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__DIFFAFTERREFRESH_OFFSET))(this, records);
		}

		::RPG::PoolDictionary_2<::System::UInt32, ::Struct_2_B6A3FA7992F9F37E_12>* _DoRefreshHoyoGroupLoadState(::RPG::Client::RuntimeGroupManager_GroupRefreshExtraInfo* extraInfo)
		{
			return ((::RPG::PoolDictionary_2<::System::UInt32, ::Struct_2_B6A3FA7992F9F37E_12>*(*)(::PVOID, ::RPG::Client::RuntimeGroupManager_GroupRefreshExtraInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__DOREFRESHHOYOGROUPLOADSTATE_OFFSET))(this, extraInfo);
		}

		::System::Void _TriggerDeactiveWhenPendingDeactiveGroupMeetUnload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__TRIGGERDEACTIVEWHENPENDINGDEACTIVEGROUPMEETUNLOAD_OFFSET))(this);
		}

		::System::Void _GroupUnitsLoadUnloadOperations()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__GROUPUNITSLOADUNLOADOPERATIONS_OFFSET))(this);
		}

		::Struct_2_C2B892F638207307 _BuildRefreshContext(::RPG::PoolDictionary_2<::System::UInt32, ::Struct_2_B6A3FA7992F9F37E_12>* records, ::RPG::Client::RuntimeGroupManager_GroupRefreshExtraInfo* info)
		{
			return ((::Struct_2_C2B892F638207307(*)(::PVOID, ::RPG::PoolDictionary_2<::System::UInt32, ::Struct_2_B6A3FA7992F9F37E_12>*, ::RPG::Client::RuntimeGroupManager_GroupRefreshExtraInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDREFRESHCONTEXT_OFFSET))(this, records, info);
		}

		::System::Void _RefreshHoyoGroupEntitiesByLoadStateCalc(::Struct_2_C2B892F638207307 context)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_C2B892F638207307))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHHOYOGROUPENTITIESBYLOADSTATECALC_OFFSET))(this, context);
		}

		::System::Void ForceReloadGroups(::System::Collections::Generic::List_1<::System::UInt32>* groudIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_FORCERELOADGROUPS_OFFSET))(this, groudIDList);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* ForceUnloadGroups(::System::Collections::Generic::List_1<::System::UInt32>* groudIDList)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_FORCEUNLOADGROUPS_OFFSET))(this, groudIDList);
		}

		::System::Void _InitRegionState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__INITREGIONSTATE_OFFSET))(this);
		}

		::System::Void _UninitRegionState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__UNINITREGIONSTATE_OFFSET))(this);
		}

		::System::Void _OnCurrentRegionStateChange(::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>* enter, ::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>* leave, ::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>* activRegions)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>*, ::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>*, ::System::Collections::Generic::HashSet_1<::Class_1_ECBCF86CDE61CBCA*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ONCURRENTREGIONSTATECHANGE_OFFSET))(this, enter, leave, activRegions);
		}

		::System::Void ApplyRegionChangeRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_APPLYREGIONCHANGEREFRESH_OFFSET))(this);
		}

		::System::Void _ReconfigureGroupStreaming()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__RECONFIGUREGROUPSTREAMING_OFFSET))(this);
		}

		::System::Void ApplyVisionRangeGroupChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_APPLYVISIONRANGEGROUPCHANGE_OFFSET))(this);
		}

		::System::Void AddGroupStreamingFilterTag(::RPG::GameCore::HoyoTag* tag)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ADDGROUPSTREAMINGFILTERTAG_OFFSET))(this, tag);
		}

		::System::Void RemoveGroupStreamingFilterTag(::RPG::GameCore::HoyoTag* tag)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTag*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_REMOVEGROUPSTREAMINGFILTERTAG_OFFSET))(this, tag);
		}

		::System::Void _OnHoYoGroupStreamLoaded(::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ONHOYOGROUPSTREAMLOADED_OFFSET))(this, groupID);
		}

		::System::Void _OnHoYoGroupStreamUnloaded(::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ONHOYOGROUPSTREAMUNLOADED_OFFSET))(this, groupID);
		}

		::System::Void _SetVisionRangeRefreshDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__SETVISIONRANGEREFRESHDIRTY_OFFSET))(this);
		}

		::System::Boolean get_IsGroupStreamingEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_GET_ISGROUPSTREAMINGENABLED_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_InVisionRangeHoYoGroups()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_GET_INVISIONRANGEHOYOGROUPS_OFFSET))(this);
		}

		::System::Void TryCreateGroupEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_TRYCREATEGROUPENTITIES_OFFSET))(this);
		}

		::System::Void StartGroupLevelGraphs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_STARTGROUPLEVELGRAPHS_OFFSET))(this);
		}

		::System::Void StartGroupLevelGraphs_1(::System::Collections::Generic::IEnumerable_1<::System::UInt32>* groups)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_STARTGROUPLEVELGRAPHS_1_OFFSET))(this, groups);
		}

		::System::Void ClearHoyoGroupPart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_CLEARHOYOGROUPPART_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetGroupEntity(::System::UInt32 groupID, ::System::Boolean outputError)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_GETGROUPENTITY_OFFSET))(this, groupID, outputError);
		}

		::System::UInt32 GetGroupState(::System::UInt32 groupID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_GETGROUPSTATE_OFFSET))(this, groupID);
		}

		::System::Boolean TryGetGroupState(::System::UInt32 groupID, ::System::UInt32& groupState)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_TRYGETGROUPSTATE_OFFSET))(this, groupID, groupState);
		}

		::System::Boolean IsHoyoGroupLoaded(::System::UInt32 groupID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ISHOYOGROUPLOADED_OFFSET))(this, groupID);
		}

		::RPG::Client::RuntimeGroupManager_HoYoGroupUnit* GetHoyoGroupUnit(::System::UInt32 groupID)
		{
			return ((::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_GETHOYOGROUPUNIT_OFFSET))(this, groupID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*>* GetAllActiveGroupUnitsWithPredicate(::System::Func_2<::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*, ::System::Boolean>* predicate)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*>*(*)(::PVOID, ::System::Func_2<::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_GETALLACTIVEGROUPUNITSWITHPREDICATE_OFFSET))(this, predicate);
		}

		::RPG::Client::RuntimeGroupManager_HoYoGroupUnit* FindOccupiedGroup(::System::UInt32 mainMissionID)
		{
			return ((::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_FINDOCCUPIEDGROUP_OFFSET))(this, mainMissionID);
		}

		::System::Boolean ValidateGroupStateTransition(::System::UInt32 groupID, ::System::UInt32 fromState, ::System::UInt32 toState)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_VALIDATEGROUPSTATETRANSITION_OFFSET))(this, groupID, fromState, toState);
		}

		::System::Void RegisterGroupStateChange(::System::UInt32 groupID, ::System::Action_2<::System::UInt32, ::System::UInt32>* onChange)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_REGISTERGROUPSTATECHANGE_OFFSET))(this, groupID, onChange);
		}

		::System::Void UnregisterGroupStateChange(::System::UInt32 groupID, ::System::Action_2<::System::UInt32, ::System::UInt32>* onChange)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_UNREGISTERGROUPSTATECHANGE_OFFSET))(this, groupID, onChange);
		}

		::System::Void RefreshHoyoGroupEntitiesByCustom(::System::Boolean needScreenTransfer, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_REFRESHHOYOGROUPENTITIESBYCUSTOM_OFFSET))(this, needScreenTransfer, onFinish);
		}

		::System::Boolean IsCurrentMap(::RPG::Client::MapDef* mapDef)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ISCURRENTMAP_OFFSET))(this, mapDef);
		}

		::System::Void ClearAllServerGroupUnits()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_CLEARALLSERVERGROUPUNITS_OFFSET))(this);
		}

		::System::Void InitialHoYoGroupRefreshAndLoad(::RPG::Client::Map* map)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_INITIALHOYOGROUPREFRESHANDLOAD_OFFSET))(this, map);
		}

		::System::Boolean RegisterGroupUnloadListener(::System::UInt32 groupID, ::System::Action* callback)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_REGISTERGROUPUNLOADLISTENER_OFFSET))(this, groupID, callback);
		}

		::System::Void UnregisterGroupUnloadListener(::System::UInt32 groupID, ::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_UNREGISTERGROUPUNLOADLISTENER_OFFSET))(this, groupID, callback);
		}

		::System::Boolean IsGroupUnloadedByConflict(::System::UInt32 groupID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ISGROUPUNLOADEDBYCONFLICT_OFFSET))(this, groupID);
		}

		::System::Void DisposeInHoyoPart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_DISPOSEINHOYOPART_OFFSET))(this);
		}

		::System::Void _AddAdventureNotifyInHoyoPart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ADDADVENTURENOTIFYINHOYOPART_OFFSET))(this);
		}

		::System::Void _RemoveAdventureNotifyInHoyoPart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__REMOVEADVENTURENOTIFYINHOYOPART_OFFSET))(this);
		}

		::System::Void InitializeHoyoPart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_INITIALIZEHOYOPART_OFFSET))(this);
		}

		::System::Void _InitializeHoyoGroupUnitsByMapDef()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__INITIALIZEHOYOGROUPUNITSBYMAPDEF_OFFSET))(this);
		}

		::System::Void _TriggerHoyoGroupEntitiesRefreshWithScreenTransfer(::RPG::Client::Map_RefreshEntitiesExtraInfo* extraInfo, ::System::Boolean needScreenTransfer, ::System::Boolean shouldScreenTransfer, ::System::Collections::Generic::Dictionary_2<::RPG::Client::MapEntityDef*, ::RPG::Client::EntitySpawnTransitionType>* transitions)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_RefreshEntitiesExtraInfo*, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::Dictionary_2<::RPG::Client::MapEntityDef*, ::RPG::Client::EntitySpawnTransitionType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__TRIGGERHOYOGROUPENTITIESREFRESHWITHSCREENTRANSFER_OFFSET))(this, extraInfo, needScreenTransfer, shouldScreenTransfer, transitions);
		}

		::System::Void _OnGroupLoadFinish(::Class_2_D8257A310CAD757C* groupDef, ::System::UInt32 versionStamp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_D8257A310CAD757C*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ONGROUPLOADFINISH_OFFSET))(this, groupDef, versionStamp);
		}

		::System::Boolean _IsAdventurePhaseInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ISADVENTUREPHASEINITIALIZED_OFFSET))(this);
		}

		::System::Void _OnRefreshAndLoadHoyoGroup(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ONREFRESHANDLOADHOYOGROUP_OFFSET))(this, arg);
		}

		::System::Void _OnRotatableRegionChanged(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ONROTATABLEREGIONCHANGED_OFFSET))(this, param);
		}

		::System::Void _OnRefreshFiveDimGroup(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ONREFRESHFIVEDIMGROUP_OFFSET))(this, param);
		}

		::System::Void _OnRefreshMapGroupDefs(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ONREFRESHMAPGROUPDEFS_OFFSET))(this, param);
		}

		::System::Void _OnRefreshPuzzleGroup(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ONREFRESHPUZZLEGROUP_OFFSET))(this, param);
		}

		::System::Void _OnHoYoGroupActive(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ONHOYOGROUPACTIVE_OFFSET))(this, param);
		}

		::System::Void _OnHoYoGroupDeActive(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ONHOYOGROUPDEACTIVE_OFFSET))(this, param);
		}

		::System::Void _MissionValidCheck(::RPG::GameCore::LevelGroupMissionCondition* missionCondition, ::System::UInt32 groupID, ::RPG::Client::MapDef* mapDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGroupMissionCondition*, ::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__MISSIONVALIDCHECK_OFFSET))(this, missionCondition, groupID, mapDef);
		}

		::System::Boolean IsLegacyGroup(::System::UInt32 groupID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYGROUP_OFFSET))(this, groupID);
		}

		::System::Boolean IsLegacyGroupLoaded(::System::UInt32 groupID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYGROUPLOADED_OFFSET))(this, groupID);
		}

		::System::Boolean IsLegacyNpcAdded(::System::UInt32 groupInstanceID, ::System::UInt32 instanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYNPCADDED_OFFSET))(this, groupInstanceID, instanceID);
		}

		::System::Boolean IsLegacyPropAdded(::System::UInt32 groupInstanceID, ::System::UInt32 instanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYPROPADDED_OFFSET))(this, groupInstanceID, instanceID);
		}

		::System::Void _AddAdventureNotifyInLegacyPart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ADDADVENTURENOTIFYINLEGACYPART_OFFSET))(this);
		}

		::System::Void _RemoveAdventureNotifyInLegacyPart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__REMOVEADVENTURENOTIFYINLEGACYPART_OFFSET))(this);
		}

		::System::Void _DisposeLegacyPart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__DISPOSELEGACYPART_OFFSET))(this);
		}

		::System::Void ClearLegacyPart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_CLEARLEGACYPART_OFFSET))(this);
		}

		::System::Void InitClientLegacyPart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_INITCLIENTLEGACYPART_OFFSET))(this);
		}

		::System::Void _InitClientLegacyGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__INITCLIENTLEGACYGROUPS_OFFSET))(this);
		}

		::System::Void _InitClientLegacyGroupsByStandalonePerformanceTag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__INITCLIENTLEGACYGROUPSBYSTANDALONEPERFORMANCETAG_OFFSET))(this);
		}

		::System::Void _InitMissionToLegacyGroupRelation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__INITMISSIONTOLEGACYGROUPRELATION_OFFSET))(this);
		}

		::System::Void _BuildMissionToGroupIDMap(::RPG::GameCore::RuntimeGroupInfo* groupInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDMISSIONTOGROUPIDMAP_OFFSET))(this, groupInfo);
		}

		::System::Void _BuildMap(::RPG::GameCore::LevelGroupMissionCondition* missionCondition, ::System::UInt32 groupID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGroupMissionCondition*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDMAP_OFFSET))(this, missionCondition, groupID);
		}

		::System::Void _AddToDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::ICollection_1<::System::UInt32>*>* dict, ::System::UInt32 key, ::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::ICollection_1<::System::UInt32>*>*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ADDTODICT_OFFSET))(this, dict, key, value);
		}

		::System::Void _RefreshLegacyClientGroupByMainMission(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHLEGACYCLIENTGROUPBYMAINMISSION_OFFSET))(this, param);
		}

		::System::Void _RefreshLegacyClientGroupBySubMission(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHLEGACYCLIENTGROUPBYSUBMISSION_OFFSET))(this, param);
		}

		::System::Void _RefreshLegacyClientGroupBySyncMission(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHLEGACYCLIENTGROUPBYSYNCMISSION_OFFSET))(this, param);
		}

		::System::Void _RefreshClientLegacyGroupList(::System::Collections::Generic::ICollection_1<::System::UInt32>* groupInstanIDList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHCLIENTLEGACYGROUPLIST_OFFSET))(this, groupInstanIDList);
		}

		::System::Void _RefreshClientLegacyGroup(::RPG::Client::MapDef* mapDef, ::RPG::GameCore::RuntimeGroupInfo* groupInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHCLIENTLEGACYGROUP_OFFSET))(this, mapDef, groupInfo);
		}

		::System::Void _InitClientLegacyGroupBySnapshot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__INITCLIENTLEGACYGROUPBYSNAPSHOT_OFFSET))(this);
		}

		::System::Void _InitClientLegacyGroup(::RPG::Client::MapDef* mapDef, ::RPG::GameCore::RuntimeGroupInfo* groupInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__INITCLIENTLEGACYGROUP_OFFSET))(this, mapDef, groupInfo);
		}

		::System::Void _OnMainMissionDelete(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ONMAINMISSIONDELETE_OFFSET))(this, arg);
		}

		static ::System::Boolean IsGroupForceUnload(::RPG::Client::MapDef* mapDef, ::RPG::GameCore::RuntimeGroupInfo* groupInfo)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ISGROUPFORCEUNLOAD_OFFSET))(mapDef, groupInfo);
		}

		static ::System::Boolean IsLegacyGroupCanLoad(::RPG::Client::MapDef* mapDef, ::RPG::GameCore::RuntimeGroupInfo* groupInfo)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYGROUPCANLOAD_OFFSET))(mapDef, groupInfo);
		}

		static ::System::Boolean IsLegacyGroupCanUnload(::RPG::Client::MapDef* mapDef, ::RPG::GameCore::RuntimeGroupInfo* groupInfo)
		{
			return ((::System::Boolean(*)(::RPG::Client::MapDef*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYGROUPCANUNLOAD_OFFSET))(mapDef, groupInfo);
		}

		::System::Boolean _TryInitLoadClientLegacyGroup(::RPG::Client::MapDef* mapDef, ::RPG::GameCore::RuntimeGroupInfo* groupInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDef*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__TRYINITLOADCLIENTLEGACYGROUP_OFFSET))(this, mapDef, groupInfo);
		}

		::System::Void _InitLoadClientLegacyGroup(::RPG::GameCore::RuntimeGroupInfo* groupInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__INITLOADCLIENTLEGACYGROUP_OFFSET))(this, groupInfo);
		}

		::System::Boolean _TryRefreshLoadClientLegacyGroup(::RPG::Client::MapDef* mapDef, ::RPG::GameCore::RuntimeGroupInfo* groupInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDef*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__TRYREFRESHLOADCLIENTLEGACYGROUP_OFFSET))(this, mapDef, groupInfo);
		}

		::System::Void _LoadClientLegacyGroup(::RPG::GameCore::RuntimeGroupInfo* groupInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__LOADCLIENTLEGACYGROUP_OFFSET))(this, groupInfo);
		}

		::System::Boolean _TryUnLoadClientLegacyGroup(::RPG::Client::MapDef* mapDef, ::RPG::GameCore::RuntimeGroupInfo* groupInfo, ::System::Boolean fromLevelReload)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapDef*, ::RPG::GameCore::RuntimeGroupInfo*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__TRYUNLOADCLIENTLEGACYGROUP_OFFSET))(this, mapDef, groupInfo, fromLevelReload);
		}

		::System::Void _UnLoadClientLegacyGroup(::RPG::GameCore::RuntimeGroupInfo* groupInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__UNLOADCLIENTLEGACYGROUP_OFFSET))(this, groupInfo);
		}

		::System::Boolean AddLocalLegacyNpc(::System::UInt32 groupInstanceID, ::System::UInt32 instanceID, ::System::String* uniqueName, ::System::Boolean check, ::RPG::GameCore::EntityClassifyType classifyType, ::System::Boolean isFromInit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::String*, ::System::Boolean, ::RPG::GameCore::EntityClassifyType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ADDLOCALLEGACYNPC_OFFSET))(this, groupInstanceID, instanceID, uniqueName, check, classifyType, isFromInit);
		}

		::System::Boolean RemoveLocalLegacyNpc(::System::UInt32 groupInstanceID, ::System::UInt32 instanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_REMOVELOCALLEGACYNPC_OFFSET))(this, groupInstanceID, instanceID);
		}

		::System::Boolean AddLocalLegacyProp(::System::UInt32 groupInstanceID, ::System::UInt32 instanceID, ::System::Boolean check, ::RPG::GameCore::EntityClassifyType classifyType, ::System::Boolean isFromInit)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean, ::RPG::GameCore::EntityClassifyType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ADDLOCALLEGACYPROP_OFFSET))(this, groupInstanceID, instanceID, check, classifyType, isFromInit);
		}

		::System::Boolean RemoveLocalLegacyProp(::System::UInt32 groupInstanceID, ::System::UInt32 instanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_REMOVELOCALLEGACYPROP_OFFSET))(this, groupInstanceID, instanceID);
		}

		::System::Void _AddLocalLegacyDistrict(::System::UInt32 groupInstanceID, ::System::UInt32 instanceID, ::System::Boolean isFromInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ADDLOCALLEGACYDISTRICT_OFFSET))(this, groupInstanceID, instanceID, isFromInit);
		}

		::System::Boolean _RemoveLocalLegacyDistrict(::System::UInt32 groupInstanceID, ::System::UInt32 instanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__REMOVELOCALLEGACYDISTRICT_OFFSET))(this, groupInstanceID, instanceID);
		}

		::System::ValueTuple_2<::System::Boolean, ::RPG::Client::MapEntityDef*> CreateLocalEntity(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::RPG::Client::MapEntityDef*>(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_CREATELOCALENTITY_OFFSET))(this, groupID, instanceID);
		}

		::System::ValueTuple_2<::System::Boolean, ::RPG::Client::MapEntityDef*> CreateLocalEntity_1(::System::UInt32 groupID, ::System::UInt32 instanceID, ::RPG::GameCore::GroupEntityCreateConfig* createConfig)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::RPG::Client::MapEntityDef*>(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::GroupEntityCreateConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_CREATELOCALENTITY_1_OFFSET))(this, groupID, instanceID, createConfig);
		}

		::System::Boolean DestroyLocalEntity(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_DESTROYLOCALENTITY_OFFSET))(this, groupID, instanceID);
		}

		::System::Boolean HasLocalEntity(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HASLOCALENTITY_OFFSET))(this, groupID, instanceID);
		}

		::System::Void Initialize(::RPG::Client::MapDef* mapDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_INITIALIZE_OFFSET))(this, mapDef);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void OnNetworkDisconnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ONNETWORKDISCONNECTED_OFFSET))(this);
		}

		::System::Void BeforeStoryLineChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_BEFORESTORYLINECHANGE_OFFSET))(this);
		}

		::System::Void BeforeSwitchMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_BEFORESWITCHMAP_OFFSET))(this);
		}

		::System::Void RefreshEntities(::RPG::Client::Map_RefreshEntitiesExtraInfo* extraInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Map_RefreshEntitiesExtraInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_REFRESHENTITIES_OFFSET))(this, extraInfo);
		}

		::System::Boolean IsGroupLoaded(::System::UInt32 groupInstanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ISGROUPLOADED_OFFSET))(this, groupInstanceID);
		}

		::System::Boolean IsServerGroupLoaded(::System::UInt32 groupInstanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_ISSERVERGROUPLOADED_OFFSET))(this, groupInstanceID);
		}

		::RPG::Client::MapDef* GetMapDef()
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_GETMAPDEF_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*>* GetGroupUnits()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_GETGROUPUNITS_OFFSET))(this);
		}

		::System::Boolean HasMapEntity(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER_HASMAPENTITY_OFFSET))(this, groupID, instanceID);
		}

		::System::Void _NotifyGroupRefreshEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__NOTIFYGROUPREFRESHEND_OFFSET))(this);
		}

		::System::Void _RefreshEntities()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHENTITIES_OFFSET))(this);
		}

		::System::Void _AddAdventureNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ADDADVENTURENOTIFY_OFFSET))(this);
		}

		::System::Void _RemoveAdventureNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__REMOVEADVENTURENOTIFY_OFFSET))(this);
		}
	};
}

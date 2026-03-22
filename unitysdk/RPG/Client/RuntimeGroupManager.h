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
class Class_2_BD898AE9C0E88E25;
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

#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ADDGROUPSTREAMINGFILTERTAG_OFFSET UNITYSDK_OFFSET(0x9F3FF40)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ADDLOCALLEGACYNPC_OFFSET UNITYSDK_OFFSET(0x9F47190)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ADDLOCALLEGACYPROP_OFFSET UNITYSDK_OFFSET(0x9F473C0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_APPLYREGIONCHANGEREFRESH_OFFSET UNITYSDK_OFFSET(0x9F3FCF0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_APPLYVISIONRANGEGROUPCHANGE_OFFSET UNITYSDK_OFFSET(0x9F3FEC0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_BEFORESTORYLINECHANGE_OFFSET UNITYSDK_OFFSET(0x9F4C290)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_BEFORESWITCHMAP_OFFSET UNITYSDK_OFFSET(0x9F4C320)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_CLEARALLSERVERGROUPUNITS_OFFSET UNITYSDK_OFFSET(0x9F41C50)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_CLEARHOYOGROUPPART_OFFSET UNITYSDK_OFFSET(0x9F40AC0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_CLEARLEGACYPART_OFFSET UNITYSDK_OFFSET(0x9F44660)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x9F4C060)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_COLLECTUNFINISHMAINMISSIONSBYFLOOR_OFFSET UNITYSDK_OFFSET(0x9F3D910)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_CREATELOCALENTITY_1_OFFSET UNITYSDK_OFFSET(0x9F4AC50)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_CREATELOCALENTITY_OFFSET UNITYSDK_OFFSET(0x9F49AD0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_DESTROYLOCALENTITY_OFFSET UNITYSDK_OFFSET(0x9F4AF40)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_DISPOSEINHOYOPART_OFFSET UNITYSDK_OFFSET(0x9F42680)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9F4C150)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_FINDOCCUPIEDGROUP_OFFSET UNITYSDK_OFFSET(0x9F413F0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_FORCERELOADGROUPS_OFFSET UNITYSDK_OFFSET(0x9F3EFC0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_FORCEUNLOADGROUPS_OFFSET UNITYSDK_OFFSET(0x9F3F660)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_GETALLACTIVEGROUPUNITSWITHPREDICATE_OFFSET UNITYSDK_OFFSET(0x9F41220)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_GETGROUPENTITY_OFFSET UNITYSDK_OFFSET(0x9F40EC0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_GETGROUPSTATE_OFFSET UNITYSDK_OFFSET(0x9F41010)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_GETGROUPUNITS_OFFSET UNITYSDK_OFFSET(0x9F4C840)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_GETHOYOGROUPUNIT_OFFSET UNITYSDK_OFFSET(0x9F3F490)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_GETMAPDEF_OFFSET UNITYSDK_OFFSET(0x9F3F450)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_GET_INVISIONRANGEHOYOGROUPS_OFFSET UNITYSDK_OFFSET(0x9F40510)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_GET_ISGROUPSTREAMINGENABLED_OFFSET UNITYSDK_OFFSET(0x9F3E4F0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HASLOCALENTITY_OFFSET UNITYSDK_OFFSET(0x9F4A9C0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_HASMAPENTITY_OFFSET UNITYSDK_OFFSET(0x9F4C880)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_INITCLIENTLEGACYPART_OFFSET UNITYSDK_OFFSET(0x9F44810)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_INITIALHOYOGROUPREFRESHANDLOAD_OFFSET UNITYSDK_OFFSET(0x9F42040)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_INITIALIZEHOYOPART_OFFSET UNITYSDK_OFFSET(0x9F42EF0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x9F4BF10)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISCURRENTMAP_OFFSET UNITYSDK_OFFSET(0x9F41C00)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISGROUPFORCEUNLOAD_OFFSET UNITYSDK_OFFSET(0x9F47780)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISGROUPLOADED_OFFSET UNITYSDK_OFFSET(0x9F4C3B0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISGROUPUNLOADEDBYCONFLICT_OFFSET UNITYSDK_OFFSET(0x9F42480)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISHOYOGROUPLOADED_OFFSET UNITYSDK_OFFSET(0x9F41150)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYGROUPCANLOAD_OFFSET UNITYSDK_OFFSET(0x9F477F0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYGROUPCANUNLOAD_OFFSET UNITYSDK_OFFSET(0x9F47950)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYGROUPLOADED_OFFSET UNITYSDK_OFFSET(0x9F44080)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYGROUP_OFFSET UNITYSDK_OFFSET(0x9F3A410)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYNPCADDED_OFFSET UNITYSDK_OFFSET(0x9F440E0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISLEGACYPROPADDED_OFFSET UNITYSDK_OFFSET(0x9F441D0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ISSERVERGROUPLOADED_OFFSET UNITYSDK_OFFSET(0x9F4C450)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_LOCKGROUPLOADSTATE_1_OFFSET UNITYSDK_OFFSET(0x9F3A4F0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_LOCKGROUPLOADSTATE_OFFSET UNITYSDK_OFFSET(0x9F3A380)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_ONNETWORKDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x9F4C200)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_REFRESHENTITIES_OFFSET UNITYSDK_OFFSET(0x9F3F550)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_REFRESHHOYOGROUPENTITIESBYCUSTOM_OFFSET UNITYSDK_OFFSET(0x9F419D0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_REGISTERGROUPSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x9F41850)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_REGISTERGROUPUNLOADLISTENER_OFFSET UNITYSDK_OFFSET(0x9F42270)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_REMOVEGROUPSTREAMINGFILTERTAG_OFFSET UNITYSDK_OFFSET(0x9F40130)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_REMOVELOCALLEGACYNPC_OFFSET UNITYSDK_OFFSET(0x9F49680)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_REMOVELOCALLEGACYPROP_OFFSET UNITYSDK_OFFSET(0x9F497F0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_STARTGROUPLEVELGRAPHS_1_OFFSET UNITYSDK_OFFSET(0x9F405E0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_STARTGROUPLEVELGRAPHS_OFFSET UNITYSDK_OFFSET(0x9F40570)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_TRYCREATEGROUPENTITIES_OFFSET UNITYSDK_OFFSET(0x9F3EB20)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_TRYGETGROUPSTATE_OFFSET UNITYSDK_OFFSET(0x9F41080)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_UNLOCKGROUPLOADSTATE_1_OFFSET UNITYSDK_OFFSET(0x9F3A930)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_UNLOCKGROUPLOADSTATE_OFFSET UNITYSDK_OFFSET(0x9F3A8A0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_UNREGISTERGROUPSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x9F41910)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_UNREGISTERGROUPUNLOADLISTENER_OFFSET UNITYSDK_OFFSET(0x9F42380)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER_VALIDATEGROUPSTATETRANSITION_OFFSET UNITYSDK_OFFSET(0x9F41690)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ADDADVENTURENOTIFYINHOYOPART_OFFSET UNITYSDK_OFFSET(0x9F42BB0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ADDADVENTURENOTIFYINLEGACYPART_OFFSET UNITYSDK_OFFSET(0x9F442C0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ADDADVENTURENOTIFY_OFFSET UNITYSDK_OFFSET(0x9F4C000)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ADDLOCALLEGACYDISTRICT_OFFSET UNITYSDK_OFFSET(0x9F482B0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ADDTODICT_OFFSET UNITYSDK_OFFSET(0x9F46160)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDGROUPREFRESHINPUTEX_ACTIVEGROUPUNITS_OFFSET UNITYSDK_OFFSET(0x9F3BE40)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDGROUPREFRESHINPUTEX_ACTIVEREGIONS_OFFSET UNITYSDK_OFFSET(0x9F3C0E0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDGROUPREFRESHINPUTEX_OFFSET UNITYSDK_OFFSET(0x9F3DEE0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDMAP_OFFSET UNITYSDK_OFFSET(0x9F460D0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDMISSIONTOGROUPIDMAP_OFFSET UNITYSDK_OFFSET(0x9F45E90)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__BUILDREFRESHCONTEXT_OFFSET UNITYSDK_OFFSET(0x9F3BB20)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__CALCFINALTRACKINGMISSIONID_OFFSET UNITYSDK_OFFSET(0x9F3D7F0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__CALCULATEOTHERFLOORACTIVATEDGROUPS_OFFSET UNITYSDK_OFFSET(0x9F3C680)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__CALCULATEOTHERFLOORLOADEDGROUPS_OFFSET UNITYSDK_OFFSET(0x9F3D2E0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x9F4CD00)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__COLLECTALLOTHERFLOORSMAINMISSIONS_OFFSET UNITYSDK_OFFSET(0x9F3DCD0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__COLLECTOTHERFLOORSLOADEDGROUPS_OFFSET UNITYSDK_OFFSET(0x9F3C320)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__COLLECTSTATEBEFOREREFRESH_OFFSET UNITYSDK_OFFSET(0x9F3BC50)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x9F4C9A0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__DIFFAFTERREFRESH_OFFSET UNITYSDK_OFFSET(0x9F3E5A0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__DISPOSELEGACYPART_OFFSET UNITYSDK_OFFSET(0x9F44600)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__DOREFRESHHOYOGROUPLOADSTATE_OFFSET UNITYSDK_OFFSET(0x9F3B5C0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__GROUPUNITSLOADUNLOADOPERATIONS_OFFSET UNITYSDK_OFFSET(0x9F3B990)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__INITCLIENTLEGACYGROUPBYSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x9F44890)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__INITCLIENTLEGACYGROUPSBYSTANDALONEPERFORMANCETAG_OFFSET UNITYSDK_OFFSET(0x9F450F0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__INITCLIENTLEGACYGROUPS_OFFSET UNITYSDK_OFFSET(0x9F45550)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__INITCLIENTLEGACYGROUP_OFFSET UNITYSDK_OFFSET(0x9F45950)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__INITIALIZEHOYOGROUPUNITSBYMAPDEF_OFFSET UNITYSDK_OFFSET(0x9F42F40)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__INITLOADCLIENTLEGACYGROUP_OFFSET UNITYSDK_OFFSET(0x9F479C0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__INITMISSIONTOLEGACYGROUPRELATION_OFFSET UNITYSDK_OFFSET(0x9F45AE0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__INITREGIONSTATE_OFFSET UNITYSDK_OFFSET(0x9F3FA90)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ISADVENTUREPHASEINITIALIZED_OFFSET UNITYSDK_OFFSET(0x9F435F0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__LOADCLIENTLEGACYGROUP_OFFSET UNITYSDK_OFFSET(0x9F48480)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__MISSIONVALIDCHECK_OFFSET UNITYSDK_OFFSET(0x9F43EA0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__NOTIFYGROUPREFRESHEND_OFFSET UNITYSDK_OFFSET(0x9F4C950)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONCURRENTREGIONSTATECHANGE_OFFSET UNITYSDK_OFFSET(0x9F3FC90)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONGROUPLOADFINISH_OFFSET UNITYSDK_OFFSET(0x9F434C0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONHOYOGROUPACTIVE_OFFSET UNITYSDK_OFFSET(0x9F43200)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONHOYOGROUPDEACTIVE_OFFSET UNITYSDK_OFFSET(0x9F43CA0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONHOYOGROUPSTREAMLOADED_OFFSET UNITYSDK_OFFSET(0x9F40320)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONHOYOGROUPSTREAMUNLOADED_OFFSET UNITYSDK_OFFSET(0x9F40430)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONMAINMISSIONDELETE_OFFSET UNITYSDK_OFFSET(0x9F476E0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONREFRESHANDLOADHOYOGROUP_OFFSET UNITYSDK_OFFSET(0x9F43670)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONREFRESHFIVEDIMGROUP_OFFSET UNITYSDK_OFFSET(0x9F43800)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONREFRESHMAPGROUPDEFS_OFFSET UNITYSDK_OFFSET(0x9F43880)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONREFRESHPUZZLEGROUP_OFFSET UNITYSDK_OFFSET(0x9F439C0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__ONROTATABLEREGIONCHANGED_OFFSET UNITYSDK_OFFSET(0x9F43780)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__RECONFIGUREGROUPSTREAMING_OFFSET UNITYSDK_OFFSET(0x9F3AD30)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHCLIENTLEGACYGROUPLIST_OFFSET UNITYSDK_OFFSET(0x9F46450)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHCLIENTLEGACYGROUP_OFFSET UNITYSDK_OFFSET(0x9F46920)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHENTITIES_OFFSET UNITYSDK_OFFSET(0x9F46AB0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHHOYOGROUPENTITIESBYLOADSTATECALC_OFFSET UNITYSDK_OFFSET(0x9F3BB70)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHHOYOGROUPLOADSTATE_OFFSET UNITYSDK_OFFSET(0x9F3AC50)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHLEGACYCLIENTGROUPBYMAINMISSION_OFFSET UNITYSDK_OFFSET(0x9F46380)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHLEGACYCLIENTGROUPBYSUBMISSION_OFFSET UNITYSDK_OFFSET(0x9F46800)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REFRESHLEGACYCLIENTGROUPBYSYNCMISSION_OFFSET UNITYSDK_OFFSET(0x9F468D0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REMOVEADVENTURENOTIFYINHOYOPART_OFFSET UNITYSDK_OFFSET(0x9F42D50)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REMOVEADVENTURENOTIFYINLEGACYPART_OFFSET UNITYSDK_OFFSET(0x9F44460)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REMOVEADVENTURENOTIFY_OFFSET UNITYSDK_OFFSET(0x9F4C0F0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__REMOVELOCALLEGACYDISTRICT_OFFSET UNITYSDK_OFFSET(0x9F49960)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__SETVISIONRANGEREFRESHDIRTY_OFFSET UNITYSDK_OFFSET(0x9F403F0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__TRIGGERDEACTIVEWHENPENDINGDEACTIVEGROUPMEETUNLOAD_OFFSET UNITYSDK_OFFSET(0x9F3B670)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__TRIGGERHOYOGROUPENTITIESREFRESHWITHSCREENTRANSFER_OFFSET UNITYSDK_OFFSET(0x9F3ECC0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__TRYINITLOADCLIENTLEGACYGROUP_OFFSET UNITYSDK_OFFSET(0x9F475D0)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__TRYREFRESHLOADCLIENTLEGACYGROUP_OFFSET UNITYSDK_OFFSET(0x9F46B30)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__TRYUNLOADCLIENTLEGACYGROUP_OFFSET UNITYSDK_OFFSET(0x9F46C70)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__UNINITREGIONSTATE_OFFSET UNITYSDK_OFFSET(0x9F3FB90)
#define RPG_CLIENT_RUNTIMEGROUPMANAGER__UNLOADCLIENTLEGACYGROUP_OFFSET UNITYSDK_OFFSET(0x9F48FC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RuntimeGroupManager_TypeDefinitionIndex = 49256;

	class RuntimeGroupManager : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_NewRefreshPipeline()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RuntimeGroupManager_TypeDefinitionIndex)->GetStaticField(0x4B00);
		}
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RuntimeGroupManager_HoYoGroupStreamingInfo*>* _HoYoGroupStreamingInfos; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _InVisionRangeHoYoGroups_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::RuntimeGroupInfo*>* _delayUnloadGroups; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _tempList; // 0x28
		::RPG::Client::MapDef* _MapDef; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::MapEntityDef*>* _TmpEntityDefsToRemove; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::ICollection_1<::System::UInt32>*>* _MainMissionToLegacyGroupIDList; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RuntimeGroupManager_HoYoGroupUnit*>* GroupUnits; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::ICollection_1<::System::UInt32>*>* _SubMissionToLegacyGroupIDList; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::ICollection_1<::System::UInt32>*>* _EventMissionToLegacyGroupIDList; // 0x58
		::System::Boolean _IsInitialLoadFinish; // 0x60
		::System::Boolean _IsHoYoPartDataInitialized; // 0x61
		::System::Boolean _NotifyRegistered; // 0x62
		::System::Boolean _VisionRangeRefreshDirty; // 0x63
		::System::Boolean _RegionRefreshDirty; // 0x64
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

		::System::Void _OnGroupLoadFinish(::Class_2_BD898AE9C0E88E25* groupDef, ::System::UInt32 versionStamp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_BD898AE9C0E88E25*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RUNTIMEGROUPMANAGER__ONGROUPLOADFINISH_OFFSET))(this, groupDef, versionStamp);
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

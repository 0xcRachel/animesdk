#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MapEntityDef.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/CampType.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/GameCore/TalkChosenType.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_068EAC6B51178745;
class Class_1_533CCF93B9B1AD29;
class Class_1_A9C466B0994F2417;
class Class_1_C70AE03C58B77993;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class LevelAdvEffectOverrideInfo; }
namespace RPG::GameCore { class LevelDialogInfo; }
namespace RPG::GameCore { class LevelEntityHoyoTagContainerOverrideConfig; }
namespace RPG::GameCore { class LevelEntityReferenceInfo; }
namespace RPG::GameCore { class LevelEntityVCameraConfig; }
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace RPG::GameCore { class LevelPropInfo; }
namespace RPG::GameCore { class LevelPropParameter; }
namespace RPG::GameCore { class LevelPropSpawnConfig; }
namespace RPG::GameCore { class LevelPropStateConfig; }
namespace RPG::GameCore { class LevelPropStateIcon; }
namespace RPG::GameCore { class LevelTriggerInfo; }
namespace RPG::GameCore { class PropConfig; }
namespace RPG::GameCore { class PropDynamicResConfigItem; }
namespace RPG::GameCore { class PropRow; }
namespace RPG::GameCore { class PropStateIcon; }
namespace RPG::GameCore { class PropTagComponentCollection; }
namespace RPG::GameCore { class StageObjectCapture; }
namespace RPG::GameCore { class TriggerValidGuestConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MAPPROPDEF_GETREALLEVELGRAPHPATH_OFFSET UNITYSDK_OFFSET(0x962FCD0)
#define RPG_CLIENT_MAPPROPDEF_GET_ANCHORCAMERALOOKATDETECTOFFSET_OFFSET UNITYSDK_OFFSET(0x962F470)
#define RPG_CLIENT_MAPPROPDEF_GET_ANCHORGROUPID_OFFSET UNITYSDK_OFFSET(0x962BFD0)
#define RPG_CLIENT_MAPPROPDEF_GET_ANCHORINSTANCEID_OFFSET UNITYSDK_OFFSET(0x962C030)
#define RPG_CLIENT_MAPPROPDEF_GET_CAMERACENTERENTITYLIST_OFFSET UNITYSDK_OFFSET(0x962F440)
#define RPG_CLIENT_MAPPROPDEF_GET_CAMERACONFIG_OFFSET UNITYSDK_OFFSET(0x962F4B0)
#define RPG_CLIENT_MAPPROPDEF_GET_CAMPID_OFFSET UNITYSDK_OFFSET(0x962E7B0)
#define RPG_CLIENT_MAPPROPDEF_GET_CHESTID_OFFSET UNITYSDK_OFFSET(0x962E880)
#define RPG_CLIENT_MAPPROPDEF_GET_CUSTOMTRIGGERMAPV2_OFFSET UNITYSDK_OFFSET(0x962E940)
#define RPG_CLIENT_MAPPROPDEF_GET_CUSTOMTRIGGERMAP_OFFSET UNITYSDK_OFFSET(0x962E910)
#define RPG_CLIENT_MAPPROPDEF_GET_DIALOGUEGROUPS_OFFSET UNITYSDK_OFFSET(0x962EA60)
#define RPG_CLIENT_MAPPROPDEF_GET_DIALOGUETRIGGERANGLE_OFFSET UNITYSDK_OFFSET(0x962EB50)
#define RPG_CLIENT_MAPPROPDEF_GET_DIALOGUETRIGGERSKIPFAKEAVATARGET_OFFSET UNITYSDK_OFFSET(0x962ECD0)
#define RPG_CLIENT_MAPPROPDEF_GET_DISABLECAMERADITHER_OFFSET UNITYSDK_OFFSET(0x962F410)
#define RPG_CLIENT_MAPPROPDEF_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x962EA90)
#define RPG_CLIENT_MAPPROPDEF_GET_FAKEAVATARINTERACTBLACKLIST_OFFSET UNITYSDK_OFFSET(0x962ED00)
#define RPG_CLIENT_MAPPROPDEF_GET_FARMCOCOONID_OFFSET UNITYSDK_OFFSET(0x962E7F0)
#define RPG_CLIENT_MAPPROPDEF_GET_FARMELEMENTID_OFFSET UNITYSDK_OFFSET(0x962E820)
#define RPG_CLIENT_MAPPROPDEF_GET_FIRSTDIALOGUEGROUPID_OFFSET UNITYSDK_OFFSET(0x962EBB0)
#define RPG_CLIENT_MAPPROPDEF_GET_HIDEINCUTSCENE_OFFSET UNITYSDK_OFFSET(0x962EF70)
#define RPG_CLIENT_MAPPROPDEF_GET_HIDEINPERFORMANCED_OFFSET UNITYSDK_OFFSET(0x962F0B0)
#define RPG_CLIENT_MAPPROPDEF_GET_HIDEINPERFORMANCEE_OFFSET UNITYSDK_OFFSET(0x962F150)
#define RPG_CLIENT_MAPPROPDEF_GET_HIDEINSTORY_OFFSET UNITYSDK_OFFSET(0x962F010)
#define RPG_CLIENT_MAPPROPDEF_GET_HINTRANGE_OFFSET UNITYSDK_OFFSET(0x962EAC0)
#define RPG_CLIENT_MAPPROPDEF_GET_HOYOTAGCONTAINEROVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0x962F3B0)
#define RPG_CLIENT_MAPPROPDEF_GET_INTERACTICONTYPE_OFFSET UNITYSDK_OFFSET(0x962ECA0)
#define RPG_CLIENT_MAPPROPDEF_GET_INTERACTTITLE_OFFSET UNITYSDK_OFFSET(0x962EC70)
#define RPG_CLIENT_MAPPROPDEF_GET_ISCLIENTONLY_OFFSET UNITYSDK_OFFSET(0x962E700)
#define RPG_CLIENT_MAPPROPDEF_GET_ISCREATEONINITIAL_OFFSET UNITYSDK_OFFSET(0x962BDF0)
#define RPG_CLIENT_MAPPROPDEF_GET_ISNEEDFADEIN_OFFSET UNITYSDK_OFFSET(0x962F1F0)
#define RPG_CLIENT_MAPPROPDEF_GET_ISNEEDFADEOUT_OFFSET UNITYSDK_OFFSET(0x962F210)
#define RPG_CLIENT_MAPPROPDEF_GET_ISOVERRIDEPROPSOUNDTRIGGER_OFFSET UNITYSDK_OFFSET(0x962EDD0)
#define RPG_CLIENT_MAPPROPDEF_GET_ISOVERRIDETRIGGERVALIDGUESTCONFIG_OFFSET UNITYSDK_OFFSET(0x962EE30)
#define RPG_CLIENT_MAPPROPDEF_GET_ISTRACKREALTIMEPOSITIONINMAP_OFFSET UNITYSDK_OFFSET(0x9624A40)
#define RPG_CLIENT_MAPPROPDEF_GET_LEVELDIALOGINFO_OFFSET UNITYSDK_OFFSET(0x962EC40)
#define RPG_CLIENT_MAPPROPDEF_GET_LEVELGRAPHPATH_OFFSET UNITYSDK_OFFSET(0x962E8D0)
#define RPG_CLIENT_MAPPROPDEF_GET_LOADONINITIAL_OFFSET UNITYSDK_OFFSET(0x962EF20)
#define RPG_CLIENT_MAPPROPDEF_GET_LOOKATPLAYERTRIGGERRADIUS_OFFSET UNITYSDK_OFFSET(0x962F300)
#define RPG_CLIENT_MAPPROPDEF_GET_LOOKATPLAYER_OFFSET UNITYSDK_OFFSET(0x962F2D0)
#define RPG_CLIENT_MAPPROPDEF_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x96249E0)
#define RPG_CLIENT_MAPPROPDEF_GET_NAME_OFFSET UNITYSDK_OFFSET(0x962E790)
#define RPG_CLIENT_MAPPROPDEF_GET_NEARESTTELEPORTMAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x9624A70)
#define RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEADVEFFECTMAP_OFFSET UNITYSDK_OFFSET(0x962EA10)
#define RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEAUDIOSWITCHGROUPNAME_OFFSET UNITYSDK_OFFSET(0x962EE60)
#define RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEAUDIOSWITCHNAME_OFFSET UNITYSDK_OFFSET(0x962EE90)
#define RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEBOARDSHOWLIST_OFFSET UNITYSDK_OFFSET(0x962F250)
#define RPG_CLIENT_MAPPROPDEF_GET_OVERRIDELEVELGRAPHPATH_OFFSET UNITYSDK_OFFSET(0x962E8B0)
#define RPG_CLIENT_MAPPROPDEF_GET_OVERRIDELOCKRAYCASTOFFSET_OFFSET UNITYSDK_OFFSET(0x962F330)
#define RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEMAPICONTYPE_OFFSET UNITYSDK_OFFSET(0x962EB10)
#define RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEMAPSTATEICONS_OFFSET UNITYSDK_OFFSET(0x962EDB0)
#define RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEPROPNAME_OFFSET UNITYSDK_OFFSET(0x962ED80)
#define RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEPROPSOUNDTRIGGERRANGE_OFFSET UNITYSDK_OFFSET(0x962EE00)
#define RPG_CLIENT_MAPPROPDEF_GET_OVERRIDESOUNDCONFIGID_OFFSET UNITYSDK_OFFSET(0x962EEC0)
#define RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEVALUESOURCE_OFFSET UNITYSDK_OFFSET(0x962EA40)
#define RPG_CLIENT_MAPPROPDEF_GET_PERFORMANCEHIDEFLAGS_OFFSET UNITYSDK_OFFSET(0x962EF40)
#define RPG_CLIENT_MAPPROPDEF_GET_PROPCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x962E770)
#define RPG_CLIENT_MAPPROPDEF_GET_PROPDYNAMICRESDATA_OFFSET UNITYSDK_OFFSET(0x962E750)
#define RPG_CLIENT_MAPPROPDEF_GET_PROPEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x962ED60)
#define RPG_CLIENT_MAPPROPDEF_GET_PROPID_OFFSET UNITYSDK_OFFSET(0x962E710)
#define RPG_CLIENT_MAPPROPDEF_GET_PROPROWDATA_OFFSET UNITYSDK_OFFSET(0x962E730)
#define RPG_CLIENT_MAPPROPDEF_GET_PROPTAGCOMPONENTOVERRIDECOLLECTION_OFFSET UNITYSDK_OFFSET(0x962F3E0)
#define RPG_CLIENT_MAPPROPDEF_GET_RAIDID_OFFSET UNITYSDK_OFFSET(0x962E850)
#define RPG_CLIENT_MAPPROPDEF_GET_ROTATIONFROMCONFIG_OFFSET UNITYSDK_OFFSET(0x962F280)
#define RPG_CLIENT_MAPPROPDEF_GET_SPAWNCONFIG_OFFSET UNITYSDK_OFFSET(0x962F2A0)
#define RPG_CLIENT_MAPPROPDEF_GET_STAGEOBJECTCAPTURE_OFFSET UNITYSDK_OFFSET(0x962C090)
#define RPG_CLIENT_MAPPROPDEF_GET_STATECONFIGS_OFFSET UNITYSDK_OFFSET(0x962ED30)
#define RPG_CLIENT_MAPPROPDEF_GET_STATE_OFFSET UNITYSDK_OFFSET(0x962E7D0)
#define RPG_CLIENT_MAPPROPDEF_GET_SUBMAPID_OFFSET UNITYSDK_OFFSET(0x962F4E0)
#define RPG_CLIENT_MAPPROPDEF_GET_TALKCHOSENTYPE_OFFSET UNITYSDK_OFFSET(0x962EBE0)
#define RPG_CLIENT_MAPPROPDEF_GET_TALKDIALOGUEGROUPIDLIST_OFFSET UNITYSDK_OFFSET(0x962EC10)
#define RPG_CLIENT_MAPPROPDEF_GET_TRIGGERNAMELIST_OFFSET UNITYSDK_OFFSET(0x962F230)
#define RPG_CLIENT_MAPPROPDEF_GET_TRIGGERVALIDGUESTCONFIG_OFFSET UNITYSDK_OFFSET(0x962EEF0)
#define RPG_CLIENT_MAPPROPDEF_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x962E8F0)
#define RPG_CLIENT_MAPPROPDEF_GET_VALUESOURCE_OFFSET UNITYSDK_OFFSET(0x962E970)
#define RPG_CLIENT_MAPPROPDEF_SETCUSTOMPARAMETERS_OFFSET UNITYSDK_OFFSET(0x962F830)
#define RPG_CLIENT_MAPPROPDEF_SETOVERRIDEMAPSTATEICONS_OFFSET UNITYSDK_OFFSET(0x962F8F0)
#define RPG_CLIENT_MAPPROPDEF_SET_ISNEEDFADEIN_OFFSET UNITYSDK_OFFSET(0x962F200)
#define RPG_CLIENT_MAPPROPDEF_SET_ISNEEDFADEOUT_OFFSET UNITYSDK_OFFSET(0x962F220)
#define RPG_CLIENT_MAPPROPDEF_SET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x962EAF0)
#define RPG_CLIENT_MAPPROPDEF_SET_NAME_OFFSET UNITYSDK_OFFSET(0x962E7A0)
#define RPG_CLIENT_MAPPROPDEF_SET_OVERRIDEMAPICONTYPE_OFFSET UNITYSDK_OFFSET(0x962EB30)
#define RPG_CLIENT_MAPPROPDEF_SET_OVERRIDEMAPSTATEICONS_OFFSET UNITYSDK_OFFSET(0x962EDC0)
#define RPG_CLIENT_MAPPROPDEF_SET_OVERRIDEVALUESOURCE_OFFSET UNITYSDK_OFFSET(0x962EA50)
#define RPG_CLIENT_MAPPROPDEF_SET_PROPCONFIGDATA_OFFSET UNITYSDK_OFFSET(0x962E780)
#define RPG_CLIENT_MAPPROPDEF_SET_PROPDYNAMICRESDATA_OFFSET UNITYSDK_OFFSET(0x962E760)
#define RPG_CLIENT_MAPPROPDEF_SET_PROPEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x962ED70)
#define RPG_CLIENT_MAPPROPDEF_SET_PROPID_OFFSET UNITYSDK_OFFSET(0x962E720)
#define RPG_CLIENT_MAPPROPDEF_SET_PROPROWDATA_OFFSET UNITYSDK_OFFSET(0x962E740)
#define RPG_CLIENT_MAPPROPDEF_SET_ROTATIONFROMCONFIG_OFFSET UNITYSDK_OFFSET(0x962F290)
#define RPG_CLIENT_MAPPROPDEF_SET_STATE_OFFSET UNITYSDK_OFFSET(0x962E7E0)
#define RPG_CLIENT_MAPPROPDEF_SET_SUBMAPID_OFFSET UNITYSDK_OFFSET(0x962F4F0)
#define RPG_CLIENT_MAPPROPDEF_SET_TRIGGERNAMELIST_OFFSET UNITYSDK_OFFSET(0x962F240)
#define RPG_CLIENT_MAPPROPDEF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x962FBF0)
#define RPG_CLIENT_MAPPROPDEF_UPDATETRIGGERNAMELIST_OFFSET UNITYSDK_OFFSET(0x9616440)
#define RPG_CLIENT_MAPPROPDEF__APPLYGROUPINITOVERRIDEPROPSTATE_OFFSET UNITYSDK_OFFSET(0x962FA90)
#define RPG_CLIENT_MAPPROPDEF__CTOR_OFFSET UNITYSDK_OFFSET(0x961EBD0)
#define RPG_CLIENT_MAPPROPDEF__INITEXCELANDJSONCONFIG_OFFSET UNITYSDK_OFFSET(0x962F500)
#define RPG_CLIENT_MAPPROPDEF__INITPROPEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x962F6E0)
#define RPG_CLIENT_MAPPROPDEF__INITPROPMAPINFO_OFFSET UNITYSDK_OFFSET(0x962F7A0)
#define RPG_CLIENT_MAPPROPDEF__INITPROPSTATE_OFFSET UNITYSDK_OFFSET(0x962F640)
#define RPG_CLIENT_MAPPROPDEF__INITTRIGGERNAMELIST_OFFSET UNITYSDK_OFFSET(0x962F740)
#define RPG_CLIENT_MAPPROPDEF___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x962FD60)

namespace RPG::Client
{
	inline static constexpr unsigned int MapPropDef_TypeDefinitionIndex = 49336;

	class MapPropDef : public ::RPG::Client::MapEntityDef
	{
	public:
		::Class_1_533CCF93B9B1AD29* _PropExtraInfo_k__BackingField; // 0x58
		::RPG::GameCore::LevelPropParameter* MapCustomParameter; // 0x60
		::Class_1_068EAC6B51178745* MapInfo; // 0x68
		::RPG::GameCore::LevelGraphValueSource* _OverrideValueSource_k__BackingField; // 0x70
		::Class_1_C70AE03C58B77993* _ScenePropInfo; // 0x78
		::RPG::GameCore::PropRow* _PropRowData_k__BackingField; // 0x80
		::RPG::GameCore::LevelPropInfo* _LevelPropInfo; // 0x88
		::System::String* _Name_k__BackingField; // 0x90
		::System::Collections::Generic::List_1<::System::String*>* _TriggerNameList_k__BackingField; // 0x98
		::Il2CppArray<::RPG::GameCore::PropStateIcon*>* _OverrideMapStateIcons_k__BackingField; // 0xA0
		::RPG::GameCore::LevelPropParameter* LevelPropParameter; // 0xA8
		::RPG::GameCore::LevelGraphValueSource* _ValueSource; // 0xB0
		::RPG::GameCore::PropDynamicResConfigItem* _PropDynamicResData_k__BackingField; // 0xB8
		::RPG::GameCore::PropConfig* _PropConfigData_k__BackingField; // 0xC0
		::System::UInt32 _SubMapID_k__BackingField; // 0xC8
		::UnityEngine::Quaternion _RotationFromConfig_k__BackingField; // 0xCC
		::RPG::GameCore::PropState _State_k__BackingField; // 0xDC
		::System::UInt32 _PropID_k__BackingField; // 0xE0
		::System::Boolean IsShowMapGuideHint; // 0xE4
		::System::Boolean _IsNeedFadeIn_k__BackingField; // 0xE5
		::System::Boolean _IsNeedFadeOut_k__BackingField; // 0xE6

		::System::Void _ctor(::Class_1_A9C466B0994F2417* groupDef, ::System::UInt32 serverEntityId, ::System::UInt32 groupInstanceID, ::System::UInt32 instanceID, ::System::UInt32 propID, ::System::String* name, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 scale, ::RPG::GameCore::LevelPropInfo* levelPropInfo, ::Class_1_C70AE03C58B77993* scenePropInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A9C466B0994F2417*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::RPG::GameCore::LevelPropInfo*, ::Class_1_C70AE03C58B77993*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF__CTOR_OFFSET))(this, groupDef, serverEntityId, groupInstanceID, instanceID, propID, name, position, rotation, scale, levelPropInfo, scenePropInfo);
		}

		::System::Boolean get_IsClientOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_ISCLIENTONLY_OFFSET))(this);
		}

		::System::UInt32 get_PropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_PROPID_OFFSET))(this);
		}

		::System::Void set_PropID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_PROPID_OFFSET))(this, value);
		}

		::RPG::GameCore::PropRow* get_PropRowData()
		{
			return ((::RPG::GameCore::PropRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_PROPROWDATA_OFFSET))(this);
		}

		::System::Void set_PropRowData(::RPG::GameCore::PropRow* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_PROPROWDATA_OFFSET))(this, value);
		}

		::RPG::GameCore::PropDynamicResConfigItem* get_PropDynamicResData()
		{
			return ((::RPG::GameCore::PropDynamicResConfigItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_PROPDYNAMICRESDATA_OFFSET))(this);
		}

		::System::Void set_PropDynamicResData(::RPG::GameCore::PropDynamicResConfigItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropDynamicResConfigItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_PROPDYNAMICRESDATA_OFFSET))(this, value);
		}

		::RPG::GameCore::PropConfig* get_PropConfigData()
		{
			return ((::RPG::GameCore::PropConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_PROPCONFIGDATA_OFFSET))(this);
		}

		::System::Void set_PropConfigData(::RPG::GameCore::PropConfig* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_PROPCONFIGDATA_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_NAME_OFFSET))(this, value);
		}

		::RPG::GameCore::CampType get_CampID()
		{
			return ((::RPG::GameCore::CampType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_CAMPID_OFFSET))(this);
		}

		::System::Boolean get_IsCreateOnInitial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_ISCREATEONINITIAL_OFFSET))(this);
		}

		::RPG::GameCore::PropState get_State()
		{
			return ((::RPG::GameCore::PropState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_STATE_OFFSET))(this);
		}

		::System::Void set_State(::RPG::GameCore::PropState value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropState))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_STATE_OFFSET))(this, value);
		}

		::System::UInt32 get_AnchorGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_ANCHORGROUPID_OFFSET))(this);
		}

		::System::UInt32 get_AnchorInstanceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_ANCHORINSTANCEID_OFFSET))(this);
		}

		::System::UInt32 get_FarmCocoonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_FARMCOCOONID_OFFSET))(this);
		}

		::System::UInt32 get_FarmElementID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_FARMELEMENTID_OFFSET))(this);
		}

		::System::UInt32 get_RaidID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_RAIDID_OFFSET))(this);
		}

		::System::UInt32 get_ChestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_CHESTID_OFFSET))(this);
		}

		::System::Boolean get_IsTrackRealtimePositionInMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_ISTRACKREALTIMEPOSITIONINMAP_OFFSET))(this);
		}

		::System::Boolean get_OverrideLevelGraphPath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_OVERRIDELEVELGRAPHPATH_OFFSET))(this);
		}

		::System::String* get_LevelGraphPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_LEVELGRAPHPATH_OFFSET))(this);
		}

		::RPG::GameCore::LevelTriggerInfo* get_Trigger()
		{
			return ((::RPG::GameCore::LevelTriggerInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_TRIGGER_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelTriggerInfo*>* get_CustomTriggerMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelTriggerInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_CUSTOMTRIGGERMAP_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelTriggerInfo*>* get_CustomTriggerMapV2()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelTriggerInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_CUSTOMTRIGGERMAPV2_OFFSET))(this);
		}

		::RPG::GameCore::LevelGraphValueSource* get_ValueSource()
		{
			return ((::RPG::GameCore::LevelGraphValueSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_VALUESOURCE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*>* get_OverrideAdvEffectMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::LevelAdvEffectOverrideInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEADVEFFECTMAP_OFFSET))(this);
		}

		::RPG::GameCore::LevelGraphValueSource* get_OverrideValueSource()
		{
			return ((::RPG::GameCore::LevelGraphValueSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEVALUESOURCE_OFFSET))(this);
		}

		::System::Void set_OverrideValueSource(::RPG::GameCore::LevelGraphValueSource* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGraphValueSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_OVERRIDEVALUESOURCE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::UInt32>* get_DialogueGroups()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_DIALOGUEGROUPS_OFFSET))(this);
		}

		::System::UInt32 get_EventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_EVENTID_OFFSET))(this);
		}

		::System::Single get_HintRange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_HINTRANGE_OFFSET))(this);
		}

		::RPG::GameCore::StageObjectCapture* get_StageObjectCapture()
		{
			return ((::RPG::GameCore::StageObjectCapture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_STAGEOBJECTCAPTURE_OFFSET))(this);
		}

		::System::UInt32 get_MappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_MAPPINGINFOID_OFFSET))(this);
		}

		::System::Void set_MappingInfoID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_MAPPINGINFOID_OFFSET))(this, value);
		}

		::System::Int32 get_OverrideMapIconType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEMAPICONTYPE_OFFSET))(this);
		}

		::System::Void set_OverrideMapIconType(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_OVERRIDEMAPICONTYPE_OFFSET))(this, value);
		}

		::System::Single get_DialogueTriggerAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_DIALOGUETRIGGERANGLE_OFFSET))(this);
		}

		::System::UInt32 get_FirstDialogueGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_FIRSTDIALOGUEGROUPID_OFFSET))(this);
		}

		::RPG::GameCore::TalkChosenType get_TalkChosenType()
		{
			return ((::RPG::GameCore::TalkChosenType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_TALKCHOSENTYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TalkDialogueGroupIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_TALKDIALOGUEGROUPIDLIST_OFFSET))(this);
		}

		::RPG::GameCore::LevelDialogInfo* get_LevelDialogInfo()
		{
			return ((::RPG::GameCore::LevelDialogInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_LEVELDIALOGINFO_OFFSET))(this);
		}

		::RPG::Client::TextID get_InteractTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_INTERACTTITLE_OFFSET))(this);
		}

		::RPG::GameCore::JsonEnum* get_InteractIconType()
		{
			return ((::RPG::GameCore::JsonEnum*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_INTERACTICONTYPE_OFFSET))(this);
		}

		::System::Boolean get_DialogueTriggerSkipFakeAvatarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_DIALOGUETRIGGERSKIPFAKEAVATARGET_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_FakeAvatarInteractBlackList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_FAKEAVATARINTERACTBLACKLIST_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::LevelPropStateConfig*>* get_StateConfigs()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelPropStateConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_STATECONFIGS_OFFSET))(this);
		}

		::Class_1_533CCF93B9B1AD29* get_PropExtraInfo()
		{
			return ((::Class_1_533CCF93B9B1AD29*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_PROPEXTRAINFO_OFFSET))(this);
		}

		::System::Void set_PropExtraInfo(::Class_1_533CCF93B9B1AD29* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_533CCF93B9B1AD29*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_PROPEXTRAINFO_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_OverridePropName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEPROPNAME_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::PropStateIcon*>* get_OverrideMapStateIcons()
		{
			return ((::Il2CppArray<::RPG::GameCore::PropStateIcon*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEMAPSTATEICONS_OFFSET))(this);
		}

		::System::Void set_OverrideMapStateIcons(::Il2CppArray<::RPG::GameCore::PropStateIcon*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::PropStateIcon*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_OVERRIDEMAPSTATEICONS_OFFSET))(this, value);
		}

		::System::Boolean get_IsOverridePropSoundTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_ISOVERRIDEPROPSOUNDTRIGGER_OFFSET))(this);
		}

		::System::Single get_OverridePropSoundTriggerRange()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEPROPSOUNDTRIGGERRANGE_OFFSET))(this);
		}

		::System::Boolean get_IsOverrideTriggerValidGuestConfig()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_ISOVERRIDETRIGGERVALIDGUESTCONFIG_OFFSET))(this);
		}

		::System::String* get_OverrideAudioSwitchGroupName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEAUDIOSWITCHGROUPNAME_OFFSET))(this);
		}

		::System::String* get_OverrideAudioSwitchName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEAUDIOSWITCHNAME_OFFSET))(this);
		}

		::System::UInt32 get_OverrideSoundConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_OVERRIDESOUNDCONFIGID_OFFSET))(this);
		}

		::RPG::GameCore::TriggerValidGuestConfig* get_TriggerValidGuestConfig()
		{
			return ((::RPG::GameCore::TriggerValidGuestConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_TRIGGERVALIDGUESTCONFIG_OFFSET))(this);
		}

		::System::Boolean get_LoadOnInitial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_LOADONINITIAL_OFFSET))(this);
		}

		::System::UInt16 get_PerformanceHideFlags()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_PERFORMANCEHIDEFLAGS_OFFSET))(this);
		}

		::System::Boolean get_HideInCutScene()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_HIDEINCUTSCENE_OFFSET))(this);
		}

		::System::Boolean get_HideInStory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_HIDEINSTORY_OFFSET))(this);
		}

		::System::Boolean get_HideInPerformanceD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_HIDEINPERFORMANCED_OFFSET))(this);
		}

		::System::Boolean get_HideInPerformanceE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_HIDEINPERFORMANCEE_OFFSET))(this);
		}

		::System::Boolean get_IsNeedFadeIn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_ISNEEDFADEIN_OFFSET))(this);
		}

		::System::Void set_IsNeedFadeIn(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_ISNEEDFADEIN_OFFSET))(this, value);
		}

		::System::Boolean get_IsNeedFadeOut()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_ISNEEDFADEOUT_OFFSET))(this);
		}

		::System::Void set_IsNeedFadeOut(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_ISNEEDFADEOUT_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_TriggerNameList()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_TRIGGERNAMELIST_OFFSET))(this);
		}

		::System::Void set_TriggerNameList(::System::Collections::Generic::List_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_TRIGGERNAMELIST_OFFSET))(this, value);
		}

		::System::UInt32 get_NearestTeleportMappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_NEARESTTELEPORTMAPPINGINFOID_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* get_OverrideBoardShowList()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_OVERRIDEBOARDSHOWLIST_OFFSET))(this);
		}

		::UnityEngine::Quaternion get_RotationFromConfig()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_ROTATIONFROMCONFIG_OFFSET))(this);
		}

		::System::Void set_RotationFromConfig(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_ROTATIONFROMCONFIG_OFFSET))(this, value);
		}

		::RPG::GameCore::LevelPropSpawnConfig* get_SpawnConfig()
		{
			return ((::RPG::GameCore::LevelPropSpawnConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_SPAWNCONFIG_OFFSET))(this);
		}

		::System::Boolean get_LookAtPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_LOOKATPLAYER_OFFSET))(this);
		}

		::System::Single get_LookAtPlayerTriggerRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_LOOKATPLAYERTRIGGERRADIUS_OFFSET))(this);
		}

		::System::Nullable_1<::System::Single> get_OverrideLockRaycastOffset()
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_OVERRIDELOCKRAYCASTOFFSET_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityHoyoTagContainerOverrideConfig* get_HoyoTagContainerOverrideConfig()
		{
			return ((::RPG::GameCore::LevelEntityHoyoTagContainerOverrideConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_HOYOTAGCONTAINEROVERRIDECONFIG_OFFSET))(this);
		}

		::RPG::GameCore::PropTagComponentCollection* get_PropTagComponentOverrideCollection()
		{
			return ((::RPG::GameCore::PropTagComponentCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_PROPTAGCOMPONENTOVERRIDECOLLECTION_OFFSET))(this);
		}

		::System::Boolean get_DisableCameraDither()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_DISABLECAMERADITHER_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::LevelEntityReferenceInfo*>* get_CameraCenterEntityList()
		{
			return ((::Il2CppArray<::RPG::GameCore::LevelEntityReferenceInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_CAMERACENTERENTITYLIST_OFFSET))(this);
		}

		::RPG::MVector3 get_AnchorCameraLookAtDetectOffset()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_ANCHORCAMERALOOKATDETECTOFFSET_OFFSET))(this);
		}

		::RPG::GameCore::LevelEntityVCameraConfig* get_CameraConfig()
		{
			return ((::RPG::GameCore::LevelEntityVCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_CAMERACONFIG_OFFSET))(this);
		}

		::System::UInt32 get_SubMapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GET_SUBMAPID_OFFSET))(this);
		}

		::System::Void set_SubMapID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SET_SUBMAPID_OFFSET))(this, value);
		}

		::System::Void _InitExcelAndJsonConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF__INITEXCELANDJSONCONFIG_OFFSET))(this);
		}

		::System::Void _InitPropState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF__INITPROPSTATE_OFFSET))(this);
		}

		::System::Void _ApplyGroupInitOverridePropState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF__APPLYGROUPINITOVERRIDEPROPSTATE_OFFSET))(this);
		}

		::System::Void _InitPropExtraInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF__INITPROPEXTRAINFO_OFFSET))(this);
		}

		::System::Void _InitTriggerNameList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF__INITTRIGGERNAMELIST_OFFSET))(this);
		}

		::System::Void _InitPropMapInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF__INITPROPMAPINFO_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_TOSTRING_OFFSET))(this);
		}

		::System::Void UpdateTriggerNameList(::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* triggerNames)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_UPDATETRIGGERNAMELIST_OFFSET))(this, triggerNames);
		}

		::System::Void SetOverrideMapStateIcons(::Il2CppArray<::RPG::GameCore::LevelPropStateIcon*>* overrideMapStateIcons)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::LevelPropStateIcon*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SETOVERRIDEMAPSTATEICONS_OFFSET))(this, overrideMapStateIcons);
		}

		::System::Void SetCustomParameters(::RPG::GameCore::LevelPropParameter* propTypeParam, ::RPG::GameCore::LevelPropParameter* mappingInfoTypeParam)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelPropParameter*, ::RPG::GameCore::LevelPropParameter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_SETCUSTOMPARAMETERS_OFFSET))(this, propTypeParam, mappingInfoTypeParam);
		}

		::System::String* GetRealLevelGraphPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF_GETREALLEVELGRAPHPATH_OFFSET))(this);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPPROPDEF___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}

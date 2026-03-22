#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Conflict_NormalGroupNPCIndexKey.h"
#include "unitysdk/RPG/Client/ConflictType.h"
#include "unitysdk/RPG/GameCore/GroupCategory.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_70A2BED4C4737BFB;
class Class_1_9118D233A02D9925;
class Conflict_ConflictGroupUnit;
class Conflict_ConflictModel;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapDistrict; }
namespace RPG::Client { class MapNpc; }
namespace RPG::Client { class MapProp; }
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class LevelGroupMainMissionIssuePatch; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CONFLICT_ADDDISTRICTTOUNIT_OFFSET UNITYSDK_OFFSET(0x9966D80)
#define CONFLICT_ADDNPCTOUNIT_OFFSET UNITYSDK_OFFSET(0x9965700)
#define CONFLICT_ADDPROPTOUNIT_OFFSET UNITYSDK_OFFSET(0x9966370)
#define CONFLICT_CALCULATEOTHERFLOORCONFLICTGROUPUNIT_OFFSET UNITYSDK_OFFSET(0x995CE20)
#define CONFLICT_CALCULATEOTHERFLOORHOYOGROUPLOADSTATESEX_OFFSET UNITYSDK_OFFSET(0x99604A0)
#define CONFLICT_CALCULATEOTHERFLOORMISSIONGROUPSACTIVESTATE_OFFSET UNITYSDK_OFFSET(0x99624F0)
#define CONFLICT_CALCULATEOTHERFLOORMISSIONGROUPSLOADSTATE_COMBINENPCCONFLICT_OFFSET UNITYSDK_OFFSET(0x9962DC0)
#define CONFLICT_CALCULATEOTHERFLOORMISSIONGROUPSLOADSTATE_PERFLOORSPACECONFLICT_OFFSET UNITYSDK_OFFSET(0x99625D0)
#define CONFLICT_CLEARCONFLICTVIEW_OFFSET UNITYSDK_OFFSET(0x995D490)
#define CONFLICT_COLLECTOTHERFLOORGROUPCONFLICTIDS_OFFSET UNITYSDK_OFFSET(0x995DE40)
#define CONFLICT_COMPARETOBYMISSIONID_OFFSET UNITYSDK_OFFSET(0x99682D0)
#define CONFLICT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9967DD0)
#define CONFLICT_DISTRIBUTEOTHERFLOORMISSIONUNITTOMODEL_OFFSET UNITYSDK_OFFSET(0x995F2E0)
#define CONFLICT_DISTRIBUTEOTHERFLOORNORMALNPCTOMODEL_OFFSET UNITYSDK_OFFSET(0x9969010)
#define CONFLICT_GETCONNECTSUBMISSIONIDLISTFROMNPC_OFFSET UNITYSDK_OFFSET(0x9965680)
#define CONFLICT_GETMAINMISSIONPATCH_OFFSET UNITYSDK_OFFSET(0x9965D50)
#define CONFLICT_GETMISSIONPOINTS_OFFSET UNITYSDK_OFFSET(0x9968450)
#define CONFLICT_GETMISSIONPRIORITY_OFFSET UNITYSDK_OFFSET(0x9968490)
#define CONFLICT_IFMAINMISSIONISOCCUPIED_OFFSET UNITYSDK_OFFSET(0x9968100)
#define CONFLICT_ISENTITYOCCUPIED_OFFSET UNITYSDK_OFFSET(0x9967F20)
#define CONFLICT_ISGROUPOCCUPIED_OFFSET UNITYSDK_OFFSET(0x9967E60)
#define CONFLICT_MISSIONGROUPCONFLICTSIM_OFFSET UNITYSDK_OFFSET(0x995E860)
#define CONFLICT_REMOVEDISTRICTFROMUNIT_OFFSET UNITYSDK_OFFSET(0x9967500)
#define CONFLICT_REMOVENPCFROMUNIT_OFFSET UNITYSDK_OFFSET(0x9966040)
#define CONFLICT_REMOVEPROPFROMUNIT_OFFSET UNITYSDK_OFFSET(0x9966AF0)
#define CONFLICT_SELECTPATCHMISSIONID_OFFSET UNITYSDK_OFFSET(0x9967790)
#define CONFLICT_UPDATECONFLICTMODEL_OFFSET UNITYSDK_OFFSET(0x995D390)
#define CONFLICT_UPDATECONFLICTVIEW_OFFSET UNITYSDK_OFFSET(0x9963C60)
#define CONFLICT__ADDCONFLICTMODEL_OFFSET UNITYSDK_OFFSET(0x995C450)
#define CONFLICT__BUILDMODELSSIM_OFFSET UNITYSDK_OFFSET(0x995DF80)
#define CONFLICT__CALCULATEOTHERFLOORGROUPACTIVESTATE_MISSIONGROUP_OFFSET UNITYSDK_OFFSET(0x996A2E0)
#define CONFLICT__CALCULATEOTHERFLOORHOYOMISSIONGROUPUNITS_OFFSET UNITYSDK_OFFSET(0x9960DE0)
#define CONFLICT__CALCULATEOTHERFLOORHOYONORMALNPCGROUPUNITS_OFFSET UNITYSDK_OFFSET(0x9961B70)
#define CONFLICT__CALCULATEOTHERFLOORLEGACYMISSIONGROUPUNITS_OFFSET UNITYSDK_OFFSET(0x9960890)
#define CONFLICT__CALCULATEOTHERFLOORLEGACYNORMALNPCGROUPUNITS_OFFSET UNITYSDK_OFFSET(0x9961240)
#define CONFLICT__CLEARCONFLICTMODEL_OFFSET UNITYSDK_OFFSET(0x995C370)
#define CONFLICT__COLLECTALLOTHERFLOORSMAINMISSIONS_OFFSET UNITYSDK_OFFSET(0x996AC40)
#define CONFLICT__CTOR_OFFSET UNITYSDK_OFFSET(0x9967900)
#define CONFLICT__DISTRIBUTEMISSIONUNITTOMODEL_OFFSET UNITYSDK_OFFSET(0x99684D0)
#define CONFLICT__DISTRIBUTENORMALUNITTOMODEL_OFFSET UNITYSDK_OFFSET(0x9968A20)
#define CONFLICT__DISTRIBUTEUNITTOMODEL_OFFSET UNITYSDK_OFFSET(0x99650F0)
#define CONFLICT__DOUPDATECONFLICTVIEW_OFFSET UNITYSDK_OFFSET(0x9964250)
#define CONFLICT__GETGROUPCATEGORY_1_OFFSET UNITYSDK_OFFSET(0x9966860)
#define CONFLICT__GETGROUPCATEGORY_2_OFFSET UNITYSDK_OFFSET(0x9967270)
#define CONFLICT__GETGROUPCATEGORY_OFFSET UNITYSDK_OFFSET(0x9965CC0)
#define CONFLICT__GETGROUPINITCONFLICTIDS_1_OFFSET UNITYSDK_OFFSET(0x99668F0)
#define CONFLICT__GETGROUPINITCONFLICTIDS_2_OFFSET UNITYSDK_OFFSET(0x99673A0)
#define CONFLICT__GETGROUPINITCONFLICTIDS_OFFSET UNITYSDK_OFFSET(0x9965DF0)
#define CONFLICT__GETGROUPOWNERMAINMISSION_1_OFFSET UNITYSDK_OFFSET(0x9966A50)
#define CONFLICT__GETGROUPOWNERMAINMISSION_2_OFFSET UNITYSDK_OFFSET(0x9967300)
#define CONFLICT__GETGROUPOWNERMAINMISSION_OFFSET UNITYSDK_OFFSET(0x9965FA0)
#define CONFLICT__INITCURRENTFLOORMISSIONGROUPUNITS_OFFSET UNITYSDK_OFFSET(0x995D690)
#define CONFLICT__ONGROUPUNLOADED_OFFSET UNITYSDK_OFFSET(0x996A030)
#define CONFLICT__UNIONHASHSET_1_OFFSET UNITYSDK_OFFSET(0x9965590)
#define CONFLICT__UNIONHASHSET_OFFSET UNITYSDK_OFFSET(0x99654F0)
#define CONFLICT__UPDATECONFLICTMODEL_CURRENTFLOOR_OFFSET UNITYSDK_OFFSET(0x995C620)
#define CONFLICT__UPDATECONFLICTMODEL_MULTIFLOOR_OFFSET UNITYSDK_OFFSET(0x995C8D0)
#define CONFLICT__UPDATECONFLICTVIEW_B__26_0_OFFSET UNITYSDK_OFFSET(0x996AE80)
#define CONFLICT__UPDATEOTHERFLOORGROUPUNITS_OFFSET UNITYSDK_OFFSET(0x995CD10)
#define CONFLICT__WILLCONFLICTCHANGE_OFFSET UNITYSDK_OFFSET(0x9963E30)

inline static constexpr unsigned int Conflict_TypeDefinitionIndex = 37102;

class Conflict : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* _tempSameMissionConflictIDs; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictGroupUnit*>*>* _OtherFloorMissionGroupUnits; // 0x18
	::System::Collections::Generic::HashSet_1<::System::UInt32>* _tempConflictIDs; // 0x20
	::System::Collections::Generic::HashSet_1<::System::UInt32>* _tempInitConflictIDs; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictGroupUnit*>* _CurrentFloorMissionGroupUnits; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictModel*>* _ConflictModelsDic; // 0x38
	::RPG::Client::MapDef* _MapDef; // 0x40
	::System::Collections::Generic::List_1<::Conflict_ConflictModel*>* _ConflictModelsList; // 0x48
	::System::Collections::Generic::Dictionary_2<::Conflict_NormalGroupNPCIndexKey, ::Conflict_ConflictGroupUnit*>* _CurrentFloorNormalGroupUnits; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::Conflict_NormalGroupNPCIndexKey, ::Conflict_ConflictGroupUnit*>*>* _OtherFloorNormalNpcGroupUnits; // 0x58
	::System::Boolean _IsInConflictTransfer; // 0x60

	::System::Void _ctor(::RPG::Client::MapDef* mapDef)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CONFLICT__CTOR_OFFSET))(this, mapDef);
	}

	::System::Void _ClearConflictModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__CLEARCONFLICTMODEL_OFFSET))(this);
	}

	::System::Void _AddConflictModel(::System::UInt32 mainMissionID)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT__ADDCONFLICTMODEL_OFFSET))(this, mainMissionID);
	}

	::System::Void _UpdateConflictModel_CurrentFloor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__UPDATECONFLICTMODEL_CURRENTFLOOR_OFFSET))(this);
	}

	::System::Void _UpdateConflictModel_MultiFloor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__UPDATECONFLICTMODEL_MULTIFLOOR_OFFSET))(this);
	}

	::System::Void _UpdateOtherFloorGroupUnits()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__UPDATEOTHERFLOORGROUPUNITS_OFFSET))(this);
	}

	::System::Void UpdateConflictModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_UPDATECONFLICTMODEL_OFFSET))(this);
	}

	::System::Void ClearConflictView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_CLEARCONFLICTVIEW_OFFSET))(this);
	}

	::System::Void _InitCurrentFloorMissionGroupUnits()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__INITCURRENTFLOORMISSIONGROUPUNITS_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::System::UInt32>* CollectOtherFloorGroupConflictIDs(::RPG::GameCore::RuntimeGroupInfo* groupInfo)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + CONFLICT_COLLECTOTHERFLOORGROUPCONFLICTIDS_OFFSET))(groupInfo);
	}

	static ::System::ValueTuple_2<::System::Collections::Generic::List_1<::Conflict_ConflictModel*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictModel*>*> _BuildModelsSim(::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Conflict_ConflictGroupUnit*>* groupUnits)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::List_1<::Conflict_ConflictModel*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictModel*>*>(*)(::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Conflict_ConflictGroupUnit*>*))((::PBYTE)hIl2Cpp + CONFLICT__BUILDMODELSSIM_OFFSET))(groupUnits);
	}

	static ::System::Void MissionGroupConflictSim(::System::UInt32 floorID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictGroupUnit*>* missionGroupUnits)
	{
		return ((::System::Void(*)(::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictGroupUnit*>*))((::PBYTE)hIl2Cpp + CONFLICT_MISSIONGROUPCONFLICTSIM_OFFSET))(floorID, missionGroupUnits);
	}

	static ::System::ValueTuple_2<::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictGroupUnit*>*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::Conflict_NormalGroupNPCIndexKey, ::Conflict_ConflictGroupUnit*>*>*> CalculateOtherFloorConflictGroupUnit(::System::UInt32 conflictGroupID, ::RPG::Client::MapDef* currentMap)
	{
		return ((::System::ValueTuple_2<::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictGroupUnit*>*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::Conflict_NormalGroupNPCIndexKey, ::Conflict_ConflictGroupUnit*>*>*>(*)(::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CONFLICT_CALCULATEOTHERFLOORCONFLICTGROUPUNIT_OFFSET))(conflictGroupID, currentMap);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_9118D233A02D9925*>* CalculateOtherFloorHoyoGroupLoadStatesEX(::System::UInt32 conflictGroupID, ::RPG::Client::MapDef* currentMap)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_9118D233A02D9925*>*(*)(::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CONFLICT_CALCULATEOTHERFLOORHOYOGROUPLOADSTATESEX_OFFSET))(conflictGroupID, currentMap);
	}

	static ::System::Void _CalculateOtherFloorHoyoMissionGroupUnits(::RPG::Client::MapDef* mapDef, ::Class_1_9118D233A02D9925* loadState, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictGroupUnit*>*& result)
	{
		return ((::System::Void(*)(::RPG::Client::MapDef*, ::Class_1_9118D233A02D9925*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictGroupUnit*>*&))((::PBYTE)hIl2Cpp + CONFLICT__CALCULATEOTHERFLOORHOYOMISSIONGROUPUNITS_OFFSET))(mapDef, loadState, result);
	}

	static ::System::Void _CalculateOtherFloorLegacyMissionGroupUnits(::RPG::Client::MapDef* mapDef, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictGroupUnit*>*& result)
	{
		return ((::System::Void(*)(::RPG::Client::MapDef*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictGroupUnit*>*&))((::PBYTE)hIl2Cpp + CONFLICT__CALCULATEOTHERFLOORLEGACYMISSIONGROUPUNITS_OFFSET))(mapDef, result);
	}

	static ::System::Void _CalculateOtherFloorLegacyNormalNpcGroupUnits(::RPG::Client::MapDef* mapDef, ::System::Collections::Generic::Dictionary_2<::Conflict_NormalGroupNPCIndexKey, ::Conflict_ConflictGroupUnit*>*& result)
	{
		return ((::System::Void(*)(::RPG::Client::MapDef*, ::System::Collections::Generic::Dictionary_2<::Conflict_NormalGroupNPCIndexKey, ::Conflict_ConflictGroupUnit*>*&))((::PBYTE)hIl2Cpp + CONFLICT__CALCULATEOTHERFLOORLEGACYNORMALNPCGROUPUNITS_OFFSET))(mapDef, result);
	}

	static ::System::Void _CalculateOtherFloorHoyoNormalNpcGroupUnits(::RPG::Client::MapDef* mapDef, ::Class_1_9118D233A02D9925* loadState, ::System::Collections::Generic::Dictionary_2<::Conflict_NormalGroupNPCIndexKey, ::Conflict_ConflictGroupUnit*>*& result)
	{
		return ((::System::Void(*)(::RPG::Client::MapDef*, ::Class_1_9118D233A02D9925*, ::System::Collections::Generic::Dictionary_2<::Conflict_NormalGroupNPCIndexKey, ::Conflict_ConflictGroupUnit*>*&))((::PBYTE)hIl2Cpp + CONFLICT__CALCULATEOTHERFLOORHOYONORMALNPCGROUPUNITS_OFFSET))(mapDef, loadState, result);
	}

	::System::Void UpdateConflictView(::System::Boolean ifTriggerScreenTransfer)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CONFLICT_UPDATECONFLICTVIEW_OFFSET))(this, ifTriggerScreenTransfer);
	}

	::System::Boolean _WillConflictChange()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__WILLCONFLICTCHANGE_OFFSET))(this);
	}

	::System::Void _DoUpdateConflictView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__DOUPDATECONFLICTVIEW_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::UInt32>* GetConnectSubmissionIDListFromNpc(::System::UInt32 GroupID, ::System::UInt32 npcInstanceID)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_GETCONNECTSUBMISSIONIDLISTFROMNPC_OFFSET))(this, GroupID, npcInstanceID);
	}

	::System::Void AddNPCToUnit(::RPG::Client::MapNpc* NPC)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + CONFLICT_ADDNPCTOUNIT_OFFSET))(this, NPC);
	}

	::System::Void RemoveNPCFromUnit(::RPG::Client::MapNpc* NPC)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + CONFLICT_REMOVENPCFROMUNIT_OFFSET))(this, NPC);
	}

	::System::Void AddPropToUnit(::RPG::Client::MapProp* prop)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CONFLICT_ADDPROPTOUNIT_OFFSET))(this, prop);
	}

	::System::Void RemovePropFromUnit(::RPG::Client::MapProp* prop)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CONFLICT_REMOVEPROPFROMUNIT_OFFSET))(this, prop);
	}

	::System::Void AddDistrictToUnit(::RPG::Client::MapDistrict* district)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrict*))((::PBYTE)hIl2Cpp + CONFLICT_ADDDISTRICTTOUNIT_OFFSET))(this, district);
	}

	::System::Void RemoveDistrictFromUnit(::RPG::Client::MapDistrict* district)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDistrict*))((::PBYTE)hIl2Cpp + CONFLICT_REMOVEDISTRICTFROMUNIT_OFFSET))(this, district);
	}

	::RPG::GameCore::GroupCategory _GetGroupCategory(::RPG::Client::MapNpc* NPC)
	{
		return ((::RPG::GameCore::GroupCategory(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + CONFLICT__GETGROUPCATEGORY_OFFSET))(this, NPC);
	}

	::RPG::GameCore::GroupCategory _GetGroupCategory_1(::RPG::Client::MapProp* prop)
	{
		return ((::RPG::GameCore::GroupCategory(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CONFLICT__GETGROUPCATEGORY_1_OFFSET))(this, prop);
	}

	::RPG::GameCore::GroupCategory _GetGroupCategory_2(::RPG::Client::MapDistrict* district)
	{
		return ((::RPG::GameCore::GroupCategory(*)(::PVOID, ::RPG::Client::MapDistrict*))((::PBYTE)hIl2Cpp + CONFLICT__GETGROUPCATEGORY_2_OFFSET))(this, district);
	}

	::System::UInt32 _GetGroupOwnerMainMission(::RPG::Client::MapNpc* NPC)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + CONFLICT__GETGROUPOWNERMAINMISSION_OFFSET))(this, NPC);
	}

	::System::UInt32 _GetGroupOwnerMainMission_1(::RPG::Client::MapProp* prop)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CONFLICT__GETGROUPOWNERMAINMISSION_1_OFFSET))(this, prop);
	}

	::System::UInt32 _GetGroupOwnerMainMission_2(::RPG::Client::MapDistrict* district)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::MapDistrict*))((::PBYTE)hIl2Cpp + CONFLICT__GETGROUPOWNERMAINMISSION_2_OFFSET))(this, district);
	}

	static ::RPG::GameCore::LevelGroupMainMissionIssuePatch* GetMainMissionPatch(::System::UInt32 floorID, ::System::UInt32 groupID)
	{
		return ((::RPG::GameCore::LevelGroupMainMissionIssuePatch*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_GETMAINMISSIONPATCH_OFFSET))(floorID, groupID);
	}

	static ::System::UInt32 SelectPatchMissionID(::System::Collections::Generic::List_1<::Conflict_ConflictModel*>* sortedModels, ::RPG::GameCore::LevelGroupMainMissionIssuePatch* patch, ::Conflict_ConflictGroupUnit* unit)
	{
		return ((::System::UInt32(*)(::System::Collections::Generic::List_1<::Conflict_ConflictModel*>*, ::RPG::GameCore::LevelGroupMainMissionIssuePatch*, ::Conflict_ConflictGroupUnit*))((::PBYTE)hIl2Cpp + CONFLICT_SELECTPATCHMISSIONID_OFFSET))(sortedModels, patch, unit);
	}

	::Il2CppArray<::System::UInt32>* _GetGroupInitConflictIDs(::RPG::Client::MapNpc* NPC)
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + CONFLICT__GETGROUPINITCONFLICTIDS_OFFSET))(this, NPC);
	}

	::Il2CppArray<::System::UInt32>* _GetGroupInitConflictIDs_1(::RPG::Client::MapProp* prop)
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::Client::MapProp*))((::PBYTE)hIl2Cpp + CONFLICT__GETGROUPINITCONFLICTIDS_1_OFFSET))(this, prop);
	}

	::Il2CppArray<::System::UInt32>* _GetGroupInitConflictIDs_2(::RPG::Client::MapDistrict* district)
	{
		return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::Client::MapDistrict*))((::PBYTE)hIl2Cpp + CONFLICT__GETGROUPINITCONFLICTIDS_2_OFFSET))(this, district);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT_DISPOSE_OFFSET))(this);
	}

	::System::Boolean IsGroupOccupied(::System::UInt32 groupID)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_ISGROUPOCCUPIED_OFFSET))(this, groupID);
	}

	::System::Boolean IsEntityOccupied(::System::UInt32 groupID, ::System::UInt32 instanceID)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_ISENTITYOCCUPIED_OFFSET))(this, groupID, instanceID);
	}

	::RPG::Client::ConflictType IfMainMissionIsOccupied(::System::UInt32 mainMissionID)
	{
		return ((::RPG::Client::ConflictType(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_IFMAINMISSIONISOCCUPIED_OFFSET))(this, mainMissionID);
	}

	static ::System::Int32 CompareToByMissionID(::System::UInt32 selfMissionId, ::System::UInt32 otherMissionId)
	{
		return ((::System::Int32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_COMPARETOBYMISSIONID_OFFSET))(selfMissionId, otherMissionId);
	}

	static ::System::Int32 GetMissionPoints(::System::UInt32 mainMissionID)
	{
		return ((::System::Int32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_GETMISSIONPOINTS_OFFSET))(mainMissionID);
	}

	static ::System::UInt32 GetMissionPriority(::System::UInt32 mainMissionID)
	{
		return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_GETMISSIONPRIORITY_OFFSET))(mainMissionID);
	}

	::System::Void _DistributeMissionUnitToModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__DISTRIBUTEMISSIONUNITTOMODEL_OFFSET))(this);
	}

	::System::Void _DistributeNormalUnitToModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__DISTRIBUTENORMALUNITTOMODEL_OFFSET))(this);
	}

	static ::System::Void DistributeOtherFloorMissionUnitToModel(::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Conflict_ConflictGroupUnit*>* otherFloorMissionGroupUnits, ::System::Collections::Generic::List_1<::Conflict_ConflictModel*>* modelList, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictModel*>* modelDict)
	{
		return ((::System::Void(*)(::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::Conflict_ConflictGroupUnit*>*, ::System::Collections::Generic::List_1<::Conflict_ConflictModel*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictModel*>*))((::PBYTE)hIl2Cpp + CONFLICT_DISTRIBUTEOTHERFLOORMISSIONUNITTOMODEL_OFFSET))(otherFloorMissionGroupUnits, modelList, modelDict);
	}

	static ::System::Void DistributeOtherFloorNormalNpcToModel(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::Conflict_NormalGroupNPCIndexKey, ::Conflict_ConflictGroupUnit*>*>* otherFloorNormalGroupUnits, ::System::Collections::Generic::List_1<::Conflict_ConflictModel*>* modelList, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictModel*>* modelDict, ::System::UInt32 conflictGroupID)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::Conflict_NormalGroupNPCIndexKey, ::Conflict_ConflictGroupUnit*>*>*, ::System::Collections::Generic::List_1<::Conflict_ConflictModel*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Conflict_ConflictModel*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + CONFLICT_DISTRIBUTEOTHERFLOORNORMALNPCTOMODEL_OFFSET))(otherFloorNormalGroupUnits, modelList, modelDict, conflictGroupID);
	}

	::System::Void _DistributeUnitToModel()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__DISTRIBUTEUNITTOMODEL_OFFSET))(this);
	}

	::System::Void _OnGroupUnloaded(::System::Object* arg)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CONFLICT__ONGROUPUNLOADED_OFFSET))(this, arg);
	}

	static ::System::Void _UnionHashSet(::System::Collections::Generic::HashSet_1<::System::UInt32>* origin, ::System::Collections::Generic::List_1<::System::UInt32>* other)
	{
		return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CONFLICT__UNIONHASHSET_OFFSET))(origin, other);
	}

	static ::System::Void _UnionHashSet_1(::System::Collections::Generic::HashSet_1<::System::UInt32>* origin, ::System::Collections::Generic::HashSet_1<::System::UInt32>* other)
	{
		return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::System::UInt32>*, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + CONFLICT__UNIONHASHSET_1_OFFSET))(origin, other);
	}

	static ::System::Void _CalculateOtherFloorGroupActiveState_MissionGroup(::Class_1_70A2BED4C4737BFB* floorGroupActiveState, ::System::UInt32 floorID, ::RPG::Client::MapDef* mapDef)
	{
		return ((::System::Void(*)(::Class_1_70A2BED4C4737BFB*, ::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CONFLICT__CALCULATEOTHERFLOORGROUPACTIVESTATE_MISSIONGROUP_OFFSET))(floorGroupActiveState, floorID, mapDef);
	}

	static ::Class_1_70A2BED4C4737BFB* CalculateOtherFloorMissionGroupsActiveState(::System::UInt32 floorID, ::RPG::Client::MapDef* mapDef)
	{
		return ((::Class_1_70A2BED4C4737BFB*(*)(::System::UInt32, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CONFLICT_CALCULATEOTHERFLOORMISSIONGROUPSACTIVESTATE_OFFSET))(floorID, mapDef);
	}

	static ::Class_1_9118D233A02D9925* CalculateOtherFloorMissionGroupsLoadState_PerFloorSpaceConflict(::Class_1_70A2BED4C4737BFB* activeState, ::RPG::Client::MapDef* mapDef)
	{
		return ((::Class_1_9118D233A02D9925*(*)(::Class_1_70A2BED4C4737BFB*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + CONFLICT_CALCULATEOTHERFLOORMISSIONGROUPSLOADSTATE_PERFLOORSPACECONFLICT_OFFSET))(activeState, mapDef);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_9118D233A02D9925*>* CalculateOtherFloorMissionGroupsLoadState_CombineNpcConflict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_9118D233A02D9925*>* loadStatesPerFloor, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapDef*>* floors)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_9118D233A02D9925*>*(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_9118D233A02D9925*>*, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapDef*>*))((::PBYTE)hIl2Cpp + CONFLICT_CALCULATEOTHERFLOORMISSIONGROUPSLOADSTATE_COMBINENPCCONFLICT_OFFSET))(loadStatesPerFloor, floors);
	}

	static ::System::Collections::Generic::List_1<::System::UInt32>* _CollectAllOtherFloorsMainMissions(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapDef*>* floors)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MapDef*>*))((::PBYTE)hIl2Cpp + CONFLICT__COLLECTALLOTHERFLOORSMAINMISSIONS_OFFSET))(floors);
	}

	::System::Void _UpdateConflictView_b__26_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFLICT__UPDATECONFLICTVIEW_B__26_0_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_BA06A5BD139A4E18;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class Stage; }
namespace RPG::Client::OpenWorld { class PVSRuntimeReplayCaseData; }
namespace RPG::GameCore { class IRIFBXLodSizeConfig; }
namespace RPG::GameCore { class LevelFloorBakedInfo; }
namespace RPG::GameCore { class LevelFloorInfo; }
namespace RPG::GameCore { class LodConfig; }
namespace RPG::GameCore { class OptionalBattleAreaConfigTable; }
namespace RPG::GameCore { class OptionalLoadBlocksConfig; }
namespace RPG::GameCore { class SceneConstValueConfig; }
namespace RPG::GameCore { class StageAutoGenConfig; }
namespace RPG::GameCore { class StageBaseConfig; }
namespace RPG::GameCore { class StageConfig; }
namespace RPG::GameCore { class StageLodMapConfig; }
namespace RPG::GameCore { class StagePVSBakeConfig; }
namespace RPG::GameCore { class StagePVSData; }
namespace RPG::GameCore { class StagePVSRuntimeDebugExportData; }
namespace RPG::GameCore { class StageVoxelMetaData; }
namespace RPG::GameCore { class TAMonoTickLodConfig; }
namespace RPG::GameCore { class UnifiedBattleAreaConfig; }
namespace RPG::GameCore { class VolumeConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_STAGEMANAGER_DESTROYSTAGE_OFFSET UNITYSDK_OFFSET(0x161FE830)
#define RPG_CLIENT_STAGEMANAGER_DESTROY_OFFSET UNITYSDK_OFFSET(0x161FE960)
#define RPG_CLIENT_STAGEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x161FEB40)
#define RPG_CLIENT_STAGEMANAGER_EDITORLOADSTAGEPVSBAKECONFIG_OFFSET UNITYSDK_OFFSET(0x161FE270)
#define RPG_CLIENT_STAGEMANAGER_GET_CURRBIGSTAGE_OFFSET UNITYSDK_OFFSET(0x161FED70)
#define RPG_CLIENT_STAGEMANAGER_GET_CURRSTAGE_OFFSET UNITYSDK_OFFSET(0x161FED80)
#define RPG_CLIENT_STAGEMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x161FEB80)
#define RPG_CLIENT_STAGEMANAGER_GET_NORMDISTANCELODTEMPLATECONFIG_OFFSET UNITYSDK_OFFSET(0x161FCD40)
#define RPG_CLIENT_STAGEMANAGER_GET_SCENECONSTVALUE_OFFSET UNITYSDK_OFFSET(0x161FCFC0)
#define RPG_CLIENT_STAGEMANAGER_GET_SCENELODTEMPLATECONFIG_OFFSET UNITYSDK_OFFSET(0x161FCBB0)
#define RPG_CLIENT_STAGEMANAGER_GET_TAMONOTICKLODCONFIG_OFFSET UNITYSDK_OFFSET(0x161FCE30)
#define RPG_CLIENT_STAGEMANAGER_LOADBATTLEAREACONFIG_OFFSET UNITYSDK_OFFSET(0x161FE130)
#define RPG_CLIENT_STAGEMANAGER_LOADIRIFBXLODSIZECONFIG_OFFSET UNITYSDK_OFFSET(0x161FD150)
#define RPG_CLIENT_STAGEMANAGER_LOADLODCONFIG_OFFSET UNITYSDK_OFFSET(0x161FCCA0)
#define RPG_CLIENT_STAGEMANAGER_LOADOPTIONALBATTLEAREACONFIGTABLE_OFFSET UNITYSDK_OFFSET(0x161FDD60)
#define RPG_CLIENT_STAGEMANAGER_LOADOPTIONALLOADBLOCKSCONFIG_OFFSET UNITYSDK_OFFSET(0x161FDCC0)
#define RPG_CLIENT_STAGEMANAGER_LOADPVSMETACONFIG_OFFSET UNITYSDK_OFFSET(0x161FDEE0)
#define RPG_CLIENT_STAGEMANAGER_LOADSCENECONSTVALUECONFIG_OFFSET UNITYSDK_OFFSET(0x161FD0B0)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGEAUTOGENCONFIG_OFFSET UNITYSDK_OFFSET(0x161FD340)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGEBASECONFIG_OFFSET UNITYSDK_OFFSET(0x161FD2A0)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGEBYFLOORINFO_OFFSET UNITYSDK_OFFSET(0x161FE330)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGEBYMAPDEF_OFFSET UNITYSDK_OFFSET(0x161FE3D0)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGEBYPATH_OFFSET UNITYSDK_OFFSET(0x161FEE00)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGECONFIG_OFFSET UNITYSDK_OFFSET(0x161FD250)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGELODMAPCONFIGBYSTAGEDIR_OFFSET UNITYSDK_OFFSET(0x161FD5F0)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGELODMAPCONFIG_OFFSET UNITYSDK_OFFSET(0x161FD440)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGEPVSRUNTIMEDEBUGEXPORTDATA_OFFSET UNITYSDK_OFFSET(0x161FE090)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGEPVSRUNTIMEREPLAYCASEDATA_OFFSET UNITYSDK_OFFSET(0x161FE0E0)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGEVOXELMETADATA_OFFSET UNITYSDK_OFFSET(0x161FDF80)
#define RPG_CLIENT_STAGEMANAGER_LOADSTAGE_OFFSET UNITYSDK_OFFSET(0x161FE5D0)
#define RPG_CLIENT_STAGEMANAGER_LOADTAMONOTICKLODCONFIG_OFFSET UNITYSDK_OFFSET(0x161FCF20)
#define RPG_CLIENT_STAGEMANAGER_LOADVOLUMECONFIG_OFFSET UNITYSDK_OFFSET(0x161FDE00)
#define RPG_CLIENT_STAGEMANAGER_SETCURRSTAGE_OFFSET UNITYSDK_OFFSET(0x161FEC60)
#define RPG_CLIENT_STAGEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x161FE2B0)

namespace RPG::Client
{
	inline static constexpr unsigned int StageManager_TypeDefinitionIndex = 64056;

	class StageManager : public ::System::Object
	{
	public:
		static ::RPG::Client::StageManager** StaticGet__instance()
		{
			return (::RPG::Client::StageManager**)Il2CppClass::FromTypeDefinitionIndex(StageManager_TypeDefinitionIndex)->GetStaticField(0x3F4A0);
		}
		::RPG::GameCore::TAMonoTickLodConfig* _TAMonoTickLodConfig; // 0x10
		::RPG::GameCore::SceneConstValueConfig* _SceneConstValue; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_2_BA06A5BD139A4E18*>* _dicStages; // 0x20
		::RPG::GameCore::LodConfig* _NormDistanceLodTemplateConfig; // 0x28
		::RPG::GameCore::LodConfig* _SceneLodTemplateConfig; // 0x30
		::Class_2_BA06A5BD139A4E18* _CurrStage; // 0x38
		::Class_2_BA06A5BD139A4E18* CacheCurrStage; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LodConfig* get_SceneLodTemplateConfig()
		{
			return ((::RPG::GameCore::LodConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_GET_SCENELODTEMPLATECONFIG_OFFSET))(this);
		}

		::RPG::GameCore::LodConfig* get_NormDistanceLodTemplateConfig()
		{
			return ((::RPG::GameCore::LodConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_GET_NORMDISTANCELODTEMPLATECONFIG_OFFSET))(this);
		}

		::RPG::GameCore::TAMonoTickLodConfig* get_TAMonoTickLodConfig()
		{
			return ((::RPG::GameCore::TAMonoTickLodConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_GET_TAMONOTICKLODCONFIG_OFFSET))(this);
		}

		::RPG::GameCore::SceneConstValueConfig* get_SceneConstValue()
		{
			return ((::RPG::GameCore::SceneConstValueConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_GET_SCENECONSTVALUE_OFFSET))(this);
		}

		static ::RPG::GameCore::IRIFBXLodSizeConfig* LoadIRIFBXLodSizeConfig(::System::String* jsonPath)
		{
			return ((::RPG::GameCore::IRIFBXLodSizeConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADIRIFBXLODSIZECONFIG_OFFSET))(jsonPath);
		}

		static ::RPG::GameCore::StageConfig* LoadStageConfig(::System::String* jsonPath)
		{
			return ((::RPG::GameCore::StageConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGECONFIG_OFFSET))(jsonPath);
		}

		static ::RPG::GameCore::StageBaseConfig* LoadStageBaseConfig(::System::String* jsonPath)
		{
			return ((::RPG::GameCore::StageBaseConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGEBASECONFIG_OFFSET))(jsonPath);
		}

		static ::RPG::GameCore::StageAutoGenConfig* LoadStageAutoGenConfig(::System::String* jsonPath)
		{
			return ((::RPG::GameCore::StageAutoGenConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGEAUTOGENCONFIG_OFFSET))(jsonPath);
		}

		static ::RPG::GameCore::LodConfig* LoadLodConfig(::System::String* jsonPath)
		{
			return ((::RPG::GameCore::LodConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADLODCONFIG_OFFSET))(jsonPath);
		}

		static ::RPG::GameCore::TAMonoTickLodConfig* LoadTAMonoTickLodConfig(::System::String* jsonPath)
		{
			return ((::RPG::GameCore::TAMonoTickLodConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADTAMONOTICKLODCONFIG_OFFSET))(jsonPath);
		}

		static ::RPG::GameCore::SceneConstValueConfig* LoadSceneConstValueConfig(::System::String* jsonPath)
		{
			return ((::RPG::GameCore::SceneConstValueConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSCENECONSTVALUECONFIG_OFFSET))(jsonPath);
		}

		static ::RPG::GameCore::StageLodMapConfig* LoadStageLodMapConfig(::System::String* jsonPath)
		{
			return ((::RPG::GameCore::StageLodMapConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGELODMAPCONFIG_OFFSET))(jsonPath);
		}

		static ::RPG::GameCore::StageLodMapConfig* LoadStageLodMapConfigByStageDir(::System::String* stageDir, ::System::Collections::Generic::HashSet_1<::System::String*>*& useAutoLodTemplateItems)
		{
			return ((::RPG::GameCore::StageLodMapConfig*(*)(::System::String*, ::System::Collections::Generic::HashSet_1<::System::String*>*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGELODMAPCONFIGBYSTAGEDIR_OFFSET))(stageDir, useAutoLodTemplateItems);
		}

		static ::RPG::GameCore::OptionalLoadBlocksConfig* LoadOptionalLoadBlocksConfig(::System::String* jsonPath)
		{
			return ((::RPG::GameCore::OptionalLoadBlocksConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADOPTIONALLOADBLOCKSCONFIG_OFFSET))(jsonPath);
		}

		static ::RPG::GameCore::OptionalBattleAreaConfigTable* LoadOptionalBattleAreaConfigTable(::System::String* jsonPath)
		{
			return ((::RPG::GameCore::OptionalBattleAreaConfigTable*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADOPTIONALBATTLEAREACONFIGTABLE_OFFSET))(jsonPath);
		}

		static ::RPG::GameCore::VolumeConfig* LoadVolumeConfig(::System::String* jsonPath, ::System::Boolean ignoreError)
		{
			return ((::RPG::GameCore::VolumeConfig*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADVOLUMECONFIG_OFFSET))(jsonPath, ignoreError);
		}

		static ::RPG::GameCore::StagePVSData* LoadPVSMetaConfig(::System::String* jsonPath)
		{
			return ((::RPG::GameCore::StagePVSData*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADPVSMETACONFIG_OFFSET))(jsonPath);
		}

		static ::RPG::GameCore::StageVoxelMetaData* LoadStageVoxelMetaData(::System::String* jsonPath, ::System::Boolean ignoreError)
		{
			return ((::RPG::GameCore::StageVoxelMetaData*(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGEVOXELMETADATA_OFFSET))(jsonPath, ignoreError);
		}

		::RPG::GameCore::StagePVSRuntimeDebugExportData* LoadStagePVSRuntimeDebugExportData(::System::String* stageName)
		{
			return ((::RPG::GameCore::StagePVSRuntimeDebugExportData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGEPVSRUNTIMEDEBUGEXPORTDATA_OFFSET))(this, stageName);
		}

		::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData* LoadStagePVSRuntimeReplayCaseData(::System::String* stageName)
		{
			return ((::RPG::Client::OpenWorld::PVSRuntimeReplayCaseData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGEPVSRUNTIMEREPLAYCASEDATA_OFFSET))(this, stageName);
		}

		static ::RPG::GameCore::UnifiedBattleAreaConfig* LoadBattleAreaConfig(::System::UInt32 unifiedBattleAreaId, ::System::Boolean useLevelEditorCache)
		{
			return ((::RPG::GameCore::UnifiedBattleAreaConfig*(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADBATTLEAREACONFIG_OFFSET))(unifiedBattleAreaId, useLevelEditorCache);
		}

		static ::RPG::GameCore::StagePVSBakeConfig* EditorLoadStagePVSBakeConfig()
		{
			return ((::RPG::GameCore::StagePVSBakeConfig*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_EDITORLOADSTAGEPVSBAKECONFIG_OFFSET))();
		}

		::Class_2_BA06A5BD139A4E18* LoadStageByFloorInfo(::RPG::GameCore::LevelFloorInfo* floorInfo, ::RPG::GameCore::LevelFloorBakedInfo* floorBakedInfo, ::System::UInt32 dimensionID)
		{
			return ((::Class_2_BA06A5BD139A4E18*(*)(::PVOID, ::RPG::GameCore::LevelFloorInfo*, ::RPG::GameCore::LevelFloorBakedInfo*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGEBYFLOORINFO_OFFSET))(this, floorInfo, floorBakedInfo, dimensionID);
		}

		::Class_2_BA06A5BD139A4E18* LoadStageByMapDef(::RPG::Client::MapDef* mapDef)
		{
			return ((::Class_2_BA06A5BD139A4E18*(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGEBYMAPDEF_OFFSET))(this, mapDef);
		}

		::Class_2_BA06A5BD139A4E18* LoadStage(::System::String* floorID, ::System::UInt32 dimensionID, ::System::String* strName, ::System::String* strNavmeshPath, ::System::String* strNavmeshLargeMonsterDataPath, ::System::String* dir)
		{
			return ((::Class_2_BA06A5BD139A4E18*(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGE_OFFSET))(this, floorID, dimensionID, strName, strNavmeshPath, strNavmeshLargeMonsterDataPath, dir);
		}

		::System::Void DestroyStage(::System::String* floorID, ::System::UInt32 dimensionID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_DESTROYSTAGE_OFFSET))(this, floorID, dimensionID);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_DESTROY_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_DISPOSE_OFFSET))(this);
		}

		static ::RPG::Client::StageManager* get_Instance()
		{
			return ((::RPG::Client::StageManager*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void SetCurrStage(::Class_2_BA06A5BD139A4E18* stage, ::System::Boolean onlyBattle)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_BA06A5BD139A4E18*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_SETCURRSTAGE_OFFSET))(this, stage, onlyBattle);
		}

		::Class_2_BA06A5BD139A4E18* get_CurrBigStage()
		{
			return ((::Class_2_BA06A5BD139A4E18*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_GET_CURRBIGSTAGE_OFFSET))(this);
		}

		::RPG::Client::Stage* get_CurrStage()
		{
			return ((::RPG::Client::Stage*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_GET_CURRSTAGE_OFFSET))(this);
		}

		::Class_2_BA06A5BD139A4E18* LoadStageByPath(::System::String* strJsonPath, ::System::String* strNavmeshPath, ::System::String* strNavmeshLargeMonsterDataPath)
		{
			return ((::Class_2_BA06A5BD139A4E18*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEMANAGER_LOADSTAGEBYPATH_OFFSET))(this, strJsonPath, strNavmeshPath, strNavmeshLargeMonsterDataPath);
		}
	};
}

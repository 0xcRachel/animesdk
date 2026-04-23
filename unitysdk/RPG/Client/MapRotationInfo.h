#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WorldShiftingReason.h"
#include "unitysdk/Struct_2_313DB38E01B148C7.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::GameCore { class MapRotationAirlockConfig; }
namespace RPG::GameCore { class MapRotationConfig; }
namespace RPG::GameCore { class MapRotationGroupConfig; }
namespace RPG::GameCore { class MapRotationVolumeConfig; }
namespace RPG::GameCore { class RotatableRegion; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_MAPROTATIONINFO_COMPUTEROTATIONBYYAWONPOSE_OFFSET UNITYSDK_OFFSET(0x16F4D670)
#define RPG_CLIENT_MAPROTATIONINFO_COMPUTETARGETROTATION_OFFSET UNITYSDK_OFFSET(0x16F4D2C0)
#define RPG_CLIENT_MAPROTATIONINFO_GETCURRENTPOSEINITROTATION_OFFSET UNITYSDK_OFFSET(0x16F4D870)
#define RPG_CLIENT_MAPROTATIONINFO_GETOPPOSITEPOSE_OFFSET UNITYSDK_OFFSET(0x16F4D9F0)
#define RPG_CLIENT_MAPROTATIONINFO_GETPOSEFROMGROUPID_OFFSET UNITYSDK_OFFSET(0x16F4DC00)
#define RPG_CLIENT_MAPROTATIONINFO_GETPOSEINITROTATION_OFFSET UNITYSDK_OFFSET(0x16F4D8F0)
#define RPG_CLIENT_MAPROTATIONINFO_GETPOSEUPVECTOR_OFFSET UNITYSDK_OFFSET(0x16F4D440)
#define RPG_CLIENT_MAPROTATIONINFO_GETREGIONCONFIG_OFFSET UNITYSDK_OFFSET(0x16F4DB70)
#define RPG_CLIENT_MAPROTATIONINFO_GETROTATABLEREGIONBYSTAGEREGION_OFFSET UNITYSDK_OFFSET(0x16F4DCF0)
#define RPG_CLIENT_MAPROTATIONINFO_GETSTAGEREGIONBYROTATABLEREGION_OFFSET UNITYSDK_OFFSET(0x16F4DD90)
#define RPG_CLIENT_MAPROTATIONINFO_GET_AIRLOCKCONFIGS_OFFSET UNITYSDK_OFFSET(0x16F4B760)
#define RPG_CLIENT_MAPROTATIONINFO_GET_CHARGERCONFIGS_OFFSET UNITYSDK_OFFSET(0x16F4B740)
#define RPG_CLIENT_MAPROTATIONINFO_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x16F4B670)
#define RPG_CLIENT_MAPROTATIONINFO_GET_CURRENTMAPOFFSET_OFFSET UNITYSDK_OFFSET(0x16F4B5F0)
#define RPG_CLIENT_MAPROTATIONINFO_GET_CURRENTPOSEINDEX_OFFSET UNITYSDK_OFFSET(0x16F4B5B0)
#define RPG_CLIENT_MAPROTATIONINFO_GET_CURRENTREGIONINDEX_OFFSET UNITYSDK_OFFSET(0x16F4B680)
#define RPG_CLIENT_MAPROTATIONINFO_GET_CURRENTROTATION_OFFSET UNITYSDK_OFFSET(0x16F4B5D0)
#define RPG_CLIENT_MAPROTATIONINFO_GET_GROUPCONFIGS_OFFSET UNITYSDK_OFFSET(0x16F4B780)
#define RPG_CLIENT_MAPROTATIONINFO_GET_GROUPIDTOMAPPOSE_OFFSET UNITYSDK_OFFSET(0x16F4B6C0)
#define RPG_CLIENT_MAPROTATIONINFO_GET_ISALLVOLUMEALWAYSDEPLOY_OFFSET UNITYSDK_OFFSET(0x16F4B650)
#define RPG_CLIENT_MAPROTATIONINFO_GET_MAPPOSETOGROUP_OFFSET UNITYSDK_OFFSET(0x16F4B6A0)
#define RPG_CLIENT_MAPROTATIONINFO_GET_POSEPERMANENTGROUPS_OFFSET UNITYSDK_OFFSET(0x16F4B700)
#define RPG_CLIENT_MAPROTATIONINFO_GET_REGIONCONFIG_OFFSET UNITYSDK_OFFSET(0x16F4B630)
#define RPG_CLIENT_MAPROTATIONINFO_GET_REGIONTOGROUP_OFFSET UNITYSDK_OFFSET(0x16F4B6E0)
#define RPG_CLIENT_MAPROTATIONINFO_GET_ROTATABLEREGIONTOSTAGEREGION_OFFSET UNITYSDK_OFFSET(0x16F4B7C0)
#define RPG_CLIENT_MAPROTATIONINFO_GET_STAGEREGIONTOROTATABLEREGION_OFFSET UNITYSDK_OFFSET(0x16F4B7A0)
#define RPG_CLIENT_MAPROTATIONINFO_GET_VOLUMECONFIGS_OFFSET UNITYSDK_OFFSET(0x16F4B720)
#define RPG_CLIENT_MAPROTATIONINFO_HANDLEWORLDSHIFT_OFFSET UNITYSDK_OFFSET(0x16F4DA90)
#define RPG_CLIENT_MAPROTATIONINFO_ISPOSEPERMANENTGROUP_OFFSET UNITYSDK_OFFSET(0x16F4DC90)
#define RPG_CLIENT_MAPROTATIONINFO_SETCURRENTACTIVEREGION_OFFSET UNITYSDK_OFFSET(0x16F4D1C0)
#define RPG_CLIENT_MAPROTATIONINFO_SETCURRENTPOSE_OFFSET UNITYSDK_OFFSET(0x16F4B950)
#define RPG_CLIENT_MAPROTATIONINFO_SET_AIRLOCKCONFIGS_OFFSET UNITYSDK_OFFSET(0x16F4B770)
#define RPG_CLIENT_MAPROTATIONINFO_SET_CHARGERCONFIGS_OFFSET UNITYSDK_OFFSET(0x16F4B750)
#define RPG_CLIENT_MAPROTATIONINFO_SET_CURRENTMAPOFFSET_OFFSET UNITYSDK_OFFSET(0x16F4B610)
#define RPG_CLIENT_MAPROTATIONINFO_SET_CURRENTPOSEINDEX_OFFSET UNITYSDK_OFFSET(0x16F4B5C0)
#define RPG_CLIENT_MAPROTATIONINFO_SET_CURRENTREGIONINDEX_OFFSET UNITYSDK_OFFSET(0x16F4B690)
#define RPG_CLIENT_MAPROTATIONINFO_SET_CURRENTROTATION_OFFSET UNITYSDK_OFFSET(0x16F4B5E0)
#define RPG_CLIENT_MAPROTATIONINFO_SET_GROUPCONFIGS_OFFSET UNITYSDK_OFFSET(0x16F4B790)
#define RPG_CLIENT_MAPROTATIONINFO_SET_GROUPIDTOMAPPOSE_OFFSET UNITYSDK_OFFSET(0x16F4B6D0)
#define RPG_CLIENT_MAPROTATIONINFO_SET_ISALLVOLUMEALWAYSDEPLOY_OFFSET UNITYSDK_OFFSET(0x16F4B660)
#define RPG_CLIENT_MAPROTATIONINFO_SET_MAPPOSETOGROUP_OFFSET UNITYSDK_OFFSET(0x16F4B6B0)
#define RPG_CLIENT_MAPROTATIONINFO_SET_POSEPERMANENTGROUPS_OFFSET UNITYSDK_OFFSET(0x16F4B710)
#define RPG_CLIENT_MAPROTATIONINFO_SET_REGIONCONFIG_OFFSET UNITYSDK_OFFSET(0x16F4B640)
#define RPG_CLIENT_MAPROTATIONINFO_SET_REGIONTOGROUP_OFFSET UNITYSDK_OFFSET(0x16F4B6F0)
#define RPG_CLIENT_MAPROTATIONINFO_SET_ROTATABLEREGIONTOSTAGEREGION_OFFSET UNITYSDK_OFFSET(0x16F4B7D0)
#define RPG_CLIENT_MAPROTATIONINFO_SET_STAGEREGIONTOROTATABLEREGION_OFFSET UNITYSDK_OFFSET(0x16F4B7B0)
#define RPG_CLIENT_MAPROTATIONINFO_SET_VOLUMECONFIGS_OFFSET UNITYSDK_OFFSET(0x16F4B730)
#define RPG_CLIENT_MAPROTATIONINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F4DE30)
#define RPG_CLIENT_MAPROTATIONINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16F4B7E0)
#define RPG_CLIENT_MAPROTATIONINFO__INITAIRLOCKCONFIGS_OFFSET UNITYSDK_OFFSET(0x16F4C5D0)
#define RPG_CLIENT_MAPROTATIONINFO__INITCHARGERCONFIGS_OFFSET UNITYSDK_OFFSET(0x16F4C430)
#define RPG_CLIENT_MAPROTATIONINFO__INITGROUPCONFIGS_OFFSET UNITYSDK_OFFSET(0x16F4CD50)
#define RPG_CLIENT_MAPROTATIONINFO__INITMAPPOSETOGROUP_OFFSET UNITYSDK_OFFSET(0x16F4B9E0)
#define RPG_CLIENT_MAPROTATIONINFO__INITPOSEPERMANENTGROUPS_OFFSET UNITYSDK_OFFSET(0x16F4C800)
#define RPG_CLIENT_MAPROTATIONINFO__INITREGIONTOGROUP_OFFSET UNITYSDK_OFFSET(0x16F4C9D0)
#define RPG_CLIENT_MAPROTATIONINFO__INITSTAGEREGIONMAPPING_OFFSET UNITYSDK_OFFSET(0x16F4CFE0)
#define RPG_CLIENT_MAPROTATIONINFO__INITVOLUMECONFIGS_OFFSET UNITYSDK_OFFSET(0x16F4C200)

namespace RPG::Client
{
	inline static constexpr unsigned int MapRotationInfo_TypeDefinitionIndex = 57335;

	class MapRotationInfo : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Struct_2_313DB38E01B148C7>** StaticGet_s_Poses()
		{
			return (::Il2CppArray<::Struct_2_313DB38E01B148C7>**)Il2CppClass::FromTypeDefinitionIndex(MapRotationInfo_TypeDefinitionIndex)->GetStaticField(0x52E00);
		}
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* _StageRegionToRotatableRegion_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::MapRotationVolumeConfig*>* _VolumeConfigs_k__BackingField; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationGroupConfig*>* _GroupConfigs_k__BackingField; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _PosePermanentGroups_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* _RegionToGroup_k__BackingField; // 0x30
		::RPG::GameCore::MapRotationConfig* _Config_k__BackingField; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* _MapPoseToGroup_k__BackingField; // 0x40
		::RPG::GameCore::RotatableRegion* _RegionConfig_k__BackingField; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* _RotatableRegionToStageRegion_k__BackingField; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* _ChargerConfigs_k__BackingField; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationAirlockConfig*>* _AirlockConfigs_k__BackingField; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* _GroupIDToMapPose_k__BackingField; // 0x68
		::UnityEngine::Quaternion _CurrentRotation_k__BackingField; // 0x70
		::System::UInt32 _CurrentPoseIndex_k__BackingField; // 0x80
		::System::Boolean _IsAllVolumeAlwaysDeploy_k__BackingField; // 0x84
		::System::Int32 _CurrentRegionIndex_k__BackingField; // 0x88
		::UnityEngine::Vector3 _CurrentMapOffset_k__BackingField; // 0x8C

		::System::Void _ctor(::RPG::GameCore::MapRotationConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MapRotationConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO__CTOR_OFFSET))(this, config);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO__CCTOR_OFFSET))();
		}

		::System::UInt32 get_CurrentPoseIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_CURRENTPOSEINDEX_OFFSET))(this);
		}

		::System::Void set_CurrentPoseIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_CURRENTPOSEINDEX_OFFSET))(this, value);
		}

		::UnityEngine::Quaternion get_CurrentRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_CURRENTROTATION_OFFSET))(this);
		}

		::System::Void set_CurrentRotation(::UnityEngine::Quaternion value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_CURRENTROTATION_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_CurrentMapOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_CURRENTMAPOFFSET_OFFSET))(this);
		}

		::System::Void set_CurrentMapOffset(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_CURRENTMAPOFFSET_OFFSET))(this, value);
		}

		::RPG::GameCore::RotatableRegion* get_RegionConfig()
		{
			return ((::RPG::GameCore::RotatableRegion*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_REGIONCONFIG_OFFSET))(this);
		}

		::System::Void set_RegionConfig(::RPG::GameCore::RotatableRegion* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RotatableRegion*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_REGIONCONFIG_OFFSET))(this, value);
		}

		::System::Boolean get_IsAllVolumeAlwaysDeploy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_ISALLVOLUMEALWAYSDEPLOY_OFFSET))(this);
		}

		::System::Void set_IsAllVolumeAlwaysDeploy(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_ISALLVOLUMEALWAYSDEPLOY_OFFSET))(this, value);
		}

		::RPG::GameCore::MapRotationConfig* get_Config()
		{
			return ((::RPG::GameCore::MapRotationConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_CONFIG_OFFSET))(this);
		}

		::System::Int32 get_CurrentRegionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_CURRENTREGIONINDEX_OFFSET))(this);
		}

		::System::Void set_CurrentRegionIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_CURRENTREGIONINDEX_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* get_MapPoseToGroup()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_MAPPOSETOGROUP_OFFSET))(this);
		}

		::System::Void set_MapPoseToGroup(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_MAPPOSETOGROUP_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_GroupIDToMapPose()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_GROUPIDTOMAPPOSE_OFFSET))(this);
		}

		::System::Void set_GroupIDToMapPose(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_GROUPIDTOMAPPOSE_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* get_RegionToGroup()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_REGIONTOGROUP_OFFSET))(this);
		}

		::System::Void set_RegionToGroup(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_REGIONTOGROUP_OFFSET))(this, value);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* get_PosePermanentGroups()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_POSEPERMANENTGROUPS_OFFSET))(this);
		}

		::System::Void set_PosePermanentGroups(::System::Collections::Generic::HashSet_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_POSEPERMANENTGROUPS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::MapRotationVolumeConfig*>* get_VolumeConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::MapRotationVolumeConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_VOLUMECONFIGS_OFFSET))(this);
		}

		::System::Void set_VolumeConfigs(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::MapRotationVolumeConfig*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::RPG::GameCore::MapRotationVolumeConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_VOLUMECONFIGS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* get_ChargerConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_CHARGERCONFIGS_OFFSET))(this);
		}

		::System::Void set_ChargerConfigs(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_CHARGERCONFIGS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationAirlockConfig*>* get_AirlockConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationAirlockConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_AIRLOCKCONFIGS_OFFSET))(this);
		}

		::System::Void set_AirlockConfigs(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationAirlockConfig*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationAirlockConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_AIRLOCKCONFIGS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationGroupConfig*>* get_GroupConfigs()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationGroupConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_GROUPCONFIGS_OFFSET))(this);
		}

		::System::Void set_GroupConfigs(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationGroupConfig*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MapRotationGroupConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_GROUPCONFIGS_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* get_StageRegionToRotatableRegion()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_STAGEREGIONTOROTATABLEREGION_OFFSET))(this);
		}

		::System::Void set_StageRegionToRotatableRegion(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_STAGEREGIONTOROTATABLEREGION_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* get_RotatableRegionToStageRegion()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GET_ROTATABLEREGIONTOSTAGEREGION_OFFSET))(this);
		}

		::System::Void set_RotatableRegionToStageRegion(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SET_ROTATABLEREGIONTOSTAGEREGION_OFFSET))(this, value);
		}

		::System::Void SetCurrentPose(::System::UInt32 poseIndex, ::UnityEngine::Quaternion mapRotation, ::UnityEngine::Vector3 mapOffset)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SETCURRENTPOSE_OFFSET))(this, poseIndex, mapRotation, mapOffset);
		}

		::UnityEngine::Quaternion ComputeTargetRotation(::System::UInt32 poseIndex)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_COMPUTETARGETROTATION_OFFSET))(this, poseIndex);
		}

		static ::UnityEngine::Quaternion ComputeRotationByYawOnPose(::System::Single yaw, ::System::UInt32 poseID)
		{
			return ((::UnityEngine::Quaternion(*)(::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_COMPUTEROTATIONBYYAWONPOSE_OFFSET))(yaw, poseID);
		}

		::UnityEngine::Quaternion GetCurrentPoseInitRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GETCURRENTPOSEINITROTATION_OFFSET))(this);
		}

		static ::UnityEngine::Quaternion GetPoseInitRotation(::System::UInt32 poseID)
		{
			return ((::UnityEngine::Quaternion(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GETPOSEINITROTATION_OFFSET))(poseID);
		}

		static ::UnityEngine::Vector3 GetPoseUpVector(::System::UInt32 poseIndex)
		{
			return ((::UnityEngine::Vector3(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GETPOSEUPVECTOR_OFFSET))(poseIndex);
		}

		static ::System::UInt32 GetOppositePose(::System::UInt32 poseIndex)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GETOPPOSITEPOSE_OFFSET))(poseIndex);
		}

		::System::Void SetCurrentActiveRegion(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_SETCURRENTACTIVEREGION_OFFSET))(this, index);
		}

		::System::Void HandleWorldShift(::UnityEngine::Vector3 newOrigin, ::UnityEngine::Vector3 oldOrigin, ::UnityEngine::Quaternion newRotation, ::UnityEngine::Quaternion oldRotation, ::RPG::Client::WorldShiftingReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::RPG::Client::WorldShiftingReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_HANDLEWORLDSHIFT_OFFSET))(this, newOrigin, oldOrigin, newRotation, oldRotation, reason);
		}

		::RPG::GameCore::RotatableRegion* GetRegionConfig(::System::UInt32 regionIndex)
		{
			return ((::RPG::GameCore::RotatableRegion*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GETREGIONCONFIG_OFFSET))(this, regionIndex);
		}

		::System::UInt32 GetPoseFromGroupID(::System::UInt32 groupID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GETPOSEFROMGROUPID_OFFSET))(this, groupID);
		}

		::System::Boolean IsPosePermanentGroup(::System::UInt32 groupID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_ISPOSEPERMANENTGROUP_OFFSET))(this, groupID);
		}

		::System::Int32 GetRotatableRegionByStageRegion(::System::UInt32 stageRegionID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GETROTATABLEREGIONBYSTAGEREGION_OFFSET))(this, stageRegionID);
		}

		::System::UInt32 GetStageRegionByRotatableRegion(::System::Int32 rotatableRegionID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO_GETSTAGEREGIONBYROTATABLEREGION_OFFSET))(this, rotatableRegionID);
		}

		::System::Void _InitMapPoseToGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO__INITMAPPOSETOGROUP_OFFSET))(this);
		}

		::System::Void _InitRegionToGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO__INITREGIONTOGROUP_OFFSET))(this);
		}

		::System::Void _InitPosePermanentGroups()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO__INITPOSEPERMANENTGROUPS_OFFSET))(this);
		}

		::System::Void _InitVolumeConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO__INITVOLUMECONFIGS_OFFSET))(this);
		}

		::System::Void _InitChargerConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO__INITCHARGERCONFIGS_OFFSET))(this);
		}

		::System::Void _InitAirlockConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO__INITAIRLOCKCONFIGS_OFFSET))(this);
		}

		::System::Void _InitGroupConfigs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO__INITGROUPCONFIGS_OFFSET))(this);
		}

		::System::Void _InitStageRegionMapping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPROTATIONINFO__INITSTAGEREGIONMAPPING_OFFSET))(this);
		}
	};
}

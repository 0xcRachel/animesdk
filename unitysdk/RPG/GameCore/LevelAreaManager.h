#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_265;
class Class_1_004034A1FAAF468A;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace Cinemachine { class ICinemachineCamera; }
namespace RPG::Client { class IAssetOperation; }
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class LevelAnchorInfo; }
namespace RPG::GameCore { class LevelAreaActiveVirtualCameraParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_LEVELAREAMANAGER_ACQUIREACTIVEVCAMPARAM_OFFSET UNITYSDK_OFFSET(0xF2A0000)
#define RPG_GAMECORE_LEVELAREAMANAGER_ACTIVEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xF29E6A0)
#define RPG_GAMECORE_LEVELAREAMANAGER_ADDGROUPAREA_OFFSET UNITYSDK_OFFSET(0xF29C210)
#define RPG_GAMECORE_LEVELAREAMANAGER_ADDLEVELAREAASYNC_OFFSET UNITYSDK_OFFSET(0xF29CC50)
#define RPG_GAMECORE_LEVELAREAMANAGER_ADDLEVELAREA_1_OFFSET UNITYSDK_OFFSET(0xF29CDF0)
#define RPG_GAMECORE_LEVELAREAMANAGER_ADDLEVELAREA_OFFSET UNITYSDK_OFFSET(0xF29CCC0)
#define RPG_GAMECORE_LEVELAREAMANAGER_DEACTIVEALLVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xF29F190)
#define RPG_GAMECORE_LEVELAREAMANAGER_DEACTIVECURRENTVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xF29F130)
#define RPG_GAMECORE_LEVELAREAMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF2871E0)
#define RPG_GAMECORE_LEVELAREAMANAGER_FINDANCHOR_OFFSET UNITYSDK_OFFSET(0xF29E2B0)
#define RPG_GAMECORE_LEVELAREAMANAGER_GETACTIVEVIRTUALCAMERATRANSFORMFROMANCHORMAP_OFFSET UNITYSDK_OFFSET(0xF29FD20)
#define RPG_GAMECORE_LEVELAREAMANAGER_GETACTIVEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xF29FB30)
#define RPG_GAMECORE_LEVELAREAMANAGER_GETAREANAMEBYGROUPID_OFFSET UNITYSDK_OFFSET(0xF29DF90)
#define RPG_GAMECORE_LEVELAREAMANAGER_GETCOIN40ANCHOR_OFFSET UNITYSDK_OFFSET(0xF29E410)
#define RPG_GAMECORE_LEVELAREAMANAGER_GETLEVELAREANAMEBYCONFIGPATH_OFFSET UNITYSDK_OFFSET(0xF29CC00)
#define RPG_GAMECORE_LEVELAREAMANAGER_GETLEVELAREAROOTTRANS_OFFSET UNITYSDK_OFFSET(0xF29B700)
#define RPG_GAMECORE_LEVELAREAMANAGER_GETMONSTERCENTERTRANS_OFFSET UNITYSDK_OFFSET(0xF29B930)
#define RPG_GAMECORE_LEVELAREAMANAGER_GET_HASACTIVEVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0xF2A0500)
#define RPG_GAMECORE_LEVELAREAMANAGER_GET_LASTLEVELAREANAME_OFFSET UNITYSDK_OFFSET(0xF2A0130)
#define RPG_GAMECORE_LEVELAREAMANAGER_GET_STAGEGOROOT_OFFSET UNITYSDK_OFFSET(0xF2A0560)
#define RPG_GAMECORE_LEVELAREAMANAGER_HASAREA_OFFSET UNITYSDK_OFFSET(0xF29DF00)
#define RPG_GAMECORE_LEVELAREAMANAGER_REGISTERMAINCAMERAANCHOR_OFFSET UNITYSDK_OFFSET(0xF29DB20)
#define RPG_GAMECORE_LEVELAREAMANAGER_RELEASEACTIVEVCAMPARAM_OFFSET UNITYSDK_OFFSET(0xF2A0070)
#define RPG_GAMECORE_LEVELAREAMANAGER_REMOVELEVELAREA_OFFSET UNITYSDK_OFFSET(0xF29D700)
#define RPG_GAMECORE_LEVELAREAMANAGER_SETBASETRANSFORM_OFFSET UNITYSDK_OFFSET(0xF29FF70)
#define RPG_GAMECORE_LEVELAREAMANAGER_SETLEVELAREAWORLDPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0xF29B750)
#define RPG_GAMECORE_LEVELAREAMANAGER_SETLEVELAREAWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xF29B820)
#define RPG_GAMECORE_LEVELAREAMANAGER_SETLEVELAREAWORLDROTATION_OFFSET UNITYSDK_OFFSET(0xF29B8B0)
#define RPG_GAMECORE_LEVELAREAMANAGER_SETMONSTERCENTERPOSITIONOFFSET_OFFSET UNITYSDK_OFFSET(0xF29BA90)
#define RPG_GAMECORE_LEVELAREAMANAGER_SETMONSTERCENTERWORLDPOSITION_OFFSET UNITYSDK_OFFSET(0xF29B980)
#define RPG_GAMECORE_LEVELAREAMANAGER_SETMONSTERCENTERWORLDROTATION_OFFSET UNITYSDK_OFFSET(0xF29BA10)
#define RPG_GAMECORE_LEVELAREAMANAGER_SET_STAGEGOROOT_OFFSET UNITYSDK_OFFSET(0xF2A0570)
#define RPG_GAMECORE_LEVELAREAMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xF2894F0)
#define RPG_GAMECORE_LEVELAREAMANAGER_TRYFINDANCHORBYGROUPIDANDID_OFFSET UNITYSDK_OFFSET(0xF29E050)
#define RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_B__13_0_OFFSET UNITYSDK_OFFSET(0xF2A0580)
#define RPG_GAMECORE_LEVELAREAMANAGER__ADDWAITTICKDEACTIVEVCAM_OFFSET UNITYSDK_OFFSET(0xF29FAA0)
#define RPG_GAMECORE_LEVELAREAMANAGER__CHECKVCAMDISABLEPROTECTWHENBLENDING_OFFSET UNITYSDK_OFFSET(0xF29BD50)
#define RPG_GAMECORE_LEVELAREAMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xF286610)
#define RPG_GAMECORE_LEVELAREAMANAGER__ISDYNAMICANCHOR_OFFSET UNITYSDK_OFFSET(0xF2A01C0)
#define RPG_GAMECORE_LEVELAREAMANAGER__ONLEVELAREALOADED_OFFSET UNITYSDK_OFFSET(0xF29CED0)
#define RPG_GAMECORE_LEVELAREAMANAGER__REFRESHDYNAMICANCHORINFOLIST_OFFSET UNITYSDK_OFFSET(0xF29BB90)
#define RPG_GAMECORE_LEVELAREAMANAGER__REFRESHDYNAMICANCHORINFO_OFFSET UNITYSDK_OFFSET(0xF2A0240)
#define RPG_GAMECORE_LEVELAREAMANAGER__REMOVEWAITTICKDEACTIVEVCAM_OFFSET UNITYSDK_OFFSET(0xF29F0C0)
#define RPG_GAMECORE_LEVELAREAMANAGER__TICKWAITDEACTIVEVCAM_OFFSET UNITYSDK_OFFSET(0xF29BF10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelAreaManager_TypeDefinitionIndex = 53333;

	class LevelAreaManager : public ::System::Object
	{
	public:
		// static const ::System::Single VIRTUAL_CAMERA_NEAR_CLIP; // 0x0
		// static const ::System::Single VIRTUAL_CAMERA_FAR_CLIP; // 0x0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::AnchorInfo*>*>* _AnchorMap; // 0x10
		::System::Collections::Generic::List_1<::Class_1_004034A1FAAF468A*>* _LevelAreaList; // 0x18
		::System::String* _ActiveVirtualCameraAreaName; // 0x20
		::UnityEngine::GameObject* _StageGORoot_k__BackingField; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* _LookAtCameraTemplateAsset; // 0x30
		::UnityEngine::Transform* _BaseTransform; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* _GroupIDToAreaName; // 0x40
		::UnityEngine::GameObject* _RotatableRegionAnchorGO; // 0x48
		::UnityEngine::GameObject* _MonsterCenterGO; // 0x50
		::UnityEngine::GameObject* _CameraAnchorGO; // 0x58
		::System::Collections::Generic::List_1<::RPG::GameCore::AnchorInfo*>* _WaitDeactiveCamera; // 0x60
		::UnityEngine::GameObject* _LevelAreaGORoot; // 0x68
		::RPG::Client::IAssetOperation* _LoadLevelAreaAssetOpt; // 0x70
		::Cinemachine::ICinemachineCamera* _VCamNeedDisableProtectWhenBlending; // 0x78
		::System::Collections::Generic::Stack_1<::RPG::GameCore::LevelAreaActiveVirtualCameraParam*>* _ActiveVCamParamPool; // 0x80
		::System::Collections::Generic::List_1<::RPG::GameCore::AnchorInfo*>* _DynamicAnchorInfoList; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* GetLevelAreaRootTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GETLEVELAREAROOTTRANS_OFFSET))(this);
		}

		::System::Void SetLevelAreaWorldPositionOffset(::UnityEngine::Vector3 pOffset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_SETLEVELAREAWORLDPOSITIONOFFSET_OFFSET))(this, pOffset);
		}

		::System::Void SetLevelAreaWorldPosition(::UnityEngine::Vector3 pPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_SETLEVELAREAWORLDPOSITION_OFFSET))(this, pPos);
		}

		::System::Void SetLevelAreaWorldRotation(::UnityEngine::Quaternion pRot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_SETLEVELAREAWORLDROTATION_OFFSET))(this, pRot);
		}

		::UnityEngine::Transform* GetMonsterCenterTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GETMONSTERCENTERTRANS_OFFSET))(this);
		}

		::System::Void SetMonsterCenterWorldPosition(::UnityEngine::Vector3 pPos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_SETMONSTERCENTERWORLDPOSITION_OFFSET))(this, pPos);
		}

		::System::Void SetMonsterCenterWorldRotation(::UnityEngine::Quaternion pRot)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_SETMONSTERCENTERWORLDROTATION_OFFSET))(this, pRot);
		}

		::System::Void SetMonsterCenterPositionOffset(::UnityEngine::Vector3 pOffset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_SETMONSTERCENTERPOSITIONOFFSET_OFFSET))(this, pOffset);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single fElapsedTimeInSec)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_TICK_OFFSET))(this, fElapsedTimeInSec);
		}

		::System::String* AddGroupArea(::System::String* areaAnchorName, ::Il2CppArray<::RPG::GameCore::LevelAnchorInfo*>* anchorList, ::System::UInt32 GroupID, ::System::Boolean isInRotatableRegion)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::Il2CppArray<::RPG::GameCore::LevelAnchorInfo*>*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_ADDGROUPAREA_OFFSET))(this, areaAnchorName, anchorList, GroupID, isInRotatableRegion);
		}

		static ::System::String* GetLevelAreaNameByConfigPath(::System::String* ConfigPath)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GETLEVELAREANAMEBYCONFIGPATH_OFFSET))(ConfigPath);
		}

		::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_265*>* AddLevelAreaAsync(::System::String* ConfigPath)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::Class_0_16E4307DCC419505_265*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_ADDLEVELAREAASYNC_OFFSET))(this, ConfigPath);
		}

		::System::String* AddLevelArea(::System::String* ConfigPath, ::System::Boolean isSetLocal)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_ADDLEVELAREA_OFFSET))(this, ConfigPath, isSetLocal);
		}

		::System::String* AddLevelArea_1(::System::String* ConfigPath, ::System::Boolean isSetLocal, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_ADDLEVELAREA_1_OFFSET))(this, ConfigPath, isSetLocal, position, rotation);
		}

		::System::Void RemoveLevelArea(::System::String* areaName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_REMOVELEVELAREA_OFFSET))(this, areaName);
		}

		::System::Boolean RegisterMainCameraAnchor(::System::String* AreaName, ::System::String* AnchorName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_REGISTERMAINCAMERAANCHOR_OFFSET))(this, AreaName, AnchorName);
		}

		::System::Boolean HasArea(::System::String* AreaName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_HASAREA_OFFSET))(this, AreaName);
		}

		::System::String* GetAreaNameByGroupID(::System::UInt32 groupID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GETAREANAMEBYGROUPID_OFFSET))(this, groupID);
		}

		::RPG::GameCore::AnchorInfo* TryFindAnchorByGroupIDAndID(::System::UInt32 groupID, ::System::UInt32 id)
		{
			return ((::RPG::GameCore::AnchorInfo*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_TRYFINDANCHORBYGROUPIDANDID_OFFSET))(this, groupID, id);
		}

		::RPG::GameCore::AnchorInfo* FindAnchor(::System::String* areaName, ::System::String* anchorName)
		{
			return ((::RPG::GameCore::AnchorInfo*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_FINDANCHOR_OFFSET))(this, areaName, anchorName);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::AnchorInfo*>* GetCoin40Anchor(::System::UInt32 groupID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::AnchorInfo*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GETCOIN40ANCHOR_OFFSET))(this, groupID);
		}

		::System::Void ActiveVirtualCamera(::System::String* AreaName, ::System::String* AnchorName, ::UnityEngine::GameObject* FollowTarget, ::UnityEngine::GameObject* LookAtTarget, ::System::Boolean Cut, ::System::Nullable_1<::UnityEngine::Vector2> vCenterPos, ::System::Boolean disableProtectWhenBlending, ::RPG::GameCore::LevelAreaActiveVirtualCameraParam* activeParam)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::GameObject*, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Nullable_1<::UnityEngine::Vector2>, ::System::Boolean, ::RPG::GameCore::LevelAreaActiveVirtualCameraParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_ACTIVEVIRTUALCAMERA_OFFSET))(this, AreaName, AnchorName, FollowTarget, LookAtTarget, Cut, vCenterPos, disableProtectWhenBlending, activeParam);
		}

		::System::Void DeActiveCurrentVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_DEACTIVECURRENTVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void DeActiveAllVirtualCamera(::System::String* AreaName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_DEACTIVEALLVIRTUALCAMERA_OFFSET))(this, AreaName);
		}

		::Cinemachine::CinemachineVirtualCamera* GetActiveVirtualCamera(::System::String* AreaName, ::System::String* AnchorName)
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GETACTIVEVIRTUALCAMERA_OFFSET))(this, AreaName, AnchorName);
		}

		::RPG::GameCore::AnchorInfo* GetActiveVirtualCameraTransformFromAnchorMap(::System::String* AreaName)
		{
			return ((::RPG::GameCore::AnchorInfo*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GETACTIVEVIRTUALCAMERATRANSFORMFROMANCHORMAP_OFFSET))(this, AreaName);
		}

		::System::Void SetBaseTransform(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_SETBASETRANSFORM_OFFSET))(this, transform);
		}

		::RPG::GameCore::LevelAreaActiveVirtualCameraParam* AcquireActiveVCamParam()
		{
			return ((::RPG::GameCore::LevelAreaActiveVirtualCameraParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_ACQUIREACTIVEVCAMPARAM_OFFSET))(this);
		}

		::System::Void ReleaseActiveVCamParam(::RPG::GameCore::LevelAreaActiveVirtualCameraParam* param)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelAreaActiveVirtualCameraParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_RELEASEACTIVEVCAMPARAM_OFFSET))(this, param);
		}

		::System::String* get_LastLevelAreaName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GET_LASTLEVELAREANAME_OFFSET))(this);
		}

		::System::String* _OnLevelAreaLoaded(::UnityEngine::Object* pLevelAreaPrefab, ::System::Boolean isSetLocal, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Object*, ::System::Boolean, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__ONLEVELAREALOADED_OFFSET))(this, pLevelAreaPrefab, isSetLocal, position, rotation);
		}

		::System::Boolean _IsDynamicAnchor(::System::String* anchorName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__ISDYNAMICANCHOR_OFFSET))(this, anchorName);
		}

		::System::Void _RefreshDynamicAnchorInfoList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__REFRESHDYNAMICANCHORINFOLIST_OFFSET))(this);
		}

		::System::Void _RefreshDynamicAnchorInfo(::RPG::GameCore::AnchorInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__REFRESHDYNAMICANCHORINFO_OFFSET))(this, info);
		}

		::System::Void _CheckVCamDisableProtectWhenBlending()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__CHECKVCAMDISABLEPROTECTWHENBLENDING_OFFSET))(this);
		}

		::System::Void _TickWaitDeactiveVCam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__TICKWAITDEACTIVEVCAM_OFFSET))(this);
		}

		::System::Void _AddWaitTickDeactiveVCam(::RPG::GameCore::AnchorInfo* anchorInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__ADDWAITTICKDEACTIVEVCAM_OFFSET))(this, anchorInfo);
		}

		::System::Void _RemoveWaitTickDeactiveVCam(::RPG::GameCore::AnchorInfo* anchorInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__REMOVEWAITTICKDEACTIVEVCAM_OFFSET))(this, anchorInfo);
		}

		::System::Boolean get_HasActiveVirtualCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GET_HASACTIVEVIRTUALCAMERA_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_StageGORoot()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_GET_STAGEGOROOT_OFFSET))(this);
		}

		::System::Void set_StageGORoot(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER_SET_STAGEGOROOT_OFFSET))(this, value);
		}

		::System::Boolean _AddLevelAreaAsync_b__13_0(::RPG::Client::IAssetOperation* assetOpt)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELAREAMANAGER__ADDLEVELAREAASYNC_B__13_0_OFFSET))(this, assetOpt);
		}
	};
}

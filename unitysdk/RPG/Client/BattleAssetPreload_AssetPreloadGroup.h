#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2C2DA62D5BBB20B1_PreloadType.h"
#include "unitysdk/RPG/Client/GameObjectPoolUsage.h"
#include "unitysdk/RPG/Client/PreloadItemFlag.h"
#include "unitysdk/RPG/Client/UpdatePreloadTypeMethod.h"
#include "unitysdk/RPG/GameCore/PreloadGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_2C2DA62D5BBB20B1;
namespace Collections::Pooled { template <typename T1, typename T2> class PooledDictionary_2; }
namespace RPG::Client { class BattleAssetPreload; }
namespace RPG::Client { class BattleAssetPreload_AssetPreloadGroupCreateParam; }
namespace RPG::GameCore { class PreloadItemScoreConfig; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_ADDASSETS_OFFSET UNITYSDK_OFFSET(0x918F2B0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_ADDASSET_OFFSET UNITYSDK_OFFSET(0x918F1E0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_COLLECTITEMSIZE_OFFSET UNITYSDK_OFFSET(0x9190770)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x918CD70)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GETASSETITEMSCORE_OFFSET UNITYSDK_OFFSET(0x918E760)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GETPRELOADITEM_OFFSET UNITYSDK_OFFSET(0x918F060)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x918E1E0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x918E1D0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x918DE70)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x918DCE0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_ISENABLE_OFFSET UNITYSDK_OFFSET(0x918DE60)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_ISLOADINGORLOADED_OFFSET UNITYSDK_OFFSET(0x918DD40)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x918E1F0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_PRELOADMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x918DC70)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_HASITEMOFFLAG_OFFSET UNITYSDK_OFFSET(0x918F770)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x918E2B0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_MAPASSETPATH_OFFSET UNITYSDK_OFFSET(0x918E840)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_MARKNOUSEITEM_OFFSET UNITYSDK_OFFSET(0x91907B0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_ONPRELOADTAGSTAGECHANGE_OFFSET UNITYSDK_OFFSET(0x91905F0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_RECOLLECTRESOURCE_OFFSET UNITYSDK_OFFSET(0x918E4E0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHAFTERENTERADVENTURE_OFFSET UNITYSDK_OFFSET(0x918FF20)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHAFTERENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x9190190)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHBEFOREENTERADVENTURE_OFFSET UNITYSDK_OFFSET(0x918FE70)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHBEFOREENTERBATTLE_OFFSET UNITYSDK_OFFSET(0x91900E0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHBEFORELEAVEADVENTURE_OFFSET UNITYSDK_OFFSET(0x9190050)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHBEFORELEAVEBATTLE_OFFSET UNITYSDK_OFFSET(0x91902A0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHBEFORERESTARTBATTLE_OFFSET UNITYSDK_OFFSET(0x9190240)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHBEFORESWITCHMAP_OFFSET UNITYSDK_OFFSET(0x9190010)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHINADVENTURE_OFFSET UNITYSDK_OFFSET(0x918FFD0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHPRELOADTYPE_OFFSET UNITYSDK_OFFSET(0x918FD70)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REGISTERPRELOADITEM_OFFSET UNITYSDK_OFFSET(0x918E890)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_RELEASERESOURCE_OFFSET UNITYSDK_OFFSET(0x918E550)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REMOVEPRELOADITEMBYFLAG_OFFSET UNITYSDK_OFFSET(0x918F8B0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REMOVEPRELOADITEM_1_OFFSET UNITYSDK_OFFSET(0x918F540)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REMOVEPRELOADITEM_OFFSET UNITYSDK_OFFSET(0x918F3E0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_SETPRELOADTYPEBIAS_OFFSET UNITYSDK_OFFSET(0x918DF10)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x918DE80)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_SET_PRELOADMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x918DC80)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x918E200)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_UPDATEPRELOADTYPEBYFLAG_OFFSET UNITYSDK_OFFSET(0x918FA70)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_UPDATEPRELOADTYPE_OFFSET UNITYSDK_OFFSET(0x918FC40)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__CALREALPRELOADTYPE_OFFSET UNITYSDK_OFFSET(0x918F140)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__COLLECTRESOURCEIMPLFORCOLLECTIONMODE_OFFSET UNITYSDK_OFFSET(0x91903F0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__COLLECTRESOURCEIMPL_OFFSET UNITYSDK_OFFSET(0x91903B0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__CONVERTTOORIGINLOD_OFFSET UNITYSDK_OFFSET(0x9190980)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x9190A30)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__GENITEMNAME_OFFSET UNITYSDK_OFFSET(0x9190900)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__GETSYNCPRELOADITEM_OFFSET UNITYSDK_OFFSET(0x918F5F0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__ONACTIVESTATECHANGE_OFFSET UNITYSDK_OFFSET(0x91905B0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x9190370)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0x9190330)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__ONPRELOADTYPEBIASCHANGE_OFFSET UNITYSDK_OFFSET(0x9190470)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__RELEASERESOURCEIMPL_OFFSET UNITYSDK_OFFSET(0x9190430)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__UPDATEPRELOADTYPEIMPL_OFFSET UNITYSDK_OFFSET(0x918EDA0)
#define RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9190B40)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleAssetPreload_AssetPreloadGroup_TypeDefinitionIndex = 48285;

	class BattleAssetPreload_AssetPreloadGroup : public ::System::Object
	{
	public:
		::RPG::Client::BattleAssetPreload* _Owner; // 0x10
		::Collections::Pooled::PooledDictionary_2<::System::String*, ::Class_1_2C2DA62D5BBB20B1*>* _PreloadItemDict; // 0x18
		::Collections::Pooled::PooledDictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::String*>*>* _SyncPreloadTypeDict; // 0x20
		::RPG::GameCore::PreloadItemScoreConfig* _ItemScoreConfig; // 0x28
		::Collections::Pooled::PooledDictionary_2<::System::String*, ::System::Int32>* _PreloadTypeBiasDict; // 0x30
		::RPG::Client::BattleAssetPreload_AssetPreloadGroupCreateParam* _CreateParamBase; // 0x38
		::System::Int32 _PreloadMultiplier; // 0x40
		::System::Int32 _PreloadTypeBias; // 0x44
		::RPG::GameCore::PreloadGroupType _GroupType; // 0x48
		::System::Boolean _IsActive; // 0x4C
		::System::UInt32 _GroupID; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_PreloadMultiplier()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_PRELOADMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_PreloadMultiplier(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_SET_PRELOADMULTIPLIER_OFFSET))(this, value);
		}

		::System::Boolean get_IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean get_IsLoadingOrLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_ISLOADINGORLOADED_OFFSET))(this);
		}

		::System::Boolean get_IsEnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_ISENABLE_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_SET_ISACTIVE_OFFSET))(this, value);
		}

		::RPG::GameCore::PreloadGroupType get_GroupType()
		{
			return ((::RPG::GameCore::PreloadGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_GROUPTYPE_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_GROUPID_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GET_ISVALID_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_TOSTRING_OFFSET))(this);
		}

		::System::Void Initialize(::RPG::Client::BattleAssetPreload* owner, ::RPG::GameCore::PreloadGroupType groupType, ::System::UInt32 groupID, ::RPG::Client::BattleAssetPreload_AssetPreloadGroupCreateParam* createParam)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BattleAssetPreload*, ::RPG::GameCore::PreloadGroupType, ::System::UInt32, ::RPG::Client::BattleAssetPreload_AssetPreloadGroupCreateParam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_INITIALIZE_OFFSET))(this, owner, groupType, groupID, createParam);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_DISPOSE_OFFSET))(this);
		}

		::System::Single GetAssetItemScore(::System::String* itemProfilerName)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GETASSETITEMSCORE_OFFSET))(this, itemProfilerName);
		}

		::System::String* MapAssetPath(::System::String* originPath)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_MAPASSETPATH_OFFSET))(this, originPath);
		}

		::Class_1_2C2DA62D5BBB20B1* RegisterPreloadItem(::System::String* itemProfilerName, ::RPG::Client::PreloadItemFlag flag, ::Class_1_2C2DA62D5BBB20B1_PreloadType preloadType, ::System::String* preloadTag)
		{
			return ((::Class_1_2C2DA62D5BBB20B1*(*)(::PVOID, ::System::String*, ::RPG::Client::PreloadItemFlag, ::Class_1_2C2DA62D5BBB20B1_PreloadType, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REGISTERPRELOADITEM_OFFSET))(this, itemProfilerName, flag, preloadType, preloadTag);
		}

		::Class_1_2C2DA62D5BBB20B1_PreloadType _CalRealPreloadType(::Class_1_2C2DA62D5BBB20B1_PreloadType preloadType, ::System::Int32 bias, ::System::String* preloadTag)
		{
			return ((::Class_1_2C2DA62D5BBB20B1_PreloadType(*)(::PVOID, ::Class_1_2C2DA62D5BBB20B1_PreloadType, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__CALREALPRELOADTYPE_OFFSET))(this, preloadType, bias, preloadTag);
		}

		::System::Void AddAsset(::Class_1_2C2DA62D5BBB20B1* preloadItem, ::System::String* assetPath, ::System::Single score, ::System::Type* type, ::System::Int32 preloadCnt, ::RPG::Client::GameObjectPoolUsage poolUsage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2C2DA62D5BBB20B1*, ::System::String*, ::System::Single, ::System::Type*, ::System::Int32, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_ADDASSET_OFFSET))(this, preloadItem, assetPath, score, type, preloadCnt, poolUsage);
		}

		::System::Void AddAssets(::Class_1_2C2DA62D5BBB20B1* preloadItem, ::Il2CppArray<::System::String*>* assetPaths, ::System::Single score, ::System::Type* type, ::System::Int32 preloadCnt, ::RPG::Client::GameObjectPoolUsage poolUsage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2C2DA62D5BBB20B1*, ::Il2CppArray<::System::String*>*, ::System::Single, ::System::Type*, ::System::Int32, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_ADDASSETS_OFFSET))(this, preloadItem, assetPaths, score, type, preloadCnt, poolUsage);
		}

		::System::Void RemovePreloadItem(::System::String* itemProfilerName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REMOVEPRELOADITEM_OFFSET))(this, itemProfilerName);
		}

		::System::Void RemovePreloadItem_1(::Class_1_2C2DA62D5BBB20B1* preloadItem)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2C2DA62D5BBB20B1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REMOVEPRELOADITEM_1_OFFSET))(this, preloadItem);
		}

		::Class_1_2C2DA62D5BBB20B1* GetPreloadItem(::System::String* itemProfilerName)
		{
			return ((::Class_1_2C2DA62D5BBB20B1*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_GETPRELOADITEM_OFFSET))(this, itemProfilerName);
		}

		::Class_1_2C2DA62D5BBB20B1* _GetSyncPreloadItem(::System::String* itemProfilerName)
		{
			return ((::Class_1_2C2DA62D5BBB20B1*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__GETSYNCPRELOADITEM_OFFSET))(this, itemProfilerName);
		}

		::System::Boolean HasItemOfFlag(::RPG::Client::PreloadItemFlag flag)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::PreloadItemFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_HASITEMOFFLAG_OFFSET))(this, flag);
		}

		::System::Void RemovePreloadItemByFlag(::RPG::Client::PreloadItemFlag flag)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PreloadItemFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REMOVEPRELOADITEMBYFLAG_OFFSET))(this, flag);
		}

		::System::Void UpdatePreloadTypeByFlag(::RPG::Client::PreloadItemFlag flag, ::Class_1_2C2DA62D5BBB20B1_PreloadType preloadType, ::RPG::Client::UpdatePreloadTypeMethod method, ::System::String* exceptItemName, ::RPG::Client::PreloadItemFlag exceptFlag)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PreloadItemFlag, ::Class_1_2C2DA62D5BBB20B1_PreloadType, ::RPG::Client::UpdatePreloadTypeMethod, ::System::String*, ::RPG::Client::PreloadItemFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_UPDATEPRELOADTYPEBYFLAG_OFFSET))(this, flag, preloadType, method, exceptItemName, exceptFlag);
		}

		::System::Void UpdatePreloadType(::System::String* itemProfilerName, ::Class_1_2C2DA62D5BBB20B1_PreloadType preloadType, ::RPG::Client::UpdatePreloadTypeMethod method)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_2C2DA62D5BBB20B1_PreloadType, ::RPG::Client::UpdatePreloadTypeMethod))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_UPDATEPRELOADTYPE_OFFSET))(this, itemProfilerName, preloadType, method);
		}

		::System::Void _UpdatePreloadTypeImpl(::Class_1_2C2DA62D5BBB20B1* preloadItem, ::Class_1_2C2DA62D5BBB20B1_PreloadType preloadType, ::RPG::Client::UpdatePreloadTypeMethod method)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2C2DA62D5BBB20B1*, ::Class_1_2C2DA62D5BBB20B1_PreloadType, ::RPG::Client::UpdatePreloadTypeMethod))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__UPDATEPRELOADTYPEIMPL_OFFSET))(this, preloadItem, preloadType, method);
		}

		::System::Void RecollectResource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_RECOLLECTRESOURCE_OFFSET))(this);
		}

		::System::Void ReleaseResource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_RELEASERESOURCE_OFFSET))(this);
		}

		::System::Void RefreshPreloadType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHPRELOADTYPE_OFFSET))(this);
		}

		::System::Void RefreshBeforeEnterAdventure()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHBEFOREENTERADVENTURE_OFFSET))(this);
		}

		::System::Void RefreshAfterEnterAdventure()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHAFTERENTERADVENTURE_OFFSET))(this);
		}

		::System::Void RefreshInAdventure()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHINADVENTURE_OFFSET))(this);
		}

		::System::Void RefreshBeforeSwitchMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHBEFORESWITCHMAP_OFFSET))(this);
		}

		::System::Void RefreshBeforeLeaveAdventure()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHBEFORELEAVEADVENTURE_OFFSET))(this);
		}

		::System::Void RefreshBeforeEnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHBEFOREENTERBATTLE_OFFSET))(this);
		}

		::System::Void RefreshAfterEnterBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHAFTERENTERBATTLE_OFFSET))(this);
		}

		::System::Void RefreshBeforeRestartBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHBEFORERESTARTBATTLE_OFFSET))(this);
		}

		::System::Void RefreshBeforeLeaveBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_REFRESHBEFORELEAVEBATTLE_OFFSET))(this);
		}

		::System::Void _OnInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__ONINITIALIZE_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _CollectResourceImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__COLLECTRESOURCEIMPL_OFFSET))(this);
		}

		::System::Void _CollectResourceImplForCollectionMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__COLLECTRESOURCEIMPLFORCOLLECTIONMODE_OFFSET))(this);
		}

		::System::Void _ReleaseResourceImpl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__RELEASERESOURCEIMPL_OFFSET))(this);
		}

		::System::Void _OnPreloadTypeBiasChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__ONPRELOADTYPEBIASCHANGE_OFFSET))(this);
		}

		::System::Void _OnActiveStateChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__ONACTIVESTATECHANGE_OFFSET))(this);
		}

		::System::Void OnPreloadTagStageChange(::System::String* tag, ::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_ONPRELOADTAGSTAGECHANGE_OFFSET))(this, tag, active);
		}

		::System::Void CollectItemSize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_COLLECTITEMSIZE_OFFSET))(this);
		}

		::System::Void MarkNoUseItem(::System::String* itemName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_MARKNOUSEITEM_OFFSET))(this, itemName);
		}

		::System::Void SetPreloadTypeBias(::System::String* itemProfilerName, ::System::Int32 bias)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP_SETPRELOADTYPEBIAS_OFFSET))(this, itemProfilerName, bias);
		}

		static ::System::String* _GenItemName(::System::String* prefix, ::System::Object* key)
		{
			return ((::System::String*(*)(::System::String*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__GENITEMNAME_OFFSET))(prefix, key);
		}

		static ::System::String* _ConvertToOriginLod(::System::String* path)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP__CONVERTTOORIGINLOD_OFFSET))(path);
		}

		::System::String* __iFixBaseProxy_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEASSETPRELOAD_ASSETPRELOADGROUP___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
		}
	};
}

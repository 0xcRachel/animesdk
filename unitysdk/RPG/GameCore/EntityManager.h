#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/TeamTypeMask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"

namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_GAMECORE_ENTITYMANAGER_ADDTOMANANGER_OFFSET UNITYSDK_OFFSET(0xA3B8010)
#define RPG_GAMECORE_ENTITYMANAGER_ADDTOUNIQUESNAPSHOTMAP_OFFSET UNITYSDK_OFFSET(0xA3B8390)
#define RPG_GAMECORE_ENTITYMANAGER_CALCENTITYCOUNT_OFFSET UNITYSDK_OFFSET(0xA3B9530)
#define RPG_GAMECORE_ENTITYMANAGER_CLEARENTITYUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xA3B51D0)
#define RPG_GAMECORE_ENTITYMANAGER_CONTAINSENTITY_OFFSET UNITYSDK_OFFSET(0xA3B94A0)
#define RPG_GAMECORE_ENTITYMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3B30C0)
#define RPG_GAMECORE_ENTITYMANAGER_ENTERVIEWMODE_OFFSET UNITYSDK_OFFSET(0xA3B7C30)
#define RPG_GAMECORE_ENTITYMANAGER_EXISTVIEWMODE_OFFSET UNITYSDK_OFFSET(0xA3B7CC0)
#define RPG_GAMECORE_ENTITYMANAGER_FINDENTITIESBYGROUPID_OFFSET UNITYSDK_OFFSET(0xA3B5AA0)
#define RPG_GAMECORE_ENTITYMANAGER_FINDENTITYBYGROUPENTITYID_OFFSET UNITYSDK_OFFSET(0xA3B5A10)
#define RPG_GAMECORE_ENTITYMANAGER_FINDENTITYBYSERVERENTITYID_OFFSET UNITYSDK_OFFSET(0xA3B5950)
#define RPG_GAMECORE_ENTITYMANAGER_FINDFIRSTENTITY_OFFSET UNITYSDK_OFFSET(0xA3B9420)
#define RPG_GAMECORE_ENTITYMANAGER_GETALLENITYDICTIONARY_OFFSET UNITYSDK_OFFSET(0xA3B7F90)
#define RPG_GAMECORE_ENTITYMANAGER_GETALLUNIQUENAMEDENTITYDICTIONARY_OFFSET UNITYSDK_OFFSET(0xA3B7FD0)
#define RPG_GAMECORE_ENTITYMANAGER_GETDARKTEAMENTITY_OFFSET UNITYSDK_OFFSET(0xA3B4B10)
#define RPG_GAMECORE_ENTITYMANAGER_GETENEMYTEAMENTITY_OFFSET UNITYSDK_OFFSET(0xA3B49D0)
#define RPG_GAMECORE_ENTITYMANAGER_GETENTITYBYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA3B48B0)
#define RPG_GAMECORE_ENTITYMANAGER_GETENTITYBYUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xA3B5740)
#define RPG_GAMECORE_ENTITYMANAGER_GETENTITYUNIQUENAMES_OFFSET UNITYSDK_OFFSET(0xA3B5670)
#define RPG_GAMECORE_ENTITYMANAGER_GETLIGHTTEAMENTITY_OFFSET UNITYSDK_OFFSET(0xA3B4AA0)
#define RPG_GAMECORE_ENTITYMANAGER_GETTEAMENTITY_OFFSET UNITYSDK_OFFSET(0xA3B4960)
#define RPG_GAMECORE_ENTITYMANAGER_GETUNIQUESNAPSHOTBYOWNERRUNTIMEID_OFFSET UNITYSDK_OFFSET(0xA3B4B80)
#define RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUILEAVESUMMONEROFUNCREATEDSERVANT_OFFSET UNITYSDK_OFFSET(0xA3B86B0)
#define RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTFADEINENTITY_OFFSET UNITYSDK_OFFSET(0xA3B8650)
#define RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTFADEINFOLLOWENTITIES_OFFSET UNITYSDK_OFFSET(0xA3B86D0)
#define RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTFADEOUTENTITY_OFFSET UNITYSDK_OFFSET(0xA3B86F0)
#define RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTFADEOUTSUMMONERENTITY_OFFSET UNITYSDK_OFFSET(0xA3B8670)
#define RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTSUMMONEROFUNCREATEDSERVANT_OFFSET UNITYSDK_OFFSET(0xA3B8690)
#define RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUIWILLSELECTENTITY_OFFSET UNITYSDK_OFFSET(0xA3B8630)
#define RPG_GAMECORE_ENTITYMANAGER_GET_ENTITYGOROOT_OFFSET UNITYSDK_OFFSET(0xA3B8590)
#define RPG_GAMECORE_ENTITYMANAGER_GET_GROUPGOROOT_OFFSET UNITYSDK_OFFSET(0xA3B85B0)
#define RPG_GAMECORE_ENTITYMANAGER_GET_LEVELENTITY_OFFSET UNITYSDK_OFFSET(0xA3B8560)
#define RPG_GAMECORE_ENTITYMANAGER_GET_LITTLEGAMEGOROOT_OFFSET UNITYSDK_OFFSET(0xA3B8610)
#define RPG_GAMECORE_ENTITYMANAGER_GET_OWNERWORLDREF_OFFSET UNITYSDK_OFFSET(0xA3B8580)
#define RPG_GAMECORE_ENTITYMANAGER_GET_PERFORMANCEGOROOT_OFFSET UNITYSDK_OFFSET(0xA3B85F0)
#define RPG_GAMECORE_ENTITYMANAGER_GET_PLAYERGOROOT_OFFSET UNITYSDK_OFFSET(0xA3B85D0)
#define RPG_GAMECORE_ENTITYMANAGER_ONCREATENEWENTITYPROCESSGLOBALTIMESCALELOCK_OFFSET UNITYSDK_OFFSET(0xA3B64C0)
#define RPG_GAMECORE_ENTITYMANAGER_PAUSEALLENTITYBYTEAMTYPE_OFFSET UNITYSDK_OFFSET(0xA3B5EA0)
#define RPG_GAMECORE_ENTITYMANAGER_QUERYALLENTITES_OFFSET UNITYSDK_OFFSET(0xA3B87D0)
#define RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIESVIEWMODESORT_OFFSET UNITYSDK_OFFSET(0xA3B91D0)
#define RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIESWITHANYCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0xA3B9910)
#define RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIESWITHCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0xA3B9760)
#define RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIESWITHCOMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0xA3B95E0)
#define RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIES_1_OFFSET UNITYSDK_OFFSET(0xA3B9320)
#define RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIES_OFFSET UNITYSDK_OFFSET(0xA3AE8E0)
#define RPG_GAMECORE_ENTITYMANAGER_REFRESHVIEWMODESELECTEDENTITY_OFFSET UNITYSDK_OFFSET(0xA3B7160)
#define RPG_GAMECORE_ENTITYMANAGER_REGISTERGROUPENTITYID_OFFSET UNITYSDK_OFFSET(0xA3B5D10)
#define RPG_GAMECORE_ENTITYMANAGER_REGISTERSERVERENTITYID_OFFSET UNITYSDK_OFFSET(0xA3B5B60)
#define RPG_GAMECORE_ENTITYMANAGER_REGISTERUNIQUENAMEENTITY_OFFSET UNITYSDK_OFFSET(0xA3B4C40)
#define RPG_GAMECORE_ENTITYMANAGER_REMOVEFROMMANAGER_OFFSET UNITYSDK_OFFSET(0xA3B8210)
#define RPG_GAMECORE_ENTITYMANAGER_SETUPBUILDINENTITY_OFFSET UNITYSDK_OFFSET(0xA3B3300)
#define RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUILEAVESUMMONEROFUNCREATEDSERVANT_OFFSET UNITYSDK_OFFSET(0xA3B86C0)
#define RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTFADEINENTITY_OFFSET UNITYSDK_OFFSET(0xA3B8660)
#define RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTFADEINFOLLOWENTITIES_OFFSET UNITYSDK_OFFSET(0xA3B86E0)
#define RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTFADEOUTENTITY_OFFSET UNITYSDK_OFFSET(0xA3B8700)
#define RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTFADEOUTSUMMONERENTITY_OFFSET UNITYSDK_OFFSET(0xA3B8680)
#define RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTSUMMONEROFUNCREATEDSERVANT_OFFSET UNITYSDK_OFFSET(0xA3B86A0)
#define RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUIWILLSELECTENTITY_OFFSET UNITYSDK_OFFSET(0xA3B8640)
#define RPG_GAMECORE_ENTITYMANAGER_SET_ENTITYGOROOT_OFFSET UNITYSDK_OFFSET(0xA3B85A0)
#define RPG_GAMECORE_ENTITYMANAGER_SET_GROUPGOROOT_OFFSET UNITYSDK_OFFSET(0xA3B85C0)
#define RPG_GAMECORE_ENTITYMANAGER_SET_LEVELENTITY_OFFSET UNITYSDK_OFFSET(0xA3B8570)
#define RPG_GAMECORE_ENTITYMANAGER_SET_LITTLEGAMEGOROOT_OFFSET UNITYSDK_OFFSET(0xA3B8620)
#define RPG_GAMECORE_ENTITYMANAGER_SET_PERFORMANCEGOROOT_OFFSET UNITYSDK_OFFSET(0xA3B8600)
#define RPG_GAMECORE_ENTITYMANAGER_SET_PLAYERGOROOT_OFFSET UNITYSDK_OFFSET(0xA3B85E0)
#define RPG_GAMECORE_ENTITYMANAGER_UNREGISTERGROUPENTITYID_OFFSET UNITYSDK_OFFSET(0xA3B5DE0)
#define RPG_GAMECORE_ENTITYMANAGER_UNREGISTERSERVERENTITYID_OFFSET UNITYSDK_OFFSET(0xA3B5C10)
#define RPG_GAMECORE_ENTITYMANAGER_UNREGISTERUNIQUENAMEENTITY_OFFSET UNITYSDK_OFFSET(0xA3B53C0)
#define RPG_GAMECORE_ENTITYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0xA3B8710)
#define RPG_GAMECORE_ENTITYMANAGER__CHECKENTITYHASANYCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0xA3B9BE0)
#define RPG_GAMECORE_ENTITYMANAGER__CHECKENTITYHASCOMPONENTTYPES_OFFSET UNITYSDK_OFFSET(0xA3B9B20)
#define RPG_GAMECORE_ENTITYMANAGER__CHECKENTITYHASCOMPONENTTYPE_OFFSET UNITYSDK_OFFSET(0xA3B9AC0)
#define RPG_GAMECORE_ENTITYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xA3B2D00)
#define RPG_GAMECORE_ENTITYMANAGER__GETENTITYFOLLOWEDBE_OFFSET UNITYSDK_OFFSET(0xA3B6B60)
#define RPG_GAMECORE_ENTITYMANAGER__GETENTITYSERVANT_OFFSET UNITYSDK_OFFSET(0xA3B6730)
#define RPG_GAMECORE_ENTITYMANAGER__GETENTITYSUMMONER_OFFSET UNITYSDK_OFFSET(0xA3B66B0)
#define RPG_GAMECORE_ENTITYMANAGER__GETENTITYTRANSMITVISIBILITYTARGETS_OFFSET UNITYSDK_OFFSET(0xA3B6D90)
#define RPG_GAMECORE_ENTITYMANAGER__PROCESSENTITYTEAMCHANGE_OFFSET UNITYSDK_OFFSET(0xA3B8460)
#define RPG_GAMECORE_ENTITYMANAGER__QUERYENTITIESIMPL_OFFSET UNITYSDK_OFFSET(0xA3B8A30)
#define RPG_GAMECORE_ENTITYMANAGER__REFRESHUNCREATEDSERVANT_OFFSET UNITYSDK_OFFSET(0xA3B7840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityManager_TypeDefinitionIndex = 44399;

	class EntityManager : public ::System::Object
	{
	public:
		static ::System::Func_3<::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::RuntimeTypeHandle>*, ::System::Boolean>** StaticGet__CheckEntityHasAnyComponentTypeHandlesDelg()
		{
			return (::System::Func_3<::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::RuntimeTypeHandle>*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EntityManager_TypeDefinitionIndex)->GetStaticField(0x19B00);
		}
		static ::System::Predicate_1<::RPG::GameCore::GameEntity*>** StaticGet__CheckEntityInTeamFormationDelg()
		{
			return (::System::Predicate_1<::RPG::GameCore::GameEntity*>**)Il2CppClass::FromTypeDefinitionIndex(EntityManager_TypeDefinitionIndex)->GetStaticField(0x19B08);
		}
		static ::System::String** StaticGet_LocalPlayerUniqueName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(EntityManager_TypeDefinitionIndex)->GetStaticField(0x19B10);
		}
		static ::System::Func_3<::RPG::GameCore::GameEntity*, ::System::RuntimeTypeHandle, ::System::Boolean>** StaticGet__CheckEntityHasComponentTypeHandleDelg()
		{
			return (::System::Func_3<::RPG::GameCore::GameEntity*, ::System::RuntimeTypeHandle, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EntityManager_TypeDefinitionIndex)->GetStaticField(0x19B18);
		}
		static ::System::Func_3<::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::RuntimeTypeHandle>*, ::System::Boolean>** StaticGet__CheckEntityHasComponentTypeHandlesDelg()
		{
			return (::System::Func_3<::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::RuntimeTypeHandle>*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EntityManager_TypeDefinitionIndex)->GetStaticField(0x19B20);
		}
		::RPG::GameCore::GameWorld* _OwnerWorldRef; // 0x10
		::RPG::GameCore::GameEntity* _DataViewUILeaveSummonerOfUncreatedServant_k__BackingField; // 0x18
		::UnityEngine::GameObject* _LittleGameGORoot_k__BackingField; // 0x20
		::RPG::GameCore::GameEntity* _DataViewUIWillSelectEntity_k__BackingField; // 0x28
		::UnityEngine::GameObject* _PlayerGORoot_k__BackingField; // 0x30
		::System::Action_3<::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamType, ::RPG::GameCore::TeamType>* _ProcessEntityTeamChangeDelg; // 0x38
		::RPG::GameCore::GameEntity* _LevelEntity_k__BackingField; // 0x40
		::RPG::GameCore::GameEntity* _DataViewUISelectFadeOutEntity_k__BackingField; // 0x48
		::Il2CppArray<::RPG::GameCore::GameEntity*>* _AllTeamEntity; // 0x50
		::UnityEngine::GameObject* _EntityGORoot_k__BackingField; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* _UniqueNamedEntityDictionary; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* _AllEntityDictionary; // 0x68
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::RPG::GameCore::GameEntity*>* _GroupEntityIDToEntityDict; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* _SnapshotEntityMap; // 0x78
		::UnityEngine::GameObject* _GroupGORoot_k__BackingField; // 0x80
		::Il2CppArray<::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Int32>*>* _PauseEntityTimeSlowIndexDic; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* _ServerEntityIDToEntityDict; // 0x90
		::RPG::GameCore::GameEntityList* _DataViewUISelectFadeInFollowEntities_k__BackingField; // 0x98
		::UnityEngine::GameObject* _PerformanceGORoot_k__BackingField; // 0xA0
		::RPG::GameCore::GameEntity* _DataViewUISelectFadeInEntity_k__BackingField; // 0xA8
		::RPG::GameCore::GameEntity* _DataViewUISelectSummonerOfUncreatedServant_k__BackingField; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::String*>*>* _EntityUniqueNameDict; // 0xB8
		::RPG::GameCore::GameEntity* _DataViewUISelectFadeOutSummonerEntity_k__BackingField; // 0xC0
		::Il2CppArray<::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*>* _AllTeamEntityList; // 0xC8
		::System::Boolean _UseUniqueSnapshot; // 0xD0

		::System::Void _ctor(::RPG::GameCore::GameWorld* pOwnerWorld)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__CTOR_OFFSET))(this, pOwnerWorld);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SetupBuildInEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SETUPBUILDINENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetEntityByRuntimeID(::System::UInt32 nRuntimeID)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETENTITYBYRUNTIMEID_OFFSET))(this, nRuntimeID);
		}

		::RPG::GameCore::GameEntity* GetTeamEntity(::RPG::GameCore::TeamType eTeam)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETTEAMENTITY_OFFSET))(this, eTeam);
		}

		::RPG::GameCore::GameEntity* GetEnemyTeamEntity(::RPG::GameCore::TeamType eTeam)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETENEMYTEAMENTITY_OFFSET))(this, eTeam);
		}

		::RPG::GameCore::GameEntity* GetLightTeamEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETLIGHTTEAMENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetDarkTeamEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETDARKTEAMENTITY_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* GetUniqueSnapshotByOwnerRuntimeID(::System::UInt32 nOwnerRid)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETUNIQUESNAPSHOTBYOWNERRUNTIMEID_OFFSET))(this, nOwnerRid);
		}

		::System::Void RegisterUniqueNameEntity(::RPG::GameCore::GameEntity* pGameEntity, ::System::String* strUniqueName, ::System::Boolean setupObjecgName)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_REGISTERUNIQUENAMEENTITY_OFFSET))(this, pGameEntity, strUniqueName, setupObjecgName);
		}

		::System::Void ClearEntityUniqueName(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_CLEARENTITYUNIQUENAME_OFFSET))(this, entity);
		}

		::System::Void UnregisterUniqueNameEntity(::System::String* strUniqueName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_UNREGISTERUNIQUENAMEENTITY_OFFSET))(this, strUniqueName);
		}

		::System::Collections::Generic::List_1<::System::String*>* GetEntityUniqueNames(::RPG::GameCore::GameEntity* gameEntity)
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETENTITYUNIQUENAMES_OFFSET))(this, gameEntity);
		}

		::RPG::GameCore::GameEntity* GetEntityByUniqueName(::System::String* strUniqueName)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETENTITYBYUNIQUENAME_OFFSET))(this, strUniqueName);
		}

		::RPG::GameCore::GameEntity* FindEntityByServerEntityID(::System::UInt32 serverID)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_FINDENTITYBYSERVERENTITYID_OFFSET))(this, serverID);
		}

		::RPG::GameCore::GameEntity* FindEntityByGroupEntityID(::System::UInt32 groupID, ::System::UInt32 groupEntityID)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_FINDENTITYBYGROUPENTITYID_OFFSET))(this, groupID, groupEntityID);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* FindEntitiesByGroupID(::System::UInt32 groupID)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_FINDENTITIESBYGROUPID_OFFSET))(this, groupID);
		}

		::System::Void RegisterServerEntityID(::System::UInt32 serverID, ::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_REGISTERSERVERENTITYID_OFFSET))(this, serverID, entity);
		}

		::System::Void UnregisterServerEntityID(::System::UInt32 serverID, ::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_UNREGISTERSERVERENTITYID_OFFSET))(this, serverID, entity);
		}

		::System::Void RegisterGroupEntityID(::System::UInt32 groupID, ::System::UInt32 groupEntityID, ::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_REGISTERGROUPENTITYID_OFFSET))(this, groupID, groupEntityID, entity);
		}

		::System::Void UnregisterGroupEntityID(::System::UInt32 groupID, ::System::UInt32 groupEntityID, ::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_UNREGISTERGROUPENTITYID_OFFSET))(this, groupID, groupEntityID, entity);
		}

		::System::Void PauseAllEntityByTeamType(::RPG::GameCore::TeamType team, ::System::Boolean bPause)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TeamType, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_PAUSEALLENTITYBYTEAMTYPE_OFFSET))(this, team, bPause);
		}

		::System::Void OnCreateNewEntityProcessGlobalTimescaleLock(::RPG::GameCore::GameEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_ONCREATENEWENTITYPROCESSGLOBALTIMESCALELOCK_OFFSET))(this, entity);
		}

		::RPG::GameCore::GameEntity* _GetEntitySummoner(::RPG::GameCore::GameEntity* entity)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__GETENTITYSUMMONER_OFFSET))(this, entity);
		}

		::System::Void _GetEntityServant(::RPG::GameCore::GameEntity* entity, ::RPG::GameCore::GameEntityList* pResult)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__GETENTITYSERVANT_OFFSET))(this, entity, pResult);
		}

		::System::Void _GetEntityFollowedBE(::RPG::GameCore::GameEntity* target, ::RPG::GameCore::GameEntityList* pResult)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__GETENTITYFOLLOWEDBE_OFFSET))(this, target, pResult);
		}

		::System::Void _GetEntityTransmitVisibilityTargets(::RPG::GameCore::GameEntity* entity, ::RPG::GameCore::GameEntityList* pResult)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__GETENTITYTRANSMITVISIBILITYTARGETS_OFFSET))(this, entity, pResult);
		}

		::System::Void RefreshViewModeSelectedEntity(::RPG::GameCore::GameEntity* target, ::System::Boolean showUncreatedServant)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_REFRESHVIEWMODESELECTEDENTITY_OFFSET))(this, target, showUncreatedServant);
		}

		::System::Void _RefreshUncreatedServant(::RPG::GameCore::GameEntity* summoner)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__REFRESHUNCREATEDSERVANT_OFFSET))(this, summoner);
		}

		::System::Void EnterViewMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_ENTERVIEWMODE_OFFSET))(this);
		}

		::System::Void ExistViewMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_EXISTVIEWMODE_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* GetAllEnityDictionary()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETALLENITYDICTIONARY_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>* GetAllUniqueNamedEntityDictionary()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::GameEntity*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GETALLUNIQUENAMEDENTITYDICTIONARY_OFFSET))(this);
		}

		::System::Void AddToMananger(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_ADDTOMANANGER_OFFSET))(this, pEntity);
		}

		::System::Void RemoveFromManager(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_REMOVEFROMMANAGER_OFFSET))(this, pEntity);
		}

		::System::Void AddToUniqueSnapshotMap(::RPG::GameCore::GameEntity* pEntity)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_ADDTOUNIQUESNAPSHOTMAP_OFFSET))(this, pEntity);
		}

		::System::Void _ProcessEntityTeamChange(::RPG::GameCore::GameEntity* pEntity, ::RPG::GameCore::TeamType oldTeam, ::RPG::GameCore::TeamType newTeam)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TeamType, ::RPG::GameCore::TeamType))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__PROCESSENTITYTEAMCHANGE_OFFSET))(this, pEntity, oldTeam, newTeam);
		}

		::RPG::GameCore::GameEntity* get_LevelEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_LEVELENTITY_OFFSET))(this);
		}

		::System::Void set_LevelEntity(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_LEVELENTITY_OFFSET))(this, value);
		}

		::RPG::GameCore::GameWorld* get_OwnerWorldRef()
		{
			return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_OWNERWORLDREF_OFFSET))(this);
		}

		::UnityEngine::GameObject* get_EntityGORoot()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_ENTITYGOROOT_OFFSET))(this);
		}

		::System::Void set_EntityGORoot(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_ENTITYGOROOT_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_GroupGORoot()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_GROUPGOROOT_OFFSET))(this);
		}

		::System::Void set_GroupGORoot(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_GROUPGOROOT_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_PlayerGORoot()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_PLAYERGOROOT_OFFSET))(this);
		}

		::System::Void set_PlayerGORoot(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_PLAYERGOROOT_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_PerformanceGORoot()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_PERFORMANCEGOROOT_OFFSET))(this);
		}

		::System::Void set_PerformanceGORoot(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_PERFORMANCEGOROOT_OFFSET))(this, value);
		}

		::UnityEngine::GameObject* get_LittleGameGORoot()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_LITTLEGAMEGOROOT_OFFSET))(this);
		}

		::System::Void set_LittleGameGORoot(::UnityEngine::GameObject* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_LITTLEGAMEGOROOT_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_DataViewUIWillSelectEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUIWILLSELECTENTITY_OFFSET))(this);
		}

		::System::Void set_DataViewUIWillSelectEntity(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUIWILLSELECTENTITY_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_DataViewUISelectFadeInEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTFADEINENTITY_OFFSET))(this);
		}

		::System::Void set_DataViewUISelectFadeInEntity(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTFADEINENTITY_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_DataViewUISelectFadeOutSummonerEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTFADEOUTSUMMONERENTITY_OFFSET))(this);
		}

		::System::Void set_DataViewUISelectFadeOutSummonerEntity(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTFADEOUTSUMMONERENTITY_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_DataViewUISelectSummonerOfUncreatedServant()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTSUMMONEROFUNCREATEDSERVANT_OFFSET))(this);
		}

		::System::Void set_DataViewUISelectSummonerOfUncreatedServant(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTSUMMONEROFUNCREATEDSERVANT_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_DataViewUILeaveSummonerOfUncreatedServant()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUILEAVESUMMONEROFUNCREATEDSERVANT_OFFSET))(this);
		}

		::System::Void set_DataViewUILeaveSummonerOfUncreatedServant(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUILEAVESUMMONEROFUNCREATEDSERVANT_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntityList* get_DataViewUISelectFadeInFollowEntities()
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTFADEINFOLLOWENTITIES_OFFSET))(this);
		}

		::System::Void set_DataViewUISelectFadeInFollowEntities(::RPG::GameCore::GameEntityList* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTFADEINFOLLOWENTITIES_OFFSET))(this, value);
		}

		::RPG::GameCore::GameEntity* get_DataViewUISelectFadeOutEntity()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_GET_DATAVIEWUISELECTFADEOUTENTITY_OFFSET))(this);
		}

		::System::Void set_DataViewUISelectFadeOutEntity(::RPG::GameCore::GameEntity* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_SET_DATAVIEWUISELECTFADEOUTENTITY_OFFSET))(this, value);
		}

		::System::Void QueryAllEntites(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* resultList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_QUERYALLENTITES_OFFSET))(this, resultList);
		}

		::RPG::GameCore::GameEntityList* QueryEntities(::RPG::GameCore::TeamTypeMask teamTypeMask, ::RPG::GameCore::EntityTypeMask entityTypeMask, ::RPG::GameCore::AliveStateMask aliveStateMask, ::System::Predicate_1<::RPG::GameCore::GameEntity*>* filter)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask, ::System::Predicate_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIES_OFFSET))(this, teamTypeMask, entityTypeMask, aliveStateMask, filter);
		}

		::RPG::GameCore::GameEntityList* QueryEntitiesViewModeSort(::RPG::GameCore::TeamTypeMask teamTypeMask, ::RPG::GameCore::EntityTypeMask entityTypeMask, ::RPG::GameCore::AliveStateMask aliveStateMask, ::System::Predicate_1<::RPG::GameCore::GameEntity*>* filter)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask, ::System::Predicate_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIESVIEWMODESORT_OFFSET))(this, teamTypeMask, entityTypeMask, aliveStateMask, filter);
		}

		::System::Void QueryEntities_1(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* resultList, ::RPG::GameCore::TeamTypeMask teamTypeMask, ::RPG::GameCore::EntityTypeMask entityTypeMask, ::RPG::GameCore::AliveStateMask aliveStateMask, ::System::Predicate_1<::RPG::GameCore::GameEntity*>* filter, ::System::Boolean append)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask, ::System::Predicate_1<::RPG::GameCore::GameEntity*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIES_1_OFFSET))(this, resultList, teamTypeMask, entityTypeMask, aliveStateMask, filter, append);
		}

		::RPG::GameCore::GameEntity* FindFirstEntity(::RPG::GameCore::TeamTypeMask teamTypeMask, ::RPG::GameCore::EntityTypeMask entityTypeMask, ::RPG::GameCore::AliveStateMask aliveStateMask, ::System::Predicate_1<::RPG::GameCore::GameEntity*>* filter)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask, ::System::Predicate_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_FINDFIRSTENTITY_OFFSET))(this, teamTypeMask, entityTypeMask, aliveStateMask, filter);
		}

		::System::Boolean ContainsEntity(::RPG::GameCore::TeamTypeMask teamTypeMask, ::RPG::GameCore::EntityTypeMask entityTypeMask, ::RPG::GameCore::AliveStateMask aliveStateMask, ::System::Predicate_1<::RPG::GameCore::GameEntity*>* filter)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask, ::System::Predicate_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_CONTAINSENTITY_OFFSET))(this, teamTypeMask, entityTypeMask, aliveStateMask, filter);
		}

		::System::Int32 CalcEntityCount(::RPG::GameCore::TeamTypeMask teamTypeMask, ::RPG::GameCore::EntityTypeMask entityTypeMask, ::RPG::GameCore::AliveStateMask aliveStateMask, ::System::Predicate_1<::RPG::GameCore::GameEntity*>* filter)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask, ::System::Predicate_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_CALCENTITYCOUNT_OFFSET))(this, teamTypeMask, entityTypeMask, aliveStateMask, filter);
		}

		::RPG::GameCore::GameEntityList* QueryEntitiesWithComponentType(::System::RuntimeTypeHandle withComTypeHandles, ::RPG::GameCore::TeamTypeMask teamTypeMask, ::RPG::GameCore::EntityTypeMask entityTypeMask, ::RPG::GameCore::AliveStateMask aliveStateMask)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::System::RuntimeTypeHandle, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIESWITHCOMPONENTTYPE_OFFSET))(this, withComTypeHandles, teamTypeMask, entityTypeMask, aliveStateMask);
		}

		::RPG::GameCore::GameEntityList* QueryEntitiesWithComponentTypes(::Il2CppArray<::System::RuntimeTypeHandle>* withComTypeHandles, ::RPG::GameCore::TeamTypeMask teamTypeMask, ::RPG::GameCore::EntityTypeMask entityTypeMask, ::RPG::GameCore::AliveStateMask aliveStateMask)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::Il2CppArray<::System::RuntimeTypeHandle>*, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIESWITHCOMPONENTTYPES_OFFSET))(this, withComTypeHandles, teamTypeMask, entityTypeMask, aliveStateMask);
		}

		::RPG::GameCore::GameEntityList* QueryEntitiesWithAnyComponentTypes(::Il2CppArray<::System::RuntimeTypeHandle>* withComTypeHandles, ::RPG::GameCore::TeamTypeMask teamTypeMask, ::RPG::GameCore::EntityTypeMask entityTypeMask, ::RPG::GameCore::AliveStateMask aliveStateMask)
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID, ::Il2CppArray<::System::RuntimeTypeHandle>*, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER_QUERYENTITIESWITHANYCOMPONENTTYPES_OFFSET))(this, withComTypeHandles, teamTypeMask, entityTypeMask, aliveStateMask);
		}

		::RPG::GameCore::GameEntity* _QueryEntitiesImpl(::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* resultList, ::RPG::GameCore::TeamTypeMask teamTypeMask, ::RPG::GameCore::EntityTypeMask entityTypeMask, ::RPG::GameCore::AliveStateMask aliveStateMask, ::System::Predicate_1<::RPG::GameCore::GameEntity*>* filter)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*, ::RPG::GameCore::TeamTypeMask, ::RPG::GameCore::EntityTypeMask, ::RPG::GameCore::AliveStateMask, ::System::Predicate_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__QUERYENTITIESIMPL_OFFSET))(this, resultList, teamTypeMask, entityTypeMask, aliveStateMask, filter);
		}

		static ::System::Boolean _CheckEntityHasComponentType(::RPG::GameCore::GameEntity* entity, ::System::RuntimeTypeHandle componentTypeHandle)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__CHECKENTITYHASCOMPONENTTYPE_OFFSET))(entity, componentTypeHandle);
		}

		static ::System::Boolean _CheckEntityHasComponentTypes(::RPG::GameCore::GameEntity* entity, ::Il2CppArray<::System::RuntimeTypeHandle>* componentTypeHandles)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::RuntimeTypeHandle>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__CHECKENTITYHASCOMPONENTTYPES_OFFSET))(entity, componentTypeHandles);
		}

		static ::System::Boolean _CheckEntityHasAnyComponentTypes(::RPG::GameCore::GameEntity* entity, ::Il2CppArray<::System::RuntimeTypeHandle>* componentTypes)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::Il2CppArray<::System::RuntimeTypeHandle>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYMANAGER__CHECKENTITYHASANYCOMPONENTTYPES_OFFSET))(entity, componentTypes);
		}
	};
}

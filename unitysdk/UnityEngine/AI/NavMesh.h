#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/AI/NavMeshBuildSettings.h"
#include "unitysdk/UnityEngine/AI/NavMeshDataInstance.h"
#include "unitysdk/UnityEngine/AI/NavMeshHit.h"
#include "unitysdk/UnityEngine/AI/NavMeshLinkData.h"
#include "unitysdk/UnityEngine/AI/NavMeshLinkInstance.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine::AI { class NavMeshData; }
namespace UnityEngine::AI { class NavMeshPath; }
namespace UnityEngine::AI { class NavMesh_OnNavMeshChanged; }
namespace UnityEngine::AI { class NavMesh_OnNavMeshPreUpdate; }

#define UNITYENGINE_AI_NAVMESH_ADDLINKINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A704A90)
#define UNITYENGINE_AI_NAVMESH_ADDLINKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A704A80)
#define UNITYENGINE_AI_NAVMESH_ADDLINK_OFFSET UNITYSDK_OFFSET(0x1A704A20)
#define UNITYENGINE_AI_NAVMESH_ADDNAVMESHDATATRANSFORMEDINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A7049F0)
#define UNITYENGINE_AI_NAVMESH_ADDNAVMESHDATATRANSFORMEDINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A7049A0)
#define UNITYENGINE_AI_NAVMESH_ADDNAVMESHDATA_OFFSET UNITYSDK_OFFSET(0x1A704930)
#define UNITYENGINE_AI_NAVMESH_CALCULATEPATHINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A704890)
#define UNITYENGINE_AI_NAVMESH_CALCULATEPATHINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A704880)
#define UNITYENGINE_AI_NAVMESH_CALCULATEPATH_OFFSET UNITYSDK_OFFSET(0x1A7047F0)
#define UNITYENGINE_AI_NAVMESH_GETAREAFROMNAME_OFFSET UNITYSDK_OFFSET(0x1A7048C0)
#define UNITYENGINE_AI_NAVMESH_GETNAVMESHLINKDATA_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A704920)
#define UNITYENGINE_AI_NAVMESH_GETNAVMESHLINKDATA_OFFSET UNITYSDK_OFFSET(0x1A7048D0)
#define UNITYENGINE_AI_NAVMESH_GETSETTINGSBYID_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A704B10)
#define UNITYENGINE_AI_NAVMESH_GETSETTINGSBYID_OFFSET UNITYSDK_OFFSET(0x1A704AB0)
#define UNITYENGINE_AI_NAVMESH_GETSETTINGSBYINDEX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A704B80)
#define UNITYENGINE_AI_NAVMESH_GETSETTINGSBYINDEX_OFFSET UNITYSDK_OFFSET(0x1A704B20)
#define UNITYENGINE_AI_NAVMESH_INTERNALSETLINKOWNER_OFFSET UNITYSDK_OFFSET(0x1A7049E0)
#define UNITYENGINE_AI_NAVMESH_INTERNALSETOWNER_OFFSET UNITYSDK_OFFSET(0x1A7049D0)
#define UNITYENGINE_AI_NAVMESH_INTERNAL_CALLONNAVMESHCHANGED_OFFSET UNITYSDK_OFFSET(0x1A704450)
#define UNITYENGINE_AI_NAVMESH_INTERNAL_CALLONNAVMESHPREUPDATE_OFFSET UNITYSDK_OFFSET(0x1A704190)
#define UNITYENGINE_AI_NAVMESH_ISVALIDLINKHANDLE_OFFSET UNITYSDK_OFFSET(0x1A7049C0)
#define UNITYENGINE_AI_NAVMESH_ISVALIDNAVMESHDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x1A7049B0)
#define UNITYENGINE_AI_NAVMESH_LINKATTACHED_OFFSET UNITYSDK_OFFSET(0x1A704A10)
#define UNITYENGINE_AI_NAVMESH_RAYCAST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A7047E0)
#define UNITYENGINE_AI_NAVMESH_RAYCAST_OFFSET UNITYSDK_OFFSET(0x1A7047D0)
#define UNITYENGINE_AI_NAVMESH_REMOVELINKINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A704AA0)
#define UNITYENGINE_AI_NAVMESH_REMOVENAVMESHDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A704A00)
#define UNITYENGINE_AI_NAVMESH_SAMPLEPOSITION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A7048B0)
#define UNITYENGINE_AI_NAVMESH_SAMPLEPOSITION_OFFSET UNITYSDK_OFFSET(0x1A7048A0)

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMesh_TypeDefinitionIndex = 5378;

	class NavMesh : public ::System::Object
	{
	public:
		static ::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate** StaticGet_onPreUpdate()
		{
			return (::UnityEngine::AI::NavMesh_OnNavMeshPreUpdate**)Il2CppClass::FromTypeDefinitionIndex(NavMesh_TypeDefinitionIndex)->GetStaticField(0x1090);
		}
		static ::UnityEngine::AI::NavMesh_OnNavMeshChanged** StaticGet_onChanged()
		{
			return (::UnityEngine::AI::NavMesh_OnNavMeshChanged**)Il2CppClass::FromTypeDefinitionIndex(NavMesh_TypeDefinitionIndex)->GetStaticField(0x1098);
		}
		static ::System::Int32* StaticGet_ChangedStamp()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NavMesh_TypeDefinitionIndex)->GetStaticField(0xF80);
		}

		static ::System::Void Internal_CallOnNavMeshPreUpdate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_INTERNAL_CALLONNAVMESHPREUPDATE_OFFSET))();
		}

		static ::System::Void Internal_CallOnNavMeshChanged(::System::Int32 changedTiles)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_INTERNAL_CALLONNAVMESHCHANGED_OFFSET))(changedTiles);
		}

		static ::System::Boolean Raycast(::UnityEngine::Vector3 sourcePosition, ::UnityEngine::Vector3 targetPosition, ::UnityEngine::AI::NavMeshHit& hit, ::System::Int32 areaMask)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::AI::NavMeshHit&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_RAYCAST_OFFSET))(sourcePosition, targetPosition, hit, areaMask);
		}

		static ::System::Boolean CalculatePath(::UnityEngine::Vector3 sourcePosition, ::UnityEngine::Vector3 targetPosition, ::System::Int32 areaMask, ::UnityEngine::AI::NavMeshPath* path)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_CALCULATEPATH_OFFSET))(sourcePosition, targetPosition, areaMask, path);
		}

		static ::System::Boolean CalculatePathInternal(::UnityEngine::Vector3 sourcePosition, ::UnityEngine::Vector3 targetPosition, ::System::Int32 areaMask, ::UnityEngine::AI::NavMeshPath* path)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_CALCULATEPATHINTERNAL_OFFSET))(sourcePosition, targetPosition, areaMask, path);
		}

		static ::System::Boolean SamplePosition(::UnityEngine::Vector3 sourcePosition, ::UnityEngine::AI::NavMeshHit& hit, ::System::Single maxDistance, ::System::Int32 areaMask)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::AI::NavMeshHit&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_SAMPLEPOSITION_OFFSET))(sourcePosition, hit, maxDistance, areaMask);
		}

		static ::System::Int32 GetAreaFromName(::System::String* areaName)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_GETAREAFROMNAME_OFFSET))(areaName);
		}

		static ::UnityEngine::AI::NavMeshLinkData GetNavMeshLinkData(::System::UInt64 meshLinkRef)
		{
			return ((::UnityEngine::AI::NavMeshLinkData(*)(::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_GETNAVMESHLINKDATA_OFFSET))(meshLinkRef);
		}

		static ::UnityEngine::AI::NavMeshDataInstance AddNavMeshData(::UnityEngine::AI::NavMeshData* navMeshData, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::AI::NavMeshDataInstance(*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ADDNAVMESHDATA_OFFSET))(navMeshData, position, rotation);
		}

		static ::System::Boolean IsValidNavMeshDataHandle(::System::Int32 handle)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ISVALIDNAVMESHDATAHANDLE_OFFSET))(handle);
		}

		static ::System::Boolean IsValidLinkHandle(::System::Int32 handle)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ISVALIDLINKHANDLE_OFFSET))(handle);
		}

		static ::System::Boolean InternalSetOwner(::System::Int32 dataID, ::System::Int32 ownerID)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_INTERNALSETOWNER_OFFSET))(dataID, ownerID);
		}

		static ::System::Boolean InternalSetLinkOwner(::System::Int32 linkID, ::System::Int32 ownerID)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_INTERNALSETLINKOWNER_OFFSET))(linkID, ownerID);
		}

		static ::System::Int32 AddNavMeshDataTransformedInternal(::UnityEngine::AI::NavMeshData* navMeshData, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Int32(*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ADDNAVMESHDATATRANSFORMEDINTERNAL_OFFSET))(navMeshData, position, rotation);
		}

		static ::System::Void RemoveNavMeshDataInternal(::System::Int32 handle)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_REMOVENAVMESHDATAINTERNAL_OFFSET))(handle);
		}

		static ::System::Boolean LinkAttached(::System::Int32 handle)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_LINKATTACHED_OFFSET))(handle);
		}

		static ::UnityEngine::AI::NavMeshLinkInstance AddLink(::UnityEngine::AI::NavMeshLinkData link, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::UnityEngine::AI::NavMeshLinkInstance(*)(::UnityEngine::AI::NavMeshLinkData, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ADDLINK_OFFSET))(link, position, rotation);
		}

		static ::System::Int32 AddLinkInternal(::UnityEngine::AI::NavMeshLinkData link, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation)
		{
			return ((::System::Int32(*)(::UnityEngine::AI::NavMeshLinkData, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ADDLINKINTERNAL_OFFSET))(link, position, rotation);
		}

		static ::System::Void RemoveLinkInternal(::System::Int32 handle)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_REMOVELINKINTERNAL_OFFSET))(handle);
		}

		static ::UnityEngine::AI::NavMeshBuildSettings GetSettingsByID(::System::Int32 agentTypeID)
		{
			return ((::UnityEngine::AI::NavMeshBuildSettings(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_GETSETTINGSBYID_OFFSET))(agentTypeID);
		}

		static ::UnityEngine::AI::NavMeshBuildSettings GetSettingsByIndex(::System::Int32 index)
		{
			return ((::UnityEngine::AI::NavMeshBuildSettings(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_GETSETTINGSBYINDEX_OFFSET))(index);
		}

		static ::System::Boolean Raycast_Injected(::UnityEngine::Vector3& sourcePosition, ::UnityEngine::Vector3& targetPosition, ::UnityEngine::AI::NavMeshHit& hit, ::System::Int32 areaMask)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::AI::NavMeshHit&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_RAYCAST_INJECTED_OFFSET))(sourcePosition, targetPosition, hit, areaMask);
		}

		static ::System::Boolean CalculatePathInternal_Injected(::UnityEngine::Vector3& sourcePosition, ::UnityEngine::Vector3& targetPosition, ::System::Int32 areaMask, ::UnityEngine::AI::NavMeshPath* path)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::System::Int32, ::UnityEngine::AI::NavMeshPath*))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_CALCULATEPATHINTERNAL_INJECTED_OFFSET))(sourcePosition, targetPosition, areaMask, path);
		}

		static ::System::Boolean SamplePosition_Injected(::UnityEngine::Vector3& sourcePosition, ::UnityEngine::AI::NavMeshHit& hit, ::System::Single maxDistance, ::System::Int32 areaMask)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::AI::NavMeshHit&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_SAMPLEPOSITION_INJECTED_OFFSET))(sourcePosition, hit, maxDistance, areaMask);
		}

		static ::System::Void GetNavMeshLinkData_Injected(::System::UInt64 meshLinkRef, ::UnityEngine::AI::NavMeshLinkData& ret)
		{
			return ((::System::Void(*)(::System::UInt64, ::UnityEngine::AI::NavMeshLinkData&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_GETNAVMESHLINKDATA_INJECTED_OFFSET))(meshLinkRef, ret);
		}

		static ::System::Int32 AddNavMeshDataTransformedInternal_Injected(::UnityEngine::AI::NavMeshData* navMeshData, ::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Int32(*)(::UnityEngine::AI::NavMeshData*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ADDNAVMESHDATATRANSFORMEDINTERNAL_INJECTED_OFFSET))(navMeshData, position, rotation);
		}

		static ::System::Int32 AddLinkInternal_Injected(::UnityEngine::AI::NavMeshLinkData& link, ::UnityEngine::Vector3& position, ::UnityEngine::Quaternion& rotation)
		{
			return ((::System::Int32(*)(::UnityEngine::AI::NavMeshLinkData&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_ADDLINKINTERNAL_INJECTED_OFFSET))(link, position, rotation);
		}

		static ::System::Void GetSettingsByID_Injected(::System::Int32 agentTypeID, ::UnityEngine::AI::NavMeshBuildSettings& ret)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::AI::NavMeshBuildSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_GETSETTINGSBYID_INJECTED_OFFSET))(agentTypeID, ret);
		}

		static ::System::Void GetSettingsByIndex_Injected(::System::Int32 index, ::UnityEngine::AI::NavMeshBuildSettings& ret)
		{
			return ((::System::Void(*)(::System::Int32, ::UnityEngine::AI::NavMeshBuildSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_AI_NAVMESH_GETSETTINGSBYINDEX_INJECTED_OFFSET))(index, ret);
		}
	};
}

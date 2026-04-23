#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_BaseSync.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace HoudiniEngineUnity { class HEU_AssetSync_AssetSyncCallback; }
namespace HoudiniEngineUnity { class HEU_SessionBase; }
namespace HoudiniEngineUnity { class HEU_ThreadedTaskLoadGeo; }
namespace HoudiniEngineUnity { class HEU_ThreadedTaskLoadGeo_HEU_LoadCallback; }
namespace HoudiniEngineUnity { class HEU_ThreadedTaskLoadGeo_HEU_LoadData; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define HOUDINIENGINEUNITY_HEU_ASSETSYNC_CREATETHREADEDTASK_OFFSET UNITYSDK_OFFSET(0x12C2BE50)
#define HOUDINIENGINEUNITY_HEU_ASSETSYNC_INITIALIZEASSET_OFFSET UNITYSDK_OFFSET(0x12C2BD30)
#define HOUDINIENGINEUNITY_HEU_ASSETSYNC_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x12C2BBF0)
#define HOUDINIENGINEUNITY_HEU_ASSETSYNC_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12C2BBE0)
#define HOUDINIENGINEUNITY_HEU_ASSETSYNC_ONLOADCOMPLETE_OFFSET UNITYSDK_OFFSET(0x12C2BFD0)
#define HOUDINIENGINEUNITY_HEU_ASSETSYNC_RESYNC_OFFSET UNITYSDK_OFFSET(0x12C2C6D0)
#define HOUDINIENGINEUNITY_HEU_ASSETSYNC_SETLOADCALLBACK_OFFSET UNITYSDK_OFFSET(0x12C2BEB0)
#define HOUDINIENGINEUNITY_HEU_ASSETSYNC_SETUPLOADTASK_OFFSET UNITYSDK_OFFSET(0x12C2BF20)
#define HOUDINIENGINEUNITY_HEU_ASSETSYNC__CTOR_OFFSET UNITYSDK_OFFSET(0x12C2CA00)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_AssetSync_TypeDefinitionIndex = 43653;

	class HEU_AssetSync : public ::HoudiniEngineUnity::HEU_BaseSync
	{
	public:
		::HoudiniEngineUnity::HEU_AssetSync_AssetSyncCallback* _onAssetLoaded; // 0x80
		::System::String* _assetPath; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSYNC__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSYNC_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSYNC_ONDESTROY_OFFSET))(this);
		}

		::System::Void InitializeAsset(::HoudiniEngineUnity::HEU_SessionBase* session, ::System::String* assetPath, ::System::String* nodeName, ::UnityEngine::Transform* parent, ::UnityEngine::Vector3 startPosition)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*, ::System::String*, ::System::String*, ::UnityEngine::Transform*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSYNC_INITIALIZEASSET_OFFSET))(this, session, assetPath, nodeName, parent, startPosition);
		}

		::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo* CreateThreadedTask()
		{
			return ((::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSYNC_CREATETHREADEDTASK_OFFSET))(this);
		}

		::System::Void SetLoadCallback(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadCallback* callback)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadCallback*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSYNC_SETLOADCALLBACK_OFFSET))(this, callback);
		}

		::System::Void SetupLoadTask(::HoudiniEngineUnity::HEU_SessionBase* session)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_SessionBase*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSYNC_SETUPLOADTASK_OFFSET))(this, session);
		}

		::System::Void OnLoadComplete(::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData* loadData)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_ThreadedTaskLoadGeo_HEU_LoadData*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSYNC_ONLOADCOMPLETE_OFFSET))(this, loadData);
		}

		::System::Void Resync()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ASSETSYNC_RESYNC_OFFSET))(this);
		}
	};
}

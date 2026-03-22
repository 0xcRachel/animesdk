#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/IRIClusterVolumeInfo.h"

namespace UnityEngine { class Material; }

#define UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_ADDVOLUME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1821A9B0)
#define UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_ADDVOLUME_OFFSET UNITYSDK_OFFSET(0x1821A9A0)
#define UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_DIRTYMATRIXBUFFER_OFFSET UNITYSDK_OFFSET(0x1821A9D0)
#define UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_GET_LAYERMASK_OFFSET UNITYSDK_OFFSET(0x1821A970)
#define UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1821A990)
#define UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_REMOVEVOLUMEUSEVOLUMEKEY_OFFSET UNITYSDK_OFFSET(0x1821A9C0)
#define UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_SET_LAYERMASK_OFFSET UNITYSDK_OFFSET(0x1821A980)

namespace UnityEngine
{
	inline static constexpr unsigned int RPGInstancedItemClusterVolumeManager_TypeDefinitionIndex = 4078;

	class RPGInstancedItemClusterVolumeManager : public ::UnityEngine::Behaviour
	{
	public:
		::System::UInt32 get_LayerMask()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_GET_LAYERMASK_OFFSET))(this);
		}

		::System::Void set_LayerMask(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_SET_LAYERMASK_OFFSET))(this, value);
		}

		::System::Void Init(::UnityEngine::Material* clusterMaterial, ::System::Int32 oneVertexFloat4Count, ::System::Int32 oneClusterIndexCount, ::System::Int32 matParamFloat4Count)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_INIT_OFFSET))(this, clusterMaterial, oneVertexFloat4Count, oneClusterIndexCount, matParamFloat4Count);
		}

		::System::Void AddVolume(::System::UInt64& volumeKey, ::UnityEngine::IRIClusterVolumeInfo volumeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64&, ::UnityEngine::IRIClusterVolumeInfo))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_ADDVOLUME_OFFSET))(this, volumeKey, volumeInfo);
		}

		::System::Boolean RemoveVolumeUseVolumeKey(::System::UInt64 volumeKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_REMOVEVOLUMEUSEVOLUMEKEY_OFFSET))(this, volumeKey);
		}

		::System::Void DirtyMatrixBuffer(::System::UInt64 volumeKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_DIRTYMATRIXBUFFER_OFFSET))(this, volumeKey);
		}

		::System::Void AddVolume_Injected(::System::UInt64& volumeKey, ::UnityEngine::IRIClusterVolumeInfo& volumeInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64&, ::UnityEngine::IRIClusterVolumeInfo&))((::PBYTE)hIl2Cpp + UNITYENGINE_RPGINSTANCEDITEMCLUSTERVOLUMEMANAGER_ADDVOLUME_INJECTED_OFFSET))(this, volumeKey, volumeInfo);
		}
	};
}

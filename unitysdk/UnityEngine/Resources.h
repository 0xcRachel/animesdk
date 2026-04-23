#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ResourceRequest; }

#define UNITYENGINE_RESOURCES_FINDOBJECTSOFTYPEALL_OFFSET UNITYSDK_OFFSET(0x18F215E0)
#define UNITYENGINE_RESOURCES_GETBUILTINRESOURCE_OFFSET UNITYSDK_OFFSET(0x18F21750)
#define UNITYENGINE_RESOURCES_LOADALL_1_OFFSET UNITYSDK_OFFSET(0x18F21700)
#define UNITYENGINE_RESOURCES_LOADALL_OFFSET UNITYSDK_OFFSET(0x18F216F0)
#define UNITYENGINE_RESOURCES_LOADASYNCINTERNAL_OFFSET UNITYSDK_OFFSET(0x18F216E0)
#define UNITYENGINE_RESOURCES_LOADASYNC_1_OFFSET UNITYSDK_OFFSET(0x18F216B0)
#define UNITYENGINE_RESOURCES_LOADASYNC_OFFSET UNITYSDK_OFFSET(0x18F21650)
#define UNITYENGINE_RESOURCES_LOAD_1_OFFSET UNITYSDK_OFFSET(0x18F21640)
#define UNITYENGINE_RESOURCES_LOAD_OFFSET UNITYSDK_OFFSET(0x18F215F0)
#define UNITYENGINE_RESOURCES_UNLOADASSET_OFFSET UNITYSDK_OFFSET(0x18F21760)
#define UNITYENGINE_RESOURCES_UNLOADUNUSEDASSETS_OFFSET UNITYSDK_OFFSET(0x18F21770)
#define UNITYENGINE_RESOURCES_UNLOADUNUSEDCACHEBUFFERS_OFFSET UNITYSDK_OFFSET(0x18F21780)
#define UNITYENGINE_RESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x18F21790)

namespace UnityEngine
{
	inline static constexpr unsigned int Resources_TypeDefinitionIndex = 4085;

	class Resources : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES__CTOR_OFFSET))(this);
		}

		static ::Il2CppArray<::UnityEngine::Object*>* FindObjectsOfTypeAll(::System::Type* type)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_FINDOBJECTSOFTYPEALL_OFFSET))(type);
		}

		static ::UnityEngine::Object* Load(::System::String* path)
		{
			return ((::UnityEngine::Object*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_LOAD_OFFSET))(path);
		}

		static ::UnityEngine::Object* Load_1(::System::String* path, ::System::Type* systemTypeInstance)
		{
			return ((::UnityEngine::Object*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_LOAD_1_OFFSET))(path, systemTypeInstance);
		}

		static ::UnityEngine::ResourceRequest* LoadAsync(::System::String* path)
		{
			return ((::UnityEngine::ResourceRequest*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_LOADASYNC_OFFSET))(path);
		}

		static ::UnityEngine::ResourceRequest* LoadAsync_1(::System::String* path, ::System::Type* type)
		{
			return ((::UnityEngine::ResourceRequest*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_LOADASYNC_1_OFFSET))(path, type);
		}

		static ::UnityEngine::ResourceRequest* LoadAsyncInternal(::System::String* path, ::System::Type* type)
		{
			return ((::UnityEngine::ResourceRequest*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_LOADASYNCINTERNAL_OFFSET))(path, type);
		}

		static ::Il2CppArray<::UnityEngine::Object*>* LoadAll(::System::String* path, ::System::Type* systemTypeInstance)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_LOADALL_OFFSET))(path, systemTypeInstance);
		}

		static ::Il2CppArray<::UnityEngine::Object*>* LoadAll_1(::System::String* path)
		{
			return ((::Il2CppArray<::UnityEngine::Object*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_LOADALL_1_OFFSET))(path);
		}

		static ::UnityEngine::Object* GetBuiltinResource(::System::Type* type, ::System::String* path)
		{
			return ((::UnityEngine::Object*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_GETBUILTINRESOURCE_OFFSET))(type, path);
		}

		static ::System::Void UnloadAsset(::UnityEngine::Object* assetToUnload)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_UNLOADASSET_OFFSET))(assetToUnload);
		}

		static ::UnityEngine::AsyncOperation* UnloadUnusedAssets()
		{
			return ((::UnityEngine::AsyncOperation*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_UNLOADUNUSEDASSETS_OFFSET))();
		}

		static ::System::Void UnloadUnusedCacheBuffers()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RESOURCES_UNLOADUNUSEDCACHEBUFFERS_OFFSET))();
		}
	};
}

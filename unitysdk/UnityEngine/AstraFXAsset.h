#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ComputeShaderAsset.h"

namespace System { class String; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_ASTRAFXASSET_FINDMESHINDEXBYNAME_OFFSET UNITYSDK_OFFSET(0x181DA110)
#define UNITYENGINE_ASTRAFXASSET_FINDPASSINDEXBYNAME_OFFSET UNITYSDK_OFFSET(0x181DA120)
#define UNITYENGINE_ASTRAFXASSET_FINDRESOURCEINDEXBYNAME_OFFSET UNITYSDK_OFFSET(0x181DA0F0)
#define UNITYENGINE_ASTRAFXASSET_GETMESHATINDEX_OFFSET UNITYSDK_OFFSET(0x181DA100)
#define UNITYENGINE_ASTRAFXASSET_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x181DA0E0)
#define UNITYENGINE_ASTRAFXASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x181DA0D0)

namespace UnityEngine
{
	inline static constexpr unsigned int AstraFXAsset_TypeDefinitionIndex = 3893;

	class AstraFXAsset : public ::UnityEngine::ComputeShaderAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXASSET__CTOR_OFFSET))(this);
		}

		::System::Int32 FindResourceIndexByName(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXASSET_FINDRESOURCEINDEXBYNAME_OFFSET))(this, name);
		}

		::UnityEngine::Mesh* GetMeshAtIndex(::System::Int32 index)
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXASSET_GETMESHATINDEX_OFFSET))(this, index);
		}

		::System::Int32 FindMeshIndexByName(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXASSET_FINDMESHINDEXBYNAME_OFFSET))(this, name);
		}

		::System::Int32 FindPassIndexByName(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXASSET_FINDPASSINDEXBYNAME_OFFSET))(this, name);
		}

		static ::System::Void Internal_Create(::UnityEngine::AstraFXAsset* asset)
		{
			return ((::System::Void(*)(::UnityEngine::AstraFXAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_ASTRAFXASSET_INTERNAL_CREATE_OFFSET))(asset);
		}
	};
}

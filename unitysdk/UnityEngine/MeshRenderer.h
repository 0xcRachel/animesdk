#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Renderer.h"

namespace UnityEngine { class Mesh; }

#define UNITYENGINE_MESHRENDERER_DONTSTRIPMESHRENDERER_OFFSET UNITYSDK_OFFSET(0x1820F3A0)
#define UNITYENGINE_MESHRENDERER_GETMATERIALENABLED_OFFSET UNITYSDK_OFFSET(0x1820F440)
#define UNITYENGINE_MESHRENDERER_GET_ADDITIONALVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x1820F3B0)
#define UNITYENGINE_MESHRENDERER_GET_SUBMESHSTARTINDEX_OFFSET UNITYSDK_OFFSET(0x1820F3D0)
#define UNITYENGINE_MESHRENDERER_SETMATERIALENABLED_OFFSET UNITYSDK_OFFSET(0x1820F430)
#define UNITYENGINE_MESHRENDERER_SETOVERRIDEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1820F400)
#define UNITYENGINE_MESHRENDERER_SETOVERRIDEWORLDAABB_INJECTED_OFFSET UNITYSDK_OFFSET(0x1820F3F0)
#define UNITYENGINE_MESHRENDERER_SETOVERRIDEWORLDAABB_OFFSET UNITYSDK_OFFSET(0x1820F3E0)
#define UNITYENGINE_MESHRENDERER_SET_ADDITIONALVERTEXSTREAMS_OFFSET UNITYSDK_OFFSET(0x1820F3C0)
#define UNITYENGINE_MESHRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1820F450)

namespace UnityEngine
{
	inline static constexpr unsigned int MeshRenderer_TypeDefinitionIndex = 3972;

	class MeshRenderer : public ::UnityEngine::Renderer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER__CTOR_OFFSET))(this);
		}

		::System::Void DontStripMeshRenderer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_DONTSTRIPMESHRENDERER_OFFSET))(this);
		}

		::UnityEngine::Mesh* get_additionalVertexStreams()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_GET_ADDITIONALVERTEXSTREAMS_OFFSET))(this);
		}

		::System::Void set_additionalVertexStreams(::UnityEngine::Mesh* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_SET_ADDITIONALVERTEXSTREAMS_OFFSET))(this, value);
		}

		::System::Int32 get_subMeshStartIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_GET_SUBMESHSTARTINDEX_OFFSET))(this);
		}

		::System::Void SetOverrideWorldAABB(::System::Boolean override, ::UnityEngine::Bounds bounds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_SETOVERRIDEWORLDAABB_OFFSET))(this, override, bounds);
		}

		::System::Void SetOverrideBounds(::System::Boolean override, ::UnityEngine::Bounds bounds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_SETOVERRIDEBOUNDS_OFFSET))(this, override, bounds);
		}

		::System::Void SetMaterialEnabled(::System::Int32 index, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_SETMATERIALENABLED_OFFSET))(this, index, enabled);
		}

		::System::Boolean GetMaterialEnabled(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_GETMATERIALENABLED_OFFSET))(this, index);
		}

		::System::Void SetOverrideWorldAABB_Injected(::System::Boolean override, ::UnityEngine::Bounds& bounds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_MESHRENDERER_SETOVERRIDEWORLDAABB_INJECTED_OFFSET))(this, override, bounds);
		}
	};
}

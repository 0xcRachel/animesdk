#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x22F4810)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EQUALS_OFFSET UNITYSDK_OFFSET(0x22F47C0)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18F1EB60)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_INTERNAL_OFFSET UNITYSDK_OFFSET(0x22F4730)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_OFFSET UNITYSDK_OFFSET(0x22F4740)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERA_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18F1EB40)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERA_INTERNAL_OFFSET UNITYSDK_OFFSET(0x22F4720)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERA_OFFSET UNITYSDK_OFFSET(0x22F4720)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x608A20)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETNUMBEROFCAMERAS_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18F1EB20)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETNUMBEROFCAMERAS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x22F4710)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETNUMBEROFCAMERAS_OFFSET UNITYSDK_OFFSET(0x22F4710)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INITIALIZESORTSETTINGS_OFFSET UNITYSDK_OFFSET(0x18F1EB00)
#define UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x6163B0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ScriptableRenderContext_TypeDefinitionIndex = 4575;

	struct alignas(8) ScriptableRenderContext
	{
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor(::System::IntPtr ptr)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT__CTOR_OFFSET))(this, ptr);
		}

		/*
		static ::System::Void InitializeSortSettings(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::SortingSettings& sortingSettings)
		{
			return ((::System::Void(*)(::UnityEngine::Camera*, ::UnityEngine::Rendering::SortingSettings&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_INITIALIZESORTSETTINGS_OFFSET))(camera, sortingSettings);
		}
		*/

		::System::Int32 GetNumberOfCameras_Internal()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETNUMBEROFCAMERAS_INTERNAL_OFFSET))(this);
		}

		::UnityEngine::Camera* GetCamera_Internal(::System::Int32 index)
		{
			return ((::UnityEngine::Camera*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERA_INTERNAL_OFFSET))(this, index);
		}

		::System::Void ExecuteCommandBuffer_Internal(::UnityEngine::Rendering::CommandBuffer* commandBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_INTERNAL_OFFSET))(this, commandBuffer);
		}

		::System::Int32 GetNumberOfCameras()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETNUMBEROFCAMERAS_OFFSET))(this);
		}

		::UnityEngine::Camera* GetCamera(::System::Int32 index)
		{
			return ((::UnityEngine::Camera*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERA_OFFSET))(this, index);
		}

		::System::Void ExecuteCommandBuffer(::UnityEngine::Rendering::CommandBuffer* commandBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_OFFSET))(this, commandBuffer);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::ScriptableRenderContext other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Int32 GetNumberOfCameras_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::Rendering::ScriptableRenderContext&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETNUMBEROFCAMERAS_INTERNAL_INJECTED_OFFSET))(_unity_self);
		}

		static ::UnityEngine::Camera* GetCamera_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, ::System::Int32 index)
		{
			return ((::UnityEngine::Camera*(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_GETCAMERA_INTERNAL_INJECTED_OFFSET))(_unity_self, index);
		}

		static ::System::Void ExecuteCommandBuffer_Internal_Injected(::UnityEngine::Rendering::ScriptableRenderContext& _unity_self, ::UnityEngine::Rendering::CommandBuffer* commandBuffer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLERENDERCONTEXT_EXECUTECOMMANDBUFFER_INTERNAL_INJECTED_OFFSET))(_unity_self, commandBuffer);
		}
	};
}

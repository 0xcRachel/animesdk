#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/GCFreeClosure/ClosureEvent_2.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class RenderPipeline; }
namespace UnityEngine::Rendering { class RenderPipelineAsset; }

#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_CLEANUPRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x182302F0)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_DODRAWGIZMOS_INTERNAL_OFFSET UNITYSDK_OFFSET(0x18230CD0)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_DOPREPARECRP_INTERNAL_OFFSET UNITYSDK_OFFSET(0x18230D60)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_DORENDERLOOP_INTERNAL_OFFSET UNITYSDK_OFFSET(0x18230A70)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_FORCECLEANUPPIPELINE_OFFSET UNITYSDK_OFFSET(0x1822F800)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_GETCAMERAS_OFFSET UNITYSDK_OFFSET(0x18230920)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_GET_CPPENABLE_OFFSET UNITYSDK_OFFSET(0x18230C60)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_GET_CURRENTPIPELINE_OFFSET UNITYSDK_OFFSET(0x18230830)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_PREPARERENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x18230590)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_SET_CPPENABLE_OFFSET UNITYSDK_OFFSET(0x18230CA0)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_SET_CURRENTPIPELINE_OFFSET UNITYSDK_OFFSET(0x18230860)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18230E30)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderPipelineManager_TypeDefinitionIndex = 4546;

	class RenderPipelineManager : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::RenderPipeline** StaticGet__currentPipeline_k__BackingField()
		{
			return (::UnityEngine::Rendering::RenderPipeline**)Il2CppClass::FromTypeDefinitionIndex(RenderPipelineManager_TypeDefinitionIndex)->GetStaticField(0x1A990);
		}
		static ::UnityEngine::Rendering::RenderPipelineAsset** StaticGet_s_CurrentPipelineAsset()
		{
			return (::UnityEngine::Rendering::RenderPipelineAsset**)Il2CppClass::FromTypeDefinitionIndex(RenderPipelineManager_TypeDefinitionIndex)->GetStaticField(0x1A998);
		}
		static ::UnityEngine::GCFreeClosure::ClosureEvent_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>* StaticGet_beginCameraRendering()
		{
			return (::UnityEngine::GCFreeClosure::ClosureEvent_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>*)Il2CppClass::FromTypeDefinitionIndex(RenderPipelineManager_TypeDefinitionIndex)->GetStaticField(0x1A9A0);
		}
		static ::Il2CppArray<::UnityEngine::Camera*>** StaticGet_s_Cameras()
		{
			return (::Il2CppArray<::UnityEngine::Camera*>**)Il2CppClass::FromTypeDefinitionIndex(RenderPipelineManager_TypeDefinitionIndex)->GetStaticField(0x1A9B0);
		}
		static ::UnityEngine::GCFreeClosure::ClosureEvent_2<::UnityEngine::Rendering::ScriptableRenderContext, ::Il2CppArray<::UnityEngine::Camera*>*>* StaticGet_beginFrameRendering()
		{
			return (::UnityEngine::GCFreeClosure::ClosureEvent_2<::UnityEngine::Rendering::ScriptableRenderContext, ::Il2CppArray<::UnityEngine::Camera*>*>*)Il2CppClass::FromTypeDefinitionIndex(RenderPipelineManager_TypeDefinitionIndex)->GetStaticField(0x1A9B8);
		}
		static ::System::Boolean* StaticGet__cppEnable_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RenderPipelineManager_TypeDefinitionIndex)->GetStaticField(0x64C0);
		}
		static ::System::Int32* StaticGet_s_CameraCapacity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderPipelineManager_TypeDefinitionIndex)->GetStaticField(0x64C4);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::RenderPipeline* get_currentPipeline()
		{
			return ((::UnityEngine::Rendering::RenderPipeline*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_GET_CURRENTPIPELINE_OFFSET))();
		}

		static ::System::Void set_currentPipeline(::UnityEngine::Rendering::RenderPipeline* value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::RenderPipeline*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_SET_CURRENTPIPELINE_OFFSET))(value);
		}

		static ::System::Void CleanupRenderPipeline()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_CLEANUPRENDERPIPELINE_OFFSET))();
		}

		static ::System::Void GetCameras(::UnityEngine::Rendering::ScriptableRenderContext context)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_GETCAMERAS_OFFSET))(context);
		}

		static ::System::Void DoRenderLoop_Internal(::UnityEngine::Rendering::RenderPipelineAsset* pipe, ::System::IntPtr loopPtr)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::RenderPipelineAsset*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_DORENDERLOOP_INTERNAL_OFFSET))(pipe, loopPtr);
		}

		static ::System::Boolean get_cppEnable()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_GET_CPPENABLE_OFFSET))();
		}

		static ::System::Void set_cppEnable(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_SET_CPPENABLE_OFFSET))(value);
		}

		static ::System::Void PrepareRenderPipeline(::UnityEngine::Rendering::RenderPipelineAsset* pipelineAsset)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::RenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_PREPARERENDERPIPELINE_OFFSET))(pipelineAsset);
		}

		static ::System::Void DoDrawGizmos_Internal()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_DODRAWGIZMOS_INTERNAL_OFFSET))();
		}

		static ::System::Void ForceCleanupPipeline(::UnityEngine::Rendering::RenderPipelineAsset* pipelineAsset)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::RenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_FORCECLEANUPPIPELINE_OFFSET))(pipelineAsset);
		}

		static ::System::Void DoPrepareCRP_Internal(::UnityEngine::Rendering::RenderPipelineAsset* pipe, ::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CRPMainCameraDesc mainCameraDesc)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::RenderPipelineAsset*, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CRPMainCameraDesc))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_DOPREPARECRP_INTERNAL_OFFSET))(pipe, camera, mainCameraDesc);
		}
	};
}

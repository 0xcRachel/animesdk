#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/GfxBufferTarget.h"
#include "unitysdk/UnityEngine/Renderer.h"
#include "unitysdk/UnityEngine/SkinQuality.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define UNITYENGINE_SKINNEDMESHRENDERER_BAKEMESH_OFFSET UNITYSDK_OFFSET(0x182387D0)
#define UNITYENGINE_SKINNEDMESHRENDERER_GETBLENDSHAPEWEIGHT_OFFSET UNITYSDK_OFFSET(0x182387B0)
#define UNITYENGINE_SKINNEDMESHRENDERER_GETLOCALAABB_INJECTED_OFFSET UNITYSDK_OFFSET(0x18238830)
#define UNITYENGINE_SKINNEDMESHRENDERER_GETLOCALAABB_OFFSET UNITYSDK_OFFSET(0x182387E0)
#define UNITYENGINE_SKINNEDMESHRENDERER_GETMATERIALENABLED_OFFSET UNITYSDK_OFFSET(0x18238A50)
#define UNITYENGINE_SKINNEDMESHRENDERER_GETPREVIOUSVERTEXBUFFERIDIMPL_OFFSET UNITYSDK_OFFSET(0x182389D0)
#define UNITYENGINE_SKINNEDMESHRENDERER_GETPREVIOUSVERTEXBUFFERID_OFFSET UNITYSDK_OFFSET(0x18238960)
#define UNITYENGINE_SKINNEDMESHRENDERER_GETVERTEXBUFFERIDIMPL_OFFSET UNITYSDK_OFFSET(0x18238950)
#define UNITYENGINE_SKINNEDMESHRENDERER_GETVERTEXBUFFERID_OFFSET UNITYSDK_OFFSET(0x182388E0)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_BONES_OFFSET UNITYSDK_OFFSET(0x18238750)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_BOUNDEXPANDINGSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18238B90)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_BOUNDEXPANDINGSCALE_OFFSET UNITYSDK_OFFSET(0x18238B40)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_DISABLEGPUSKIN_OFFSET UNITYSDK_OFFSET(0x18238BC0)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_ENABLEGPUSKINNINGMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x18238B00)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_ENABLESKINNING_OFFSET UNITYSDK_OFFSET(0x18238A80)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_FORCEMATRIXRECALCULATIONPERRENDER_OFFSET UNITYSDK_OFFSET(0x18238710)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_GPUSKINNINGMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x18238B20)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_LAZYUPDATE_OFFSET UNITYSDK_OFFSET(0x18238AA0)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_LOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x18238860)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0x182386D0)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_ROOTBONELOCOPTIMIZETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x18238AC0)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_ROOTBONE_OFFSET UNITYSDK_OFFSET(0x18238730)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_SHAREDMESH_OFFSET UNITYSDK_OFFSET(0x18238770)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_SKINNEDMOTIONVECTORS_OFFSET UNITYSDK_OFFSET(0x18238790)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_UPDATEWHENOFFSCREEN_OFFSET UNITYSDK_OFFSET(0x182386F0)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_USEOPTIMIZEDANIMATIONSKINNINGROOT_OFFSET UNITYSDK_OFFSET(0x18238AE0)
#define UNITYENGINE_SKINNEDMESHRENDERER_GET_VERTEXBUFFERTARGET_OFFSET UNITYSDK_OFFSET(0x18238A60)
#define UNITYENGINE_SKINNEDMESHRENDERER_MARKALLSKINNEDMESHVERTEXDIRTY_OFFSET UNITYSDK_OFFSET(0x182389E0)
#define UNITYENGINE_SKINNEDMESHRENDERER_SETBLENDSHAPEWEIGHT_OFFSET UNITYSDK_OFFSET(0x182387C0)
#define UNITYENGINE_SKINNEDMESHRENDERER_SETLOCALAABB_INJECTED_OFFSET UNITYSDK_OFFSET(0x18238850)
#define UNITYENGINE_SKINNEDMESHRENDERER_SETLOCALAABB_OFFSET UNITYSDK_OFFSET(0x18238840)
#define UNITYENGINE_SKINNEDMESHRENDERER_SETMATERIALENABLED_OFFSET UNITYSDK_OFFSET(0x18238A40)
#define UNITYENGINE_SKINNEDMESHRENDERER_SETOVERRIDEBOUNDS_OFFSET UNITYSDK_OFFSET(0x18238A10)
#define UNITYENGINE_SKINNEDMESHRENDERER_SETOVERRIDEWORLDAABB_INJECTED_OFFSET UNITYSDK_OFFSET(0x18238A00)
#define UNITYENGINE_SKINNEDMESHRENDERER_SETOVERRIDEWORLDAABB_OFFSET UNITYSDK_OFFSET(0x182389F0)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_BONES_OFFSET UNITYSDK_OFFSET(0x18238760)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_BOUNDEXPANDINGSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18238BB0)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_BOUNDEXPANDINGSCALE_OFFSET UNITYSDK_OFFSET(0x18238BA0)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_DISABLEGPUSKIN_OFFSET UNITYSDK_OFFSET(0x18238BD0)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_ENABLEGPUSKINNINGMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x18238B10)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_ENABLESKINNING_OFFSET UNITYSDK_OFFSET(0x18238A90)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_FORCEMATRIXRECALCULATIONPERRENDER_OFFSET UNITYSDK_OFFSET(0x18238720)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_GPUSKINNINGMAXCOUNT_OFFSET UNITYSDK_OFFSET(0x18238B30)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_LAZYUPDATE_OFFSET UNITYSDK_OFFSET(0x18238AB0)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_LOCALBOUNDS_OFFSET UNITYSDK_OFFSET(0x182388B0)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_QUALITY_OFFSET UNITYSDK_OFFSET(0x182386E0)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_ROOTBONELOCOPTIMIZETHRESHOLD_OFFSET UNITYSDK_OFFSET(0x18238AD0)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_ROOTBONE_OFFSET UNITYSDK_OFFSET(0x18238740)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_SHAREDMESH_OFFSET UNITYSDK_OFFSET(0x18238780)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_SKINNEDMOTIONVECTORS_OFFSET UNITYSDK_OFFSET(0x182387A0)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_UPDATEWHENOFFSCREEN_OFFSET UNITYSDK_OFFSET(0x18238700)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_USEOPTIMIZEDANIMATIONSKINNINGROOT_OFFSET UNITYSDK_OFFSET(0x18238AF0)
#define UNITYENGINE_SKINNEDMESHRENDERER_SET_VERTEXBUFFERTARGET_OFFSET UNITYSDK_OFFSET(0x18238A70)
#define UNITYENGINE_SKINNEDMESHRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x18238BE0)

namespace UnityEngine
{
	inline static constexpr unsigned int SkinnedMeshRenderer_TypeDefinitionIndex = 3971;

	class SkinnedMeshRenderer : public ::UnityEngine::Renderer
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER__CTOR_OFFSET))(this);
		}

		::UnityEngine::SkinQuality get_quality()
		{
			return ((::UnityEngine::SkinQuality(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_QUALITY_OFFSET))(this);
		}

		::System::Void set_quality(::UnityEngine::SkinQuality value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SkinQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_QUALITY_OFFSET))(this, value);
		}

		::System::Boolean get_updateWhenOffscreen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_UPDATEWHENOFFSCREEN_OFFSET))(this);
		}

		::System::Void set_updateWhenOffscreen(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_UPDATEWHENOFFSCREEN_OFFSET))(this, value);
		}

		::System::Boolean get_forceMatrixRecalculationPerRender()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_FORCEMATRIXRECALCULATIONPERRENDER_OFFSET))(this);
		}

		::System::Void set_forceMatrixRecalculationPerRender(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_FORCEMATRIXRECALCULATIONPERRENDER_OFFSET))(this, value);
		}

		::UnityEngine::Transform* get_rootBone()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_ROOTBONE_OFFSET))(this);
		}

		::System::Void set_rootBone(::UnityEngine::Transform* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_ROOTBONE_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Transform*>* get_bones()
		{
			return ((::Il2CppArray<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_BONES_OFFSET))(this);
		}

		::System::Void set_bones(::Il2CppArray<::UnityEngine::Transform*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_BONES_OFFSET))(this, value);
		}

		::UnityEngine::Mesh* get_sharedMesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_SHAREDMESH_OFFSET))(this);
		}

		::System::Void set_sharedMesh(::UnityEngine::Mesh* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_SHAREDMESH_OFFSET))(this, value);
		}

		::System::Boolean get_skinnedMotionVectors()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_SKINNEDMOTIONVECTORS_OFFSET))(this);
		}

		::System::Void set_skinnedMotionVectors(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_SKINNEDMOTIONVECTORS_OFFSET))(this, value);
		}

		::System::Single GetBlendShapeWeight(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GETBLENDSHAPEWEIGHT_OFFSET))(this, index);
		}

		::System::Void SetBlendShapeWeight(::System::Int32 index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SETBLENDSHAPEWEIGHT_OFFSET))(this, index, value);
		}

		::System::Void BakeMesh(::UnityEngine::Mesh* mesh)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_BAKEMESH_OFFSET))(this, mesh);
		}

		::UnityEngine::Bounds GetLocalAABB()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GETLOCALAABB_OFFSET))(this);
		}

		::System::Void SetLocalAABB(::UnityEngine::Bounds b)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SETLOCALAABB_OFFSET))(this, b);
		}

		::UnityEngine::Bounds get_localBounds()
		{
			return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_LOCALBOUNDS_OFFSET))(this);
		}

		::System::Void set_localBounds(::UnityEngine::Bounds value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_LOCALBOUNDS_OFFSET))(this, value);
		}

		::System::UInt64 GetVertexBufferID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GETVERTEXBUFFERID_OFFSET))(this);
		}

		::System::UInt64 GetPreviousVertexBufferID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GETPREVIOUSVERTEXBUFFERID_OFFSET))(this);
		}

		::System::UInt64 GetVertexBufferIDImpl()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GETVERTEXBUFFERIDIMPL_OFFSET))(this);
		}

		::System::UInt64 GetPreviousVertexBufferIDImpl()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GETPREVIOUSVERTEXBUFFERIDIMPL_OFFSET))(this);
		}

		static ::System::Void MarkAllSkinnedMeshVertexDirty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_MARKALLSKINNEDMESHVERTEXDIRTY_OFFSET))();
		}

		::System::Void SetOverrideWorldAABB(::System::Boolean override, ::UnityEngine::Bounds bounds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SETOVERRIDEWORLDAABB_OFFSET))(this, override, bounds);
		}

		::System::Void SetOverrideBounds(::System::Boolean override, ::UnityEngine::Bounds bounds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SETOVERRIDEBOUNDS_OFFSET))(this, override, bounds);
		}

		::System::Void SetMaterialEnabled(::System::Int32 index, ::System::Boolean enabled)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SETMATERIALENABLED_OFFSET))(this, index, enabled);
		}

		::System::Boolean GetMaterialEnabled(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GETMATERIALENABLED_OFFSET))(this, index);
		}

		::UnityEngine::GfxBufferTarget get_vertexBufferTarget()
		{
			return ((::UnityEngine::GfxBufferTarget(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_VERTEXBUFFERTARGET_OFFSET))(this);
		}

		::System::Void set_vertexBufferTarget(::UnityEngine::GfxBufferTarget value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GfxBufferTarget))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_VERTEXBUFFERTARGET_OFFSET))(this, value);
		}

		::System::Boolean get_enableSkinning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_ENABLESKINNING_OFFSET))(this);
		}

		::System::Void set_enableSkinning(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_ENABLESKINNING_OFFSET))(this, value);
		}

		::System::Boolean get_lazyUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_LAZYUPDATE_OFFSET))(this);
		}

		::System::Void set_lazyUpdate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_LAZYUPDATE_OFFSET))(this, value);
		}

		static ::System::Single get_rootBoneLocOptimizeThreshold()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_ROOTBONELOCOPTIMIZETHRESHOLD_OFFSET))();
		}

		static ::System::Void set_rootBoneLocOptimizeThreshold(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_ROOTBONELOCOPTIMIZETHRESHOLD_OFFSET))(value);
		}

		static ::System::Boolean get_useOptimizedAnimationSkinningRoot()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_USEOPTIMIZEDANIMATIONSKINNINGROOT_OFFSET))();
		}

		static ::System::Void set_useOptimizedAnimationSkinningRoot(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_USEOPTIMIZEDANIMATIONSKINNINGROOT_OFFSET))(value);
		}

		static ::System::Boolean get_enableGpuSkinningMaxCount()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_ENABLEGPUSKINNINGMAXCOUNT_OFFSET))();
		}

		static ::System::Void set_enableGpuSkinningMaxCount(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_ENABLEGPUSKINNINGMAXCOUNT_OFFSET))(value);
		}

		static ::System::UInt32 get_gpuSkinningMaxCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_GPUSKINNINGMAXCOUNT_OFFSET))();
		}

		static ::System::Void set_gpuSkinningMaxCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_GPUSKINNINGMAXCOUNT_OFFSET))(value);
		}

		::UnityEngine::Vector3 get_boundExpandingScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_BOUNDEXPANDINGSCALE_OFFSET))(this);
		}

		::System::Void set_boundExpandingScale(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_BOUNDEXPANDINGSCALE_OFFSET))(this, value);
		}

		::System::Boolean get_disableGPUSkin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_DISABLEGPUSKIN_OFFSET))(this);
		}

		::System::Void set_disableGPUSkin(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_DISABLEGPUSKIN_OFFSET))(this, value);
		}

		::System::Void GetLocalAABB_Injected(::UnityEngine::Bounds& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GETLOCALAABB_INJECTED_OFFSET))(this, ret);
		}

		::System::Void SetLocalAABB_Injected(::UnityEngine::Bounds& b)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SETLOCALAABB_INJECTED_OFFSET))(this, b);
		}

		::System::Void SetOverrideWorldAABB_Injected(::System::Boolean override, ::UnityEngine::Bounds& bounds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Bounds&))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SETOVERRIDEWORLDAABB_INJECTED_OFFSET))(this, override, bounds);
		}

		::System::Void get_boundExpandingScale_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_GET_BOUNDEXPANDINGSCALE_INJECTED_OFFSET))(this, ret);
		}

		::System::Void set_boundExpandingScale_Injected(::UnityEngine::Vector3& value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_SKINNEDMESHRENDERER_SET_BOUNDEXPANDINGSCALE_INJECTED_OFFSET))(this, value);
		}
	};
}

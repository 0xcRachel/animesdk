#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/CubemapFace.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/FilterMode.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MeshTopology.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/RectInt.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/RenderTextureMemoryless.h"
#include "unitysdk/UnityEngine/Rendering/CommandBufferExecutionFlags.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferLoadAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferStoreAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetBinding.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/RenderTextureSubElement.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_COMMANDBUFFER_BEGINSAMPLE_OFFSET UNITYSDK_OFFSET(0x18F183E0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_1_OFFSET UNITYSDK_OFFSET(0x18F1A620)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_2_OFFSET UNITYSDK_OFFSET(0x18F1A6B0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_3_OFFSET UNITYSDK_OFFSET(0x18F1A740)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_IDENTIFIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18F17F90)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0x18F17F40)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_OFFSET UNITYSDK_OFFSET(0x18F1A5A0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_TEXTURE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18F17F30)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_TEXTURE_OFFSET UNITYSDK_OFFSET(0x18F17EE0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRANDOMWRITETARGETS_OFFSET UNITYSDK_OFFSET(0x18F17EA0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_1_OFFSET UNITYSDK_OFFSET(0x18F18230)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_2_OFFSET UNITYSDK_OFFSET(0x18F18240)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_3_OFFSET UNITYSDK_OFFSET(0x18F182A0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_INJECTED_OFFSET UNITYSDK_OFFSET(0x18F18220)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x18F18210)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_CLEAR_OFFSET UNITYSDK_OFFSET(0x18F17DE0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_COPYTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x18F1A490)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_COPYTEXTURE_2_OFFSET UNITYSDK_OFFSET(0x18F1A500)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_COPYTEXTURE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x18F17ED0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_COPYTEXTURE_OFFSET UNITYSDK_OFFSET(0x18F1A420)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DISABLESHADERKEYWORD_OFFSET UNITYSDK_OFFSET(0x18F18380)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DISPATCHCOMPUTE_OFFSET UNITYSDK_OFFSET(0x18F198F0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x18F19770)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18F19790)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESHINSTANCEDINDIRECT_OFFSET UNITYSDK_OFFSET(0x18F1A210)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESH_1_OFFSET UNITYSDK_OFFSET(0x18F19B40)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESH_2_OFFSET UNITYSDK_OFFSET(0x18F19BB0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESH_OFFSET UNITYSDK_OFFSET(0x18F19900)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWOCCLUSIONMESH_OFFSET UNITYSDK_OFFSET(0x18F1A3C0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWPROCEDURALINDIRECT_1_OFFSET UNITYSDK_OFFSET(0x18F1A130)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWPROCEDURALINDIRECT_2_OFFSET UNITYSDK_OFFSET(0x18F1A1A0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWPROCEDURALINDIRECT_OFFSET UNITYSDK_OFFSET(0x18F19FE0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWPROCEDURAL_OFFSET UNITYSDK_OFFSET(0x18F19EC0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWRENDERER_1_OFFSET UNITYSDK_OFFSET(0x18F19E00)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWRENDERER_2_OFFSET UNITYSDK_OFFSET(0x18F19E40)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWRENDERER_3_OFFSET UNITYSDK_OFFSET(0x18F19E80)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWRENDERER_OFFSET UNITYSDK_OFFSET(0x18F19C20)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_ENABLESHADERKEYWORD_OFFSET UNITYSDK_OFFSET(0x18F18370)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_ENDSAMPLE_OFFSET UNITYSDK_OFFSET(0x18F183F0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18F19700)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRTWITHDESCRIPTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x18F18170)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRTWITHDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x18F18160)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_1_OFFSET UNITYSDK_OFFSET(0x18F17FB0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_2_OFFSET UNITYSDK_OFFSET(0x18F18020)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_3_OFFSET UNITYSDK_OFFSET(0x18F18080)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_4_OFFSET UNITYSDK_OFFSET(0x18F180D0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_5_OFFSET UNITYSDK_OFFSET(0x18F18180)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_6_OFFSET UNITYSDK_OFFSET(0x18F181C0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_OFFSET UNITYSDK_OFFSET(0x18F17FA0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_GET_SIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x18F17DD0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INITBUFFER_OFFSET UNITYSDK_OFFSET(0x18F17CF0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DISPATCHCOMPUTE_OFFSET UNITYSDK_OFFSET(0x18F17DB0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWMESHINSTANCEDINDIRECT_OFFSET UNITYSDK_OFFSET(0x18F17E60)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWMESH_INJECTED_OFFSET UNITYSDK_OFFSET(0x18F17E00)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWMESH_OFFSET UNITYSDK_OFFSET(0x18F17DF0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWOCCLUSIONMESH_INJECTED_OFFSET UNITYSDK_OFFSET(0x18F17E80)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWOCCLUSIONMESH_OFFSET UNITYSDK_OFFSET(0x18F17E70)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWPROCEDURALINDIRECT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18F17E50)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWPROCEDURALINDIRECT_OFFSET UNITYSDK_OFFSET(0x18F17E40)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWPROCEDURAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18F17E30)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWPROCEDURAL_OFFSET UNITYSDK_OFFSET(0x18F17E20)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWRENDERER_OFFSET UNITYSDK_OFFSET(0x18F17E10)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_SETCOMPUTETEXTUREPARAM_OFFSET UNITYSDK_OFFSET(0x18F17D90)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_ISSUEPLUGINCUSTOMTEXTUREUPDATEINTERNAL_OFFSET UNITYSDK_OFFSET(0x18F18410)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_ISSUEPLUGINCUSTOMTEXTUREUPDATEV2_OFFSET UNITYSDK_OFFSET(0x18F1A8F0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_ISSUEPLUGINEVENTANDDATAINTERNAL_OFFSET UNITYSDK_OFFSET(0x18F18400)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_ISSUEPLUGINEVENTANDDATA_OFFSET UNITYSDK_OFFSET(0x18F1A850)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_RELEASEBUFFER_OFFSET UNITYSDK_OFFSET(0x18F17D00)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_RELEASETEMPORARYRT_OFFSET UNITYSDK_OFFSET(0x18F18200)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_RELEASE_OFFSET UNITYSDK_OFFSET(0x18F19800)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCAMERARLM_OFFSET UNITYSDK_OFFSET(0x18F1A960)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEBUFFERPARAM_OFFSET UNITYSDK_OFFSET(0x18F17DA0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEFLOATPARAM_OFFSET UNITYSDK_OFFSET(0x18F17D10)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEINTPARAM_OFFSET UNITYSDK_OFFSET(0x18F17D20)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEMATRIXARRAYPARAM_OFFSET UNITYSDK_OFFSET(0x18F17D80)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEMATRIXPARAM_INJECTED_OFFSET UNITYSDK_OFFSET(0x18F17D70)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEMATRIXPARAM_OFFSET UNITYSDK_OFFSET(0x18F17D60)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTETEXTUREPARAM_1_OFFSET UNITYSDK_OFFSET(0x18F198C0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTETEXTUREPARAM_OFFSET UNITYSDK_OFFSET(0x18F19850)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEVECTORARRAYPARAM_OFFSET UNITYSDK_OFFSET(0x18F17D50)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEVECTORPARAM_INJECTED_OFFSET UNITYSDK_OFFSET(0x18F17D40)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEVECTORPARAM_OFFSET UNITYSDK_OFFSET(0x18F17D30)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALBUFFER_OFFSET UNITYSDK_OFFSET(0x18F183D0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALCOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x18F18340)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALCOLOR_OFFSET UNITYSDK_OFFSET(0x18F18330)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALFLOAT_1_OFFSET UNITYSDK_OFFSET(0x18F1A7D0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALFLOAT_OFFSET UNITYSDK_OFFSET(0x18F182F0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALINT_OFFSET UNITYSDK_OFFSET(0x18F18300)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALMATRIX_INJECTED_OFFSET UNITYSDK_OFFSET(0x18F18360)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALMATRIX_OFFSET UNITYSDK_OFFSET(0x18F18350)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALTEXTUREEXT_OFFSET UNITYSDK_OFFSET(0x18F1A940)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALTEXTURE_1_OFFSET UNITYSDK_OFFSET(0x18F1A830)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALTEXTURE_IMPL_OFFSET UNITYSDK_OFFSET(0x18F183C0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALTEXTURE_OFFSET UNITYSDK_OFFSET(0x18F1A810)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALVECTORARRAY_OFFSET UNITYSDK_OFFSET(0x18F183B0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALVECTOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x18F18320)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALVECTOR_OFFSET UNITYSDK_OFFSET(0x18F18310)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRANDOMWRITETARGET_OFFSET UNITYSDK_OFFSET(0x18F1A3E0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRANDOMWRITETARGET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x18F17E90)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETCOLORDEPTH_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18F196D0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETCOLORDEPTH_INTERNAL_OFFSET UNITYSDK_OFFSET(0x18F18E70)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETEXT_OFFSET UNITYSDK_OFFSET(0x18F1A950)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETMULTISUBTARGET_INJECTED_OFFSET UNITYSDK_OFFSET(0x18F196F0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETMULTISUBTARGET_OFFSET UNITYSDK_OFFSET(0x18F19220)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETMULTI_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18F196E0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETMULTI_INTERNAL_OFFSET UNITYSDK_OFFSET(0x18F19060)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETSINGLE_INTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18F196C0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETSINGLE_INTERNAL_OFFSET UNITYSDK_OFFSET(0x18F18740)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_10_OFFSET UNITYSDK_OFFSET(0x18F18EC0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_11_OFFSET UNITYSDK_OFFSET(0x18F19070)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_12_OFFSET UNITYSDK_OFFSET(0x18F19230)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_1_OFFSET UNITYSDK_OFFSET(0x18F185A0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_2_OFFSET UNITYSDK_OFFSET(0x18F184C0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_3_OFFSET UNITYSDK_OFFSET(0x18F18670)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_4_OFFSET UNITYSDK_OFFSET(0x18F18750)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_5_OFFSET UNITYSDK_OFFSET(0x18F18910)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_6_OFFSET UNITYSDK_OFFSET(0x18F18B60)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_7_OFFSET UNITYSDK_OFFSET(0x18F18A10)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_8_OFFSET UNITYSDK_OFFSET(0x18F18D60)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_9_OFFSET UNITYSDK_OFFSET(0x18F18E80)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x18F18420)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETVIEWPORT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18F17EC0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETVIEWPORT_OFFSET UNITYSDK_OFFSET(0x18F17EB0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETVIEWPROJECTIONMATRICES_INJECTED_OFFSET UNITYSDK_OFFSET(0x18F183A0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SETVIEWPROJECTIONMATRICES_OFFSET UNITYSDK_OFFSET(0x18F18390)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_SET_NAME_OFFSET UNITYSDK_OFFSET(0x18F17DC0)
#define UNITYENGINE_RENDERING_COMMANDBUFFER_VALIDATEAGAINSTEXECUTIONFLAGS_OFFSET UNITYSDK_OFFSET(0x18F18290)
#define UNITYENGINE_RENDERING_COMMANDBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x18F197E0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CommandBuffer_TypeDefinitionIndex = 4539;

	class CommandBuffer : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER__CTOR_OFFSET))(this);
		}

		static ::System::IntPtr InitBuffer()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INITBUFFER_OFFSET))();
		}

		::System::Void ReleaseBuffer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_RELEASEBUFFER_OFFSET))(this);
		}

		::System::Void SetComputeFloatParam(::UnityEngine::ComputeShader* computeShader, ::System::Int32 nameID, ::System::Single val)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEFLOATPARAM_OFFSET))(this, computeShader, nameID, val);
		}

		::System::Void SetComputeIntParam(::UnityEngine::ComputeShader* computeShader, ::System::Int32 nameID, ::System::Int32 val)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEINTPARAM_OFFSET))(this, computeShader, nameID, val);
		}

		::System::Void SetComputeVectorParam(::UnityEngine::ComputeShader* computeShader, ::System::Int32 nameID, ::UnityEngine::Vector4 val)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEVECTORPARAM_OFFSET))(this, computeShader, nameID, val);
		}

		::System::Void SetComputeVectorArrayParam(::UnityEngine::ComputeShader* computeShader, ::System::Int32 nameID, ::Il2CppArray<::UnityEngine::Vector4>* values)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEVECTORARRAYPARAM_OFFSET))(this, computeShader, nameID, values);
		}

		::System::Void SetComputeMatrixParam(::UnityEngine::ComputeShader* computeShader, ::System::Int32 nameID, ::UnityEngine::Matrix4x4 val)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEMATRIXPARAM_OFFSET))(this, computeShader, nameID, val);
		}

		::System::Void SetComputeMatrixArrayParam(::UnityEngine::ComputeShader* computeShader, ::System::Int32 nameID, ::Il2CppArray<::UnityEngine::Matrix4x4>* values)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::Il2CppArray<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEMATRIXARRAYPARAM_OFFSET))(this, computeShader, nameID, values);
		}

		::System::Void Internal_SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, ::System::Int32 kernelIndex, ::System::Int32 nameID, ::UnityEngine::Rendering::RenderTargetIdentifier& rt, ::System::Int32 mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement element)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Int32, ::UnityEngine::Rendering::RenderTextureSubElement))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_SETCOMPUTETEXTUREPARAM_OFFSET))(this, computeShader, kernelIndex, nameID, rt, mipLevel, element);
		}

		::System::Void SetComputeBufferParam(::UnityEngine::ComputeShader* computeShader, ::System::Int32 kernelIndex, ::System::Int32 nameID, ::UnityEngine::ComputeBuffer* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEBUFFERPARAM_OFFSET))(this, computeShader, kernelIndex, nameID, buffer);
		}

		::System::Void Internal_DispatchCompute(::UnityEngine::ComputeShader* computeShader, ::System::Int32 kernelIndex, ::System::Int32 threadGroupsX, ::System::Int32 threadGroupsY, ::System::Int32 threadGroupsZ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DISPATCHCOMPUTE_OFFSET))(this, computeShader, kernelIndex, threadGroupsX, threadGroupsY, threadGroupsZ);
		}

		::System::Void set_name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SET_NAME_OFFSET))(this, value);
		}

		::System::Int32 get_sizeInBytes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_GET_SIZEINBYTES_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_CLEAR_OFFSET))(this);
		}

		::System::Void Internal_DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, ::System::Int32 submeshIndex, ::System::Int32 shaderPass, ::UnityEngine::MaterialPropertyBlock* properties, ::Il2CppArray<::System::String*>* keywords, ::System::Boolean appendKeywords)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWMESH_OFFSET))(this, mesh, matrix, material, submeshIndex, shaderPass, properties, keywords, appendKeywords);
		}

		::System::Void Internal_DrawRenderer(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material, ::System::Int32 submeshIndex, ::System::Int32 shaderPass, ::Il2CppArray<::System::String*>* keywords, ::System::Boolean appendKeywords, ::System::UInt32 RLM, ::System::Boolean ignoreMpb)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::String*>*, ::System::Boolean, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWRENDERER_OFFSET))(this, renderer, material, submeshIndex, shaderPass, keywords, appendKeywords, RLM, ignoreMpb);
		}

		::System::Void Internal_DrawProcedural(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, ::System::Int32 shaderPass, ::UnityEngine::MeshTopology topology, ::System::Int32 vertexCount, ::System::Int32 instanceCount, ::UnityEngine::MaterialPropertyBlock* properties)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MeshTopology, ::System::Int32, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWPROCEDURAL_OFFSET))(this, matrix, material, shaderPass, topology, vertexCount, instanceCount, properties);
		}

		::System::Void Internal_DrawProceduralIndirect(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, ::System::Int32 shaderPass, ::UnityEngine::MeshTopology topology, ::UnityEngine::ComputeBuffer* bufferWithArgs, ::System::Int32 argsOffset, ::UnityEngine::MaterialPropertyBlock* properties)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MeshTopology, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWPROCEDURALINDIRECT_OFFSET))(this, matrix, material, shaderPass, topology, bufferWithArgs, argsOffset, properties);
		}

		::System::Void Internal_DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::System::Int32 shaderPass, ::UnityEngine::ComputeBuffer* bufferWithArgs, ::System::Int32 argsOffset, ::UnityEngine::MaterialPropertyBlock* properties)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWMESHINSTANCEDINDIRECT_OFFSET))(this, mesh, submeshIndex, material, shaderPass, bufferWithArgs, argsOffset, properties);
		}

		::System::Void Internal_DrawOcclusionMesh(::UnityEngine::RectInt normalizedCamViewport)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectInt))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWOCCLUSIONMESH_OFFSET))(this, normalizedCamViewport);
		}

		::System::Void SetRandomWriteTarget_Texture(::System::Int32 index, ::UnityEngine::Rendering::RenderTargetIdentifier& rt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRANDOMWRITETARGET_TEXTURE_OFFSET))(this, index, rt);
		}

		::System::Void ClearRandomWriteTargets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRANDOMWRITETARGETS_OFFSET))(this);
		}

		::System::Void SetViewport(::UnityEngine::Rect pixelRect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETVIEWPORT_OFFSET))(this, pixelRect);
		}

		::System::Void CopyTexture_Internal(::UnityEngine::Rendering::RenderTargetIdentifier& src, ::System::Int32 srcElement, ::System::Int32 srcMip, ::System::Int32 srcX, ::System::Int32 srcY, ::System::Int32 srcWidth, ::System::Int32 srcHeight, ::UnityEngine::Rendering::RenderTargetIdentifier& dst, ::System::Int32 dstElement, ::System::Int32 dstMip, ::System::Int32 dstX, ::System::Int32 dstY, ::System::Int32 mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_COPYTEXTURE_INTERNAL_OFFSET))(this, src, srcElement, srcMip, srcX, srcY, srcWidth, srcHeight, dst, dstElement, dstMip, dstX, dstY, mode);
		}

		::System::Void Blit_Texture(::UnityEngine::Texture* source, ::UnityEngine::Rendering::RenderTargetIdentifier& dest, ::UnityEngine::Material* mat, ::System::Int32 pass, ::UnityEngine::Vector2 scale, ::UnityEngine::Vector2 offset, ::System::Int32 sourceDepthSlice, ::System::Int32 destDepthSlice)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_TEXTURE_OFFSET))(this, source, dest, mat, pass, scale, offset, sourceDepthSlice, destDepthSlice);
		}

		::System::Void Blit_Identifier(::UnityEngine::Rendering::RenderTargetIdentifier& source, ::UnityEngine::Rendering::RenderTargetIdentifier& dest, ::UnityEngine::Material* mat, ::System::Int32 pass, ::UnityEngine::Vector2 scale, ::UnityEngine::Vector2 offset, ::System::Int32 sourceDepthSlice, ::System::Int32 destDepthSlice)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_IDENTIFIER_OFFSET))(this, source, dest, mat, pass, scale, offset, sourceDepthSlice, destDepthSlice);
		}

		::System::Void GetTemporaryRT(::System::Int32 nameID, ::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::FilterMode filter, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::Int32 antiAliasing, ::System::Boolean enableRandomWrite, ::UnityEngine::RenderTextureMemoryless memorylessMode, ::System::Boolean useDynamicScale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::FilterMode, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_OFFSET))(this, nameID, width, height, depthBuffer, filter, format, antiAliasing, enableRandomWrite, memorylessMode, useDynamicScale);
		}

		::System::Void GetTemporaryRT_1(::System::Int32 nameID, ::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::FilterMode filter, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::Int32 antiAliasing, ::System::Boolean enableRandomWrite, ::UnityEngine::RenderTextureMemoryless memorylessMode)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::FilterMode, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32, ::System::Boolean, ::UnityEngine::RenderTextureMemoryless))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_1_OFFSET))(this, nameID, width, height, depthBuffer, filter, format, antiAliasing, enableRandomWrite, memorylessMode);
		}

		::System::Void GetTemporaryRT_2(::System::Int32 nameID, ::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::FilterMode filter, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::System::Int32 antiAliasing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::FilterMode, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_2_OFFSET))(this, nameID, width, height, depthBuffer, filter, format, antiAliasing);
		}

		::System::Void GetTemporaryRT_3(::System::Int32 nameID, ::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::FilterMode filter, ::UnityEngine::Experimental::Rendering::GraphicsFormat format)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::FilterMode, ::UnityEngine::Experimental::Rendering::GraphicsFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_3_OFFSET))(this, nameID, width, height, depthBuffer, filter, format);
		}

		::System::Void GetTemporaryRT_4(::System::Int32 nameID, ::System::Int32 width, ::System::Int32 height, ::System::Int32 depthBuffer, ::UnityEngine::FilterMode filter, ::UnityEngine::RenderTextureFormat format)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::FilterMode, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_4_OFFSET))(this, nameID, width, height, depthBuffer, filter, format);
		}

		::System::Void GetTemporaryRTWithDescriptor(::System::Int32 nameID, ::UnityEngine::RenderTextureDescriptor desc, ::UnityEngine::FilterMode filter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::RenderTextureDescriptor, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRTWITHDESCRIPTOR_OFFSET))(this, nameID, desc, filter);
		}

		::System::Void GetTemporaryRT_5(::System::Int32 nameID, ::UnityEngine::RenderTextureDescriptor desc, ::UnityEngine::FilterMode filter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::RenderTextureDescriptor, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_5_OFFSET))(this, nameID, desc, filter);
		}

		::System::Void GetTemporaryRT_6(::System::Int32 nameID, ::UnityEngine::RenderTextureDescriptor desc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRT_6_OFFSET))(this, nameID, desc);
		}

		::System::Void ReleaseTemporaryRT(::System::Int32 nameID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_RELEASETEMPORARYRT_OFFSET))(this, nameID);
		}

		::System::Void ClearRenderTarget(::System::Boolean clearDepth, ::System::Boolean clearColor, ::UnityEngine::Color backgroundColor, ::System::Single depth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_OFFSET))(this, clearDepth, clearColor, backgroundColor, depth);
		}

		::System::Void ClearRenderTarget_1(::System::Boolean clearDepth, ::System::Boolean clearColor, ::Il2CppArray<::UnityEngine::Color>* colors, ::System::Single depth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::UnityEngine::Color>*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_1_OFFSET))(this, clearDepth, clearColor, colors, depth);
		}

		::System::Void ClearRenderTarget_2(::System::Boolean clearDepth, ::System::Boolean clearColor, ::UnityEngine::Color backgroundColor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_2_OFFSET))(this, clearDepth, clearColor, backgroundColor);
		}

		::System::Void ClearRenderTarget_3(::System::Boolean clearDepth, ::System::Boolean clearColor, ::Il2CppArray<::UnityEngine::Color>* colors)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::UnityEngine::Color>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_3_OFFSET))(this, clearDepth, clearColor, colors);
		}

		::System::Void SetGlobalFloat(::System::Int32 nameID, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALFLOAT_OFFSET))(this, nameID, value);
		}

		::System::Void SetGlobalInt(::System::Int32 nameID, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALINT_OFFSET))(this, nameID, value);
		}

		::System::Void SetGlobalVector(::System::Int32 nameID, ::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALVECTOR_OFFSET))(this, nameID, value);
		}

		::System::Void SetGlobalColor(::System::Int32 nameID, ::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALCOLOR_OFFSET))(this, nameID, value);
		}

		::System::Void SetGlobalMatrix(::System::Int32 nameID, ::UnityEngine::Matrix4x4 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALMATRIX_OFFSET))(this, nameID, value);
		}

		::System::Void EnableShaderKeyword(::System::String* keyword)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_ENABLESHADERKEYWORD_OFFSET))(this, keyword);
		}

		::System::Void DisableShaderKeyword(::System::String* keyword)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DISABLESHADERKEYWORD_OFFSET))(this, keyword);
		}

		::System::Void SetViewProjectionMatrices(::UnityEngine::Matrix4x4 view, ::UnityEngine::Matrix4x4 proj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETVIEWPROJECTIONMATRICES_OFFSET))(this, view, proj);
		}

		::System::Boolean ValidateAgainstExecutionFlags(::UnityEngine::Rendering::CommandBufferExecutionFlags requiredFlags, ::UnityEngine::Rendering::CommandBufferExecutionFlags invalidFlags)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::CommandBufferExecutionFlags, ::UnityEngine::Rendering::CommandBufferExecutionFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_VALIDATEAGAINSTEXECUTIONFLAGS_OFFSET))(this, requiredFlags, invalidFlags);
		}

		::System::Void SetGlobalVectorArray(::System::Int32 nameID, ::Il2CppArray<::UnityEngine::Vector4>* values)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALVECTORARRAY_OFFSET))(this, nameID, values);
		}

		::System::Void SetGlobalTexture_Impl(::System::Int32 nameID, ::UnityEngine::Rendering::RenderTargetIdentifier& rt, ::UnityEngine::Rendering::RenderTextureSubElement element, ::System::Int16 mipSlice)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTextureSubElement, ::System::Int16))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALTEXTURE_IMPL_OFFSET))(this, nameID, rt, element, mipSlice);
		}

		::System::Void SetGlobalBuffer(::System::Int32 nameID, ::UnityEngine::ComputeBuffer* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALBUFFER_OFFSET))(this, nameID, value);
		}

		::System::Void BeginSample(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BEGINSAMPLE_OFFSET))(this, name);
		}

		::System::Void EndSample(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_ENDSAMPLE_OFFSET))(this, name);
		}

		::System::Void IssuePluginEventAndDataInternal(::System::IntPtr callback, ::System::Int32 eventID, ::System::IntPtr data)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_ISSUEPLUGINEVENTANDDATAINTERNAL_OFFSET))(this, callback, eventID, data);
		}

		::System::Void IssuePluginCustomTextureUpdateInternal(::System::IntPtr callback, ::UnityEngine::Texture* targetTexture, ::System::UInt32 userData, ::System::Boolean useNewUnityRenderingExtTextureUpdateParamsV2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::UnityEngine::Texture*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_ISSUEPLUGINCUSTOMTEXTUREUPDATEINTERNAL_OFFSET))(this, callback, targetTexture, userData, useNewUnityRenderingExtTextureUpdateParamsV2);
		}

		::System::Void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier rt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_OFFSET))(this, rt);
		}

		::System::Void SetRenderTarget_1(::UnityEngine::Rendering::RenderTargetIdentifier rt, ::UnityEngine::Rendering::RenderBufferLoadAction loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction storeAction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_1_OFFSET))(this, rt, loadAction, storeAction);
		}

		::System::Void SetRenderTarget_2(::UnityEngine::Rendering::RenderTargetIdentifier rt, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_2_OFFSET))(this, rt, colorLoadAction, colorStoreAction, depthLoadAction, depthStoreAction);
		}

		::System::Void SetRenderTarget_3(::UnityEngine::Rendering::RenderTargetIdentifier rt, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction stencilLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction stencilStoreAction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_3_OFFSET))(this, rt, colorLoadAction, colorStoreAction, depthLoadAction, depthStoreAction, stencilLoadAction, stencilStoreAction);
		}

		::System::Void SetRenderTarget_4(::UnityEngine::Rendering::RenderTargetIdentifier rt, ::System::Int32 mipLevel, ::UnityEngine::CubemapFace cubemapFace, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_4_OFFSET))(this, rt, mipLevel, cubemapFace, depthSlice);
		}

		::System::Void SetRenderTarget_5(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_5_OFFSET))(this, color, depth);
		}

		::System::Void SetRenderTarget_6(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth, ::System::Int32 mipLevel, ::UnityEngine::CubemapFace cubemapFace, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_6_OFFSET))(this, color, depth, mipLevel, cubemapFace, depthSlice);
		}

		::System::Void SetRenderTarget_7(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier depth, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_7_OFFSET))(this, color, colorLoadAction, colorStoreAction, depth, depthLoadAction, depthStoreAction);
		}

		::System::Void SetRenderTarget_8(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier depth, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction stencilLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction stencilStoreAction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_8_OFFSET))(this, color, colorLoadAction, colorStoreAction, depth, depthLoadAction, depthStoreAction, stencilLoadAction, stencilStoreAction);
		}

		::System::Void SetRenderTarget_9(::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* colors, ::UnityEngine::Rendering::RenderTargetIdentifier depth)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_9_OFFSET))(this, colors, depth);
		}

		::System::Void SetRenderTarget_10(::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* colors, ::UnityEngine::Rendering::RenderTargetIdentifier depth, ::UnityEngine::Rendering::RenderBufferLoadAction stencilLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction stencilStoreAction)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_10_OFFSET))(this, colors, depth, stencilLoadAction, stencilStoreAction);
		}

		::System::Void SetRenderTarget_11(::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* colors, ::UnityEngine::Rendering::RenderTargetIdentifier depth, ::System::Int32 mipLevel, ::UnityEngine::CubemapFace cubemapFace, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_11_OFFSET))(this, colors, depth, mipLevel, cubemapFace, depthSlice);
		}

		::System::Void SetRenderTarget_12(::UnityEngine::Rendering::RenderTargetBinding binding)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetBinding))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGET_12_OFFSET))(this, binding);
		}

		::System::Void SetRenderTargetSingle_Internal(::UnityEngine::Rendering::RenderTargetIdentifier rt, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction stencilLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction stencilStoreAction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETSINGLE_INTERNAL_OFFSET))(this, rt, colorLoadAction, colorStoreAction, depthLoadAction, depthStoreAction, stencilLoadAction, stencilStoreAction);
		}

		::System::Void SetRenderTargetColorDepth_Internal(::UnityEngine::Rendering::RenderTargetIdentifier color, ::UnityEngine::Rendering::RenderTargetIdentifier depth, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction stencilLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction stencilStoreAction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETCOLORDEPTH_INTERNAL_OFFSET))(this, color, depth, colorLoadAction, colorStoreAction, depthLoadAction, depthStoreAction, stencilLoadAction, stencilStoreAction);
		}

		::System::Void SetRenderTargetMulti_Internal(::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* colors, ::UnityEngine::Rendering::RenderTargetIdentifier depth, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* colorLoadActions, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* colorStoreActions, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction stencilLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction stencilStoreAction)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>*, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>*, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETMULTI_INTERNAL_OFFSET))(this, colors, depth, colorLoadActions, colorStoreActions, depthLoadAction, depthStoreAction, stencilLoadAction, stencilStoreAction);
		}

		::System::Void SetRenderTargetMultiSubtarget(::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* colors, ::UnityEngine::Rendering::RenderTargetIdentifier depth, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* colorLoadActions, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* colorStoreActions, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::System::Int32 mipLevel, ::UnityEngine::CubemapFace cubemapFace, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>*, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>*, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETMULTISUBTARGET_OFFSET))(this, colors, depth, colorLoadActions, colorStoreActions, depthLoadAction, depthStoreAction, mipLevel, cubemapFace, depthSlice);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_RELEASE_OFFSET))(this);
		}

		::System::Void SetComputeTextureParam(::UnityEngine::ComputeShader* computeShader, ::System::Int32 kernelIndex, ::System::String* name, ::UnityEngine::Rendering::RenderTargetIdentifier rt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::String*, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTETEXTUREPARAM_OFFSET))(this, computeShader, kernelIndex, name, rt);
		}

		::System::Void SetComputeTextureParam_1(::UnityEngine::ComputeShader* computeShader, ::System::Int32 kernelIndex, ::System::Int32 nameID, ::UnityEngine::Rendering::RenderTargetIdentifier rt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTETEXTUREPARAM_1_OFFSET))(this, computeShader, kernelIndex, nameID, rt);
		}

		::System::Void DispatchCompute(::UnityEngine::ComputeShader* computeShader, ::System::Int32 kernelIndex, ::System::Int32 threadGroupsX, ::System::Int32 threadGroupsY, ::System::Int32 threadGroupsZ)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DISPATCHCOMPUTE_OFFSET))(this, computeShader, kernelIndex, threadGroupsX, threadGroupsY, threadGroupsZ);
		}

		::System::Void DrawMesh(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, ::System::Int32 submeshIndex, ::System::Int32 shaderPass, ::UnityEngine::MaterialPropertyBlock* properties, ::Il2CppArray<::System::String*>* keywords, ::System::Boolean appendKeywords)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESH_OFFSET))(this, mesh, matrix, material, submeshIndex, shaderPass, properties, keywords, appendKeywords);
		}

		::System::Void DrawMesh_1(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, ::System::Int32 submeshIndex, ::System::Int32 shaderPass)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESH_1_OFFSET))(this, mesh, matrix, material, submeshIndex, shaderPass);
		}

		::System::Void DrawMesh_2(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, ::System::Int32 submeshIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESH_2_OFFSET))(this, mesh, matrix, material, submeshIndex);
		}

		::System::Void DrawRenderer(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material, ::System::Int32 submeshIndex, ::System::Int32 shaderPass, ::Il2CppArray<::System::String*>* keywords, ::System::Boolean appendKeywords, ::System::UInt32 RLM, ::System::Boolean ignoreMpb)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::String*>*, ::System::Boolean, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWRENDERER_OFFSET))(this, renderer, material, submeshIndex, shaderPass, keywords, appendKeywords, RLM, ignoreMpb);
		}

		::System::Void DrawRenderer_1(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material, ::System::Int32 submeshIndex, ::System::Int32 shaderPass)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWRENDERER_1_OFFSET))(this, renderer, material, submeshIndex, shaderPass);
		}

		::System::Void DrawRenderer_2(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material, ::System::Int32 submeshIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWRENDERER_2_OFFSET))(this, renderer, material, submeshIndex);
		}

		::System::Void DrawRenderer_3(::UnityEngine::Renderer* renderer, ::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWRENDERER_3_OFFSET))(this, renderer, material);
		}

		::System::Void DrawProcedural(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, ::System::Int32 shaderPass, ::UnityEngine::MeshTopology topology, ::System::Int32 vertexCount, ::System::Int32 instanceCount, ::UnityEngine::MaterialPropertyBlock* properties)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MeshTopology, ::System::Int32, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWPROCEDURAL_OFFSET))(this, matrix, material, shaderPass, topology, vertexCount, instanceCount, properties);
		}

		::System::Void DrawProceduralIndirect(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, ::System::Int32 shaderPass, ::UnityEngine::MeshTopology topology, ::UnityEngine::ComputeBuffer* bufferWithArgs, ::System::Int32 argsOffset, ::UnityEngine::MaterialPropertyBlock* properties)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MeshTopology, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWPROCEDURALINDIRECT_OFFSET))(this, matrix, material, shaderPass, topology, bufferWithArgs, argsOffset, properties);
		}

		::System::Void DrawProceduralIndirect_1(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, ::System::Int32 shaderPass, ::UnityEngine::MeshTopology topology, ::UnityEngine::ComputeBuffer* bufferWithArgs, ::System::Int32 argsOffset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MeshTopology, ::UnityEngine::ComputeBuffer*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWPROCEDURALINDIRECT_1_OFFSET))(this, matrix, material, shaderPass, topology, bufferWithArgs, argsOffset);
		}

		::System::Void DrawProceduralIndirect_2(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Material* material, ::System::Int32 shaderPass, ::UnityEngine::MeshTopology topology, ::UnityEngine::ComputeBuffer* bufferWithArgs)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MeshTopology, ::UnityEngine::ComputeBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWPROCEDURALINDIRECT_2_OFFSET))(this, matrix, material, shaderPass, topology, bufferWithArgs);
		}

		::System::Void DrawMeshInstancedIndirect(::UnityEngine::Mesh* mesh, ::System::Int32 submeshIndex, ::UnityEngine::Material* material, ::System::Int32 shaderPass, ::UnityEngine::ComputeBuffer* bufferWithArgs, ::System::Int32 argsOffset, ::UnityEngine::MaterialPropertyBlock* properties)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Int32, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWMESHINSTANCEDINDIRECT_OFFSET))(this, mesh, submeshIndex, material, shaderPass, bufferWithArgs, argsOffset, properties);
		}

		::System::Void DrawOcclusionMesh(::UnityEngine::RectInt normalizedCamViewport)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectInt))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_DRAWOCCLUSIONMESH_OFFSET))(this, normalizedCamViewport);
		}

		::System::Void SetRandomWriteTarget(::System::Int32 index, ::UnityEngine::Rendering::RenderTargetIdentifier rt)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRANDOMWRITETARGET_OFFSET))(this, index, rt);
		}

		::System::Void CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier src, ::UnityEngine::Rendering::RenderTargetIdentifier dst)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_COPYTEXTURE_OFFSET))(this, src, dst);
		}

		::System::Void CopyTexture_1(::UnityEngine::Rendering::RenderTargetIdentifier src, ::System::Int32 srcElement, ::System::Int32 srcMip, ::UnityEngine::Rendering::RenderTargetIdentifier dst, ::System::Int32 dstElement, ::System::Int32 dstMip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_COPYTEXTURE_1_OFFSET))(this, src, srcElement, srcMip, dst, dstElement, dstMip);
		}

		::System::Void CopyTexture_2(::UnityEngine::Rendering::RenderTargetIdentifier src, ::System::Int32 srcElement, ::System::Int32 srcMip, ::System::Int32 srcX, ::System::Int32 srcY, ::System::Int32 srcWidth, ::System::Int32 srcHeight, ::UnityEngine::Rendering::RenderTargetIdentifier dst, ::System::Int32 dstElement, ::System::Int32 dstMip, ::System::Int32 dstX, ::System::Int32 dstY)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_COPYTEXTURE_2_OFFSET))(this, src, srcElement, srcMip, srcX, srcY, srcWidth, srcHeight, dst, dstElement, dstMip, dstX, dstY);
		}

		::System::Void Blit(::UnityEngine::Texture* source, ::UnityEngine::Rendering::RenderTargetIdentifier dest)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_OFFSET))(this, source, dest);
		}

		::System::Void Blit_1(::UnityEngine::Texture* source, ::UnityEngine::Rendering::RenderTargetIdentifier dest, ::UnityEngine::Material* mat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_1_OFFSET))(this, source, dest, mat);
		}

		::System::Void Blit_2(::UnityEngine::Texture* source, ::UnityEngine::Rendering::RenderTargetIdentifier dest, ::UnityEngine::Material* mat, ::System::Int32 pass)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_2_OFFSET))(this, source, dest, mat, pass);
		}

		::System::Void Blit_3(::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier dest, ::UnityEngine::Material* mat, ::System::Int32 pass)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_3_OFFSET))(this, source, dest, mat, pass);
		}

		::System::Void SetGlobalFloat_1(::System::String* name, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALFLOAT_1_OFFSET))(this, name, value);
		}

		::System::Void SetGlobalTexture(::System::Int32 nameID, ::UnityEngine::Rendering::RenderTargetIdentifier value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALTEXTURE_OFFSET))(this, nameID, value);
		}

		::System::Void SetGlobalTexture_1(::System::Int32 nameID, ::UnityEngine::Rendering::RenderTargetIdentifier value, ::System::Int16 mipSlice)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Int16))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALTEXTURE_1_OFFSET))(this, nameID, value, mipSlice);
		}

		::System::Void IssuePluginEventAndData(::System::IntPtr callback, ::System::Int32 eventID, ::System::IntPtr data)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_ISSUEPLUGINEVENTANDDATA_OFFSET))(this, callback, eventID, data);
		}

		::System::Void IssuePluginCustomTextureUpdateV2(::System::IntPtr callback, ::UnityEngine::Texture* targetTexture, ::System::UInt32 userData)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::UnityEngine::Texture*, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_ISSUEPLUGINCUSTOMTEXTUREUPDATEV2_OFFSET))(this, callback, targetTexture, userData);
		}

		::System::Void SetGlobalTextureExt(::System::Int32 nameID, ::System::Int32 rtID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALTEXTUREEXT_OFFSET))(this, nameID, rtID);
		}

		::System::Void SetRenderTargetExt(::System::Int32 colorID, ::System::Int32 depthID, ::UnityEngine::Rendering::RenderBufferLoadAction cLoad, ::UnityEngine::Rendering::RenderBufferStoreAction cStore, ::UnityEngine::Rendering::RenderBufferLoadAction dLoad, ::UnityEngine::Rendering::RenderBufferStoreAction dStore)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETEXT_OFFSET))(this, colorID, depthID, cLoad, cStore, dLoad, dStore);
		}

		::System::Void SetCameraRLM(::System::Int32 camID, ::System::UInt32 RLM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCAMERARLM_OFFSET))(this, camID, RLM);
		}

		::System::Void SetComputeVectorParam_Injected(::UnityEngine::ComputeShader* computeShader, ::System::Int32 nameID, ::UnityEngine::Vector4& val)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEVECTORPARAM_INJECTED_OFFSET))(this, computeShader, nameID, val);
		}

		::System::Void SetComputeMatrixParam_Injected(::UnityEngine::ComputeShader* computeShader, ::System::Int32 nameID, ::UnityEngine::Matrix4x4& val)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeShader*, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETCOMPUTEMATRIXPARAM_INJECTED_OFFSET))(this, computeShader, nameID, val);
		}

		::System::Void Internal_DrawMesh_Injected(::UnityEngine::Mesh* mesh, ::UnityEngine::Matrix4x4& matrix, ::UnityEngine::Material* material, ::System::Int32 submeshIndex, ::System::Int32 shaderPass, ::UnityEngine::MaterialPropertyBlock* properties, ::Il2CppArray<::System::String*>* keywords, ::System::Boolean appendKeywords)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4&, ::UnityEngine::Material*, ::System::Int32, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*, ::Il2CppArray<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWMESH_INJECTED_OFFSET))(this, mesh, matrix, material, submeshIndex, shaderPass, properties, keywords, appendKeywords);
		}

		::System::Void Internal_DrawProcedural_Injected(::UnityEngine::Matrix4x4& matrix, ::UnityEngine::Material* material, ::System::Int32 shaderPass, ::UnityEngine::MeshTopology topology, ::System::Int32 vertexCount, ::System::Int32 instanceCount, ::UnityEngine::MaterialPropertyBlock* properties)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MeshTopology, ::System::Int32, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWPROCEDURAL_INJECTED_OFFSET))(this, matrix, material, shaderPass, topology, vertexCount, instanceCount, properties);
		}

		::System::Void Internal_DrawProceduralIndirect_Injected(::UnityEngine::Matrix4x4& matrix, ::UnityEngine::Material* material, ::System::Int32 shaderPass, ::UnityEngine::MeshTopology topology, ::UnityEngine::ComputeBuffer* bufferWithArgs, ::System::Int32 argsOffset, ::UnityEngine::MaterialPropertyBlock* properties)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::MeshTopology, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWPROCEDURALINDIRECT_INJECTED_OFFSET))(this, matrix, material, shaderPass, topology, bufferWithArgs, argsOffset, properties);
		}

		::System::Void Internal_DrawOcclusionMesh_Injected(::UnityEngine::RectInt& normalizedCamViewport)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectInt&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_INTERNAL_DRAWOCCLUSIONMESH_INJECTED_OFFSET))(this, normalizedCamViewport);
		}

		::System::Void SetViewport_Injected(::UnityEngine::Rect& pixelRect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETVIEWPORT_INJECTED_OFFSET))(this, pixelRect);
		}

		::System::Void Blit_Texture_Injected(::UnityEngine::Texture* source, ::UnityEngine::Rendering::RenderTargetIdentifier& dest, ::UnityEngine::Material* mat, ::System::Int32 pass, ::UnityEngine::Vector2& scale, ::UnityEngine::Vector2& offset, ::System::Int32 sourceDepthSlice, ::System::Int32 destDepthSlice)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_TEXTURE_INJECTED_OFFSET))(this, source, dest, mat, pass, scale, offset, sourceDepthSlice, destDepthSlice);
		}

		::System::Void Blit_Identifier_Injected(::UnityEngine::Rendering::RenderTargetIdentifier& source, ::UnityEngine::Rendering::RenderTargetIdentifier& dest, ::UnityEngine::Material* mat, ::System::Int32 pass, ::UnityEngine::Vector2& scale, ::UnityEngine::Vector2& offset, ::System::Int32 sourceDepthSlice, ::System::Int32 destDepthSlice)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Material*, ::System::Int32, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_BLIT_IDENTIFIER_INJECTED_OFFSET))(this, source, dest, mat, pass, scale, offset, sourceDepthSlice, destDepthSlice);
		}

		::System::Void GetTemporaryRTWithDescriptor_Injected(::System::Int32 nameID, ::UnityEngine::RenderTextureDescriptor& desc, ::UnityEngine::FilterMode filter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::RenderTextureDescriptor&, ::UnityEngine::FilterMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_GETTEMPORARYRTWITHDESCRIPTOR_INJECTED_OFFSET))(this, nameID, desc, filter);
		}

		::System::Void ClearRenderTarget_Injected(::System::Boolean clearDepth, ::System::Boolean clearColor, ::UnityEngine::Color& backgroundColor, ::System::Single depth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::UnityEngine::Color&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_CLEARRENDERTARGET_INJECTED_OFFSET))(this, clearDepth, clearColor, backgroundColor, depth);
		}

		::System::Void SetGlobalVector_Injected(::System::Int32 nameID, ::UnityEngine::Vector4& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALVECTOR_INJECTED_OFFSET))(this, nameID, value);
		}

		::System::Void SetGlobalColor_Injected(::System::Int32 nameID, ::UnityEngine::Color& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALCOLOR_INJECTED_OFFSET))(this, nameID, value);
		}

		::System::Void SetGlobalMatrix_Injected(::System::Int32 nameID, ::UnityEngine::Matrix4x4& value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETGLOBALMATRIX_INJECTED_OFFSET))(this, nameID, value);
		}

		::System::Void SetViewProjectionMatrices_Injected(::UnityEngine::Matrix4x4& view, ::UnityEngine::Matrix4x4& proj)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETVIEWPROJECTIONMATRICES_INJECTED_OFFSET))(this, view, proj);
		}

		::System::Void SetRenderTargetSingle_Internal_Injected(::UnityEngine::Rendering::RenderTargetIdentifier& rt, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction stencilLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction stencilStoreAction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETSINGLE_INTERNAL_INJECTED_OFFSET))(this, rt, colorLoadAction, colorStoreAction, depthLoadAction, depthStoreAction, stencilLoadAction, stencilStoreAction);
		}

		::System::Void SetRenderTargetColorDepth_Internal_Injected(::UnityEngine::Rendering::RenderTargetIdentifier& color, ::UnityEngine::Rendering::RenderTargetIdentifier& depth, ::UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction stencilLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction stencilStoreAction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETCOLORDEPTH_INTERNAL_INJECTED_OFFSET))(this, color, depth, colorLoadAction, colorStoreAction, depthLoadAction, depthStoreAction, stencilLoadAction, stencilStoreAction);
		}

		::System::Void SetRenderTargetMulti_Internal_Injected(::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* colors, ::UnityEngine::Rendering::RenderTargetIdentifier& depth, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* colorLoadActions, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* colorStoreActions, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction stencilLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction stencilStoreAction)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>*, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>*, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETMULTI_INTERNAL_INJECTED_OFFSET))(this, colors, depth, colorLoadActions, colorStoreActions, depthLoadAction, depthStoreAction, stencilLoadAction, stencilStoreAction);
		}

		::System::Void SetRenderTargetMultiSubtarget_Injected(::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* colors, ::UnityEngine::Rendering::RenderTargetIdentifier& depth, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* colorLoadActions, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* colorStoreActions, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction, ::System::Int32 mipLevel, ::UnityEngine::CubemapFace cubemapFace, ::System::Int32 depthSlice)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>*, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>*, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::System::Int32, ::UnityEngine::CubemapFace, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COMMANDBUFFER_SETRENDERTARGETMULTISUBTARGET_INJECTED_OFFSET))(this, colors, depth, colorLoadActions, colorStoreActions, depthLoadAction, depthStoreAction, mipLevel, cubemapFace, depthSlice);
		}
	};
}

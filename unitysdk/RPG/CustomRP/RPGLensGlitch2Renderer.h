#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPPostprocessSubPass2.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"

namespace RPG::CustomRP { class MaterialLibrary; }
namespace RPG::CustomRP { class RPGLensGlitch2; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_RPGLENSGLITCH2RENDERER_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x163C76C0)
#define RPG_CUSTOMRP_RPGLENSGLITCH2RENDERER_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x163C7AF0)
#define RPG_CUSTOMRP_RPGLENSGLITCH2RENDERER_SETPARAM_OFFSET UNITYSDK_OFFSET(0x163C76F0)
#define RPG_CUSTOMRP_RPGLENSGLITCH2RENDERER_SETRENDERSOURCE_OFFSET UNITYSDK_OFFSET(0x163C76E0)
#define RPG_CUSTOMRP_RPGLENSGLITCH2RENDERER_SETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x163C76D0)
#define RPG_CUSTOMRP_RPGLENSGLITCH2RENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x163C7680)
#define RPG_CUSTOMRP_RPGLENSGLITCH2RENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x163C7640)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGLensGlitch2Renderer_TypeDefinitionIndex = 28558;

	class RPGLensGlitch2Renderer : public ::RPG::CustomRP::CRPPostprocessSubPass2
	{
	public:
		::RPG::CustomRP::RPGLensGlitch2* settings; // 0x28
		::UnityEngine::Material* _GlitchMat; // 0x30
		::System::Int32 _RenderSource; // 0x38
		::UnityEngine::RenderTextureDescriptor glitch2CopyDesc; // 0x3C
		::System::Int32 _RenderTarget; // 0x70

		::System::Void _ctor(::RPG::CustomRP::MaterialLibrary* matlib)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::MaterialLibrary*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSGLITCH2RENDERER__CTOR_OFFSET))(this, matlib);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSGLITCH2RENDERER_UPDATE_OFFSET))(this);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSGLITCH2RENDERER_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void setRenderTarget(::System::Int32 renderTarget)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSGLITCH2RENDERER_SETRENDERTARGET_OFFSET))(this, renderTarget);
		}

		::System::Void setRenderSource(::System::Int32 renderSource)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSGLITCH2RENDERER_SETRENDERSOURCE_OFFSET))(this, renderSource);
		}

		::System::Void setParam()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSGLITCH2RENDERER_SETPARAM_OFFSET))(this);
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGLENSGLITCH2RENDERER_INNEREXECUTE_OFFSET))(this, cmd);
		}
	};
}

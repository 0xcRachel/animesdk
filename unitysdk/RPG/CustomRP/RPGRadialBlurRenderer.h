#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPPostprocessSubPass2.h"

namespace RPG::CustomRP { class MaterialLibrary; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_RPGRADIALBLURRENDERER_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x15A8CEF0)
#define RPG_CUSTOMRP_RPGRADIALBLURRENDERER_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x15A8D130)
#define RPG_CUSTOMRP_RPGRADIALBLURRENDERER_SETUPCHROMATICABERRATIONPARAMS_OFFSET UNITYSDK_OFFSET(0x15A8E850)
#define RPG_CUSTOMRP_RPGRADIALBLURRENDERER_SETUPDIRECTIONALBLUR_OFFSET UNITYSDK_OFFSET(0x15A8DE90)
#define RPG_CUSTOMRP_RPGRADIALBLURRENDERER_SETUPOUTPUTRT_OFFSET UNITYSDK_OFFSET(0x15A8CE90)
#define RPG_CUSTOMRP_RPGRADIALBLURRENDERER_SETUPRADIALBLUR_OFFSET UNITYSDK_OFFSET(0x15A8D1B0)
#define RPG_CUSTOMRP_RPGRADIALBLURRENDERER_UPDATE_OFFSET UNITYSDK_OFFSET(0x15A8CE40)
#define RPG_CUSTOMRP_RPGRADIALBLURRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x15A8CE20)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGRadialBlurRenderer_TypeDefinitionIndex = 35213;

	class RPGRadialBlurRenderer : public ::RPG::CustomRP::CRPPostprocessSubPass2
	{
	public:
		::UnityEngine::Material* _Uber; // 0x28

		::System::Void _ctor(::RPG::CustomRP::MaterialLibrary* matLib)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::MaterialLibrary*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGRADIALBLURRENDERER__CTOR_OFFSET))(this, matLib);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGRADIALBLURRENDERER_UPDATE_OFFSET))(this);
		}

		::System::Void SetupOutputRT(::System::Int32& outputID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGRADIALBLURRENDERER_SETUPOUTPUTRT_OFFSET))(this, outputID);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGRADIALBLURRENDERER_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGRADIALBLURRENDERER_INNEREXECUTE_OFFSET))(this, cmd);
		}

		::System::Void SetupChromaticAberrationParams()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGRADIALBLURRENDERER_SETUPCHROMATICABERRATIONPARAMS_OFFSET))(this);
		}

		::System::Void SetupRadialBlur(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGRADIALBLURRENDERER_SETUPRADIALBLUR_OFFSET))(this, cmd);
		}

		::System::Void SetupDirectionalBlur(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGRADIALBLURRENDERER_SETUPDIRECTIONALBLUR_OFFSET))(this, cmd);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPPostprocessSubPass2.h"
#include "unitysdk/RPG/CustomRP/MRTBinding.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/RPG/CustomRP/RTIDHandle.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"

namespace RPG::CustomRP { class MaterialLibrary; }
namespace RPG::CustomRP { class RPGDepthOfField; }
namespace RPG::CustomRP { class RPGDepthOfField_CoCDescriptor; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_COMPUTEFOCALLENGTHFROMFOV_OFFSET UNITYSDK_OFFSET(0x15A7C7B0)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_COMPUTEINFINITYCOCRADIUS_OFFSET UNITYSDK_OFFSET(0x15A764A0)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_COMPUTEVIEWMAXBACKGROUNDCOCRADIUS_OFFSET UNITYSDK_OFFSET(0x15A76720)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_COMPUTEVIEWMINFOREGROUNDCOCRADIUS_OFFSET UNITYSDK_OFFSET(0x15A76650)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_DEPTHTORESCOCRADIUS_OFFSET UNITYSDK_OFFSET(0x15A7C700)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x15A75D40)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_GETDOFCOLORANDCOCFORMAT_OFFSET UNITYSDK_OFFSET(0x15A76740)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_GET_GLOBALDOFQUALITY_OFFSET UNITYSDK_OFFSET(0x15A78CF0)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x15A75E20)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETCOCPARAMS_OFFSET UNITYSDK_OFFSET(0x15A767B0)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETUPDOFBOKEHCIRCLELOW_OFFSET UNITYSDK_OFFSET(0x15A78DB0)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETUPDOFBOKEHCIRCLE_OFFSET UNITYSDK_OFFSET(0x15A7A430)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETUPDOFBOKEHPOLYGON_OFFSET UNITYSDK_OFFSET(0x15A78020)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETUPDOFDEFAULT_OFFSET UNITYSDK_OFFSET(0x15A76B40)
#define RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x15A756C0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGDepthOfFieldRenderer_TypeDefinitionIndex = 35180;

	class RPGDepthOfFieldRenderer : public ::RPG::CustomRP::CRPPostprocessSubPass2
	{
	public:
		// static const ::System::Int32 c_CoCDownSample = 0x3; // 0x0
		::UnityEngine::MaterialPropertyBlock* _UberProperty; // 0x28
		::RPG::CustomRP::MRTBinding _TwoRTs; // 0x30
		::UnityEngine::Material* _Uber; // 0x88
		::Il2CppArray<::RPG::CustomRP::RPGDepthOfField_CoCDescriptor*>* m_CoCList; // 0x90
		::System::Single DepthBlurExponent; // 0x98
		::System::Single InfinityBackgroundCocRadius; // 0x9C
		::RPG::CustomRP::RTIDHandle _ForegroundCocTex0; // 0xA0
		::RPG::CustomRP::RTIDHandle _BackgroundCocTex1; // 0xD8
		::RPG::CustomRP::RTIDHandle _DOFBokehTex0; // 0x110
		::RPG::CustomRP::RTIDHandle _COCTile; // 0x148
		::RPG::CustomRP::RTIDHandle _BackgroundCocTex0; // 0x180
		::RPG::CustomRP::RTIDHandle _ForegroundCocTex1; // 0x1B8
		::RPG::CustomRP::RTIDHandle _DOFBokehCoC; // 0x1F0
		::RPG::CustomRP::RTIDHandle _DOFBokehTex1; // 0x228
		::RPG::CustomRP::RTIDHandle _OutputFgdColorTex; // 0x260
		::System::Single MinForegroundCocRadius; // 0x298
		::System::Single MaxBackgroundCocRadius; // 0x29C
		::RPG::CustomRP::RTIDHandle _OutputFgdOpacityTex; // 0x2A0
		::RPG::CustomRP::RTIDHandle _OutputBgdColorTex; // 0x2D8
		::RPG::CustomRP::RTIDHandle _DOFLowQualityColorTex; // 0x310
		::RPG::CustomRP::RTIDHandle _OutputColorImmediateTex; // 0x348
		::RPG::CustomRP::RTIDHandle _HalfResColorTex; // 0x380
		::System::Single FocusDistance; // 0x3B8
		::System::Single MaxDepthBlurRadius; // 0x3BC
		::RPG::CustomRP::RTIDHandle _ColorCoCBuffer; // 0x3C0
		::RPG::CustomRP::RTIDHandle _HalfResCocTex; // 0x3F8

		::System::Void _ctor(::RPG::CustomRP::MaterialLibrary* matLib, ::UnityEngine::MaterialPropertyBlock* uberSheet)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::MaterialLibrary*, ::UnityEngine::MaterialPropertyBlock*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER__CTOR_OFFSET))(this, matLib, uberSheet);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_INNEREXECUTE_OFFSET))(this, cmd);
		}

		::UnityEngine::RenderTextureFormat GetDOFColorAndCoCFormat()
		{
			return ((::UnityEngine::RenderTextureFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_GETDOFCOLORANDCOCFORMAT_OFFSET))(this);
		}

		::System::Single DepthToResCocRadius(::System::Single SceneDepth)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_DEPTHTORESCOCRADIUS_OFFSET))(this, SceneDepth);
		}

		::System::Single ComputeFocalLengthFromFov(::RPG::CustomRP::RPGDepthOfField* settings)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::CustomRP::RPGDepthOfField*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_COMPUTEFOCALLENGTHFROMFOV_OFFSET))(this, settings);
		}

		::System::Single ComputeInfinityCocRadius(::RPG::CustomRP::RPGDepthOfField* settings)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::CustomRP::RPGDepthOfField*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_COMPUTEINFINITYCOCRADIUS_OFFSET))(this, settings);
		}

		::System::Single ComputeViewMaxBackgroundCocRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_COMPUTEVIEWMAXBACKGROUNDCOCRADIUS_OFFSET))(this);
		}

		::System::Single ComputeViewMinForegroundCocRadius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_COMPUTEVIEWMINFOREGROUNDCOCRADIUS_OFFSET))(this);
		}

		::System::Void SetCocParams(::UnityEngine::Material* mat, ::RPG::CustomRP::RPGDepthOfField* settings)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::RPG::CustomRP::RPGDepthOfField*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETCOCPARAMS_OFFSET))(this, mat, settings);
		}

		::System::Void SetupDOFDefault(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETUPDOFDEFAULT_OFFSET))(this, cmd);
		}

		::System::Void SetupDOFBokehPolygon(::UnityEngine::Rendering::CommandBuffer* cmd, ::RPG::CustomRP::RPGDepthOfField* settings)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RPGDepthOfField*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETUPDOFBOKEHPOLYGON_OFFSET))(this, cmd, settings);
		}

		::System::Void SetupDOFBokehCircle(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETUPDOFBOKEHCIRCLE_OFFSET))(this, cmd);
		}

		::System::Void SetupDOFBokehCircleLow(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_SETUPDOFBOKEHCIRCLELOW_OFFSET))(this, cmd);
		}

		::RPG::CustomRP::Quality get_GlobalDOFQuality()
		{
			return ((::RPG::CustomRP::Quality(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELDRENDERER_GET_GLOBALDOFQUALITY_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/CRPPostprocessSubPass2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::CustomRP { class MaterialLibrary; }
namespace RPG::CustomRP { class RPGAdditionalColorGrading; }
namespace RPG::CustomRP { class RPGBlink; }
namespace RPG::CustomRP { class RPGBloomRenderer; }
namespace RPG::CustomRP { class RPGChromaticAberration; }
namespace RPG::CustomRP { class RPGColorGrading; }
namespace RPG::CustomRP { class RPGFXAA; }
namespace RPG::CustomRP { class RPGLensDistortion; }
namespace RPG::CustomRP { class RPGPolaroid; }
namespace RPG::CustomRP { class RPGSpeedLine; }
namespace RPG::CustomRP { class RPGTonemapping; }
namespace RPG::CustomRP { class RPGVignette; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering { class HableCurve; }

#define RPG_CUSTOMRP_RPGFINALCOMPOSE_CACHELUTPARAMS_OFFSET UNITYSDK_OFFSET(0x163C1A30)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_DUMPTONEMAPPINGDATA_OFFSET UNITYSDK_OFFSET(0x163BC350)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x163BC1D0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_GET_CURRENTHDRHEADROOM_OFFSET UNITYSDK_OFFSET(0x163C1A00)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_INNEREXECUTE_OFFSET UNITYSDK_OFFSET(0x163BCED0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_ISADDITIONALCOLORGRADINGENABLED_OFFSET UNITYSDK_OFFSET(0x163BC750)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_ISLUTDIRTY_OFFSET UNITYSDK_OFFSET(0x163C1090)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_ISRARELYUSEDEFFECTSENABLED_OFFSET UNITYSDK_OFFSET(0x163BC7F0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_RELEASE_OFFSET UNITYSDK_OFFSET(0x163BC2C0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_SETUPFINALOUTPUT_OFFSET UNITYSDK_OFFSET(0x163BC2B0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE_UPDATE_OFFSET UNITYSDK_OFFSET(0x163BC1C0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x163BC150)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__GENERATELUTIFNEEDED_OFFSET UNITYSDK_OFFSET(0x163BF7F0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__GENERATELUT_OFFSET UNITYSDK_OFFSET(0x163C1F50)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__ISCOLORGRADINGBAKELUT_OFFSET UNITYSDK_OFFSET(0x163BE250)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPADDITIONALCOLORGRADING_OFFSET UNITYSDK_OFFSET(0x163BC920)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPBLINK_OFFSET UNITYSDK_OFFSET(0x163BF1E0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPCHROMATICABERRATION_OFFSET UNITYSDK_OFFSET(0x163BFA50)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPCOLORGRADING_OFFSET UNITYSDK_OFFSET(0x163BE290)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPFXAA_OFFSET UNITYSDK_OFFSET(0x163C0EB0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPLENSDISTORTION_OFFSET UNITYSDK_OFFSET(0x163C0610)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPPOLAROID_OFFSET UNITYSDK_OFFSET(0x163BEE00)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPSPEEDLINE_OFFSET UNITYSDK_OFFSET(0x163BFD40)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPTONEMAPPING_OFFSET UNITYSDK_OFFSET(0x163C2520)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPVIGNETTE_OFFSET UNITYSDK_OFFSET(0x163BFBA0)
#define RPG_CUSTOMRP_RPGFINALCOMPOSE__UBERBLIT_OFFSET UNITYSDK_OFFSET(0x163C09D0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGFinalCompose_TypeDefinitionIndex = 28543;

	class RPGFinalCompose : public ::RPG::CustomRP::CRPPostprocessSubPass2
	{
	public:
		::UnityEngine::Rendering::HableCurve* _HableCurve; // 0x28
		::UnityEngine::Material* _Uber; // 0x30
		::UnityEngine::RenderTexture* _CachedLutRT; // 0x38
		::UnityEngine::Texture2D* _InternalSpectralLut; // 0x40
		::UnityEngine::Material* _LutBake; // 0x48
		::UnityEngine::Texture2D* _InternalSpeedlineSeed; // 0x50
		::UnityEngine::Material* _Fxaa; // 0x58
		::RPG::CustomRP::RPGBloomRenderer* _BloomRenderer; // 0x60
		::UnityEngine::Color _CachedLevelColor; // 0x68
		::System::Boolean _CachedTonemappingEnable; // 0x78
		::System::Boolean _CachedDebugHDROutputIntermediate; // 0x79
		::System::Boolean _CachedForceDisableToneMapping; // 0x7A
		::System::Boolean _CachedHDRActive; // 0x7B
		::UnityEngine::Vector4 _CachedColorSaturationGlobal; // 0x7C
		::UnityEngine::Vector4 _CachedColorGainHighlight; // 0x8C
		::UnityEngine::Vector4 _CachedColorSaturationHighlight; // 0x9C
		::System::Single _CachedLevelHighTone; // 0xAC
		::System::Single _CachedToeStrength; // 0xB0
		::System::Single _CachedGamma; // 0xB4
		::UnityEngine::Vector4 _CachedColorGainShadow; // 0xB8
		::System::Single _CachedToeLength; // 0xC8
		::System::Int32 _GenerateFrameCount; // 0xCC
		::UnityEngine::Vector4 _LutParam; // 0xD0
		::UnityEngine::Vector4 _CachedColorGainMidtone; // 0xE0
		::System::Single _CachedShoulderLength; // 0xF0
		::UnityEngine::Vector4 _CachedColorGainGlobal; // 0xF4
		::UnityEngine::Vector4 _CachedColorContrastGlobal; // 0x104
		::UnityEngine::Vector4 _CachedColorContrastHighlight; // 0x114
		::System::Single _CachedHDRHeadroom; // 0x124
		::System::Boolean _CachedColorGradingEnable; // 0x128
		::System::Boolean _CachedDebugEnableGamutClipping; // 0x129
		::System::Single _CachedLevelShadowTone; // 0x12C
		::UnityEngine::Vector4 _CachedColorSaturationShadow; // 0x130
		::UnityEngine::Vector4 _CachedColorContrastShadow; // 0x140
		::UnityEngine::Vector4 _CachedColorSaturationMidtone; // 0x150
		::System::Int32 _OutputRT; // 0x160
		::System::Single _CachedShoulderAngle; // 0x164
		::System::Single _CachedColorCorrectionShadowMax; // 0x168
		::UnityEngine::Vector4 _CachedColorContrastMidtone; // 0x16C
		::System::Single _CachedExpandGamut; // 0x17C
		::System::Single _CachedColorCorrectionHighlightMin; // 0x180
		::System::Single _CachedShoulderStrength; // 0x184

		::System::Void _ctor(::RPG::CustomRP::MaterialLibrary* matLib, ::RPG::CustomRP::RPGBloomRenderer* bloomRender)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::MaterialLibrary*, ::RPG::CustomRP::RPGBloomRenderer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__CTOR_OFFSET))(this, matLib, bloomRender);
		}

		::System::Boolean Update()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_UPDATE_OFFSET))(this);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void SetupFinalOutput(::System::Int32 outputRT)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_SETUPFINALOUTPUT_OFFSET))(this, outputRT);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_RELEASE_OFFSET))(this);
		}

		::System::Void DumpTonemappingData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_DUMPTONEMAPPINGDATA_OFFSET))(this);
		}

		::System::Boolean IsAdditionalColorGradingEnabled(::RPG::CustomRP::RPGAdditionalColorGrading* additionalColorGrading)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::RPGAdditionalColorGrading*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_ISADDITIONALCOLORGRADINGENABLED_OFFSET))(this, additionalColorGrading);
		}

		::System::Boolean IsRarelyUsedEffectsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_ISRARELYUSEDEFFECTSENABLED_OFFSET))(this);
		}

		::System::Void _SetupAdditionalColorGrading(::RPG::CustomRP::RPGAdditionalColorGrading* additionalColorGrading)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGAdditionalColorGrading*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPADDITIONALCOLORGRADING_OFFSET))(this, additionalColorGrading);
		}

		::System::Void InnerExecute(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_INNEREXECUTE_OFFSET))(this, cmd);
		}

		::System::Void _SetupChromaticAberration(::RPG::CustomRP::RPGChromaticAberration* settings)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGChromaticAberration*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPCHROMATICABERRATION_OFFSET))(this, settings);
		}

		::System::Void _SetupVignette(::RPG::CustomRP::RPGVignette* settings, ::System::Single aspect)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGVignette*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPVIGNETTE_OFFSET))(this, settings, aspect);
		}

		::System::Void _SetupSpeedLine(::RPG::CustomRP::RPGSpeedLine* settings)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGSpeedLine*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPSPEEDLINE_OFFSET))(this, settings);
		}

		::System::Boolean _IsColorGradingBakeLUT(::RPG::CustomRP::RPGColorGrading* colorGrading)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::RPGColorGrading*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__ISCOLORGRADINGBAKELUT_OFFSET))(this, colorGrading);
		}

		::System::Boolean IsLUTDirty(::RPG::CustomRP::RPGTonemapping* tonemapping, ::RPG::CustomRP::RPGColorGrading* colorGrading)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::CustomRP::RPGTonemapping*, ::RPG::CustomRP::RPGColorGrading*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_ISLUTDIRTY_OFFSET))(this, tonemapping, colorGrading);
		}

		::System::Void CacheLUTParams(::RPG::CustomRP::RPGTonemapping* tonemapping, ::RPG::CustomRP::RPGColorGrading* colorGrading)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGTonemapping*, ::RPG::CustomRP::RPGColorGrading*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_CACHELUTPARAMS_OFFSET))(this, tonemapping, colorGrading);
		}

		::System::Void _GenerateLutIfNeeded(::UnityEngine::Rendering::CommandBuffer* cmd, ::RPG::CustomRP::RPGTonemapping* tonemapping, ::RPG::CustomRP::RPGColorGrading* colorGrading, ::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RPGTonemapping*, ::RPG::CustomRP::RPGColorGrading*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__GENERATELUTIFNEEDED_OFFSET))(this, cmd, tonemapping, colorGrading, material);
		}

		::System::Single get_currentHDRHeadroom()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE_GET_CURRENTHDRHEADROOM_OFFSET))(this);
		}

		::System::Void _GenerateLut(::UnityEngine::Rendering::CommandBuffer* cmd, ::RPG::CustomRP::RPGTonemapping* tonemapping, ::RPG::CustomRP::RPGColorGrading* colorGrading, ::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RPGTonemapping*, ::RPG::CustomRP::RPGColorGrading*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__GENERATELUT_OFFSET))(this, cmd, tonemapping, colorGrading, material);
		}

		::System::Void _SetupTonemapping(::RPG::CustomRP::RPGTonemapping* tonemapping, ::UnityEngine::Material* material)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGTonemapping*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPTONEMAPPING_OFFSET))(this, tonemapping, material);
		}

		::System::Void _SetupColorGrading(::RPG::CustomRP::RPGColorGrading* colorGrading, ::UnityEngine::Material* material, ::System::Boolean forceDefaultParams)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGColorGrading*, ::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPCOLORGRADING_OFFSET))(this, colorGrading, material, forceDefaultParams);
		}

		::System::Void _SetupPolaroid(::RPG::CustomRP::RPGPolaroid* polaroid)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGPolaroid*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPPOLAROID_OFFSET))(this, polaroid);
		}

		::System::Void _SetupBlink(::RPG::CustomRP::RPGBlink* blink)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGBlink*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPBLINK_OFFSET))(this, blink);
		}

		::System::Void _SetupLensDistortion(::RPG::CustomRP::RPGLensDistortion* lensDistortion)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::RPGLensDistortion*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPLENSDISTORTION_OFFSET))(this, lensDistortion);
		}

		::System::Void _UberBlit(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 des, ::System::Boolean isDesRenderToTexture)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__UBERBLIT_OFFSET))(this, cmd, des, isDesRenderToTexture);
		}

		::System::Void _SetupFxaa(::UnityEngine::Rendering::CommandBuffer* cmd, ::RPG::CustomRP::RPGFXAA* settings, ::System::Int32 fxaaOutputRT)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::RPG::CustomRP::RPGFXAA*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGFINALCOMPOSE__SETUPFXAA_OFFSET))(this, cmd, settings, fxaaOutputRT);
		}
	};
}

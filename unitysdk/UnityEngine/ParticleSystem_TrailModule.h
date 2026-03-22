#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemTrailMode.h"
#include "unitysdk/UnityEngine/ParticleSystemTrailTextureMode.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_ATTACHRIBBONSTOTRANSFORM_INJECTED_OFFSET UNITYSDK_OFFSET(0x182835F0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_ATTACHRIBBONSTOTRANSFORM_OFFSET UNITYSDK_OFFSET(0x20547D0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_COLOROVERLIFETIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283370)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_COLOROVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x2054580)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_COLOROVERTRAIL_INJECTED_OFFSET UNITYSDK_OFFSET(0x182834B0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_COLOROVERTRAIL_OFFSET UNITYSDK_OFFSET(0x20546B0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_DIEWITHPARTICLES_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283220)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_DIEWITHPARTICLES_OFFSET UNITYSDK_OFFSET(0x2054500)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18282FF0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x20543B0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_GENERATELIGHTINGDATA_INJECTED_OFFSET UNITYSDK_OFFSET(0x182834F0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_GENERATELIGHTINGDATA_OFFSET UNITYSDK_OFFSET(0x2054750)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_INHERITPARTICLECOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x182832E0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_INHERITPARTICLECOLOR_OFFSET UNITYSDK_OFFSET(0x2054560)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_LIFETIMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283120)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_LIFETIMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2054480)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_LIFETIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x182830E0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x2054410)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_MINVERTEXDISTANCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283160)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_MINVERTEXDISTANCE_OFFSET UNITYSDK_OFFSET(0x20544A0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_MODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283030)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_MODE_OFFSET UNITYSDK_OFFSET(0x20543D0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_NUMHORIZONTALVERTICES_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283630)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_NUMHORIZONTALVERTICES_OFFSET UNITYSDK_OFFSET(0x20547F0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_RATIO_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283070)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_RATIO_OFFSET UNITYSDK_OFFSET(0x20543F0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_RIBBONCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283530)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_RIBBONCOUNT_OFFSET UNITYSDK_OFFSET(0x2054770)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SHADOWBIAS_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283570)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x2054790)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SIZEAFFECTSLIFETIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x182832A0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SIZEAFFECTSLIFETIME_OFFSET UNITYSDK_OFFSET(0x2054540)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SIZEAFFECTSWIDTH_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283260)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SIZEAFFECTSWIDTH_OFFSET UNITYSDK_OFFSET(0x2054520)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SPLITSUBEMITTERRIBBONS_INJECTED_OFFSET UNITYSDK_OFFSET(0x182835B0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SPLITSUBEMITTERRIBBONS_OFFSET UNITYSDK_OFFSET(0x20547B0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_TEXTUREMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x182831A0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_TEXTUREMODE_OFFSET UNITYSDK_OFFSET(0x20544C0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_WIDTHOVERTRAILMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283420)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_WIDTHOVERTRAILMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2054690)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_WIDTHOVERTRAIL_INJECTED_OFFSET UNITYSDK_OFFSET(0x182833E0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_WIDTHOVERTRAIL_OFFSET UNITYSDK_OFFSET(0x2054620)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_WORLDSPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x182831E0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_WORLDSPACE_OFFSET UNITYSDK_OFFSET(0x20544E0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_ATTACHRIBBONSTOTRANSFORM_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283610)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_ATTACHRIBBONSTOTRANSFORM_OFFSET UNITYSDK_OFFSET(0x20547E0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_COLOROVERLIFETIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283390)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_COLOROVERLIFETIME_OFFSET UNITYSDK_OFFSET(0x20545E0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_COLOROVERTRAIL_INJECTED_OFFSET UNITYSDK_OFFSET(0x182834D0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_COLOROVERTRAIL_OFFSET UNITYSDK_OFFSET(0x2054710)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_DIEWITHPARTICLES_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283240)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_DIEWITHPARTICLES_OFFSET UNITYSDK_OFFSET(0x2054510)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283010)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x20543C0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_GENERATELIGHTINGDATA_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283510)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_GENERATELIGHTINGDATA_OFFSET UNITYSDK_OFFSET(0x2054760)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_INHERITPARTICLECOLOR_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283300)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_INHERITPARTICLECOLOR_OFFSET UNITYSDK_OFFSET(0x2054570)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_LIFETIMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283140)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_LIFETIMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2054490)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_LIFETIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283100)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x2054450)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_MINVERTEXDISTANCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283180)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_MINVERTEXDISTANCE_OFFSET UNITYSDK_OFFSET(0x20544B0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_MODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283050)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_MODE_OFFSET UNITYSDK_OFFSET(0x20543E0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_NUMHORIZONTALVERTICES_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283650)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_NUMHORIZONTALVERTICES_OFFSET UNITYSDK_OFFSET(0x2054800)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_RATIO_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283090)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_RATIO_OFFSET UNITYSDK_OFFSET(0x2054400)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_RIBBONCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283550)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_RIBBONCOUNT_OFFSET UNITYSDK_OFFSET(0x2054780)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SHADOWBIAS_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283590)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SHADOWBIAS_OFFSET UNITYSDK_OFFSET(0x20547A0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SIZEAFFECTSLIFETIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x182832C0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SIZEAFFECTSLIFETIME_OFFSET UNITYSDK_OFFSET(0x2054550)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SIZEAFFECTSWIDTH_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283280)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SIZEAFFECTSWIDTH_OFFSET UNITYSDK_OFFSET(0x2054530)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SPLITSUBEMITTERRIBBONS_INJECTED_OFFSET UNITYSDK_OFFSET(0x182835D0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SPLITSUBEMITTERRIBBONS_OFFSET UNITYSDK_OFFSET(0x20547C0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_TEXTUREMODE_INJECTED_OFFSET UNITYSDK_OFFSET(0x182831C0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_TEXTUREMODE_OFFSET UNITYSDK_OFFSET(0x20544D0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_WIDTHOVERTRAILMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283440)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_WIDTHOVERTRAILMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x20546A0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_WIDTHOVERTRAIL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283400)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_WIDTHOVERTRAIL_OFFSET UNITYSDK_OFFSET(0x2054660)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_WORLDSPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283200)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_WORLDSPACE_OFFSET UNITYSDK_OFFSET(0x20544F0)
#define UNITYENGINE_PARTICLESYSTEM_TRAILMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDC0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_TrailModule_TypeDefinitionIndex = 5363;

	struct alignas(8) ParticleSystem_TrailModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_ENABLED_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystemTrailMode get_mode()
		{
			return ((::UnityEngine::ParticleSystemTrailMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_MODE_OFFSET))(this);
		}

		::System::Void set_mode(::UnityEngine::ParticleSystemTrailMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemTrailMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_MODE_OFFSET))(this, value);
		}

		::System::Single get_ratio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_RATIO_OFFSET))(this);
		}

		::System::Void set_ratio(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_RATIO_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_lifetime()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_LIFETIME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_lifetime(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_LIFETIME_OFFSET))(this, value);
		}
		*/

		::System::Single get_lifetimeMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_LIFETIMEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_lifetimeMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_LIFETIMEMULTIPLIER_OFFSET))(this, value);
		}

		::System::Single get_minVertexDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_MINVERTEXDISTANCE_OFFSET))(this);
		}

		::System::Void set_minVertexDistance(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_MINVERTEXDISTANCE_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystemTrailTextureMode get_textureMode()
		{
			return ((::UnityEngine::ParticleSystemTrailTextureMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_TEXTUREMODE_OFFSET))(this);
		}

		::System::Void set_textureMode(::UnityEngine::ParticleSystemTrailTextureMode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemTrailTextureMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_TEXTUREMODE_OFFSET))(this, value);
		}

		::System::Boolean get_worldSpace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_WORLDSPACE_OFFSET))(this);
		}

		::System::Void set_worldSpace(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_WORLDSPACE_OFFSET))(this, value);
		}

		::System::Boolean get_dieWithParticles()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_DIEWITHPARTICLES_OFFSET))(this);
		}

		::System::Void set_dieWithParticles(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_DIEWITHPARTICLES_OFFSET))(this, value);
		}

		::System::Boolean get_sizeAffectsWidth()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SIZEAFFECTSWIDTH_OFFSET))(this);
		}

		::System::Void set_sizeAffectsWidth(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SIZEAFFECTSWIDTH_OFFSET))(this, value);
		}

		::System::Boolean get_sizeAffectsLifetime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SIZEAFFECTSLIFETIME_OFFSET))(this);
		}

		::System::Void set_sizeAffectsLifetime(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SIZEAFFECTSLIFETIME_OFFSET))(this, value);
		}

		::System::Boolean get_inheritParticleColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_INHERITPARTICLECOLOR_OFFSET))(this);
		}

		::System::Void set_inheritParticleColor(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_INHERITPARTICLECOLOR_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxGradient get_colorOverLifetime()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxGradient(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_COLOROVERLIFETIME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_colorOverLifetime(::UnityEngine::ParticleSystem_MinMaxGradient value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxGradient))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_COLOROVERLIFETIME_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_widthOverTrail()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_WIDTHOVERTRAIL_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_widthOverTrail(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_WIDTHOVERTRAIL_OFFSET))(this, value);
		}
		*/

		::System::Single get_widthOverTrailMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_WIDTHOVERTRAILMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_widthOverTrailMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_WIDTHOVERTRAILMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxGradient get_colorOverTrail()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxGradient(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_COLOROVERTRAIL_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_colorOverTrail(::UnityEngine::ParticleSystem_MinMaxGradient value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxGradient))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_COLOROVERTRAIL_OFFSET))(this, value);
		}
		*/

		::System::Boolean get_generateLightingData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_GENERATELIGHTINGDATA_OFFSET))(this);
		}

		::System::Void set_generateLightingData(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_GENERATELIGHTINGDATA_OFFSET))(this, value);
		}

		::System::Int32 get_ribbonCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_RIBBONCOUNT_OFFSET))(this);
		}

		::System::Void set_ribbonCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_RIBBONCOUNT_OFFSET))(this, value);
		}

		::System::Single get_shadowBias()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SHADOWBIAS_OFFSET))(this);
		}

		::System::Void set_shadowBias(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SHADOWBIAS_OFFSET))(this, value);
		}

		::System::Boolean get_splitSubEmitterRibbons()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SPLITSUBEMITTERRIBBONS_OFFSET))(this);
		}

		::System::Void set_splitSubEmitterRibbons(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SPLITSUBEMITTERRIBBONS_OFFSET))(this, value);
		}

		::System::Boolean get_attachRibbonsToTransform()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_ATTACHRIBBONSTOTRANSFORM_OFFSET))(this);
		}

		::System::Void set_attachRibbonsToTransform(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_ATTACHRIBBONSTOTRANSFORM_OFFSET))(this, value);
		}

		::System::Int32 get_numHorizontalVertices()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_NUMHORIZONTALVERTICES_OFFSET))(this);
		}

		::System::Void set_numHorizontalVertices(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_NUMHORIZONTALVERTICES_OFFSET))(this, value);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_ENABLED_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::ParticleSystemTrailMode get_mode_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self)
		{
			return ((::UnityEngine::ParticleSystemTrailMode(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_MODE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_mode_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self, ::UnityEngine::ParticleSystemTrailMode value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::UnityEngine::ParticleSystemTrailMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_MODE_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_ratio_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_RATIO_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_ratio_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_RATIO_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_lifetime_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_LIFETIME_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_lifetime_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_LIFETIME_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_lifetimeMultiplier_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_LIFETIMEMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_lifetimeMultiplier_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_LIFETIMEMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_minVertexDistance_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_MINVERTEXDISTANCE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_minVertexDistance_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_MINVERTEXDISTANCE_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::ParticleSystemTrailTextureMode get_textureMode_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self)
		{
			return ((::UnityEngine::ParticleSystemTrailTextureMode(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_TEXTUREMODE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_textureMode_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self, ::UnityEngine::ParticleSystemTrailTextureMode value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::UnityEngine::ParticleSystemTrailTextureMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_TEXTUREMODE_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_worldSpace_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_WORLDSPACE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_worldSpace_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_WORLDSPACE_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_dieWithParticles_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_DIEWITHPARTICLES_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_dieWithParticles_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_DIEWITHPARTICLES_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_sizeAffectsWidth_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SIZEAFFECTSWIDTH_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_sizeAffectsWidth_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SIZEAFFECTSWIDTH_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_sizeAffectsLifetime_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SIZEAFFECTSLIFETIME_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_sizeAffectsLifetime_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SIZEAFFECTSLIFETIME_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_inheritParticleColor_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_INHERITPARTICLECOLOR_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_inheritParticleColor_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_INHERITPARTICLECOLOR_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_colorOverLifetime_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxGradient& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::UnityEngine::ParticleSystem_MinMaxGradient&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_COLOROVERLIFETIME_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_colorOverLifetime_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxGradient& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::UnityEngine::ParticleSystem_MinMaxGradient&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_COLOROVERLIFETIME_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void get_widthOverTrail_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_WIDTHOVERTRAIL_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_widthOverTrail_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_WIDTHOVERTRAIL_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_widthOverTrailMultiplier_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_WIDTHOVERTRAILMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_widthOverTrailMultiplier_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_WIDTHOVERTRAILMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_colorOverTrail_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxGradient& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::UnityEngine::ParticleSystem_MinMaxGradient&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_COLOROVERTRAIL_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_colorOverTrail_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxGradient& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::UnityEngine::ParticleSystem_MinMaxGradient&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_COLOROVERTRAIL_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Boolean get_generateLightingData_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_GENERATELIGHTINGDATA_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_generateLightingData_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_GENERATELIGHTINGDATA_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Int32 get_ribbonCount_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_RIBBONCOUNT_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_ribbonCount_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self, ::System::Int32 value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_RIBBONCOUNT_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_shadowBias_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SHADOWBIAS_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_shadowBias_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SHADOWBIAS_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_splitSubEmitterRibbons_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_SPLITSUBEMITTERRIBBONS_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_splitSubEmitterRibbons_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_SPLITSUBEMITTERRIBBONS_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_attachRibbonsToTransform_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_ATTACHRIBBONSTOTRANSFORM_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_attachRibbonsToTransform_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_ATTACHRIBBONSTOTRANSFORM_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Int32 get_numHorizontalVertices_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_TrailModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_GET_NUMHORIZONTALVERTICES_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_numHorizontalVertices_Injected(::UnityEngine::ParticleSystem_TrailModule& _unity_self, ::System::Int32 value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_TrailModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_TRAILMODULE_SET_NUMHORIZONTALVERTICES_INJECTED_OFFSET))(_unity_self, value);
		}
	};
}

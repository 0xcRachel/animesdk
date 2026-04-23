#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemNoiseQuality.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_DAMPING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7ED0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_DAMPING_OFFSET UNITYSDK_OFFSET(0x238CCB0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7B50)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x238CA10)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_FREQUENCY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7E90)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_FREQUENCY_OFFSET UNITYSDK_OFFSET(0x238CC90)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVECOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7F10)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVECOUNT_OFFSET UNITYSDK_OFFSET(0x238CCD0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7F50)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238CCF0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVESCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7F90)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVESCALE_OFFSET UNITYSDK_OFFSET(0x238CD10)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_POSITIONAMOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D83F0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_POSITIONAMOUNT_OFFSET UNITYSDK_OFFSET(0x238D040)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_QUALITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7FD0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0x238CD30)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D80C0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPENABLED_OFFSET UNITYSDK_OFFSET(0x238CDE0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D8170)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238CE70)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D8220)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238CF00)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D81E0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPX_OFFSET UNITYSDK_OFFSET(0x238CE90)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D82D0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238CF90)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D8290)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPY_OFFSET UNITYSDK_OFFSET(0x238CF20)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D8380)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238D020)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D8340)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPZ_OFFSET UNITYSDK_OFFSET(0x238CFB0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D8130)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAP_OFFSET UNITYSDK_OFFSET(0x238CE00)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_ROTATIONAMOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D8460)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_ROTATIONAMOUNT_OFFSET UNITYSDK_OFFSET(0x238D0B0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SCROLLSPEEDMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D8080)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SCROLLSPEEDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238CDC0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SCROLLSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D8040)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SCROLLSPEED_OFFSET UNITYSDK_OFFSET(0x238CD50)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7B90)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x238CA30)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SIZEAMOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D84D0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SIZEAMOUNT_OFFSET UNITYSDK_OFFSET(0x238D120)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7C40)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238CAC0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7CF0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238CB50)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7CB0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHX_OFFSET UNITYSDK_OFFSET(0x238CAE0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7DA0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238CBE0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7D60)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHY_OFFSET UNITYSDK_OFFSET(0x238CB70)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7E50)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238CC70)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7E10)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHZ_OFFSET UNITYSDK_OFFSET(0x238CC00)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7C00)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTH_OFFSET UNITYSDK_OFFSET(0x238CA50)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_DAMPING_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7EF0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_DAMPING_OFFSET UNITYSDK_OFFSET(0x238CCC0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7B70)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x238CA20)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_FREQUENCY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7EB0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_FREQUENCY_OFFSET UNITYSDK_OFFSET(0x238CCA0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVECOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7F30)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVECOUNT_OFFSET UNITYSDK_OFFSET(0x238CCE0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7F70)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238CD00)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVESCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7FB0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVESCALE_OFFSET UNITYSDK_OFFSET(0x238CD20)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_POSITIONAMOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D8410)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_POSITIONAMOUNT_OFFSET UNITYSDK_OFFSET(0x238D080)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_QUALITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7FF0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_QUALITY_OFFSET UNITYSDK_OFFSET(0x238CD40)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D80E0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPENABLED_OFFSET UNITYSDK_OFFSET(0x238CDF0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D8190)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238CE80)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D8240)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238CF10)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D8200)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPX_OFFSET UNITYSDK_OFFSET(0x238CED0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D82F0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238CFA0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D82B0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPY_OFFSET UNITYSDK_OFFSET(0x238CF60)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D83A0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238D030)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D8360)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPZ_OFFSET UNITYSDK_OFFSET(0x238CFF0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D8150)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAP_OFFSET UNITYSDK_OFFSET(0x238CE40)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_ROTATIONAMOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D8480)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_ROTATIONAMOUNT_OFFSET UNITYSDK_OFFSET(0x238D0F0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SCROLLSPEEDMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D80A0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SCROLLSPEEDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238CDD0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SCROLLSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D8060)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SCROLLSPEED_OFFSET UNITYSDK_OFFSET(0x238CD90)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7BB0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x238CA40)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SIZEAMOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D84F0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SIZEAMOUNT_OFFSET UNITYSDK_OFFSET(0x238D160)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7C60)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238CAD0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7D10)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238CB60)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHX_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7CD0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHX_OFFSET UNITYSDK_OFFSET(0x238CB20)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7DC0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238CBF0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7D80)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHY_OFFSET UNITYSDK_OFFSET(0x238CBB0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7E70)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238CC80)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7E30)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHZ_OFFSET UNITYSDK_OFFSET(0x238CC40)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTH_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D7C20)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTH_OFFSET UNITYSDK_OFFSET(0x238CA90)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x6163B0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_NoiseModule_TypeDefinitionIndex = 5470;

	struct alignas(8) ParticleSystem_NoiseModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_ENABLED_OFFSET))(this, value);
		}

		::System::Boolean get_separateAxes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SEPARATEAXES_OFFSET))(this);
		}

		::System::Void set_separateAxes(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SEPARATEAXES_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_strength()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTH_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_strength(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTH_OFFSET))(this, value);
		}
		*/

		::System::Single get_strengthMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_strengthMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_strengthX()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHX_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_strengthX(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHX_OFFSET))(this, value);
		}
		*/

		::System::Single get_strengthXMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHXMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_strengthXMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHXMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_strengthY()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHY_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_strengthY(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHY_OFFSET))(this, value);
		}
		*/

		::System::Single get_strengthYMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHYMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_strengthYMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHYMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_strengthZ()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHZ_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_strengthZ(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHZ_OFFSET))(this, value);
		}
		*/

		::System::Single get_strengthZMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_strengthZMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHZMULTIPLIER_OFFSET))(this, value);
		}

		::System::Single get_frequency()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_FREQUENCY_OFFSET))(this);
		}

		::System::Void set_frequency(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_FREQUENCY_OFFSET))(this, value);
		}

		::System::Boolean get_damping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_DAMPING_OFFSET))(this);
		}

		::System::Void set_damping(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_DAMPING_OFFSET))(this, value);
		}

		::System::Int32 get_octaveCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVECOUNT_OFFSET))(this);
		}

		::System::Void set_octaveCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVECOUNT_OFFSET))(this, value);
		}

		::System::Single get_octaveMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_octaveMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVEMULTIPLIER_OFFSET))(this, value);
		}

		::System::Single get_octaveScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVESCALE_OFFSET))(this);
		}

		::System::Void set_octaveScale(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVESCALE_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystemNoiseQuality get_quality()
		{
			return ((::UnityEngine::ParticleSystemNoiseQuality(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_QUALITY_OFFSET))(this);
		}

		::System::Void set_quality(::UnityEngine::ParticleSystemNoiseQuality value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemNoiseQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_QUALITY_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_scrollSpeed()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SCROLLSPEED_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_scrollSpeed(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SCROLLSPEED_OFFSET))(this, value);
		}
		*/

		::System::Single get_scrollSpeedMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SCROLLSPEEDMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_scrollSpeedMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SCROLLSPEEDMULTIPLIER_OFFSET))(this, value);
		}

		::System::Boolean get_remapEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPENABLED_OFFSET))(this);
		}

		::System::Void set_remapEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPENABLED_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_remap()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAP_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_remap(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAP_OFFSET))(this, value);
		}
		*/

		::System::Single get_remapMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_remapMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_remapX()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPX_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_remapX(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPX_OFFSET))(this, value);
		}
		*/

		::System::Single get_remapXMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPXMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_remapXMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPXMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_remapY()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPY_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_remapY(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPY_OFFSET))(this, value);
		}
		*/

		::System::Single get_remapYMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPYMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_remapYMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPYMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_remapZ()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPZ_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_remapZ(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPZ_OFFSET))(this, value);
		}
		*/

		::System::Single get_remapZMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_remapZMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPZMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_positionAmount()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_POSITIONAMOUNT_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_positionAmount(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_POSITIONAMOUNT_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_rotationAmount()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_ROTATIONAMOUNT_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_rotationAmount(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_ROTATIONAMOUNT_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_sizeAmount()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SIZEAMOUNT_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_sizeAmount(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SIZEAMOUNT_OFFSET))(this, value);
		}
		*/

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_ENABLED_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_separateAxes_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SEPARATEAXES_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_separateAxes_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SEPARATEAXES_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_strength_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTH_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_strength_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTH_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_strengthMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_strengthMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_strengthX_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHX_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_strengthX_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHX_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_strengthXMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHXMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_strengthXMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHXMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_strengthY_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHY_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_strengthY_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHY_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_strengthYMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHYMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_strengthYMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHYMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_strengthZ_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHZ_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_strengthZ_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHZ_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_strengthZMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHZMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_strengthZMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHZMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_frequency_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_FREQUENCY_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_frequency_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_FREQUENCY_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_damping_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_DAMPING_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_damping_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_DAMPING_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Int32 get_octaveCount_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVECOUNT_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_octaveCount_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Int32 value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVECOUNT_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_octaveMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVEMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_octaveMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVEMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_octaveScale_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVESCALE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_octaveScale_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVESCALE_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::ParticleSystemNoiseQuality get_quality_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::UnityEngine::ParticleSystemNoiseQuality(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_QUALITY_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_quality_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystemNoiseQuality value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystemNoiseQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_QUALITY_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_scrollSpeed_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SCROLLSPEED_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_scrollSpeed_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SCROLLSPEED_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_scrollSpeedMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SCROLLSPEEDMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_scrollSpeedMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SCROLLSPEEDMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Boolean get_remapEnabled_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPENABLED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_remapEnabled_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPENABLED_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_remap_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAP_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_remap_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAP_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_remapMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_remapMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_remapX_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPX_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_remapX_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPX_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_remapXMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPXMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_remapXMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPXMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_remapY_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPY_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_remapY_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPY_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_remapYMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPYMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_remapYMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPYMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_remapZ_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPZ_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_remapZ_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPZ_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_remapZMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_NoiseModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPZMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_remapZMultiplier_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPZMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_positionAmount_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_POSITIONAMOUNT_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_positionAmount_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_POSITIONAMOUNT_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void get_rotationAmount_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_ROTATIONAMOUNT_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_rotationAmount_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_ROTATIONAMOUNT_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void get_sizeAmount_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SIZEAMOUNT_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_sizeAmount_Injected(::UnityEngine::ParticleSystem_NoiseModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_NoiseModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SIZEAMOUNT_INJECTED_OFFSET))(_unity_self, value);
		}
		*/
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemNoiseQuality.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_DAMPING_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280420)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_DAMPING_OFFSET UNITYSDK_OFFSET(0x20524F0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x182800A0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x2052250)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_FREQUENCY_INJECTED_OFFSET UNITYSDK_OFFSET(0x182803E0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_FREQUENCY_OFFSET UNITYSDK_OFFSET(0x20524D0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVECOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280460)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVECOUNT_OFFSET UNITYSDK_OFFSET(0x2052510)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x182804A0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2052530)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVESCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x182804E0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_OCTAVESCALE_OFFSET UNITYSDK_OFFSET(0x2052550)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_POSITIONAMOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280940)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_POSITIONAMOUNT_OFFSET UNITYSDK_OFFSET(0x2052880)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_QUALITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280520)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0x2052570)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280610)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPENABLED_OFFSET UNITYSDK_OFFSET(0x2052620)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x182806C0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x20526B0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280770)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2052740)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPX_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280730)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPX_OFFSET UNITYSDK_OFFSET(0x20526D0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280820)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x20527D0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPY_INJECTED_OFFSET UNITYSDK_OFFSET(0x182807E0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPY_OFFSET UNITYSDK_OFFSET(0x2052760)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x182808D0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2052860)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280890)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAPZ_OFFSET UNITYSDK_OFFSET(0x20527F0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAP_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280680)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_REMAP_OFFSET UNITYSDK_OFFSET(0x2052640)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_ROTATIONAMOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x182809B0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_ROTATIONAMOUNT_OFFSET UNITYSDK_OFFSET(0x20528F0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SCROLLSPEEDMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x182805D0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SCROLLSPEEDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2052600)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SCROLLSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280590)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SCROLLSPEED_OFFSET UNITYSDK_OFFSET(0x2052590)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x182800E0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x2052270)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SIZEAMOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280A20)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_SIZEAMOUNT_OFFSET UNITYSDK_OFFSET(0x2052960)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280190)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2052300)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280240)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2052390)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHX_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280200)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHX_OFFSET UNITYSDK_OFFSET(0x2052320)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x182802F0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2052420)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHY_INJECTED_OFFSET UNITYSDK_OFFSET(0x182802B0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHY_OFFSET UNITYSDK_OFFSET(0x20523B0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x182803A0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x20524B0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280360)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTHZ_OFFSET UNITYSDK_OFFSET(0x2052440)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTH_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280150)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_GET_STRENGTH_OFFSET UNITYSDK_OFFSET(0x2052290)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_DAMPING_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280440)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_DAMPING_OFFSET UNITYSDK_OFFSET(0x2052500)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x182800C0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x2052260)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_FREQUENCY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280400)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_FREQUENCY_OFFSET UNITYSDK_OFFSET(0x20524E0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVECOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280480)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVECOUNT_OFFSET UNITYSDK_OFFSET(0x2052520)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x182804C0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2052540)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVESCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280500)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_OCTAVESCALE_OFFSET UNITYSDK_OFFSET(0x2052560)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_POSITIONAMOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280960)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_POSITIONAMOUNT_OFFSET UNITYSDK_OFFSET(0x20528C0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_QUALITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280540)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_QUALITY_OFFSET UNITYSDK_OFFSET(0x2052580)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280630)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPENABLED_OFFSET UNITYSDK_OFFSET(0x2052630)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x182806E0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x20526C0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280790)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2052750)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPX_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280750)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPX_OFFSET UNITYSDK_OFFSET(0x2052710)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280840)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x20527E0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280800)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPY_OFFSET UNITYSDK_OFFSET(0x20527A0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x182808F0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2052870)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x182808B0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAPZ_OFFSET UNITYSDK_OFFSET(0x2052830)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAP_INJECTED_OFFSET UNITYSDK_OFFSET(0x182806A0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_REMAP_OFFSET UNITYSDK_OFFSET(0x2052680)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_ROTATIONAMOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x182809D0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_ROTATIONAMOUNT_OFFSET UNITYSDK_OFFSET(0x2052930)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SCROLLSPEEDMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x182805F0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SCROLLSPEEDMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2052610)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SCROLLSPEED_INJECTED_OFFSET UNITYSDK_OFFSET(0x182805B0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SCROLLSPEED_OFFSET UNITYSDK_OFFSET(0x20525D0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SEPARATEAXES_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280100)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SEPARATEAXES_OFFSET UNITYSDK_OFFSET(0x2052280)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SIZEAMOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280A40)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_SIZEAMOUNT_OFFSET UNITYSDK_OFFSET(0x20529A0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x182801B0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2052310)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280260)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x20523A0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHX_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280220)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHX_OFFSET UNITYSDK_OFFSET(0x2052360)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280310)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2052430)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHY_INJECTED_OFFSET UNITYSDK_OFFSET(0x182802D0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHY_OFFSET UNITYSDK_OFFSET(0x20523F0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x182803C0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x20524C0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280380)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTHZ_OFFSET UNITYSDK_OFFSET(0x2052480)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTH_INJECTED_OFFSET UNITYSDK_OFFSET(0x18280170)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE_SET_STRENGTH_OFFSET UNITYSDK_OFFSET(0x20522D0)
#define UNITYENGINE_PARTICLESYSTEM_NOISEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDC0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_NoiseModule_TypeDefinitionIndex = 5359;

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

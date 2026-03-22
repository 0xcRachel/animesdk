#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ParticleSystemSimulationSpace.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283870)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x2054960)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283E20)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2054E30)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETX_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283D00)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETX_OFFSET UNITYSDK_OFFSET(0x2054CE0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283E60)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2054E50)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283D70)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETY_OFFSET UNITYSDK_OFFSET(0x2054D50)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283EA0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2054E70)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283DE0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZ_OFFSET UNITYSDK_OFFSET(0x2054DC0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283C10)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2054C80)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALX_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283AF0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALX_OFFSET UNITYSDK_OFFSET(0x2054B30)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283C50)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2054CA0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283B60)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALY_OFFSET UNITYSDK_OFFSET(0x2054BA0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283C90)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2054CC0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283BD0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZ_OFFSET UNITYSDK_OFFSET(0x2054C10)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIALMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283F50)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIALMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2054F00)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283F10)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIAL_OFFSET UNITYSDK_OFFSET(0x2054E90)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18284040)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPACE_OFFSET UNITYSDK_OFFSET(0x2054FB0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIERMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18284000)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIERMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2054F90)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283FC0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIER_OFFSET UNITYSDK_OFFSET(0x2054F20)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283A00)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2054AD0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x182838E0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_X_OFFSET UNITYSDK_OFFSET(0x2054980)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283A40)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2054AF0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283950)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Y_OFFSET UNITYSDK_OFFSET(0x20549F0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283A80)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2054B10)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x182839C0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Z_OFFSET UNITYSDK_OFFSET(0x2054A60)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283890)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x2054970)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283E40)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2054E40)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETX_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283D20)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETX_OFFSET UNITYSDK_OFFSET(0x2054D20)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283E80)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2054E60)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283D90)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETY_OFFSET UNITYSDK_OFFSET(0x2054D90)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283EC0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2054E80)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283E00)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZ_OFFSET UNITYSDK_OFFSET(0x2054E00)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALXMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283C30)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALXMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2054C90)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALX_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283B10)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALX_OFFSET UNITYSDK_OFFSET(0x2054B70)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALYMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283C70)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALYMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2054CB0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283B80)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALY_OFFSET UNITYSDK_OFFSET(0x2054BE0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283CB0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2054CD0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZ_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283BF0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZ_OFFSET UNITYSDK_OFFSET(0x2054C50)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIALMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283F70)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIALMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2054F10)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283F30)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIAL_OFFSET UNITYSDK_OFFSET(0x2054ED0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPACE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18284060)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPACE_OFFSET UNITYSDK_OFFSET(0x2054FC0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIERMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18284020)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIERMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2054FA0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283FE0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIER_OFFSET UNITYSDK_OFFSET(0x2054F60)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_XMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283A20)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_XMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2054AE0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_X_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283900)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_X_OFFSET UNITYSDK_OFFSET(0x20549C0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_YMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283A60)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_YMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2054B00)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Y_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283970)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Y_OFFSET UNITYSDK_OFFSET(0x2054A30)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x18283AA0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ZMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x2054B20)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Z_INJECTED_OFFSET UNITYSDK_OFFSET(0x182839E0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Z_OFFSET UNITYSDK_OFFSET(0x2054AA0)
#define UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xBDC0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_VelocityOverLifetimeModule_TypeDefinitionIndex = 5348;

	struct alignas(8) ParticleSystem_VelocityOverLifetimeModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ENABLED_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_x()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_X_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_x(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_X_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_y()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Y_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_y(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Y_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_z()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Z_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_z(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Z_OFFSET))(this, value);
		}
		*/

		::System::Single get_xMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_XMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_xMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_XMULTIPLIER_OFFSET))(this, value);
		}

		::System::Single get_yMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_YMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_yMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_YMULTIPLIER_OFFSET))(this, value);
		}

		::System::Single get_zMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_zMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ZMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_orbitalX()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALX_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_orbitalX(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALX_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_orbitalY()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALY_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_orbitalY(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALY_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_orbitalZ()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZ_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_orbitalZ(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZ_OFFSET))(this, value);
		}
		*/

		::System::Single get_orbitalXMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALXMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_orbitalXMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALXMULTIPLIER_OFFSET))(this, value);
		}

		::System::Single get_orbitalYMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALYMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_orbitalYMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALYMULTIPLIER_OFFSET))(this, value);
		}

		::System::Single get_orbitalZMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_orbitalZMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_orbitalOffsetX()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETX_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_orbitalOffsetX(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETX_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_orbitalOffsetY()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETY_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_orbitalOffsetY(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETY_OFFSET))(this, value);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_orbitalOffsetZ()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZ_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_orbitalOffsetZ(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZ_OFFSET))(this, value);
		}
		*/

		::System::Single get_orbitalOffsetXMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETXMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_orbitalOffsetXMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETXMULTIPLIER_OFFSET))(this, value);
		}

		::System::Single get_orbitalOffsetYMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETYMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_orbitalOffsetYMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETYMULTIPLIER_OFFSET))(this, value);
		}

		::System::Single get_orbitalOffsetZMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_orbitalOffsetZMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_radial()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIAL_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_radial(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIAL_OFFSET))(this, value);
		}
		*/

		::System::Single get_radialMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIALMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_radialMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIALMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_speedModifier()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIER_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_speedModifier(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIER_OFFSET))(this, value);
		}
		*/

		::System::Single get_speedModifierMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIERMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_speedModifierMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIERMULTIPLIER_OFFSET))(this, value);
		}

		::UnityEngine::ParticleSystemSimulationSpace get_space()
		{
			return ((::UnityEngine::ParticleSystemSimulationSpace(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPACE_OFFSET))(this);
		}

		::System::Void set_space(::UnityEngine::ParticleSystemSimulationSpace value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystemSimulationSpace))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPACE_OFFSET))(this, value);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ENABLED_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_x_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_X_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_x_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_X_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void get_y_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Y_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_y_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Y_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void get_z_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_Z_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_z_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_Z_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_xMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_XMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_xMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_XMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_yMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_YMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_yMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_YMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_zMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ZMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_zMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ZMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_orbitalX_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALX_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_orbitalX_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALX_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void get_orbitalY_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALY_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_orbitalY_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALY_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void get_orbitalZ_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZ_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_orbitalZ_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZ_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_orbitalXMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALXMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_orbitalXMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALXMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_orbitalYMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALYMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_orbitalYMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALYMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_orbitalZMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALZMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_orbitalZMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALZMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_orbitalOffsetX_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETX_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_orbitalOffsetX_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETX_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void get_orbitalOffsetY_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETY_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_orbitalOffsetY_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETY_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		/*
		static ::System::Void get_orbitalOffsetZ_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZ_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_orbitalOffsetZ_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZ_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_orbitalOffsetXMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETXMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_orbitalOffsetXMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETXMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_orbitalOffsetYMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETYMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_orbitalOffsetYMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETYMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::System::Single get_orbitalOffsetZMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_ORBITALOFFSETZMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_orbitalOffsetZMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_ORBITALOFFSETZMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_radial_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIAL_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_radial_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIAL_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_radialMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_RADIALMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_radialMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_RADIALMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_speedModifier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIER_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_speedModifier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIER_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_speedModifierMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPEEDMODIFIERMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_speedModifierMultiplier_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPEEDMODIFIERMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		static ::UnityEngine::ParticleSystemSimulationSpace get_space_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self)
		{
			return ((::UnityEngine::ParticleSystemSimulationSpace(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_GET_SPACE_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_space_Injected(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule& _unity_self, ::UnityEngine::ParticleSystemSimulationSpace value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_VelocityOverLifetimeModule&, ::UnityEngine::ParticleSystemSimulationSpace))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_VELOCITYOVERLIFETIMEMODULE_SET_SPACE_INJECTED_OFFSET))(_unity_self, value);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class ParticleSystem; }

#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GETBURSTS_OFFSET UNITYSDK_OFFSET(0x238AC20)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GETBURST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D56D0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GETBURST_OFFSET UNITYSDK_OFFSET(0x238ADC0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_BURSTCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D56E0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_BURSTCOUNT_OFFSET UNITYSDK_OFFSET(0x238AE30)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D5210)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x238A980)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERDISTANCEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D5340)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERDISTANCEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238AAA0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERDISTANCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D5300)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERDISTANCE_OFFSET UNITYSDK_OFFSET(0x238AA30)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERTIMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D5290)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERTIMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238AA10)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D5270)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERTIME_OFFSET UNITYSDK_OFFSET(0x238A9A0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SETBURSTS_1_OFFSET UNITYSDK_OFFSET(0x238AB70)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SETBURSTS_OFFSET UNITYSDK_OFFSET(0x238AAC0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SETBURST_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D56C0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SETBURST_OFFSET UNITYSDK_OFFSET(0x238AD80)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_BURSTCOUNT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D56F0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_BURSTCOUNT_OFFSET UNITYSDK_OFFSET(0x238AE40)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_ENABLED_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D5220)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_ENABLED_OFFSET UNITYSDK_OFFSET(0x238A990)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERDISTANCEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D5360)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERDISTANCEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238AAB0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERDISTANCE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D5320)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERDISTANCE_OFFSET UNITYSDK_OFFSET(0x238AA70)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERTIMEMULTIPLIER_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D52B0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERTIMEMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x238AA20)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERTIME_INJECTED_OFFSET UNITYSDK_OFFSET(0x1A5D5280)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERTIME_OFFSET UNITYSDK_OFFSET(0x238A9E0)
#define UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x6163B0)

namespace UnityEngine
{
	inline static constexpr unsigned int ParticleSystem_EmissionModule_TypeDefinitionIndex = 5436;

	struct alignas(8) ParticleSystem_EmissionModule
	{
		::UnityEngine::ParticleSystem* m_ParticleSystem; // 0x10

		::System::Void _ctor(::UnityEngine::ParticleSystem* particleSystem)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE__CTOR_OFFSET))(this, particleSystem);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_ENABLED_OFFSET))(this);
		}

		::System::Void set_enabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_ENABLED_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_rateOverTime()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERTIME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_rateOverTime(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERTIME_OFFSET))(this, value);
		}
		*/

		::System::Single get_rateOverTimeMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERTIMEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_rateOverTimeMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERTIMEMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::UnityEngine::ParticleSystem_MinMaxCurve get_rateOverDistance()
		{
			return ((::UnityEngine::ParticleSystem_MinMaxCurve(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERDISTANCE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_rateOverDistance(::UnityEngine::ParticleSystem_MinMaxCurve value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ParticleSystem_MinMaxCurve))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERDISTANCE_OFFSET))(this, value);
		}
		*/

		::System::Single get_rateOverDistanceMultiplier()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERDISTANCEMULTIPLIER_OFFSET))(this);
		}

		::System::Void set_rateOverDistanceMultiplier(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERDISTANCEMULTIPLIER_OFFSET))(this, value);
		}

		/*
		::System::Void SetBursts(::Il2CppArray<::UnityEngine::ParticleSystem_Burst>* bursts)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ParticleSystem_Burst>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SETBURSTS_OFFSET))(this, bursts);
		}
		*/

		/*
		::System::Void SetBursts_1(::Il2CppArray<::UnityEngine::ParticleSystem_Burst>* bursts, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ParticleSystem_Burst>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SETBURSTS_1_OFFSET))(this, bursts, size);
		}
		*/

		/*
		::System::Int32 GetBursts(::Il2CppArray<::UnityEngine::ParticleSystem_Burst>* bursts)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::UnityEngine::ParticleSystem_Burst>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GETBURSTS_OFFSET))(this, bursts);
		}
		*/

		/*
		::System::Void SetBurst(::System::Int32 index, ::UnityEngine::ParticleSystem_Burst burst)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::ParticleSystem_Burst))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SETBURST_OFFSET))(this, index, burst);
		}
		*/

		/*
		::UnityEngine::ParticleSystem_Burst GetBurst(::System::Int32 index)
		{
			return ((::UnityEngine::ParticleSystem_Burst(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GETBURST_OFFSET))(this, index);
		}
		*/

		::System::Int32 get_burstCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_BURSTCOUNT_OFFSET))(this);
		}

		::System::Void set_burstCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_BURSTCOUNT_OFFSET))(this, value);
		}

		static ::System::Boolean get_enabled_Injected(::UnityEngine::ParticleSystem_EmissionModule& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::ParticleSystem_EmissionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_ENABLED_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_enabled_Injected(::UnityEngine::ParticleSystem_EmissionModule& _unity_self, ::System::Boolean value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_ENABLED_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_rateOverTime_Injected(::UnityEngine::ParticleSystem_EmissionModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERTIME_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_rateOverTime_Injected(::UnityEngine::ParticleSystem_EmissionModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERTIME_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_rateOverTimeMultiplier_Injected(::UnityEngine::ParticleSystem_EmissionModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_EmissionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERTIMEMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_rateOverTimeMultiplier_Injected(::UnityEngine::ParticleSystem_EmissionModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERTIMEMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void get_rateOverDistance_Injected(::UnityEngine::ParticleSystem_EmissionModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERDISTANCE_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void set_rateOverDistance_Injected(::UnityEngine::ParticleSystem_EmissionModule& _unity_self, ::UnityEngine::ParticleSystem_MinMaxCurve& value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::UnityEngine::ParticleSystem_MinMaxCurve&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERDISTANCE_INJECTED_OFFSET))(_unity_self, value);
		}
		*/

		static ::System::Single get_rateOverDistanceMultiplier_Injected(::UnityEngine::ParticleSystem_EmissionModule& _unity_self)
		{
			return ((::System::Single(*)(::UnityEngine::ParticleSystem_EmissionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_RATEOVERDISTANCEMULTIPLIER_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_rateOverDistanceMultiplier_Injected(::UnityEngine::ParticleSystem_EmissionModule& _unity_self, ::System::Single value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_RATEOVERDISTANCEMULTIPLIER_INJECTED_OFFSET))(_unity_self, value);
		}

		/*
		static ::System::Void SetBurst_Injected(::UnityEngine::ParticleSystem_EmissionModule& _unity_self, ::System::Int32 index, ::UnityEngine::ParticleSystem_Burst& burst)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::System::Int32, ::UnityEngine::ParticleSystem_Burst&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SETBURST_INJECTED_OFFSET))(_unity_self, index, burst);
		}
		*/

		/*
		static ::System::Void GetBurst_Injected(::UnityEngine::ParticleSystem_EmissionModule& _unity_self, ::System::Int32 index, ::UnityEngine::ParticleSystem_Burst& ret)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::System::Int32, ::UnityEngine::ParticleSystem_Burst&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GETBURST_INJECTED_OFFSET))(_unity_self, index, ret);
		}
		*/

		static ::System::Int32 get_burstCount_Injected(::UnityEngine::ParticleSystem_EmissionModule& _unity_self)
		{
			return ((::System::Int32(*)(::UnityEngine::ParticleSystem_EmissionModule&))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_GET_BURSTCOUNT_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Void set_burstCount_Injected(::UnityEngine::ParticleSystem_EmissionModule& _unity_self, ::System::Int32 value)
		{
			return ((::System::Void(*)(::UnityEngine::ParticleSystem_EmissionModule&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PARTICLESYSTEM_EMISSIONMODULE_SET_BURSTCOUNT_INJECTED_OFFSET))(_unity_self, value);
		}
	};
}

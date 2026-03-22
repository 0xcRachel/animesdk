#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Random_State.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RANDOM_COLORHSV_1_OFFSET UNITYSDK_OFFSET(0x1821B1C0)
#define UNITYENGINE_RANDOM_COLORHSV_2_OFFSET UNITYSDK_OFFSET(0x1821B450)
#define UNITYENGINE_RANDOM_COLORHSV_3_OFFSET UNITYSDK_OFFSET(0x1821B6F0)
#define UNITYENGINE_RANDOM_COLORHSV_4_OFFSET UNITYSDK_OFFSET(0x1821AEF0)
#define UNITYENGINE_RANDOM_COLORHSV_OFFSET UNITYSDK_OFFSET(0x1821AC90)
#define UNITYENGINE_RANDOM_GETRANDOMUNITCIRCLE_OFFSET UNITYSDK_OFFSET(0x1821AB60)
#define UNITYENGINE_RANDOM_GET_INSIDEUNITCIRCLE_OFFSET UNITYSDK_OFFSET(0x1821AB70)
#define UNITYENGINE_RANDOM_GET_INSIDEUNITSPHERE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1821AB50)
#define UNITYENGINE_RANDOM_GET_INSIDEUNITSPHERE_OFFSET UNITYSDK_OFFSET(0x1821AB10)
#define UNITYENGINE_RANDOM_GET_ONUNITSPHERE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1821ABE0)
#define UNITYENGINE_RANDOM_GET_ONUNITSPHERE_OFFSET UNITYSDK_OFFSET(0x1821ABA0)
#define UNITYENGINE_RANDOM_GET_ROTATIONUNIFORM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1821AC60)
#define UNITYENGINE_RANDOM_GET_ROTATIONUNIFORM_OFFSET UNITYSDK_OFFSET(0x1821AC30)
#define UNITYENGINE_RANDOM_GET_ROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1821AC20)
#define UNITYENGINE_RANDOM_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x1821ABF0)
#define UNITYENGINE_RANDOM_GET_SEED_OFFSET UNITYSDK_OFFSET(0x1821AA40)
#define UNITYENGINE_RANDOM_GET_STATE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1821AAA0)
#define UNITYENGINE_RANDOM_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1821AA70)
#define UNITYENGINE_RANDOM_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1821AB00)
#define UNITYENGINE_RANDOM_INITSTATE_OFFSET UNITYSDK_OFFSET(0x1821AA60)
#define UNITYENGINE_RANDOM_RANDOMRANGEINT_OFFSET UNITYSDK_OFFSET(0x1821AAF0)
#define UNITYENGINE_RANDOM_RANDOMRANGE_1_OFFSET UNITYSDK_OFFSET(0x1821AC80)
#define UNITYENGINE_RANDOM_RANDOMRANGE_OFFSET UNITYSDK_OFFSET(0x1821AC70)
#define UNITYENGINE_RANDOM_RANGE_1_OFFSET UNITYSDK_OFFSET(0x1821AAE0)
#define UNITYENGINE_RANDOM_RANGE_OFFSET UNITYSDK_OFFSET(0x1821AAD0)
#define UNITYENGINE_RANDOM_SET_SEED_OFFSET UNITYSDK_OFFSET(0x1821AA50)
#define UNITYENGINE_RANDOM_SET_STATE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1821AAC0)
#define UNITYENGINE_RANDOM_SET_STATE_OFFSET UNITYSDK_OFFSET(0x1821AAB0)
#define UNITYENGINE_RANDOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1821B9B0)

namespace UnityEngine
{
	inline static constexpr unsigned int Random_TypeDefinitionIndex = 4035;

	class Random : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM__CTOR_OFFSET))(this);
		}

		static ::System::Int32 get_seed()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_SEED_OFFSET))();
		}

		static ::System::Void set_seed(::System::Int32 value)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_SET_SEED_OFFSET))(value);
		}

		static ::System::Void InitState(::System::Int32 seed)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_INITSTATE_OFFSET))(seed);
		}

		static ::UnityEngine::Random_State get_state()
		{
			return ((::UnityEngine::Random_State(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_STATE_OFFSET))();
		}

		static ::System::Void set_state(::UnityEngine::Random_State value)
		{
			return ((::System::Void(*)(::UnityEngine::Random_State))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_SET_STATE_OFFSET))(value);
		}

		static ::System::Single Range(::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_RANGE_OFFSET))(min, max);
		}

		static ::System::Int32 Range_1(::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_RANGE_1_OFFSET))(min, max);
		}

		static ::System::Int32 RandomRangeInt(::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_RANDOMRANGEINT_OFFSET))(min, max);
		}

		static ::System::Single get_value()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_VALUE_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_insideUnitSphere()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_INSIDEUNITSPHERE_OFFSET))();
		}

		static ::System::Void GetRandomUnitCircle(::UnityEngine::Vector2& output)
		{
			return ((::System::Void(*)(::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GETRANDOMUNITCIRCLE_OFFSET))(output);
		}

		static ::UnityEngine::Vector2 get_insideUnitCircle()
		{
			return ((::UnityEngine::Vector2(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_INSIDEUNITCIRCLE_OFFSET))();
		}

		static ::UnityEngine::Vector3 get_onUnitSphere()
		{
			return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_ONUNITSPHERE_OFFSET))();
		}

		static ::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_ROTATION_OFFSET))();
		}

		static ::UnityEngine::Quaternion get_rotationUniform()
		{
			return ((::UnityEngine::Quaternion(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_ROTATIONUNIFORM_OFFSET))();
		}

		static ::System::Single RandomRange(::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_RANDOMRANGE_OFFSET))(min, max);
		}

		static ::System::Int32 RandomRange_1(::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_RANDOMRANGE_1_OFFSET))(min, max);
		}

		static ::UnityEngine::Color ColorHSV()
		{
			return ((::UnityEngine::Color(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_COLORHSV_OFFSET))();
		}

		static ::UnityEngine::Color ColorHSV_1(::System::Single hueMin, ::System::Single hueMax)
		{
			return ((::UnityEngine::Color(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_COLORHSV_1_OFFSET))(hueMin, hueMax);
		}

		static ::UnityEngine::Color ColorHSV_2(::System::Single hueMin, ::System::Single hueMax, ::System::Single saturationMin, ::System::Single saturationMax)
		{
			return ((::UnityEngine::Color(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_COLORHSV_2_OFFSET))(hueMin, hueMax, saturationMin, saturationMax);
		}

		static ::UnityEngine::Color ColorHSV_3(::System::Single hueMin, ::System::Single hueMax, ::System::Single saturationMin, ::System::Single saturationMax, ::System::Single valueMin, ::System::Single valueMax)
		{
			return ((::UnityEngine::Color(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_COLORHSV_3_OFFSET))(hueMin, hueMax, saturationMin, saturationMax, valueMin, valueMax);
		}

		static ::UnityEngine::Color ColorHSV_4(::System::Single hueMin, ::System::Single hueMax, ::System::Single saturationMin, ::System::Single saturationMax, ::System::Single valueMin, ::System::Single valueMax, ::System::Single alphaMin, ::System::Single alphaMax)
		{
			return ((::UnityEngine::Color(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_COLORHSV_4_OFFSET))(hueMin, hueMax, saturationMin, saturationMax, valueMin, valueMax, alphaMin, alphaMax);
		}

		static ::System::Void get_state_Injected(::UnityEngine::Random_State& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Random_State&))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_STATE_INJECTED_OFFSET))(ret);
		}

		static ::System::Void set_state_Injected(::UnityEngine::Random_State& value)
		{
			return ((::System::Void(*)(::UnityEngine::Random_State&))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_SET_STATE_INJECTED_OFFSET))(value);
		}

		static ::System::Void get_insideUnitSphere_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_INSIDEUNITSPHERE_INJECTED_OFFSET))(ret);
		}

		static ::System::Void get_onUnitSphere_Injected(::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_ONUNITSPHERE_INJECTED_OFFSET))(ret);
		}

		static ::System::Void get_rotation_Injected(::UnityEngine::Quaternion& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_ROTATION_INJECTED_OFFSET))(ret);
		}

		static ::System::Void get_rotationUniform_Injected(::UnityEngine::Quaternion& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_RANDOM_GET_ROTATIONUNIFORM_INJECTED_OFFSET))(ret);
		}
	};
}

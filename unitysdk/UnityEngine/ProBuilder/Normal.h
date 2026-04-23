#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }

#define UNITYENGINE_PROBUILDER_NORMAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x87A560)
#define UNITYENGINE_PROBUILDER_NORMAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x87A200)
#define UNITYENGINE_PROBUILDER_NORMAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x87A210)
#define UNITYENGINE_PROBUILDER_NORMAL_GET_BITANGENT_OFFSET UNITYSDK_OFFSET(0x87A1D0)
#define UNITYENGINE_PROBUILDER_NORMAL_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0x657BF0)
#define UNITYENGINE_PROBUILDER_NORMAL_GET_TANGENT_OFFSET UNITYSDK_OFFSET(0x87A1B0)
#define UNITYENGINE_PROBUILDER_NORMAL_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xB9E9860)
#define UNITYENGINE_PROBUILDER_NORMAL_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xB9E9940)
#define UNITYENGINE_PROBUILDER_NORMAL_SET_BITANGENT_OFFSET UNITYSDK_OFFSET(0x87A1F0)
#define UNITYENGINE_PROBUILDER_NORMAL_SET_NORMAL_OFFSET UNITYSDK_OFFSET(0x6579B0)
#define UNITYENGINE_PROBUILDER_NORMAL_SET_TANGENT_OFFSET UNITYSDK_OFFSET(0x87A1C0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Normal_TypeDefinitionIndex = 39934;

	struct alignas(4) Normal
	{
		::UnityEngine::Vector3 _normal_k__BackingField; // 0x10
		::UnityEngine::Vector4 _tangent_k__BackingField; // 0x1C
		::UnityEngine::Vector3 _bitangent_k__BackingField; // 0x2C

		::UnityEngine::Vector3 get_normal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMAL_GET_NORMAL_OFFSET))(this);
		}

		::System::Void set_normal(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMAL_SET_NORMAL_OFFSET))(this, value);
		}

		::UnityEngine::Vector4 get_tangent()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMAL_GET_TANGENT_OFFSET))(this);
		}

		::System::Void set_tangent(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMAL_SET_TANGENT_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_bitangent()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMAL_GET_BITANGENT_OFFSET))(this);
		}

		::System::Void set_bitangent(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMAL_SET_BITANGENT_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMAL_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMAL_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::UnityEngine::ProBuilder::Normal other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Normal))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMAL_EQUALS_1_OFFSET))(this, other);
		}

		static ::System::Boolean op_Equality(::UnityEngine::ProBuilder::Normal a, ::UnityEngine::ProBuilder::Normal b)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::Normal, ::UnityEngine::ProBuilder::Normal))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMAL_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::ProBuilder::Normal a, ::UnityEngine::ProBuilder::Normal b)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::Normal, ::UnityEngine::ProBuilder::Normal))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMAL_OP_INEQUALITY_OFFSET))(a, b);
		}
	};
}

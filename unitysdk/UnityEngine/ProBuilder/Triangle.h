#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define UNITYENGINE_PROBUILDER_TRIANGLE_CONTAINSEDGE_OFFSET UNITYSDK_OFFSET(0x203A110)
#define UNITYENGINE_PROBUILDER_TRIANGLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x203A030)
#define UNITYENGINE_PROBUILDER_TRIANGLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x202B600)
#define UNITYENGINE_PROBUILDER_TRIANGLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x203A090)
#define UNITYENGINE_PROBUILDER_TRIANGLE_GET_A_OFFSET UNITYSDK_OFFSET(0x59D0)
#define UNITYENGINE_PROBUILDER_TRIANGLE_GET_B_OFFSET UNITYSDK_OFFSET(0x1DAE0)
#define UNITYENGINE_PROBUILDER_TRIANGLE_GET_C_OFFSET UNITYSDK_OFFSET(0xD240)
#define UNITYENGINE_PROBUILDER_TRIANGLE_GET_INDICES_OFFSET UNITYSDK_OFFSET(0x203A020)
#define UNITYENGINE_PROBUILDER_TRIANGLE_ISADJACENT_OFFSET UNITYSDK_OFFSET(0x203A0B0)
#define UNITYENGINE_PROBUILDER_TRIANGLE__CTOR_OFFSET UNITYSDK_OFFSET(0xC9EC0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Triangle_TypeDefinitionIndex = 33190;

	struct alignas(4) Triangle
	{
		::System::Int32 m_A; // 0x10
		::System::Int32 m_B; // 0x14
		::System::Int32 m_C; // 0x18

		::System::Void _ctor(::System::Int32 a, ::System::Int32 b, ::System::Int32 c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRIANGLE__CTOR_OFFSET))(this, a, b, c);
		}

		::System::Int32 get_a()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRIANGLE_GET_A_OFFSET))(this);
		}

		::System::Int32 get_b()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRIANGLE_GET_B_OFFSET))(this);
		}

		::System::Int32 get_c()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRIANGLE_GET_C_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* get_indices()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRIANGLE_GET_INDICES_OFFSET))(this);
		}

		::System::Boolean Equals(::UnityEngine::ProBuilder::Triangle other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Triangle))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRIANGLE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRIANGLE_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRIANGLE_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean IsAdjacent(::UnityEngine::ProBuilder::Triangle other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Triangle))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRIANGLE_ISADJACENT_OFFSET))(this, other);
		}

		/*
		::System::Boolean ContainsEdge(::UnityEngine::ProBuilder::Edge edge)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Edge))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRIANGLE_CONTAINSEDGE_OFFSET))(this, edge);
		}
		*/
	};
}

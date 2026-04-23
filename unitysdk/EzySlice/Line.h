#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define EZYSLICE_LINE_GET_DISTSQ_OFFSET UNITYSDK_OFFSET(0x22EF4A0)
#define EZYSLICE_LINE_GET_DIST_OFFSET UNITYSDK_OFFSET(0x22EF450)
#define EZYSLICE_LINE_GET_POSITIONA_OFFSET UNITYSDK_OFFSET(0x657BF0)
#define EZYSLICE_LINE_GET_POSITIONB_OFFSET UNITYSDK_OFFSET(0x1FF82F0)
#define EZYSLICE_LINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F76DE0)

namespace EzySlice
{
	inline static constexpr unsigned int Line_TypeDefinitionIndex = 43808;

	struct alignas(4) Line
	{
		::UnityEngine::Vector3 m_pos_a; // 0x10
		::UnityEngine::Vector3 m_pos_b; // 0x1C

		::System::Void _ctor(::UnityEngine::Vector3 pta, ::UnityEngine::Vector3 ptb)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EZYSLICE_LINE__CTOR_OFFSET))(this, pta, ptb);
		}

		::System::Single get_dist()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_LINE_GET_DIST_OFFSET))(this);
		}

		::System::Single get_distSq()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_LINE_GET_DISTSQ_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_positionA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_LINE_GET_POSITIONA_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_positionB()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EZYSLICE_LINE_GET_POSITIONB_OFFSET))(this);
		}
	};
}

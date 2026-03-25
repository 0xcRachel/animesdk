#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client::NavMap { class IMapDataSource; }

#define STRUCT_2_1C9EA53B06A21796_GET_ORIGINMATRIX_OFFSET UNITYSDK_OFFSET(0x1498FB0)
#define STRUCT_2_1C9EA53B06A21796_METHOD_2_0A4AA947D94CAB06_OFFSET UNITYSDK_OFFSET(0x10C4CC60)
#define STRUCT_2_1C9EA53B06A21796_METHOD_2_24D9BF29B297FEF8_OFFSET UNITYSDK_OFFSET(0x10C4C8B0)
#define STRUCT_2_1C9EA53B06A21796_METHOD_2_31BEBE4D2907E113_OFFSET UNITYSDK_OFFSET(0x10C4C790)
#define STRUCT_2_1C9EA53B06A21796_METHOD_2_70568AD9E47CB5C1_OFFSET UNITYSDK_OFFSET(0x10C4D140)
#define STRUCT_2_1C9EA53B06A21796_METHOD_2_79CF86836A29EF45_OFFSET UNITYSDK_OFFSET(0x1498E00)
#define STRUCT_2_1C9EA53B06A21796_METHOD_2_A7404DEF8F06FEF2_OFFSET UNITYSDK_OFFSET(0x10C4CB50)
#define STRUCT_2_1C9EA53B06A21796_METHOD_2_C34AC80B04BCFF1B_1_OFFSET UNITYSDK_OFFSET(0x1499080)
#define STRUCT_2_1C9EA53B06A21796_METHOD_2_C34AC80B04BCFF1B_OFFSET UNITYSDK_OFFSET(0x1498EF0)
#define STRUCT_2_1C9EA53B06A21796_METHOD_2_C7B1186FF9CBAF29_OFFSET UNITYSDK_OFFSET(0x10C4CED0)
#define STRUCT_2_1C9EA53B06A21796_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x1499000)
#define STRUCT_2_1C9EA53B06A21796_METHOD_2_FA662896843C137A_OFFSET UNITYSDK_OFFSET(0x1498E20)
#define STRUCT_2_1C9EA53B06A21796_SET_ORIGINMATRIX_OFFSET UNITYSDK_OFFSET(0x1498FE0)

inline static constexpr unsigned int Struct_2_1C9EA53B06A21796_TypeDefinitionIndex = 49073;

struct alignas(4) Struct_2_1C9EA53B06A21796
{
	::UnityEngine::Matrix4x4 _OriginMatrix_k__BackingField; // 0x10

	/*
	static ::Struct_2_1C9EA53B06A21796 Method_2_31BEBE4D2907E113(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::Struct_2_1C9EA53B06A21796(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + STRUCT_2_1C9EA53B06A21796_METHOD_2_31BEBE4D2907E113_OFFSET))(a1, a2);
	}
	*/

	/*
	static ::Struct_2_1C9EA53B06A21796 Method_2_24D9BF29B297FEF8(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::Struct_2_1C9EA53B06A21796(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + STRUCT_2_1C9EA53B06A21796_METHOD_2_24D9BF29B297FEF8_OFFSET))(a1, a2);
	}
	*/

	static ::Struct_2_1C9EA53B06A21796 Method_2_A7404DEF8F06FEF2(::RPG::Client::MapNpcDef* a1)
	{
		return ((::Struct_2_1C9EA53B06A21796(*)(::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + STRUCT_2_1C9EA53B06A21796_METHOD_2_A7404DEF8F06FEF2_OFFSET))(a1);
	}

	static ::Struct_2_1C9EA53B06A21796 Method_2_0A4AA947D94CAB06(::RPG::Client::MapNpcDef* a1, ::RPG::Client::MapDef* a2)
	{
		return ((::Struct_2_1C9EA53B06A21796(*)(::RPG::Client::MapNpcDef*, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + STRUCT_2_1C9EA53B06A21796_METHOD_2_0A4AA947D94CAB06_OFFSET))(a1, a2);
	}

	static ::Struct_2_1C9EA53B06A21796 Method_2_C7B1186FF9CBAF29(::RPG::Client::MapNpcDef* a1, ::RPG::Client::NavMap::IMapDataSource* a2)
	{
		return ((::Struct_2_1C9EA53B06A21796(*)(::RPG::Client::MapNpcDef*, ::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + STRUCT_2_1C9EA53B06A21796_METHOD_2_C7B1186FF9CBAF29_OFFSET))(a1, a2);
	}

	static ::Struct_2_1C9EA53B06A21796 Method_2_70568AD9E47CB5C1(::System::Single a1, ::System::UInt32 a2)
	{
		return ((::Struct_2_1C9EA53B06A21796(*)(::System::Single, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_1C9EA53B06A21796_METHOD_2_70568AD9E47CB5C1_OFFSET))(a1, a2);
	}

	::UnityEngine::Matrix4x4 Method_2_79CF86836A29EF45()
	{
		return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1C9EA53B06A21796_METHOD_2_79CF86836A29EF45_OFFSET))(this);
	}

	/*
	::UnityEngine::Vector3 Method_2_FA662896843C137A()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1C9EA53B06A21796_METHOD_2_FA662896843C137A_OFFSET))(this);
	}
	*/

	/*
	::UnityEngine::Quaternion Method_2_C34AC80B04BCFF1B()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1C9EA53B06A21796_METHOD_2_C34AC80B04BCFF1B_OFFSET))(this);
	}
	*/

	::UnityEngine::Matrix4x4 get_OriginMatrix()
	{
		return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1C9EA53B06A21796_GET_ORIGINMATRIX_OFFSET))(this);
	}

	::System::Void set_OriginMatrix(::UnityEngine::Matrix4x4 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + STRUCT_2_1C9EA53B06A21796_SET_ORIGINMATRIX_OFFSET))(this, value);
	}

	/*
	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1C9EA53B06A21796_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}
	*/

	/*
	::UnityEngine::Quaternion Method_2_C34AC80B04BCFF1B_1()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_1C9EA53B06A21796_METHOD_2_C34AC80B04BCFF1B_1_OFFSET))(this);
	}
	*/
};

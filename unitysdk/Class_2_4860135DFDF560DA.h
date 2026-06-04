#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG { template <typename T> class PoolList_1; }
namespace UnityEngine { class Collision; }

#define CLASS_2_4860135DFDF560DA_CLEAR_OFFSET UNITYSDK_OFFSET(0x15F683B0)
#define CLASS_2_4860135DFDF560DA_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15F68500)
#define CLASS_2_4860135DFDF560DA_ONALLOC_OFFSET UNITYSDK_OFFSET(0x15F682C0)
#define CLASS_2_4860135DFDF560DA__CTOR_OFFSET UNITYSDK_OFFSET(0x15F685A0)
#define CLASS_2_4860135DFDF560DA___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x15F68630)
#define CLASS_2_4860135DFDF560DA___IFIXBASEPROXY_ONALLOC_OFFSET UNITYSDK_OFFSET(0x15F685B0)

inline static constexpr unsigned int Class_2_4860135DFDF560DA_TypeDefinitionIndex = 40120;

class Class_2_4860135DFDF560DA : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::RPG::PoolHashSet_1<::System::Int32>* Field_2_0; // 0x338
	::RPG::PoolList_1<::UnityEngine::Collision*>* Field_2_1; // 0x340
	::System::Nullable_1<::UnityEngine::RaycastHit> Field_2_2; // 0x348
	::System::Nullable_1<::UnityEngine::RaycastHit> Field_2_3; // 0x37C
	::System::Nullable_1<::UnityEngine::RaycastHit> Field_2_4; // 0x3B0
	::System::Boolean Field_2_5; // 0x3E4
	::System::Boolean Field_2_6; // 0x3E5
	::System::Single Field_2_7; // 0x3E8
	::UnityEngine::Vector3 Field_2_8; // 0x3EC
	::System::Single Field_2_9; // 0x3F8
	::System::Int32 Field_2_10; // 0x3FC

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4860135DFDF560DA__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4860135DFDF560DA_ONALLOC_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4860135DFDF560DA_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4860135DFDF560DA_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4860135DFDF560DA___IFIXBASEPROXY_ONALLOC_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4860135DFDF560DA___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};

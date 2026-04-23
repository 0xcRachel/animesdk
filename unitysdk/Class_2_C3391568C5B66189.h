#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D3F97394EEAB34D6.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_1A92845FAFA5EC77;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace RPG { template <typename T> class PoolList_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Collision; }

#define CLASS_2_C3391568C5B66189_CLEAR_OFFSET UNITYSDK_OFFSET(0x17978720)
#define CLASS_2_C3391568C5B66189_METHOD_2_B540CC75D692964A_OFFSET UNITYSDK_OFFSET(0x17978940)
#define CLASS_2_C3391568C5B66189_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x179788A0)
#define CLASS_2_C3391568C5B66189_ONALLOC_OFFSET UNITYSDK_OFFSET(0x17978610)
#define CLASS_2_C3391568C5B66189__CTOR_OFFSET UNITYSDK_OFFSET(0x17978CE0)
#define CLASS_2_C3391568C5B66189___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x17978D80)
#define CLASS_2_C3391568C5B66189___IFIXBASEPROXY_ONALLOC_OFFSET UNITYSDK_OFFSET(0x17978CF0)

inline static constexpr unsigned int Class_2_C3391568C5B66189_TypeDefinitionIndex = 39357;

class Class_2_C3391568C5B66189 : public ::Class_1_D3F97394EEAB34D6
{
public:
	::RPG::PoolHashSet_1<::System::Int32>* Field_2_13; // 0x338
	::RPG::PoolHashSet_1<::UnityEngine::Collider*>* Field_2_14; // 0x340
	::RPG::PoolList_1<::UnityEngine::Collision*>* Field_2_7; // 0x348
	::System::Single Field_2_8; // 0x350
	::System::Nullable_1<::UnityEngine::RaycastHit> Field_2_4; // 0x354
	::System::Nullable_1<::UnityEngine::RaycastHit> Field_2_2; // 0x388
	::System::Single Field_2_6; // 0x3BC
	::System::Boolean Field_2_1; // 0x3C0
	::System::Boolean Field_2_12; // 0x3C1
	::System::Boolean Field_2_11; // 0x3C2
	::System::Nullable_1<::UnityEngine::RaycastHit> Field_2_3; // 0x3C4
	::System::Single Field_2_10; // 0x3F8
	::System::Int32 Field_2_5; // 0x3FC
	::UnityEngine::Vector3 Field_2_0; // 0x400
	::System::Single Field_2_9; // 0x40C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3391568C5B66189__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3391568C5B66189_ONALLOC_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3391568C5B66189_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3391568C5B66189_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_B540CC75D692964A(::Class_3_1A92845FAFA5EC77* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_2_C3391568C5B66189_METHOD_2_B540CC75D692964A_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3391568C5B66189___IFIXBASEPROXY_ONALLOC_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C3391568C5B66189___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};

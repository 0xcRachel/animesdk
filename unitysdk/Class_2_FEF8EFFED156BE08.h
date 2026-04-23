#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D3F97394EEAB34D6.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_3_1A92845FAFA5EC77;
namespace RPG { template <typename T> class PoolHashSet_1; }
namespace UnityEngine { class Collider; }

#define CLASS_2_FEF8EFFED156BE08_CLEAR_OFFSET UNITYSDK_OFFSET(0x17A55490)
#define CLASS_2_FEF8EFFED156BE08_METHOD_2_B540CC75D692964A_OFFSET UNITYSDK_OFFSET(0x17A55550)
#define CLASS_2_FEF8EFFED156BE08_ONALLOC_OFFSET UNITYSDK_OFFSET(0x17A55380)
#define CLASS_2_FEF8EFFED156BE08__CTOR_OFFSET UNITYSDK_OFFSET(0x17A558F0)
#define CLASS_2_FEF8EFFED156BE08___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x17A55990)
#define CLASS_2_FEF8EFFED156BE08___IFIXBASEPROXY_ONALLOC_OFFSET UNITYSDK_OFFSET(0x17A55900)

inline static constexpr unsigned int Class_2_FEF8EFFED156BE08_TypeDefinitionIndex = 39348;

class Class_2_FEF8EFFED156BE08 : public ::Class_1_D3F97394EEAB34D6
{
public:
	::RPG::PoolHashSet_1<::UnityEngine::Collider*>* Field_2_6; // 0x338
	::RPG::PoolHashSet_1<::System::Int32>* Field_2_5; // 0x340
	::System::Boolean Field_2_3; // 0x348
	::System::Boolean Field_2_4; // 0x349
	::System::Single Field_2_1; // 0x34C
	::UnityEngine::Vector3 Field_2_0; // 0x350
	::System::Single Field_2_2; // 0x35C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEF8EFFED156BE08__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEF8EFFED156BE08_ONALLOC_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEF8EFFED156BE08_CLEAR_OFFSET))(this);
	}

	::System::Void Method_2_B540CC75D692964A(::Class_3_1A92845FAFA5EC77* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1A92845FAFA5EC77*))((::PBYTE)hIl2Cpp + CLASS_2_FEF8EFFED156BE08_METHOD_2_B540CC75D692964A_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEF8EFFED156BE08___IFIXBASEPROXY_ONALLOC_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FEF8EFFED156BE08___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};

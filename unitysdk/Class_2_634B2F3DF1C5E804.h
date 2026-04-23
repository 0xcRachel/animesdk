#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D3F97394EEAB34D6.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace UnityEngine { class Collider; }

#define CLASS_2_634B2F3DF1C5E804_CLEAR_OFFSET UNITYSDK_OFFSET(0x17C5F8D0)
#define CLASS_2_634B2F3DF1C5E804_ONALLOC_OFFSET UNITYSDK_OFFSET(0x17C5F7D0)
#define CLASS_2_634B2F3DF1C5E804__CTOR_OFFSET UNITYSDK_OFFSET(0x17C5FAE0)
#define CLASS_2_634B2F3DF1C5E804___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x17C5FB60)
#define CLASS_2_634B2F3DF1C5E804___IFIXBASEPROXY_ONALLOC_OFFSET UNITYSDK_OFFSET(0x17C5FB00)

inline static constexpr unsigned int Class_2_634B2F3DF1C5E804_TypeDefinitionIndex = 39347;

class Class_2_634B2F3DF1C5E804 : public ::Class_1_D3F97394EEAB34D6
{
public:
	::RPG::PoolList_1<::UnityEngine::Collider*>* Field_2_10; // 0x338
	::System::Boolean Field_2_12; // 0x340
	::System::Boolean Field_2_9; // 0x341
	::UnityEngine::Vector3 Field_2_13; // 0x344
	::UnityEngine::Vector3 Field_2_0; // 0x350
	::System::Int32 Field_2_15; // 0x35C
	::System::Single Field_2_4; // 0x360
	::UnityEngine::Vector3 Field_2_14; // 0x364
	::System::Single Field_2_6; // 0x370
	::System::Boolean Field_2_2; // 0x374
	::System::Boolean Field_2_8; // 0x375
	::System::Boolean Field_2_7; // 0x376
	::System::Boolean Field_2_5; // 0x377
	::System::Boolean Field_2_3; // 0x378
	::System::Boolean Field_2_1; // 0x379
	::System::Boolean Field_2_16; // 0x37A
	::System::Boolean Field_2_11; // 0x37B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634B2F3DF1C5E804__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634B2F3DF1C5E804_ONALLOC_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634B2F3DF1C5E804_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634B2F3DF1C5E804___IFIXBASEPROXY_ONALLOC_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_634B2F3DF1C5E804___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};

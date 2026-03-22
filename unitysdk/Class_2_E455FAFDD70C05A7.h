#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D3F97394EEAB34D6.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG { template <typename T> class PoolList_1; }
namespace UnityEngine { class Collider; }

#define CLASS_2_E455FAFDD70C05A7_CLEAR_OFFSET UNITYSDK_OFFSET(0x161A0770)
#define CLASS_2_E455FAFDD70C05A7_ONALLOC_OFFSET UNITYSDK_OFFSET(0x161A06D0)
#define CLASS_2_E455FAFDD70C05A7__CTOR_OFFSET UNITYSDK_OFFSET(0x161A0830)
#define CLASS_2_E455FAFDD70C05A7___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x161A08A0)
#define CLASS_2_E455FAFDD70C05A7___IFIXBASEPROXY_ONALLOC_OFFSET UNITYSDK_OFFSET(0x161A0840)

inline static constexpr unsigned int Class_2_E455FAFDD70C05A7_TypeDefinitionIndex = 32620;

class Class_2_E455FAFDD70C05A7 : public ::Class_1_D3F97394EEAB34D6
{
public:
	::RPG::PoolList_1<::UnityEngine::Collider*>* Field_2_10; // 0x338
	::System::Single Field_2_6; // 0x340
	::System::Boolean Field_2_8; // 0x344
	::System::Boolean Field_2_1; // 0x345
	::System::Boolean Field_2_2; // 0x346
	::System::Boolean Field_2_9; // 0x347
	::System::Boolean Field_2_3; // 0x348
	::System::Boolean Field_2_11; // 0x349
	::System::Boolean Field_2_7; // 0x34A
	::System::Boolean Field_2_13; // 0x34B
	::System::Single Field_2_4; // 0x34C
	::System::Boolean Field_2_5; // 0x350
	::UnityEngine::Vector3 Field_2_0; // 0x354
	::System::Int32 Field_2_12; // 0x360

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E455FAFDD70C05A7__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E455FAFDD70C05A7_ONALLOC_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E455FAFDD70C05A7_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E455FAFDD70C05A7___IFIXBASEPROXY_ONALLOC_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E455FAFDD70C05A7___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};

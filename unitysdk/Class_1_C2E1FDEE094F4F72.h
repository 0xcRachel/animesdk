#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_91EF6C50EE2BE09E;

#define CLASS_1_C2E1FDEE094F4F72_CLEAR_OFFSET UNITYSDK_OFFSET(0x162AD990)
#define CLASS_1_C2E1FDEE094F4F72_ONALLOC_OFFSET UNITYSDK_OFFSET(0x162AD900)
#define CLASS_1_C2E1FDEE094F4F72_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x162AD950)
#define CLASS_1_C2E1FDEE094F4F72__CTOR_OFFSET UNITYSDK_OFFSET(0x162AD9F0)

inline static constexpr unsigned int Class_1_C2E1FDEE094F4F72_TypeDefinitionIndex = 32393;

class Class_1_C2E1FDEE094F4F72 : public ::System::Object
{
public:
	::Class_1_91EF6C50EE2BE09E* Field_1_1; // 0x10
	::System::Single Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2E1FDEE094F4F72__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2E1FDEE094F4F72_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2E1FDEE094F4F72_ONRECYCLE_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C2E1FDEE094F4F72_CLEAR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_43BD383C98B4C0C5_25_CLEAR_OFFSET UNITYSDK_OFFSET(0x16087B30)
#define CLASS_1_43BD383C98B4C0C5_25_ONALLOC_OFFSET UNITYSDK_OFFSET(0x16087B70)
#define CLASS_1_43BD383C98B4C0C5_25_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x16087BB0)
#define CLASS_1_43BD383C98B4C0C5_25__CTOR_OFFSET UNITYSDK_OFFSET(0x16087BF0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_25_TypeDefinitionIndex = 32631;

class Class_1_43BD383C98B4C0C5_25 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_25__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_25_CLEAR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_25_ONALLOC_OFFSET))(this);
	}

	::System::Void OnRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_25_ONRECYCLE_OFFSET))(this);
	}
};

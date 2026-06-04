#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0A3B9FD0FE703FDC.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_F1D8F9A07FABFA52_CLEAR_OFFSET UNITYSDK_OFFSET(0x15F7CDF0)
#define CLASS_2_F1D8F9A07FABFA52_ONALLOC_OFFSET UNITYSDK_OFFSET(0x15F7CD70)
#define CLASS_2_F1D8F9A07FABFA52__CTOR_OFFSET UNITYSDK_OFFSET(0x15F7CE90)
#define CLASS_2_F1D8F9A07FABFA52___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x15F7CF30)
#define CLASS_2_F1D8F9A07FABFA52___IFIXBASEPROXY_ONALLOC_OFFSET UNITYSDK_OFFSET(0x15F7CEB0)

inline static constexpr unsigned int Class_2_F1D8F9A07FABFA52_TypeDefinitionIndex = 40122;

class Class_2_F1D8F9A07FABFA52 : public ::Class_1_0A3B9FD0FE703FDC
{
public:
	::System::Boolean Field_2_0; // 0x338
	::System::Boolean Field_2_1; // 0x339
	::System::Int32 Field_2_2; // 0x33C
	::UnityEngine::Vector3 Field_2_3; // 0x340
	::System::Boolean Field_2_4; // 0x34C
	::System::Boolean Field_2_5; // 0x34D
	::System::Boolean Field_2_6; // 0x34E
	::System::Int32 Field_2_7; // 0x350

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1D8F9A07FABFA52__CTOR_OFFSET))(this);
	}

	::System::Void OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1D8F9A07FABFA52_ONALLOC_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1D8F9A07FABFA52_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnAlloc()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1D8F9A07FABFA52___IFIXBASEPROXY_ONALLOC_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F1D8F9A07FABFA52___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};

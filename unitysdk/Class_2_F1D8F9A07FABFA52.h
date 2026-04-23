#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D3F97394EEAB34D6.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_F1D8F9A07FABFA52_CLEAR_OFFSET UNITYSDK_OFFSET(0x16DF06A0)
#define CLASS_2_F1D8F9A07FABFA52_ONALLOC_OFFSET UNITYSDK_OFFSET(0x16DF0620)
#define CLASS_2_F1D8F9A07FABFA52__CTOR_OFFSET UNITYSDK_OFFSET(0x16DF0730)
#define CLASS_2_F1D8F9A07FABFA52___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x16DF07E0)
#define CLASS_2_F1D8F9A07FABFA52___IFIXBASEPROXY_ONALLOC_OFFSET UNITYSDK_OFFSET(0x16DF0750)

inline static constexpr unsigned int Class_2_F1D8F9A07FABFA52_TypeDefinitionIndex = 39351;

class Class_2_F1D8F9A07FABFA52 : public ::Class_1_D3F97394EEAB34D6
{
public:
	::UnityEngine::Vector3 Field_2_2; // 0x338
	::System::Boolean Field_2_0; // 0x344
	::System::Boolean Field_2_6; // 0x345
	::System::Boolean Field_2_3; // 0x346
	::System::Int32 Field_2_5; // 0x348
	::System::Int32 Field_2_7; // 0x34C
	::System::Boolean Field_2_4; // 0x350
	::System::Boolean Field_2_1; // 0x351

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

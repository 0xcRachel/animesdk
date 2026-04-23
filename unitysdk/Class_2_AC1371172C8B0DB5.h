#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D3F97394EEAB34D6.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_AC1371172C8B0DB5_CLEAR_OFFSET UNITYSDK_OFFSET(0x15D30B80)
#define CLASS_2_AC1371172C8B0DB5__CTOR_OFFSET UNITYSDK_OFFSET(0x15D30BF0)
#define CLASS_2_AC1371172C8B0DB5___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x15D30C00)

inline static constexpr unsigned int Class_2_AC1371172C8B0DB5_TypeDefinitionIndex = 39356;

class Class_2_AC1371172C8B0DB5 : public ::Class_1_D3F97394EEAB34D6
{
public:
	::System::Boolean Field_2_2; // 0x338
	::System::Single Field_2_1; // 0x33C
	::UnityEngine::Vector3 Field_2_0; // 0x340

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC1371172C8B0DB5__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC1371172C8B0DB5_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AC1371172C8B0DB5___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D3F97394EEAB34D6.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_ED829FF84ACB418C_3_CLEAR_OFFSET UNITYSDK_OFFSET(0x161B1FB0)
#define CLASS_2_ED829FF84ACB418C_3__CTOR_OFFSET UNITYSDK_OFFSET(0x161B2010)
#define CLASS_2_ED829FF84ACB418C_3___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x161B2020)

inline static constexpr unsigned int Class_2_ED829FF84ACB418C_3_TypeDefinitionIndex = 32627;

class Class_2_ED829FF84ACB418C_3 : public ::Class_1_D3F97394EEAB34D6
{
public:
	::UnityEngine::Vector3 Field_2_0; // 0x338

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED829FF84ACB418C_3__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED829FF84ACB418C_3_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED829FF84ACB418C_3___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}
};

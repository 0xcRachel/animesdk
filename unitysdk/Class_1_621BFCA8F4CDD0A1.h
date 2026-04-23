#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_621BFCA8F4CDD0A1_METHOD_1_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0xF2C2460)
#define CLASS_1_621BFCA8F4CDD0A1__CTOR_OFFSET UNITYSDK_OFFSET(0xF2C24B0)

inline static constexpr unsigned int Class_1_621BFCA8F4CDD0A1_TypeDefinitionIndex = 71399;

class Class_1_621BFCA8F4CDD0A1 : public ::System::Object
{
public:
	::System::Single Field_1_1; // 0x10
	::System::Int32 Field_1_3; // 0x14
	::System::Single Field_1_0; // 0x18
	::UnityEngine::Vector2 Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_621BFCA8F4CDD0A1__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_621BFCA8F4CDD0A1_METHOD_1_A36150C5DCC8409E_OFFSET))(this);
	}
};

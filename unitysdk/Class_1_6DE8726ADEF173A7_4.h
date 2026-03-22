#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_6DE8726ADEF173A7_4_CLEAR_OFFSET UNITYSDK_OFFSET(0x162D6F20)
#define CLASS_1_6DE8726ADEF173A7_4__CTOR_OFFSET UNITYSDK_OFFSET(0x162D6F80)

inline static constexpr unsigned int Class_1_6DE8726ADEF173A7_4_TypeDefinitionIndex = 32411;

class Class_1_6DE8726ADEF173A7_4 : public ::System::Object
{
public:
	::System::Single Field_1_3; // 0x10
	::System::Single Field_1_5; // 0x14
	::System::Single Field_1_0; // 0x18
	::System::Single Field_1_2; // 0x1C
	::System::Single Field_1_1; // 0x20
	::System::Single Field_1_4; // 0x24
	::UnityEngine::Vector3 Field_1_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE8726ADEF173A7_4__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE8726ADEF173A7_4_CLEAR_OFFSET))(this);
	}
};

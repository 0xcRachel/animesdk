#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_6DE8726ADEF173A7_CLEAR_OFFSET UNITYSDK_OFFSET(0x15D38920)
#define CLASS_1_6DE8726ADEF173A7__CTOR_OFFSET UNITYSDK_OFFSET(0x15D389A0)

inline static constexpr unsigned int Class_1_6DE8726ADEF173A7_TypeDefinitionIndex = 39231;

class Class_1_6DE8726ADEF173A7 : public ::System::Object
{
public:
	::System::Single Field_1_3; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x14
	::UnityEngine::Vector3 Field_1_2; // 0x20
	::UnityEngine::Vector3 Field_1_0; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE8726ADEF173A7__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6DE8726ADEF173A7_CLEAR_OFFSET))(this);
	}
};

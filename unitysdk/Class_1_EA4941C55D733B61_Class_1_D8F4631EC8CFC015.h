#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_EA4941C55D733B61_CLASS_1_D8F4631EC8CFC015__CTOR_OFFSET UNITYSDK_OFFSET(0xFF0A980)

inline static constexpr unsigned int Class_1_EA4941C55D733B61_Class_1_D8F4631EC8CFC015_TypeDefinitionIndex = 70524;

class Class_1_EA4941C55D733B61_Class_1_D8F4631EC8CFC015 : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_1; // 0x10
	::UnityEngine::Quaternion Field_1_5; // 0x1C
	::UnityEngine::Vector3 Field_1_2; // 0x2C
	::UnityEngine::Quaternion Field_1_4; // 0x38
	::System::Boolean Field_1_0; // 0x48
	::System::Boolean Field_1_3; // 0x49

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA4941C55D733B61_CLASS_1_D8F4631EC8CFC015__CTOR_OFFSET))(this);
	}
};

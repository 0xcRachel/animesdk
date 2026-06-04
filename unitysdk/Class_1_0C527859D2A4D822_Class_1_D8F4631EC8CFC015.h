#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_0C527859D2A4D822_CLASS_1_D8F4631EC8CFC015__CTOR_OFFSET UNITYSDK_OFFSET(0x15CA9460)

inline static constexpr unsigned int Class_1_0C527859D2A4D822_Class_1_D8F4631EC8CFC015_TypeDefinitionIndex = 71341;

class Class_1_0C527859D2A4D822_Class_1_D8F4631EC8CFC015 : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x1C
	::System::Boolean Field_1_2; // 0x1D
	::UnityEngine::Vector3 Field_1_3; // 0x20
	::UnityEngine::Quaternion Field_1_4; // 0x2C
	::UnityEngine::Quaternion Field_1_5; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0C527859D2A4D822_CLASS_1_D8F4631EC8CFC015__CTOR_OFFSET))(this);
	}
};

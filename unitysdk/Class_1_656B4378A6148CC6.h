#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_656B4378A6148CC6__CTOR_OFFSET UNITYSDK_OFFSET(0x87ADDA0)

inline static constexpr unsigned int Class_1_656B4378A6148CC6_TypeDefinitionIndex = 51070;

class Class_1_656B4378A6148CC6 : public ::System::Object
{
public:
	::System::UInt32 Field_1_3; // 0x10
	::System::UInt32 Field_1_5; // 0x14
	::UnityEngine::Quaternion Field_1_1; // 0x18
	::System::Int32 Field_1_2; // 0x28
	::System::UInt32 Field_1_7; // 0x2C
	::System::UInt32 Field_1_4; // 0x30
	::UnityEngine::Vector3 Field_1_0; // 0x34
	::System::UInt32 Field_1_6; // 0x40
	::System::Boolean Field_1_8; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_656B4378A6148CC6__CTOR_OFFSET))(this);
	}
};

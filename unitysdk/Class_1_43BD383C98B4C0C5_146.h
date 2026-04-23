#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_43BD383C98B4C0C5_146__CTOR_OFFSET UNITYSDK_OFFSET(0xE7801A0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_146_TypeDefinitionIndex = 63123;

class Class_1_43BD383C98B4C0C5_146 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::System::Single Field_1_4; // 0x18
	::System::Single Field_1_7; // 0x1C
	::UnityEngine::Quaternion Field_1_10; // 0x20
	::System::Single Field_1_6; // 0x30
	::UnityEngine::Vector3 Field_1_14; // 0x34
	::System::Int32 Field_1_1; // 0x40
	::System::Single Field_1_5; // 0x44
	::UnityEngine::Quaternion Field_1_8; // 0x48
	::UnityEngine::Quaternion Field_1_9; // 0x58
	::UnityEngine::Vector3 Field_1_3; // 0x68
	::System::Single Field_1_11; // 0x74
	::UnityEngine::Vector3 Field_1_13; // 0x78
	::UnityEngine::Vector3 Field_1_12; // 0x84
	::UnityEngine::Vector3 Field_1_15; // 0x90
	::UnityEngine::Vector3 Field_1_2; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_146__CTOR_OFFSET))(this);
	}
};

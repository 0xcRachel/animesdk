#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_43BD383C98B4C0C5_144__CTOR_OFFSET UNITYSDK_OFFSET(0x10A47750)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_144_TypeDefinitionIndex = 54330;

class Class_1_43BD383C98B4C0C5_144 : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_0; // 0x10
	::System::Single Field_1_4; // 0x18
	::UnityEngine::Vector3 Field_1_2; // 0x1C
	::UnityEngine::Vector3 Field_1_13; // 0x28
	::UnityEngine::Vector3 Field_1_12; // 0x34
	::UnityEngine::Vector3 Field_1_14; // 0x40
	::UnityEngine::Quaternion Field_1_10; // 0x4C
	::UnityEngine::Quaternion Field_1_8; // 0x5C
	::UnityEngine::Vector3 Field_1_3; // 0x6C
	::System::Single Field_1_7; // 0x78
	::UnityEngine::Vector3 Field_1_15; // 0x7C
	::System::Single Field_1_11; // 0x88
	::System::Single Field_1_5; // 0x8C
	::System::Int32 Field_1_1; // 0x90
	::System::Single Field_1_6; // 0x94
	::UnityEngine::Quaternion Field_1_9; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_144__CTOR_OFFSET))(this);
	}
};

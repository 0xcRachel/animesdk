#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_9C2F1FCEC1A75FFD;
namespace UnityEngine { class Transform; }

#define CLASS_1_7F2D8932FAEE066D__CTOR_OFFSET UNITYSDK_OFFSET(0x160E0FB0)

inline static constexpr unsigned int Class_1_7F2D8932FAEE066D_TypeDefinitionIndex = 32355;

class Class_1_7F2D8932FAEE066D : public ::System::Object
{
public:
	::UnityEngine::Transform* Field_1_9; // 0x10
	::Class_2_9C2F1FCEC1A75FFD* Field_1_0; // 0x18
	::UnityEngine::Vector3 Field_1_10; // 0x20
	::System::Single Field_1_6; // 0x2C
	::System::Single Field_1_7; // 0x30
	::System::Boolean Field_1_8; // 0x34
	::System::Boolean Field_1_4; // 0x35
	::System::Boolean Field_1_1; // 0x36
	::System::Single Field_1_5; // 0x38
	::UnityEngine::Vector2 Field_1_2; // 0x3C
	::System::Single Field_1_3; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7F2D8932FAEE066D__CTOR_OFFSET))(this);
	}
};

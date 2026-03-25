#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }

#define CLASS_1_B7190D1A79650946__CTOR_OFFSET UNITYSDK_OFFSET(0x16830900)

inline static constexpr unsigned int Class_1_B7190D1A79650946_TypeDefinitionIndex = 33252;

class Class_1_B7190D1A79650946 : public ::System::Object
{
public:
	::System::Action* Field_1_7; // 0x10
	::System::Single Field_1_5; // 0x18
	::System::Single Field_1_6; // 0x1C
	::UnityEngine::Vector3 Field_1_1; // 0x20
	::UnityEngine::Quaternion Field_1_3; // 0x2C
	::UnityEngine::Vector3 Field_1_2; // 0x3C
	::UnityEngine::Quaternion Field_1_4; // 0x48
	::System::Boolean Field_1_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B7190D1A79650946__CTOR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_Transform_OffsetType.h"
#include "unitysdk/RPG/Client/Effect_Transform_RotateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_43BD383C98B4C0C5_108__CTOR_OFFSET UNITYSDK_OFFSET(0x117E67F0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_108_TypeDefinitionIndex = 46231;

class Class_1_43BD383C98B4C0C5_108 : public ::System::Object
{
public:
	::System::Single Field_1_3; // 0x10
	::System::Single Field_1_4; // 0x14
	::System::Single Field_1_13; // 0x18
	::System::Single Field_1_14; // 0x1C
	::RPG::Client::Effect_Transform_OffsetType Field_1_1; // 0x20
	::System::Single Field_1_5; // 0x24
	::System::Single Field_1_10; // 0x28
	::System::Single Field_1_11; // 0x2C
	::RPG::Client::Effect_Transform_RotateType Field_1_7; // 0x30
	::UnityEngine::Vector3 Field_1_12; // 0x34
	::System::Single Field_1_9; // 0x40
	::System::Single Field_1_8; // 0x44
	::System::Single Field_1_2; // 0x48
	::System::Boolean Field_1_6; // 0x4C
	::System::Boolean Field_1_0; // 0x4D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_108__CTOR_OFFSET))(this);
	}
};

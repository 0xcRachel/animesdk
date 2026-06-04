#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_Transform_OffsetType.h"
#include "unitysdk/RPG/Client/Effect_Transform_RotateType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_43BD383C98B4C0C5_122__CTOR_OFFSET UNITYSDK_OFFSET(0x16312950)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_122_TypeDefinitionIndex = 53606;

class Class_1_43BD383C98B4C0C5_122 : public ::System::Object
{
public:
	::RPG::Client::Effect_Transform_RotateType Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x14
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x24
	::System::Single Field_1_4; // 0x28
	::System::Single Field_1_5; // 0x2C
	::System::Single Field_1_6; // 0x30
	::RPG::Client::Effect_Transform_OffsetType Field_1_7; // 0x34
	::System::Single Field_1_8; // 0x38
	::System::Single Field_1_9; // 0x3C
	::System::Boolean Field_1_10; // 0x40
	::System::Boolean Field_1_11; // 0x41
	::System::Single Field_1_12; // 0x44
	::System::Single Field_1_13; // 0x48
	::System::Single Field_1_14; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_122__CTOR_OFFSET))(this);
	}
};

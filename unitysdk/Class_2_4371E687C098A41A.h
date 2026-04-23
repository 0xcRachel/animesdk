#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_185.h"
#include "unitysdk/RPG/Client/Prop/LogisticsRobotState.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_2_4371E687C098A41A__CTOR_OFFSET UNITYSDK_OFFSET(0xFF47190)

inline static constexpr unsigned int Class_2_4371E687C098A41A_TypeDefinitionIndex = 72439;

class Class_2_4371E687C098A41A : public ::Class_1_43BD383C98B4C0C5_185
{
public:
	::RPG::Client::Prop::LogisticsRobotState Field_2_0; // 0x10
	::UnityEngine::Quaternion Field_2_3; // 0x14
	::System::Int32 Field_2_4; // 0x24
	::System::Boolean Field_2_1; // 0x28
	::UnityEngine::Vector3 Field_2_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4371E687C098A41A__CTOR_OFFSET))(this);
	}
};

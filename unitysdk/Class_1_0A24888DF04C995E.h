#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_0A24888DF04C995E__CTOR_OFFSET UNITYSDK_OFFSET(0x1904A0A0)

inline static constexpr unsigned int Class_1_0A24888DF04C995E_TypeDefinitionIndex = 39481;

class Class_1_0A24888DF04C995E : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_1; // 0x14
	::System::Boolean Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x21
	::System::Boolean Field_1_4; // 0x22
	::System::Boolean Field_1_5; // 0x23

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A24888DF04C995E__CTOR_OFFSET))(this);
	}
};

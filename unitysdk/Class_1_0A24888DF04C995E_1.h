#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_0A24888DF04C995E_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x189CCA70)
#define CLASS_1_0A24888DF04C995E_1__CTOR_OFFSET UNITYSDK_OFFSET(0x189CCAD0)

inline static constexpr unsigned int Class_1_0A24888DF04C995E_1_TypeDefinitionIndex = 39880;

class Class_1_0A24888DF04C995E_1 : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x1C
	::System::Single Field_1_2; // 0x20
	::System::Boolean Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A24888DF04C995E_1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0A24888DF04C995E_1_CLEAR_OFFSET))(this);
	}
};

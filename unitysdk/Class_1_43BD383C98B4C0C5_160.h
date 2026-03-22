#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_43BD383C98B4C0C5_160_POINTERPOSITION_OFFSET UNITYSDK_OFFSET(0x10F26A40)
#define CLASS_1_43BD383C98B4C0C5_160__CTOR_OFFSET UNITYSDK_OFFSET(0x10F26AD0)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_160_TypeDefinitionIndex = 58158;

class Class_1_43BD383C98B4C0C5_160 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_160__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 PointerPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_160_POINTERPOSITION_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_43BD383C98B4C0C5_163_POINTERPOSITION_OFFSET UNITYSDK_OFFSET(0xF4739A0)
#define CLASS_1_43BD383C98B4C0C5_163__CTOR_OFFSET UNITYSDK_OFFSET(0xF473A30)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_163_TypeDefinitionIndex = 67204;

class Class_1_43BD383C98B4C0C5_163 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_163__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 PointerPosition()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_163_POINTERPOSITION_OFFSET))(this);
	}
};

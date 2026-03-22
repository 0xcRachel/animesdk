#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CelestialBodyType.h"
#include "unitysdk/Class_1_C7C4EDD02A4426B2.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_42BAE0225E6F0533;
namespace System { class String; }

#define CLASS_2_8DB50CD24D6A20BE_METHOD_2_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x103B0D70)
#define CLASS_2_8DB50CD24D6A20BE__CTOR_OFFSET UNITYSDK_OFFSET(0x103B0CE0)

inline static constexpr unsigned int Class_2_8DB50CD24D6A20BE_TypeDefinitionIndex = 55518;

class Class_2_8DB50CD24D6A20BE : public ::Class_1_C7C4EDD02A4426B2
{
public:
	::Class_1_42BAE0225E6F0533* Field_2_1; // 0x28
	::CelestialBodyType Field_2_0; // 0x30
	::System::Single Field_2_4; // 0x34
	::System::Single Field_2_3; // 0x38
	::UnityEngine::Vector2 Field_2_2; // 0x3C

	::System::Void _ctor(::System::String* a1, ::CelestialBodyType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::CelestialBodyType))((::PBYTE)hIl2Cpp + CLASS_2_8DB50CD24D6A20BE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8DB50CD24D6A20BE_METHOD_2_41AA181104E03F2C_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/System/Object.h"

class Class_1_7D0B754E2D8CECAF;
class Class_1_97E659ED8D5D259C_5;
class Class_3_626F93E2306641CC;

#define CLASS_1_E4E2AE39E24CB0F9_METHOD_1_1C87EE7694B173E6_OFFSET UNITYSDK_OFFSET(0x83FE040)
#define CLASS_1_E4E2AE39E24CB0F9_METHOD_1_8560242B3E999847_OFFSET UNITYSDK_OFFSET(0x83FDD50)
#define CLASS_1_E4E2AE39E24CB0F9_METHOD_1_FAA5A8C9487986E1_OFFSET UNITYSDK_OFFSET(0x83FDE90)
#define CLASS_1_E4E2AE39E24CB0F9__CTOR_OFFSET UNITYSDK_OFFSET(0x83FDD40)

inline static constexpr unsigned int Class_1_E4E2AE39E24CB0F9_TypeDefinitionIndex = 60201;

class Class_1_E4E2AE39E24CB0F9 : public ::System::Object
{
public:
	::Class_1_97E659ED8D5D259C_5* Field_1_0; // 0x10

	::System::Void _ctor(::Class_1_97E659ED8D5D259C_5* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_97E659ED8D5D259C_5*))((::PBYTE)hIl2Cpp + CLASS_1_E4E2AE39E24CB0F9__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8560242B3E999847(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E4E2AE39E24CB0F9_METHOD_1_8560242B3E999847_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_FAA5A8C9487986E1(::RPG::GameCore::CakeRaceMoveState a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::CakeRaceMoveState))((::PBYTE)hIl2Cpp + CLASS_1_E4E2AE39E24CB0F9_METHOD_1_FAA5A8C9487986E1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1C87EE7694B173E6()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E4E2AE39E24CB0F9_METHOD_1_1C87EE7694B173E6_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_49DA0019D59F36B2__CTOR_OFFSET UNITYSDK_OFFSET(0x142B2CF0)

inline static constexpr unsigned int Class_1_49DA0019D59F36B2_TypeDefinitionIndex = 51708;

class Class_1_49DA0019D59F36B2 : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::RPG::Client::TextID Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x28
	::System::Boolean Field_1_3; // 0x29
	::System::Int32 Field_1_4; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_49DA0019D59F36B2__CTOR_OFFSET))(this);
	}
};

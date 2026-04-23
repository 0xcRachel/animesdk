#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGamePlayMode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_203;

#define CLASS_1_B470ECE8B4D9EC2E__CTOR_OFFSET UNITYSDK_OFFSET(0x17961AB0)

inline static constexpr unsigned int Class_1_B470ECE8B4D9EC2E_TypeDefinitionIndex = 38754;

class Class_1_B470ECE8B4D9EC2E : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_203* Field_1_8; // 0x10
	::System::Single Field_1_4; // 0x18
	::RPG::Client::LittleGame::ETimelineControlGamePlayMode Field_1_7; // 0x1C
	::System::Single Field_1_5; // 0x20
	::System::Boolean Field_1_2; // 0x24
	::System::Boolean Field_1_0; // 0x25
	::System::Boolean Field_1_1; // 0x26
	::System::Single Field_1_3; // 0x28
	::System::Single Field_1_9; // 0x2C
	::System::Single Field_1_6; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B470ECE8B4D9EC2E__CTOR_OFFSET))(this);
	}
};

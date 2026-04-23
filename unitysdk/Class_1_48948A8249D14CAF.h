#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TRFMoveState.h"
#include "unitysdk/RPG/Client/LittleGame/TRFPlayerAnim.h"
#include "unitysdk/System/Object.h"

class Class_1_803155C069ACF29F;

#define CLASS_1_48948A8249D14CAF__CTOR_OFFSET UNITYSDK_OFFSET(0x184B27F0)

inline static constexpr unsigned int Class_1_48948A8249D14CAF_TypeDefinitionIndex = 38705;

class Class_1_48948A8249D14CAF : public ::System::Object
{
public:
	::Class_1_803155C069ACF29F* Field_1_2; // 0x10
	::RPG::Client::LittleGame::TRFPlayerAnim Field_1_4; // 0x18
	::RPG::Client::LittleGame::TRFPlayerAnim Field_1_3; // 0x1C
	::System::UInt32 Field_1_10; // 0x20
	::RPG::Client::LittleGame::TRFMoveState Field_1_0; // 0x24
	::System::Boolean Field_1_5; // 0x28
	::System::Boolean Field_1_8; // 0x29
	::System::Boolean Field_1_6; // 0x2A
	::System::Boolean Field_1_7; // 0x2B
	::System::Boolean Field_1_9; // 0x2C
	::System::UInt32 Field_1_11; // 0x30
	::System::Single Field_1_1; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_48948A8249D14CAF__CTOR_OFFSET))(this);
	}
};

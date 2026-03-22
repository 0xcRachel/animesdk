#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/ChessBoardState.h"
#include "unitysdk/System/Object.h"

class Class_1_07A210D994F284D8_1;

#define CLASS_1_5E0FF7764DCED633__CTOR_OFFSET UNITYSDK_OFFSET(0x1628B6B0)

inline static constexpr unsigned int Class_1_5E0FF7764DCED633_TypeDefinitionIndex = 31790;

class Class_1_5E0FF7764DCED633 : public ::System::Object
{
public:
	::Il2CppArray<::Il2CppArray<::Class_1_07A210D994F284D8_1*>*>* Field_1_0; // 0x10
	::System::UInt32 Field_1_5; // 0x18
	::System::UInt32 Field_1_7; // 0x1C
	::System::UInt32 Field_1_6; // 0x20
	::System::UInt32 Field_1_3; // 0x24
	::RPG::Client::LittleGame::Match3::ChessBoardState Field_1_1; // 0x28
	::System::UInt32 Field_1_4; // 0x2C
	::System::Boolean Field_1_2; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E0FF7764DCED633__CTOR_OFFSET))(this);
	}
};

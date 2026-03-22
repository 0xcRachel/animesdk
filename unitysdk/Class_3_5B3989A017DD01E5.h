#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_1.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/GameMode/DiceCombatGameMode.h"

class Class_1_47EB23CB5C4B2615_3;
class Class_1_47EB23CB5C4B2615_4;

#define CLASS_3_5B3989A017DD01E5__CTOR_OFFSET UNITYSDK_OFFSET(0x15F7E3B0)

inline static constexpr unsigned int Class_3_5B3989A017DD01E5_TypeDefinitionIndex = 27653;

class Class_3_5B3989A017DD01E5 : public ::Class_2_A48F3719AA1CF200_1
{
public:
	::Class_1_47EB23CB5C4B2615_4* Field_3_3; // 0x18
	::Class_1_47EB23CB5C4B2615_3* Field_3_2; // 0x20
	::System::UInt32 Field_3_1; // 0x28
	::RPG::LittleGameShare::DiceCombatCore::GameMode::DiceCombatGameMode Field_3_0; // 0x2C
	::System::Boolean Field_3_4; // 0x2D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_5B3989A017DD01E5__CTOR_OFFSET))(this);
	}
};

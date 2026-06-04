#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearPropertyWithOverride.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/System/Object.h"

class Class_3_795ECCED069014FF;

#define CLASS_1_43BD383C98B4C0C5_117__CTOR_OFFSET UNITYSDK_OFFSET(0x163C9C50)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_117_TypeDefinitionIndex = 50298;

class Class_1_43BD383C98B4C0C5_117 : public ::System::Object
{
public:
	::Class_3_795ECCED069014FF* Field_1_0; // 0x10
	::Class_3_795ECCED069014FF* Field_1_1; // 0x18
	::RPG::GameCore::FixPoint Field_1_2; // 0x20
	::RPG::GameCore::FixPoint Field_1_3; // 0x28
	::RPG::GameCore::FixPoint Field_1_4; // 0x30
	::RPG::GameCore::FixPoint Field_1_5; // 0x38
	::RPG::GameCore::FixPoint Field_1_6; // 0x40
	::System::Boolean Field_1_7; // 0x48
	::RPG::GameCore::HealFormulaType Field_1_8; // 0x4C
	::RPG::GameCore::FixPoint Field_1_9; // 0x50
	::RPG::GameCore::FixPoint Field_1_10; // 0x58
	::RPG::GameCore::FixPoint Field_1_11; // 0x60
	::RPG::GameCore::FixPoint Field_1_12; // 0x68
	::RPG::GameCore::FixPoint Field_1_13; // 0x70
	::RPG::GameCore::AbilityLinearProperty Field_1_14; // 0x78
	::RPG::GameCore::FixPoint Field_1_15; // 0xC0
	::RPG::GameCore::FixPoint Field_1_16; // 0xC8
	::RPG::GameCore::FixPoint Field_1_17; // 0xD0
	::RPG::GameCore::FixPoint Field_1_18; // 0xD8
	::RPG::GameCore::FixPoint Field_1_19; // 0xE0
	::RPG::GameCore::AbilityLinearPropertyWithOverride Field_1_20; // 0xE8
	::RPG::GameCore::FixPoint Field_1_21; // 0x138
	::RPG::GameCore::FixPoint Field_1_22; // 0x140

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_117__CTOR_OFFSET))(this);
	}
};

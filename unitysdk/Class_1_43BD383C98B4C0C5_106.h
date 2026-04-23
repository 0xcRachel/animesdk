#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearPropertyWithOverride.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/System/Object.h"

class Class_3_024B137FE9F1BACE;

#define CLASS_1_43BD383C98B4C0C5_106__CTOR_OFFSET UNITYSDK_OFFSET(0xCD72250)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_106_TypeDefinitionIndex = 49631;

class Class_1_43BD383C98B4C0C5_106 : public ::System::Object
{
public:
	::Class_3_024B137FE9F1BACE* Field_1_21; // 0x10
	::Class_3_024B137FE9F1BACE* Field_1_22; // 0x18
	::RPG::GameCore::FixPoint Field_1_3; // 0x20
	::RPG::GameCore::FixPoint Field_1_8; // 0x28
	::RPG::GameCore::AbilityLinearPropertyWithOverride Field_1_5; // 0x30
	::RPG::GameCore::FixPoint Field_1_2; // 0x80
	::RPG::GameCore::FixPoint Field_1_17; // 0x88
	::RPG::GameCore::FixPoint Field_1_12; // 0x90
	::RPG::GameCore::FixPoint Field_1_11; // 0x98
	::RPG::GameCore::FixPoint Field_1_14; // 0xA0
	::RPG::GameCore::AbilityLinearProperty Field_1_0; // 0xA8
	::RPG::GameCore::FixPoint Field_1_15; // 0xF0
	::RPG::GameCore::FixPoint Field_1_13; // 0xF8
	::RPG::GameCore::FixPoint Field_1_6; // 0x100
	::RPG::GameCore::FixPoint Field_1_1; // 0x108
	::RPG::GameCore::FixPoint Field_1_10; // 0x110
	::RPG::GameCore::FixPoint Field_1_18; // 0x118
	::RPG::GameCore::FixPoint Field_1_19; // 0x120
	::RPG::GameCore::FixPoint Field_1_4; // 0x128
	::RPG::GameCore::FixPoint Field_1_7; // 0x130
	::RPG::GameCore::FixPoint Field_1_9; // 0x138
	::System::Boolean Field_1_20; // 0x140
	::RPG::GameCore::HealFormulaType Field_1_16; // 0x144

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_106__CTOR_OFFSET))(this);
	}
};

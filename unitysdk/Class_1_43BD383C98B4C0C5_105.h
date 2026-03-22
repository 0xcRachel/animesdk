#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityLinearPropertyWithOverride.h"
#include "unitysdk/RPG/GameCore/BigFixPoint.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/HealFormulaType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define CLASS_1_43BD383C98B4C0C5_105__CTOR_OFFSET UNITYSDK_OFFSET(0x8A88B60)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_105_TypeDefinitionIndex = 42458;

class Class_1_43BD383C98B4C0C5_105 : public ::System::Object
{
public:
	::RPG::GameCore::BigFixPoint Field_1_14; // 0x10
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_27; // 0x20
	::RPG::GameCore::TurnBasedAbilityComponent* Field_1_28; // 0x28
	::RPG::GameCore::BigFixPoint Field_1_7; // 0x30
	::RPG::GameCore::BigFixPoint Field_1_12; // 0x40
	::RPG::GameCore::FixPoint Field_1_10; // 0x50
	::RPG::GameCore::FixPoint Field_1_2; // 0x58
	::RPG::GameCore::FixPoint Field_1_15; // 0x60
	::RPG::GameCore::FixPoint Field_1_6; // 0x68
	::RPG::GameCore::FixPoint Field_1_23; // 0x70
	::RPG::GameCore::FixPoint Field_1_4; // 0x78
	::RPG::GameCore::FixPoint Field_1_3; // 0x80
	::RPG::GameCore::FixPoint Field_1_9; // 0x88
	::RPG::GameCore::FixPoint Field_1_22; // 0x90
	::RPG::GameCore::AbilityLinearPropertyWithOverride Field_1_5; // 0x98
	::RPG::GameCore::FixPoint Field_1_18; // 0xE8
	::RPG::GameCore::FixPoint Field_1_20; // 0xF0
	::RPG::GameCore::FixPoint Field_1_1; // 0xF8
	::RPG::GameCore::FixPoint Field_1_8; // 0x100
	::RPG::GameCore::FixPoint Field_1_16; // 0x108
	::RPG::GameCore::FixPoint Field_1_11; // 0x110
	::RPG::GameCore::FixPoint Field_1_24; // 0x118
	::RPG::GameCore::FixPoint Field_1_17; // 0x120
	::RPG::GameCore::AbilityLinearProperty Field_1_0; // 0x128
	::RPG::GameCore::FixPoint Field_1_13; // 0x170
	::System::Boolean Field_1_25; // 0x178
	::System::Boolean Field_1_26; // 0x179
	::RPG::GameCore::HealFormulaType Field_1_19; // 0x17C
	::RPG::GameCore::FixPoint Field_1_21; // 0x180

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_105__CTOR_OFFSET))(this);
	}
};

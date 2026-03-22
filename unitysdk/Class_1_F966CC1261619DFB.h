#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackFormulaType.h"
#include "unitysdk/RPG/GameCore/AttackType.h"
#include "unitysdk/RPG/GameCore/FinalDamageFormulaType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class DamageBehaviorTemplate; }
namespace RPG::GameCore { class JsonEnum; }
namespace System { class String; }

#define CLASS_1_F966CC1261619DFB__CTOR_OFFSET UNITYSDK_OFFSET(0xFF33A00)

inline static constexpr unsigned int Class_1_F966CC1261619DFB_TypeDefinitionIndex = 42451;

class Class_1_F966CC1261619DFB : public ::System::Object
{
public:
	::RPG::GameCore::DamageBehaviorTemplate* Field_1_12; // 0x10
	::Il2CppArray<::RPG::GameCore::JsonEnum*>* Field_1_5; // 0x18
	::System::String* Field_1_6; // 0x20
	::RPG::GameCore::FixPoint Field_1_20; // 0x28
	::RPG::GameCore::AttackType Field_1_0; // 0x30
	::RPG::GameCore::FinalDamageFormulaType Field_1_3; // 0x34
	::RPG::GameCore::FixPoint Field_1_13; // 0x38
	::RPG::GameCore::FixPoint Field_1_21; // 0x40
	::RPG::GameCore::FixPoint Field_1_17; // 0x48
	::System::Boolean Field_1_11; // 0x50
	::System::Boolean Field_1_9; // 0x51
	::System::Boolean Field_1_8; // 0x52
	::RPG::GameCore::FixPoint Field_1_14; // 0x58
	::RPG::GameCore::FixPoint Field_1_19; // 0x60
	::RPG::GameCore::AttackFormulaType Field_1_1; // 0x68
	::RPG::GameCore::AttackDamageType Field_1_4; // 0x6C
	::RPG::GameCore::FixPoint Field_1_18; // 0x70
	::RPG::GameCore::FixPoint Field_1_16; // 0x78
	::System::Boolean Field_1_10; // 0x80
	::System::Boolean Field_1_7; // 0x81
	::RPG::GameCore::AttackFormulaType Field_1_2; // 0x84
	::RPG::GameCore::FixPoint Field_1_15; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F966CC1261619DFB__CTOR_OFFSET))(this);
	}
};

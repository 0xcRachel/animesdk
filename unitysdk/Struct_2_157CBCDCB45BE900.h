#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityLinearProperty.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/ActionDelayChangeTypeMask.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class ActionDelayPreshowConfig; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define STRUCT_2_157CBCDCB45BE900_METHOD_2_3F8BEB70670C1527_OFFSET UNITYSDK_OFFSET(0x37B5D60)
#define STRUCT_2_157CBCDCB45BE900_METHOD_2_54A68A0D0DA6728B_OFFSET UNITYSDK_OFFSET(0x37B5D50)
#define STRUCT_2_157CBCDCB45BE900_METHOD_2_583925209C036542_OFFSET UNITYSDK_OFFSET(0x37B5E00)
#define STRUCT_2_157CBCDCB45BE900_METHOD_2_81666D6D281508EC_OFFSET UNITYSDK_OFFSET(0x37B5C60)
#define STRUCT_2_157CBCDCB45BE900_METHOD_2_8EDB7FE5AA37C50F_1_OFFSET UNITYSDK_OFFSET(0xB24A90)
#define STRUCT_2_157CBCDCB45BE900_METHOD_2_8EDB7FE5AA37C50F_2_OFFSET UNITYSDK_OFFSET(0x37604D0)
#define STRUCT_2_157CBCDCB45BE900_METHOD_2_8EDB7FE5AA37C50F_OFFSET UNITYSDK_OFFSET(0x2E784E0)
#define STRUCT_2_157CBCDCB45BE900_METHOD_2_C637B89148B0D97C_1_OFFSET UNITYSDK_OFFSET(0x37B5DF0)
#define STRUCT_2_157CBCDCB45BE900_METHOD_2_C637B89148B0D97C_OFFSET UNITYSDK_OFFSET(0x37B5DE0)
#define STRUCT_2_157CBCDCB45BE900_METHOD_2_EA672F77F1086A27_OFFSET UNITYSDK_OFFSET(0x37B5D70)
#define STRUCT_2_157CBCDCB45BE900_METHOD_2_F5D19D54B71B8622_OFFSET UNITYSDK_OFFSET(0x37B5E10)

inline static constexpr unsigned int Struct_2_157CBCDCB45BE900_TypeDefinitionIndex = 66577;

struct alignas(8) Struct_2_157CBCDCB45BE900
{
	::RPG::GameCore::FixPoint Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x1C
	::System::Boolean Field_2_3; // 0x20
	::RPG::GameCore::TeamType Field_2_4; // 0x24
	::System::Boolean Field_2_5; // 0x28
	::RPG::GameCore::FixPoint Field_2_6; // 0x30
	::RPG::GameCore::FixPoint Field_2_7; // 0x38
	::RPG::GameCore::FixPoint Field_2_8; // 0x40
	::RPG::GameCore::FixPoint Field_2_9; // 0x48
	::RPG::GameCore::FixPoint Field_2_10; // 0x50
	::RPG::GameCore::AbilityLinearProperty Field_2_11; // 0x58

	::RPG::GameCore::FixPoint Method_2_81666D6D281508EC()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_157CBCDCB45BE900_METHOD_2_81666D6D281508EC_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_8EDB7FE5AA37C50F()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_157CBCDCB45BE900_METHOD_2_8EDB7FE5AA37C50F_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_8EDB7FE5AA37C50F_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_157CBCDCB45BE900_METHOD_2_8EDB7FE5AA37C50F_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_8EDB7FE5AA37C50F_2()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_157CBCDCB45BE900_METHOD_2_8EDB7FE5AA37C50F_2_OFFSET))(this);
	}

	::System::Void Method_2_54A68A0D0DA6728B(::RPG::GameCore::TurnBasedAbilityComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedAbilityComponent*))((::PBYTE)hIl2Cpp + STRUCT_2_157CBCDCB45BE900_METHOD_2_54A68A0D0DA6728B_OFFSET))(this, a1);
	}

	::System::Void Method_2_3F8BEB70670C1527(::RPG::GameCore::CharacterDataComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterDataComponent*))((::PBYTE)hIl2Cpp + STRUCT_2_157CBCDCB45BE900_METHOD_2_3F8BEB70670C1527_OFFSET))(this, a1);
	}

	::System::Void Method_2_EA672F77F1086A27(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_157CBCDCB45BE900_METHOD_2_EA672F77F1086A27_OFFSET))(this, a1);
	}

	::System::Void Method_2_C637B89148B0D97C(::RPG::GameCore::AbilityProperty a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_157CBCDCB45BE900_METHOD_2_C637B89148B0D97C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C637B89148B0D97C_1(::RPG::GameCore::AbilityProperty a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityProperty, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + STRUCT_2_157CBCDCB45BE900_METHOD_2_C637B89148B0D97C_1_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::ActionDelayChangeTypeMask Method_2_583925209C036542(::RPG::GameCore::ActionDelayPreshowConfig* a1, ::System::Int32 a2)
	{
		return ((::RPG::GameCore::ActionDelayChangeTypeMask(*)(::PVOID, ::RPG::GameCore::ActionDelayPreshowConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_157CBCDCB45BE900_METHOD_2_583925209C036542_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F5D19D54B71B8622()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_157CBCDCB45BE900_METHOD_2_F5D19D54B71B8622_OFFSET))(this);
	}
};

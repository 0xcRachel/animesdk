#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_053DD8E4EC1165EB;
namespace RPG::GameCore { class DiceCombatModifierConfig; }
namespace RPG::GameCore { class DiceCombatTaskConfig_AddModifier; }

#define CLASS_2_E3652A16B6E1AF0E_METHOD_2_B81C0500E01D59B3_OFFSET UNITYSDK_OFFSET(0x15F09D30)
#define CLASS_2_E3652A16B6E1AF0E_METHOD_2_DA37DFE3A5BDA9F4_OFFSET UNITYSDK_OFFSET(0x15F09A80)
#define CLASS_2_E3652A16B6E1AF0E__CTOR_OFFSET UNITYSDK_OFFSET(0x15F09A70)

inline static constexpr unsigned int Class_2_E3652A16B6E1AF0E_TypeDefinitionIndex = 27670;

class Class_2_E3652A16B6E1AF0E : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_053DD8E4EC1165EB* Field_2_1; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_AddModifier* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_AddModifier* a1, ::Class_2_053DD8E4EC1165EB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_AddModifier*, ::Class_2_053DD8E4EC1165EB*))((::PBYTE)hIl2Cpp + CLASS_2_E3652A16B6E1AF0E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DA37DFE3A5BDA9F4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3652A16B6E1AF0E_METHOD_2_DA37DFE3A5BDA9F4_OFFSET))(this);
	}

	::RPG::GameCore::DiceCombatModifierConfig* Method_2_B81C0500E01D59B3(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::DiceCombatModifierConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_E3652A16B6E1AF0E_METHOD_2_B81C0500E01D59B3_OFFSET))(this, a1);
	}
};

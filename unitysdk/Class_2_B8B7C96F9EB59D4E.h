#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_053DD8E4EC1165EB;
namespace RPG::GameCore { class DiceCombatTaskConfig_StartCombat; }

#define CLASS_2_B8B7C96F9EB59D4E_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x160726E0)
#define CLASS_2_B8B7C96F9EB59D4E__CTOR_OFFSET UNITYSDK_OFFSET(0x160726D0)

inline static constexpr unsigned int Class_2_B8B7C96F9EB59D4E_TypeDefinitionIndex = 27681;

class Class_2_B8B7C96F9EB59D4E : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_StartCombat* Field_2_0; // 0x18
	::Class_2_053DD8E4EC1165EB* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_StartCombat* a1, ::Class_2_053DD8E4EC1165EB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_StartCombat*, ::Class_2_053DD8E4EC1165EB*))((::PBYTE)hIl2Cpp + CLASS_2_B8B7C96F9EB59D4E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8B7C96F9EB59D4E_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}
};

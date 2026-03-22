#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_053DD8E4EC1165EB;
namespace RPG::GameCore { class DiceCombatTaskConfig_StrikeBackDamage; }

#define CLASS_2_1E119EA00709909B_METHOD_2_A1C7122184516C18_OFFSET UNITYSDK_OFFSET(0x15FCAFC0)
#define CLASS_2_1E119EA00709909B__CTOR_OFFSET UNITYSDK_OFFSET(0x15FCAFB0)

inline static constexpr unsigned int Class_2_1E119EA00709909B_TypeDefinitionIndex = 27685;

class Class_2_1E119EA00709909B : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_053DD8E4EC1165EB* Field_2_1; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_StrikeBackDamage* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_StrikeBackDamage* a1, ::Class_2_053DD8E4EC1165EB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_StrikeBackDamage*, ::Class_2_053DD8E4EC1165EB*))((::PBYTE)hIl2Cpp + CLASS_2_1E119EA00709909B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A1C7122184516C18()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E119EA00709909B_METHOD_2_A1C7122184516C18_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_053DD8E4EC1165EB;
namespace RPG::GameCore { class DiceCombatTaskConfig_RemoveModifier; }

#define CLASS_2_E89D615EF06C478F_METHOD_2_10054BB010E03EDD_OFFSET UNITYSDK_OFFSET(0x15F01EF0)
#define CLASS_2_E89D615EF06C478F__CTOR_OFFSET UNITYSDK_OFFSET(0x15F01EE0)

inline static constexpr unsigned int Class_2_E89D615EF06C478F_TypeDefinitionIndex = 27671;

class Class_2_E89D615EF06C478F : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_053DD8E4EC1165EB* Field_2_1; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_RemoveModifier* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_RemoveModifier* a1, ::Class_2_053DD8E4EC1165EB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_RemoveModifier*, ::Class_2_053DD8E4EC1165EB*))((::PBYTE)hIl2Cpp + CLASS_2_E89D615EF06C478F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_10054BB010E03EDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E89D615EF06C478F_METHOD_2_10054BB010E03EDD_OFFSET))(this);
	}
};

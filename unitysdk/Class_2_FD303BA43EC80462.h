#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_053DD8E4EC1165EB;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerSkillCutin; }

#define CLASS_2_FD303BA43EC80462_METHOD_2_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x15EFCC80)
#define CLASS_2_FD303BA43EC80462__CTOR_OFFSET UNITYSDK_OFFSET(0x15EFCC70)

inline static constexpr unsigned int Class_2_FD303BA43EC80462_TypeDefinitionIndex = 27673;

class Class_2_FD303BA43EC80462 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_053DD8E4EC1165EB* Field_2_1; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillCutin* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillCutin* a1, ::Class_2_053DD8E4EC1165EB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_TriggerSkillCutin*, ::Class_2_053DD8E4EC1165EB*))((::PBYTE)hIl2Cpp + CLASS_2_FD303BA43EC80462__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FD303BA43EC80462_METHOD_2_33ACA6CB2ABC73F7_OFFSET))(this);
	}
};

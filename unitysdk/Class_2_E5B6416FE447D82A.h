#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_053DD8E4EC1165EB;
namespace RPG::GameCore { class DiceCombatTaskConfig_BossChangePhase; }

#define CLASS_2_E5B6416FE447D82A_METHOD_2_35942D7A8A374AB0_OFFSET UNITYSDK_OFFSET(0x15F24F20)
#define CLASS_2_E5B6416FE447D82A__CTOR_OFFSET UNITYSDK_OFFSET(0x15F24F10)

inline static constexpr unsigned int Class_2_E5B6416FE447D82A_TypeDefinitionIndex = 27697;

class Class_2_E5B6416FE447D82A : public ::Class_1_B55037134F9E6688
{
public:
	::Class_2_053DD8E4EC1165EB* Field_2_1; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_BossChangePhase* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_BossChangePhase* a1, ::Class_2_053DD8E4EC1165EB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_BossChangePhase*, ::Class_2_053DD8E4EC1165EB*))((::PBYTE)hIl2Cpp + CLASS_2_E5B6416FE447D82A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_35942D7A8A374AB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5B6416FE447D82A_METHOD_2_35942D7A8A374AB0_OFFSET))(this);
	}
};

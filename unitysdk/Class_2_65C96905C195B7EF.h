#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_053DD8E4EC1165EB;
namespace RPG::GameCore { class DiceCombatTaskConfig_AttackEffect_Cutin; }

#define CLASS_2_65C96905C195B7EF_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x15F001B0)
#define CLASS_2_65C96905C195B7EF__CTOR_OFFSET UNITYSDK_OFFSET(0x15F001A0)

inline static constexpr unsigned int Class_2_65C96905C195B7EF_TypeDefinitionIndex = 27676;

class Class_2_65C96905C195B7EF : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_Cutin* Field_2_0; // 0x18
	::Class_2_053DD8E4EC1165EB* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_Cutin* a1, ::Class_2_053DD8E4EC1165EB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_Cutin*, ::Class_2_053DD8E4EC1165EB*))((::PBYTE)hIl2Cpp + CLASS_2_65C96905C195B7EF__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_65C96905C195B7EF_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}
};

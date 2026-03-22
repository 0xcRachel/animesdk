#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_053DD8E4EC1165EB;
namespace RPG::GameCore { class DiceCombatTaskConfig_AttackEffect_Cutout; }

#define CLASS_2_E8697E5410D0E004_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x15EF6F80)
#define CLASS_2_E8697E5410D0E004__CTOR_OFFSET UNITYSDK_OFFSET(0x15EF6F70)

inline static constexpr unsigned int Class_2_E8697E5410D0E004_TypeDefinitionIndex = 27680;

class Class_2_E8697E5410D0E004 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_Cutout* Field_2_0; // 0x18
	::Class_2_053DD8E4EC1165EB* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_Cutout* a1, ::Class_2_053DD8E4EC1165EB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_Cutout*, ::Class_2_053DD8E4EC1165EB*))((::PBYTE)hIl2Cpp + CLASS_2_E8697E5410D0E004__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E8697E5410D0E004_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}
};

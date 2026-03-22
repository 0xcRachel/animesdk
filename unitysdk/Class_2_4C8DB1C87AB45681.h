#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_053DD8E4EC1165EB;
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerIceEffect; }

#define CLASS_2_4C8DB1C87AB45681_METHOD_2_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x15EF8DE0)
#define CLASS_2_4C8DB1C87AB45681__CTOR_OFFSET UNITYSDK_OFFSET(0x15EF8DD0)

inline static constexpr unsigned int Class_2_4C8DB1C87AB45681_TypeDefinitionIndex = 27690;

class Class_2_4C8DB1C87AB45681 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_TriggerIceEffect* Field_2_0; // 0x18
	::Class_2_053DD8E4EC1165EB* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_TriggerIceEffect* a1, ::Class_2_053DD8E4EC1165EB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_TriggerIceEffect*, ::Class_2_053DD8E4EC1165EB*))((::PBYTE)hIl2Cpp + CLASS_2_4C8DB1C87AB45681__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A27DC2C5A103933A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C8DB1C87AB45681_METHOD_2_A27DC2C5A103933A_OFFSET))(this);
	}
};

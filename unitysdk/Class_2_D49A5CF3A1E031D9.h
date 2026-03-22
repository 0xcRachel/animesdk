#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_30467842FAA5266B;
namespace RPG::GameCore { class DiceCombatTaskConfig_WriteCustomValue_ModifierStackCount; }

#define CLASS_2_D49A5CF3A1E031D9_METHOD_2_4389275F4099DE36_OFFSET UNITYSDK_OFFSET(0x15F7D520)
#define CLASS_2_D49A5CF3A1E031D9__CTOR_OFFSET UNITYSDK_OFFSET(0x15F7D510)

inline static constexpr unsigned int Class_2_D49A5CF3A1E031D9_TypeDefinitionIndex = 27725;

class Class_2_D49A5CF3A1E031D9 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_1_30467842FAA5266B* Field_2_1; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierStackCount* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierStackCount* a1, ::Class_1_30467842FAA5266B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierStackCount*, ::Class_1_30467842FAA5266B*))((::PBYTE)hIl2Cpp + CLASS_2_D49A5CF3A1E031D9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4389275F4099DE36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D49A5CF3A1E031D9_METHOD_2_4389275F4099DE36_OFFSET))(this);
	}
};

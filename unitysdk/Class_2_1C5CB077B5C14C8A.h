#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_30467842FAA5266B;
namespace RPG::GameCore { class DiceCombatTaskConfig_ClearCustomValue; }

#define CLASS_2_1C5CB077B5C14C8A_METHOD_2_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x15F17EA0)
#define CLASS_2_1C5CB077B5C14C8A__CTOR_OFFSET UNITYSDK_OFFSET(0x15F17E90)

inline static constexpr unsigned int Class_2_1C5CB077B5C14C8A_TypeDefinitionIndex = 27724;

class Class_2_1C5CB077B5C14C8A : public ::Class_1_B55037134F9E6688
{
public:
	::Class_1_30467842FAA5266B* Field_2_1; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_ClearCustomValue* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_ClearCustomValue* a1, ::Class_1_30467842FAA5266B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_ClearCustomValue*, ::Class_1_30467842FAA5266B*))((::PBYTE)hIl2Cpp + CLASS_2_1C5CB077B5C14C8A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C5CB077B5C14C8A_METHOD_2_2C95AFAD0256302F_OFFSET))(this);
	}
};

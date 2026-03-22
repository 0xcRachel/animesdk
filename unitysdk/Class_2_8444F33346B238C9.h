#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_30467842FAA5266B;
namespace RPG::GameCore { class DiceCombatTaskConfig_ModifyPreviewValue; }

#define CLASS_2_8444F33346B238C9_METHOD_2_078D85152011B919_OFFSET UNITYSDK_OFFSET(0x16044FD0)
#define CLASS_2_8444F33346B238C9__CTOR_OFFSET UNITYSDK_OFFSET(0x16044FC0)

inline static constexpr unsigned int Class_2_8444F33346B238C9_TypeDefinitionIndex = 27664;

class Class_2_8444F33346B238C9 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_ModifyPreviewValue* Field_2_1; // 0x18
	::Class_1_30467842FAA5266B* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_ModifyPreviewValue* a1, ::Class_1_30467842FAA5266B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_ModifyPreviewValue*, ::Class_1_30467842FAA5266B*))((::PBYTE)hIl2Cpp + CLASS_2_8444F33346B238C9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_078D85152011B919()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8444F33346B238C9_METHOD_2_078D85152011B919_OFFSET))(this);
	}
};

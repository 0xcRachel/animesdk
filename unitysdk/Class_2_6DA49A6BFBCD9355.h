#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_30467842FAA5266B;
namespace RPG::GameCore { class DiceCombatTaskConfig_WriteCustomValue_ModifierData; }

#define CLASS_2_6DA49A6BFBCD9355_METHOD_2_24B05D2E15A5C3C8_OFFSET UNITYSDK_OFFSET(0x15FC1820)
#define CLASS_2_6DA49A6BFBCD9355__CTOR_OFFSET UNITYSDK_OFFSET(0x15FC1810)

inline static constexpr unsigned int Class_2_6DA49A6BFBCD9355_TypeDefinitionIndex = 27726;

class Class_2_6DA49A6BFBCD9355 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_1_30467842FAA5266B* Field_2_1; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierData* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierData* a1, ::Class_1_30467842FAA5266B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue_ModifierData*, ::Class_1_30467842FAA5266B*))((::PBYTE)hIl2Cpp + CLASS_2_6DA49A6BFBCD9355__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_24B05D2E15A5C3C8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DA49A6BFBCD9355_METHOD_2_24B05D2E15A5C3C8_OFFSET))(this);
	}
};

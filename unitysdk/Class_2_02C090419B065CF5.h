#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_30467842FAA5266B;
namespace RPG::GameCore { class DiceCombatTaskConfig_WriteCustomValue; }

#define CLASS_2_02C090419B065CF5_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x16015AB0)
#define CLASS_2_02C090419B065CF5__CTOR_OFFSET UNITYSDK_OFFSET(0x1600EBF0)

inline static constexpr unsigned int Class_2_02C090419B065CF5_TypeDefinitionIndex = 27728;

class Class_2_02C090419B065CF5 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_1_30467842FAA5266B* Field_2_1; // 0x18
	::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue* a1, ::Class_1_30467842FAA5266B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_WriteCustomValue*, ::Class_1_30467842FAA5266B*))((::PBYTE)hIl2Cpp + CLASS_2_02C090419B065CF5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_02C090419B065CF5_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
	}
};

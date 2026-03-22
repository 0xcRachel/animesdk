#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_2AE89B9E4BF18AD3;
class Class_1_30467842FAA5266B;
class Class_2_6C1B95FB4BCBEF14;
namespace RPG::GameCore { class DiceCombatTaskConfig_MarkSkillDice; }

#define CLASS_2_D9539420B5ABD971_METHOD_2_749948B663FCCCEF_OFFSET UNITYSDK_OFFSET(0x15FC32E0)
#define CLASS_2_D9539420B5ABD971__CTOR_OFFSET UNITYSDK_OFFSET(0x15FC3260)

inline static constexpr unsigned int Class_2_D9539420B5ABD971_TypeDefinitionIndex = 27666;

class Class_2_D9539420B5ABD971 : public ::Class_1_B55037134F9E6688
{
public:
	::Class_1_2AE89B9E4BF18AD3* Field_2_2; // 0x18
	::Class_2_6C1B95FB4BCBEF14* Field_2_1; // 0x20
	::RPG::GameCore::DiceCombatTaskConfig_MarkSkillDice* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_MarkSkillDice* a1, ::Class_1_30467842FAA5266B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_MarkSkillDice*, ::Class_1_30467842FAA5266B*))((::PBYTE)hIl2Cpp + CLASS_2_D9539420B5ABD971__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_749948B663FCCCEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D9539420B5ABD971_METHOD_2_749948B663FCCCEF_OFFSET))(this);
	}
};

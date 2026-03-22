#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_2_053DD8E4EC1165EB;
namespace RPG::GameCore { class DiceCombatTaskConfig_Heal; }

#define CLASS_2_9C0E32B8CA88FB64_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x160715B0)
#define CLASS_2_9C0E32B8CA88FB64__CTOR_OFFSET UNITYSDK_OFFSET(0x160715A0)

inline static constexpr unsigned int Class_2_9C0E32B8CA88FB64_TypeDefinitionIndex = 27684;

class Class_2_9C0E32B8CA88FB64 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatTaskConfig_Heal* Field_2_0; // 0x18
	::Class_2_053DD8E4EC1165EB* Field_2_1; // 0x20

	::System::Void _ctor(::RPG::GameCore::DiceCombatTaskConfig_Heal* a1, ::Class_2_053DD8E4EC1165EB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatTaskConfig_Heal*, ::Class_2_053DD8E4EC1165EB*))((::PBYTE)hIl2Cpp + CLASS_2_9C0E32B8CA88FB64__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9C0E32B8CA88FB64_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}
};

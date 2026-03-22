#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B55037134F9E6688.h"

class Class_1_30467842FAA5266B;
class Class_2_BD1869D605C562FE;
namespace RPG::GameCore { class DiceCombatPredicateConfig; }

#define CLASS_2_98A798C0C96648F9_METHOD_2_7240807274B59CCB_OFFSET UNITYSDK_OFFSET(0x15FC63F0)
#define CLASS_2_98A798C0C96648F9_METHOD_2_963F6BBFC81DC56E_OFFSET UNITYSDK_OFFSET(0x15FC65A0)
#define CLASS_2_98A798C0C96648F9_METHOD_2_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0x15FC6250)
#define CLASS_2_98A798C0C96648F9_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15FC6490)
#define CLASS_2_98A798C0C96648F9_METHOD_2_CB7604B59F367726_OFFSET UNITYSDK_OFFSET(0x15FC64E0)
#define CLASS_2_98A798C0C96648F9__CTOR_OFFSET UNITYSDK_OFFSET(0x15F8EDC0)

inline static constexpr unsigned int Class_2_98A798C0C96648F9_TypeDefinitionIndex = 27702;

class Class_2_98A798C0C96648F9 : public ::Class_1_B55037134F9E6688
{
public:
	::RPG::GameCore::DiceCombatPredicateConfig* Field_2_0; // 0x18
	::Class_2_BD1869D605C562FE* Field_2_1; // 0x20
	::Class_1_30467842FAA5266B* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig* a1, ::Class_1_30467842FAA5266B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig*, ::Class_1_30467842FAA5266B*))((::PBYTE)hIl2Cpp + CLASS_2_98A798C0C96648F9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A798C0C96648F9_METHOD_2_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A798C0C96648F9_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_7240807274B59CCB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_98A798C0C96648F9_METHOD_2_7240807274B59CCB_OFFSET))(this, a1);
	}

	::System::Void Method_2_CB7604B59F367726()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_98A798C0C96648F9_METHOD_2_CB7604B59F367726_OFFSET))(this);
	}

	::System::Void Method_2_963F6BBFC81DC56E(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_98A798C0C96648F9_METHOD_2_963F6BBFC81DC56E_OFFSET))(this, P0);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/DiceCombatAbilityState.h"
#include "unitysdk/System/Object.h"

class Class_2_053DD8E4EC1165EB;
class Class_2_BD1869D605C562FE;
namespace RPG::GameCore { class DiceCombatAbilityConfig; }

#define CLASS_1_C6D9D1EB9605788A_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x15F5C2A0)
#define CLASS_1_C6D9D1EB9605788A_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x15F5C600)
#define CLASS_1_C6D9D1EB9605788A_METHOD_1_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x15F5C520)
#define CLASS_1_C6D9D1EB9605788A_METHOD_1_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x15F5C380)
#define CLASS_1_C6D9D1EB9605788A_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15F5C5B0)
#define CLASS_1_C6D9D1EB9605788A__CTOR_OFFSET UNITYSDK_OFFSET(0x15F5C200)

inline static constexpr unsigned int Class_1_C6D9D1EB9605788A_TypeDefinitionIndex = 27809;

class Class_1_C6D9D1EB9605788A : public ::System::Object
{
public:
	::Class_2_053DD8E4EC1165EB* Field_1_1; // 0x10
	::Class_2_BD1869D605C562FE* Field_1_3; // 0x18
	::Class_2_BD1869D605C562FE* Field_1_4; // 0x20
	::RPG::GameCore::DiceCombatAbilityConfig* Field_1_0; // 0x28
	::RPG::LittleGameShare::DiceCombatCore::DiceCombatAbilityState Field_1_2; // 0x30

	::System::Void _ctor(::Class_2_053DD8E4EC1165EB* a1, ::RPG::GameCore::DiceCombatAbilityConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_053DD8E4EC1165EB*, ::RPG::GameCore::DiceCombatAbilityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_C6D9D1EB9605788A__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6D9D1EB9605788A_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6D9D1EB9605788A_METHOD_1_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_1_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C6D9D1EB9605788A_METHOD_1_39590AB2089F9F4D_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6D9D1EB9605788A_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C6D9D1EB9605788A_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};

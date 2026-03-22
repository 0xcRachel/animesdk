#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatInsertAbilityPriority.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/InsertAbilityState.h"
#include "unitysdk/System/Object.h"

class Class_2_053DD8E4EC1165EB;
class Class_2_BD1869D605C562FE;
namespace RPG::GameCore { class DiceCombatInsertAbilityConfig; }
namespace System { class String; }

#define CLASS_1_824885B12D8BA1AD_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x15FC2930)
#define CLASS_1_824885B12D8BA1AD_METHOD_1_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0x15FC2A70)
#define CLASS_1_824885B12D8BA1AD_METHOD_1_A78ED43ED0590FB6_OFFSET UNITYSDK_OFFSET(0x15FC2950)
#define CLASS_1_824885B12D8BA1AD_METHOD_1_B799DB9989A18F1D_OFFSET UNITYSDK_OFFSET(0x15FC29E0)
#define CLASS_1_824885B12D8BA1AD_METHOD_1_D3CE97DCC13D88F7_OFFSET UNITYSDK_OFFSET(0x15FC2970)
#define CLASS_1_824885B12D8BA1AD__CTOR_OFFSET UNITYSDK_OFFSET(0x15FC2980)

inline static constexpr unsigned int Class_1_824885B12D8BA1AD_TypeDefinitionIndex = 27781;

class Class_1_824885B12D8BA1AD : public ::System::Object
{
public:
	::Class_2_053DD8E4EC1165EB* Field_1_1; // 0x10
	::Class_2_BD1869D605C562FE* Field_1_3; // 0x18
	::RPG::GameCore::DiceCombatInsertAbilityConfig* Field_1_0; // 0x20
	::RPG::LittleGameShare::DiceCombatCore::InsertAbilityState Field_1_2; // 0x28

	::System::Void _ctor(::Class_2_053DD8E4EC1165EB* a1, ::RPG::GameCore::DiceCombatInsertAbilityConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_053DD8E4EC1165EB*, ::RPG::GameCore::DiceCombatInsertAbilityConfig*))((::PBYTE)hIl2Cpp + CLASS_1_824885B12D8BA1AD__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* Method_1_128774387667156B()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_824885B12D8BA1AD_METHOD_1_128774387667156B_OFFSET))(this);
	}

	::RPG::GameCore::DiceCombatInsertAbilityPriority Method_1_A78ED43ED0590FB6()
	{
		return ((::RPG::GameCore::DiceCombatInsertAbilityPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_824885B12D8BA1AD_METHOD_1_A78ED43ED0590FB6_OFFSET))(this);
	}

	::RPG::LittleGameShare::DiceCombatCore::InsertAbilityState Method_1_D3CE97DCC13D88F7()
	{
		return ((::RPG::LittleGameShare::DiceCombatCore::InsertAbilityState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_824885B12D8BA1AD_METHOD_1_D3CE97DCC13D88F7_OFFSET))(this);
	}

	::System::Void Method_1_B799DB9989A18F1D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_824885B12D8BA1AD_METHOD_1_B799DB9989A18F1D_OFFSET))(this);
	}

	::System::Void Method_1_39590AB2089F9F4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_824885B12D8BA1AD_METHOD_1_39590AB2089F9F4D_OFFSET))(this, a1);
	}
};

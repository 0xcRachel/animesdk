#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerModifierEnterBattle; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_05C9B7A09B15945C_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCCB01B0)
#define CLASS_2_05C9B7A09B15945C_METHOD_2_218124418542E081_OFFSET UNITYSDK_OFFSET(0xCCB09C0)
#define CLASS_2_05C9B7A09B15945C_METHOD_2_9776079E29B61D7F_OFFSET UNITYSDK_OFFSET(0xCCB0B70)
#define CLASS_2_05C9B7A09B15945C_METHOD_2_A0FB414665BFE43F_OFFSET UNITYSDK_OFFSET(0xCCB0940)
#define CLASS_2_05C9B7A09B15945C_METHOD_2_D4405B1C2CBD9D8F_OFFSET UNITYSDK_OFFSET(0xCCB10C0)
#define CLASS_2_05C9B7A09B15945C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCCB01F0)
#define CLASS_2_05C9B7A09B15945C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCCB1070)
#define CLASS_2_05C9B7A09B15945C_TICK_OFFSET UNITYSDK_OFFSET(0xCCB0EB0)
#define CLASS_2_05C9B7A09B15945C__CTOR_OFFSET UNITYSDK_OFFSET(0xCCB0040)
#define CLASS_2_05C9B7A09B15945C__ONTASKBEGIN_B__3_0_OFFSET UNITYSDK_OFFSET(0xCCB11A0)

inline static constexpr unsigned int Class_2_05C9B7A09B15945C_TypeDefinitionIndex = 51397;

class Class_2_05C9B7A09B15945C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_5F51D4049EA87B7B* Field_2_4; // 0x18
	::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* Field_2_1; // 0x20
	::RPG::GameCore::TaskContext* Field_2_3; // 0x28
	::RPG::GameCore::TriggerModifierEnterBattle* Field_2_2; // 0x30
	::System::Boolean Field_2_6; // 0x38
	::System::Boolean Field_2_7; // 0x39
	::System::Int32 Field_2_0; // 0x3C
	::System::Int32 Field_2_5; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerModifierEnterBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerModifierEnterBattle*))((::PBYTE)hIl2Cpp + CLASS_2_05C9B7A09B15945C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05C9B7A09B15945C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05C9B7A09B15945C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05C9B7A09B15945C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_05C9B7A09B15945C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_9776079E29B61D7F(::RPG::GameCore::TurnBasedModifierInstance* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_05C9B7A09B15945C_METHOD_2_9776079E29B61D7F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_218124418542E081()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05C9B7A09B15945C_METHOD_2_218124418542E081_OFFSET))(this);
	}

	::System::Void Method_2_A0FB414665BFE43F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_05C9B7A09B15945C_METHOD_2_A0FB414665BFE43F_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_D4405B1C2CBD9D8F(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_05C9B7A09B15945C_METHOD_2_D4405B1C2CBD9D8F_OFFSET))(this, a1);
	}

	::System::Int32 _OnTaskBegin_b__3_0(::RPG::GameCore::TurnBasedModifierInstance* lhs, ::RPG::GameCore::TurnBasedModifierInstance* rhs)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_05C9B7A09B15945C__ONTASKBEGIN_B__3_0_OFFSET))(this, lhs, rhs);
	}
};

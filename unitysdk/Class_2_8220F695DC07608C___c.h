#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_52DF42E136544C98;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define CLASS_2_8220F695DC07608C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x105A3BC0)
#define CLASS_2_8220F695DC07608C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x105A3C00)
#define CLASS_2_8220F695DC07608C___C___ONBINDHANDLERS_B__34_0_OFFSET UNITYSDK_OFFSET(0x105A3C10)
#define CLASS_2_8220F695DC07608C___C___SETUPMODIFIERHINTS_B__50_1_OFFSET UNITYSDK_OFFSET(0x105A3C20)
#define CLASS_2_8220F695DC07608C___C___SORTBUFFS_B__52_0_OFFSET UNITYSDK_OFFSET(0x105A3C60)

inline static constexpr unsigned int Class_2_8220F695DC07608C___c_TypeDefinitionIndex = 56848;

class Class_2_8220F695DC07608C___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::RPG::GameCore::TurnBasedModifierInstance*>** StaticGet___9__52_0()
	{
		return (::System::Comparison_1<::RPG::GameCore::TurnBasedModifierInstance*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8220F695DC07608C___c_TypeDefinitionIndex)->GetStaticField(0x45660);
	}
	static ::System::Action_1<::System::Object*>** StaticGet___9__34_0()
	{
		return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8220F695DC07608C___c_TypeDefinitionIndex)->GetStaticField(0x45668);
	}
	static ::System::Comparison_1<::Class_1_52DF42E136544C98*>** StaticGet___9__50_1()
	{
		return (::System::Comparison_1<::Class_1_52DF42E136544C98*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8220F695DC07608C___c_TypeDefinitionIndex)->GetStaticField(0x45670);
	}
	static ::Class_2_8220F695DC07608C___c** StaticGet___9()
	{
		return (::Class_2_8220F695DC07608C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_8220F695DC07608C___c_TypeDefinitionIndex)->GetStaticField(0x45678);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8220F695DC07608C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8220F695DC07608C___C__CTOR_OFFSET))(this);
	}

	::System::Void __OnBindHandlers_b__34_0(::System::Object* o)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8220F695DC07608C___C___ONBINDHANDLERS_B__34_0_OFFSET))(this, o);
	}

	::System::Int32 __SetupModifierHints_b__50_1(::Class_1_52DF42E136544C98* a, ::Class_1_52DF42E136544C98* b)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_52DF42E136544C98*, ::Class_1_52DF42E136544C98*))((::PBYTE)hIl2Cpp + CLASS_2_8220F695DC07608C___C___SETUPMODIFIERHINTS_B__50_1_OFFSET))(this, a, b);
	}

	::System::Int32 __SortBuffs_b__52_0(::RPG::GameCore::TurnBasedModifierInstance* a, ::RPG::GameCore::TurnBasedModifierInstance* b)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_8220F695DC07608C___C___SORTBUFFS_B__52_0_OFFSET))(this, a, b);
	}
};

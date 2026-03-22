#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_1_DAC119B051861C6D;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_2_0C7944D338D04DBD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15FD5CF0)
#define CLASS_2_0C7944D338D04DBD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15FD5D20)
#define CLASS_2_0C7944D338D04DBD___C___ADJUSTEXECUTEORDERBYMODIFIERPRIORITY_B__14_0_OFFSET UNITYSDK_OFFSET(0x15FD5D30)
#define CLASS_2_0C7944D338D04DBD___C___INITCHARACTERSKILL_B__55_0_OFFSET UNITYSDK_OFFSET(0x15FD5D80)

inline static constexpr unsigned int Class_2_0C7944D338D04DBD___c_TypeDefinitionIndex = 27784;

class Class_2_0C7944D338D04DBD___c : public ::System::Object
{
public:
	static ::Class_2_0C7944D338D04DBD___c** StaticGet___9()
	{
		return (::Class_2_0C7944D338D04DBD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0C7944D338D04DBD___c_TypeDefinitionIndex)->GetStaticField(0x32F80);
	}
	static ::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>** StaticGet___9__55_0()
	{
		return (::System::Func_2<::System::UInt32, ::RPG::GameCore::FixPoint>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0C7944D338D04DBD___c_TypeDefinitionIndex)->GetStaticField(0x32F88);
	}
	static ::System::Func_2<::Class_1_DAC119B051861C6D*, ::System::Int32>** StaticGet___9__14_0()
	{
		return (::System::Func_2<::Class_1_DAC119B051861C6D*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_0C7944D338D04DBD___c_TypeDefinitionIndex)->GetStaticField(0x32F90);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0C7944D338D04DBD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C7944D338D04DBD___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __AdjustExecuteOrderByModifierPriority_b__14_0(::Class_1_DAC119B051861C6D* modifier)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_DAC119B051861C6D*))((::PBYTE)hIl2Cpp + CLASS_2_0C7944D338D04DBD___C___ADJUSTEXECUTEORDERBYMODIFIERPRIORITY_B__14_0_OFFSET))(this, modifier);
	}

	::RPG::GameCore::FixPoint __InitCharacterSkill_b__55_0(::System::UInt32 x)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_0C7944D338D04DBD___C___INITCHARACTERSKILL_B__55_0_OFFSET))(this, x);
	}
};

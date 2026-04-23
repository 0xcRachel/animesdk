#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_557;
class Class_0_16E4307DCC419505_559;
class Class_2_2690241A4D35989E;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_8C3AC9786B6764EF___C__ADDBLOCKHPATCH_B__13_2_OFFSET UNITYSDK_OFFSET(0xF5B7570)
#define CLASS_1_8C3AC9786B6764EF___C__ADDBLOCKHPATCH_B__13_3_OFFSET UNITYSDK_OFFSET(0xF5B7600)
#define CLASS_1_8C3AC9786B6764EF___C__ADDCLEAR_B__11_0_OFFSET UNITYSDK_OFFSET(0xF5B7500)
#define CLASS_1_8C3AC9786B6764EF___C__ADDPREVERIFY_B__10_2_OFFSET UNITYSDK_OFFSET(0xF5B74A0)
#define CLASS_1_8C3AC9786B6764EF___C__ADDUNPACK_B__14_2_OFFSET UNITYSDK_OFFSET(0xF5B7660)
#define CLASS_1_8C3AC9786B6764EF___C__ADDVERIFY_B__9_2_OFFSET UNITYSDK_OFFSET(0xF5B7440)
#define CLASS_1_8C3AC9786B6764EF___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF5B7400)
#define CLASS_1_8C3AC9786B6764EF___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF5B7430)

inline static constexpr unsigned int Class_1_8C3AC9786B6764EF___c_TypeDefinitionIndex = 54948;

class Class_1_8C3AC9786B6764EF___c : public ::System::Object
{
public:
	static ::System::Action_1<::Class_2_2690241A4D35989E*>** StaticGet___9__14_2()
	{
		return (::System::Action_1<::Class_2_2690241A4D35989E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8C3AC9786B6764EF___c_TypeDefinitionIndex)->GetStaticField(0x13240);
	}
	static ::System::Action_2<::Class_0_16E4307DCC419505_559*, ::System::Tuple_2<::System::String*, ::System::Boolean>*>** StaticGet___9__11_0()
	{
		return (::System::Action_2<::Class_0_16E4307DCC419505_559*, ::System::Tuple_2<::System::String*, ::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8C3AC9786B6764EF___c_TypeDefinitionIndex)->GetStaticField(0x13248);
	}
	static ::System::Action_1<::Class_2_2690241A4D35989E*>** StaticGet___9__9_2()
	{
		return (::System::Action_1<::Class_2_2690241A4D35989E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8C3AC9786B6764EF___c_TypeDefinitionIndex)->GetStaticField(0x13250);
	}
	static ::Class_1_8C3AC9786B6764EF___c** StaticGet___9()
	{
		return (::Class_1_8C3AC9786B6764EF___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8C3AC9786B6764EF___c_TypeDefinitionIndex)->GetStaticField(0x13258);
	}
	static ::System::Action_1<::Class_2_2690241A4D35989E*>** StaticGet___9__13_2()
	{
		return (::System::Action_1<::Class_2_2690241A4D35989E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8C3AC9786B6764EF___c_TypeDefinitionIndex)->GetStaticField(0x13260);
	}
	static ::System::Action_1<::Class_2_2690241A4D35989E*>** StaticGet___9__10_2()
	{
		return (::System::Action_1<::Class_2_2690241A4D35989E*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8C3AC9786B6764EF___c_TypeDefinitionIndex)->GetStaticField(0x13268);
	}
	static ::System::Action_1<::Class_0_16E4307DCC419505_557*>** StaticGet___9__13_3()
	{
		return (::System::Action_1<::Class_0_16E4307DCC419505_557*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8C3AC9786B6764EF___c_TypeDefinitionIndex)->GetStaticField(0x13270);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__CTOR_OFFSET))(this);
	}

	::System::Void _AddVerify_b__9_2(::Class_2_2690241A4D35989E* ax)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2690241A4D35989E*))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__ADDVERIFY_B__9_2_OFFSET))(this, ax);
	}

	::System::Void _AddPreVerify_b__10_2(::Class_2_2690241A4D35989E* ax)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2690241A4D35989E*))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__ADDPREVERIFY_B__10_2_OFFSET))(this, ax);
	}

	::System::Void _AddClear_b__11_0(::Class_0_16E4307DCC419505_559* data, ::System::Tuple_2<::System::String*, ::System::Boolean>* tuple)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_559*, ::System::Tuple_2<::System::String*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__ADDCLEAR_B__11_0_OFFSET))(this, data, tuple);
	}

	::System::Void _AddBlockHPatch_b__13_2(::Class_2_2690241A4D35989E* ax)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2690241A4D35989E*))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__ADDBLOCKHPATCH_B__13_2_OFFSET))(this, ax);
	}

	::System::Void _AddBlockHPatch_b__13_3(::Class_0_16E4307DCC419505_557* _)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_557*))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__ADDBLOCKHPATCH_B__13_3_OFFSET))(this, _);
	}

	::System::Void _AddUnpack_b__14_2(::Class_2_2690241A4D35989E* ax)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_2690241A4D35989E*))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__ADDUNPACK_B__14_2_OFFSET))(this, ax);
	}
};

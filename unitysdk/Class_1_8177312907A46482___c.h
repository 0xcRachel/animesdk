#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_557;
namespace System { template <typename T> class Predicate_1; }

#define CLASS_1_8177312907A46482___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xE1088A0)
#define CLASS_1_8177312907A46482___C__CTOR_OFFSET UNITYSDK_OFFSET(0xE1088E0)
#define CLASS_1_8177312907A46482___C__PROGRESSFINISH_B__18_0_OFFSET UNITYSDK_OFFSET(0xE108940)
#define CLASS_1_8177312907A46482___C__PROGRESSSTART_B__17_1_OFFSET UNITYSDK_OFFSET(0xE1088F0)

inline static constexpr unsigned int Class_1_8177312907A46482___c_TypeDefinitionIndex = 55013;

class Class_1_8177312907A46482___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::Class_0_16E4307DCC419505_557*>** StaticGet___9__17_1()
	{
		return (::System::Predicate_1<::Class_0_16E4307DCC419505_557*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8177312907A46482___c_TypeDefinitionIndex)->GetStaticField(0x6A4C0);
	}
	static ::System::Predicate_1<::Class_0_16E4307DCC419505_557*>** StaticGet___9__18_0()
	{
		return (::System::Predicate_1<::Class_0_16E4307DCC419505_557*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8177312907A46482___c_TypeDefinitionIndex)->GetStaticField(0x6A4C8);
	}
	static ::Class_1_8177312907A46482___c** StaticGet___9()
	{
		return (::Class_1_8177312907A46482___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8177312907A46482___c_TypeDefinitionIndex)->GetStaticField(0x6A4D0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8177312907A46482___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8177312907A46482___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _ProgressStart_b__17_1(::Class_0_16E4307DCC419505_557* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_557*))((::PBYTE)hIl2Cpp + CLASS_1_8177312907A46482___C__PROGRESSSTART_B__17_1_OFFSET))(this, e);
	}

	::System::Boolean _ProgressFinish_b__18_0(::Class_0_16E4307DCC419505_557* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_557*))((::PBYTE)hIl2Cpp + CLASS_1_8177312907A46482___C__PROGRESSFINISH_B__18_0_OFFSET))(this, e);
	}
};

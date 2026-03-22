#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_60B5E5A0CB5606E4;
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_EF20F44E47239AF3___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17B7CAE0)
#define CLASS_1_EF20F44E47239AF3___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17B7CB10)
#define CLASS_1_EF20F44E47239AF3___C___RESOLVEMULTI_B__23_1_OFFSET UNITYSDK_OFFSET(0x17B7CB20)

inline static constexpr unsigned int Class_1_EF20F44E47239AF3___c_TypeDefinitionIndex = 33041;

class Class_1_EF20F44E47239AF3___c : public ::System::Object
{
public:
	static ::System::Func_2<::Class_1_60B5E5A0CB5606E4*, ::System::Object*>** StaticGet___9__23_1()
	{
		return (::System::Func_2<::Class_1_60B5E5A0CB5606E4*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF20F44E47239AF3___c_TypeDefinitionIndex)->GetStaticField(0x2B630);
	}
	static ::Class_1_EF20F44E47239AF3___c** StaticGet___9()
	{
		return (::Class_1_EF20F44E47239AF3___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EF20F44E47239AF3___c_TypeDefinitionIndex)->GetStaticField(0x2B638);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EF20F44E47239AF3___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EF20F44E47239AF3___C__CTOR_OFFSET))(this);
	}

	::System::Object* __ResolveMulti_b__23_1(::Class_1_60B5E5A0CB5606E4* concrete)
	{
		return ((::System::Object*(*)(::PVOID, ::Class_1_60B5E5A0CB5606E4*))((::PBYTE)hIl2Cpp + CLASS_1_EF20F44E47239AF3___C___RESOLVEMULTI_B__23_1_OFFSET))(this, concrete);
	}
};

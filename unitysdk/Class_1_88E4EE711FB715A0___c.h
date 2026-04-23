#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_88E4EE711FB715A0___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xF7D07D0)
#define CLASS_1_88E4EE711FB715A0___C__CTOR_OFFSET UNITYSDK_OFFSET(0xF7D0800)
#define CLASS_1_88E4EE711FB715A0___C__INITIAL_B__63_0_OFFSET UNITYSDK_OFFSET(0xF7D0810)

inline static constexpr unsigned int Class_1_88E4EE711FB715A0___c_TypeDefinitionIndex = 68103;

class Class_1_88E4EE711FB715A0___c : public ::System::Object
{
public:
	static ::Class_1_88E4EE711FB715A0___c** StaticGet___9()
	{
		return (::Class_1_88E4EE711FB715A0___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88E4EE711FB715A0___c_TypeDefinitionIndex)->GetStaticField(0x4CA0);
	}
	static ::System::Func_2<::System::Type*, ::System::Boolean>** StaticGet___9__63_0()
	{
		return (::System::Func_2<::System::Type*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88E4EE711FB715A0___c_TypeDefinitionIndex)->GetStaticField(0x4CA8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _initial_b__63_0(::System::Type* t)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + CLASS_1_88E4EE711FB715A0___C__INITIAL_B__63_0_OFFSET))(this, t);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_43.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_6A206029A8384F7E_1___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1758EE40)
#define CLASS_1_6A206029A8384F7E_1___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1758EE70)
#define CLASS_1_6A206029A8384F7E_1___C___CCTOR_B__95_0_OFFSET UNITYSDK_OFFSET(0x1758EE80)
#define CLASS_1_6A206029A8384F7E_1___C___CCTOR_B__95_1_OFFSET UNITYSDK_OFFSET(0x1758EE90)

inline static constexpr unsigned int Class_1_6A206029A8384F7E_1___c_TypeDefinitionIndex = 24429;

class Class_1_6A206029A8384F7E_1___c : public ::System::Object
{
public:
	static ::Class_1_6A206029A8384F7E_1___c** StaticGet___9()
	{
		return (::Class_1_6A206029A8384F7E_1___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6A206029A8384F7E_1___c_TypeDefinitionIndex)->GetStaticField(0x13E60);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6A206029A8384F7E_1___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6A206029A8384F7E_1___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __cctor_b__95_0(::Enum_3_0A3761FE34514D6C_43 x)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_43))((::PBYTE)hIl2Cpp + CLASS_1_6A206029A8384F7E_1___C___CCTOR_B__95_0_OFFSET))(this, x);
	}

	::Enum_3_0A3761FE34514D6C_43 __cctor_b__95_1(::System::Int32 x)
	{
		return ((::Enum_3_0A3761FE34514D6C_43(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_6A206029A8384F7E_1___C___CCTOR_B__95_1_OFFSET))(this, x);
	}
};

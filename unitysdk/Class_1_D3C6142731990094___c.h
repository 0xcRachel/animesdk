#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_EF20F44E47239AF3;

#define CLASS_1_D3C6142731990094___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1098F0F0)
#define CLASS_1_D3C6142731990094___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1098F120)
#define CLASS_1_D3C6142731990094___C___CCTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0x1098F130)

inline static constexpr unsigned int Class_1_D3C6142731990094___c_TypeDefinitionIndex = 37608;

class Class_1_D3C6142731990094___c : public ::System::Object
{
public:
	static ::Class_1_D3C6142731990094___c** StaticGet___9()
	{
		return (::Class_1_D3C6142731990094___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D3C6142731990094___c_TypeDefinitionIndex)->GetStaticField(0x405C0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D3C6142731990094___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3C6142731990094___C__CTOR_OFFSET))(this);
	}

	::System::Void __cctor_b__3_0(::Class_1_EF20F44E47239AF3* _)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EF20F44E47239AF3*))((::PBYTE)hIl2Cpp + CLASS_1_D3C6142731990094___C___CCTOR_B__3_0_OFFSET))(this, _);
	}
};

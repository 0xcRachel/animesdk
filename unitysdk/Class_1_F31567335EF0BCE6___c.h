#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_10.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_F31567335EF0BCE6___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x178752C0)
#define CLASS_1_F31567335EF0BCE6___C__CTOR_OFFSET UNITYSDK_OFFSET(0x178752F0)
#define CLASS_1_F31567335EF0BCE6___C___CCTOR_B__25_0_OFFSET UNITYSDK_OFFSET(0x17875300)
#define CLASS_1_F31567335EF0BCE6___C___CCTOR_B__25_1_OFFSET UNITYSDK_OFFSET(0x17875310)

inline static constexpr unsigned int Class_1_F31567335EF0BCE6___c_TypeDefinitionIndex = 24563;

class Class_1_F31567335EF0BCE6___c : public ::System::Object
{
public:
	static ::Class_1_F31567335EF0BCE6___c** StaticGet___9()
	{
		return (::Class_1_F31567335EF0BCE6___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F31567335EF0BCE6___c_TypeDefinitionIndex)->GetStaticField(0x43860);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F31567335EF0BCE6___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F31567335EF0BCE6___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __cctor_b__25_0(::Enum_3_71AA90D596A09AC8_10 x)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_10))((::PBYTE)hIl2Cpp + CLASS_1_F31567335EF0BCE6___C___CCTOR_B__25_0_OFFSET))(this, x);
	}

	::Enum_3_71AA90D596A09AC8_10 __cctor_b__25_1(::System::Int32 x)
	{
		return ((::Enum_3_71AA90D596A09AC8_10(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F31567335EF0BCE6___C___CCTOR_B__25_1_OFFSET))(this, x);
	}
};

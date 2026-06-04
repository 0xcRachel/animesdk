#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_71AA90D596A09AC8_12.h"
#include "unitysdk/System/Object.h"

class Class_1_A25D220DF148F45C;

#define CLASS_1_A25D220DF148F45C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A594700)
#define CLASS_1_A25D220DF148F45C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A594730)
#define CLASS_1_A25D220DF148F45C___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1A594740)
#define CLASS_1_A25D220DF148F45C___C___CCTOR_B__28_1_OFFSET UNITYSDK_OFFSET(0x1A594790)
#define CLASS_1_A25D220DF148F45C___C___CCTOR_B__28_2_OFFSET UNITYSDK_OFFSET(0x1A5947A0)

inline static constexpr unsigned int Class_1_A25D220DF148F45C___c_TypeDefinitionIndex = 28583;

class Class_1_A25D220DF148F45C___c : public ::System::Object
{
public:
	static ::Class_1_A25D220DF148F45C___c** StaticGet___9()
	{
		return (::Class_1_A25D220DF148F45C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A25D220DF148F45C___c_TypeDefinitionIndex)->GetStaticField(0x5AFE0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A25D220DF148F45C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A25D220DF148F45C___C__CTOR_OFFSET))(this);
	}

	::Class_1_A25D220DF148F45C* __cctor_b__28_0()
	{
		return ((::Class_1_A25D220DF148F45C*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A25D220DF148F45C___C___CCTOR_B__28_0_OFFSET))(this);
	}

	::System::Int32 __cctor_b__28_1(::Enum_3_71AA90D596A09AC8_12 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_71AA90D596A09AC8_12))((::PBYTE)hIl2Cpp + CLASS_1_A25D220DF148F45C___C___CCTOR_B__28_1_OFFSET))(this, a1);
	}

	::Enum_3_71AA90D596A09AC8_12 __cctor_b__28_2(::System::Int32 a1)
	{
		return ((::Enum_3_71AA90D596A09AC8_12(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A25D220DF148F45C___C___CCTOR_B__28_2_OFFSET))(this, a1);
	}
};

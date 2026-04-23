#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_173C789286202B25;

#define CLASS_1_173C789286202B25___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A34AC90)
#define CLASS_1_173C789286202B25___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A34ACD0)
#define CLASS_1_173C789286202B25___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1A34ACE0)

inline static constexpr unsigned int Class_1_173C789286202B25___c_TypeDefinitionIndex = 24460;

class Class_1_173C789286202B25___c : public ::System::Object
{
public:
	static ::Class_1_173C789286202B25___c** StaticGet___9()
	{
		return (::Class_1_173C789286202B25___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_173C789286202B25___c_TypeDefinitionIndex)->GetStaticField(0x2D460);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_173C789286202B25___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_173C789286202B25___C__CTOR_OFFSET))(this);
	}

	::Class_1_173C789286202B25* __cctor_b__43_0()
	{
		return ((::Class_1_173C789286202B25*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_173C789286202B25___C___CCTOR_B__43_0_OFFSET))(this);
	}
};

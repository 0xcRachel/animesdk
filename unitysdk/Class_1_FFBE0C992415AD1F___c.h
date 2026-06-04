#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_FFBE0C992415AD1F;

#define CLASS_1_FFBE0C992415AD1F___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD21B60)
#define CLASS_1_FFBE0C992415AD1F___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD21B90)
#define CLASS_1_FFBE0C992415AD1F___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1AD21BA0)

inline static constexpr unsigned int Class_1_FFBE0C992415AD1F___c_TypeDefinitionIndex = 25670;

class Class_1_FFBE0C992415AD1F___c : public ::System::Object
{
public:
	static ::Class_1_FFBE0C992415AD1F___c** StaticGet___9()
	{
		return (::Class_1_FFBE0C992415AD1F___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FFBE0C992415AD1F___c_TypeDefinitionIndex)->GetStaticField(0xEC10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FFBE0C992415AD1F___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFBE0C992415AD1F___C__CTOR_OFFSET))(this);
	}

	::Class_1_FFBE0C992415AD1F* __cctor_b__43_0()
	{
		return ((::Class_1_FFBE0C992415AD1F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FFBE0C992415AD1F___C___CCTOR_B__43_0_OFFSET))(this);
	}
};

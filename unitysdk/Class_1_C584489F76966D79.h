#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_466;
class Class_0_16E4307DCC419505_471;

#define CLASS_1_C584489F76966D79_METHOD_1_3C22D711B6298B99_OFFSET UNITYSDK_OFFSET(0xB2C4640)
#define CLASS_1_C584489F76966D79_METHOD_1_D84802120B0556BF_OFFSET UNITYSDK_OFFSET(0xB2C43C0)
#define CLASS_1_C584489F76966D79__CTOR_OFFSET UNITYSDK_OFFSET(0xB2C43B0)

inline static constexpr unsigned int Class_1_C584489F76966D79_TypeDefinitionIndex = 50937;

class Class_1_C584489F76966D79 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_471* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_471* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_471*))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79__CTOR_OFFSET))(this, a1);
	}

	::System::Object* Method_1_D84802120B0556BF()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79_METHOD_1_D84802120B0556BF_OFFSET))(this);
	}

	::System::Void Method_1_3C22D711B6298B99(::Class_0_16E4307DCC419505_466* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_466*))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79_METHOD_1_3C22D711B6298B99_OFFSET))(this, a1);
	}
};

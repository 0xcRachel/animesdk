#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_466;
class Class_0_16E4307DCC419505_471;

#define CLASS_1_C584489F76966D79_1_METHOD_1_3C22D711B6298B99_OFFSET UNITYSDK_OFFSET(0x8AB4970)
#define CLASS_1_C584489F76966D79_1_METHOD_1_B7A73A501A98CA66_OFFSET UNITYSDK_OFFSET(0x8AB4680)
#define CLASS_1_C584489F76966D79_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8AB4670)

inline static constexpr unsigned int Class_1_C584489F76966D79_1_TypeDefinitionIndex = 50939;

class Class_1_C584489F76966D79_1 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_471* Field_1_0; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_471* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_471*))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79_1__CTOR_OFFSET))(this, a1);
	}

	::System::Object* Method_1_B7A73A501A98CA66()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79_1_METHOD_1_B7A73A501A98CA66_OFFSET))(this);
	}

	::System::Void Method_1_3C22D711B6298B99(::Class_0_16E4307DCC419505_466* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_466*))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79_1_METHOD_1_3C22D711B6298B99_OFFSET))(this, a1);
	}
};

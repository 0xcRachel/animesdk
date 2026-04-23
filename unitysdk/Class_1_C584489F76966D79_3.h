#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_573;
class Class_0_16E4307DCC419505_578;

#define CLASS_1_C584489F76966D79_3_GET__OPERAND_OFFSET UNITYSDK_OFFSET(0xF220CD0)
#define CLASS_1_C584489F76966D79_3_METHOD_1_3C22D711B6298B99_OFFSET UNITYSDK_OFFSET(0xF220B50)
#define CLASS_1_C584489F76966D79_3__CTOR_OFFSET UNITYSDK_OFFSET(0xF220B40)

inline static constexpr unsigned int Class_1_C584489F76966D79_3_TypeDefinitionIndex = 72531;

class Class_1_C584489F76966D79_3 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_578* __Operand_k__BackingField; // 0x10

	::System::Void _ctor(::Class_0_16E4307DCC419505_578* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_578*))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79_3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_3C22D711B6298B99(::Class_0_16E4307DCC419505_573* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_573*))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79_3_METHOD_1_3C22D711B6298B99_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_578* get__Operand()
	{
		return ((::Class_0_16E4307DCC419505_578*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C584489F76966D79_3_GET__OPERAND_OFFSET))(this);
	}
};

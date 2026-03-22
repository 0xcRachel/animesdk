#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_95EEF67A826E14FF;

#define CLASS_2_4144E6E29A80FDF1___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x86747D0)
#define CLASS_2_4144E6E29A80FDF1___C__DISPLAYCLASS15_0___TRYENQUEENTRYQUEUE_B__0_OFFSET UNITYSDK_OFFSET(0x8674A00)

inline static constexpr unsigned int Class_2_4144E6E29A80FDF1___c__DisplayClass15_0_TypeDefinitionIndex = 57036;

class Class_2_4144E6E29A80FDF1___c__DisplayClass15_0 : public ::System::Object
{
public:
	::Class_1_95EEF67A826E14FF* entry; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4144E6E29A80FDF1___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __TryEnqueEntryQueue_b__0(::Class_1_95EEF67A826E14FF* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_95EEF67A826E14FF*))((::PBYTE)hIl2Cpp + CLASS_2_4144E6E29A80FDF1___C__DISPLAYCLASS15_0___TRYENQUEENTRYQUEUE_B__0_OFFSET))(this, e);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_95EEF67A826E14FF;

#define CLASS_2_334416D5B782475A___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15179590)
#define CLASS_2_334416D5B782475A___C__DISPLAYCLASS15_0___TRYENQUEENTRYQUEUE_B__0_OFFSET UNITYSDK_OFFSET(0x151797B0)

inline static constexpr unsigned int Class_2_334416D5B782475A___c__DisplayClass15_0_TypeDefinitionIndex = 66881;

class Class_2_334416D5B782475A___c__DisplayClass15_0 : public ::System::Object
{
public:
	::Class_1_95EEF67A826E14FF* entry; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_334416D5B782475A___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __TryEnqueEntryQueue_b__0(::Class_1_95EEF67A826E14FF* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_95EEF67A826E14FF*))((::PBYTE)hIl2Cpp + CLASS_2_334416D5B782475A___C__DISPLAYCLASS15_0___TRYENQUEENTRYQUEUE_B__0_OFFSET))(this, a1);
	}
};

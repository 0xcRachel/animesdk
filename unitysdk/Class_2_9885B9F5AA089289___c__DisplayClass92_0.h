#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2A97E60807F449E7;

#define CLASS_2_9885B9F5AA089289___C__DISPLAYCLASS92_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8671630)
#define CLASS_2_9885B9F5AA089289___C__DISPLAYCLASS92_0___FINDCHANGEDETAIL_B__0_OFFSET UNITYSDK_OFFSET(0x8672AC0)

inline static constexpr unsigned int Class_2_9885B9F5AA089289___c__DisplayClass92_0_TypeDefinitionIndex = 56759;

class Class_2_9885B9F5AA089289___c__DisplayClass92_0 : public ::System::Object
{
public:
	::System::UInt32 nodeID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9885B9F5AA089289___C__DISPLAYCLASS92_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __FindChangeDetail_b__0(::Class_1_2A97E60807F449E7* detail)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_2A97E60807F449E7*))((::PBYTE)hIl2Cpp + CLASS_2_9885B9F5AA089289___C__DISPLAYCLASS92_0___FINDCHANGEDETAIL_B__0_OFFSET))(this, detail);
	}
};

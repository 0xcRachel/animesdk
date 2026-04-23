#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4D11CE62B2BEC69E;
class Class_3_D6E9A038FA23103A;

#define CLASS_1_8E042314AFF884FB_9_EXECUTE_OFFSET UNITYSDK_OFFSET(0xBC0DA10)
#define CLASS_1_8E042314AFF884FB_9_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xBC0D9D0)
#define CLASS_1_8E042314AFF884FB_9_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xBC0D990)
#define CLASS_1_8E042314AFF884FB_9__CTOR_OFFSET UNITYSDK_OFFSET(0xBC0D980)

inline static constexpr unsigned int Class_1_8E042314AFF884FB_9_TypeDefinitionIndex = 70467;

class Class_1_8E042314AFF884FB_9 : public ::System::Object
{
public:
	::Class_3_D6E9A038FA23103A* Field_1_1; // 0x10
	::Class_1_4D11CE62B2BEC69E* Field_1_0; // 0x18

	::System::Void _ctor(::Class_1_4D11CE62B2BEC69E* a1, ::Class_3_D6E9A038FA23103A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D11CE62B2BEC69E*, ::Class_3_D6E9A038FA23103A*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_9_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_9_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_9_EXECUTE_OFFSET))(this);
	}
};

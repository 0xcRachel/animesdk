#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4D11CE62B2BEC69E;
class Class_3_D6E9A038FA23103A;

#define CLASS_1_8E042314AFF884FB_8_EXECUTE_OFFSET UNITYSDK_OFFSET(0xF979860)
#define CLASS_1_8E042314AFF884FB_8_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xF979260)
#define CLASS_1_8E042314AFF884FB_8_METHOD_1_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0xF979210)
#define CLASS_1_8E042314AFF884FB_8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF979820)
#define CLASS_1_8E042314AFF884FB_8_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xF979DF0)
#define CLASS_1_8E042314AFF884FB_8__CTOR_OFFSET UNITYSDK_OFFSET(0xF979200)

inline static constexpr unsigned int Class_1_8E042314AFF884FB_8_TypeDefinitionIndex = 70470;

class Class_1_8E042314AFF884FB_8 : public ::System::Object
{
public:
	::Class_1_4D11CE62B2BEC69E* Field_1_0; // 0x10
	::Class_3_D6E9A038FA23103A* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_4D11CE62B2BEC69E* a1, ::Class_3_D6E9A038FA23103A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D11CE62B2BEC69E*, ::Class_3_D6E9A038FA23103A*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_7AEA4B2B25797605()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_8_METHOD_1_7AEA4B2B25797605_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_8_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_8_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_8_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_8_TEARDOWN_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_867B6CE75953535A_1;
class Class_3_44EDAE37250FA2DB;

#define CLASS_1_8E042314AFF884FB_8_EXECUTE_OFFSET UNITYSDK_OFFSET(0x10D66220)
#define CLASS_1_8E042314AFF884FB_8_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x10D65B80)
#define CLASS_1_8E042314AFF884FB_8_METHOD_1_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0x10D65B30)
#define CLASS_1_8E042314AFF884FB_8_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10D661E0)
#define CLASS_1_8E042314AFF884FB_8_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x10D66730)
#define CLASS_1_8E042314AFF884FB_8__CTOR_OFFSET UNITYSDK_OFFSET(0x10D65B20)

inline static constexpr unsigned int Class_1_8E042314AFF884FB_8_TypeDefinitionIndex = 60492;

class Class_1_8E042314AFF884FB_8 : public ::System::Object
{
public:
	::Class_1_867B6CE75953535A_1* Field_1_0; // 0x10
	::Class_3_44EDAE37250FA2DB* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_867B6CE75953535A_1* a1, ::Class_3_44EDAE37250FA2DB* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A_1*, ::Class_3_44EDAE37250FA2DB*))((::PBYTE)hIl2Cpp + CLASS_1_8E042314AFF884FB_8__CTOR_OFFSET))(this, a1, a2);
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

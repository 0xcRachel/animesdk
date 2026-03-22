#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_B6A3FA7992F9F37E_7.h"
#include "unitysdk/System/Object.h"

class Class_1_7D23A596E7A855DC;

#define CLASS_1_B79AEE96621D13DD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1046E580)
#define CLASS_1_B79AEE96621D13DD_METHOD_1_4C7B58DB6224EE5B_OFFSET UNITYSDK_OFFSET(0x1046E410)
#define CLASS_1_B79AEE96621D13DD_METHOD_1_8649317719F42121_OFFSET UNITYSDK_OFFSET(0x1046E5D0)
#define CLASS_1_B79AEE96621D13DD_METHOD_1_9E467FFFA5E8F9EF_OFFSET UNITYSDK_OFFSET(0x1046E8D0)
#define CLASS_1_B79AEE96621D13DD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1046EA20)
#define CLASS_1_B79AEE96621D13DD__CTOR_OFFSET UNITYSDK_OFFSET(0x1046E570)

inline static constexpr unsigned int Class_1_B79AEE96621D13DD_TypeDefinitionIndex = 45180;

class Class_1_B79AEE96621D13DD : public ::System::Object
{
public:
	static ::System::Single* StaticGet_Field_1_3()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B79AEE96621D13DD_TypeDefinitionIndex)->GetStaticField(0xF690);
	}
	static ::System::UInt32* StaticGet_Field_1_1()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B79AEE96621D13DD_TypeDefinitionIndex)->GetStaticField(0xF694);
	}
	static ::System::UInt32* StaticGet_Field_1_2()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B79AEE96621D13DD_TypeDefinitionIndex)->GetStaticField(0xF698);
	}
	static ::System::UInt32* StaticGet_Field_1_0()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B79AEE96621D13DD_TypeDefinitionIndex)->GetStaticField(0xF69C);
	}
	::Class_1_7D23A596E7A855DC* Field_1_4; // 0x10
	::System::Boolean Field_1_7; // 0x18
	::System::Boolean Field_1_6; // 0x19
	::System::Single Field_1_5; // 0x1C

	::System::Void _ctor(::Class_1_7D23A596E7A855DC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_7D23A596E7A855DC*))((::PBYTE)hIl2Cpp + CLASS_1_B79AEE96621D13DD__CTOR_OFFSET))(this, a1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B79AEE96621D13DD__CCTOR_OFFSET))();
	}

	static ::Class_1_B79AEE96621D13DD* Method_1_4C7B58DB6224EE5B(::Class_1_7D23A596E7A855DC* a1)
	{
		return ((::Class_1_B79AEE96621D13DD*(*)(::Class_1_7D23A596E7A855DC*))((::PBYTE)hIl2Cpp + CLASS_1_B79AEE96621D13DD_METHOD_1_4C7B58DB6224EE5B_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B79AEE96621D13DD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_8649317719F42121(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B79AEE96621D13DD_METHOD_1_8649317719F42121_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9E467FFFA5E8F9EF(::Struct_2_B6A3FA7992F9F37E_7& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_B6A3FA7992F9F37E_7&))((::PBYTE)hIl2Cpp + CLASS_1_B79AEE96621D13DD_METHOD_1_9E467FFFA5E8F9EF_OFFSET))(this, a1);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_9100C4ECB2108214;
class Class_1_DDB796240B07BA45;
namespace System { class String; }

#define CLASS_1_94A3840C743EB4A9_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x10B508D0)
#define CLASS_1_94A3840C743EB4A9_METHOD_1_E73A89A53EDEB864_OFFSET UNITYSDK_OFFSET(0x10B50920)
#define CLASS_1_94A3840C743EB4A9__CTOR_OFFSET UNITYSDK_OFFSET(0x10B509D0)

inline static constexpr unsigned int Class_1_94A3840C743EB4A9_TypeDefinitionIndex = 46888;

class Class_1_94A3840C743EB4A9 : public ::System::Object
{
public:
	// static const ::System::Int32 Field_1_2 = 0x0; // 0x0
	::System::String* RetMessage; // 0x10
	::System::Int32 RetCode; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94A3840C743EB4A9__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94A3840C743EB4A9_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_E73A89A53EDEB864(::Class_1_9100C4ECB2108214* a1, ::Class_1_DDB796240B07BA45* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_9100C4ECB2108214*, ::Class_1_DDB796240B07BA45*))((::PBYTE)hIl2Cpp + CLASS_1_94A3840C743EB4A9_METHOD_1_E73A89A53EDEB864_OFFSET))(this, a1, a2);
	}
};

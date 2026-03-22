#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2231FD56C070349F.h"

class Class_1_A2B5EC56C7F63653;
class Class_2_D5AD64F6FB3109AB;
class Class_3_E5B65FD9338F9400;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_2_463149620C8AFC31_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x8441200)
#define CLASS_2_463149620C8AFC31_METHOD_2_EC2B405D0723571D_OFFSET UNITYSDK_OFFSET(0x8441140)
#define CLASS_2_463149620C8AFC31_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x8441260)
#define CLASS_2_463149620C8AFC31__CTOR_OFFSET UNITYSDK_OFFSET(0x84410F0)

inline static constexpr unsigned int Class_2_463149620C8AFC31_TypeDefinitionIndex = 47792;

class Class_2_463149620C8AFC31 : public ::Class_1_2231FD56C070349F
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_2_3; // 0x18
	::Class_2_D5AD64F6FB3109AB* Field_2_0; // 0x20
	::Class_1_A2B5EC56C7F63653* Field_2_2; // 0x28
	::System::UInt32 Field_2_1; // 0x30

	::System::Void _ctor(::Class_3_E5B65FD9338F9400* a1, ::System::UInt32 a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E5B65FD9338F9400*, ::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_2_463149620C8AFC31__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_EC2B405D0723571D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463149620C8AFC31_METHOD_2_EC2B405D0723571D_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463149620C8AFC31_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_463149620C8AFC31_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}
};

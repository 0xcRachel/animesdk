#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_E5B65FD9338F9400;

#define CLASS_1_2231FD56C070349F_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1008F790)
#define CLASS_1_2231FD56C070349F_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1008F7F0)
#define CLASS_1_2231FD56C070349F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1008F750)
#define CLASS_1_2231FD56C070349F__CTOR_OFFSET UNITYSDK_OFFSET(0x1008F740)

inline static constexpr unsigned int Class_1_2231FD56C070349F_TypeDefinitionIndex = 47786;

class Class_1_2231FD56C070349F : public ::System::Object
{
public:
	::Class_3_E5B65FD9338F9400* Field_1_0; // 0x10

	::System::Void _ctor(::Class_3_E5B65FD9338F9400* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E5B65FD9338F9400*))((::PBYTE)hIl2Cpp + CLASS_1_2231FD56C070349F__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2231FD56C070349F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2231FD56C070349F_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2231FD56C070349F_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};

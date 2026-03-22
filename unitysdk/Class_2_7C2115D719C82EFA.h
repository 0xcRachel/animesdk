#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2231FD56C070349F.h"

class Class_3_E5B65FD9338F9400;

#define CLASS_2_7C2115D719C82EFA_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0xACA4060)
#define CLASS_2_7C2115D719C82EFA_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xACA41E0)
#define CLASS_2_7C2115D719C82EFA_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xACA4220)
#define CLASS_2_7C2115D719C82EFA__CTOR_OFFSET UNITYSDK_OFFSET(0xACA4040)

inline static constexpr unsigned int Class_2_7C2115D719C82EFA_TypeDefinitionIndex = 47800;

class Class_2_7C2115D719C82EFA : public ::Class_1_2231FD56C070349F
{
public:
	::System::Int32 Field_2_2; // 0x18
	::System::UInt32 Field_2_0; // 0x1C
	::System::Boolean Field_2_1; // 0x20

	::System::Void _ctor(::Class_3_E5B65FD9338F9400* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E5B65FD9338F9400*, ::System::UInt32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_7C2115D719C82EFA__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C2115D719C82EFA_METHOD_2_18982EFD3B740683_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C2115D719C82EFA_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7C2115D719C82EFA_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}
};

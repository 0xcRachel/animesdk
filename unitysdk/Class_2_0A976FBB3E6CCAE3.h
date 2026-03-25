#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_43BD383C98B4C0C5_178.h"

#define CLASS_2_0A976FBB3E6CCAE3_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x11416B40)
#define CLASS_2_0A976FBB3E6CCAE3_SET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x11416B50)
#define CLASS_2_0A976FBB3E6CCAE3__CTOR_OFFSET UNITYSDK_OFFSET(0x11416B60)

inline static constexpr unsigned int Class_2_0A976FBB3E6CCAE3_TypeDefinitionIndex = 63513;

class Class_2_0A976FBB3E6CCAE3 : public ::Class_1_43BD383C98B4C0C5_178
{
public:
	::System::UInt64 _TimeStamp_k__BackingField; // 0x10

	::System::Void _ctor(::System::UInt64 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_0A976FBB3E6CCAE3__CTOR_OFFSET))(this, a1);
	}

	::System::UInt64 get_TimeStamp()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0A976FBB3E6CCAE3_GET_TIMESTAMP_OFFSET))(this);
	}

	::System::Void set_TimeStamp(::System::UInt64 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_2_0A976FBB3E6CCAE3_SET_TIMESTAMP_OFFSET))(this, value);
	}
};

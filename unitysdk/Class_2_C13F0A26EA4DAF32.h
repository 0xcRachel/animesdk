#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2B357179601D6146.h"
#include "unitysdk/Struct_2_0814C3CA012BD292.h"

#define CLASS_2_C13F0A26EA4DAF32_METHOD_2_EB19150C5469F500_OFFSET UNITYSDK_OFFSET(0x10DCFC80)
#define CLASS_2_C13F0A26EA4DAF32__CTOR_OFFSET UNITYSDK_OFFSET(0x10DCFD60)

inline static constexpr unsigned int Class_2_C13F0A26EA4DAF32_TypeDefinitionIndex = 51588;

class Class_2_C13F0A26EA4DAF32 : public ::Class_1_2B357179601D6146
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C13F0A26EA4DAF32__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_2_EB19150C5469F500(::System::UInt32 a1, ::Struct_2_0814C3CA012BD292 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Struct_2_0814C3CA012BD292))((::PBYTE)hIl2Cpp + CLASS_2_C13F0A26EA4DAF32_METHOD_2_EB19150C5469F500_OFFSET))(this, a1, a2);
	}
};

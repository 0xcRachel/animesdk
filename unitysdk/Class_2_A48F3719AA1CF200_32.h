#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A6989C352B0F0F0.h"

#define CLASS_2_A48F3719AA1CF200_32_CLEAR_OFFSET UNITYSDK_OFFSET(0x85EF170)
#define CLASS_2_A48F3719AA1CF200_32__CTOR_OFFSET UNITYSDK_OFFSET(0x85EF270)

inline static constexpr unsigned int Class_2_A48F3719AA1CF200_32_TypeDefinitionIndex = 58759;

class Class_2_A48F3719AA1CF200_32 : public ::Class_1_8A6989C352B0F0F0
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A48F3719AA1CF200_32__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A48F3719AA1CF200_32_CLEAR_OFFSET))(this);
	}
};

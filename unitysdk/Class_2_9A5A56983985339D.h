#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_275515F210334D06.h"

#define CLASS_2_9A5A56983985339D_CLEAR_OFFSET UNITYSDK_OFFSET(0x10580A40)
#define CLASS_2_9A5A56983985339D_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x105809E0)
#define CLASS_2_9A5A56983985339D_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x105809A0)
#define CLASS_2_9A5A56983985339D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10580950)
#define CLASS_2_9A5A56983985339D__CTOR_OFFSET UNITYSDK_OFFSET(0x10580A80)

inline static constexpr unsigned int Class_2_9A5A56983985339D_TypeDefinitionIndex = 60656;

class Class_2_9A5A56983985339D : public ::Class_1_275515F210334D06
{
public:
	::System::Single Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A5A56983985339D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A5A56983985339D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A5A56983985339D_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9A5A56983985339D_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9A5A56983985339D_CLEAR_OFFSET))(this);
	}
};

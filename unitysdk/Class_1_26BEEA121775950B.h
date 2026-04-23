#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D27BF54F25500E5F;

#define CLASS_1_26BEEA121775950B_CLEAR_OFFSET UNITYSDK_OFFSET(0xE165B70)
#define CLASS_1_26BEEA121775950B__CTOR_OFFSET UNITYSDK_OFFSET(0xE165BF0)

inline static constexpr unsigned int Class_1_26BEEA121775950B_TypeDefinitionIndex = 52440;

class Class_1_26BEEA121775950B : public ::System::Object
{
public:
	::Class_1_D27BF54F25500E5F* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26BEEA121775950B__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_26BEEA121775950B_CLEAR_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_4AA6F76B9521E7F4_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15F1FD30)
#define CLASS_1_4AA6F76B9521E7F4_METHOD_1_D53952E2375B3B4C_OFFSET UNITYSDK_OFFSET(0x15F1FD70)
#define CLASS_1_4AA6F76B9521E7F4__CTOR_OFFSET UNITYSDK_OFFSET(0x15F1FD20)

inline static constexpr unsigned int Class_1_4AA6F76B9521E7F4_TypeDefinitionIndex = 27870;

class Class_1_4AA6F76B9521E7F4 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6F76B9521E7F4__CTOR_OFFSET))(this);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4AA6F76B9521E7F4_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_1_D53952E2375B3B4C(::System::UInt32 a1, ::System::String* a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4AA6F76B9521E7F4_METHOD_1_D53952E2375B3B4C_OFFSET))(this, a1, a2, a3);
	}
};

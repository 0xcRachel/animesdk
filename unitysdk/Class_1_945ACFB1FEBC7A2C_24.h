#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_24__CTOR_OFFSET UNITYSDK_OFFSET(0x11074080)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_24_TypeDefinitionIndex = 49090;

class Class_1_945ACFB1FEBC7A2C_24 : public ::System::Object
{
public:
	::System::String* InviteCode; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_24__CTOR_OFFSET))(this);
	}
};

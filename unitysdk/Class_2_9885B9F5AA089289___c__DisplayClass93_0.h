#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6B57C0CB1CF5E075;

#define CLASS_2_9885B9F5AA089289___C__DISPLAYCLASS93_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16280420)
#define CLASS_2_9885B9F5AA089289___C__DISPLAYCLASS93_0__FINDITEMBYCHARACTERID_B__0_OFFSET UNITYSDK_OFFSET(0x162819A0)

inline static constexpr unsigned int Class_2_9885B9F5AA089289___c__DisplayClass93_0_TypeDefinitionIndex = 66570;

class Class_2_9885B9F5AA089289___c__DisplayClass93_0 : public ::System::Object
{
public:
	::System::UInt32 characterID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9885B9F5AA089289___C__DISPLAYCLASS93_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _FindItemByCharacterID_b__0(::Class_2_6B57C0CB1CF5E075* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_6B57C0CB1CF5E075*))((::PBYTE)hIl2Cpp + CLASS_2_9885B9F5AA089289___C__DISPLAYCLASS93_0__FINDITEMBYCHARACTERID_B__0_OFFSET))(this, a1);
	}
};

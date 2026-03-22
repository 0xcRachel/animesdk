#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_3C3EAF61D129C7B7___C__DISPLAYCLASS3_0__ADDHANDLER_B__0_OFFSET UNITYSDK_OFFSET(0x86A5D80)
#define CLASS_1_3C3EAF61D129C7B7___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x86A5C50)

inline static constexpr unsigned int Class_1_3C3EAF61D129C7B7___c__DisplayClass3_0_TypeDefinitionIndex = 51108;

class Class_1_3C3EAF61D129C7B7___c__DisplayClass3_0 : public ::System::Object
{
public:
	::System::Action* handler; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3C3EAF61D129C7B7___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void _AddHandler_b__0(::System::Object* obj)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_3C3EAF61D129C7B7___C__DISPLAYCLASS3_0__ADDHANDLER_B__0_OFFSET))(this, obj);
	}
};

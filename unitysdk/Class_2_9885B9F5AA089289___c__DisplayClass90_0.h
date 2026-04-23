#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_6B57C0CB1CF5E075;

#define CLASS_2_9885B9F5AA089289___C__DISPLAYCLASS90_0__CTOR_OFFSET UNITYSDK_OFFSET(0xF774680)
#define CLASS_2_9885B9F5AA089289___C__DISPLAYCLASS90_0___FINDITEM_B__0_OFFSET UNITYSDK_OFFSET(0xF775C10)

inline static constexpr unsigned int Class_2_9885B9F5AA089289___c__DisplayClass90_0_TypeDefinitionIndex = 65635;

class Class_2_9885B9F5AA089289___c__DisplayClass90_0 : public ::System::Object
{
public:
	::System::UInt32 nodeID; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9885B9F5AA089289___C__DISPLAYCLASS90_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __FindItem_b__0(::Class_2_6B57C0CB1CF5E075* item)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_6B57C0CB1CF5E075*))((::PBYTE)hIl2Cpp + CLASS_2_9885B9F5AA089289___C__DISPLAYCLASS90_0___FINDITEM_B__0_OFFSET))(this, item);
	}
};

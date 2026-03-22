#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_44260D773CA584CC.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_268;
class Class_2_E08C4A9CFB467C17;

#define CLASS_2_E08C4A9CFB467C17___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10D7F7B0)
#define CLASS_2_E08C4A9CFB467C17___C__DISPLAYCLASS3_0__MAINASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x10D7F7C0)

inline static constexpr unsigned int Class_2_E08C4A9CFB467C17___c__DisplayClass3_0_TypeDefinitionIndex = 38683;

class Class_2_E08C4A9CFB467C17___c__DisplayClass3_0 : public ::System::Object
{
public:
	::Struct_2_44260D773CA584CC goalNode; // 0x10
	::Class_0_16E4307DCC419505_268* container; // 0x20
	::Class_2_E08C4A9CFB467C17* __4__this; // 0x28
	::Struct_2_44260D773CA584CC startNode; // 0x30
	::System::Single G; // 0x40
	::System::Single H; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E08C4A9CFB467C17___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void _MainAsync_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E08C4A9CFB467C17___C__DISPLAYCLASS3_0__MAINASYNC_B__0_OFFSET))(this);
	}
};

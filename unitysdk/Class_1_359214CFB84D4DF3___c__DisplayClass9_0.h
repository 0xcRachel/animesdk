#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_450;
class Class_1_359214CFB84D4DF3;
class Class_1_8C3AC9786B6764EF;
class Class_2_458E5D5F1916A1AE;

#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1109A2F0)
#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS9_0__STARTFORLUAHOTFIX_B__0_OFFSET UNITYSDK_OFFSET(0x1109A300)
#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS9_0__STARTFORLUAHOTFIX_B__1_OFFSET UNITYSDK_OFFSET(0x1109A320)

inline static constexpr unsigned int Class_1_359214CFB84D4DF3___c__DisplayClass9_0_TypeDefinitionIndex = 47089;

class Class_1_359214CFB84D4DF3___c__DisplayClass9_0 : public ::System::Object
{
public:
	::Class_1_359214CFB84D4DF3* __4__this; // 0x10
	::Class_2_458E5D5F1916A1AE* luaData; // 0x18
	::Class_1_8C3AC9786B6764EF* queue; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForLuaHotfix_b__0(::Class_0_16E4307DCC419505_450* prog)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_450*))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS9_0__STARTFORLUAHOTFIX_B__0_OFFSET))(this, prog);
	}

	::System::Void _StartForLuaHotfix_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS9_0__STARTFORLUAHOTFIX_B__1_OFFSET))(this);
	}
};

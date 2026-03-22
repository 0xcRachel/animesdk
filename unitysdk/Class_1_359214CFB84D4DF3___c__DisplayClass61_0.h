#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_42;
class Class_0_16E4307DCC419505_450;
class Class_0_16E4307DCC419505_452;
class Class_2_59664D23FCBEAD63;
class Class_2_974C6A58562BEDDD;
namespace System { class String; }

#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS61_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11098F60)
#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS61_0___MAKELOCALVERIFY_B__1_OFFSET UNITYSDK_OFFSET(0x11098F70)
#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS61_0___MAKELOCALVERIFY_B__2_OFFSET UNITYSDK_OFFSET(0x11099070)
#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS61_0___MAKELOCALVERIFY_B__5_OFFSET UNITYSDK_OFFSET(0x11099130)
#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS61_0___MAKELOCALVERIFY_B__6_OFFSET UNITYSDK_OFFSET(0x110992F0)
#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS61_0___MAKELOCALVERIFY_B__7_OFFSET UNITYSDK_OFFSET(0x110993B0)

inline static constexpr unsigned int Class_1_359214CFB84D4DF3___c__DisplayClass61_0_TypeDefinitionIndex = 47080;

class Class_1_359214CFB84D4DF3___c__DisplayClass61_0 : public ::System::Object
{
public:
	::Class_2_59664D23FCBEAD63* audioData; // 0x10
	::Class_2_974C6A58562BEDDD* videoData; // 0x18
	::System::String* stateLocalVerify; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS61_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __MakeLocalVerify_b__1(::Class_0_16E4307DCC419505_42* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_42*))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS61_0___MAKELOCALVERIFY_B__1_OFFSET))(this, e);
	}

	::System::Boolean __MakeLocalVerify_b__2(::Class_0_16E4307DCC419505_42* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_42*))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS61_0___MAKELOCALVERIFY_B__2_OFFSET))(this, e);
	}

	::System::Boolean __MakeLocalVerify_b__5(::Class_0_16E4307DCC419505_42* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_42*))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS61_0___MAKELOCALVERIFY_B__5_OFFSET))(this, e);
	}

	::System::Boolean __MakeLocalVerify_b__6(::Class_0_16E4307DCC419505_42* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_42*))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS61_0___MAKELOCALVERIFY_B__6_OFFSET))(this, e);
	}

	::System::Void __MakeLocalVerify_b__7(::Class_0_16E4307DCC419505_450* progress, ::Class_0_16E4307DCC419505_452* data, ::System::Object* obj, ::RPG::Client::ExeCode code)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS61_0___MAKELOCALVERIFY_B__7_OFFSET))(this, progress, data, obj, code);
	}
};

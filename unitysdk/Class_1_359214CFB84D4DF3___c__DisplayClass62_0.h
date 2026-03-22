#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_42;
class Class_0_16E4307DCC419505_450;
class Class_0_16E4307DCC419505_452;
class Class_2_458E5D5F1916A1AE;
class Class_2_59664D23FCBEAD63;
class Class_2_974C6A58562BEDDD;
namespace System { class String; }

#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS62_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11099570)
#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS62_0___MAKELOCALVERIFYDELAY_B__1_OFFSET UNITYSDK_OFFSET(0x11099580)
#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS62_0___MAKELOCALVERIFYDELAY_B__3_OFFSET UNITYSDK_OFFSET(0x11099640)
#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS62_0___MAKELOCALVERIFYDELAY_B__4_OFFSET UNITYSDK_OFFSET(0x11099800)
#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS62_0___MAKELOCALVERIFYDELAY_B__5_OFFSET UNITYSDK_OFFSET(0x110998C0)
#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS62_0___MAKELOCALVERIFYDELAY_B__6_OFFSET UNITYSDK_OFFSET(0x110998E0)

inline static constexpr unsigned int Class_1_359214CFB84D4DF3___c__DisplayClass62_0_TypeDefinitionIndex = 47081;

class Class_1_359214CFB84D4DF3___c__DisplayClass62_0 : public ::System::Object
{
public:
	::Class_2_59664D23FCBEAD63* audioData; // 0x10
	::Class_2_458E5D5F1916A1AE* luaData; // 0x18
	::Class_2_974C6A58562BEDDD* videoData; // 0x20
	::System::String* stateLocalVerify; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS62_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __MakeLocalVerifyDelay_b__1(::Class_0_16E4307DCC419505_42* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_42*))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS62_0___MAKELOCALVERIFYDELAY_B__1_OFFSET))(this, e);
	}

	::System::Boolean __MakeLocalVerifyDelay_b__3(::Class_0_16E4307DCC419505_42* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_42*))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS62_0___MAKELOCALVERIFYDELAY_B__3_OFFSET))(this, e);
	}

	::System::Boolean __MakeLocalVerifyDelay_b__4(::Class_0_16E4307DCC419505_42* e)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_42*))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS62_0___MAKELOCALVERIFYDELAY_B__4_OFFSET))(this, e);
	}

	::System::Void __MakeLocalVerifyDelay_b__5(::Class_0_16E4307DCC419505_450* _)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_450*))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS62_0___MAKELOCALVERIFYDELAY_B__5_OFFSET))(this, _);
	}

	::System::Void __MakeLocalVerifyDelay_b__6(::Class_0_16E4307DCC419505_450* progress, ::Class_0_16E4307DCC419505_452* data, ::System::Object* obj, ::RPG::Client::ExeCode code)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS62_0___MAKELOCALVERIFYDELAY_B__6_OFFSET))(this, progress, data, obj, code);
	}
};

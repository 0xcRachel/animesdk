#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_450;
class Class_1_3EA71EBCB5A3B1BA;
class Class_1_8C3AC9786B6764EF;
namespace System { class String; }

#define CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS0_0__ADDAPPLYPREDOWNLOAD_B__0_OFFSET UNITYSDK_OFFSET(0xA6B4F40)
#define CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS0_0__ADDAPPLYPREDOWNLOAD_B__1_OFFSET UNITYSDK_OFFSET(0xA6B4EA0)
#define CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS0_0__ADDAPPLYPREDOWNLOAD_B__2_OFFSET UNITYSDK_OFFSET(0xA6B4F80)
#define CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA6AF9B0)

inline static constexpr unsigned int Class_1_8C3AC9786B6764EF___c__DisplayClass0_0_TypeDefinitionIndex = 47122;

class Class_1_8C3AC9786B6764EF___c__DisplayClass0_0 : public ::System::Object
{
public:
	::Class_1_3EA71EBCB5A3B1BA* progress; // 0x10
	::Class_1_8C3AC9786B6764EF* __4__this; // 0x18
	::System::String* pathSrcRoot; // 0x20
	::System::String* pathDestRoot; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Void _AddApplyPredownload_b__1(::Class_0_16E4307DCC419505_450* prog)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_450*))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS0_0__ADDAPPLYPREDOWNLOAD_B__1_OFFSET))(this, prog);
	}

	::System::Void _AddApplyPredownload_b__0(::System::String* path)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS0_0__ADDAPPLYPREDOWNLOAD_B__0_OFFSET))(this, path);
	}

	::System::Void _AddApplyPredownload_b__2(::Class_0_16E4307DCC419505_450* prog)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_450*))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS0_0__ADDAPPLYPREDOWNLOAD_B__2_OFFSET))(this, prog);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_450;
class Class_0_16E4307DCC419505_452;
class Class_1_8C3AC9786B6764EF;

#define CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__0_OFFSET UNITYSDK_OFFSET(0xA6B5650)
#define CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__1_OFFSET UNITYSDK_OFFSET(0xA6B5720)
#define CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__2_OFFSET UNITYSDK_OFFSET(0xA6B5790)
#define CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA6B01D0)

inline static constexpr unsigned int Class_1_8C3AC9786B6764EF___c__DisplayClass7_0_TypeDefinitionIndex = 47127;

class Class_1_8C3AC9786B6764EF___c__DisplayClass7_0 : public ::System::Object
{
public:
	::Class_1_8C3AC9786B6764EF* __4__this; // 0x10
	::System::Int64 timeStart; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Void _AddMultiDownload_b__0(::Class_0_16E4307DCC419505_450* prog)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_450*))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__0_OFFSET))(this, prog);
	}

	::System::Void _AddMultiDownload_b__1(::Class_0_16E4307DCC419505_450* prog, ::Class_0_16E4307DCC419505_452* data, ::System::Object* item, ::RPG::Client::ExeCode code)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__1_OFFSET))(this, prog, data, item, code);
	}

	::System::Void _AddMultiDownload_b__2(::Class_0_16E4307DCC419505_450* prog)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_450*))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS7_0__ADDMULTIDOWNLOAD_B__2_OFFSET))(this, prog);
	}
};

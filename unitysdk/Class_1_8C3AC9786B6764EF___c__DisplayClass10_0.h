#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_42;
class Class_0_16E4307DCC419505_450;
class Class_0_16E4307DCC419505_452;
class Class_1_8C3AC9786B6764EF;
namespace RPG::Client { template <typename T> class DataActionProgress_1; }

#define CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS10_0__ADDPREVERIFY_B__0_OFFSET UNITYSDK_OFFSET(0xA6B5320)
#define CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS10_0__ADDPREVERIFY_B__1_OFFSET UNITYSDK_OFFSET(0xA6B5280)
#define CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA6B0940)

inline static constexpr unsigned int Class_1_8C3AC9786B6764EF___c__DisplayClass10_0_TypeDefinitionIndex = 47123;

class Class_1_8C3AC9786B6764EF___c__DisplayClass10_0 : public ::System::Object
{
public:
	::RPG::Client::DataActionProgress_1<::Class_0_16E4307DCC419505_42*>* progress; // 0x10
	::Class_1_8C3AC9786B6764EF* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}

	::System::Void _AddPreVerify_b__1(::Class_0_16E4307DCC419505_450* prog)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_450*))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS10_0__ADDPREVERIFY_B__1_OFFSET))(this, prog);
	}

	::System::Void _AddPreVerify_b__0(::Class_0_16E4307DCC419505_452* data, ::Class_0_16E4307DCC419505_42* block)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_452*, ::Class_0_16E4307DCC419505_42*))((::PBYTE)hIl2Cpp + CLASS_1_8C3AC9786B6764EF___C__DISPLAYCLASS10_0__ADDPREVERIFY_B__0_OFFSET))(this, data, block);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_450;
class Class_0_16E4307DCC419505_452;
class Class_1_359214CFB84D4DF3;
class Class_2_458E5D5F1916A1AE;
class Class_2_4F354829EBADAFFE;
class Class_2_7419679A7698613D;
class Class_2_7419679A7698613D_1;

#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS68_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11099E90)
#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS68_0___MAKEPATCHPROGRESS_B__0_OFFSET UNITYSDK_OFFSET(0x11099EA0)
#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS68_0___MAKEPATCHPROGRESS_B__1_OFFSET UNITYSDK_OFFSET(0x11099EE0)

inline static constexpr unsigned int Class_1_359214CFB84D4DF3___c__DisplayClass68_0_TypeDefinitionIndex = 47084;

class Class_1_359214CFB84D4DF3___c__DisplayClass68_0 : public ::System::Object
{
public:
	::Class_1_359214CFB84D4DF3* __4__this; // 0x10
	::Class_2_7419679A7698613D_1* designHPatch; // 0x18
	::Class_2_4F354829EBADAFFE* audioHPatch; // 0x20
	::Class_2_7419679A7698613D* blockHPatch; // 0x28
	::Class_2_458E5D5F1916A1AE* luaData; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS68_0__CTOR_OFFSET))(this);
	}

	::System::Void __MakePatchProgress_b__0(::Class_0_16E4307DCC419505_450* patch, ::Class_0_16E4307DCC419505_452* data, ::System::Object* obj, ::RPG::Client::ExeCode code)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS68_0___MAKEPATCHPROGRESS_B__0_OFFSET))(this, patch, data, obj, code);
	}

	::System::Void __MakePatchProgress_b__1(::Class_0_16E4307DCC419505_450* prog)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_450*))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS68_0___MAKEPATCHPROGRESS_B__1_OFFSET))(this, prog);
	}
};

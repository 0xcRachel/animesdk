#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_450;
class Class_0_16E4307DCC419505_452;
class Class_1_359214CFB84D4DF3;
class Class_2_4F354829EBADAFFE;
class Class_2_7419679A7698613D;

#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS14_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11097770)
#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS14_0___MAKEPREDOWNLOAD_B__0_OFFSET UNITYSDK_OFFSET(0x11097780)

inline static constexpr unsigned int Class_1_359214CFB84D4DF3___c__DisplayClass14_0_TypeDefinitionIndex = 47068;

class Class_1_359214CFB84D4DF3___c__DisplayClass14_0 : public ::System::Object
{
public:
	::Class_2_4F354829EBADAFFE* audioHPatch; // 0x10
	::Class_1_359214CFB84D4DF3* __4__this; // 0x18
	::Class_2_7419679A7698613D* blockHPatch; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS14_0__CTOR_OFFSET))(this);
	}

	::System::Void __MakePreDownload_b__0(::Class_0_16E4307DCC419505_450* patch, ::Class_0_16E4307DCC419505_452* data, ::System::Object* obj, ::RPG::Client::ExeCode code)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS14_0___MAKEPREDOWNLOAD_B__0_OFFSET))(this, patch, data, obj, code);
	}
};

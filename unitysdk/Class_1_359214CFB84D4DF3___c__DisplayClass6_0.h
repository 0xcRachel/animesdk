#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ExeCode.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_450;
class Class_0_16E4307DCC419505_452;
class Class_1_359214CFB84D4DF3;
class Class_2_4F354829EBADAFFE;

#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11099F70)
#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS6_0___MAKEAUDIOPACKPROGRESS_B__0_OFFSET UNITYSDK_OFFSET(0x11099F80)

inline static constexpr unsigned int Class_1_359214CFB84D4DF3___c__DisplayClass6_0_TypeDefinitionIndex = 47086;

class Class_1_359214CFB84D4DF3___c__DisplayClass6_0 : public ::System::Object
{
public:
	::Class_2_4F354829EBADAFFE* audioHPatch; // 0x10
	::Class_1_359214CFB84D4DF3* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Void __MakeAudioPackProgress_b__0(::Class_0_16E4307DCC419505_450* patch, ::Class_0_16E4307DCC419505_452* data, ::System::Object* obj, ::RPG::Client::ExeCode code)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_450*, ::Class_0_16E4307DCC419505_452*, ::System::Object*, ::RPG::Client::ExeCode))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS6_0___MAKEAUDIOPACKPROGRESS_B__0_OFFSET))(this, patch, data, obj, code);
	}
};

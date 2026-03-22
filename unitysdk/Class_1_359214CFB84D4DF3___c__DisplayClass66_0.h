#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_450;
class Class_1_359214CFB84D4DF3;
class Class_1_68CF822132788D19;
class Class_1_68CF822132788D19_1;
class Class_1_8C3AC9786B6764EF;
class Class_2_458E5D5F1916A1AE;
class Class_2_59664D23FCBEAD63;
namespace System { class String; }

#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS66_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11099B70)
#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS66_0__STARTPATCH_B__0_OFFSET UNITYSDK_OFFSET(0x11099B80)
#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS66_0__STARTPATCH_B__1_OFFSET UNITYSDK_OFFSET(0x11099D30)

inline static constexpr unsigned int Class_1_359214CFB84D4DF3___c__DisplayClass66_0_TypeDefinitionIndex = 47083;

class Class_1_359214CFB84D4DF3___c__DisplayClass66_0 : public ::System::Object
{
public:
	::Class_2_59664D23FCBEAD63* audioData; // 0x10
	::Class_1_68CF822132788D19* archiveDesign; // 0x18
	::Class_1_359214CFB84D4DF3* __4__this; // 0x20
	::Class_2_458E5D5F1916A1AE* luaData; // 0x28
	::System::String* stateLocalVerify; // 0x30
	::Class_1_8C3AC9786B6764EF* queue; // 0x38
	::Class_1_68CF822132788D19_1* archiveData; // 0x40
	::System::Boolean isDownloadedFullAssets; // 0x48
	::RPG::Client::TextID progressDescText; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS66_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartPatch_b__0(::Class_0_16E4307DCC419505_450* progress)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_450*))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS66_0__STARTPATCH_B__0_OFFSET))(this, progress);
	}

	::System::Void _StartPatch_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS66_0__STARTPATCH_B__1_OFFSET))(this);
	}
};

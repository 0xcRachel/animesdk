#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_450;
class Class_1_359214CFB84D4DF3;
class Class_1_68CF822132788D19;
class Class_1_68CF822132788D19_1;
class Class_1_8C3AC9786B6764EF;
class Class_2_458E5D5F1916A1AE;

#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11097870)
#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS18_0__STARTFORCLOUDUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0x11097880)
#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS18_0__STARTFORCLOUDUPDATE_B__1_OFFSET UNITYSDK_OFFSET(0x11097970)

inline static constexpr unsigned int Class_1_359214CFB84D4DF3___c__DisplayClass18_0_TypeDefinitionIndex = 47071;

class Class_1_359214CFB84D4DF3___c__DisplayClass18_0 : public ::System::Object
{
public:
	::Class_1_68CF822132788D19* archiveDesign; // 0x10
	::Class_1_359214CFB84D4DF3* __4__this; // 0x18
	::Class_1_8C3AC9786B6764EF* queue; // 0x20
	::Class_1_68CF822132788D19_1* archiveData; // 0x28
	::Class_2_458E5D5F1916A1AE* luaData; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForCloudUpdate_b__0(::Class_0_16E4307DCC419505_450* progress)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_450*))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS18_0__STARTFORCLOUDUPDATE_B__0_OFFSET))(this, progress);
	}

	::System::Void _StartForCloudUpdate_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS18_0__STARTFORCLOUDUPDATE_B__1_OFFSET))(this);
	}
};

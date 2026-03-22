#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_450;
class Class_1_359214CFB84D4DF3;
class Class_1_8C3AC9786B6764EF;
class Class_2_59664D23FCBEAD63;

#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11098DE0)
#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS5_0__STARTFORAUDIOPACKV2_B__0_OFFSET UNITYSDK_OFFSET(0x11098DF0)
#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS5_0__STARTFORAUDIOPACKV2_B__1_OFFSET UNITYSDK_OFFSET(0x11098E70)

inline static constexpr unsigned int Class_1_359214CFB84D4DF3___c__DisplayClass5_0_TypeDefinitionIndex = 47078;

class Class_1_359214CFB84D4DF3___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Class_1_359214CFB84D4DF3* __4__this; // 0x10
	::Class_1_8C3AC9786B6764EF* queue; // 0x18
	::Class_2_59664D23FCBEAD63* audioData; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForAudioPackV2_b__0(::Class_0_16E4307DCC419505_450* progress)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_450*))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS5_0__STARTFORAUDIOPACKV2_B__0_OFFSET))(this, progress);
	}

	::System::Void _StartForAudioPackV2_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS5_0__STARTFORAUDIOPACKV2_B__1_OFFSET))(this);
	}
};

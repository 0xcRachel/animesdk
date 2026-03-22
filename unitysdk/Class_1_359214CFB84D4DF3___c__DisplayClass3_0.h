#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_359214CFB84D4DF3;
class Class_1_8C3AC9786B6764EF;
class Class_2_59664D23FCBEAD63;

#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11098CD0)
#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS3_0__STARTFORAUDIOPACK_B__0_OFFSET UNITYSDK_OFFSET(0x11098CE0)

inline static constexpr unsigned int Class_1_359214CFB84D4DF3___c__DisplayClass3_0_TypeDefinitionIndex = 47074;

class Class_1_359214CFB84D4DF3___c__DisplayClass3_0 : public ::System::Object
{
public:
	::Class_2_59664D23FCBEAD63* audioData; // 0x10
	::Class_1_359214CFB84D4DF3* __4__this; // 0x18
	::Class_1_8C3AC9786B6764EF* queue; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForAudioPack_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS3_0__STARTFORAUDIOPACK_B__0_OFFSET))(this);
	}
};

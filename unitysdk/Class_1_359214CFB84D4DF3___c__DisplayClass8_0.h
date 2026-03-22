#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_450;
class Class_1_68CF822132788D19_1;
class Class_1_8C3AC9786B6764EF;
class Class_2_4F354829EBADAFFE;
class Class_2_59664D23FCBEAD63;

#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11099FE0)
#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS8_0__STARTFORAUDIOPACKSIZE_B__0_OFFSET UNITYSDK_OFFSET(0x11099FF0)

inline static constexpr unsigned int Class_1_359214CFB84D4DF3___c__DisplayClass8_0_TypeDefinitionIndex = 47088;

class Class_1_359214CFB84D4DF3___c__DisplayClass8_0 : public ::System::Object
{
public:
	::Class_2_4F354829EBADAFFE* audioHPatch; // 0x10
	::Class_1_8C3AC9786B6764EF* queue; // 0x18
	::Class_1_68CF822132788D19_1* resArchiveData; // 0x20
	::Class_2_59664D23FCBEAD63* audioData; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForAudioPackSize_b__0(::Class_0_16E4307DCC419505_450* progress)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_450*))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS8_0__STARTFORAUDIOPACKSIZE_B__0_OFFSET))(this, progress);
	}
};

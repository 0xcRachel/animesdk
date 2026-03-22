#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_450;
class Class_1_68CF822132788D19_1;
class Class_1_8C3AC9786B6764EF;
class Class_2_1839CBD9000EAF30;
class Class_2_4F354829EBADAFFE;
class Class_2_59664D23FCBEAD63;
class Class_2_7419679A7698613D;
class Class_2_7B2C949E9A2AA065;
class Class_2_974C6A58562BEDDD;

#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11096ED0)
#define CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS13_0__STARTFORDOWNLOADSIZE_B__0_OFFSET UNITYSDK_OFFSET(0x11096EE0)

inline static constexpr unsigned int Class_1_359214CFB84D4DF3___c__DisplayClass13_0_TypeDefinitionIndex = 47067;

class Class_1_359214CFB84D4DF3___c__DisplayClass13_0 : public ::System::Object
{
public:
	::Class_1_8C3AC9786B6764EF* queue; // 0x10
	::Class_2_7B2C949E9A2AA065* blockData; // 0x18
	::Class_2_1839CBD9000EAF30* rawData; // 0x20
	::Class_2_974C6A58562BEDDD* videoData; // 0x28
	::Class_2_7419679A7698613D* blockHPatch; // 0x30
	::Class_2_59664D23FCBEAD63* audioData; // 0x38
	::Class_1_68CF822132788D19_1* archiveData; // 0x40
	::Class_2_4F354829EBADAFFE* audioHPatch; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartForDownloadSize_b__0(::Class_0_16E4307DCC419505_450* progress)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_450*))((::PBYTE)hIl2Cpp + CLASS_1_359214CFB84D4DF3___C__DISPLAYCLASS13_0__STARTFORDOWNLOADSIZE_B__0_OFFSET))(this, progress);
	}
};

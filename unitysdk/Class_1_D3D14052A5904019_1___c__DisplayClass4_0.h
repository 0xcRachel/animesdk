#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_797;

#define CLASS_1_D3D14052A5904019_1___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x86A4290)
#define CLASS_1_D3D14052A5904019_1___C__DISPLAYCLASS4_0__GETICONDATALIST_B__0_OFFSET UNITYSDK_OFFSET(0x86A42C0)

inline static constexpr unsigned int Class_1_D3D14052A5904019_1___c__DisplayClass4_0_TypeDefinitionIndex = 57504;

class Class_1_D3D14052A5904019_1___c__DisplayClass4_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_797* iconData; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D3D14052A5904019_1___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _GetIconDataList_b__0(::Class_0_16E4307DCC419505_797* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_797*))((::PBYTE)hIl2Cpp + CLASS_1_D3D14052A5904019_1___C__DISPLAYCLASS4_0__GETICONDATALIST_B__0_OFFSET))(this, x);
	}
};

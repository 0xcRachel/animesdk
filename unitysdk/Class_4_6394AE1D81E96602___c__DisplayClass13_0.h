#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_63D18ECF87218619;
class Class_4_6394AE1D81E96602;

#define CLASS_4_6394AE1D81E96602___C__DISPLAYCLASS13_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1036D840)
#define CLASS_4_6394AE1D81E96602___C__DISPLAYCLASS13_0___FINISHRESET_B__0_OFFSET UNITYSDK_OFFSET(0x1036D980)

inline static constexpr unsigned int Class_4_6394AE1D81E96602___c__DisplayClass13_0_TypeDefinitionIndex = 60530;

class Class_4_6394AE1D81E96602___c__DisplayClass13_0 : public ::System::Object
{
public:
	::Class_1_63D18ECF87218619* moveBlackBoard; // 0x10
	::Class_4_6394AE1D81E96602* __4__this; // 0x18
	::UnityEngine::Vector3 resetPosition; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6394AE1D81E96602___C__DISPLAYCLASS13_0__CTOR_OFFSET))(this);
	}

	::System::Void __FinishReset_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_6394AE1D81E96602___C__DISPLAYCLASS13_0___FINISHRESET_B__0_OFFSET))(this);
	}
};

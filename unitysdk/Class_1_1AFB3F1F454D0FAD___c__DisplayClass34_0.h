#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1AFB3F1F454D0FAD;
namespace RPG::Client { class Stage; }

#define CLASS_1_1AFB3F1F454D0FAD___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0xFF2F5E0)
#define CLASS_1_1AFB3F1F454D0FAD___C__DISPLAYCLASS34_0___ONREGIONRESUMEUPDATE_B__0_OFFSET UNITYSDK_OFFSET(0xFF30320)

inline static constexpr unsigned int Class_1_1AFB3F1F454D0FAD___c__DisplayClass34_0_TypeDefinitionIndex = 47931;

class Class_1_1AFB3F1F454D0FAD___c__DisplayClass34_0 : public ::System::Object
{
public:
	::Class_1_1AFB3F1F454D0FAD* __4__this; // 0x10
	::RPG::Client::Stage* currentStage; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnRegionResumeUpdate_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1AFB3F1F454D0FAD___C__DISPLAYCLASS34_0___ONREGIONRESUMEUPDATE_B__0_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_044382BF73D8EA3B;
namespace RPG::Client { class CakeRaceEffectDataItem; }

#define CLASS_1_044382BF73D8EA3B___C__DISPLAYCLASS76_0__CTOR_OFFSET UNITYSDK_OFFSET(0x105049A0)
#define CLASS_1_044382BF73D8EA3B___C__DISPLAYCLASS76_0___SETUPFIGHTEFFECTSHOWTARGET_B__0_OFFSET UNITYSDK_OFFSET(0x10505BC0)
#define CLASS_1_044382BF73D8EA3B___C__DISPLAYCLASS76_0___SETUPFIGHTEFFECTSHOWTARGET_B__1_OFFSET UNITYSDK_OFFSET(0x10505C30)

inline static constexpr unsigned int Class_1_044382BF73D8EA3B___c__DisplayClass76_0_TypeDefinitionIndex = 63476;

class Class_1_044382BF73D8EA3B___c__DisplayClass76_0 : public ::System::Object
{
public:
	::RPG::Client::CakeRaceEffectDataItem* effectDataItem; // 0x10
	::Class_1_044382BF73D8EA3B* __4__this; // 0x18
	::System::Int32 effectIndex; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_044382BF73D8EA3B___C__DISPLAYCLASS76_0__CTOR_OFFSET))(this);
	}

	::System::Void __SetupFightEffectShowTarget_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_044382BF73D8EA3B___C__DISPLAYCLASS76_0___SETUPFIGHTEFFECTSHOWTARGET_B__0_OFFSET))(this);
	}

	::System::Void __SetupFightEffectShowTarget_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_044382BF73D8EA3B___C__DISPLAYCLASS76_0___SETUPFIGHTEFFECTSHOWTARGET_B__1_OFFSET))(this);
	}
};

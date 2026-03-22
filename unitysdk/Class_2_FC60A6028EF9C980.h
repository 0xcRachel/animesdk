#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D379DAD8E919E749.h"
#include "unitysdk/Class_1_D379DAD8E919E749_TriggerType.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenEffectSource.h"

class Class_0_16E4307DCC419505_897;
class Class_1_2DC2953593A057D7;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectResultData; }

#define CLASS_2_FC60A6028EF9C980_METHOD_2_2A1ECCAD60FE5D2E_OFFSET UNITYSDK_OFFSET(0x1026E8F0)
#define CLASS_2_FC60A6028EF9C980_METHOD_2_BC3E88C2C13CE89C_OFFSET UNITYSDK_OFFSET(0x1026E950)
#define CLASS_2_FC60A6028EF9C980__CTOR_OFFSET UNITYSDK_OFFSET(0x1026E940)

inline static constexpr unsigned int Class_2_FC60A6028EF9C980_TypeDefinitionIndex = 59879;

class Class_2_FC60A6028EF9C980 : public ::Class_1_D379DAD8E919E749
{
public:
	::System::Void _ctor(::Class_1_2DC2953593A057D7* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2DC2953593A057D7*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource))((::PBYTE)hIl2Cpp + CLASS_2_FC60A6028EF9C980__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_D379DAD8E919E749_TriggerType Method_2_2A1ECCAD60FE5D2E()
	{
		return ((::Class_1_D379DAD8E919E749_TriggerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_FC60A6028EF9C980_METHOD_2_2A1ECCAD60FE5D2E_OFFSET))(this);
	}

	::System::Void Method_2_BC3E88C2C13CE89C(::Class_0_16E4307DCC419505_897* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_897*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + CLASS_2_FC60A6028EF9C980_METHOD_2_BC3E88C2C13CE89C_OFFSET))(this, a1, a2);
	}
};

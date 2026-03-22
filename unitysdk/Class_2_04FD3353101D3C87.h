#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D379DAD8E919E749.h"
#include "unitysdk/Class_1_D379DAD8E919E749_TriggerType.h"
#include "unitysdk/RPG/Client/ActivityHipplen/ActivityHipplenEffectSource.h"

class Class_0_16E4307DCC419505_897;
class Class_1_2DC2953593A057D7;
namespace RPG::Client::ActivityHipplen { class ActivityHipplenEffectResultData; }

#define CLASS_2_04FD3353101D3C87_METHOD_2_14679EA733444E36_OFFSET UNITYSDK_OFFSET(0x10F7AB60)
#define CLASS_2_04FD3353101D3C87_METHOD_2_2A1ECCAD60FE5D2E_OFFSET UNITYSDK_OFFSET(0x10F7AB00)
#define CLASS_2_04FD3353101D3C87__CTOR_OFFSET UNITYSDK_OFFSET(0x10F7AB50)

inline static constexpr unsigned int Class_2_04FD3353101D3C87_TypeDefinitionIndex = 59877;

class Class_2_04FD3353101D3C87 : public ::Class_1_D379DAD8E919E749
{
public:
	::System::Void _ctor(::Class_1_2DC2953593A057D7* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2DC2953593A057D7*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectSource))((::PBYTE)hIl2Cpp + CLASS_2_04FD3353101D3C87__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_D379DAD8E919E749_TriggerType Method_2_2A1ECCAD60FE5D2E()
	{
		return ((::Class_1_D379DAD8E919E749_TriggerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04FD3353101D3C87_METHOD_2_2A1ECCAD60FE5D2E_OFFSET))(this);
	}

	::System::Void Method_2_14679EA733444E36(::Class_0_16E4307DCC419505_897* a1, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_897*, ::RPG::Client::ActivityHipplen::ActivityHipplenEffectResultData*))((::PBYTE)hIl2Cpp + CLASS_2_04FD3353101D3C87_METHOD_2_14679EA733444E36_OFFSET))(this, a1, a2);
	}
};

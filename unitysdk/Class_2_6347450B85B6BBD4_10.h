#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

class Class_1_B87B938F2BCBD84D;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_6347450B85B6BBD4_10_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x163A8320)
#define CLASS_2_6347450B85B6BBD4_10__CTOR_OFFSET UNITYSDK_OFFSET(0x163A8310)
#define CLASS_2_6347450B85B6BBD4_10___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x163A8D10)

inline static constexpr unsigned int Class_2_6347450B85B6BBD4_10_TypeDefinitionIndex = 70837;

class Class_2_6347450B85B6BBD4_10 : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* Field_2_0; // 0x20
	::Class_1_B87B938F2BCBD84D* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::Class_1_B87B938F2BCBD84D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::Class_1_B87B938F2BCBD84D*))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_10__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_10_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_10___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};

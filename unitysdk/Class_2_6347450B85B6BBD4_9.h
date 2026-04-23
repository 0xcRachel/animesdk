#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7ACCB923E979A908.h"

class Class_1_38EDFE5CA7B8A5B6;
namespace RPG::Client::ChenLingBattle { class ChenLingBattleGameContext; }

#define CLASS_2_6347450B85B6BBD4_9_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xED58AD0)
#define CLASS_2_6347450B85B6BBD4_9__CTOR_OFFSET UNITYSDK_OFFSET(0xED58C10)
#define CLASS_2_6347450B85B6BBD4_9___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xED58C20)

inline static constexpr unsigned int Class_2_6347450B85B6BBD4_9_TypeDefinitionIndex = 70024;

class Class_2_6347450B85B6BBD4_9 : public ::Class_1_7ACCB923E979A908
{
public:
	::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* Field_2_0; // 0x20
	::Class_1_38EDFE5CA7B8A5B6* Field_2_1; // 0x28

	::System::Void _ctor(::RPG::Client::ChenLingBattle::ChenLingBattleGameContext* a1, ::Class_1_38EDFE5CA7B8A5B6* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::ChenLingBattle::ChenLingBattleGameContext*, ::Class_1_38EDFE5CA7B8A5B6*))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_9__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_9_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6347450B85B6BBD4_9___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};

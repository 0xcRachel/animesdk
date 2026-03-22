#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"
#include "unitysdk/RPG/GameCore/BattleResultState.h"

class Class_0_16E4307DCC419505_347;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitAndProcessBattleResult; }
namespace System::Collections { class IEnumerator; }

#define CLASS_2_C53551EA56D92DA8_DISPOSE_OFFSET UNITYSDK_OFFSET(0x105E2A90)
#define CLASS_2_C53551EA56D92DA8_METHOD_2_605C677557F96336_OFFSET UNITYSDK_OFFSET(0x105E3050)
#define CLASS_2_C53551EA56D92DA8_METHOD_2_FABE55A1774E45A1_OFFSET UNITYSDK_OFFSET(0x105E31C0)
#define CLASS_2_C53551EA56D92DA8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x105E2B60)
#define CLASS_2_C53551EA56D92DA8_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x105E2D90)
#define CLASS_2_C53551EA56D92DA8_TICK_OFFSET UNITYSDK_OFFSET(0x105E2E70)
#define CLASS_2_C53551EA56D92DA8__CTOR_OFFSET UNITYSDK_OFFSET(0x105E2A70)

inline static constexpr unsigned int Class_2_C53551EA56D92DA8_TypeDefinitionIndex = 46442;

class Class_2_C53551EA56D92DA8 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::WaitAndProcessBattleResult* Field_2_0; // 0x20
	::System::Collections::IEnumerator* Field_2_4; // 0x28
	::System::Collections::IEnumerator* Field_2_3; // 0x30
	::System::Boolean Field_2_2; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitAndProcessBattleResult* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitAndProcessBattleResult*))((::PBYTE)hIl2Cpp + CLASS_2_C53551EA56D92DA8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C53551EA56D92DA8_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C53551EA56D92DA8_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C53551EA56D92DA8_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C53551EA56D92DA8_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_605C677557F96336(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_C53551EA56D92DA8_METHOD_2_605C677557F96336_OFFSET))(this, a1);
	}

	::System::Void Method_2_FABE55A1774E45A1(::RPG::GameCore::BattleResultState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleResultState))((::PBYTE)hIl2Cpp + CLASS_2_C53551EA56D92DA8_METHOD_2_FABE55A1774E45A1_OFFSET))(this, a1);
	}
};

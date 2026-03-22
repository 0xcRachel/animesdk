#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class AdventureMonsterTriggerMoveToTarget; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_AB5A440C306EE6C0_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10BC47E0)
#define CLASS_2_AB5A440C306EE6C0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10BC4820)
#define CLASS_2_AB5A440C306EE6C0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10BC4B20)
#define CLASS_2_AB5A440C306EE6C0_TICK_OFFSET UNITYSDK_OFFSET(0x10BC4BB0)
#define CLASS_2_AB5A440C306EE6C0__CTOR_OFFSET UNITYSDK_OFFSET(0x10BC47D0)

inline static constexpr unsigned int Class_2_AB5A440C306EE6C0_TypeDefinitionIndex = 45627;

class Class_2_AB5A440C306EE6C0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::AdventureMonsterTriggerMoveToTarget* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdventureMonsterTriggerMoveToTarget* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdventureMonsterTriggerMoveToTarget*))((::PBYTE)hIl2Cpp + CLASS_2_AB5A440C306EE6C0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB5A440C306EE6C0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB5A440C306EE6C0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB5A440C306EE6C0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_AB5A440C306EE6C0_TICK_OFFSET))(this, a1);
	}
};

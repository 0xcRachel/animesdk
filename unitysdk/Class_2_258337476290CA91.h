#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class MonopolyCheckShouldSettle; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_258337476290CA91_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8742D20)
#define CLASS_2_258337476290CA91_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8742AF0)
#define CLASS_2_258337476290CA91_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8742CD0)
#define CLASS_2_258337476290CA91_TICK_OFFSET UNITYSDK_OFFSET(0x8742DC0)
#define CLASS_2_258337476290CA91__CTOR_OFFSET UNITYSDK_OFFSET(0x87429F0)

inline static constexpr unsigned int Class_2_258337476290CA91_TypeDefinitionIndex = 45889;

class Class_2_258337476290CA91 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_BCCE950C2E8DF1F0* Field_2_2; // 0x18
	::RPG::GameCore::TaskContext* Field_2_0; // 0x20
	::RPG::GameCore::MonopolyCheckShouldSettle* Field_2_1; // 0x28
	::Class_3_BCCE950C2E8DF1F0* Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyCheckShouldSettle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyCheckShouldSettle*))((::PBYTE)hIl2Cpp + CLASS_2_258337476290CA91__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_258337476290CA91_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_258337476290CA91_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_258337476290CA91_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_258337476290CA91_TICK_OFFSET))(this, a1);
	}
};

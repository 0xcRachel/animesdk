#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerTurnPage; }

#define CLASS_2_26A47E623785ED46_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10CA2040)
#define CLASS_2_26A47E623785ED46_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10CA2080)
#define CLASS_2_26A47E623785ED46_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x10CA21B0)
#define CLASS_2_26A47E623785ED46_TICK_OFFSET UNITYSDK_OFFSET(0x10CA2200)
#define CLASS_2_26A47E623785ED46__CTOR_OFFSET UNITYSDK_OFFSET(0x10CA2030)

inline static constexpr unsigned int Class_2_26A47E623785ED46_TypeDefinitionIndex = 51417;

class Class_2_26A47E623785ED46 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::TriggerTurnPage* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerTurnPage* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerTurnPage*))((::PBYTE)hIl2Cpp + CLASS_2_26A47E623785ED46__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26A47E623785ED46_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26A47E623785ED46_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_26A47E623785ED46_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_26A47E623785ED46_TICK_OFFSET))(this, a1);
	}
};

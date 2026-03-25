#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggeBattleLoadFinishPerformance; }

#define CLASS_2_6DD697EB2741B8D0_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF376650)
#define CLASS_2_6DD697EB2741B8D0_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF376730)
#define CLASS_2_6DD697EB2741B8D0_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF3766C0)
#define CLASS_2_6DD697EB2741B8D0_TICK_OFFSET UNITYSDK_OFFSET(0xF376BF0)
#define CLASS_2_6DD697EB2741B8D0__CTOR_OFFSET UNITYSDK_OFFSET(0xF376640)

inline static constexpr unsigned int Class_2_6DD697EB2741B8D0_TypeDefinitionIndex = 44625;

class Class_2_6DD697EB2741B8D0 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_5775A4FEC79026BC* Field_2_2; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::GameCore::TriggeBattleLoadFinishPerformance* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggeBattleLoadFinishPerformance* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggeBattleLoadFinishPerformance*))((::PBYTE)hIl2Cpp + CLASS_2_6DD697EB2741B8D0__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DD697EB2741B8D0_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DD697EB2741B8D0_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6DD697EB2741B8D0_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_6DD697EB2741B8D0_TICK_OFFSET))(this, a1);
	}
};

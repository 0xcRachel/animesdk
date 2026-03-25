#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::GameCore { class ChangeChallengeBuff; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_1C5A1FFE688EDC9C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8CA2650)
#define CLASS_2_1C5A1FFE688EDC9C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8CA2690)
#define CLASS_2_1C5A1FFE688EDC9C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8CA2790)
#define CLASS_2_1C5A1FFE688EDC9C_TICK_OFFSET UNITYSDK_OFFSET(0x8CA27E0)
#define CLASS_2_1C5A1FFE688EDC9C__CTOR_OFFSET UNITYSDK_OFFSET(0x8CA2640)

inline static constexpr unsigned int Class_2_1C5A1FFE688EDC9C_TypeDefinitionIndex = 42627;

class Class_2_1C5A1FFE688EDC9C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::ChangeChallengeBuff* Field_2_0; // 0x20

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ChangeChallengeBuff* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ChangeChallengeBuff*))((::PBYTE)hIl2Cpp + CLASS_2_1C5A1FFE688EDC9C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C5A1FFE688EDC9C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C5A1FFE688EDC9C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1C5A1FFE688EDC9C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_1C5A1FFE688EDC9C_TICK_OFFSET))(this, a1);
	}
};

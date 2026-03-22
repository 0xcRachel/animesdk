#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_71327659F4088CD0;
namespace RPG::GameCore { class AdvChaseBailu; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_7B3BB19EFAF2968B_DISPOSE_OFFSET UNITYSDK_OFFSET(0x83FCB10)
#define CLASS_2_7B3BB19EFAF2968B_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x83FCBC0)
#define CLASS_2_7B3BB19EFAF2968B_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x83FCB80)
#define CLASS_2_7B3BB19EFAF2968B_TICK_OFFSET UNITYSDK_OFFSET(0x83FD000)
#define CLASS_2_7B3BB19EFAF2968B__CTOR_OFFSET UNITYSDK_OFFSET(0x83FCB00)

inline static constexpr unsigned int Class_2_7B3BB19EFAF2968B_TypeDefinitionIndex = 41314;

class Class_2_7B3BB19EFAF2968B : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_1; // 0x18
	::RPG::GameCore::AdvChaseBailu* Field_2_0; // 0x20
	::Class_2_71327659F4088CD0* Field_2_2; // 0x28
	::RPG::GameCore::GameEntity* Field_2_3; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvChaseBailu* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvChaseBailu*))((::PBYTE)hIl2Cpp + CLASS_2_7B3BB19EFAF2968B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B3BB19EFAF2968B_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B3BB19EFAF2968B_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7B3BB19EFAF2968B_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_7B3BB19EFAF2968B_TICK_OFFSET))(this, a1);
	}
};

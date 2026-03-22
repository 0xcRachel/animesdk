#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class MonopolyCheckAtFinalPos; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_58E1212704C5A399_DISPOSE_OFFSET UNITYSDK_OFFSET(0x103A6860)
#define CLASS_2_58E1212704C5A399_METHOD_2_3AC572023154FC7C_OFFSET UNITYSDK_OFFSET(0x103A6310)
#define CLASS_2_58E1212704C5A399_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x103A61B0)
#define CLASS_2_58E1212704C5A399_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x103A6810)
#define CLASS_2_58E1212704C5A399_TICK_OFFSET UNITYSDK_OFFSET(0x103A6900)
#define CLASS_2_58E1212704C5A399__CTOR_OFFSET UNITYSDK_OFFSET(0x103A60B0)

inline static constexpr unsigned int Class_2_58E1212704C5A399_TypeDefinitionIndex = 45887;

class Class_2_58E1212704C5A399 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TaskContext* Field_2_0; // 0x18
	::Class_3_BCCE950C2E8DF1F0* Field_2_3; // 0x20
	::RPG::GameCore::MonopolyCheckAtFinalPos* Field_2_1; // 0x28
	::Class_3_BCCE950C2E8DF1F0* Field_2_2; // 0x30

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyCheckAtFinalPos* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyCheckAtFinalPos*))((::PBYTE)hIl2Cpp + CLASS_2_58E1212704C5A399__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58E1212704C5A399_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Boolean Method_2_3AC572023154FC7C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58E1212704C5A399_METHOD_2_3AC572023154FC7C_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58E1212704C5A399_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_58E1212704C5A399_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_58E1212704C5A399_TICK_OFFSET))(this, a1);
	}
};

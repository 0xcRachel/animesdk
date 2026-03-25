#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_3_5775A4FEC79026BC;
namespace RPG::GameCore { class ProcessOpInSkillExecuting; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E3D05CB5EA3E1AB4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x105D4510)
#define CLASS_2_E3D05CB5EA3E1AB4_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x105D4580)
#define CLASS_2_E3D05CB5EA3E1AB4_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x105D4820)
#define CLASS_2_E3D05CB5EA3E1AB4_TICK_OFFSET UNITYSDK_OFFSET(0x105D4870)
#define CLASS_2_E3D05CB5EA3E1AB4__CTOR_OFFSET UNITYSDK_OFFSET(0x105D4490)

inline static constexpr unsigned int Class_2_E3D05CB5EA3E1AB4_TypeDefinitionIndex = 44240;

class Class_2_E3D05CB5EA3E1AB4 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_3_5775A4FEC79026BC* Field_2_1; // 0x18
	::RPG::GameCore::TaskContext* Field_2_2; // 0x20
	::RPG::GameCore::ProcessOpInSkillExecuting* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ProcessOpInSkillExecuting* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ProcessOpInSkillExecuting*))((::PBYTE)hIl2Cpp + CLASS_2_E3D05CB5EA3E1AB4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3D05CB5EA3E1AB4_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3D05CB5EA3E1AB4_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E3D05CB5EA3E1AB4_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E3D05CB5EA3E1AB4_TICK_OFFSET))(this, a1);
	}
};

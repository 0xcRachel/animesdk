#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_2_0B89705807D46FAE;
namespace RPG::GameCore { class StackScepterProperty; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_592503346E89D2AC_METHOD_3_125126BF7ACBDD51_OFFSET UNITYSDK_OFFSET(0xFE676A0)
#define CLASS_3_592503346E89D2AC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFE674E0)
#define CLASS_3_592503346E89D2AC__CTOR_OFFSET UNITYSDK_OFFSET(0xFE674B0)

inline static constexpr unsigned int Class_3_592503346E89D2AC_TypeDefinitionIndex = 43518;

class Class_3_592503346E89D2AC : public ::RPG::GameCore::ImmediateTaskBase_1<::RPG::GameCore::StackScepterProperty*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackScepterProperty* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackScepterProperty*))((::PBYTE)hIl2Cpp + CLASS_3_592503346E89D2AC__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_592503346E89D2AC_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_3_125126BF7ACBDD51(::Class_2_0B89705807D46FAE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0B89705807D46FAE*))((::PBYTE)hIl2Cpp + CLASS_3_592503346E89D2AC_METHOD_3_125126BF7ACBDD51_OFFSET))(this, a1);
	}
};

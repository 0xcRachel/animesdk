#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_E5B3F53E2AEB0226;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_41_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10369830)
#define CLASS_3_27518451A20BB161_41__CTOR_OFFSET UNITYSDK_OFFSET(0x10369800)

inline static constexpr unsigned int Class_3_27518451A20BB161_41_TypeDefinitionIndex = 41763;

class Class_3_27518451A20BB161_41 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_E5B3F53E2AEB0226*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_E5B3F53E2AEB0226* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_E5B3F53E2AEB0226*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_41__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_41_ONTASKBEGIN_OFFSET))(this);
	}
};

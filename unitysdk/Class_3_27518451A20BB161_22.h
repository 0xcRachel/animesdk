#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_5F9EE327CC8A2E3C;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_22_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEEA7DE0)
#define CLASS_3_27518451A20BB161_22__CTOR_OFFSET UNITYSDK_OFFSET(0xEEA7DB0)

inline static constexpr unsigned int Class_3_27518451A20BB161_22_TypeDefinitionIndex = 41721;

class Class_3_27518451A20BB161_22 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_5F9EE327CC8A2E3C*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_5F9EE327CC8A2E3C* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_5F9EE327CC8A2E3C*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_22__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_22_ONTASKBEGIN_OFFSET))(this);
	}
};

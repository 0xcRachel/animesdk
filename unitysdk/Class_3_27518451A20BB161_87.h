#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_51193B5F207F2762;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_87_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x105557C0)
#define CLASS_3_27518451A20BB161_87__CTOR_OFFSET UNITYSDK_OFFSET(0x10555790)

inline static constexpr unsigned int Class_3_27518451A20BB161_87_TypeDefinitionIndex = 46212;

class Class_3_27518451A20BB161_87 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_51193B5F207F2762*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_51193B5F207F2762* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_51193B5F207F2762*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_87__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_87_ONTASKBEGIN_OFFSET))(this);
	}
};

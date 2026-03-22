#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_57D8861406E5C3E7;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_62_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9EF6B90)
#define CLASS_3_27518451A20BB161_62__CTOR_OFFSET UNITYSDK_OFFSET(0x9EF6B60)

inline static constexpr unsigned int Class_3_27518451A20BB161_62_TypeDefinitionIndex = 42975;

class Class_3_27518451A20BB161_62 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_57D8861406E5C3E7*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_57D8861406E5C3E7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_57D8861406E5C3E7*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_62__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_62_ONTASKBEGIN_OFFSET))(this);
	}
};

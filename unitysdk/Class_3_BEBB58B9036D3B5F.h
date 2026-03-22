#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_2_6BFAFA494F2D1E4B;
namespace RPG::GameCore { class ST_ByExitCombat; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_BEBB58B9036D3B5F_EVALUATE_OFFSET UNITYSDK_OFFSET(0x9ED5D70)
#define CLASS_3_BEBB58B9036D3B5F__CTOR_OFFSET UNITYSDK_OFFSET(0x9ED5D10)

inline static constexpr unsigned int Class_3_BEBB58B9036D3B5F_TypeDefinitionIndex = 41163;

class Class_3_BEBB58B9036D3B5F : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ST_ByExitCombat*>
{
public:
	::Class_2_6BFAFA494F2D1E4B* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_ByExitCombat* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_ByExitCombat*))((::PBYTE)hIl2Cpp + CLASS_3_BEBB58B9036D3B5F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_BEBB58B9036D3B5F_EVALUATE_OFFSET))(this);
	}
};

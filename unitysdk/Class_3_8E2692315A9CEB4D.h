#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByIsBattleReStart; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8E2692315A9CEB4D_EVALUATE_OFFSET UNITYSDK_OFFSET(0xACB2B80)
#define CLASS_3_8E2692315A9CEB4D__CTOR_OFFSET UNITYSDK_OFFSET(0xACB2B50)

inline static constexpr unsigned int Class_3_8E2692315A9CEB4D_TypeDefinitionIndex = 42662;

class Class_3_8E2692315A9CEB4D : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByIsBattleReStart*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByIsBattleReStart* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByIsBattleReStart*))((::PBYTE)hIl2Cpp + CLASS_3_8E2692315A9CEB4D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8E2692315A9CEB4D_EVALUATE_OFFSET))(this);
	}
};

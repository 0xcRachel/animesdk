#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchMazeBuffTargets; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_DAECD3DACE9BC013_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1024DCC0)
#define CLASS_3_DAECD3DACE9BC013__CTOR_OFFSET UNITYSDK_OFFSET(0x1024DC20)

inline static constexpr unsigned int Class_3_DAECD3DACE9BC013_TypeDefinitionIndex = 46812;

class Class_3_DAECD3DACE9BC013 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchMazeBuffTargets*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchMazeBuffTargets* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchMazeBuffTargets*))((::PBYTE)hIl2Cpp + CLASS_3_DAECD3DACE9BC013__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_DAECD3DACE9BC013_EVALUATE_OFFSET))(this, a1, a2);
	}
};

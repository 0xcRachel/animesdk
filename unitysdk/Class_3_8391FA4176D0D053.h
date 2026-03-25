#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchDialogueEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_8391FA4176D0D053_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11447BF0)
#define CLASS_3_8391FA4176D0D053__CTOR_OFFSET UNITYSDK_OFFSET(0x11447B50)

inline static constexpr unsigned int Class_3_8391FA4176D0D053_TypeDefinitionIndex = 47761;

class Class_3_8391FA4176D0D053 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchDialogueEntity*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchDialogueEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchDialogueEntity*))((::PBYTE)hIl2Cpp + CLASS_3_8391FA4176D0D053__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_8391FA4176D0D053_EVALUATE_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAdvPillarPuzzleInteractingPillar; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_6733F53062B6A15B_EVALUATE_OFFSET UNITYSDK_OFFSET(0x86A6310)
#define CLASS_3_6733F53062B6A15B__CTOR_OFFSET UNITYSDK_OFFSET(0x86A6270)

inline static constexpr unsigned int Class_3_6733F53062B6A15B_TypeDefinitionIndex = 46687;

class Class_3_6733F53062B6A15B : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAdvPillarPuzzleInteractingPillar*))((::PBYTE)hIl2Cpp + CLASS_3_6733F53062B6A15B__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_6733F53062B6A15B_EVALUATE_OFFSET))(this, a1, a2);
	}
};

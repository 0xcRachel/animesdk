#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchChessBase; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_188ACC25FF765C39_EVALUATE_OFFSET UNITYSDK_OFFSET(0xAC9B3E0)
#define CLASS_3_188ACC25FF765C39__CTOR_OFFSET UNITYSDK_OFFSET(0xAC9B360)

inline static constexpr unsigned int Class_3_188ACC25FF765C39_TypeDefinitionIndex = 44130;

class Class_3_188ACC25FF765C39 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchChessBase*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchChessBase* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchChessBase*))((::PBYTE)hIl2Cpp + CLASS_3_188ACC25FF765C39__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_188ACC25FF765C39_EVALUATE_OFFSET))(this, a1, a2);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GroupFetchLocalTarget; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_10394416B7951E16_EVALUATE_OFFSET UNITYSDK_OFFSET(0x84F88C0)
#define CLASS_3_10394416B7951E16__CTOR_OFFSET UNITYSDK_OFFSET(0x84F8840)

inline static constexpr unsigned int Class_3_10394416B7951E16_TypeDefinitionIndex = 46688;

class Class_3_10394416B7951E16 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::GroupFetchLocalTarget*>
{
public:
	::System::Void _ctor(::RPG::GameCore::GroupFetchLocalTarget* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GroupFetchLocalTarget*))((::PBYTE)hIl2Cpp + CLASS_3_10394416B7951E16__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_10394416B7951E16_EVALUATE_OFFSET))(this, a1, a2);
	}
};

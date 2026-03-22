#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAbilityGroup; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_DCAED60E60010D85_3_EVALUATE_OFFSET UNITYSDK_OFFSET(0x10C5C940)
#define CLASS_3_DCAED60E60010D85_3__CTOR_OFFSET UNITYSDK_OFFSET(0x10C5C8C0)

inline static constexpr unsigned int Class_3_DCAED60E60010D85_3_TypeDefinitionIndex = 46793;

class Class_3_DCAED60E60010D85_3 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAbilityGroup*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAbilityGroup* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAbilityGroup*))((::PBYTE)hIl2Cpp + CLASS_3_DCAED60E60010D85_3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_DCAED60E60010D85_3_EVALUATE_OFFSET))(this, a1, a2);
	}
};

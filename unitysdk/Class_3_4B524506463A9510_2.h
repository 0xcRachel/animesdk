#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluatorImpl_1.h"

namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetFetchAidProtector; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_4B524506463A9510_2_EVALUATE_OFFSET UNITYSDK_OFFSET(0x10B1E660)
#define CLASS_3_4B524506463A9510_2__CTOR_OFFSET UNITYSDK_OFFSET(0x10B1E5E0)

inline static constexpr unsigned int Class_3_4B524506463A9510_2_TypeDefinitionIndex = 46718;

class Class_3_4B524506463A9510_2 : public ::RPG::GameCore::TargetEvaluatorImpl_1<::RPG::GameCore::TargetFetchAidProtector*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TargetFetchAidProtector* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TargetFetchAidProtector*))((::PBYTE)hIl2Cpp + CLASS_3_4B524506463A9510_2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Evaluate(::RPG::GameCore::TaskContext* a1, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + CLASS_3_4B524506463A9510_2_EVALUATE_OFFSET))(this, a1, a2);
	}
};

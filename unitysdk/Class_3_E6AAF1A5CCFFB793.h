#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

namespace RPG::GameCore { class ByCompareSwitchHandGestureType; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_E6AAF1A5CCFFB793_EVALUATE_OFFSET UNITYSDK_OFFSET(0x943FCC0)
#define CLASS_3_E6AAF1A5CCFFB793__CTOR_OFFSET UNITYSDK_OFFSET(0x943FC90)

inline static constexpr unsigned int Class_3_E6AAF1A5CCFFB793_TypeDefinitionIndex = 41958;

class Class_3_E6AAF1A5CCFFB793 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByCompareSwitchHandGestureType*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByCompareSwitchHandGestureType* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByCompareSwitchHandGestureType*))((::PBYTE)hIl2Cpp + CLASS_3_E6AAF1A5CCFFB793__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E6AAF1A5CCFFB793_EVALUATE_OFFSET))(this);
	}
};

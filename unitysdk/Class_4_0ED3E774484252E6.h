#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_75DBBBC880985ABC.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UniversalHotFixPredicateA; }

#define CLASS_4_0ED3E774484252E6_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1086BF80)
#define CLASS_4_0ED3E774484252E6__CTOR_OFFSET UNITYSDK_OFFSET(0x1086BF00)
#define CLASS_4_0ED3E774484252E6___IFIXBASEPROXY_EVALUATE_OFFSET UNITYSDK_OFFSET(0x1086BFC0)

inline static constexpr unsigned int Class_4_0ED3E774484252E6_TypeDefinitionIndex = 51439;

class Class_4_0ED3E774484252E6 : public ::Class_3_75DBBBC880985ABC
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UniversalHotFixPredicateA* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UniversalHotFixPredicateA*))((::PBYTE)hIl2Cpp + CLASS_4_0ED3E774484252E6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0ED3E774484252E6_EVALUATE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_0ED3E774484252E6___IFIXBASEPROXY_EVALUATE_OFFSET))(this);
	}
};

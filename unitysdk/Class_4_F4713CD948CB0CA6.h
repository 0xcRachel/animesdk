#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_0A374111E3D818FB.h"

namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UniversalHotFixPredicateC; }

#define CLASS_4_F4713CD948CB0CA6_EVALUATE_OFFSET UNITYSDK_OFFSET(0x10C82980)
#define CLASS_4_F4713CD948CB0CA6__CTOR_OFFSET UNITYSDK_OFFSET(0x10C82900)
#define CLASS_4_F4713CD948CB0CA6___IFIXBASEPROXY_EVALUATE_OFFSET UNITYSDK_OFFSET(0x10C829C0)

inline static constexpr unsigned int Class_4_F4713CD948CB0CA6_TypeDefinitionIndex = 43641;

class Class_4_F4713CD948CB0CA6 : public ::Class_3_0A374111E3D818FB
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UniversalHotFixPredicateC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UniversalHotFixPredicateC*))((::PBYTE)hIl2Cpp + CLASS_4_F4713CD948CB0CA6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F4713CD948CB0CA6_EVALUATE_OFFSET))(this);
	}

	::System::Boolean __iFixBaseProxy_Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_F4713CD948CB0CA6___IFIXBASEPROXY_EVALUATE_OFFSET))(this);
	}
};

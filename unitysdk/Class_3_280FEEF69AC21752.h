#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateTaskBase_1.h"

class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class ByAnd; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_280FEEF69AC21752_DISPOSE_OFFSET UNITYSDK_OFFSET(0x112074A0)
#define CLASS_3_280FEEF69AC21752_EVALUATE_OFFSET UNITYSDK_OFFSET(0x11207430)
#define CLASS_3_280FEEF69AC21752__CTOR_OFFSET UNITYSDK_OFFSET(0x112073A0)
#define CLASS_3_280FEEF69AC21752___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11207510)

inline static constexpr unsigned int Class_3_280FEEF69AC21752_TypeDefinitionIndex = 42509;

class Class_3_280FEEF69AC21752 : public ::RPG::GameCore::PredicateTaskBase_1<::RPG::GameCore::ByAnd*>
{
public:
	::Class_3_BCCE950C2E8DF1F0* Field_3_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByAnd* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByAnd*))((::PBYTE)hIl2Cpp + CLASS_3_280FEEF69AC21752__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Evaluate()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_280FEEF69AC21752_EVALUATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_280FEEF69AC21752_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_280FEEF69AC21752___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

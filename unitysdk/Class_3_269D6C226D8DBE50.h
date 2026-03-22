#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvWaitingTaskBase_1.h"

class Class_4_972F70008679A6FF;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_269D6C226D8DBE50_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x920D720)
#define CLASS_3_269D6C226D8DBE50__CTOR_OFFSET UNITYSDK_OFFSET(0x920D6B0)
#define CLASS_3_269D6C226D8DBE50___IFIXBASEPROXY_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x920D940)

inline static constexpr unsigned int Class_3_269D6C226D8DBE50_TypeDefinitionIndex = 42238;

class Class_3_269D6C226D8DBE50 : public ::RPG::GameCore::AdvWaitingTaskBase_1<::Class_4_972F70008679A6FF*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_4_972F70008679A6FF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_4_972F70008679A6FF*))((::PBYTE)hIl2Cpp + CLASS_3_269D6C226D8DBE50__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_269D6C226D8DBE50_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_269D6C226D8DBE50___IFIXBASEPROXY_ONTASKBEGIN_OFFSET))(this);
	}
};

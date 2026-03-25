#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_728535E13DFDCE0D;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_68_DISPOSE_OFFSET UNITYSDK_OFFSET(0x108F04B0)
#define CLASS_3_27518451A20BB161_68_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x108F04F0)
#define CLASS_3_27518451A20BB161_68__CTOR_OFFSET UNITYSDK_OFFSET(0x108F0480)
#define CLASS_3_27518451A20BB161_68___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x108F06B0)

inline static constexpr unsigned int Class_3_27518451A20BB161_68_TypeDefinitionIndex = 44182;

class Class_3_27518451A20BB161_68 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_728535E13DFDCE0D*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_728535E13DFDCE0D* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_728535E13DFDCE0D*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_68__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_68_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_68_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_68___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

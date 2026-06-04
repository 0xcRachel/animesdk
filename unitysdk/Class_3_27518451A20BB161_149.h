#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_7C231CE412973E1A;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_149_DISPOSE_OFFSET UNITYSDK_OFFSET(0x149D41C0)
#define CLASS_3_27518451A20BB161_149_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x149D4200)
#define CLASS_3_27518451A20BB161_149__CTOR_OFFSET UNITYSDK_OFFSET(0x149D4190)
#define CLASS_3_27518451A20BB161_149___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x149D4500)

inline static constexpr unsigned int Class_3_27518451A20BB161_149_TypeDefinitionIndex = 51842;

class Class_3_27518451A20BB161_149 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_7C231CE412973E1A*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_7C231CE412973E1A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_7C231CE412973E1A*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_149__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_149_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_149_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_149___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

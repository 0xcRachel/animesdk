#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_97BB4FA12F9980DF;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_33_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10489D60)
#define CLASS_3_27518451A20BB161_33_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10489DA0)
#define CLASS_3_27518451A20BB161_33_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1048A020)
#define CLASS_3_27518451A20BB161_33_TICK_OFFSET UNITYSDK_OFFSET(0x1048A070)
#define CLASS_3_27518451A20BB161_33__CTOR_OFFSET UNITYSDK_OFFSET(0x10489D30)
#define CLASS_3_27518451A20BB161_33___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1048A0D0)
#define CLASS_3_27518451A20BB161_33___IFIXBASEPROXY_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1048A110)
#define CLASS_3_27518451A20BB161_33___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x1048A160)

inline static constexpr unsigned int Class_3_27518451A20BB161_33_TypeDefinitionIndex = 41732;

class Class_3_27518451A20BB161_33 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_97BB4FA12F9980DF*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_97BB4FA12F9980DF* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_97BB4FA12F9980DF*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_33__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_33_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_33_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_33_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_33_TICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_33___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_33___IFIXBASEPROXY_ONTASKRESET_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_33___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};

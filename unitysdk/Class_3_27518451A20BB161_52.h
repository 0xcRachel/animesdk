#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_30B1EF70F36B0248;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_52_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10DBC740)
#define CLASS_3_27518451A20BB161_52_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10DBC780)
#define CLASS_3_27518451A20BB161_52__CTOR_OFFSET UNITYSDK_OFFSET(0x10DBC710)
#define CLASS_3_27518451A20BB161_52___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10DBCAF0)

inline static constexpr unsigned int Class_3_27518451A20BB161_52_TypeDefinitionIndex = 42332;

class Class_3_27518451A20BB161_52 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_30B1EF70F36B0248*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_30B1EF70F36B0248* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_30B1EF70F36B0248*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_52__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_52_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_52_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_52___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

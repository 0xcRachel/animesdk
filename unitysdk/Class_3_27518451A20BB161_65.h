#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_4E32A1079BDDB8E7;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_65_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9BEEED0)
#define CLASS_3_27518451A20BB161_65_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x9BEEF10)
#define CLASS_3_27518451A20BB161_65__CTOR_OFFSET UNITYSDK_OFFSET(0x9BEEEA0)
#define CLASS_3_27518451A20BB161_65___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9BEF0F0)

inline static constexpr unsigned int Class_3_27518451A20BB161_65_TypeDefinitionIndex = 43130;

class Class_3_27518451A20BB161_65 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_4E32A1079BDDB8E7*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_4E32A1079BDDB8E7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_4E32A1079BDDB8E7*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_65__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_65_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_65_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_65___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

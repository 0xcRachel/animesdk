#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_DB896EF8435160DD_7;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_74_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEB9DBE0)
#define CLASS_3_27518451A20BB161_74_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEB9DC20)
#define CLASS_3_27518451A20BB161_74__CTOR_OFFSET UNITYSDK_OFFSET(0xEB9DBB0)
#define CLASS_3_27518451A20BB161_74___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEB9DD00)

inline static constexpr unsigned int Class_3_27518451A20BB161_74_TypeDefinitionIndex = 49616;

class Class_3_27518451A20BB161_74 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_DB896EF8435160DD_7*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_DB896EF8435160DD_7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_DB896EF8435160DD_7*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_74__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_74_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_74_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_74___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

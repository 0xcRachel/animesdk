#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_3FDFE25701E5CF81;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_5_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x8D26FE0)
#define CLASS_3_27518451A20BB161_5__CTOR_OFFSET UNITYSDK_OFFSET(0x8D26FB0)

inline static constexpr unsigned int Class_3_27518451A20BB161_5_TypeDefinitionIndex = 41694;

class Class_3_27518451A20BB161_5 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_3FDFE25701E5CF81*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_3FDFE25701E5CF81* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_3FDFE25701E5CF81*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_5_ONTASKBEGIN_OFFSET))(this);
	}
};

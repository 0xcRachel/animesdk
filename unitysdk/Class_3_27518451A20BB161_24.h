#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_E19B324AEE40BF0E_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_24_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFE64B60)
#define CLASS_3_27518451A20BB161_24__CTOR_OFFSET UNITYSDK_OFFSET(0xFE64B30)

inline static constexpr unsigned int Class_3_27518451A20BB161_24_TypeDefinitionIndex = 41723;

class Class_3_27518451A20BB161_24 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_E19B324AEE40BF0E_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_E19B324AEE40BF0E_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_E19B324AEE40BF0E_1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_24__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_24_ONTASKBEGIN_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_21611E8BFC39DB2F;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_8_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xAC8FF60)
#define CLASS_3_27518451A20BB161_8__CTOR_OFFSET UNITYSDK_OFFSET(0xAC8FF30)

inline static constexpr unsigned int Class_3_27518451A20BB161_8_TypeDefinitionIndex = 41702;

class Class_3_27518451A20BB161_8 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_21611E8BFC39DB2F*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_21611E8BFC39DB2F* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_21611E8BFC39DB2F*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_8__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_8_ONTASKBEGIN_OFFSET))(this);
	}
};

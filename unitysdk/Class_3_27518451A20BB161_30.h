#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_CAEDBE7AE01F5331;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_30_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x10F551E0)
#define CLASS_3_27518451A20BB161_30__CTOR_OFFSET UNITYSDK_OFFSET(0x10F551B0)

inline static constexpr unsigned int Class_3_27518451A20BB161_30_TypeDefinitionIndex = 41729;

class Class_3_27518451A20BB161_30 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_CAEDBE7AE01F5331*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_CAEDBE7AE01F5331* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_CAEDBE7AE01F5331*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_30__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_30_ONTASKBEGIN_OFFSET))(this);
	}
};

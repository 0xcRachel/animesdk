#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_784A9644D0FB9A1A;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_79_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x899D990)
#define CLASS_3_27518451A20BB161_79__CTOR_OFFSET UNITYSDK_OFFSET(0x899D960)

inline static constexpr unsigned int Class_3_27518451A20BB161_79_TypeDefinitionIndex = 43571;

class Class_3_27518451A20BB161_79 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_784A9644D0FB9A1A*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_784A9644D0FB9A1A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_784A9644D0FB9A1A*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_79__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_79_ONTASKBEGIN_OFFSET))(this);
	}
};

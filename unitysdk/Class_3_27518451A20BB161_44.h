#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_6FCED0DC6A3564B4_1;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_44_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x890F790)
#define CLASS_3_27518451A20BB161_44__CTOR_OFFSET UNITYSDK_OFFSET(0x890F760)
#define CLASS_3_27518451A20BB161_44__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0x890F980)

inline static constexpr unsigned int Class_3_27518451A20BB161_44_TypeDefinitionIndex = 41795;

class Class_3_27518451A20BB161_44 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_6FCED0DC6A3564B4_1*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_6FCED0DC6A3564B4_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_6FCED0DC6A3564B4_1*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_44__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_44_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void _OnTaskBegin_b__1_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_44__ONTASKBEGIN_B__1_0_OFFSET))(this);
	}
};

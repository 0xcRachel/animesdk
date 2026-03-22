#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_9E5C8E0DF08B4A48;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_48_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x86CF3B0)
#define CLASS_3_27518451A20BB161_48__CTOR_OFFSET UNITYSDK_OFFSET(0x86CF380)

inline static constexpr unsigned int Class_3_27518451A20BB161_48_TypeDefinitionIndex = 41817;

class Class_3_27518451A20BB161_48 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_9E5C8E0DF08B4A48*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_9E5C8E0DF08B4A48* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_9E5C8E0DF08B4A48*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_48__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_48_ONTASKBEGIN_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ImmediateTaskBase_1.h"

class Class_3_06CA57680E115A32_11;
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_27518451A20BB161_75_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF1F8B0)
#define CLASS_3_27518451A20BB161_75__CTOR_OFFSET UNITYSDK_OFFSET(0xBF1F880)

inline static constexpr unsigned int Class_3_27518451A20BB161_75_TypeDefinitionIndex = 43511;

class Class_3_27518451A20BB161_75 : public ::RPG::GameCore::ImmediateTaskBase_1<::Class_3_06CA57680E115A32_11*>
{
public:
	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::Class_3_06CA57680E115A32_11* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::Class_3_06CA57680E115A32_11*))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_75__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_27518451A20BB161_75_ONTASKBEGIN_OFFSET))(this);
	}
};

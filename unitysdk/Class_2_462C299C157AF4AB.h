#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

namespace RPG::Client { class AdventurePhase; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerAetherDivideBattle; }

#define CLASS_2_462C299C157AF4AB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1702A3A0)
#define CLASS_2_462C299C157AF4AB_METHOD_2_8C945585B4A8C17B_OFFSET UNITYSDK_OFFSET(0x1702A010)
#define CLASS_2_462C299C157AF4AB_METHOD_2_ED79705457B92B5C_OFFSET UNITYSDK_OFFSET(0x1702A0B0)
#define CLASS_2_462C299C157AF4AB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17029EF0)
#define CLASS_2_462C299C157AF4AB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17029EA0)
#define CLASS_2_462C299C157AF4AB_TICK_OFFSET UNITYSDK_OFFSET(0x1702A340)
#define CLASS_2_462C299C157AF4AB__CTOR_OFFSET UNITYSDK_OFFSET(0x17029E90)

inline static constexpr unsigned int Class_2_462C299C157AF4AB_TypeDefinitionIndex = 54907;

class Class_2_462C299C157AF4AB : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::TriggerAetherDivideBattle* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::RPG::Client::AdventurePhase* Field_2_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerAetherDivideBattle* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerAetherDivideBattle*))((::PBYTE)hIl2Cpp + CLASS_2_462C299C157AF4AB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_462C299C157AF4AB_ONTASKRESET_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_462C299C157AF4AB_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_462C299C157AF4AB_TICK_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_462C299C157AF4AB_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_ED79705457B92B5C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_462C299C157AF4AB_METHOD_2_ED79705457B92B5C_OFFSET))(this);
	}

	::System::Void Method_2_8C945585B4A8C17B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_462C299C157AF4AB_METHOD_2_8C945585B4A8C17B_OFFSET))(this);
	}
};

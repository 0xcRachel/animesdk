#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_485;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitAnimState; }

#define CLASS_2_E99F9A8552FFD761_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF216F60)
#define CLASS_2_E99F9A8552FFD761_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0xF217CE0)
#define CLASS_2_E99F9A8552FFD761_METHOD_2_2E7C9236490EC44C_OFFSET UNITYSDK_OFFSET(0xF2171A0)
#define CLASS_2_E99F9A8552FFD761_METHOD_2_B67A7D5A7BB42B14_OFFSET UNITYSDK_OFFSET(0xF217350)
#define CLASS_2_E99F9A8552FFD761_METHOD_2_F15BB39D73E654DD_OFFSET UNITYSDK_OFFSET(0xF2174A0)
#define CLASS_2_E99F9A8552FFD761_ONSKIP_OFFSET UNITYSDK_OFFSET(0xF217CF0)
#define CLASS_2_E99F9A8552FFD761_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF216FA0)
#define CLASS_2_E99F9A8552FFD761_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF2176A0)
#define CLASS_2_E99F9A8552FFD761_TICK_OFFSET UNITYSDK_OFFSET(0xF217700)
#define CLASS_2_E99F9A8552FFD761__CTOR_OFFSET UNITYSDK_OFFSET(0xF216EC0)

inline static constexpr unsigned int Class_2_E99F9A8552FFD761_TypeDefinitionIndex = 51456;

class Class_2_E99F9A8552FFD761 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_0_16E4307DCC419505_485* Field_2_3; // 0x18
	::RPG::GameCore::WaitAnimState* Field_2_0; // 0x20
	::RPG::GameCore::TaskContext* Field_2_1; // 0x28
	::RPG::GameCore::GameEntity* Field_2_2; // 0x30
	::System::Int32 Field_2_6; // 0x38
	::System::Single Field_2_4; // 0x3C
	::System::Boolean Field_2_5; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitAnimState* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitAnimState*))((::PBYTE)hIl2Cpp + CLASS_2_E99F9A8552FFD761__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E99F9A8552FFD761_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E99F9A8552FFD761_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E99F9A8552FFD761_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E99F9A8552FFD761_TICK_OFFSET))(this, a1);
	}

	::System::Boolean get_ForceSkip()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E99F9A8552FFD761_GET_FORCESKIP_OFFSET))(this);
	}

	::System::Void OnSkip()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E99F9A8552FFD761_ONSKIP_OFFSET))(this);
	}

	::System::Boolean Method_2_B67A7D5A7BB42B14()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E99F9A8552FFD761_METHOD_2_B67A7D5A7BB42B14_OFFSET))(this);
	}

	::System::Boolean Method_2_F15BB39D73E654DD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E99F9A8552FFD761_METHOD_2_F15BB39D73E654DD_OFFSET))(this);
	}

	::System::Boolean Method_2_2E7C9236490EC44C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E99F9A8552FFD761_METHOD_2_2E7C9236490EC44C_OFFSET))(this);
	}
};

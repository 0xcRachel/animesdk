#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_0AD6129525BF5F86;
class Class_1_2B8E0B4950FE44E7;
class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class FireProjectile; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E2881161EA91F2EE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x877D7D0)
#define CLASS_2_E2881161EA91F2EE_METHOD_2_24D4EB641B41AC50_OFFSET UNITYSDK_OFFSET(0x877DF40)
#define CLASS_2_E2881161EA91F2EE_METHOD_2_5ED655A622B0DBD9_OFFSET UNITYSDK_OFFSET(0x877DFE0)
#define CLASS_2_E2881161EA91F2EE_METHOD_2_748E2125473CC277_OFFSET UNITYSDK_OFFSET(0x877DD40)
#define CLASS_2_E2881161EA91F2EE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x877D840)
#define CLASS_2_E2881161EA91F2EE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x877DE40)
#define CLASS_2_E2881161EA91F2EE_TICK_OFFSET UNITYSDK_OFFSET(0x877DE90)
#define CLASS_2_E2881161EA91F2EE__CTOR_OFFSET UNITYSDK_OFFSET(0x877D680)

inline static constexpr unsigned int Class_2_E2881161EA91F2EE_TypeDefinitionIndex = 43013;

class Class_2_E2881161EA91F2EE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_5F51D4049EA87B7B* Field_2_4; // 0x18
	::Class_3_BCCE950C2E8DF1F0* Field_2_2; // 0x20
	::RPG::GameCore::FireProjectile* Field_2_0; // 0x28
	::RPG::GameCore::TaskContext* Field_2_1; // 0x30
	::Class_1_0AD6129525BF5F86* Field_2_3; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FireProjectile* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FireProjectile*))((::PBYTE)hIl2Cpp + CLASS_2_E2881161EA91F2EE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2881161EA91F2EE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2881161EA91F2EE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Method_2_748E2125473CC277(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_2B8E0B4950FE44E7* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_1_2B8E0B4950FE44E7*))((::PBYTE)hIl2Cpp + CLASS_2_E2881161EA91F2EE_METHOD_2_748E2125473CC277_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E2881161EA91F2EE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E2881161EA91F2EE_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_24D4EB641B41AC50(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_E2881161EA91F2EE_METHOD_2_24D4EB641B41AC50_OFFSET))(this, a1);
	}

	::System::Void Method_2_5ED655A622B0DBD9(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_E2881161EA91F2EE_METHOD_2_5ED655A622B0DBD9_OFFSET))(this, a1);
	}
};

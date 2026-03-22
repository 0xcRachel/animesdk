#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E2881161EA91F2EE.h"

class Class_1_2B8E0B4950FE44E7;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NewFireProjectile; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_8281B029821B0ECB_METHOD_3_6B618F47C39F119F_OFFSET UNITYSDK_OFFSET(0x8743D90)
#define CLASS_3_8281B029821B0ECB_METHOD_3_748E2125473CC277_OFFSET UNITYSDK_OFFSET(0x8743C90)
#define CLASS_3_8281B029821B0ECB__CTOR_OFFSET UNITYSDK_OFFSET(0x8743C70)

inline static constexpr unsigned int Class_3_8281B029821B0ECB_TypeDefinitionIndex = 43161;

class Class_3_8281B029821B0ECB : public ::Class_2_E2881161EA91F2EE
{
public:
	::RPG::GameCore::NewFireProjectile* Field_3_0; // 0x40

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NewFireProjectile* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NewFireProjectile*))((::PBYTE)hIl2Cpp + CLASS_3_8281B029821B0ECB__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_748E2125473CC277(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::Class_1_2B8E0B4950FE44E7* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_1_2B8E0B4950FE44E7*))((::PBYTE)hIl2Cpp + CLASS_3_8281B029821B0ECB_METHOD_3_748E2125473CC277_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_6B618F47C39F119F(::RPG::GameCore::GameEntity* P0, ::RPG::GameCore::GameEntity* P1, ::Class_1_2B8E0B4950FE44E7* P2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_1_2B8E0B4950FE44E7*))((::PBYTE)hIl2Cpp + CLASS_3_8281B029821B0ECB_METHOD_3_6B618F47C39F119F_OFFSET))(this, P0, P1, P2);
	}
};

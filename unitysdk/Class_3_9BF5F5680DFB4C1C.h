#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C0AAB023EB5AF783.h"

class Class_1_2B8E0B4950FE44E7;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NewAdventureFireProjectile; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_3_9BF5F5680DFB4C1C_METHOD_3_3A43416A30CAFFC6_OFFSET UNITYSDK_OFFSET(0x10D54FD0)
#define CLASS_3_9BF5F5680DFB4C1C_METHOD_3_BEDE7D7E6A860CC8_OFFSET UNITYSDK_OFFSET(0x10D54E40)
#define CLASS_3_9BF5F5680DFB4C1C__CTOR_OFFSET UNITYSDK_OFFSET(0x10D54E20)

inline static constexpr unsigned int Class_3_9BF5F5680DFB4C1C_TypeDefinitionIndex = 45907;

class Class_3_9BF5F5680DFB4C1C : public ::Class_2_C0AAB023EB5AF783
{
public:
	::RPG::GameCore::NewAdventureFireProjectile* Field_3_0; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::NewAdventureFireProjectile* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::NewAdventureFireProjectile*))((::PBYTE)hIl2Cpp + CLASS_3_9BF5F5680DFB4C1C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_BEDE7D7E6A860CC8(::RPG::GameCore::GameEntity* a1, ::Class_1_2B8E0B4950FE44E7* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_2B8E0B4950FE44E7*))((::PBYTE)hIl2Cpp + CLASS_3_9BF5F5680DFB4C1C_METHOD_3_BEDE7D7E6A860CC8_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_3A43416A30CAFFC6(::RPG::GameCore::GameEntity* P0, ::Class_1_2B8E0B4950FE44E7* P1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::Class_1_2B8E0B4950FE44E7*))((::PBYTE)hIl2Cpp + CLASS_3_9BF5F5680DFB4C1C_METHOD_3_3A43416A30CAFFC6_OFFSET))(this, P0, P1);
	}
};

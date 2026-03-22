#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_2_0066AF6A31824F6F_Class_1_E8200A7BE3BDDA63;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameLevelObjectRefConfig; }
namespace RPG::GameCore { class LevelCurveInstance; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TravelShipArriveTo; }
namespace System { class String; }

#define CLASS_2_508157EA6F2390CE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8599510)
#define CLASS_2_508157EA6F2390CE_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x8599D40)
#define CLASS_2_508157EA6F2390CE_METHOD_2_6861A33C3F260AAE_OFFSET UNITYSDK_OFFSET(0x8599A50)
#define CLASS_2_508157EA6F2390CE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x85995B0)
#define CLASS_2_508157EA6F2390CE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x8599CF0)
#define CLASS_2_508157EA6F2390CE_TICK_OFFSET UNITYSDK_OFFSET(0x8599550)
#define CLASS_2_508157EA6F2390CE__CTOR_OFFSET UNITYSDK_OFFSET(0x8599500)

inline static constexpr unsigned int Class_2_508157EA6F2390CE_TypeDefinitionIndex = 42217;

class Class_2_508157EA6F2390CE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::System::String* Field_2_3; // 0x18
	::RPG::GameCore::TravelShipArriveTo* Field_2_0; // 0x20
	::Class_2_0066AF6A31824F6F_Class_1_E8200A7BE3BDDA63* Field_2_4; // 0x28
	::RPG::GameCore::GameEntity* Field_2_2; // 0x30
	::RPG::GameCore::TaskContext* Field_2_1; // 0x38

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TravelShipArriveTo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TravelShipArriveTo*))((::PBYTE)hIl2Cpp + CLASS_2_508157EA6F2390CE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_508157EA6F2390CE_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_508157EA6F2390CE_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_508157EA6F2390CE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_508157EA6F2390CE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_508157EA6F2390CE_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::RPG::GameCore::LevelCurveInstance* Method_2_6861A33C3F260AAE(::RPG::GameCore::GameLevelObjectRefConfig* a1)
	{
		return ((::RPG::GameCore::LevelCurveInstance*(*)(::PVOID, ::RPG::GameCore::GameLevelObjectRefConfig*))((::PBYTE)hIl2Cpp + CLASS_2_508157EA6F2390CE_METHOD_2_6861A33C3F260AAE_OFFSET))(this, a1);
	}
};

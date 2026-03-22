#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_A2D8E5AB4B623162.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_0_16E4307DCC419505_373;
class Class_1_07A210D994F284D8_3;
class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class AbilityComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_1DB6C02CA182EEBA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10555520)
#define CLASS_2_1DB6C02CA182EEBA_GET_PARALLELDELAYTIME_OFFSET UNITYSDK_OFFSET(0x10555760)
#define CLASS_2_1DB6C02CA182EEBA_GET_PARALLELLOCALTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x10555740)
#define CLASS_2_1DB6C02CA182EEBA_GET_PARALLELROOT_OFFSET UNITYSDK_OFFSET(0x10555680)
#define CLASS_2_1DB6C02CA182EEBA_GET_PARENTPARALLELTASKLIST_OFFSET UNITYSDK_OFFSET(0x10555660)
#define CLASS_2_1DB6C02CA182EEBA_GET_TARGETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x105556A0)
#define CLASS_2_1DB6C02CA182EEBA_METHOD_2_0F46E65FCA9F8C98_OFFSET UNITYSDK_OFFSET(0x105556C0)
#define CLASS_2_1DB6C02CA182EEBA_METHOD_2_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0x105555A0)
#define CLASS_2_1DB6C02CA182EEBA_METHOD_2_C50B93169B85DAEA_OFFSET UNITYSDK_OFFSET(0x10555610)
#define CLASS_2_1DB6C02CA182EEBA_SET_PARALLELDELAYTIME_OFFSET UNITYSDK_OFFSET(0x10555770)
#define CLASS_2_1DB6C02CA182EEBA_SET_PARALLELLOCALTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x10555750)
#define CLASS_2_1DB6C02CA182EEBA_SET_PARALLELROOT_OFFSET UNITYSDK_OFFSET(0x10555690)
#define CLASS_2_1DB6C02CA182EEBA_SET_PARENTPARALLELTASKLIST_OFFSET UNITYSDK_OFFSET(0x10555670)
#define CLASS_2_1DB6C02CA182EEBA_SET_TARGETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x105556B0)
#define CLASS_2_1DB6C02CA182EEBA__CTOR_OFFSET UNITYSDK_OFFSET(0x10555430)
#define CLASS_2_1DB6C02CA182EEBA___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x10555780)

inline static constexpr unsigned int Class_2_1DB6C02CA182EEBA_TypeDefinitionIndex = 43670;

class Class_2_1DB6C02CA182EEBA : public ::Class_1_A2D8E5AB4B623162
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_2_1; // 0x90
	::Class_3_BCCE950C2E8DF1F0* Field_2_7; // 0x98
	::Class_1_07A210D994F284D8_3* _ParallelRoot_k__BackingField; // 0xA0
	::RPG::GameCore::TurnBasedAbilityConfig* Field_2_0; // 0xA8
	::Class_0_16E4307DCC419505_373* _ParentParallelTaskList_k__BackingField; // 0xB0
	::RPG::GameCore::FixPoint _TargetTimeStamp_k__BackingField; // 0xB8
	::RPG::GameCore::FixPoint _ParallelLocalTimeStamp_k__BackingField; // 0xC0
	::RPG::GameCore::FixPoint _ParallelDelayTime_k__BackingField; // 0xC8

	::System::Void _ctor(::RPG::GameCore::AbilityComponent* a1, ::RPG::GameCore::TurnBasedAbilityConfig* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityComponent*, ::RPG::GameCore::TurnBasedAbilityConfig*))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_METHOD_2_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Void Method_2_C50B93169B85DAEA(::Class_0_16E4307DCC419505_373* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_373*))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_METHOD_2_C50B93169B85DAEA_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_373* get_ParentParallelTaskList()
	{
		return ((::Class_0_16E4307DCC419505_373*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_GET_PARENTPARALLELTASKLIST_OFFSET))(this);
	}

	::System::Void set_ParentParallelTaskList(::Class_0_16E4307DCC419505_373* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_373*))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_SET_PARENTPARALLELTASKLIST_OFFSET))(this, value);
	}

	::Class_1_07A210D994F284D8_3* get_ParallelRoot()
	{
		return ((::Class_1_07A210D994F284D8_3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_GET_PARALLELROOT_OFFSET))(this);
	}

	::System::Void set_ParallelRoot(::Class_1_07A210D994F284D8_3* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_07A210D994F284D8_3*))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_SET_PARALLELROOT_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_TargetTimeStamp()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_GET_TARGETTIMESTAMP_OFFSET))(this);
	}

	::System::Void set_TargetTimeStamp(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_SET_TARGETTIMESTAMP_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint Method_2_0F46E65FCA9F8C98()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_METHOD_2_0F46E65FCA9F8C98_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint get_ParallelLocalTimeStamp()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_GET_PARALLELLOCALTIMESTAMP_OFFSET))(this);
	}

	::System::Void set_ParallelLocalTimeStamp(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_SET_PARALLELLOCALTIMESTAMP_OFFSET))(this, value);
	}

	::RPG::GameCore::FixPoint get_ParallelDelayTime()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_GET_PARALLELDELAYTIME_OFFSET))(this);
	}

	::System::Void set_ParallelDelayTime(::RPG::GameCore::FixPoint value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA_SET_PARALLELDELAYTIME_OFFSET))(this, value);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1DB6C02CA182EEBA___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};

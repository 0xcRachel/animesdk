#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_1_0AD6129525BF5F86;
class Class_1_2B8E0B4950FE44E7;
class Class_3_BCCE950C2E8DF1F0;
namespace RPG::GameCore { class FireWaveProjectile; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_B0BA658F125BE4BE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xEEBB1A0)
#define CLASS_2_B0BA658F125BE4BE_METHOD_2_3225BD0CE82BEB72_OFFSET UNITYSDK_OFFSET(0xEEBB790)
#define CLASS_2_B0BA658F125BE4BE_METHOD_2_5ED655A622B0DBD9_OFFSET UNITYSDK_OFFSET(0xEEBB8C0)
#define CLASS_2_B0BA658F125BE4BE_METHOD_2_C25260634A2387FE_OFFSET UNITYSDK_OFFSET(0xEEBB3B0)
#define CLASS_2_B0BA658F125BE4BE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xEEBB210)
#define CLASS_2_B0BA658F125BE4BE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xEEBB740)
#define CLASS_2_B0BA658F125BE4BE_TICK_OFFSET UNITYSDK_OFFSET(0xEEBB5D0)
#define CLASS_2_B0BA658F125BE4BE__CTOR_OFFSET UNITYSDK_OFFSET(0xEEBB030)

inline static constexpr unsigned int Class_2_B0BA658F125BE4BE_TypeDefinitionIndex = 43014;

class Class_2_B0BA658F125BE4BE : public ::Class_1_5F51D4049EA87B7B
{
public:
	::RPG::GameCore::FireWaveProjectile* Field_2_0; // 0x18
	::RPG::GameCore::TaskContext* Field_2_1; // 0x20
	::Il2CppArray<::Class_1_0AD6129525BF5F86*>* Field_2_2; // 0x28
	::RPG::GameCore::GameEntity* Field_2_5; // 0x30
	::Class_3_BCCE950C2E8DF1F0* Field_2_7; // 0x38
	::RPG::GameCore::GameEntity* Field_2_6; // 0x40
	::System::Single Field_2_3; // 0x48
	::System::Int32 Field_2_4; // 0x4C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::FireWaveProjectile* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::FireWaveProjectile*))((::PBYTE)hIl2Cpp + CLASS_2_B0BA658F125BE4BE__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0BA658F125BE4BE_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0BA658F125BE4BE_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_B0BA658F125BE4BE_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B0BA658F125BE4BE_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_C25260634A2387FE(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_B0BA658F125BE4BE_METHOD_2_C25260634A2387FE_OFFSET))(this, a1);
	}

	::Class_1_0AD6129525BF5F86* Method_2_3225BD0CE82BEB72(::Class_1_2B8E0B4950FE44E7* a1)
	{
		return ((::Class_1_0AD6129525BF5F86*(*)(::PVOID, ::Class_1_2B8E0B4950FE44E7*))((::PBYTE)hIl2Cpp + CLASS_2_B0BA658F125BE4BE_METHOD_2_3225BD0CE82BEB72_OFFSET))(this, a1);
	}

	::System::Void Method_2_5ED655A622B0DBD9(::Class_1_0AD6129525BF5F86* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_2_B0BA658F125BE4BE_METHOD_2_5ED655A622B0DBD9_OFFSET))(this, a1);
	}
};

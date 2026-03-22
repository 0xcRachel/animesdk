#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_347;
namespace RPG::GameCore { class AdvNpcPetSearch; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define CLASS_2_70393F2294C367A3_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA153200)
#define CLASS_2_70393F2294C367A3_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xA153530)
#define CLASS_2_70393F2294C367A3_METHOD_2_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0xA153080)
#define CLASS_2_70393F2294C367A3_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0xA153750)
#define CLASS_2_70393F2294C367A3_METHOD_2_58E4F6A5F8FAF17F_1_OFFSET UNITYSDK_OFFSET(0xA153AE0)
#define CLASS_2_70393F2294C367A3_METHOD_2_58E4F6A5F8FAF17F_OFFSET UNITYSDK_OFFSET(0xA1539B0)
#define CLASS_2_70393F2294C367A3_METHOD_2_7DB49B5407C8FD68_OFFSET UNITYSDK_OFFSET(0xA152F10)
#define CLASS_2_70393F2294C367A3_METHOD_2_83DA3EC57FF907F4_OFFSET UNITYSDK_OFFSET(0xA1532B0)
#define CLASS_2_70393F2294C367A3_METHOD_2_B768DA94E3FD91D9_OFFSET UNITYSDK_OFFSET(0xA153590)
#define CLASS_2_70393F2294C367A3_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xA1537C0)
#define CLASS_2_70393F2294C367A3_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xA1538F0)
#define CLASS_2_70393F2294C367A3_TICK_OFFSET UNITYSDK_OFFSET(0xA153350)
#define CLASS_2_70393F2294C367A3__CTOR_OFFSET UNITYSDK_OFFSET(0xA152D00)

inline static constexpr unsigned int Class_2_70393F2294C367A3_TypeDefinitionIndex = 41406;

class Class_2_70393F2294C367A3 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_5F51D4049EA87B7B* Field_2_5; // 0x18
	::Class_1_5F51D4049EA87B7B* Field_2_4; // 0x20
	::RPG::GameCore::AdvNpcPetSearch* Field_2_2; // 0x28
	::RPG::GameCore::NPCComponent* Field_2_8; // 0x30
	::RPG::GameCore::TransformComponent* Field_2_6; // 0x38
	::Class_1_5F51D4049EA87B7B* Field_2_3; // 0x40
	::RPG::GameCore::TaskContext* Field_2_1; // 0x48
	::RPG::GameCore::AdventureCharacterController* Field_2_7; // 0x50
	::System::Boolean Field_2_0; // 0x58

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcPetSearch* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcPetSearch*))((::PBYTE)hIl2Cpp + CLASS_2_70393F2294C367A3__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7DB49B5407C8FD68()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70393F2294C367A3_METHOD_2_7DB49B5407C8FD68_OFFSET))(this);
	}

	::System::Void Method_2_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70393F2294C367A3_METHOD_2_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70393F2294C367A3_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_2_83DA3EC57FF907F4()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70393F2294C367A3_METHOD_2_83DA3EC57FF907F4_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_70393F2294C367A3_TICK_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70393F2294C367A3_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_B768DA94E3FD91D9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70393F2294C367A3_METHOD_2_B768DA94E3FD91D9_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70393F2294C367A3_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70393F2294C367A3_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_70393F2294C367A3_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_58E4F6A5F8FAF17F(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_70393F2294C367A3_METHOD_2_58E4F6A5F8FAF17F_OFFSET))(this, a1);
	}

	::System::Void Method_2_58E4F6A5F8FAF17F_1(::Class_0_16E4307DCC419505_347* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_347*))((::PBYTE)hIl2Cpp + CLASS_2_70393F2294C367A3_METHOD_2_58E4F6A5F8FAF17F_1_OFFSET))(this, a1);
	}
};

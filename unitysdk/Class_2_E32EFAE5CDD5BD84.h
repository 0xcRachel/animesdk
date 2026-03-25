#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_375;
class Class_2_F67FF7EB526BF85C;
namespace RPG::GameCore { class AdvNpcGuardAlertDeviceInactive; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class TaskContext; }

#define CLASS_2_E32EFAE5CDD5BD84_DISPOSE_OFFSET UNITYSDK_OFFSET(0x113836E0)
#define CLASS_2_E32EFAE5CDD5BD84_METHOD_2_01109DD29CB4D216_OFFSET UNITYSDK_OFFSET(0x11383C40)
#define CLASS_2_E32EFAE5CDD5BD84_METHOD_2_3E522F4B992303E1_OFFSET UNITYSDK_OFFSET(0x11383770)
#define CLASS_2_E32EFAE5CDD5BD84_METHOD_2_5D9646F4A7309CF6_OFFSET UNITYSDK_OFFSET(0x11383DB0)
#define CLASS_2_E32EFAE5CDD5BD84_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x11383AC0)
#define CLASS_2_E32EFAE5CDD5BD84_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11383B80)
#define CLASS_2_E32EFAE5CDD5BD84_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11383D20)
#define CLASS_2_E32EFAE5CDD5BD84_TICK_OFFSET UNITYSDK_OFFSET(0x11383850)
#define CLASS_2_E32EFAE5CDD5BD84__CTOR_OFFSET UNITYSDK_OFFSET(0x11383580)

inline static constexpr unsigned int Class_2_E32EFAE5CDD5BD84_TypeDefinitionIndex = 42462;

class Class_2_E32EFAE5CDD5BD84 : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_5F51D4049EA87B7B* Field_2_6; // 0x18
	::RPG::GameCore::TaskContext* Field_2_2; // 0x20
	::Class_1_5F51D4049EA87B7B* Field_2_5; // 0x28
	::Class_2_F67FF7EB526BF85C* Field_2_4; // 0x30
	::RPG::GameCore::AdvNpcGuardAlertDeviceInactive* Field_2_0; // 0x38
	::RPG::GameCore::NPCComponent* Field_2_3; // 0x40
	::System::UInt32 Field_2_1; // 0x48

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcGuardAlertDeviceInactive* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcGuardAlertDeviceInactive*))((::PBYTE)hIl2Cpp + CLASS_2_E32EFAE5CDD5BD84__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E32EFAE5CDD5BD84_DISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E32EFAE5CDD5BD84_TICK_OFFSET))(this, a1);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E32EFAE5CDD5BD84_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E32EFAE5CDD5BD84_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Method_2_01109DD29CB4D216()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E32EFAE5CDD5BD84_METHOD_2_01109DD29CB4D216_OFFSET))(this);
	}

	::System::Void Method_2_3E522F4B992303E1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E32EFAE5CDD5BD84_METHOD_2_3E522F4B992303E1_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E32EFAE5CDD5BD84_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_5D9646F4A7309CF6(::Class_0_16E4307DCC419505_375* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_375*))((::PBYTE)hIl2Cpp + CLASS_2_E32EFAE5CDD5BD84_METHOD_2_5D9646F4A7309CF6_OFFSET))(this, a1);
	}
};

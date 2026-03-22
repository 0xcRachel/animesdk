#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_437;
class Class_1_1CD633F3449963C2;
class Class_1_53F0644B4D7513CF;
namespace InControl { class PlayerAction; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPlayerAction; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_510485832B336E3C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x89C4530)
#define CLASS_2_510485832B336E3C_METHOD_2_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x89C58C0)
#define CLASS_2_510485832B336E3C_METHOD_2_13DA58093C67CCDF_OFFSET UNITYSDK_OFFSET(0x89C5990)
#define CLASS_2_510485832B336E3C_METHOD_2_60E1F7F58CCF739F_OFFSET UNITYSDK_OFFSET(0x89C47E0)
#define CLASS_2_510485832B336E3C_METHOD_2_62593EE2FE331D20_OFFSET UNITYSDK_OFFSET(0x89C45B0)
#define CLASS_2_510485832B336E3C_METHOD_2_71170E420FCC0F61_OFFSET UNITYSDK_OFFSET(0x89C4F00)
#define CLASS_2_510485832B336E3C_METHOD_2_9972734FC91A4B95_OFFSET UNITYSDK_OFFSET(0x89C4C80)
#define CLASS_2_510485832B336E3C_METHOD_2_C76E6514041E2A65_OFFSET UNITYSDK_OFFSET(0x89C5910)
#define CLASS_2_510485832B336E3C_METHOD_2_DCC3DD08888A13A8_OFFSET UNITYSDK_OFFSET(0x89C4A40)
#define CLASS_2_510485832B336E3C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x89C4600)
#define CLASS_2_510485832B336E3C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x89C4670)
#define CLASS_2_510485832B336E3C_TICK_OFFSET UNITYSDK_OFFSET(0x89C46F0)
#define CLASS_2_510485832B336E3C__CTOR_OFFSET UNITYSDK_OFFSET(0x89C4520)

inline static constexpr unsigned int Class_2_510485832B336E3C_TypeDefinitionIndex = 46501;

class Class_2_510485832B336E3C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_53F0644B4D7513CF* Field_2_4; // 0x18
	::RPG::GameCore::WaitPlayerAction* Field_2_0; // 0x20
	::System::Action* Field_2_7; // 0x28
	::Class_1_1CD633F3449963C2* Field_2_5; // 0x30
	::InControl::PlayerAction* Field_2_3; // 0x38
	::RPG::GameCore::TaskContext* Field_2_1; // 0x40
	::System::Boolean Field_2_6; // 0x48
	::System::Single Field_2_2; // 0x4C

	::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitPlayerAction* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitPlayerAction*))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_DISPOSE_OFFSET))(this);
	}

	::System::Void OnTaskBegin()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_ONTASKBEGIN_OFFSET))(this);
	}

	::System::Void OnTaskReset()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_ONTASKRESET_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_04AF66402B9859B9(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_04AF66402B9859B9_OFFSET))(this, a1);
	}

	::System::Void Method_2_60E1F7F58CCF739F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_60E1F7F58CCF739F_OFFSET))(this);
	}

	::System::Void Method_2_DCC3DD08888A13A8(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_DCC3DD08888A13A8_OFFSET))(this, a1);
	}

	::System::Void Method_2_9972734FC91A4B95(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_9972734FC91A4B95_OFFSET))(this, a1);
	}

	::System::Void Method_2_71170E420FCC0F61(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_71170E420FCC0F61_OFFSET))(this, a1);
	}

	::System::Void Method_2_13DA58093C67CCDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_13DA58093C67CCDF_OFFSET))(this);
	}

	::System::Void Method_2_C76E6514041E2A65(::Class_0_16E4307DCC419505_437* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_437*))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_C76E6514041E2A65_OFFSET))(this, a1);
	}

	::System::Void Method_2_62593EE2FE331D20()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_62593EE2FE331D20_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_5F51D4049EA87B7B.h"

class Class_0_16E4307DCC419505_465;
class Class_1_1CD633F3449963C2;
class Class_1_BAD2D343EF0045A3;
namespace InControl { class PlayerAction; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitPlayerAction; }
namespace System { class Action; }
namespace System { class String; }

#define CLASS_2_510485832B336E3C_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11048EF0)
#define CLASS_2_510485832B336E3C_METHOD_2_04AF66402B9859B9_OFFSET UNITYSDK_OFFSET(0x11049E90)
#define CLASS_2_510485832B336E3C_METHOD_2_4E608ED8CF3CBCB8_OFFSET UNITYSDK_OFFSET(0x11049770)
#define CLASS_2_510485832B336E3C_METHOD_2_68805403250CC013_OFFSET UNITYSDK_OFFSET(0x11048F70)
#define CLASS_2_510485832B336E3C_METHOD_2_85C8BE4482EC27AE_OFFSET UNITYSDK_OFFSET(0x11049430)
#define CLASS_2_510485832B336E3C_METHOD_2_901D723D57DABE53_OFFSET UNITYSDK_OFFSET(0x11049EE0)
#define CLASS_2_510485832B336E3C_METHOD_2_9A6DA36CCAE7D188_OFFSET UNITYSDK_OFFSET(0x11049F80)
#define CLASS_2_510485832B336E3C_METHOD_2_9E21A50FD382EB63_OFFSET UNITYSDK_OFFSET(0x110495A0)
#define CLASS_2_510485832B336E3C_METHOD_2_E52129E82CD2D7F8_OFFSET UNITYSDK_OFFSET(0x110491A0)
#define CLASS_2_510485832B336E3C_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11048FC0)
#define CLASS_2_510485832B336E3C_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11049030)
#define CLASS_2_510485832B336E3C_TICK_OFFSET UNITYSDK_OFFSET(0x110490B0)
#define CLASS_2_510485832B336E3C__CTOR_OFFSET UNITYSDK_OFFSET(0x11048EE0)

inline static constexpr unsigned int Class_2_510485832B336E3C_TypeDefinitionIndex = 47580;

class Class_2_510485832B336E3C : public ::Class_1_5F51D4049EA87B7B
{
public:
	::Class_1_1CD633F3449963C2* Field_2_5; // 0x18
	::InControl::PlayerAction* Field_2_3; // 0x20
	::Class_1_BAD2D343EF0045A3* Field_2_4; // 0x28
	::System::Action* Field_2_7; // 0x30
	::RPG::GameCore::WaitPlayerAction* Field_2_0; // 0x38
	::RPG::GameCore::TaskContext* Field_2_1; // 0x40
	::System::Single Field_2_2; // 0x48
	::System::Boolean Field_2_6; // 0x4C

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

	::System::Void Method_2_E52129E82CD2D7F8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_E52129E82CD2D7F8_OFFSET))(this);
	}

	::System::Void Method_2_85C8BE4482EC27AE(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_85C8BE4482EC27AE_OFFSET))(this, a1);
	}

	::System::Void Method_2_9E21A50FD382EB63(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_9E21A50FD382EB63_OFFSET))(this, a1);
	}

	::System::Void Method_2_4E608ED8CF3CBCB8(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_4E608ED8CF3CBCB8_OFFSET))(this, a1);
	}

	::System::Void Method_2_9A6DA36CCAE7D188()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_9A6DA36CCAE7D188_OFFSET))(this);
	}

	::System::Void Method_2_901D723D57DABE53(::Class_0_16E4307DCC419505_465* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_465*))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_901D723D57DABE53_OFFSET))(this, a1);
	}

	::System::Void Method_2_68805403250CC013()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_510485832B336E3C_METHOD_2_68805403250CC013_OFFSET))(this);
	}
};

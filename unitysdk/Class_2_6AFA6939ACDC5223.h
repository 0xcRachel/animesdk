#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_30467842FAA5266B.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_0_16E4307DCC419505_25;
class Class_2_D5AD64F6FB3109AB;

#define CLASS_2_6AFA6939ACDC5223_GET_CONDITIONRESULT_OFFSET UNITYSDK_OFFSET(0x15EF7EB0)
#define CLASS_2_6AFA6939ACDC5223_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x15EF8110)
#define CLASS_2_6AFA6939ACDC5223_METHOD_2_5EC8047AD3523C90_OFFSET UNITYSDK_OFFSET(0x15EF7F80)
#define CLASS_2_6AFA6939ACDC5223_SET_CONDITIONRESULT_OFFSET UNITYSDK_OFFSET(0x15EF7EC0)
#define CLASS_2_6AFA6939ACDC5223__CTOR_OFFSET UNITYSDK_OFFSET(0x15EF7ED0)

inline static constexpr unsigned int Class_2_6AFA6939ACDC5223_TypeDefinitionIndex = 27616;

class Class_2_6AFA6939ACDC5223 : public ::Class_1_30467842FAA5266B
{
public:
	::System::Boolean _ConditionResult_k__BackingField; // 0x30

	::System::Void _ctor(::Class_0_16E4307DCC419505_25* a1, ::Class_2_D5AD64F6FB3109AB* a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_25*, ::Class_2_D5AD64F6FB3109AB*, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + CLASS_2_6AFA6939ACDC5223__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean get_ConditionResult()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6AFA6939ACDC5223_GET_CONDITIONRESULT_OFFSET))(this);
	}

	::System::Void set_ConditionResult(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6AFA6939ACDC5223_SET_CONDITIONRESULT_OFFSET))(this, value);
	}

	::Class_2_D5AD64F6FB3109AB* Method_2_5EC8047AD3523C90(::RPG::GameCore::DiceCombatTarget a1)
	{
		return ((::Class_2_D5AD64F6FB3109AB*(*)(::PVOID, ::RPG::GameCore::DiceCombatTarget))((::PBYTE)hIl2Cpp + CLASS_2_6AFA6939ACDC5223_METHOD_2_5EC8047AD3523C90_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_6AFA6939ACDC5223_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}
};

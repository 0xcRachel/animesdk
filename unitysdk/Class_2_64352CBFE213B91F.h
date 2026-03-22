#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2231FD56C070349F.h"

class Class_3_E5B65FD9338F9400;
namespace RPG::Client::DiceCombat { class DiceCombatBattleContext; }

#define CLASS_2_64352CBFE213B91F_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x10D886D0)
#define CLASS_2_64352CBFE213B91F_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x10D88710)
#define CLASS_2_64352CBFE213B91F_METHOD_2_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x10D88680)
#define CLASS_2_64352CBFE213B91F__CTOR_OFFSET UNITYSDK_OFFSET(0x10D88670)

inline static constexpr unsigned int Class_2_64352CBFE213B91F_TypeDefinitionIndex = 47798;

class Class_2_64352CBFE213B91F : public ::Class_1_2231FD56C070349F
{
public:
	::RPG::Client::DiceCombat::DiceCombatBattleContext* Field_2_0; // 0x18

	::System::Void _ctor(::Class_3_E5B65FD9338F9400* a1, ::RPG::Client::DiceCombat::DiceCombatBattleContext* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_E5B65FD9338F9400*, ::RPG::Client::DiceCombat::DiceCombatBattleContext*))((::PBYTE)hIl2Cpp + CLASS_2_64352CBFE213B91F__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F79D5EC57FBF426E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64352CBFE213B91F_METHOD_2_F79D5EC57FBF426E_OFFSET))(this);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64352CBFE213B91F_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_64352CBFE213B91F_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"

class Class_1_36006FC25F5DDC69;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_SelfKill; }

#define CLASS_2_0BC8075B46F883C4_METHOD_2_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0x9C5DAA0)
#define CLASS_2_0BC8075B46F883C4_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x9C5DC90)
#define CLASS_2_0BC8075B46F883C4_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x9C5DD70)
#define CLASS_2_0BC8075B46F883C4_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x9C5DD30)
#define CLASS_2_0BC8075B46F883C4_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9C5DCF0)
#define CLASS_2_0BC8075B46F883C4__CTOR_OFFSET UNITYSDK_OFFSET(0x9C5DA10)

inline static constexpr unsigned int Class_2_0BC8075B46F883C4_TypeDefinitionIndex = 63372;

class Class_2_0BC8075B46F883C4 : public ::Class_1_F65B6F8790DF074B
{
public:
	::RPG::GameCore::ChenLingBattleAbility_SelfKill* Field_2_0; // 0x28

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_36006FC25F5DDC69* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_2_0BC8075B46F883C4__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BC8075B46F883C4_METHOD_2_0B7E3489D2C0938B_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_0BC8075B46F883C4_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BC8075B46F883C4_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BC8075B46F883C4_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0BC8075B46F883C4_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};

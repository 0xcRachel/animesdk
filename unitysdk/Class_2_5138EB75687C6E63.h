#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"

class Class_1_36006FC25F5DDC69;
class Class_2_181A7F9409C60DBC;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_ChainLightning; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5138EB75687C6E63_METHOD_2_1AB67458471FAC4D_OFFSET UNITYSDK_OFFSET(0x1117DF60)
#define CLASS_2_5138EB75687C6E63_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x1117E040)
#define CLASS_2_5138EB75687C6E63_METHOD_2_392525CC2FC7EDDF_OFFSET UNITYSDK_OFFSET(0x1117E550)
#define CLASS_2_5138EB75687C6E63_METHOD_2_66193B8782064F5D_OFFSET UNITYSDK_OFFSET(0x1117DD60)
#define CLASS_2_5138EB75687C6E63_METHOD_2_6F3643A075115E43_OFFSET UNITYSDK_OFFSET(0x1117E0A0)
#define CLASS_2_5138EB75687C6E63_METHOD_2_A88B36294D55B85C_OFFSET UNITYSDK_OFFSET(0x1117DBA0)
#define CLASS_2_5138EB75687C6E63_METHOD_2_BD63D668B3D52C00_OFFSET UNITYSDK_OFFSET(0x1117E850)
#define CLASS_2_5138EB75687C6E63_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1117EC60)
#define CLASS_2_5138EB75687C6E63__CTOR_OFFSET UNITYSDK_OFFSET(0x1117DA20)

inline static constexpr unsigned int Class_2_5138EB75687C6E63_TypeDefinitionIndex = 63353;

class Class_2_5138EB75687C6E63 : public ::Class_1_F65B6F8790DF074B
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x28
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_2; // 0x30
	::RPG::GameCore::ChenLingBattleAbility_ChainLightning* Field_2_0; // 0x38
	::System::Single Field_2_7; // 0x40
	::System::Int32 Field_2_5; // 0x44
	::System::Int32 Field_2_4; // 0x48
	::System::Single Field_2_6; // 0x4C
	::System::Int32 Field_2_3; // 0x50

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_36006FC25F5DDC69* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_2_5138EB75687C6E63__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A88B36294D55B85C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5138EB75687C6E63_METHOD_2_A88B36294D55B85C_OFFSET))(this);
	}

	::System::Void Method_2_1AB67458471FAC4D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_5138EB75687C6E63_METHOD_2_1AB67458471FAC4D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_66193B8782064F5D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5138EB75687C6E63_METHOD_2_66193B8782064F5D_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5138EB75687C6E63_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::Class_2_181A7F9409C60DBC* Method_2_392525CC2FC7EDDF()
	{
		return ((::Class_2_181A7F9409C60DBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5138EB75687C6E63_METHOD_2_392525CC2FC7EDDF_OFFSET))(this);
	}

	::System::Void Method_2_6F3643A075115E43(::Class_2_181A7F9409C60DBC* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_2_5138EB75687C6E63_METHOD_2_6F3643A075115E43_OFFSET))(this, a1);
	}

	::System::Void Method_2_BD63D668B3D52C00(::Class_2_181A7F9409C60DBC* a1, ::Class_2_181A7F9409C60DBC* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_181A7F9409C60DBC*, ::Class_2_181A7F9409C60DBC*))((::PBYTE)hIl2Cpp + CLASS_2_5138EB75687C6E63_METHOD_2_BD63D668B3D52C00_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5138EB75687C6E63_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};

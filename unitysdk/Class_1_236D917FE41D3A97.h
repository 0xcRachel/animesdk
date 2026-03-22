#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_25;
class Class_2_D5AD64F6FB3109AB;
class Class_2_DFB79F7EE671BF59;
namespace RPG::GameCore { class DiceCombatColorfulDiceSkillConditionConfig; }
namespace RPG::GameCore { class DiceCombatColorfulDiceSkillConfig; }

#define CLASS_1_236D917FE41D3A97_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15F16930)
#define CLASS_1_236D917FE41D3A97_METHOD_1_2E84DE4AB9605187_OFFSET UNITYSDK_OFFSET(0x15F2BB90)
#define CLASS_1_236D917FE41D3A97_METHOD_1_3CC6B316DDDB8996_OFFSET UNITYSDK_OFFSET(0x15F2C510)
#define CLASS_1_236D917FE41D3A97_METHOD_1_A1F5DCDA099A81E7_OFFSET UNITYSDK_OFFSET(0x15F2B350)
#define CLASS_1_236D917FE41D3A97_METHOD_1_D5E8A3A989701013_OFFSET UNITYSDK_OFFSET(0x15F2B5A0)
#define CLASS_1_236D917FE41D3A97_METHOD_1_E4799F441BE6E78F_OFFSET UNITYSDK_OFFSET(0x15F18D60)
#define CLASS_1_236D917FE41D3A97_METHOD_1_ED0B36F279FF857A_OFFSET UNITYSDK_OFFSET(0x15F2B980)
#define CLASS_1_236D917FE41D3A97_METHOD_1_F39AD2E3E8D82C90_OFFSET UNITYSDK_OFFSET(0x15F2C020)
#define CLASS_1_236D917FE41D3A97__CTOR_OFFSET UNITYSDK_OFFSET(0x15F18CB0)

inline static constexpr unsigned int Class_1_236D917FE41D3A97_TypeDefinitionIndex = 27774;

class Class_1_236D917FE41D3A97 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_25* Field_1_0; // 0x10
	::Class_2_DFB79F7EE671BF59* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_25* a1, ::Class_2_DFB79F7EE671BF59* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_25*, ::Class_2_DFB79F7EE671BF59*))((::PBYTE)hIl2Cpp + CLASS_1_236D917FE41D3A97__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_236D917FE41D3A97_INITIALIZE_OFFSET))(this);
	}

	::System::Boolean Method_1_A1F5DCDA099A81E7(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_236D917FE41D3A97_METHOD_1_A1F5DCDA099A81E7_OFFSET))(this, a1);
	}

	::RPG::GameCore::DiceCombatColorfulDiceSkillConfig* Method_1_E4799F441BE6E78F(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::DiceCombatColorfulDiceSkillConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_236D917FE41D3A97_METHOD_1_E4799F441BE6E78F_OFFSET))(this, a1);
	}

	::RPG::GameCore::DiceCombatColorfulDiceSkillConditionConfig* Method_1_D5E8A3A989701013(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::DiceCombatColorfulDiceSkillConditionConfig*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_236D917FE41D3A97_METHOD_1_D5E8A3A989701013_OFFSET))(this, a1);
	}

	::Il2CppArray<::RPG::GameCore::FixPoint>* Method_1_ED0B36F279FF857A(::System::UInt32 a1)
	{
		return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_236D917FE41D3A97_METHOD_1_ED0B36F279FF857A_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_2E84DE4AB9605187(::System::UInt32 a1, ::Class_2_D5AD64F6FB3109AB* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_2_D5AD64F6FB3109AB*))((::PBYTE)hIl2Cpp + CLASS_1_236D917FE41D3A97_METHOD_1_2E84DE4AB9605187_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F39AD2E3E8D82C90(::System::UInt32 a1, ::Class_2_D5AD64F6FB3109AB* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::Class_2_D5AD64F6FB3109AB*))((::PBYTE)hIl2Cpp + CLASS_1_236D917FE41D3A97_METHOD_1_F39AD2E3E8D82C90_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_3CC6B316DDDB8996(::Class_2_D5AD64F6FB3109AB* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*))((::PBYTE)hIl2Cpp + CLASS_1_236D917FE41D3A97_METHOD_1_3CC6B316DDDB8996_OFFSET))(this, a1);
	}
};

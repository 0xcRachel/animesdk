#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_0_16E4307DCC419505_788;
class Class_2_FCB7A4BBA3DC55BF;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_4BE85D776A3820AA_METHOD_2_09AB8FC0B8BA1B6E_OFFSET UNITYSDK_OFFSET(0xB2D7220)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0xB2D7850)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0xB2D6CA0)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_28F2C3729E175F1C_OFFSET UNITYSDK_OFFSET(0xB2D7060)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_30C2D368B2361B2C_OFFSET UNITYSDK_OFFSET(0xB2D68B0)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xB2D7A60)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0xB2D6F20)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_7D125704D7ED09B7_OFFSET UNITYSDK_OFFSET(0xB2D6780)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_8C6E66D260CC37AD_OFFSET UNITYSDK_OFFSET(0xB2D6590)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_9094A96EEEB7AD9B_OFFSET UNITYSDK_OFFSET(0xB2D6470)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_95984A50B71E04AE_OFFSET UNITYSDK_OFFSET(0xB2D7320)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_9839DFE3C10E4654_OFFSET UNITYSDK_OFFSET(0xB2D6DB0)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_B3B40D6CF776C6B6_OFFSET UNITYSDK_OFFSET(0xB2D66E0)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_BC2B532D3B9882DD_OFFSET UNITYSDK_OFFSET(0xB2D6400)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0xB2D6380)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0xB2D79F0)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_E10F3359B5E0D724_OFFSET UNITYSDK_OFFSET(0xB2D6AF0)
#define CLASS_2_4BE85D776A3820AA_METHOD_2_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0xB2D6C00)
#define CLASS_2_4BE85D776A3820AA__CTOR_OFFSET UNITYSDK_OFFSET(0xB2D7950)
#define CLASS_2_4BE85D776A3820AA__ONBIND_OFFSET UNITYSDK_OFFSET(0xB2D61A0)
#define CLASS_2_4BE85D776A3820AA___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xB2D7990)

inline static constexpr unsigned int Class_2_4BE85D776A3820AA_TypeDefinitionIndex = 57266;

class Class_2_4BE85D776A3820AA : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x60
	::Struct_2_96F8F0A04B900A9E Field_2_8; // 0x68
	::Class_0_16E4307DCC419505_788* Field_2_6; // 0x70
	::UnityEngine::Transform* Field_2_1; // 0x78
	::UnityEngine::Transform* Field_2_2; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_788*>* Field_2_9; // 0x88
	::Class_2_FCB7A4BBA3DC55BF* Field_2_7; // 0x90
	::RPG::Client::UISkillIndex Field_2_3; // 0x98
	::System::Boolean Field_2_4; // 0x9C
	::System::Boolean Field_2_5; // 0x9D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_BC2B532D3B9882DD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_BC2B532D3B9882DD_OFFSET))(this);
	}

	::System::Void Method_2_9094A96EEEB7AD9B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_9094A96EEEB7AD9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C6E66D260CC37AD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_8C6E66D260CC37AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_B3B40D6CF776C6B6(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_B3B40D6CF776C6B6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_30C2D368B2361B2C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_30C2D368B2361B2C_OFFSET))(this, a1);
	}

	::System::Void Method_2_E10F3359B5E0D724(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_E10F3359B5E0D724_OFFSET))(this, a1);
	}

	::System::Void Method_2_EBF44BC910948FDA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_EBF44BC910948FDA_OFFSET))(this, a1);
	}

	::System::Void Method_2_1CD1133DC003C11C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_1CD1133DC003C11C_OFFSET))(this, a1);
	}

	::System::Void Method_2_9839DFE3C10E4654(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_9839DFE3C10E4654_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7AEA4B2B25797605()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_7AEA4B2B25797605_OFFSET))(this);
	}

	::UnityEngine::RectTransform* Method_2_28F2C3729E175F1C()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_28F2C3729E175F1C_OFFSET))(this);
	}

	::System::Void Method_2_09AB8FC0B8BA1B6E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_09AB8FC0B8BA1B6E_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D125704D7ED09B7(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_7D125704D7ED09B7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_95984A50B71E04AE(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_95984A50B71E04AE_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_0DF420E95D6252BE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BE85D776A3820AA_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};

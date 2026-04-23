#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/RPG/GameCore/SkillUISpecialButtonType.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_0_16E4307DCC419505_968;
class Class_2_FCB7A4BBA3DC55BF;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_21AA3F542B6D03F8_METHOD_2_09AB8FC0B8BA1B6E_OFFSET UNITYSDK_OFFSET(0xAD86100)
#define CLASS_2_21AA3F542B6D03F8_METHOD_2_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0xAD869B0)
#define CLASS_2_21AA3F542B6D03F8_METHOD_2_1CD1133DC003C11C_OFFSET UNITYSDK_OFFSET(0xAD85B80)
#define CLASS_2_21AA3F542B6D03F8_METHOD_2_257C017134656F75_OFFSET UNITYSDK_OFFSET(0xAD86200)
#define CLASS_2_21AA3F542B6D03F8_METHOD_2_28F2C3729E175F1C_OFFSET UNITYSDK_OFFSET(0xAD85F50)
#define CLASS_2_21AA3F542B6D03F8_METHOD_2_30C2D368B2361B2C_OFFSET UNITYSDK_OFFSET(0xAD85790)
#define CLASS_2_21AA3F542B6D03F8_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xAD86BC0)
#define CLASS_2_21AA3F542B6D03F8_METHOD_2_5AD578FCE9CF19D4_OFFSET UNITYSDK_OFFSET(0xAD85280)
#define CLASS_2_21AA3F542B6D03F8_METHOD_2_76EE58E563E9FD76_OFFSET UNITYSDK_OFFSET(0xAD86530)
#define CLASS_2_21AA3F542B6D03F8_METHOD_2_7AEA4B2B25797605_OFFSET UNITYSDK_OFFSET(0xAD85E10)
#define CLASS_2_21AA3F542B6D03F8_METHOD_2_7D125704D7ED09B7_OFFSET UNITYSDK_OFFSET(0xAD85660)
#define CLASS_2_21AA3F542B6D03F8_METHOD_2_8C6E66D260CC37AD_OFFSET UNITYSDK_OFFSET(0xAD85470)
#define CLASS_2_21AA3F542B6D03F8_METHOD_2_9839DFE3C10E4654_OFFSET UNITYSDK_OFFSET(0xAD85CA0)
#define CLASS_2_21AA3F542B6D03F8_METHOD_2_A693F2E8D4F4A766_OFFSET UNITYSDK_OFFSET(0xAD865A0)
#define CLASS_2_21AA3F542B6D03F8_METHOD_2_B3B40D6CF776C6B6_OFFSET UNITYSDK_OFFSET(0xAD855C0)
#define CLASS_2_21AA3F542B6D03F8_METHOD_2_BCCEF225A11BDA90_OFFSET UNITYSDK_OFFSET(0xAD85200)
#define CLASS_2_21AA3F542B6D03F8_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0xAD86B50)
#define CLASS_2_21AA3F542B6D03F8_METHOD_2_E10F3359B5E0D724_OFFSET UNITYSDK_OFFSET(0xAD859D0)
#define CLASS_2_21AA3F542B6D03F8_METHOD_2_EBF44BC910948FDA_OFFSET UNITYSDK_OFFSET(0xAD85AE0)
#define CLASS_2_21AA3F542B6D03F8_METHOD_2_FB1C56FCE4ABD259_OFFSET UNITYSDK_OFFSET(0xAD852F0)
#define CLASS_2_21AA3F542B6D03F8__CTOR_OFFSET UNITYSDK_OFFSET(0xAD86AB0)
#define CLASS_2_21AA3F542B6D03F8__ONBIND_OFFSET UNITYSDK_OFFSET(0xAD85010)
#define CLASS_2_21AA3F542B6D03F8___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xAD86AF0)

inline static constexpr unsigned int Class_2_21AA3F542B6D03F8_TypeDefinitionIndex = 66234;

class Class_2_21AA3F542B6D03F8 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Transform* Field_2_2; // 0x60
	::UnityEngine::Transform* Field_2_0; // 0x68
	::Class_0_16E4307DCC419505_968* Field_2_6; // 0x70
	::Class_2_FCB7A4BBA3DC55BF* Field_2_7; // 0x78
	::UnityEngine::Transform* Field_2_1; // 0x80
	::Struct_2_96F8F0A04B900A9E Field_2_8; // 0x88
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_0_16E4307DCC419505_968*>* Field_2_9; // 0x90
	::System::Boolean Field_2_5; // 0x98
	::System::Boolean Field_2_4; // 0x99
	::RPG::Client::UISkillIndex Field_2_3; // 0x9C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21AA3F542B6D03F8__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21AA3F542B6D03F8__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_BCCEF225A11BDA90(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_21AA3F542B6D03F8_METHOD_2_BCCEF225A11BDA90_OFFSET))(this, a1);
	}

	::System::Void Method_2_5AD578FCE9CF19D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21AA3F542B6D03F8_METHOD_2_5AD578FCE9CF19D4_OFFSET))(this);
	}

	::System::Void Method_2_FB1C56FCE4ABD259(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_21AA3F542B6D03F8_METHOD_2_FB1C56FCE4ABD259_OFFSET))(this, a1);
	}

	::System::Void Method_2_8C6E66D260CC37AD(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_21AA3F542B6D03F8_METHOD_2_8C6E66D260CC37AD_OFFSET))(this, a1);
	}

	::System::Void Method_2_B3B40D6CF776C6B6(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_21AA3F542B6D03F8_METHOD_2_B3B40D6CF776C6B6_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_30C2D368B2361B2C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_21AA3F542B6D03F8_METHOD_2_30C2D368B2361B2C_OFFSET))(this, a1);
	}

	::System::Void Method_2_E10F3359B5E0D724(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_21AA3F542B6D03F8_METHOD_2_E10F3359B5E0D724_OFFSET))(this, a1);
	}

	::System::Void Method_2_EBF44BC910948FDA(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_21AA3F542B6D03F8_METHOD_2_EBF44BC910948FDA_OFFSET))(this, a1);
	}

	::System::Void Method_2_1CD1133DC003C11C(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_21AA3F542B6D03F8_METHOD_2_1CD1133DC003C11C_OFFSET))(this, a1);
	}

	::System::Void Method_2_9839DFE3C10E4654(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_21AA3F542B6D03F8_METHOD_2_9839DFE3C10E4654_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_7AEA4B2B25797605()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21AA3F542B6D03F8_METHOD_2_7AEA4B2B25797605_OFFSET))(this);
	}

	::UnityEngine::RectTransform* Method_2_28F2C3729E175F1C()
	{
		return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21AA3F542B6D03F8_METHOD_2_28F2C3729E175F1C_OFFSET))(this);
	}

	::System::Void Method_2_09AB8FC0B8BA1B6E(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_21AA3F542B6D03F8_METHOD_2_09AB8FC0B8BA1B6E_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D125704D7ED09B7(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_21AA3F542B6D03F8_METHOD_2_7D125704D7ED09B7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_257C017134656F75(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_21AA3F542B6D03F8_METHOD_2_257C017134656F75_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_A693F2E8D4F4A766(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_21AA3F542B6D03F8_METHOD_2_A693F2E8D4F4A766_OFFSET))(this, a1);
	}

	::System::Void Method_2_76EE58E563E9FD76(::RPG::GameCore::SkillUISpecialButtonType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillUISpecialButtonType))((::PBYTE)hIl2Cpp + CLASS_2_21AA3F542B6D03F8_METHOD_2_76EE58E563E9FD76_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21AA3F542B6D03F8_METHOD_2_0DF420E95D6252BE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21AA3F542B6D03F8___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_21AA3F542B6D03F8_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_21AA3F542B6D03F8_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};

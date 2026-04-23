#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_D650D0F10A391A4C_ButtonState.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/SkillSPProgressType.h"

class Class_1_05BD9C87E93CA0F8;
class Class_1_23621931BDBFAF77;
class Class_2_1A0F91E4CE01E769;
class Class_2_40491F513F4A6F01;
class Class_2_CBEE615EA05066BF;
class Class_2_D650D0F10A391A4C;
namespace RPG::Client { class LongPressEvent; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::Client { class SPProgress; }
namespace RPG::GameCore { class AbilityCurrentSPChange; }
namespace RPG::GameCore { class AbilityMaxSPChange; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillCharacterComponent; }
namespace RPG::GameCore { class SkillData; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_C32F908D158C360E_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xD1D8100)
#define CLASS_2_C32F908D158C360E_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xD1D82B0)
#define CLASS_2_C32F908D158C360E_METHOD_2_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xD1D5520)
#define CLASS_2_C32F908D158C360E_METHOD_2_0DB65CA3858A0FF2_OFFSET UNITYSDK_OFFSET(0xD1D5B80)
#define CLASS_2_C32F908D158C360E_METHOD_2_1178B2E4770EA6E3_OFFSET UNITYSDK_OFFSET(0xD1D58D0)
#define CLASS_2_C32F908D158C360E_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xD1D4E70)
#define CLASS_2_C32F908D158C360E_METHOD_2_18A7BF8B592973BC_OFFSET UNITYSDK_OFFSET(0xD1D6EC0)
#define CLASS_2_C32F908D158C360E_METHOD_2_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xD1D5170)
#define CLASS_2_C32F908D158C360E_METHOD_2_2A908DA4CAE4354A_OFFSET UNITYSDK_OFFSET(0xD1D7550)
#define CLASS_2_C32F908D158C360E_METHOD_2_3B4774276E3D469F_OFFSET UNITYSDK_OFFSET(0xD1D7AF0)
#define CLASS_2_C32F908D158C360E_METHOD_2_40E64ED64652D825_OFFSET UNITYSDK_OFFSET(0xD1D7B90)
#define CLASS_2_C32F908D158C360E_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xD1D5180)
#define CLASS_2_C32F908D158C360E_METHOD_2_4EA6B1791DACA9CC_OFFSET UNITYSDK_OFFSET(0xD1D6B90)
#define CLASS_2_C32F908D158C360E_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xD1D8530)
#define CLASS_2_C32F908D158C360E_METHOD_2_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xD1D8600)
#define CLASS_2_C32F908D158C360E_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xD1D84D0)
#define CLASS_2_C32F908D158C360E_METHOD_2_676CD2ECA00B10AF_OFFSET UNITYSDK_OFFSET(0xD1D6440)
#define CLASS_2_C32F908D158C360E_METHOD_2_6FAB972CB6DE2314_OFFSET UNITYSDK_OFFSET(0xD1D6D40)
#define CLASS_2_C32F908D158C360E_METHOD_2_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0xD1D6950)
#define CLASS_2_C32F908D158C360E_METHOD_2_7DA80ED45513D178_OFFSET UNITYSDK_OFFSET(0xD1D7890)
#define CLASS_2_C32F908D158C360E_METHOD_2_95780ED94B90ED36_1_OFFSET UNITYSDK_OFFSET(0xD1D79D0)
#define CLASS_2_C32F908D158C360E_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0xD1D7970)
#define CLASS_2_C32F908D158C360E_METHOD_2_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0xD1D70B0)
#define CLASS_2_C32F908D158C360E_METHOD_2_9EB6EE4EAAADCD97_OFFSET UNITYSDK_OFFSET(0xD1D56A0)
#define CLASS_2_C32F908D158C360E_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xD1D7E00)
#define CLASS_2_C32F908D158C360E_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0xD1D7EC0)
#define CLASS_2_C32F908D158C360E_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0xD1D7F80)
#define CLASS_2_C32F908D158C360E_METHOD_2_A27D06F9481FAFDB_4_OFFSET UNITYSDK_OFFSET(0xD1D8040)
#define CLASS_2_C32F908D158C360E_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xD1D7D40)
#define CLASS_2_C32F908D158C360E_METHOD_2_AC1BFDB3D2FC0C79_OFFSET UNITYSDK_OFFSET(0xD1D5030)
#define CLASS_2_C32F908D158C360E_METHOD_2_ACE888BF6F5BC5FD_OFFSET UNITYSDK_OFFSET(0xD1D65E0)
#define CLASS_2_C32F908D158C360E_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xD1D7000)
#define CLASS_2_C32F908D158C360E_METHOD_2_B37C805F1A4DBCFB_OFFSET UNITYSDK_OFFSET(0xD1D5600)
#define CLASS_2_C32F908D158C360E_METHOD_2_B3BC933000085B6A_OFFSET UNITYSDK_OFFSET(0xD1D72D0)
#define CLASS_2_C32F908D158C360E_METHOD_2_BF59FE15D48422D3_OFFSET UNITYSDK_OFFSET(0xD1D7A30)
#define CLASS_2_C32F908D158C360E_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xD1D52B0)
#define CLASS_2_C32F908D158C360E_METHOD_2_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0xD1D5DB0)
#define CLASS_2_C32F908D158C360E_METHOD_2_D77F7476BCD66744_OFFSET UNITYSDK_OFFSET(0xD1D4F40)
#define CLASS_2_C32F908D158C360E_METHOD_2_F206290BA342BA13_OFFSET UNITYSDK_OFFSET(0xD1D5350)
#define CLASS_2_C32F908D158C360E_METHOD_2_F25D2DE7181D2805_1_OFFSET UNITYSDK_OFFSET(0xD1D7810)
#define CLASS_2_C32F908D158C360E_METHOD_2_F25D2DE7181D2805_OFFSET UNITYSDK_OFFSET(0xD1D7250)
#define CLASS_2_C32F908D158C360E_METHOD_2_FB3259368AD56B95_OFFSET UNITYSDK_OFFSET(0xD1D6A10)
#define CLASS_2_C32F908D158C360E__CTOR_OFFSET UNITYSDK_OFFSET(0xD1D8430)
#define CLASS_2_C32F908D158C360E__ONBIND_OFFSET UNITYSDK_OFFSET(0xD1D4B90)
#define CLASS_2_C32F908D158C360E__ONTICK_OFFSET UNITYSDK_OFFSET(0xD1D52F0)
#define CLASS_2_C32F908D158C360E___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xD1D8660)
#define CLASS_2_C32F908D158C360E___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xD1D86C0)
#define CLASS_2_C32F908D158C360E___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xD1D8470)
#define CLASS_2_C32F908D158C360E___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0xD1D8590)

inline static constexpr unsigned int Class_2_C32F908D158C360E_TypeDefinitionIndex = 66615;

class Class_2_C32F908D158C360E : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_21; // 0x0
	// static const ::System::Int32 Field_2_33 = 0x2; // 0x0
	// static const ::System::String* Field_2_35; // 0x0
	// static const ::System::String* Field_2_36; // 0x0
	// static const ::System::String* Field_2_37; // 0x0
	::UnityEngine::Transform* Field_2_12; // 0x60
	::Class_2_40491F513F4A6F01* Field_2_20; // 0x68
	::RPG::GameCore::SkillData* Field_2_24; // 0x70
	::RPG::Client::PrefabLoadMeta* Field_2_14; // 0x78
	::UnityEngine::UI::Text* Field_2_17; // 0x80
	::UnityEngine::UI::Text* Field_2_18; // 0x88
	::UnityEngine::Animation* Field_2_2; // 0x90
	::UnityEngine::Transform* Field_2_13; // 0x98
	::UnityEngine::Transform* Field_2_15; // 0xA0
	::UnityEngine::ParticleSystem* Field_2_9; // 0xA8
	::RPG::GameCore::TurnBasedAbilityComponent* Field_2_29; // 0xB0
	::Class_2_CBEE615EA05066BF* Field_2_34; // 0xB8
	::RPG::GameCore::CharacterDataComponent* Field_2_28; // 0xC0
	::Class_1_23621931BDBFAF77* Field_2_5; // 0xC8
	::UnityEngine::Transform* Field_2_10; // 0xD0
	::RPG::Client::SPProgress* Field_2_6; // 0xD8
	::RPG::GameCore::BattleInstance* Field_2_23; // 0xE0
	::UnityEngine::Transform* Field_2_3; // 0xE8
	::RPG::Client::LongPressEvent* Field_2_19; // 0xF0
	::UnityEngine::Transform* Field_2_1; // 0xF8
	::Class_2_1A0F91E4CE01E769* Field_2_4; // 0x100
	::UnityEngine::Animation* Field_2_16; // 0x108
	::UnityEngine::UI::Image* Field_2_7; // 0x110
	::UnityEngine::ParticleSystem* Field_2_8; // 0x118
	::RPG::GameCore::SkillCharacterComponent* Field_2_30; // 0x120
	::RPG::GameCore::SkillData* Field_2_25; // 0x128
	::UnityEngine::UI::Image* Field_2_11; // 0x130
	::RPG::GameCore::GameEntity* Field_2_22; // 0x138
	::Class_2_D650D0F10A391A4C* Field_2_0; // 0x140
	::System::UInt32 Field_2_32; // 0x148
	::System::UInt32 Field_2_31; // 0x14C
	::RPG::GameCore::SkillSPProgressType Field_2_27; // 0x150
	::RPG::GameCore::FixPoint Field_2_26; // 0x158

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_D77F7476BCD66744(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_D77F7476BCD66744_OFFSET))(this, a1);
	}

	::System::Void Method_2_AC1BFDB3D2FC0C79(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_AC1BFDB3D2FC0C79_OFFSET))(this, a1);
	}

	::Class_1_CA217ABF4E3B4F3F* Method_2_24748FC20F375725()
	{
		return ((::Class_1_CA217ABF4E3B4F3F*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_0865E94460F11643_OFFSET))(this);
	}

	::System::Void Method_2_B37C805F1A4DBCFB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_B37C805F1A4DBCFB_OFFSET))(this, a1);
	}

	::System::Void Method_2_9EB6EE4EAAADCD97(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_9EB6EE4EAAADCD97_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0DB65CA3858A0FF2(::Class_1_05BD9C87E93CA0F8* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_05BD9C87E93CA0F8*))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_0DB65CA3858A0FF2_OFFSET))(this, a1);
	}

	::System::Void Method_2_676CD2ECA00B10AF(::RPG::GameCore::SkillData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_676CD2ECA00B10AF_OFFSET))(this, a1);
	}

	::System::Void Method_2_FB3259368AD56B95(::RPG::GameCore::AbilityCurrentSPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentSPChange*))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_FB3259368AD56B95_OFFSET))(this, a1);
	}

	::System::Void Method_2_6FAB972CB6DE2314(::RPG::GameCore::AbilityMaxSPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxSPChange*))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_6FAB972CB6DE2314_OFFSET))(this, a1);
	}

	::System::Void Method_2_18A7BF8B592973BC(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_18A7BF8B592973BC_OFFSET))(this, a1);
	}

	::System::Void Method_2_1178B2E4770EA6E3(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_1178B2E4770EA6E3_OFFSET))(this, a1);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_4EA6B1791DACA9CC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_4EA6B1791DACA9CC_OFFSET))(this);
	}

	::System::Void Method_2_B3BC933000085B6A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_B3BC933000085B6A_OFFSET))(this, a1);
	}

	::System::Void Method_2_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_2_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_CBDC22058B67F0FE_OFFSET))(this);
	}

	::System::Void Method_2_2A908DA4CAE4354A(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_2A908DA4CAE4354A_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixPoint Method_2_F25D2DE7181D2805()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_F25D2DE7181D2805_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_F25D2DE7181D2805_1()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_F25D2DE7181D2805_1_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_2_7DA80ED45513D178()
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_7DA80ED45513D178_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_95780ED94B90ED36_1_OFFSET))(this);
	}

	::System::Boolean Method_2_BF59FE15D48422D3(::RPG::GameCore::FixPoint a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_BF59FE15D48422D3_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_3B4774276E3D469F(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_3B4774276E3D469F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_ACE888BF6F5BC5FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_ACE888BF6F5BC5FD_OFFSET))(this);
	}

	::System::Void Method_2_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_735EE20B25F86BF4_OFFSET))(this);
	}

	::System::Void Method_2_40E64ED64652D825(::Class_2_D650D0F10A391A4C_ButtonState a1, ::Class_2_D650D0F10A391A4C_ButtonState a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D650D0F10A391A4C_ButtonState, ::Class_2_D650D0F10A391A4C_ButtonState))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_40E64ED64652D825_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F206290BA342BA13()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_F206290BA342BA13_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_A27D06F9481FAFDB_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_A27D06F9481FAFDB_4_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E___IFIXBASEPROXY__ONTICK_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E_METHOD_2_5790A55946AA509D_2_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C32F908D158C360E___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

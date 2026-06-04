#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/BossHeadEffType.h"
#include "unitysdk/RPG/GameCore/MonsterEnergyBarType.h"

class Class_1_503F91D5A9A9E6E5_1;
class Class_1_83665B095F1535B5_18;
class Class_2_01E36AFA5FDDCBCA;
class Class_2_42E244F0BC6ED6DB;
class Class_2_6E096A5FCBA7A3BD;
class Class_2_A7947638CBFEF9CF;
class Class_2_B26B9A6AA507E78F;
class Class_2_BEBFA6F35799FF11;
class Class_2_D3061860904844A0;
class Class_2_E0065B933D71D9A9;
class Class_2_F9B8FAD13AB85B32_1;
class Class_3_06E3452A211FC6E5;
namespace RPG::Client { class MonoInControlTip; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::GameCore { class AbilityCurrentStanceChange; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterBreakStateChange; }
namespace RPG::GameCore { class LevelGameModeStateChanged; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class SwitchBossHeadEffType; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_C33602C0D64FA524_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x148F68D0)
#define CLASS_2_C33602C0D64FA524_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x148F6DF0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_00A4B38C951C5BD5_OFFSET UNITYSDK_OFFSET(0x148F60E0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_0E90C422C1085C42_OFFSET UNITYSDK_OFFSET(0x148F5330)
#define CLASS_2_C33602C0D64FA524_METHOD_2_1622EF55C818E85D_OFFSET UNITYSDK_OFFSET(0x148F5690)
#define CLASS_2_C33602C0D64FA524_METHOD_2_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0x148F57D0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_266E1F1B4DF2F723_OFFSET UNITYSDK_OFFSET(0x148F3E70)
#define CLASS_2_C33602C0D64FA524_METHOD_2_29B5C83CF6627961_OFFSET UNITYSDK_OFFSET(0x148F4BA0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x148F3FB0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x148F44F0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_489E3BF8986E4AAB_OFFSET UNITYSDK_OFFSET(0x148F4580)
#define CLASS_2_C33602C0D64FA524_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x148F73C0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x148F7360)
#define CLASS_2_C33602C0D64FA524_METHOD_2_84516C3E776F194F_OFFSET UNITYSDK_OFFSET(0x148F5210)
#define CLASS_2_C33602C0D64FA524_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x148F5620)
#define CLASS_2_C33602C0D64FA524_METHOD_2_A27B39323ED04C8E_OFFSET UNITYSDK_OFFSET(0x148F5DA0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x148F62C0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x148F6360)
#define CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_3_OFFSET UNITYSDK_OFFSET(0x148F6400)
#define CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_4_OFFSET UNITYSDK_OFFSET(0x148F64A0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_5_OFFSET UNITYSDK_OFFSET(0x148F6540)
#define CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_6_OFFSET UNITYSDK_OFFSET(0x148F65A0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_7_OFFSET UNITYSDK_OFFSET(0x148F6600)
#define CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_8_OFFSET UNITYSDK_OFFSET(0x148F6760)
#define CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x148F6220)
#define CLASS_2_C33602C0D64FA524_METHOD_2_A41DCE32DA5A80B1_OFFSET UNITYSDK_OFFSET(0x148F4D20)
#define CLASS_2_C33602C0D64FA524_METHOD_2_AAD21DE195D05736_OFFSET UNITYSDK_OFFSET(0x148F52A0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x148F48E0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_BA446D4D3EBC6EEF_OFFSET UNITYSDK_OFFSET(0x148F3D10)
#define CLASS_2_C33602C0D64FA524_METHOD_2_CB8E229BDF290D41_OFFSET UNITYSDK_OFFSET(0x148F5A60)
#define CLASS_2_C33602C0D64FA524_METHOD_2_CFC95121222309BD_OFFSET UNITYSDK_OFFSET(0x148F5CD0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x148F4970)
#define CLASS_2_C33602C0D64FA524_METHOD_2_D53F77FB0786250F_OFFSET UNITYSDK_OFFSET(0x148F54B0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_DA1BF2C227DC3D86_1_OFFSET UNITYSDK_OFFSET(0x148F6180)
#define CLASS_2_C33602C0D64FA524_METHOD_2_DA1BF2C227DC3D86_2_OFFSET UNITYSDK_OFFSET(0x148F61D0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x148F6130)
#define CLASS_2_C33602C0D64FA524_METHOD_2_DA5F8F0272C5C192_OFFSET UNITYSDK_OFFSET(0x148F46B0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_1_OFFSET UNITYSDK_OFFSET(0x148F6800)
#define CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0x148F66A0)
#define CLASS_2_C33602C0D64FA524_METHOD_2_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x148F4130)
#define CLASS_2_C33602C0D64FA524_METHOD_2_FB9C56D85A195632_OFFSET UNITYSDK_OFFSET(0x148F4620)
#define CLASS_2_C33602C0D64FA524_METHOD_2_FC62D9B72750F5A4_OFFSET UNITYSDK_OFFSET(0x148F4A20)
#define CLASS_2_C33602C0D64FA524_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x148F3CB0)
#define CLASS_2_C33602C0D64FA524_ONRETURN_OFFSET UNITYSDK_OFFSET(0x148F3F50)
#define CLASS_2_C33602C0D64FA524__CTOR_OFFSET UNITYSDK_OFFSET(0x148F72D0)
#define CLASS_2_C33602C0D64FA524__ONBIND_OFFSET UNITYSDK_OFFSET(0x148F3370)
#define CLASS_2_C33602C0D64FA524__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x148F4350)
#define CLASS_2_C33602C0D64FA524__ONTICK_OFFSET UNITYSDK_OFFSET(0x148F43B0)
#define CLASS_2_C33602C0D64FA524___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x148F74E0)
#define CLASS_2_C33602C0D64FA524___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x148F7540)
#define CLASS_2_C33602C0D64FA524___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x148F7300)
#define CLASS_2_C33602C0D64FA524___IFIXBASEPROXY__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x148F7420)
#define CLASS_2_C33602C0D64FA524___IFIXBASEPROXY__ONTICK_OFFSET UNITYSDK_OFFSET(0x148F7480)

inline static constexpr unsigned int Class_2_C33602C0D64FA524_TypeDefinitionIndex = 67366;

class Class_2_C33602C0D64FA524 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	// static const ::System::Single Field_2_1; // 0x0
	// static const ::System::String* Field_2_2; // 0x0
	// static const ::System::String* Field_2_3; // 0x0
	// static const ::System::String* Field_2_4; // 0x0
	// static const ::System::String* Field_2_5; // 0x0
	// static const ::System::String* Field_2_6; // 0x0
	// static const ::System::String* Field_2_7; // 0x0
	::Class_2_A7947638CBFEF9CF* Field_2_8; // 0x60
	::UnityEngine::GameObject* Field_2_9; // 0x68
	::UnityEngine::Transform* Field_2_10; // 0x70
	::Class_2_01E36AFA5FDDCBCA* Field_2_11; // 0x78
	::UnityEngine::Animation* Field_2_12; // 0x80
	::Class_2_6E096A5FCBA7A3BD* Field_2_13; // 0x88
	::RPG::GameCore::CharacterDataComponent* Field_2_14; // 0x90
	::Class_2_F9B8FAD13AB85B32_1* Field_2_15; // 0x98
	::UnityEngine::Transform* Field_2_16; // 0xA0
	::UnityEngine::Transform* Field_2_17; // 0xA8
	::RPG::Client::MonoInControlTip* Field_2_18; // 0xB0
	::UnityEngine::Transform* Field_2_19; // 0xB8
	::UnityEngine::Animation* Field_2_20; // 0xC0
	::RPG::GameCore::LevelUIComponent* Field_2_21; // 0xC8
	::Class_3_06E3452A211FC6E5* Field_2_22; // 0xD0
	::Class_2_E0065B933D71D9A9* Field_2_23; // 0xD8
	::Class_2_D3061860904844A0* Field_2_24; // 0xE0
	::RPG::GameCore::BattleInstance* Field_2_25; // 0xE8
	::Class_2_BEBFA6F35799FF11* Field_2_26; // 0xF0
	::Class_2_B26B9A6AA507E78F* Field_2_27; // 0xF8
	::Class_2_42E244F0BC6ED6DB* Field_2_28; // 0x100
	::UnityEngine::Transform* Field_2_29; // 0x108
	::UnityEngine::Animation* Field_2_30; // 0x110
	::UnityEngine::UI::Image* Field_2_31; // 0x118
	::RPG::Client::PrefabLoadMeta* Field_2_32; // 0x120
	::RPG::GameCore::GameEntity* Field_2_33; // 0x128
	::UnityEngine::Transform* Field_2_34; // 0x130
	::System::Single Field_2_35; // 0x138
	::RPG::GameCore::MonsterEnergyBarType Field_2_36; // 0x13C
	::RPG::GameCore::BossHeadEffType Field_2_37; // 0x140
	::System::Boolean Field_2_38; // 0x144
	::System::Boolean Field_2_39; // 0x145
	::System::Boolean Field_2_40; // 0x146
	::System::Boolean Field_2_41; // 0x147

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524__ONBIND_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_F978A1D172468895()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_F978A1D172468895_OFFSET))(this);
	}

	::System::Void _OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524__ONDISPOSE_OFFSET))(this);
	}

	::System::Void _OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524__ONTICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_489E3BF8986E4AAB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_489E3BF8986E4AAB_OFFSET))(this, a1);
	}

	::System::Void Method_2_FB9C56D85A195632(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_FB9C56D85A195632_OFFSET))(this, a1);
	}

	::System::Void Method_2_BA446D4D3EBC6EEF(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_BA446D4D3EBC6EEF_OFFSET))(this, a1);
	}

	::System::Void Method_2_DA5F8F0272C5C192(::RPG::GameCore::AbilityCurrentHPChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_DA5F8F0272C5C192_OFFSET))(this, a1);
	}

	::System::Void Method_2_FC62D9B72750F5A4(::RPG::GameCore::AbilityCurrentShieldChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_FC62D9B72750F5A4_OFFSET))(this, a1);
	}

	::System::Void Method_2_29B5C83CF6627961(::RPG::GameCore::AbilityCurrentStanceChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentStanceChange*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_29B5C83CF6627961_OFFSET))(this, a1);
	}

	::System::Void Method_2_A41DCE32DA5A80B1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_A41DCE32DA5A80B1_OFFSET))(this);
	}

	::System::Void Method_2_AAD21DE195D05736()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_AAD21DE195D05736_OFFSET))(this);
	}

	::System::Void Method_2_0E90C422C1085C42(::RPG::GameCore::LevelGameModeStateChanged* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelGameModeStateChanged*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_0E90C422C1085C42_OFFSET))(this, a1);
	}

	::System::Void Method_2_D53F77FB0786250F(::RPG::GameCore::LevelCharacterBreakStateChange* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterBreakStateChange*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_D53F77FB0786250F_OFFSET))(this, a1);
	}

	::System::Void Method_2_1622EF55C818E85D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_1622EF55C818E85D_OFFSET))(this, a1);
	}

	::System::Void Method_2_84516C3E776F194F(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_84516C3E776F194F_OFFSET))(this, a1);
	}

	::System::Void Method_2_266E1F1B4DF2F723(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_266E1F1B4DF2F723_OFFSET))(this, a1);
	}

	::System::Void Method_2_1947BC35B7A7FCB8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_1947BC35B7A7FCB8_OFFSET))(this);
	}

	::System::Void Method_2_CFC95121222309BD(::Class_1_503F91D5A9A9E6E5_1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_503F91D5A9A9E6E5_1*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_CFC95121222309BD_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27B39323ED04C8E(::RPG::GameCore::SwitchBossHeadEffType* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::SwitchBossHeadEffType*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_A27B39323ED04C8E_OFFSET))(this, a1);
	}

	::System::Void Method_2_00A4B38C951C5BD5(::Class_1_83665B095F1535B5_18* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_83665B095F1535B5_18*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_00A4B38C951C5BD5_OFFSET))(this, a1);
	}

	::System::Void Method_2_CB8E229BDF290D41()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_CB8E229BDF290D41_OFFSET))(this);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_DA1BF2C227DC3D86_1_OFFSET))(this);
	}

	::System::String* Method_2_DA1BF2C227DC3D86_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_DA1BF2C227DC3D86_2_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_3(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_3_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_4_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_5(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_5_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_6_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_8(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_A27D06F9481FAFDB_8_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_F37CDBD6D46274D2_1_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524___IFIXBASEPROXY__ONDISPOSE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnTick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524___IFIXBASEPROXY__ONTICK_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C33602C0D64FA524___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

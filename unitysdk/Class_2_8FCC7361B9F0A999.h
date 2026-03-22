#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_8FCC7361B9F0A999_CounterType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_A273C454A7B0F463;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class RPGAnimationEvent; }
namespace RPG::GameCore { class AvatarEnergyBarState; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterRevive; }
namespace RPG::GameCore { class TriggerEnergyBarEffectParam; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define CLASS_2_8FCC7361B9F0A999_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x86EA5C0)
#define CLASS_2_8FCC7361B9F0A999_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x86EA730)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_0869E1192F8E01DF_OFFSET UNITYSDK_OFFSET(0x86E91A0)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_335AB672C838D49D_OFFSET UNITYSDK_OFFSET(0x86E95B0)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_3ADBDAC4E19C46FF_OFFSET UNITYSDK_OFFSET(0x86E9A60)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x86EAA20)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_6B6A8A44998B0B16_OFFSET UNITYSDK_OFFSET(0x86E96C0)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_717E5AEDA9FD8F84_OFFSET UNITYSDK_OFFSET(0x86E9360)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0x86E8F40)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_8AAA870BDF6CE134_OFFSET UNITYSDK_OFFSET(0x86E9E20)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x86E8E40)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x86E9540)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x86E92A0)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_A0CFDB5F5B1DB2D6_OFFSET UNITYSDK_OFFSET(0x86E9B50)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x86E9D00)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x86EA350)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x86EA410)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x86EA290)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0x86E9120)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_BB9510FC835F0664_OFFSET UNITYSDK_OFFSET(0x86E9FC0)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_C6E4AB6C40FAF7DC_OFFSET UNITYSDK_OFFSET(0x86E9C70)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x86EA9B0)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0x86EAA80)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_D7411E5DB745D614_OFFSET UNITYSDK_OFFSET(0x86EA150)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_E0C22160558909B0_OFFSET UNITYSDK_OFFSET(0x86E99D0)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_E8AE7970E4E0CA8B_OFFSET UNITYSDK_OFFSET(0x86EA0A0)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_EDA494CF8BB29EBF_OFFSET UNITYSDK_OFFSET(0x86EA220)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x86E90C0)
#define CLASS_2_8FCC7361B9F0A999_METHOD_2_FCEF005F844F513C_OFFSET UNITYSDK_OFFSET(0x86EA4D0)
#define CLASS_2_8FCC7361B9F0A999_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x86E8EA0)
#define CLASS_2_8FCC7361B9F0A999_ONRETURN_OFFSET UNITYSDK_OFFSET(0x86E9030)
#define CLASS_2_8FCC7361B9F0A999__CCTOR_OFFSET UNITYSDK_OFFSET(0x86EA8C0)
#define CLASS_2_8FCC7361B9F0A999__CTOR_OFFSET UNITYSDK_OFFSET(0x86EA880)
#define CLASS_2_8FCC7361B9F0A999__ONBIND_OFFSET UNITYSDK_OFFSET(0x86E8B50)
#define CLASS_2_8FCC7361B9F0A999___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x86EAAF0)
#define CLASS_2_8FCC7361B9F0A999___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x86EAB50)
#define CLASS_2_8FCC7361B9F0A999___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x86EA950)
#define CLASS_2_8FCC7361B9F0A999___ONBIND_B__0_0_OFFSET UNITYSDK_OFFSET(0x86EA930)

inline static constexpr unsigned int Class_2_8FCC7361B9F0A999_TypeDefinitionIndex = 56931;

class Class_2_8FCC7361B9F0A999 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::System::Int32* StaticGet_Field_2_21()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_8FCC7361B9F0A999_TypeDefinitionIndex)->GetStaticField(0xEF50);
	}
	static ::System::Int32* StaticGet_Field_2_20()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_8FCC7361B9F0A999_TypeDefinitionIndex)->GetStaticField(0xEF54);
	}
	// static const ::System::String* Field_2_24; // 0x0
	::UnityEngine::UI::Image* Field_2_2; // 0x60
	::UnityEngine::Animator* Field_2_11; // 0x68
	::RPG::GameCore::GameEntity* Field_2_13; // 0x70
	::UnityEngine::ParticleSystem* Field_2_8; // 0x78
	::UnityEngine::UI::Image* Field_2_1; // 0x80
	::UnityEngine::Transform* Field_2_10; // 0x88
	::UnityEngine::UI::Image* Field_2_4; // 0x90
	::RPG::Client::LocalizedText* Field_2_5; // 0x98
	::RPG::Client::LocalizedText* Field_2_6; // 0xA0
	::RPG::Client::RPGAnimationEvent* Field_2_0; // 0xA8
	::UnityEngine::ParticleSystem* Field_2_7; // 0xB0
	::UnityEngine::UI::Image* Field_2_3; // 0xB8
	::Class_2_A273C454A7B0F463* Field_2_12; // 0xC0
	::UnityEngine::Transform* Field_2_9; // 0xC8
	::System::Int32 Field_2_17; // 0xD0
	::System::Int32 Field_2_16; // 0xD4
	::Class_2_8FCC7361B9F0A999_CounterType Field_2_18; // 0xD8
	::System::Boolean Field_2_22; // 0xDC
	::System::Boolean Field_2_23; // 0xDD
	::RPG::GameCore::EnergyBarState Field_2_19; // 0xE0
	::System::Int32 Field_2_14; // 0xE4
	::System::Int32 Field_2_15; // 0xE8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_7A097E7EF929F289()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_7A097E7EF929F289_OFFSET))(this);
	}

	::System::Void Method_2_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void Method_2_F07808AF19FA033A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_F07808AF19FA033A_OFFSET))(this, a1);
	}

	::System::Void Method_2_717E5AEDA9FD8F84(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_717E5AEDA9FD8F84_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_0869E1192F8E01DF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_0869E1192F8E01DF_OFFSET))(this);
	}

	::RPG::GameCore::AvatarEnergyBarState* Method_2_335AB672C838D49D()
	{
		return ((::RPG::GameCore::AvatarEnergyBarState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_335AB672C838D49D_OFFSET))(this);
	}

	::System::Void Method_2_6B6A8A44998B0B16(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_6B6A8A44998B0B16_OFFSET))(this, a1);
	}

	::System::Void Method_2_E0C22160558909B0(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_E0C22160558909B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_8AAA870BDF6CE134(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_8AAA870BDF6CE134_OFFSET))(this, a1);
	}

	::System::Void Method_2_AFC8215C57A0845A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_AFC8215C57A0845A_OFFSET))(this);
	}

	::System::Void Method_2_BB9510FC835F0664(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_BB9510FC835F0664_OFFSET))(this, a1);
	}

	::System::Void Method_2_E8AE7970E4E0CA8B(::RPG::GameCore::TriggerEnergyBarEffectParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerEnergyBarEffectParam*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_E8AE7970E4E0CA8B_OFFSET))(this, a1);
	}

	::System::Void Method_2_D7411E5DB745D614(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_D7411E5DB745D614_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDA494CF8BB29EBF(::RPG::GameCore::LevelCharacterRevive* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterRevive*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_EDA494CF8BB29EBF_OFFSET))(this, a1);
	}

	::System::Void Method_2_3ADBDAC4E19C46FF(::RPG::GameCore::EnergyBarState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnergyBarState))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_3ADBDAC4E19C46FF_OFFSET))(this, a1);
	}

	::System::Void Method_2_A0CFDB5F5B1DB2D6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_A0CFDB5F5B1DB2D6_OFFSET))(this, a1);
	}

	::System::Void Method_2_C6E4AB6C40FAF7DC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_C6E4AB6C40FAF7DC_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_FCEF005F844F513C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_FCEF005F844F513C_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __OnBind_b__0_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999___ONBIND_B__0_0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999_METHOD_2_D5E5EC1B4538DDD1_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8FCC7361B9F0A999___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_813FDB0DF0F3263D;
namespace RPG::GameCore { class AvatarEnergyBarState; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterRevive; }
namespace RPG::GameCore { class TriggerEnergyBarEffectParam; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define CLASS_2_73B2377682176F79_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8BAE4F0)
#define CLASS_2_73B2377682176F79_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8BAE660)
#define CLASS_2_73B2377682176F79_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x8BADC90)
#define CLASS_2_73B2377682176F79_METHOD_2_335AB672C838D49D_OFFSET UNITYSDK_OFFSET(0x8BAD820)
#define CLASS_2_73B2377682176F79_METHOD_2_3E7178C5ECF017DB_1_OFFSET UNITYSDK_OFFSET(0x8BAD650)
#define CLASS_2_73B2377682176F79_METHOD_2_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x8BAD790)
#define CLASS_2_73B2377682176F79_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x8BAE8C0)
#define CLASS_2_73B2377682176F79_METHOD_2_6019D70B15213230_OFFSET UNITYSDK_OFFSET(0x8BADFC0)
#define CLASS_2_73B2377682176F79_METHOD_2_6CB74AF8628673F7_OFFSET UNITYSDK_OFFSET(0x8BAD930)
#define CLASS_2_73B2377682176F79_METHOD_2_705FFC79B57F4953_OFFSET UNITYSDK_OFFSET(0x8BADD70)
#define CLASS_2_73B2377682176F79_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x8BAD460)
#define CLASS_2_73B2377682176F79_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x8BAE230)
#define CLASS_2_73B2377682176F79_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x8BAE340)
#define CLASS_2_73B2377682176F79_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x8BAE170)
#define CLASS_2_73B2377682176F79_METHOD_2_A401D30DEFAC53C9_OFFSET UNITYSDK_OFFSET(0x8BADC30)
#define CLASS_2_73B2377682176F79_METHOD_2_B87EC24C505132F6_OFFSET UNITYSDK_OFFSET(0x8BAE050)
#define CLASS_2_73B2377682176F79_METHOD_2_BB9510FC835F0664_OFFSET UNITYSDK_OFFSET(0x8BADEE0)
#define CLASS_2_73B2377682176F79_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0x8BAE850)
#define CLASS_2_73B2377682176F79_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8BAD7E0)
#define CLASS_2_73B2377682176F79_METHOD_2_D5E5EC1B4538DDD1_OFFSET UNITYSDK_OFFSET(0x8BAE920)
#define CLASS_2_73B2377682176F79_METHOD_2_DC715239B8B98D9C_OFFSET UNITYSDK_OFFSET(0x8BAD560)
#define CLASS_2_73B2377682176F79_METHOD_2_E0C22160558909B0_OFFSET UNITYSDK_OFFSET(0x8BADBB0)
#define CLASS_2_73B2377682176F79_METHOD_2_EDA494CF8BB29EBF_OFFSET UNITYSDK_OFFSET(0x8BAE100)
#define CLASS_2_73B2377682176F79_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x8BADCE0)
#define CLASS_2_73B2377682176F79_METHOD_2_F4DD08A31BA3F883_OFFSET UNITYSDK_OFFSET(0x8BAD6A0)
#define CLASS_2_73B2377682176F79_METHOD_2_FCEF005F844F513C_OFFSET UNITYSDK_OFFSET(0x8BAE400)
#define CLASS_2_73B2377682176F79_METHOD_2_FF50A28543309FF7_OFFSET UNITYSDK_OFFSET(0x8BADE90)
#define CLASS_2_73B2377682176F79_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x8BAD4C0)
#define CLASS_2_73B2377682176F79_ONRETURN_OFFSET UNITYSDK_OFFSET(0x8BAD5D0)
#define CLASS_2_73B2377682176F79__CTOR_OFFSET UNITYSDK_OFFSET(0x8BAE7B0)
#define CLASS_2_73B2377682176F79__ONBIND_OFFSET UNITYSDK_OFFSET(0x8BAD110)
#define CLASS_2_73B2377682176F79___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x8BAE990)
#define CLASS_2_73B2377682176F79___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x8BAE9F0)
#define CLASS_2_73B2377682176F79___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x8BAE7F0)

inline static constexpr unsigned int Class_2_73B2377682176F79_TypeDefinitionIndex = 58518;

class Class_2_73B2377682176F79 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	// static const ::System::String* Field_2_8; // 0x0
	// static const ::System::String* Field_2_10; // 0x0
	::Il2CppArray<::Class_2_813FDB0DF0F3263D*>* Field_2_0; // 0x60
	::RPG::GameCore::GameEntity* Field_2_1; // 0x68
	::UnityEngine::Animation* Field_2_9; // 0x70
	::RPG::GameCore::EnergyBarState Field_2_6; // 0x78
	::System::Int32 Field_2_4; // 0x7C
	::System::Int32 Field_2_5; // 0x80
	::System::Int32 Field_2_2; // 0x84
	::System::Int32 Field_2_3; // 0x88
	::System::Boolean Field_2_7; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_DC715239B8B98D9C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79_METHOD_2_DC715239B8B98D9C_OFFSET))(this);
	}

	::System::Void Method_2_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79_METHOD_2_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_2_3E7178C5ECF017DB_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79_METHOD_2_3E7178C5ECF017DB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_F4DD08A31BA3F883()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79_METHOD_2_F4DD08A31BA3F883_OFFSET))(this);
	}

	::RPG::GameCore::AvatarEnergyBarState* Method_2_335AB672C838D49D()
	{
		return ((::RPG::GameCore::AvatarEnergyBarState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79_METHOD_2_335AB672C838D49D_OFFSET))(this);
	}

	::System::Void Method_2_6CB74AF8628673F7(::RPG::GameCore::AvatarEnergyBarState* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79_METHOD_2_6CB74AF8628673F7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_E0C22160558909B0(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79_METHOD_2_E0C22160558909B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_FF50A28543309FF7(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79_METHOD_2_FF50A28543309FF7_OFFSET))(this, a1);
	}

	::System::Void Method_2_F07808AF19FA033A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79_METHOD_2_F07808AF19FA033A_OFFSET))(this, a1);
	}

	::System::Void Method_2_BB9510FC835F0664(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79_METHOD_2_BB9510FC835F0664_OFFSET))(this, a1);
	}

	::System::Void Method_2_6019D70B15213230(::RPG::GameCore::TriggerEnergyBarEffectParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerEnergyBarEffectParam*))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79_METHOD_2_6019D70B15213230_OFFSET))(this, a1);
	}

	::System::Void Method_2_B87EC24C505132F6(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79_METHOD_2_B87EC24C505132F6_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDA494CF8BB29EBF(::RPG::GameCore::LevelCharacterRevive* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterRevive*))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79_METHOD_2_EDA494CF8BB29EBF_OFFSET))(this, a1);
	}

	::System::Void Method_2_A401D30DEFAC53C9(::RPG::GameCore::EnergyBarState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnergyBarState))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79_METHOD_2_A401D30DEFAC53C9_OFFSET))(this, a1);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Void Method_2_705FFC79B57F4953(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79_METHOD_2_705FFC79B57F4953_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_FCEF005F844F513C(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79_METHOD_2_FCEF005F844F513C_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_D5E5EC1B4538DDD1(::System::Boolean P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79_METHOD_2_D5E5EC1B4538DDD1_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_73B2377682176F79___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

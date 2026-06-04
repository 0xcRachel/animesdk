#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Class_2_502927AFB685B19B_CounterType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/EnergyBarState.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_2_76CE3186892724E8;
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

#define CLASS_2_502927AFB685B19B_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1442C1E0)
#define CLASS_2_502927AFB685B19B_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1442C3A0)
#define CLASS_2_502927AFB685B19B_METHOD_2_0D64F99BAAA7B5C4_OFFSET UNITYSDK_OFFSET(0x1442C0E0)
#define CLASS_2_502927AFB685B19B_METHOD_2_2CD6D17D088D5DB9_OFFSET UNITYSDK_OFFSET(0x1442AEA0)
#define CLASS_2_502927AFB685B19B_METHOD_2_3ADBDAC4E19C46FF_OFFSET UNITYSDK_OFFSET(0x1442B5D0)
#define CLASS_2_502927AFB685B19B_METHOD_2_4E42C1D03BBB9919_OFFSET UNITYSDK_OFFSET(0x1442B2A0)
#define CLASS_2_502927AFB685B19B_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1442C6D0)
#define CLASS_2_502927AFB685B19B_METHOD_2_5D9CF83CFC617CF9_OFFSET UNITYSDK_OFFSET(0x1442C670)
#define CLASS_2_502927AFB685B19B_METHOD_2_717E5AEDA9FD8F84_OFFSET UNITYSDK_OFFSET(0x1442B060)
#define CLASS_2_502927AFB685B19B_METHOD_2_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0x1442B7F0)
#define CLASS_2_502927AFB685B19B_METHOD_2_8AAA870BDF6CE134_OFFSET UNITYSDK_OFFSET(0x1442BA10)
#define CLASS_2_502927AFB685B19B_METHOD_2_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x1442AB20)
#define CLASS_2_502927AFB685B19B_METHOD_2_8D61BE16C9463302_OFFSET UNITYSDK_OFFSET(0x1442AC30)
#define CLASS_2_502927AFB685B19B_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1442B240)
#define CLASS_2_502927AFB685B19B_METHOD_2_98CD8BF64F5D1A46_OFFSET UNITYSDK_OFFSET(0x1442B3C0)
#define CLASS_2_502927AFB685B19B_METHOD_2_9D9CF8F6C2342EE5_OFFSET UNITYSDK_OFFSET(0x1442AFA0)
#define CLASS_2_502927AFB685B19B_METHOD_2_A0CFDB5F5B1DB2D6_OFFSET UNITYSDK_OFFSET(0x1442B6D0)
#define CLASS_2_502927AFB685B19B_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1442B8F0)
#define CLASS_2_502927AFB685B19B_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0x1442BF20)
#define CLASS_2_502927AFB685B19B_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0x1442C040)
#define CLASS_2_502927AFB685B19B_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0x1442BE80)
#define CLASS_2_502927AFB685B19B_METHOD_2_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0x1442AE20)
#define CLASS_2_502927AFB685B19B_METHOD_2_BB9510FC835F0664_OFFSET UNITYSDK_OFFSET(0x1442BBB0)
#define CLASS_2_502927AFB685B19B_METHOD_2_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0x1442C730)
#define CLASS_2_502927AFB685B19B_METHOD_2_D7411E5DB745D614_OFFSET UNITYSDK_OFFSET(0x1442BD40)
#define CLASS_2_502927AFB685B19B_METHOD_2_E0C22160558909B0_OFFSET UNITYSDK_OFFSET(0x1442B540)
#define CLASS_2_502927AFB685B19B_METHOD_2_E8AE7970E4E0CA8B_OFFSET UNITYSDK_OFFSET(0x1442BC90)
#define CLASS_2_502927AFB685B19B_METHOD_2_EDA494CF8BB29EBF_OFFSET UNITYSDK_OFFSET(0x1442BE10)
#define CLASS_2_502927AFB685B19B_METHOD_2_F07808AF19FA033A_OFFSET UNITYSDK_OFFSET(0x1442ADC0)
#define CLASS_2_502927AFB685B19B_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1442AB90)
#define CLASS_2_502927AFB685B19B_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1442AD30)
#define CLASS_2_502927AFB685B19B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1442C580)
#define CLASS_2_502927AFB685B19B__CTOR_OFFSET UNITYSDK_OFFSET(0x1442C540)
#define CLASS_2_502927AFB685B19B__ONBIND_OFFSET UNITYSDK_OFFSET(0x1442A820)
#define CLASS_2_502927AFB685B19B___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1442C790)
#define CLASS_2_502927AFB685B19B___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1442C7F0)
#define CLASS_2_502927AFB685B19B___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x1442C610)
#define CLASS_2_502927AFB685B19B___ONBIND_B__0_0_OFFSET UNITYSDK_OFFSET(0x1442C5F0)

inline static constexpr unsigned int Class_2_502927AFB685B19B_TypeDefinitionIndex = 66749;

class Class_2_502927AFB685B19B : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	static ::System::Int32* StaticGet_Field_2_0()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_502927AFB685B19B_TypeDefinitionIndex)->GetStaticField(0x9470);
	}
	static ::System::Int32* StaticGet_Field_2_1()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_502927AFB685B19B_TypeDefinitionIndex)->GetStaticField(0x9474);
	}
	// static const ::System::String* Field_2_2; // 0x0
	::UnityEngine::ParticleSystem* Field_2_3; // 0x60
	::UnityEngine::Transform* Field_2_4; // 0x68
	::UnityEngine::UI::Image* Field_2_5; // 0x70
	::RPG::Client::LocalizedText* Field_2_6; // 0x78
	::RPG::Client::RPGAnimationEvent* Field_2_7; // 0x80
	::RPG::GameCore::GameEntity* Field_2_8; // 0x88
	::UnityEngine::UI::Image* Field_2_9; // 0x90
	::RPG::Client::LocalizedText* Field_2_10; // 0x98
	::Class_2_76CE3186892724E8* Field_2_11; // 0xA0
	::UnityEngine::Transform* Field_2_12; // 0xA8
	::UnityEngine::UI::Image* Field_2_13; // 0xB0
	::UnityEngine::ParticleSystem* Field_2_14; // 0xB8
	::UnityEngine::UI::Image* Field_2_15; // 0xC0
	::UnityEngine::Animator* Field_2_16; // 0xC8
	::Class_2_502927AFB685B19B_CounterType Field_2_17; // 0xD0
	::System::Int32 Field_2_18; // 0xD4
	::System::Int32 Field_2_19; // 0xD8
	::System::Int32 Field_2_20; // 0xDC
	::System::Boolean Field_2_21; // 0xE0
	::System::Boolean Field_2_22; // 0xE1
	::System::Int32 Field_2_23; // 0xE4
	::RPG::GameCore::EnergyBarState Field_2_24; // 0xE8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B__CCTOR_OFFSET))();
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_8CE0803574BB66D7(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_METHOD_2_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_ONRETURN_OFFSET))(this);
	}

	::System::Void Method_2_8D61BE16C9463302()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_METHOD_2_8D61BE16C9463302_OFFSET))(this);
	}

	::System::Void Method_2_9D9CF8F6C2342EE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_METHOD_2_9D9CF8F6C2342EE5_OFFSET))(this, a1);
	}

	::System::Void Method_2_F07808AF19FA033A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_METHOD_2_F07808AF19FA033A_OFFSET))(this, a1);
	}

	::System::Void Method_2_717E5AEDA9FD8F84(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_METHOD_2_717E5AEDA9FD8F84_OFFSET))(this, a1);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_2CD6D17D088D5DB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_METHOD_2_2CD6D17D088D5DB9_OFFSET))(this);
	}

	::RPG::GameCore::AvatarEnergyBarState* Method_2_4E42C1D03BBB9919()
	{
		return ((::RPG::GameCore::AvatarEnergyBarState*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_METHOD_2_4E42C1D03BBB9919_OFFSET))(this);
	}

	::System::Void Method_2_98CD8BF64F5D1A46(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_METHOD_2_98CD8BF64F5D1A46_OFFSET))(this, a1);
	}

	::System::Void Method_2_E0C22160558909B0(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_METHOD_2_E0C22160558909B0_OFFSET))(this, a1);
	}

	::System::Void Method_2_8AAA870BDF6CE134(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_METHOD_2_8AAA870BDF6CE134_OFFSET))(this, a1);
	}

	::System::Void Method_2_AFC8215C57A0845A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_METHOD_2_AFC8215C57A0845A_OFFSET))(this);
	}

	::System::Void Method_2_BB9510FC835F0664(::RPG::GameCore::AvatarEnergyBarState* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarEnergyBarState*))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_METHOD_2_BB9510FC835F0664_OFFSET))(this, a1);
	}

	::System::Void Method_2_E8AE7970E4E0CA8B(::RPG::GameCore::TriggerEnergyBarEffectParam* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerEnergyBarEffectParam*))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_METHOD_2_E8AE7970E4E0CA8B_OFFSET))(this, a1);
	}

	::System::Void Method_2_D7411E5DB745D614(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_METHOD_2_D7411E5DB745D614_OFFSET))(this, a1);
	}

	::System::Void Method_2_EDA494CF8BB29EBF(::RPG::GameCore::LevelCharacterRevive* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterRevive*))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_METHOD_2_EDA494CF8BB29EBF_OFFSET))(this, a1);
	}

	::System::Void Method_2_3ADBDAC4E19C46FF(::RPG::GameCore::EnergyBarState a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EnergyBarState))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_METHOD_2_3ADBDAC4E19C46FF_OFFSET))(this, a1);
	}

	::System::Void Method_2_A0CFDB5F5B1DB2D6(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_METHOD_2_A0CFDB5F5B1DB2D6_OFFSET))(this, a1);
	}

	::System::Void Method_2_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_METHOD_2_7744894CEC41BF06_OFFSET))(this);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void Method_2_0D64F99BAAA7B5C4(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_METHOD_2_0D64F99BAAA7B5C4_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __OnBind_b__0_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B___ONBIND_B__0_0_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5D9CF83CFC617CF9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_METHOD_2_5D9CF83CFC617CF9_OFFSET))(this, a1);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_C91E5170F9E36EED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B_METHOD_2_C91E5170F9E36EED_OFFSET))(this, a1);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_502927AFB685B19B___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

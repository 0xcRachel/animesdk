#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"
#include "unitysdk/Struct_2_96F8F0A04B900A9E.h"

class Class_1_36816D4DE394D200;
class Class_1_4E1F0899AF741697;
class Class_1_945ACFB1FEBC7A2C_14;
class Class_1_ACDBC0A3CD89B5C3;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_2_BDAC180F4F27C7EC_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xD22E420)
#define CLASS_2_BDAC180F4F27C7EC_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xD22E570)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_068B7007D3FD83B2_OFFSET UNITYSDK_OFFSET(0xD22D2B0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_0E43E9C5DBCA278F_OFFSET UNITYSDK_OFFSET(0xD22DD70)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xD22D310)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_392A99FB3A180EF3_OFFSET UNITYSDK_OFFSET(0xD22C550)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0xD22C2B0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_45AA2F5085C2C40D_1_OFFSET UNITYSDK_OFFSET(0xD22C500)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_45AA2F5085C2C40D_2_OFFSET UNITYSDK_OFFSET(0xD22C940)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_45AA2F5085C2C40D_OFFSET UNITYSDK_OFFSET(0xD22C4B0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_547E7659834BBCB0_OFFSET UNITYSDK_OFFSET(0xD22D970)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xD22E8D0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xD22E800)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_5C48CEB9104412C2_OFFSET UNITYSDK_OFFSET(0xD22C990)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_6BCEDD4814D8A8D9_OFFSET UNITYSDK_OFFSET(0xD22C410)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_7D7DE6E1DDD77BDA_OFFSET UNITYSDK_OFFSET(0xD22B9A0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_7FD7BDD5DEE836E5_OFFSET UNITYSDK_OFFSET(0xD22D3D0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_825CC99DD653DEE0_OFFSET UNITYSDK_OFFSET(0xD22BD40)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_A27D06F9481FAFDB_1_OFFSET UNITYSDK_OFFSET(0xD22E2D0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_A27D06F9481FAFDB_2_OFFSET UNITYSDK_OFFSET(0xD22E360)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_A27D06F9481FAFDB_OFFSET UNITYSDK_OFFSET(0xD22E150)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_AA7FB8548742F9CE_OFFSET UNITYSDK_OFFSET(0xD22C6E0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_AF0D9CA060A829A6_OFFSET UNITYSDK_OFFSET(0xD22DE80)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_BA57864237F8FA12_1_OFFSET UNITYSDK_OFFSET(0xD22D750)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_BA57864237F8FA12_OFFSET UNITYSDK_OFFSET(0xD22D530)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_BAB7C14A41799CF3_OFFSET UNITYSDK_OFFSET(0xD22D370)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_C89A41A14F7CCD91_OFFSET UNITYSDK_OFFSET(0xD22E860)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_CBFC4C5C2FE89949_1_OFFSET UNITYSDK_OFFSET(0xD22D0A0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_CBFC4C5C2FE89949_OFFSET UNITYSDK_OFFSET(0xD22CFC0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_EA1A779C58FC3580_OFFSET UNITYSDK_OFFSET(0xD22C770)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_F014BA0503249756_1_OFFSET UNITYSDK_OFFSET(0xD22CD10)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_F014BA0503249756_OFFSET UNITYSDK_OFFSET(0xD22CA60)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_F37CDBD6D46274D2_OFFSET UNITYSDK_OFFSET(0xD22E1E0)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_F887CFE58B75AD0E_1_OFFSET UNITYSDK_OFFSET(0xD22D210)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_F887CFE58B75AD0E_OFFSET UNITYSDK_OFFSET(0xD22D170)
#define CLASS_2_BDAC180F4F27C7EC_METHOD_2_FB84CA7105A88F81_OFFSET UNITYSDK_OFFSET(0xD22DBA0)
#define CLASS_2_BDAC180F4F27C7EC_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xD22BCA0)
#define CLASS_2_BDAC180F4F27C7EC_ONRETURN_OFFSET UNITYSDK_OFFSET(0xD22B950)
#define CLASS_2_BDAC180F4F27C7EC__CTOR_OFFSET UNITYSDK_OFFSET(0xD22E690)
#define CLASS_2_BDAC180F4F27C7EC__ONBIND_OFFSET UNITYSDK_OFFSET(0xD22B480)
#define CLASS_2_BDAC180F4F27C7EC___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xD22E930)
#define CLASS_2_BDAC180F4F27C7EC___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xD22E990)
#define CLASS_2_BDAC180F4F27C7EC___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0xD22E7A0)

inline static constexpr unsigned int Class_2_BDAC180F4F27C7EC_TypeDefinitionIndex = 57385;

class Class_2_BDAC180F4F27C7EC : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::UnityEngine::Transform* Field_2_2; // 0x60
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* Field_2_8; // 0x68
	::RPG::GameCore::GameEntity* Field_2_4; // 0x70
	::Class_1_4E1F0899AF741697* Field_2_6; // 0x78
	::Il2CppArray<::UnityEngine::Transform*>* Field_2_3; // 0x80
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* Field_2_7; // 0x88
	::System::Boolean Field_2_1; // 0x90
	::System::Int32 Field_2_0; // 0x94
	::System::Int32 Field_2_5; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC__ONBIND_OFFSET))(this);
	}

	::System::Void OnReturn()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_ONRETURN_OFFSET))(this);
	}

	::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_ONACQUIRE_OFFSET))(this, a1);
	}

	::System::Void Method_2_4307B2A4B4A12C1A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_4307B2A4B4A12C1A_OFFSET))(this);
	}

	::System::Void Method_2_6BCEDD4814D8A8D9(::Struct_2_96F8F0A04B900A9E a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_6BCEDD4814D8A8D9_OFFSET))(this, a1);
	}

	::System::Void Method_2_45AA2F5085C2C40D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_45AA2F5085C2C40D_OFFSET))(this);
	}

	::System::Void Method_2_45AA2F5085C2C40D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_45AA2F5085C2C40D_1_OFFSET))(this);
	}

	::System::Void Method_2_392A99FB3A180EF3(::Class_1_36816D4DE394D200* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_36816D4DE394D200*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_392A99FB3A180EF3_OFFSET))(this, a1);
	}

	::System::Void Method_2_45AA2F5085C2C40D_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_45AA2F5085C2C40D_2_OFFSET))(this);
	}

	::System::Void Method_2_5C48CEB9104412C2(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_5C48CEB9104412C2_OFFSET))(this, a1);
	}

	::System::Void Method_2_AA7FB8548742F9CE(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_AA7FB8548742F9CE_OFFSET))(this, a1);
	}

	::System::Void Method_2_EA1A779C58FC3580(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_EA1A779C58FC3580_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_CBFC4C5C2FE89949(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_CBFC4C5C2FE89949_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_CBFC4C5C2FE89949_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_CBFC4C5C2FE89949_1_OFFSET))(this, a1);
	}

	::System::String* Method_2_F887CFE58B75AD0E(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_F887CFE58B75AD0E_OFFSET))(this, a1);
	}

	::System::String* Method_2_F887CFE58B75AD0E_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_F887CFE58B75AD0E_1_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_F014BA0503249756(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_F014BA0503249756_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_2_F014BA0503249756_1(::RPG::GameCore::TurnBasedModifierInstance* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_F014BA0503249756_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_7D7DE6E1DDD77BDA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_7D7DE6E1DDD77BDA_OFFSET))(this);
	}

	::System::Void Method_2_825CC99DD653DEE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_825CC99DD653DEE0_OFFSET))(this);
	}

	::System::Void Method_2_7FD7BDD5DEE836E5(::RPG::GameCore::TurnBasedModifierInstance* a1, ::System::Boolean a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::System::Boolean, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_7FD7BDD5DEE836E5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_BA57864237F8FA12(::RPG::GameCore::TurnBasedModifierInstance* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_BA57864237F8FA12_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_547E7659834BBCB0(::UnityEngine::Transform* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_547E7659834BBCB0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BA57864237F8FA12_1(::RPG::GameCore::TurnBasedModifierInstance* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_BA57864237F8FA12_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0E43E9C5DBCA278F(::UnityEngine::Transform* a1, ::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_14*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Collections::Generic::List_1<::Class_1_945ACFB1FEBC7A2C_14*>*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_0E43E9C5DBCA278F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_FB84CA7105A88F81(::UnityEngine::Animator* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_FB84CA7105A88F81_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_AF0D9CA060A829A6(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_AF0D9CA060A829A6_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::System::String*>* Method_2_BAB7C14A41799CF3()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_BAB7C14A41799CF3_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::Class_1_ACDBC0A3CD89B5C3* Method_2_068B7007D3FD83B2()
	{
		return ((::Class_1_ACDBC0A3CD89B5C3*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_068B7007D3FD83B2_OFFSET))(this);
	}

	::System::Void Method_2_A27D06F9481FAFDB(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_A27D06F9481FAFDB_OFFSET))(this, a1);
	}

	::System::Void Method_2_F37CDBD6D46274D2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_F37CDBD6D46274D2_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_1(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_A27D06F9481FAFDB_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_A27D06F9481FAFDB_2(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_A27D06F9481FAFDB_2_OFFSET))(this, a1);
	}

	::System::Void AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_AUTOREMOVECALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}

	::System::Void Method_2_C89A41A14F7CCD91(::Struct_2_96F8F0A04B900A9E P0)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_96F8F0A04B900A9E))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_C89A41A14F7CCD91_OFFSET))(this, P0);
	}

	::System::Void Method_2_5790A55946AA509D_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC_METHOD_2_5790A55946AA509D_1_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoBindCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC___IFIXBASEPROXY_AUTOBINDCALLBACK_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_AutoRemoveCallback()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BDAC180F4F27C7EC___IFIXBASEPROXY_AUTOREMOVECALLBACK_OFFSET))(this);
	}
};

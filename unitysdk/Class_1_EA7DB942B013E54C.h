#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameObjectPoolReleaseMode.h"
#include "unitysdk/RPG/Client/GameObjectPoolUsage.h"
#include "unitysdk/RPG/Client/PoolGameObjectInstantiateStrategy.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_551;
class Class_1_A0302E9AE0B8A2B9;
class Class_1_A067D82B1A7452F6;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_EA7DB942B013E54C_GET_EFFECTINSTANCEBUDGETBIAS_OFFSET UNITYSDK_OFFSET(0xED78DE0)
#define CLASS_1_EA7DB942B013E54C_GET_FASTLOADMODE_OFFSET UNITYSDK_OFFSET(0xED78BE0)
#define CLASS_1_EA7DB942B013E54C_GET_IGNOREINSTANCEBUDGET_OFFSET UNITYSDK_OFFSET(0xED78D60)
#define CLASS_1_EA7DB942B013E54C_GET_INSTANTIATETIMEOUTBIAS_OFFSET UNITYSDK_OFFSET(0xED78DC0)
#define CLASS_1_EA7DB942B013E54C_GET_MAXSPAWNWAITTIME_OFFSET UNITYSDK_OFFSET(0xED78DA0)
#define CLASS_1_EA7DB942B013E54C_GET_POOLAUTORELEASEINTERVAL_OFFSET UNITYSDK_OFFSET(0xED78D80)
#define CLASS_1_EA7DB942B013E54C_GET_POOLAUTORELEASEMEMORYTHRESH_OFFSET UNITYSDK_OFFSET(0xED78C00)
#define CLASS_1_EA7DB942B013E54C_GET_POOLIMMEDIATELYRELEASEMEMORYTHRESH_OFFSET UNITYSDK_OFFSET(0xED78C20)
#define CLASS_1_EA7DB942B013E54C_GET_POOLRELEASEMODE_OFFSET UNITYSDK_OFFSET(0xED78C40)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_0906715724957362_OFFSET UNITYSDK_OFFSET(0xED76E80)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xED775C0)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_17BD30EFE8176014_OFFSET UNITYSDK_OFFSET(0xED75A40)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_1F7FE07FD068BC29_OFFSET UNITYSDK_OFFSET(0xED78D50)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_21A03208CD384BE4_OFFSET UNITYSDK_OFFSET(0xED77330)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_226842F6044F973B_OFFSET UNITYSDK_OFFSET(0xED75BB0)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_444E41890AF6E3D9_OFFSET UNITYSDK_OFFSET(0xED75D30)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_480A176CBCFE165D_OFFSET UNITYSDK_OFFSET(0xED77980)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_50BD4AA0628D1418_OFFSET UNITYSDK_OFFSET(0xED762B0)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_567BBDE5A68B6AA9_OFFSET UNITYSDK_OFFSET(0xED77660)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xED78BA0)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_6D2BFCD0536B28C9_OFFSET UNITYSDK_OFFSET(0xED76CE0)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0xED78920)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_72391C982DF63FDE_OFFSET UNITYSDK_OFFSET(0xED76120)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_7AAA6FC0F0F914CF_OFFSET UNITYSDK_OFFSET(0xED76C00)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_840CB3BD5C356356_OFFSET UNITYSDK_OFFSET(0xED76DC0)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_890F5FC885825F9E_OFFSET UNITYSDK_OFFSET(0xED778A0)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_8C66368C6B0B8DE3_OFFSET UNITYSDK_OFFSET(0xED786A0)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_8C704EC832EDEFC8_OFFSET UNITYSDK_OFFSET(0xED77BE0)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_8D81CB4AD08D8989_OFFSET UNITYSDK_OFFSET(0xED76F70)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_8E61C4592394C6B5_OFFSET UNITYSDK_OFFSET(0xED76AE0)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_9763E3BD900ACE49_OFFSET UNITYSDK_OFFSET(0xED78770)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_9C2EB68FA949105C_OFFSET UNITYSDK_OFFSET(0xED78700)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_A3B36CD562D22DD5_OFFSET UNITYSDK_OFFSET(0xED751C0)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_A7C843238612A518_OFFSET UNITYSDK_OFFSET(0xED75CC0)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_AB4A88DE45B8BABA_OFFSET UNITYSDK_OFFSET(0xED76690)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_B590079F289D77E2_OFFSET UNITYSDK_OFFSET(0xED76920)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_C6D446861F77600E_OFFSET UNITYSDK_OFFSET(0xED787E0)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_C6E14CE377D03CE0_OFFSET UNITYSDK_OFFSET(0xED78A40)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xED77580)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xED78AC0)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xED74FB0)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_CF7951E22FD164BD_OFFSET UNITYSDK_OFFSET(0xED75FF0)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_D0CD9A971CA3B1CF_OFFSET UNITYSDK_OFFSET(0xED785C0)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_DA1BF2C227DC3D86_1_OFFSET UNITYSDK_OFFSET(0xED78B00)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_DA1BF2C227DC3D86_2_OFFSET UNITYSDK_OFFSET(0xED78B50)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xED74FF0)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_E0041D7BE5BDAB28_OFFSET UNITYSDK_OFFSET(0xED75E90)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_E42C0E0E6BF738D3_OFFSET UNITYSDK_OFFSET(0xED78C60)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_E9A575D18A0748D9_1_OFFSET UNITYSDK_OFFSET(0xED75080)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_E9A575D18A0748D9_2_OFFSET UNITYSDK_OFFSET(0xED750D0)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_E9A575D18A0748D9_3_OFFSET UNITYSDK_OFFSET(0xED75120)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_E9A575D18A0748D9_4_OFFSET UNITYSDK_OFFSET(0xED75170)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xED75030)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_EACF710F6ADE4D40_OFFSET UNITYSDK_OFFSET(0xED78870)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_ED65AE7582736594_OFFSET UNITYSDK_OFFSET(0xED77EA0)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_F0A5621E647BE115_OFFSET UNITYSDK_OFFSET(0xED764B0)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_F65C64EBA9730AB3_OFFSET UNITYSDK_OFFSET(0xED76A00)
#define CLASS_1_EA7DB942B013E54C_METHOD_1_FC1C037F0879EC12_OFFSET UNITYSDK_OFFSET(0xED77140)
#define CLASS_1_EA7DB942B013E54C_SET_EFFECTINSTANCEBUDGETBIAS_OFFSET UNITYSDK_OFFSET(0xED78DF0)
#define CLASS_1_EA7DB942B013E54C_SET_FASTLOADMODE_OFFSET UNITYSDK_OFFSET(0xED78BF0)
#define CLASS_1_EA7DB942B013E54C_SET_IGNOREINSTANCEBUDGET_OFFSET UNITYSDK_OFFSET(0xED78D70)
#define CLASS_1_EA7DB942B013E54C_SET_INSTANTIATETIMEOUTBIAS_OFFSET UNITYSDK_OFFSET(0xED78DD0)
#define CLASS_1_EA7DB942B013E54C_SET_MAXSPAWNWAITTIME_OFFSET UNITYSDK_OFFSET(0xED78DB0)
#define CLASS_1_EA7DB942B013E54C_SET_POOLAUTORELEASEINTERVAL_OFFSET UNITYSDK_OFFSET(0xED78D90)
#define CLASS_1_EA7DB942B013E54C_SET_POOLAUTORELEASEMEMORYTHRESH_OFFSET UNITYSDK_OFFSET(0xED78C10)
#define CLASS_1_EA7DB942B013E54C_SET_POOLIMMEDIATELYRELEASEMEMORYTHRESH_OFFSET UNITYSDK_OFFSET(0xED78C30)
#define CLASS_1_EA7DB942B013E54C_SET_POOLRELEASEMODE_OFFSET UNITYSDK_OFFSET(0xED78C50)
#define CLASS_1_EA7DB942B013E54C__CTOR_OFFSET UNITYSDK_OFFSET(0xED78E00)

inline static constexpr unsigned int Class_1_EA7DB942B013E54C_TypeDefinitionIndex = 54765;

class Class_1_EA7DB942B013E54C : public ::System::Object
{
public:
	static ::System::Nullable_1<::System::Boolean>* StaticGet_Field_1_17()
	{
		return (::System::Nullable_1<::System::Boolean>*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EA7DB942B013E54C_TypeDefinitionIndex)->GetStaticField(0x6A10);
	}
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_14; // 0x10
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::Class_1_A0302E9AE0B8A2B9*>* Field_1_1; // 0x18
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_26; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Class_1_A0302E9AE0B8A2B9*>* Field_1_13; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* Field_1_15; // 0x30
	::Il2CppArray<::Class_1_A067D82B1A7452F6*>* Field_1_12; // 0x38
	::System::Collections::Generic::Dictionary_2<::UnityEngine::GameObject*, ::Class_1_A0302E9AE0B8A2B9*>* Field_1_0; // 0x40
	::System::Collections::Generic::List_1<::System::Func_2<::System::String*, ::System::String*>*>* Field_1_11; // 0x48
	::System::Single _PoolImmediatelyReleaseMemoryThresh_k__BackingField; // 0x50
	::System::Int32 _EffectInstanceBudgetBias_k__BackingField; // 0x54
	::RPG::Client::PoolGameObjectInstantiateStrategy Field_1_16; // 0x58
	::System::Double Field_1_6; // 0x60
	::System::Boolean _FastLoadMode_k__BackingField; // 0x68
	::System::Boolean Field_1_10; // 0x69
	::System::Boolean _IgnoreInstanceBudget_k__BackingField; // 0x6A
	::System::Boolean Field_1_24; // 0x6B
	::System::Single _PoolAutoReleaseInterval_k__BackingField; // 0x6C
	::System::Int32 Field_1_23; // 0x70
	::RPG::Client::GameObjectPoolReleaseMode _PoolReleaseMode_k__BackingField; // 0x74
	::System::Single _InstantiateTimeoutBias_k__BackingField; // 0x78
	::System::Single _PoolAutoReleaseMemoryThresh_k__BackingField; // 0x7C
	::System::Single _MaxSpawnWaitTime_k__BackingField; // 0x80
	::System::Boolean Field_1_25; // 0x84
	::System::Double Field_1_4; // 0x88
	::System::Double Field_1_5; // 0x90
	::System::Double Field_1_3; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_DA1BF2C227DC3D86_OFFSET))(this);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_A0302E9AE0B8A2B9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0302E9AE0B8A2B9*))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9_1(::Class_1_A0302E9AE0B8A2B9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0302E9AE0B8A2B9*))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_E9A575D18A0748D9_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9_2(::Class_1_A0302E9AE0B8A2B9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0302E9AE0B8A2B9*))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_E9A575D18A0748D9_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9_3(::Class_1_A0302E9AE0B8A2B9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0302E9AE0B8A2B9*))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_E9A575D18A0748D9_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_E9A575D18A0748D9_4(::Class_1_A0302E9AE0B8A2B9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A0302E9AE0B8A2B9*))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_E9A575D18A0748D9_4_OFFSET))(this, a1);
	}

	::System::Void Method_1_A3B36CD562D22DD5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_A3B36CD562D22DD5_OFFSET))(this);
	}

	::System::Void Method_1_17BD30EFE8176014()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_17BD30EFE8176014_OFFSET))(this);
	}

	::Class_1_A067D82B1A7452F6* Method_1_A7C843238612A518(::RPG::Client::GameObjectPoolUsage a1)
	{
		return ((::Class_1_A067D82B1A7452F6*(*)(::PVOID, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_A7C843238612A518_OFFSET))(this, a1);
	}

	::Class_1_A067D82B1A7452F6* Method_1_444E41890AF6E3D9(::System::String* a1)
	{
		return ((::Class_1_A067D82B1A7452F6*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_444E41890AF6E3D9_OFFSET))(this, a1);
	}

	::Class_1_A067D82B1A7452F6* Method_1_E0041D7BE5BDAB28(::RPG::Client::GameObjectPoolUsage a1, ::System::String* a2)
	{
		return ((::Class_1_A067D82B1A7452F6*(*)(::PVOID, ::RPG::Client::GameObjectPoolUsage, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_E0041D7BE5BDAB28_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CF7951E22FD164BD(::System::Collections::Generic::List_1<::Class_1_A0302E9AE0B8A2B9*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_A0302E9AE0B8A2B9*>*))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_CF7951E22FD164BD_OFFSET))(this, a1);
	}

	::Class_1_A0302E9AE0B8A2B9* Method_1_72391C982DF63FDE(::System::String* a1, ::System::Boolean a2, ::RPG::Client::GameObjectPoolUsage a3)
	{
		return ((::Class_1_A0302E9AE0B8A2B9*(*)(::PVOID, ::System::String*, ::System::Boolean, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_72391C982DF63FDE_OFFSET))(this, a1, a2, a3);
	}

	::UnityEngine::GameObject* Method_1_50BD4AA0628D1418(::System::String* a1, ::System::Boolean a2, ::System::Boolean a3, ::RPG::Client::GameObjectPoolUsage a4)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_50BD4AA0628D1418_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_F0A5621E647BE115(::System::String* a1, ::System::Action_1<::UnityEngine::GameObject*>* a2, ::UnityEngine::Transform* a3, ::System::Boolean a4, ::RPG::Client::GameObjectPoolUsage a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::GameObject*>*, ::UnityEngine::Transform*, ::System::Boolean, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_F0A5621E647BE115_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_AB4A88DE45B8BABA(::System::String* a1, ::Class_0_16E4307DCC419505_551* a2, ::UnityEngine::Transform* a3, ::System::Boolean a4, ::RPG::Client::GameObjectPoolUsage a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_551*, ::UnityEngine::Transform*, ::System::Boolean, ::RPG::Client::GameObjectPoolUsage))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_AB4A88DE45B8BABA_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_B590079F289D77E2(::System::String* a1, ::System::Action_1<::UnityEngine::GameObject*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_B590079F289D77E2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_F65C64EBA9730AB3(::System::String* a1, ::Class_0_16E4307DCC419505_551* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_0_16E4307DCC419505_551*))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_F65C64EBA9730AB3_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8E61C4592394C6B5(::UnityEngine::GameObject* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_8E61C4592394C6B5_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_7AAA6FC0F0F914CF(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_7AAA6FC0F0F914CF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6D2BFCD0536B28C9(::UnityEngine::GameObject* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_6D2BFCD0536B28C9_OFFSET))(this, a1);
	}

	::Class_1_A0302E9AE0B8A2B9* Method_1_840CB3BD5C356356(::UnityEngine::GameObject* a1)
	{
		return ((::Class_1_A0302E9AE0B8A2B9*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_840CB3BD5C356356_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_0906715724957362(::UnityEngine::GameObject* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_0906715724957362_OFFSET))(this, a1);
	}

	::System::Void Method_1_8D81CB4AD08D8989(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_8D81CB4AD08D8989_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_FC1C037F0879EC12(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_FC1C037F0879EC12_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_226842F6044F973B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_226842F6044F973B_OFFSET))(this);
	}

	::System::Void Method_1_21A03208CD384BE4(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_21A03208CD384BE4_OFFSET))(this, a1);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_567BBDE5A68B6AA9(::System::Boolean a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_567BBDE5A68B6AA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_890F5FC885825F9E(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_890F5FC885825F9E_OFFSET))(this, a1);
	}

	::System::Void Method_1_480A176CBCFE165D(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_480A176CBCFE165D_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C66368C6B0B8DE3(::RPG::Client::GameObjectPoolReleaseMode a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GameObjectPoolReleaseMode))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_8C66368C6B0B8DE3_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_9C2EB68FA949105C(::System::Int64 a1, ::System::Int64 a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_9C2EB68FA949105C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_8C704EC832EDEFC8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_8C704EC832EDEFC8_OFFSET))(this);
	}

	::System::Void Method_1_9763E3BD900ACE49(::System::Func_2<::System::String*, ::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_9763E3BD900ACE49_OFFSET))(this, a1);
	}

	::System::Void Method_1_C6D446861F77600E(::System::Func_2<::System::String*, ::System::String*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_C6D446861F77600E_OFFSET))(this, a1);
	}

	::System::String* Method_1_EACF710F6ADE4D40(::System::String* a1)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_EACF710F6ADE4D40_OFFSET))(this, a1);
	}

	::System::Void Method_1_7206DC8F66A4D2A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_7206DC8F66A4D2A8_OFFSET))(this);
	}

	::System::Boolean Method_1_C6E14CE377D03CE0(::System::String* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_C6E14CE377D03CE0_OFFSET))(this, a1);
	}

	::System::Void Method_1_ED65AE7582736594()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_ED65AE7582736594_OFFSET))(this);
	}

	::System::Void Method_1_D0CD9A971CA3B1CF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_D0CD9A971CA3B1CF_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86_1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_DA1BF2C227DC3D86_1_OFFSET))(this);
	}

	::System::String* Method_1_DA1BF2C227DC3D86_2()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_DA1BF2C227DC3D86_2_OFFSET))(this);
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	::System::Boolean get_FastLoadMode()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_GET_FASTLOADMODE_OFFSET))(this);
	}

	::System::Void set_FastLoadMode(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_SET_FASTLOADMODE_OFFSET))(this, value);
	}

	::System::Single get_PoolAutoReleaseMemoryThresh()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_GET_POOLAUTORELEASEMEMORYTHRESH_OFFSET))(this);
	}

	::System::Void set_PoolAutoReleaseMemoryThresh(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_SET_POOLAUTORELEASEMEMORYTHRESH_OFFSET))(this, value);
	}

	::System::Single get_PoolImmediatelyReleaseMemoryThresh()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_GET_POOLIMMEDIATELYRELEASEMEMORYTHRESH_OFFSET))(this);
	}

	::System::Void set_PoolImmediatelyReleaseMemoryThresh(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_SET_POOLIMMEDIATELYRELEASEMEMORYTHRESH_OFFSET))(this, value);
	}

	::RPG::Client::GameObjectPoolReleaseMode get_PoolReleaseMode()
	{
		return ((::RPG::Client::GameObjectPoolReleaseMode(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_GET_POOLRELEASEMODE_OFFSET))(this);
	}

	::System::Void set_PoolReleaseMode(::RPG::Client::GameObjectPoolReleaseMode value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GameObjectPoolReleaseMode))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_SET_POOLRELEASEMODE_OFFSET))(this, value);
	}

	::System::Int32 Method_1_E42C0E0E6BF738D3()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_E42C0E0E6BF738D3_OFFSET))(this);
	}

	::RPG::Client::PoolGameObjectInstantiateStrategy Method_1_1F7FE07FD068BC29()
	{
		return ((::RPG::Client::PoolGameObjectInstantiateStrategy(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_METHOD_1_1F7FE07FD068BC29_OFFSET))(this);
	}

	::System::Boolean get_IgnoreInstanceBudget()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_GET_IGNOREINSTANCEBUDGET_OFFSET))(this);
	}

	::System::Void set_IgnoreInstanceBudget(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_SET_IGNOREINSTANCEBUDGET_OFFSET))(this, value);
	}

	::System::Single get_PoolAutoReleaseInterval()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_GET_POOLAUTORELEASEINTERVAL_OFFSET))(this);
	}

	::System::Void set_PoolAutoReleaseInterval(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_SET_POOLAUTORELEASEINTERVAL_OFFSET))(this, value);
	}

	::System::Single get_MaxSpawnWaitTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_GET_MAXSPAWNWAITTIME_OFFSET))(this);
	}

	::System::Void set_MaxSpawnWaitTime(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_SET_MAXSPAWNWAITTIME_OFFSET))(this, value);
	}

	::System::Single get_InstantiateTimeoutBias()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_GET_INSTANTIATETIMEOUTBIAS_OFFSET))(this);
	}

	::System::Void set_InstantiateTimeoutBias(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_SET_INSTANTIATETIMEOUTBIAS_OFFSET))(this, value);
	}

	::System::Int32 get_EffectInstanceBudgetBias()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_GET_EFFECTINSTANCEBUDGETBIAS_OFFSET))(this);
	}

	::System::Void set_EffectInstanceBudgetBias(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_EA7DB942B013E54C_SET_EFFECTINSTANCEBUDGETBIAS_OFFSET))(this, value);
	}
};

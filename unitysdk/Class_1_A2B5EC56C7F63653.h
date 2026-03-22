#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_3BFD1BBF7A6AF539;
class Class_1_43BD383C98B4C0C5_8;
class Class_1_BCCF85E57593CA8D;
class Class_1_BDA8DEEF59BE3031;
class Class_2_D5AD64F6FB3109AB;
class Class_3_E5B65FD9338F9400;
namespace RPG::Client { class DiceCombatPhySimParameter; }
namespace RPG::Client::DiceCombat { class DiceCombatBattleContext; }
namespace RPG::Client::DiceCombat { class DiceCombatBattleDiceDisplayInfo; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CLASS_1_A2B5EC56C7F63653_GET_PERFORMANCECONFIGPROXY_OFFSET UNITYSDK_OFFSET(0x10F14150)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_04568252A6895806_OFFSET UNITYSDK_OFFSET(0x10F10790)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0x10F0C520)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_146E6E50FAF07D8F_1_OFFSET UNITYSDK_OFFSET(0x10F12500)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_146E6E50FAF07D8F_OFFSET UNITYSDK_OFFSET(0x10F0D7F0)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_1CF8850E3974E3E5_OFFSET UNITYSDK_OFFSET(0x10F10610)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x10F0C860)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_1F113C252B05D04B_OFFSET UNITYSDK_OFFSET(0x10F10050)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_202558C3F0BACA2A_1_OFFSET UNITYSDK_OFFSET(0x10F13250)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_202558C3F0BACA2A_OFFSET UNITYSDK_OFFSET(0x10F12C10)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_21378A7EB1BCB13B_1_OFFSET UNITYSDK_OFFSET(0x10F0E290)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_21378A7EB1BCB13B_OFFSET UNITYSDK_OFFSET(0x10F0E3B0)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_25B6EFC63CE6F337_OFFSET UNITYSDK_OFFSET(0x10F10960)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_276B8DEFF9CAB727_OFFSET UNITYSDK_OFFSET(0x10F0CC90)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_2A887DFC7A5BB2CB_OFFSET UNITYSDK_OFFSET(0x10F0DC20)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_2E47F09A457E7E05_OFFSET UNITYSDK_OFFSET(0x10F12A40)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_2EAE6F29CBE62CE5_OFFSET UNITYSDK_OFFSET(0x10F13B10)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_33B4451DD73D5CBE_OFFSET UNITYSDK_OFFSET(0x10F14090)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_35A1A641353400E6_OFFSET UNITYSDK_OFFSET(0x10F0F500)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_35EDB68198B7034F_OFFSET UNITYSDK_OFFSET(0x10F0BE10)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x10F0C6D0)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x10F13980)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_400278A56B43BE85_OFFSET UNITYSDK_OFFSET(0x10F0EB40)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x10F12150)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_4993EDAE54425105_OFFSET UNITYSDK_OFFSET(0x10F14170)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_4A64EB7D6C8BBD9A_OFFSET UNITYSDK_OFFSET(0x10F0FE10)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_4E7879E1FC89D3A1_OFFSET UNITYSDK_OFFSET(0x10F10A40)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0x10F0C720)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_51F384253127E0E9_OFFSET UNITYSDK_OFFSET(0x10F13F00)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_52318DC8B70A5DC8_OFFSET UNITYSDK_OFFSET(0x10F0C8C0)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_5835DC16FC46989B_OFFSET UNITYSDK_OFFSET(0x10F12000)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_5F0036ED5CF109B4_OFFSET UNITYSDK_OFFSET(0x10F0F6C0)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_60A1EBE4AA36C891_OFFSET UNITYSDK_OFFSET(0x10F0BE80)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x10F11590)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_655DDB722F1FDE73_OFFSET UNITYSDK_OFFSET(0x10F11620)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_65FC837228DA1EEE_OFFSET UNITYSDK_OFFSET(0x10F0C1B0)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_68805403250CC013_OFFSET UNITYSDK_OFFSET(0x10F0DD60)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_6935066AA944B33E_1_OFFSET UNITYSDK_OFFSET(0x10F130C0)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_6935066AA944B33E_OFFSET UNITYSDK_OFFSET(0x10F12DA0)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_6E04D26428D99BB3_OFFSET UNITYSDK_OFFSET(0x10F0F920)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_7B411317D337F87A_OFFSET UNITYSDK_OFFSET(0x10F0F270)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_810DD818C57F797D_OFFSET UNITYSDK_OFFSET(0x10F0C310)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_815733AB6C4CD1CA_OFFSET UNITYSDK_OFFSET(0x10F133E0)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_83E9B8AE7A81D672_OFFSET UNITYSDK_OFFSET(0x10F12F30)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_8B1ABC397CD19B68_OFFSET UNITYSDK_OFFSET(0x10F102B0)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_8C272642BED64EA2_OFFSET UNITYSDK_OFFSET(0x10F11420)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_906C5BE8219E9D56_OFFSET UNITYSDK_OFFSET(0x10F121D0)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_9477221A6F70535F_OFFSET UNITYSDK_OFFSET(0x10F104A0)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x10F14100)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_965FEFBF42F0F1DF_OFFSET UNITYSDK_OFFSET(0x10F0CA20)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x10F12490)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_A5245CA3B8948734_OFFSET UNITYSDK_OFFSET(0x10F10A90)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_A80A611489BAD461_OFFSET UNITYSDK_OFFSET(0x10F0FA10)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_B29205EE7F7B640C_OFFSET UNITYSDK_OFFSET(0x10F0D020)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_B5455D8E300A0B6D_OFFSET UNITYSDK_OFFSET(0x10F10570)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_B6895D8285B78BAB_OFFSET UNITYSDK_OFFSET(0x10F12AE0)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_B7CD94725647AF43_OFFSET UNITYSDK_OFFSET(0x10F135C0)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_B8DDB8B6AA8ACDA5_1_OFFSET UNITYSDK_OFFSET(0x10F11ED0)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_B8DDB8B6AA8ACDA5_OFFSET UNITYSDK_OFFSET(0x10F0BD10)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_BDF63A193F1442F2_OFFSET UNITYSDK_OFFSET(0x10F103A0)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_C2F7E13E83AE9BC3_OFFSET UNITYSDK_OFFSET(0x10F10EC0)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_C42F0F0B39C83DB3_OFFSET UNITYSDK_OFFSET(0x10F0CEF0)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_C43FB717EAB07898_OFFSET UNITYSDK_OFFSET(0x10F0E970)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x10F12420)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x10F129D0)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10F0FFE0)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_E374F6C9CEE8E680_1_OFFSET UNITYSDK_OFFSET(0x10F0E4D0)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_E374F6C9CEE8E680_2_OFFSET UNITYSDK_OFFSET(0x10F0F1D0)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_E374F6C9CEE8E680_3_OFFSET UNITYSDK_OFFSET(0x10F0F620)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_E374F6C9CEE8E680_4_OFFSET UNITYSDK_OFFSET(0x10F11380)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_E374F6C9CEE8E680_OFFSET UNITYSDK_OFFSET(0x10F0CE50)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_E52FD71DF8D04E4E_OFFSET UNITYSDK_OFFSET(0x10F13830)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_EAC2737A96E071C9_OFFSET UNITYSDK_OFFSET(0x10F0BEF0)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_F02EF98AB50D4511_OFFSET UNITYSDK_OFFSET(0x10F109D0)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_F5C71D54A0E2D0EF_OFFSET UNITYSDK_OFFSET(0x10F0E570)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0x10F119E0)
#define CLASS_1_A2B5EC56C7F63653_METHOD_1_FCE3D8E8A3F2EAE1_OFFSET UNITYSDK_OFFSET(0x10F139D0)
#define CLASS_1_A2B5EC56C7F63653_SET_PERFORMANCECONFIGPROXY_OFFSET UNITYSDK_OFFSET(0x10F14160)
#define CLASS_1_A2B5EC56C7F63653__CTOR_OFFSET UNITYSDK_OFFSET(0x10F0BB50)
#define CLASS_1_A2B5EC56C7F63653___PLAYCONFIRMPERFORMANCE_B__52_0_OFFSET UNITYSDK_OFFSET(0x10F14180)

inline static constexpr unsigned int Class_1_A2B5EC56C7F63653_TypeDefinitionIndex = 47773;

class Class_1_A2B5EC56C7F63653 : public ::System::Object
{
public:
	::System::Action_2<::System::Int32, ::System::Boolean>* Field_1_14; // 0x10
	::UnityEngine::Transform* Field_1_6; // 0x18
	::Class_1_3BFD1BBF7A6AF539* _PerformanceConfigProxy_k__BackingField; // 0x20
	::UnityEngine::Transform* Field_1_4; // 0x28
	::System::Collections::Generic::List_1<::Class_1_BDA8DEEF59BE3031*>* Field_1_9; // 0x30
	::RPG::Client::DiceCombatPhySimParameter* Field_1_3; // 0x38
	::Class_2_D5AD64F6FB3109AB* Field_1_16; // 0x40
	::UnityEngine::Transform* Field_1_5; // 0x48
	::System::Action* Field_1_12; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_8; // 0x58
	::Class_3_E5B65FD9338F9400* Field_1_15; // 0x60
	::System::Action_1<::Class_1_BDA8DEEF59BE3031*>* Field_1_21; // 0x68
	::System::Collections::Generic::List_1<::Class_1_BDA8DEEF59BE3031*>* Field_1_10; // 0x70
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* Field_1_7; // 0x78
	::System::Collections::Generic::List_1<::UnityEngine::Coroutine*>* Field_1_18; // 0x80
	::System::Single Field_1_11; // 0x88
	::System::Boolean Field_1_1; // 0x8C
	::System::Boolean Field_1_22; // 0x8D
	::System::Boolean Field_1_13; // 0x8E
	::System::Boolean Field_1_19; // 0x8F
	::System::Boolean Field_1_0; // 0x90
	::System::Boolean Field_1_17; // 0x91
	::System::Single Field_1_20; // 0x94

	::System::Void _ctor(::Class_2_D5AD64F6FB3109AB* a1, ::Class_3_E5B65FD9338F9400* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D5AD64F6FB3109AB*, ::Class_3_E5B65FD9338F9400*))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_B8DDB8B6AA8ACDA5(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_B8DDB8B6AA8ACDA5_OFFSET))(this, a1);
	}

	::System::Void Method_1_35EDB68198B7034F(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_35EDB68198B7034F_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_60A1EBE4AA36C891(::Class_1_BDA8DEEF59BE3031* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BDA8DEEF59BE3031*))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_60A1EBE4AA36C891_OFFSET))(this, a1);
	}

	::System::Void Method_1_EAC2737A96E071C9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_EAC2737A96E071C9_OFFSET))(this);
	}

	::System::Void Method_1_65FC837228DA1EEE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_65FC837228DA1EEE_OFFSET))(this, a1);
	}

	::System::Void Method_1_810DD818C57F797D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_810DD818C57F797D_OFFSET))(this);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_0865E94460F11643_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_5022DB1DC5AA8CB4(::Class_1_BDA8DEEF59BE3031* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BDA8DEEF59BE3031*))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_5022DB1DC5AA8CB4_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_52318DC8B70A5DC8(::System::Int32 a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_52318DC8B70A5DC8_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 Method_1_965FEFBF42F0F1DF(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_965FEFBF42F0F1DF_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_1_276B8DEFF9CAB727(::Class_1_BDA8DEEF59BE3031* a1, ::Class_1_BDA8DEEF59BE3031* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_BDA8DEEF59BE3031*, ::Class_1_BDA8DEEF59BE3031*))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_276B8DEFF9CAB727_OFFSET))(this, a1, a2);
	}

	::System::Collections::IEnumerator* Method_1_E374F6C9CEE8E680(::System::Boolean a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_E374F6C9CEE8E680_OFFSET))(this, a1);
	}

	::System::Void Method_1_C42F0F0B39C83DB3(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_C42F0F0B39C83DB3_OFFSET))(this, a1);
	}

	::System::Void Method_1_B29205EE7F7B640C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_B29205EE7F7B640C_OFFSET))(this);
	}

	::System::Void Method_1_146E6E50FAF07D8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_146E6E50FAF07D8F_OFFSET))(this);
	}

	::System::Boolean Method_1_2A887DFC7A5BB2CB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_2A887DFC7A5BB2CB_OFFSET))(this);
	}

	::System::Void Method_1_68805403250CC013()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_68805403250CC013_OFFSET))(this);
	}

	::System::Void Method_1_21378A7EB1BCB13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_21378A7EB1BCB13B_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_1_E374F6C9CEE8E680_1(::System::Boolean a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_E374F6C9CEE8E680_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Method_1_F5C71D54A0E2D0EF(::System::Collections::Generic::List_1<::Class_1_BDA8DEEF59BE3031*>* a1)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Vector3>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BDA8DEEF59BE3031*>*))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_F5C71D54A0E2D0EF_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* Method_1_C43FB717EAB07898(::System::Collections::Generic::List_1<::Class_1_BDA8DEEF59BE3031*>* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BDA8DEEF59BE3031*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_C43FB717EAB07898_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Quaternion Method_1_400278A56B43BE85(::Class_1_BDA8DEEF59BE3031* a1, ::System::Boolean a2)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::Class_1_BDA8DEEF59BE3031*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_400278A56B43BE85_OFFSET))(this, a1, a2);
	}

	::System::Collections::IEnumerator* Method_1_E374F6C9CEE8E680_2(::System::Boolean a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_E374F6C9CEE8E680_2_OFFSET))(this, a1);
	}

	::System::Void Method_1_7B411317D337F87A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_7B411317D337F87A_OFFSET))(this);
	}

	::System::Void Method_1_21378A7EB1BCB13B_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_21378A7EB1BCB13B_1_OFFSET))(this);
	}

	::System::Void Method_1_35A1A641353400E6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_35A1A641353400E6_OFFSET))(this);
	}

	::System::Collections::IEnumerator* Method_1_E374F6C9CEE8E680_3(::System::Boolean a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_E374F6C9CEE8E680_3_OFFSET))(this, a1);
	}

	::System::Void Method_1_5F0036ED5CF109B4(::Class_1_BDA8DEEF59BE3031* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BDA8DEEF59BE3031*))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_5F0036ED5CF109B4_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_1_6E04D26428D99BB3(::System::Int32 a1, ::System::UInt32 a2, ::RPG::Client::DiceCombat::DiceCombatBattleContext* a3, ::Class_1_43BD383C98B4C0C5_8* a4, ::System::Boolean a5)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32, ::System::UInt32, ::RPG::Client::DiceCombat::DiceCombatBattleContext*, ::Class_1_43BD383C98B4C0C5_8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_6E04D26428D99BB3_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_A80A611489BAD461(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_A80A611489BAD461_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_4A64EB7D6C8BBD9A(::System::Int32 a1, ::System::UInt32 a2, ::RPG::Client::DiceCombat::DiceCombatBattleContext* a3, ::Class_1_43BD383C98B4C0C5_8* a4, ::System::Boolean a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::RPG::Client::DiceCombat::DiceCombatBattleContext*, ::Class_1_43BD383C98B4C0C5_8*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_4A64EB7D6C8BBD9A_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_1F113C252B05D04B(::Class_1_BDA8DEEF59BE3031* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BDA8DEEF59BE3031*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_1F113C252B05D04B_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8B1ABC397CD19B68(::System::Int32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Int32 a5, ::RPG::GameCore::DiceCombatDiceType a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Int32, ::RPG::GameCore::DiceCombatDiceType))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_8B1ABC397CD19B68_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_BDF63A193F1442F2(::System::Int32 a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Int32 a5, ::UnityEngine::GameObject* a6)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_BDF63A193F1442F2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Collections::IEnumerator* Method_1_B5455D8E300A0B6D(::Class_1_BCCF85E57593CA8D* a1, ::System::Boolean a2)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::Class_1_BCCF85E57593CA8D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_B5455D8E300A0B6D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1CF8850E3974E3E5(::Class_1_BCCF85E57593CA8D* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BCCF85E57593CA8D*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_1CF8850E3974E3E5_OFFSET))(this, a1, a2);
	}

	::Class_1_BDA8DEEF59BE3031* Method_1_04568252A6895806(::UnityEngine::GameObject* a1)
	{
		return ((::Class_1_BDA8DEEF59BE3031*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_04568252A6895806_OFFSET))(this, a1);
	}

	::System::Void Method_1_25B6EFC63CE6F337(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_25B6EFC63CE6F337_OFFSET))(this, a1);
	}

	::System::Void Method_1_F02EF98AB50D4511(::System::Action_2<::System::Int32, ::System::Boolean>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Int32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_F02EF98AB50D4511_OFFSET))(this, a1);
	}

	::System::Void Method_1_4E7879E1FC89D3A1(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_4E7879E1FC89D3A1_OFFSET))(this, a1);
	}

	::System::Void Method_1_C2F7E13E83AE9BC3(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_C2F7E13E83AE9BC3_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_1_E374F6C9CEE8E680_4(::System::Boolean a1)
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_E374F6C9CEE8E680_4_OFFSET))(this, a1);
	}

	::System::Void Method_1_8C272642BED64EA2(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_8C272642BED64EA2_OFFSET))(this, a1);
	}

	::System::Collections::IEnumerator* Method_1_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_627C7524E98F4AC5_OFFSET))(this);
	}

	::System::Void Method_1_655DDB722F1FDE73()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_655DDB722F1FDE73_OFFSET))(this);
	}

	::System::Void Method_1_F63FE1AA9633F811()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_F63FE1AA9633F811_OFFSET))(this);
	}

	::System::Void Method_1_B8DDB8B6AA8ACDA5_1(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_B8DDB8B6AA8ACDA5_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_5835DC16FC46989B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_5835DC16FC46989B_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_A5245CA3B8948734(::System::Collections::Generic::List_1<::System::Int32>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_A5245CA3B8948734_OFFSET))(this, a1);
	}

	::System::Void Method_1_906C5BE8219E9D56(::System::Single a1, ::System::Action_1<::Class_1_BDA8DEEF59BE3031*>* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Action_1<::Class_1_BDA8DEEF59BE3031*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_906C5BE8219E9D56_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_96A53A17AC5D0E93_OFFSET))(this);
	}

	::System::Void Method_1_146E6E50FAF07D8F_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_146E6E50FAF07D8F_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::System::Void Method_1_2E47F09A457E7E05(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_2E47F09A457E7E05_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_B6895D8285B78BAB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_B6895D8285B78BAB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_202558C3F0BACA2A()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_202558C3F0BACA2A_OFFSET))(this);
	}

	::System::Void Method_1_6935066AA944B33E(::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_6935066AA944B33E_OFFSET))(this, a1);
	}

	::System::Void Method_1_83E9B8AE7A81D672(::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_83E9B8AE7A81D672_OFFSET))(this, a1);
	}

	::System::Void Method_1_6935066AA944B33E_1(::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_6935066AA944B33E_1_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::System::Int32>* Method_1_202558C3F0BACA2A_1()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_202558C3F0BACA2A_1_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*>* Method_1_815733AB6C4CD1CA(::System::Boolean a1)
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombat::DiceCombatBattleDiceDisplayInfo*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_815733AB6C4CD1CA_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_E52FD71DF8D04E4E()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_E52FD71DF8D04E4E_OFFSET))(this);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Void Method_1_FCE3D8E8A3F2EAE1(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_FCE3D8E8A3F2EAE1_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_2EAE6F29CBE62CE5(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_2EAE6F29CBE62CE5_OFFSET))(this, a1);
	}

	::System::Void Method_1_51F384253127E0E9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_51F384253127E0E9_OFFSET))(this);
	}

	::System::Int32 Method_1_B7CD94725647AF43(::System::Int32 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_B7CD94725647AF43_OFFSET))(this, a1);
	}

	::RPG::Client::DiceCombatPhySimParameter* Method_1_33B4451DD73D5CBE()
	{
		return ((::RPG::Client::DiceCombatPhySimParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_33B4451DD73D5CBE_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}

	::Class_1_3BFD1BBF7A6AF539* get_PerformanceConfigProxy()
	{
		return ((::Class_1_3BFD1BBF7A6AF539*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_GET_PERFORMANCECONFIGPROXY_OFFSET))(this);
	}

	::System::Void set_PerformanceConfigProxy(::Class_1_3BFD1BBF7A6AF539* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3BFD1BBF7A6AF539*))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_SET_PERFORMANCECONFIGPROXY_OFFSET))(this, value);
	}

	::System::Collections::Generic::List_1<::Class_1_BDA8DEEF59BE3031*>* Method_1_4993EDAE54425105()
	{
		return ((::System::Collections::Generic::List_1<::Class_1_BDA8DEEF59BE3031*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_4993EDAE54425105_OFFSET))(this);
	}

	::System::UInt32 Method_1_9477221A6F70535F()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653_METHOD_1_9477221A6F70535F_OFFSET))(this);
	}

	::System::Void __PlayConfirmPerformance_b__52_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A2B5EC56C7F63653___PLAYCONFIRMPERFORMANCE_B__52_0_OFFSET))(this);
	}
};

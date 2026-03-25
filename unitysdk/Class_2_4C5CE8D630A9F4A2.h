#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A6989C352B0F0F0_StreamingFeatureType.h"
#include "unitysdk/Class_2_4C5CE8D630A9F4A2_ForceEntityLodReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/RPG/GameCore/EntityLodTemplateName.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/LockEntityStreamingReason.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_877AA22B04AFB81F_1;
class Class_1_8A6989C352B0F0F0;
class Class_1_A966C8DDC3B81EDD;
class Class_2_01F4079471966D8C;
class Class_2_370004DAB319199E;
class Class_2_3DB821AE92F66655;
class Class_2_5A5C70F7A3C39C00;
class Class_2_CBDF63BA2C3715C3;
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client { class NpcMonoLod; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace RPG::Client { class Stage; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class CharacterVisibleComponent; }
namespace RPG::GameCore { class EntityLodDetail; }
namespace RPG::GameCore { class EntityLodTemplate; }
namespace RPG::GameCore { class LevelLittleGameInfo; }
namespace RPG::GameCore { class NPCComponent; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropConfig; }
namespace RPG::GameCore { class PropRow; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define CLASS_2_4C5CE8D630A9F4A2_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11106140)
#define CLASS_2_4C5CE8D630A9F4A2_GET_ISMOVEABLE_OFFSET UNITYSDK_OFFSET(0x111097F0)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_050D955490C4C3D0_OFFSET UNITYSDK_OFFSET(0x11105530)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_0823717A0785467E_OFFSET UNITYSDK_OFFSET(0x11108920)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_0A08BEB5A6FF1267_OFFSET UNITYSDK_OFFSET(0x11105F70)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_0A5DD54A2675889F_OFFSET UNITYSDK_OFFSET(0x11108580)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_0E78C3B81A2F0DCC_OFFSET UNITYSDK_OFFSET(0x11108C90)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x11109990)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_1ABF1CBED7A4AF0A_OFFSET UNITYSDK_OFFSET(0x11105FD0)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_1D4018D4200358D0_1_OFFSET UNITYSDK_OFFSET(0x11109430)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_1D4018D4200358D0_2_OFFSET UNITYSDK_OFFSET(0x11109490)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x111053F0)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_255811211D98CDCE_OFFSET UNITYSDK_OFFSET(0x11106470)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_283DA224BE06DA9F_OFFSET UNITYSDK_OFFSET(0x11108F40)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_2ACDCE06CE43D89F_OFFSET UNITYSDK_OFFSET(0x11107A60)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_2D078FEA92CF6C6E_OFFSET UNITYSDK_OFFSET(0x11106540)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x11105020)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_367B9590522079D1_OFFSET UNITYSDK_OFFSET(0x11104E50)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x11109940)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_3AC94EEB348AAF2D_OFFSET UNITYSDK_OFFSET(0x11105C50)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_40DA926311BE0C20_OFFSET UNITYSDK_OFFSET(0x11105D90)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x11108510)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_41AA181104E03F2C_OFFSET UNITYSDK_OFFSET(0x11106790)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_44AC3F3C85C7CAA3_OFFSET UNITYSDK_OFFSET(0x11104D90)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_520B469428F63CD2_OFFSET UNITYSDK_OFFSET(0x11109C90)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_5E3C4CA92AB4366E_OFFSET UNITYSDK_OFFSET(0x111060E0)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_686221D5DF498040_OFFSET UNITYSDK_OFFSET(0x11104D40)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_78DC90973F252701_OFFSET UNITYSDK_OFFSET(0x11109A10)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_7F61773A0561F28B_OFFSET UNITYSDK_OFFSET(0x11107D30)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_805C56F44231AEF9_OFFSET UNITYSDK_OFFSET(0x111054B0)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_9046D4DE6D91F652_OFFSET UNITYSDK_OFFSET(0x11109230)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x11109880)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_966135F9822D270A_OFFSET UNITYSDK_OFFSET(0x11106060)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_980E30039C154A9E_OFFSET UNITYSDK_OFFSET(0x111066C0)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_995670ABC4912008_OFFSET UNITYSDK_OFFSET(0x11109AF0)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_A4269E3E00874962_1_OFFSET UNITYSDK_OFFSET(0x111093B0)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_A4269E3E00874962_OFFSET UNITYSDK_OFFSET(0x11109330)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_ABFE6A357B89C69A_OFFSET UNITYSDK_OFFSET(0x111094F0)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_AFE7559791CDF1D3_OFFSET UNITYSDK_OFFSET(0x111096F0)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_BF972395CC722BF9_OFFSET UNITYSDK_OFFSET(0x111095A0)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_C0A237B6F1EC0BFD_OFFSET UNITYSDK_OFFSET(0x11109130)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x11109810)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11105D50)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_CEA32FF190776922_OFFSET UNITYSDK_OFFSET(0x111050B0)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_D063D7D09D8EF070_OFFSET UNITYSDK_OFFSET(0x11108890)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_D09831639F615812_OFFSET UNITYSDK_OFFSET(0x111098E0)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_E10F3359B5E0D724_OFFSET UNITYSDK_OFFSET(0x11104BA0)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_E11AC65AA0DC2249_OFFSET UNITYSDK_OFFSET(0x11104CE0)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_EA3C63A9D7DB277F_OFFSET UNITYSDK_OFFSET(0x11105F00)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_F026F9F94BAA5E1F_OFFSET UNITYSDK_OFFSET(0x11109820)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_F10A0D072D26C4BF_OFFSET UNITYSDK_OFFSET(0x11109660)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_F5447CD65612575D_OFFSET UNITYSDK_OFFSET(0x11105B40)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_F5D9748CF35D70EF_OFFSET UNITYSDK_OFFSET(0x11106AF0)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_FBA5D90298C35872_OFFSET UNITYSDK_OFFSET(0x111077A0)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_FE2B72ED5357C24E_OFFSET UNITYSDK_OFFSET(0x11107DE0)
#define CLASS_2_4C5CE8D630A9F4A2_METHOD_2_FF49D2BCBFD34B21_OFFSET UNITYSDK_OFFSET(0x11109A80)
#define CLASS_2_4C5CE8D630A9F4A2_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x11106420)
#define CLASS_2_4C5CE8D630A9F4A2_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x111062D0)
#define CLASS_2_4C5CE8D630A9F4A2_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x11106380)
#define CLASS_2_4C5CE8D630A9F4A2_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x11106320)
#define CLASS_2_4C5CE8D630A9F4A2_SET_ISMOVEABLE_OFFSET UNITYSDK_OFFSET(0x11109800)
#define CLASS_2_4C5CE8D630A9F4A2_TICK_OFFSET UNITYSDK_OFFSET(0x111092B0)
#define CLASS_2_4C5CE8D630A9F4A2__CCTOR_OFFSET UNITYSDK_OFFSET(0x11109D90)
#define CLASS_2_4C5CE8D630A9F4A2__CTOR_OFFSET UNITYSDK_OFFSET(0x11109CF0)
#define CLASS_2_4C5CE8D630A9F4A2___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x1110A180)

inline static constexpr unsigned int Class_2_4C5CE8D630A9F4A2_TypeDefinitionIndex = 46101;

class Class_2_4C5CE8D630A9F4A2 : public ::RPG::GameCore::GameComponentBase
{
public:
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_55()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4C5CE8D630A9F4A2_TypeDefinitionIndex)->GetStaticField(0x10620);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_54()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4C5CE8D630A9F4A2_TypeDefinitionIndex)->GetStaticField(0x10628);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_53()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4C5CE8D630A9F4A2_TypeDefinitionIndex)->GetStaticField(0x10630);
	}
	static ::RPG::Client::RPGProfilerMarker** StaticGet_Field_2_52()
	{
		return (::RPG::Client::RPGProfilerMarker**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4C5CE8D630A9F4A2_TypeDefinitionIndex)->GetStaticField(0x10638);
	}
	static ::System::Collections::Generic::List_1<::System::Single>** StaticGet_Field_2_42()
	{
		return (::System::Collections::Generic::List_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4C5CE8D630A9F4A2_TypeDefinitionIndex)->GetStaticField(0x10640);
	}
	static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_Field_2_43()
	{
		return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_2_4C5CE8D630A9F4A2_TypeDefinitionIndex)->GetStaticField(0x10648);
	}
	static ::System::Single* StaticGet_Field_2_21()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4C5CE8D630A9F4A2_TypeDefinitionIndex)->GetStaticField(0x5AE0);
	}
	static ::System::Single* StaticGet_Field_2_44()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4C5CE8D630A9F4A2_TypeDefinitionIndex)->GetStaticField(0x5AE4);
	}
	static ::System::Int32* StaticGet_Field_2_46()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4C5CE8D630A9F4A2_TypeDefinitionIndex)->GetStaticField(0x5AE8);
	}
	static ::System::Int32* StaticGet_Field_2_47()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4C5CE8D630A9F4A2_TypeDefinitionIndex)->GetStaticField(0x5AEC);
	}
	static ::System::Int32* StaticGet_Field_2_45()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4C5CE8D630A9F4A2_TypeDefinitionIndex)->GetStaticField(0x5AF0);
	}
	static ::System::Int32* StaticGet_Field_2_49()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4C5CE8D630A9F4A2_TypeDefinitionIndex)->GetStaticField(0x5AF4);
	}
	static ::System::Int32* StaticGet_Field_2_48()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_2_4C5CE8D630A9F4A2_TypeDefinitionIndex)->GetStaticField(0x5AF8);
	}
	// static const ::System::Int32 Field_2_12 = 0x2; // 0x0
	// static const ::System::Int32 Field_2_50 = 0xFFFFFF9C; // 0x0
	// static const ::System::Int32 Field_2_51 = 0xFFFFFFFF; // 0x0
	::Class_2_370004DAB319199E* Field_2_34; // 0x18
	::Class_2_5A5C70F7A3C39C00* Field_2_22; // 0x20
	::Class_2_01F4079471966D8C* Field_2_33; // 0x28
	::RPG::GameCore::NPCComponent* Field_2_32; // 0x30
	::RPG::Client::NpcMonoLod* Field_2_11; // 0x38
	::RPG::GameCore::CharacterModelComponent* Field_2_27; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_41; // 0x48
	::RPG::GameCore::AdventureCharacterController* Field_2_28; // 0x50
	::RPG::GameCore::EntityLodTemplate* Field_2_20; // 0x58
	::RPG::GameCore::PropComponent* Field_2_30; // 0x60
	::RPG::Client::Stage* Field_2_40; // 0x68
	::Class_1_877AA22B04AFB81F_1* Field_2_36; // 0x70
	::RPG::GameCore::TransformComponent* Field_2_26; // 0x78
	::Class_2_3DB821AE92F66655* Field_2_31; // 0x80
	::RPG::GameCore::EntityLodDetail* Field_2_38; // 0x88
	::System::Collections::Generic::List_1<::System::Single>* Field_2_13; // 0x90
	::Class_1_A966C8DDC3B81EDD* Field_2_5; // 0x98
	::RPG::GameCore::CharacterVisibleComponent* Field_2_29; // 0xA0
	::System::Single Field_2_19; // 0xA8
	::System::Boolean _IsMoveable_k__BackingField; // 0xAC
	::System::Boolean Field_2_8; // 0xAD
	::System::Boolean Field_2_1; // 0xAE
	::System::Boolean Field_2_7; // 0xAF
	::RPG::GameCore::EntityLodTemplateName Field_2_18; // 0xB0
	::System::Boolean Field_2_35; // 0xB4
	::System::Boolean Field_2_9; // 0xB5
	::System::Boolean Field_2_6; // 0xB6
	::System::Boolean Field_2_4; // 0xB7
	::System::Single Field_2_17; // 0xB8
	::System::Single Field_2_15; // 0xBC
	::RPG::GameCore::EntityLodTemplateName Field_2_16; // 0xC0
	::RPG::GameCore::EntityLodTemplateName Field_2_14; // 0xC4
	::UnityEngine::Vector3 Field_2_23; // 0xC8
	::RPG::Client::ReasonBool_1<::RPG::GameCore::LockEntityStreamingReason> Field_2_39; // 0xD8
	::System::Int32 Field_2_37; // 0xE0
	::System::Int32 Field_2_2; // 0xE4
	::UnityEngine::Vector3 Field_2_24; // 0xE8
	::System::Boolean Field_2_0; // 0xF4
	::System::Boolean Field_2_10; // 0xF5
	::System::Boolean Field_2_3; // 0xF6

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2__CCTOR_OFFSET))();
	}

	::System::Void Method_2_E10F3359B5E0D724(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_E10F3359B5E0D724_OFFSET))(this, a1);
	}

	::System::Void Method_2_E11AC65AA0DC2249()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_E11AC65AA0DC2249_OFFSET))(this);
	}

	::System::Void Method_2_686221D5DF498040()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_686221D5DF498040_OFFSET))(this);
	}

	::System::Void Method_2_367B9590522079D1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_367B9590522079D1_OFFSET))(this);
	}

	::System::Void Method_2_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_2_CEA32FF190776922()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_CEA32FF190776922_OFFSET))(this);
	}

	::System::Void Method_2_805C56F44231AEF9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_805C56F44231AEF9_OFFSET))(this);
	}

	::System::Void Method_2_050D955490C4C3D0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_050D955490C4C3D0_OFFSET))(this);
	}

	::System::Void Method_2_44AC3F3C85C7CAA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_44AC3F3C85C7CAA3_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Void Method_2_F5447CD65612575D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_F5447CD65612575D_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_40DA926311BE0C20(::System::String* a1, ::UnityEngine::SkinnedMeshRenderer* a2, ::UnityEngine::Mesh* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::SkinnedMeshRenderer*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_40DA926311BE0C20_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_EA3C63A9D7DB277F(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_EA3C63A9D7DB277F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0A08BEB5A6FF1267()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_0A08BEB5A6FF1267_OFFSET))(this);
	}

	::System::Void Method_2_1ABF1CBED7A4AF0A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_1ABF1CBED7A4AF0A_OFFSET))(this);
	}

	::System::Void Method_2_966135F9822D270A(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_966135F9822D270A_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_5E3C4CA92AB4366E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_5E3C4CA92AB4366E_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_DISPOSE_OFFSET))(this);
	}

	::System::Void OnModelRootLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_ONMODELROOTLOADED_OFFSET))(this);
	}

	::System::Void OnModelRootUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_ONMODELROOTUNLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtLoaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_ONMODELARTLOADED_OFFSET))(this);
	}

	::System::Void OnModelArtUnloaded()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_ONMODELARTUNLOADED_OFFSET))(this);
	}

	::System::Void Method_2_255811211D98CDCE(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_255811211D98CDCE_OFFSET))(this, a1);
	}

	::System::Void Method_2_2D078FEA92CF6C6E(::RPG::Client::Stage* a1, ::RPG::GameCore::EntityLodTemplateName a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*, ::RPG::GameCore::EntityLodTemplateName, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_2D078FEA92CF6C6E_OFFSET))(this, a1, a2, a3);
	}

	static ::RPG::GameCore::EntityLodTemplateName Method_2_F5D9748CF35D70EF(::RPG::GameCore::PropRow* a1, ::RPG::GameCore::PropConfig* a2, ::UnityEngine::GameObject* a3, ::Class_2_CBDF63BA2C3715C3* a4, ::RPG::Client::MapPropDef* a5)
	{
		return ((::RPG::GameCore::EntityLodTemplateName(*)(::RPG::GameCore::PropRow*, ::RPG::GameCore::PropConfig*, ::UnityEngine::GameObject*, ::Class_2_CBDF63BA2C3715C3*, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_F5D9748CF35D70EF_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Void Method_2_FBA5D90298C35872(::RPG::GameCore::PropRow* a1, ::System::Single a2, ::System::Single& a3, ::RPG::GameCore::EntityLodTemplateName& a4)
	{
		return ((::System::Void(*)(::RPG::GameCore::PropRow*, ::System::Single, ::System::Single&, ::RPG::GameCore::EntityLodTemplateName&))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_FBA5D90298C35872_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Single Method_2_2ACDCE06CE43D89F(::System::String* a1)
	{
		return ((::System::Single(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_2ACDCE06CE43D89F_OFFSET))(a1);
	}

	::System::Void Method_2_7F61773A0561F28B(::RPG::GameCore::EntityLodTemplateName a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodTemplateName))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_7F61773A0561F28B_OFFSET))(this, a1);
	}

	::System::Void Method_2_FE2B72ED5357C24E(::RPG::GameCore::EntityLodTemplateName a1, ::RPG::GameCore::LevelLittleGameInfo* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodTemplateName, ::RPG::GameCore::LevelLittleGameInfo*))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_FE2B72ED5357C24E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_0A5DD54A2675889F(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_0A5DD54A2675889F_OFFSET))(this, a1);
	}

	::System::Void Method_2_0823717A0785467E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_0823717A0785467E_OFFSET))(this, a1);
	}

	::System::Void Method_2_0E78C3B81A2F0DCC(::RPG::GameCore::EntityLodTemplateName a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodTemplateName))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_0E78C3B81A2F0DCC_OFFSET))(this, a1);
	}

	::System::Void Method_2_41AA181104E03F2C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_41AA181104E03F2C_OFFSET))(this);
	}

	::System::Void Method_2_283DA224BE06DA9F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_283DA224BE06DA9F_OFFSET))(this);
	}

	::System::Void Method_2_C0A237B6F1EC0BFD(::Class_1_8A6989C352B0F0F0* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_8A6989C352B0F0F0*))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_C0A237B6F1EC0BFD_OFFSET))(this, a1);
	}

	::System::Void Method_2_9046D4DE6D91F652(::System::Int32 a1, ::RPG::GameCore::EntityLodDetail* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::GameCore::EntityLodDetail*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_9046D4DE6D91F652_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_3AC94EEB348AAF2D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_3AC94EEB348AAF2D_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_A4269E3E00874962(::RPG::GameCore::LockEntityStreamingReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LockEntityStreamingReason))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_A4269E3E00874962_OFFSET))(this, a1);
	}

	::System::Void Method_2_A4269E3E00874962_1(::RPG::GameCore::LockEntityStreamingReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LockEntityStreamingReason))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_A4269E3E00874962_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::RPG::GameCore::EntityLodTemplateName Method_2_D063D7D09D8EF070()
	{
		return ((::RPG::GameCore::EntityLodTemplateName(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_D063D7D09D8EF070_OFFSET))(this);
	}

	::System::Void Method_2_980E30039C154A9E(::RPG::GameCore::EntityLodTemplateName a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityLodTemplateName))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_980E30039C154A9E_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_1D4018D4200358D0_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_1D4018D4200358D0_1_OFFSET))(this);
	}

	::System::Boolean Method_2_1D4018D4200358D0_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_1D4018D4200358D0_2_OFFSET))(this);
	}

	::System::Boolean Method_2_ABFE6A357B89C69A()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_ABFE6A357B89C69A_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_BF972395CC722BF9()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_BF972395CC722BF9_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_F10A0D072D26C4BF()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_F10A0D072D26C4BF_OFFSET))(this);
	}

	::UnityEngine::Bounds Method_2_AFE7559791CDF1D3()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_AFE7559791CDF1D3_OFFSET))(this);
	}

	::System::Boolean get_IsMoveable()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_GET_ISMOVEABLE_OFFSET))(this);
	}

	::System::Void set_IsMoveable(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_SET_ISMOVEABLE_OFFSET))(this, value);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_2_F026F9F94BAA5E1F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_F026F9F94BAA5E1F_OFFSET))(this);
	}

	::System::Int32 Method_2_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_95780ED94B90ED36_OFFSET))(this);
	}

	::System::Void Method_2_D09831639F615812(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_D09831639F615812_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_2_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_1808E1CF7A125519_OFFSET))(this);
	}

	::Class_1_8A6989C352B0F0F0_StreamingFeatureType Method_2_78DC90973F252701()
	{
		return ((::Class_1_8A6989C352B0F0F0_StreamingFeatureType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_78DC90973F252701_OFFSET))(this);
	}

	::System::Void Method_2_FF49D2BCBFD34B21(::Class_2_4C5CE8D630A9F4A2_ForceEntityLodReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4C5CE8D630A9F4A2_ForceEntityLodReason))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_FF49D2BCBFD34B21_OFFSET))(this, a1);
	}

	::System::Void Method_2_520B469428F63CD2(::Class_2_4C5CE8D630A9F4A2_ForceEntityLodReason a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4C5CE8D630A9F4A2_ForceEntityLodReason))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_520B469428F63CD2_OFFSET))(this, a1);
	}

	::System::Void Method_2_995670ABC4912008(::System::Int32 a1, ::Class_2_4C5CE8D630A9F4A2_ForceEntityLodReason a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_2_4C5CE8D630A9F4A2_ForceEntityLodReason))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2_METHOD_2_995670ABC4912008_OFFSET))(this, a1, a2);
	}

	::System::Void __iFixBaseProxy_Tick(::System::Single P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4C5CE8D630A9F4A2___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
	}
};

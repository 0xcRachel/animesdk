#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ProjectileMoveBehavior.h"
#include "unitysdk/RPG/GameCore/ProjectileState.h"
#include "unitysdk/Struct_2_1C6CD3A917B08105.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_345;
class Class_1_1835888C1E19F013;
class Class_1_2B8E0B4950FE44E7;
class Class_1_A2D8E5AB4B623162;
class Class_3_98C806684F7CC372_14;
class Class_3_98C806684F7CC372_15;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoProjectileEffect; }
namespace RPG::GameCore { class ColliderConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NewProjectileConfig; }
namespace RPG::GameCore { class ProjectileData; }
namespace RPG::GameCore { class ProjectileTemplateConfig; }
namespace RPG::GameCore { class ProjectileTemplateData; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define CLASS_1_0AD6129525BF5F86_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCCF80D0)
#define CLASS_1_0AD6129525BF5F86_GET_DATABEHAVIORTYPE_OFFSET UNITYSDK_OFFSET(0xCCF9BB0)
#define CLASS_1_0AD6129525BF5F86_GET_DATAREF_OFFSET UNITYSDK_OFFSET(0xCCF9B90)
#define CLASS_1_0AD6129525BF5F86_GET_ENSURECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0xCCF9C50)
#define CLASS_1_0AD6129525BF5F86_GET_ID_OFFSET UNITYSDK_OFFSET(0xCCF9CF0)
#define CLASS_1_0AD6129525BF5F86_GET_ISHIT_OFFSET UNITYSDK_OFFSET(0xCCF9BD0)
#define CLASS_1_0AD6129525BF5F86_GET_ONPROJECTILEHIT_OFFSET UNITYSDK_OFFSET(0xCCF9BF0)
#define CLASS_1_0AD6129525BF5F86_GET_ONPROJECTILELIFETIMEFINISH_OFFSET UNITYSDK_OFFSET(0xCCF9C10)
#define CLASS_1_0AD6129525BF5F86_GET_OWNERABILITYREF_OFFSET UNITYSDK_OFFSET(0xCCF9B70)
#define CLASS_1_0AD6129525BF5F86_GET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xCCF9B50)
#define CLASS_1_0AD6129525BF5F86_GET_PREVIOUSPROJECTILE_OFFSET UNITYSDK_OFFSET(0xCCF9C70)
#define CLASS_1_0AD6129525BF5F86_GET_SKILLCONTEXT_OFFSET UNITYSDK_OFFSET(0xCCF9C30)
#define CLASS_1_0AD6129525BF5F86_GET_STATE_OFFSET UNITYSDK_OFFSET(0xCCF9AF0)
#define CLASS_1_0AD6129525BF5F86_GET_TARGETENTITY_OFFSET UNITYSDK_OFFSET(0xCCF9B10)
#define CLASS_1_0AD6129525BF5F86_GET_TARGETPOSENTITY_OFFSET UNITYSDK_OFFSET(0xCCF9B30)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_0522806FC511AD84_OFFSET UNITYSDK_OFFSET(0xCCF87C0)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xCCF9C90)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_21378A7EB1BCB13B_OFFSET UNITYSDK_OFFSET(0xCCFB450)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_218F2836DA51D562_OFFSET UNITYSDK_OFFSET(0xCCF99E0)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_21F6EDFB46EAF49A_OFFSET UNITYSDK_OFFSET(0xCCF7A40)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xCCF9A20)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xCCFB010)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_4E140453C4B32F06_OFFSET UNITYSDK_OFFSET(0xCCF8340)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_82D02CA55C2C5E94_OFFSET UNITYSDK_OFFSET(0xCCF8540)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xCCF8440)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_8AB82AB9C7395DBE_OFFSET UNITYSDK_OFFSET(0xCCF8670)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_8FAD57395F26ACC4_OFFSET UNITYSDK_OFFSET(0xCCF83B0)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xCCF7950)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_9C6776D4E78CBA45_OFFSET UNITYSDK_OFFSET(0xCCF9D10)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_A1F9BFB7EBB25DAC_OFFSET UNITYSDK_OFFSET(0xCCFB120)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0xCCF81B0)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_ACA976655D1FA5D6_OFFSET UNITYSDK_OFFSET(0xCCF8CB0)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xCCF84C0)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_C38DE0E34C398638_OFFSET UNITYSDK_OFFSET(0xCCFB3A0)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCCF8780)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_CE1B8140CA2F0094_OFFSET UNITYSDK_OFFSET(0xCCF8A50)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_E07E9A00A7781C2A_OFFSET UNITYSDK_OFFSET(0xCCF9A70)
#define CLASS_1_0AD6129525BF5F86_METHOD_1_F550433FDBCEA79D_OFFSET UNITYSDK_OFFSET(0xCCFA590)
#define CLASS_1_0AD6129525BF5F86_SET_DATABEHAVIORTYPE_OFFSET UNITYSDK_OFFSET(0xCCF9BC0)
#define CLASS_1_0AD6129525BF5F86_SET_DATAREF_OFFSET UNITYSDK_OFFSET(0xCCF9BA0)
#define CLASS_1_0AD6129525BF5F86_SET_ENSURECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0xCCF9C60)
#define CLASS_1_0AD6129525BF5F86_SET_ID_OFFSET UNITYSDK_OFFSET(0xCCF9D00)
#define CLASS_1_0AD6129525BF5F86_SET_ISHIT_OFFSET UNITYSDK_OFFSET(0xCCF9BE0)
#define CLASS_1_0AD6129525BF5F86_SET_ONPROJECTILEHIT_OFFSET UNITYSDK_OFFSET(0xCCF9C00)
#define CLASS_1_0AD6129525BF5F86_SET_ONPROJECTILELIFETIMEFINISH_OFFSET UNITYSDK_OFFSET(0xCCF9C20)
#define CLASS_1_0AD6129525BF5F86_SET_OWNERABILITYREF_OFFSET UNITYSDK_OFFSET(0xCCF9B80)
#define CLASS_1_0AD6129525BF5F86_SET_OWNERENTITY_OFFSET UNITYSDK_OFFSET(0xCCF9B60)
#define CLASS_1_0AD6129525BF5F86_SET_PREVIOUSPROJECTILE_OFFSET UNITYSDK_OFFSET(0xCCF9C80)
#define CLASS_1_0AD6129525BF5F86_SET_SKILLCONTEXT_OFFSET UNITYSDK_OFFSET(0xCCF9C40)
#define CLASS_1_0AD6129525BF5F86_SET_STATE_OFFSET UNITYSDK_OFFSET(0xCCF9B00)
#define CLASS_1_0AD6129525BF5F86_SET_TARGETENTITY_OFFSET UNITYSDK_OFFSET(0xCCF9B20)
#define CLASS_1_0AD6129525BF5F86_SET_TARGETPOSENTITY_OFFSET UNITYSDK_OFFSET(0xCCF9B40)
#define CLASS_1_0AD6129525BF5F86__CCTOR_OFFSET UNITYSDK_OFFSET(0xCCFB660)
#define CLASS_1_0AD6129525BF5F86__CTOR_OFFSET UNITYSDK_OFFSET(0xCCF7BC0)
#define CLASS_1_0AD6129525BF5F86___CTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0xCCFB720)

inline static constexpr unsigned int Class_1_0AD6129525BF5F86_TypeDefinitionIndex = 50520;

class Class_1_0AD6129525BF5F86 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_39()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AD6129525BF5F86_TypeDefinitionIndex)->GetStaticField(0x689B0);
	}
	static ::RPG::GameCore::ProjectileTemplateConfig** StaticGet_Field_1_1()
	{
		return (::RPG::GameCore::ProjectileTemplateConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AD6129525BF5F86_TypeDefinitionIndex)->GetStaticField(0x689B8);
	}
	static ::RPG::GameCore::ColliderConfig** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::ColliderConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AD6129525BF5F86_TypeDefinitionIndex)->GetStaticField(0x689C0);
	}
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_Field_1_42()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AD6129525BF5F86_TypeDefinitionIndex)->GetStaticField(0x689C8);
	}
	static ::System::Int32* StaticGet_Field_1_40()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AD6129525BF5F86_TypeDefinitionIndex)->GetStaticField(0x111B0);
	}
	static ::System::Int32* StaticGet_Field_1_33()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AD6129525BF5F86_TypeDefinitionIndex)->GetStaticField(0x111B4);
	}
	::UnityEngine::Animator* Field_1_36; // 0x10
	::Class_1_2B8E0B4950FE44E7* _SkillContext_k__BackingField; // 0x18
	::RPG::Client::MonoProjectileEffect* Field_1_28; // 0x20
	::RPG::GameCore::GameEntity* _TargetEntity_k__BackingField; // 0x28
	::RPG::GameCore::GameEntity* _TargetPosEntity_k__BackingField; // 0x30
	::Class_1_A2D8E5AB4B623162* _OwnerAbilityRef_k__BackingField; // 0x38
	::System::String* Field_1_15; // 0x40
	::Class_3_98C806684F7CC372_15* _OnProjectileLifetimeFinish_k__BackingField; // 0x48
	::System::String* Field_1_27; // 0x50
	::RPG::GameCore::GameEntity* _OwnerEntity_k__BackingField; // 0x58
	::Class_1_0AD6129525BF5F86* _PreviousProjectile_k__BackingField; // 0x60
	::UnityEngine::Rigidbody* Field_1_37; // 0x68
	::UnityEngine::Transform* Field_1_31; // 0x70
	::UnityEngine::GameObject* Field_1_30; // 0x78
	::RPG::GameCore::NewProjectileConfig* _DataRef_k__BackingField; // 0x80
	::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* Field_1_34; // 0x88
	::Class_3_98C806684F7CC372_14* _OnProjectileHit_k__BackingField; // 0x90
	::Class_1_1835888C1E19F013* Field_1_26; // 0x98
	::Struct_2_1C6CD3A917B08105 Field_1_41; // 0xA0
	::System::Single Field_1_35; // 0xA8
	::UnityEngine::Vector3 Field_1_16; // 0xAC
	::RPG::GameCore::ProjectileMoveBehavior _DataBehaviorType_k__BackingField; // 0xB8
	::System::Int32 _ID_k__BackingField; // 0xBC
	::UnityEngine::Vector3 Field_1_19; // 0xC0
	::UnityEngine::Vector3 Field_1_22; // 0xCC
	::UnityEngine::Vector3 Field_1_18; // 0xD8
	::UnityEngine::Vector3 Field_1_23; // 0xE4
	::System::Int32 Field_1_38; // 0xF0
	::UnityEngine::Vector3 Field_1_20; // 0xF4
	::UnityEngine::Vector3 Field_1_17; // 0x100
	::UnityEngine::Vector3 Field_1_25; // 0x10C
	::UnityEngine::Vector3 Field_1_24; // 0x118
	::UnityEngine::Vector3 Field_1_21; // 0x124
	::System::Boolean _EnsureCallbackOrder_k__BackingField; // 0x130
	::System::Boolean Field_1_29; // 0x131
	::System::Boolean _IsHit_k__BackingField; // 0x132
	::RPG::GameCore::ProjectileState _State_k__BackingField; // 0x134

	::System::Void _ctor(::RPG::GameCore::ProjectileData* a1, ::Class_1_A2D8E5AB4B623162* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::GameEntity* a4, ::Class_3_98C806684F7CC372_14* a5, ::Class_1_2B8E0B4950FE44E7* a6, ::Class_3_98C806684F7CC372_15* a7, ::System::Boolean a8, ::RPG::GameCore::NewProjectileConfig* a9)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ProjectileData*, ::Class_1_A2D8E5AB4B623162*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::Class_3_98C806684F7CC372_14*, ::Class_1_2B8E0B4950FE44E7*, ::Class_3_98C806684F7CC372_15*, ::System::Boolean, ::RPG::GameCore::NewProjectileConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_9681042564541CD6()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_9681042564541CD6_OFFSET))();
	}

	static ::RPG::GameCore::ProjectileTemplateData* Method_1_21F6EDFB46EAF49A(::System::String* a1)
	{
		return ((::RPG::GameCore::ProjectileTemplateData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_21F6EDFB46EAF49A_OFFSET))(a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_A6544B958241856F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_A6544B958241856F_OFFSET))(this);
	}

	::System::Boolean Method_1_4E140453C4B32F06(::System::Single a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_4E140453C4B32F06_OFFSET))(this, a1);
	}

	::System::Void Method_1_8FAD57395F26ACC4(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_8FAD57395F26ACC4_OFFSET))(this, a1);
	}

	::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_82D02CA55C2C5E94(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_82D02CA55C2C5E94_OFFSET))(this, a1);
	}

	::System::Void Method_1_8AB82AB9C7395DBE(::UnityEngine::Collider* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_8AB82AB9C7395DBE_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_0522806FC511AD84(::UnityEngine::Collider* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_0522806FC511AD84_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_CE1B8140CA2F0094(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::UnityEngine::RaycastHit& a4, ::System::Int32 a5, ::System::Boolean a6)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_CE1B8140CA2F0094_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_ACA976655D1FA5D6(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Collider*& a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Collider*&))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_ACA976655D1FA5D6_OFFSET))(this, a1, a2, a3);
	}

	::Class_0_16E4307DCC419505_345* Method_1_218F2836DA51D562()
	{
		return ((::Class_0_16E4307DCC419505_345*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_218F2836DA51D562_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_E07E9A00A7781C2A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_E07E9A00A7781C2A_OFFSET))(this, a1);
	}

	::RPG::GameCore::ProjectileState get_State()
	{
		return ((::RPG::GameCore::ProjectileState(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_GET_STATE_OFFSET))(this);
	}

	::System::Void set_State(::RPG::GameCore::ProjectileState value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ProjectileState))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_SET_STATE_OFFSET))(this, value);
	}

	::RPG::GameCore::GameEntity* get_TargetEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_GET_TARGETENTITY_OFFSET))(this);
	}

	::System::Void set_TargetEntity(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_SET_TARGETENTITY_OFFSET))(this, value);
	}

	::RPG::GameCore::GameEntity* get_TargetPosEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_GET_TARGETPOSENTITY_OFFSET))(this);
	}

	::System::Void set_TargetPosEntity(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_SET_TARGETPOSENTITY_OFFSET))(this, value);
	}

	::RPG::GameCore::GameEntity* get_OwnerEntity()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_GET_OWNERENTITY_OFFSET))(this);
	}

	::System::Void set_OwnerEntity(::RPG::GameCore::GameEntity* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_SET_OWNERENTITY_OFFSET))(this, value);
	}

	::Class_1_A2D8E5AB4B623162* get_OwnerAbilityRef()
	{
		return ((::Class_1_A2D8E5AB4B623162*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_GET_OWNERABILITYREF_OFFSET))(this);
	}

	::System::Void set_OwnerAbilityRef(::Class_1_A2D8E5AB4B623162* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_A2D8E5AB4B623162*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_SET_OWNERABILITYREF_OFFSET))(this, value);
	}

	::RPG::GameCore::NewProjectileConfig* get_DataRef()
	{
		return ((::RPG::GameCore::NewProjectileConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_GET_DATAREF_OFFSET))(this);
	}

	::System::Void set_DataRef(::RPG::GameCore::NewProjectileConfig* value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::NewProjectileConfig*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_SET_DATAREF_OFFSET))(this, value);
	}

	::RPG::GameCore::ProjectileMoveBehavior get_DataBehaviorType()
	{
		return ((::RPG::GameCore::ProjectileMoveBehavior(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_GET_DATABEHAVIORTYPE_OFFSET))(this);
	}

	::System::Void set_DataBehaviorType(::RPG::GameCore::ProjectileMoveBehavior value)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ProjectileMoveBehavior))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_SET_DATABEHAVIORTYPE_OFFSET))(this, value);
	}

	::System::Boolean get_IsHit()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_GET_ISHIT_OFFSET))(this);
	}

	::System::Void set_IsHit(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_SET_ISHIT_OFFSET))(this, value);
	}

	::Class_3_98C806684F7CC372_14* get_OnProjectileHit()
	{
		return ((::Class_3_98C806684F7CC372_14*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_GET_ONPROJECTILEHIT_OFFSET))(this);
	}

	::System::Void set_OnProjectileHit(::Class_3_98C806684F7CC372_14* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_98C806684F7CC372_14*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_SET_ONPROJECTILEHIT_OFFSET))(this, value);
	}

	::Class_3_98C806684F7CC372_15* get_OnProjectileLifetimeFinish()
	{
		return ((::Class_3_98C806684F7CC372_15*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_GET_ONPROJECTILELIFETIMEFINISH_OFFSET))(this);
	}

	::System::Void set_OnProjectileLifetimeFinish(::Class_3_98C806684F7CC372_15* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_98C806684F7CC372_15*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_SET_ONPROJECTILELIFETIMEFINISH_OFFSET))(this, value);
	}

	::Class_1_2B8E0B4950FE44E7* get_SkillContext()
	{
		return ((::Class_1_2B8E0B4950FE44E7*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_GET_SKILLCONTEXT_OFFSET))(this);
	}

	::System::Void set_SkillContext(::Class_1_2B8E0B4950FE44E7* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_2B8E0B4950FE44E7*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_SET_SKILLCONTEXT_OFFSET))(this, value);
	}

	::System::Boolean get_EnsureCallbackOrder()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_GET_ENSURECALLBACKORDER_OFFSET))(this);
	}

	::System::Void set_EnsureCallbackOrder(::System::Boolean value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_SET_ENSURECALLBACKORDER_OFFSET))(this, value);
	}

	::Class_1_0AD6129525BF5F86* get_PreviousProjectile()
	{
		return ((::Class_1_0AD6129525BF5F86*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_GET_PREVIOUSPROJECTILE_OFFSET))(this);
	}

	::System::Void set_PreviousProjectile(::Class_1_0AD6129525BF5F86* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_0AD6129525BF5F86*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_SET_PREVIOUSPROJECTILE_OFFSET))(this, value);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::System::Int32 get_ID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_GET_ID_OFFSET))(this);
	}

	::System::Void set_ID(::System::Int32 value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_SET_ID_OFFSET))(this, value);
	}

	::System::Void Method_1_9C6776D4E78CBA45(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_9C6776D4E78CBA45_OFFSET))(this, a1);
	}

	::UnityEngine::GameObject* Method_1_F550433FDBCEA79D(::RPG::Client::MonoEffect* a1)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_F550433FDBCEA79D_OFFSET))(this, a1);
	}

	::System::Void Method_1_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_1_A1F9BFB7EBB25DAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_A1F9BFB7EBB25DAC_OFFSET))(this);
	}

	::System::Void Method_1_C38DE0E34C398638(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_C38DE0E34C398638_OFFSET))(this, a1);
	}

	::System::Void Method_1_21378A7EB1BCB13B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86_METHOD_1_21378A7EB1BCB13B_OFFSET))(this);
	}

	::System::Void __ctor_b__4_0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0AD6129525BF5F86___CTOR_B__4_0_OFFSET))(this);
	}
};

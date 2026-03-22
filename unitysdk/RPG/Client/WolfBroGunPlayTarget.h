#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EWolfBroGunPlayTargetActionFlag.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_2BF31F3092BDFD9E;
class Class_1_482F3423DE650EAD;
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class WolfBroGunPlayRoadConfig; }
namespace RPG::Client { class WolfBroGunPlayTargetActionConfig; }
namespace RPG::Client { class WolfBroGunPlayTargetActionConfig_TriggerEffect; }
namespace RPG::Client { class WolfBroGunPlayTarget_Group; }
namespace RPG::Client { class WolfBroGunTargetProjectile; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Collider; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_AWAKE_OFFSET UNITYSDK_OFFSET(0xA261FE0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_CLEAR_OFFSET UNITYSDK_OFFSET(0xA262400)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_DIE_OFFSET UNITYSDK_OFFSET(0xA263040)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_FIRE_1_OFFSET UNITYSDK_OFFSET(0xA263D80)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_FIRE_OFFSET UNITYSDK_OFFSET(0xA263890)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIP_OFFSET UNITYSDK_OFFSET(0xA262B40)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GETCOLLIDERCENTER_OFFSET UNITYSDK_OFFSET(0xA264420)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GETEFFECTUNIQUENAME_OFFSET UNITYSDK_OFFSET(0xA263260)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GETPOSITION_OFFSET UNITYSDK_OFFSET(0xA2631C0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GETWAITMISSTIME_OFFSET UNITYSDK_OFFSET(0xA2635A0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0xA265CE0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ATTACHPOINTMAPPING_OFFSET UNITYSDK_OFFSET(0xA265BD0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_COLLIDER_OFFSET UNITYSDK_OFFSET(0xA265D00)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0xA265D20)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA265C30)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ISDYING_OFFSET UNITYSDK_OFFSET(0xA265C50)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ISFLIPPING_OFFSET UNITYSDK_OFFSET(0xA265DB0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ISFLIP_OFFSET UNITYSDK_OFFSET(0xA265DA0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ISINITACTION_OFFSET UNITYSDK_OFFSET(0xA265C70)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ISMOVING_OFFSET UNITYSDK_OFFSET(0xA265D60)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_LASTHITDIRECTION_OFFSET UNITYSDK_OFFSET(0xA265D30)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_MOVEVALUE_OFFSET UNITYSDK_OFFSET(0xA265D80)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_OWNERGROUP_OFFSET UNITYSDK_OFFSET(0xA265C10)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ROADMAP_OFFSET UNITYSDK_OFFSET(0xA265BF0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_HASFLAGS_OFFSET UNITYSDK_OFFSET(0xA2621F0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_INIT_OFFSET UNITYSDK_OFFSET(0xA262450)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ISAPPEAR_OFFSET UNITYSDK_OFFSET(0xA263340)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ISBOOMABLE_OFFSET UNITYSDK_OFFSET(0xA263530)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ISHITTABLE_OFFSET UNITYSDK_OFFSET(0xA2634C0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xA265430)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0xA2652A0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0xA2659B0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_39590AB2089F9F4D_OFFSET UNITYSDK_OFFSET(0xA262DB0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0xA265550)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xA262E60)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_492C14B76D6C93F5_OFFSET UNITYSDK_OFFSET(0xA265830)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xA2656E0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_705FFC79B57F4953_OFFSET UNITYSDK_OFFSET(0xA264680)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_A86A455D6AB5B836_1_OFFSET UNITYSDK_OFFSET(0xA264C40)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_A86A455D6AB5B836_OFFSET UNITYSDK_OFFSET(0xA264BF0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_AEE2E9B5D7D5C55B_OFFSET UNITYSDK_OFFSET(0xA264C90)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_B09E78EE7EE4F8FA_OFFSET UNITYSDK_OFFSET(0xA264570)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_B13A9DB665A91AEE_OFFSET UNITYSDK_OFFSET(0xA265AC0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xA263810)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_B732DC7FA82BA621_OFFSET UNITYSDK_OFFSET(0xA2655A0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_CD31B042AA38F328_OFFSET UNITYSDK_OFFSET(0xA265600)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_DD85D6AC91C1BEA9_OFFSET UNITYSDK_OFFSET(0xA265360)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_E3DE31A03057E055_1_OFFSET UNITYSDK_OFFSET(0xA264970)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_E3DE31A03057E055_2_OFFSET UNITYSDK_OFFSET(0xA264AB0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_E3DE31A03057E055_OFFSET UNITYSDK_OFFSET(0xA264830)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_F59DCF082763F03E_OFFSET UNITYSDK_OFFSET(0xA2657C0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ONHIT_OFFSET UNITYSDK_OFFSET(0xA2635F0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_OVERRIDEINITPOS_OFFSET UNITYSDK_OFFSET(0xA262250)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_PAUSE_OFFSET UNITYSDK_OFFSET(0xA2620B0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_RESUME_OFFSET UNITYSDK_OFFSET(0xA262110)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_SETACTIONFLAGS_OFFSET UNITYSDK_OFFSET(0xA2623B0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_SETPOSITION_OFFSET UNITYSDK_OFFSET(0xA263130)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_ANIMATOR_OFFSET UNITYSDK_OFFSET(0xA265CF0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_ATTACHPOINTMAPPING_OFFSET UNITYSDK_OFFSET(0xA265BE0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_COLLIDER_OFFSET UNITYSDK_OFFSET(0xA265D10)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xA265C40)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_ISDYING_OFFSET UNITYSDK_OFFSET(0xA265C60)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_ISMOVING_OFFSET UNITYSDK_OFFSET(0xA265D70)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_LASTHITDIRECTION_OFFSET UNITYSDK_OFFSET(0xA265D50)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_MOVEVALUE_OFFSET UNITYSDK_OFFSET(0xA265D90)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_OWNERGROUP_OFFSET UNITYSDK_OFFSET(0xA265C20)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_ROADMAP_OFFSET UNITYSDK_OFFSET(0xA265C00)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_SHOWSCORE_OFFSET UNITYSDK_OFFSET(0xA2641D0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_STARTUP_OFFSET UNITYSDK_OFFSET(0xA262AD0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_TICK_OFFSET UNITYSDK_OFFSET(0xA262BF0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET__CCTOR_OFFSET UNITYSDK_OFFSET(0xA265E50)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET__CTOR_OFFSET UNITYSDK_OFFSET(0xA265DC0)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_TypeDefinitionIndex = 54559;

	class WolfBroGunPlayTarget : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_RemoveDieStateName()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_TypeDefinitionIndex)->GetStaticField(0x187E0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_FlipStateHash()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_TypeDefinitionIndex)->GetStaticField(0x187E8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_IdleStateHash()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_TypeDefinitionIndex)->GetStaticField(0x187F0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_HitDieStateHash()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_TypeDefinitionIndex)->GetStaticField(0x187F8);
		}
		static ::System::Int32* StaticGet_MoveValueParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_TypeDefinitionIndex)->GetStaticField(0x5C70);
		}
		static ::System::Int32* StaticGet_IsMoveParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_TypeDefinitionIndex)->GetStaticField(0x5C74);
		}
		static ::System::Int32* StaticGet_HitSpeedParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_TypeDefinitionIndex)->GetStaticField(0x5C78);
		}
		static ::System::Int32* StaticGet_BornStateHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_TypeDefinitionIndex)->GetStaticField(0x5C7C);
		}
		static ::System::Int32* StaticGet_IsFlipParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_TypeDefinitionIndex)->GetStaticField(0x5C80);
		}
		static ::System::Int32* StaticGet_FlipSpeedParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_TypeDefinitionIndex)->GetStaticField(0x5C84);
		}
		static ::System::Int32* StaticGet_HitTriggerParamHash()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WolfBroGunPlayTarget_TypeDefinitionIndex)->GetStaticField(0x5C88);
		}
		::RPG::Client::WolfBroGunPlayRoadConfig* roadConfig; // 0x18
		::System::Single FlipAnimTime; // 0x20
		::System::Single score; // 0x24
		::RPG::Client::AttachPointMapping* _AttachPointMapping_k__BackingField; // 0x28
		::RPG::Client::WolfBroGunPlayTargetActionConfig_TriggerEffect* InitEffectConfig; // 0x30
		::RPG::Client::WolfBroGunPlayTargetActionConfig_TriggerEffect* OnHitDieEffectConfig; // 0x38
		::Class_1_2BF31F3092BDFD9E* _RoadMap_k__BackingField; // 0x40
		::RPG::Client::WolfBroGunPlayTarget_Group* _OwnerGroup_k__BackingField; // 0x48
		::System::Boolean _IsActive_k__BackingField; // 0x50
		::System::Boolean _IsDying_k__BackingField; // 0x51
		::UnityEngine::Animator* _Animator_k__BackingField; // 0x58
		::UnityEngine::Collider* _Collider_k__BackingField; // 0x60
		::UnityEngine::Vector3 _LastHitDirection_k__BackingField; // 0x68
		::System::Boolean _IsMoving_k__BackingField; // 0x74
		::System::Single _MoveValue_k__BackingField; // 0x78
		::System::Boolean Field_5_15; // 0x7C
		::System::Boolean Field_5_16; // 0x7D
		::System::Boolean Field_5_17; // 0x7E
		::System::Collections::Generic::List_1<::System::Single>* Field_5_18; // 0x80
		::System::Int32 Field_5_19; // 0x88
		::Il2CppArray<::RPG::Client::WolfBroGunPlayTargetActionConfig*>* Field_5_20; // 0x90
		::System::Int32 Field_5_21; // 0x98
		::System::Int32 Field_5_22; // 0x9C
		::System::Collections::Generic::List_1<::Class_1_482F3423DE650EAD*>* Field_5_23; // 0xA0
		::System::Int32 Field_5_24; // 0xA8
		::System::Collections::Generic::List_1<::Class_1_482F3423DE650EAD*>* Field_5_25; // 0xB0
		::Il2CppArray<::System::Int32>* Field_5_26; // 0xB8
		::Il2CppArray<::System::Collections::Generic::List_1<::Class_1_482F3423DE650EAD*>*>* Field_5_27; // 0xC0
		::RPG::Client::EWolfBroGunPlayTargetActionFlag Field_5_28; // 0xC8
		::System::Single Field_5_29; // 0xCC
		::System::Boolean Field_5_30; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_AWAKE_OFFSET))(this);
		}

		::System::Void Pause()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_PAUSE_OFFSET))(this);
		}

		::System::Void Resume()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_RESUME_OFFSET))(this);
		}

		::System::Boolean HasFlags(::RPG::Client::EWolfBroGunPlayTargetActionFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EWolfBroGunPlayTargetActionFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_HASFLAGS_OFFSET))(this, a1);
		}

		::System::Void OverrideInitPos(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_OVERRIDEINITPOS_OFFSET))(this, a1);
		}

		::System::Void SetActionFlags(::RPG::Client::EWolfBroGunPlayTargetActionFlag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EWolfBroGunPlayTargetActionFlag))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_SETACTIONFLAGS_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_CLEAR_OFFSET))(this);
		}

		::System::Void Init(::Class_1_2BF31F3092BDFD9E* a1, ::RPG::Client::WolfBroGunPlayTarget_Group* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2BF31F3092BDFD9E*, ::RPG::Client::WolfBroGunPlayTarget_Group*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Startup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_STARTUP_OFFSET))(this);
		}

		::System::Void Flip(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_FLIP_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_TICK_OFFSET))(this, a1);
		}

		::System::Void SetPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_SETPOSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GetPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GETPOSITION_OFFSET))(this);
		}

		::System::String* GetEffectUniqueName(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GETEFFECTUNIQUENAME_OFFSET))(this, a1);
		}

		::System::Boolean IsAppear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ISAPPEAR_OFFSET))(this);
		}

		::System::Boolean IsHittable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ISHITTABLE_OFFSET))(this);
		}

		::System::Boolean IsBoomable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ISBOOMABLE_OFFSET))(this);
		}

		::System::Single GetWaitMissTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GETWAITMISSTIME_OFFSET))(this);
		}

		::System::Boolean OnHit(::UnityEngine::Vector3 a1, ::System::Nullable_1<::UnityEngine::Vector3> a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ONHIT_OFFSET))(this, a1, a2);
		}

		::System::Void Die(::System::Boolean a1, ::System::String* a2, ::Il2CppArray<::RPG::Client::WolfBroGunPlayTargetActionConfig*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*, ::Il2CppArray<::RPG::Client::WolfBroGunPlayTargetActionConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_DIE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Fire(::System::String* a1, ::RPG::Client::WolfBroGunTargetProjectile* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::WolfBroGunTargetProjectile*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_FIRE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Fire_1(::System::String* a1, ::System::Single a2, ::RPG::Client::WolfBroGunTargetProjectile* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::RPG::Client::WolfBroGunTargetProjectile*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_FIRE_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowScore(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_SHOWSCORE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 GetColliderCenter()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GETCOLLIDERCENTER_OFFSET))(this);
		}

		::System::Void Method_5_B09E78EE7EE4F8FA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_B09E78EE7EE4F8FA_OFFSET))(this);
		}

		::System::Void Method_5_705FFC79B57F4953(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_705FFC79B57F4953_OFFSET))(this, a1);
		}

		::System::Void Method_5_E3DE31A03057E055()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_E3DE31A03057E055_OFFSET))(this);
		}

		::System::Void Method_5_E3DE31A03057E055_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_E3DE31A03057E055_1_OFFSET))(this);
		}

		::System::Void Method_5_E3DE31A03057E055_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_E3DE31A03057E055_2_OFFSET))(this);
		}

		::System::Void Method_5_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_B1936CE4DA97AA45_OFFSET))(this);
		}

		::System::Boolean Method_5_A86A455D6AB5B836(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_A86A455D6AB5B836_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_A86A455D6AB5B836_1(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_A86A455D6AB5B836_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_AEE2E9B5D7D5C55B(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_AEE2E9B5D7D5C55B_OFFSET))(this, a1);
		}

		::System::Void Method_5_151E25A63D14DDB0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_151E25A63D14DDB0_OFFSET))(this);
		}

		::System::Void Method_5_DD85D6AC91C1BEA9(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_DD85D6AC91C1BEA9_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Method_5_3E7178C5ECF017DB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_3E7178C5ECF017DB_OFFSET))(this, a1);
		}

		::System::Void Method_5_B732DC7FA82BA621()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_B732DC7FA82BA621_OFFSET))(this);
		}

		::System::Void Method_5_51CFFE2AF748ECD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_51CFFE2AF748ECD7_OFFSET))(this);
		}

		::System::Boolean Method_5_F59DCF082763F03E(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_F59DCF082763F03E_OFFSET))(this, a1);
		}

		::System::Void Method_5_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_B13A9DB665A91AEE(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_B13A9DB665A91AEE_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_492C14B76D6C93F5(::System::Single a1, ::System::Collections::Generic::List_1<::Class_1_482F3423DE650EAD*>* a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Collections::Generic::List_1<::Class_1_482F3423DE650EAD*>*, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_492C14B76D6C93F5_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_5_CD31B042AA38F328(::System::Collections::Generic::List_1<::Class_1_482F3423DE650EAD*>* a1, ::System::Int32& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_482F3423DE650EAD*>*, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_CD31B042AA38F328_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_41A074549EF25F63_OFFSET))(this);
		}

		::System::Void Method_5_39590AB2089F9F4D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_METHOD_5_39590AB2089F9F4D_OFFSET))(this, a1);
		}

		::RPG::Client::AttachPointMapping* get_AttachPointMapping()
		{
			return ((::RPG::Client::AttachPointMapping*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ATTACHPOINTMAPPING_OFFSET))(this);
		}

		::System::Void set_AttachPointMapping(::RPG::Client::AttachPointMapping* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_ATTACHPOINTMAPPING_OFFSET))(this, value);
		}

		::Class_1_2BF31F3092BDFD9E* get_RoadMap()
		{
			return ((::Class_1_2BF31F3092BDFD9E*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ROADMAP_OFFSET))(this);
		}

		::System::Void set_RoadMap(::Class_1_2BF31F3092BDFD9E* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2BF31F3092BDFD9E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_ROADMAP_OFFSET))(this, value);
		}

		::RPG::Client::WolfBroGunPlayTarget_Group* get_OwnerGroup()
		{
			return ((::RPG::Client::WolfBroGunPlayTarget_Group*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_OWNERGROUP_OFFSET))(this);
		}

		::System::Void set_OwnerGroup(::RPG::Client::WolfBroGunPlayTarget_Group* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::WolfBroGunPlayTarget_Group*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_OWNERGROUP_OFFSET))(this, value);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_ISACTIVE_OFFSET))(this, value);
		}

		::System::Boolean get_IsDying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ISDYING_OFFSET))(this);
		}

		::System::Void set_IsDying(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_ISDYING_OFFSET))(this, value);
		}

		::System::Boolean get_IsInitAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ISINITACTION_OFFSET))(this);
		}

		::UnityEngine::Animator* get_Animator()
		{
			return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ANIMATOR_OFFSET))(this);
		}

		::System::Void set_Animator(::UnityEngine::Animator* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_ANIMATOR_OFFSET))(this, value);
		}

		::UnityEngine::Collider* get_Collider()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_COLLIDER_OFFSET))(this);
		}

		::System::Void set_Collider(::UnityEngine::Collider* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_COLLIDER_OFFSET))(this, value);
		}

		::RPG::Client::EWolfBroGunPlayTargetActionFlag get_Flags()
		{
			return ((::RPG::Client::EWolfBroGunPlayTargetActionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_FLAGS_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_LastHitDirection()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_LASTHITDIRECTION_OFFSET))(this);
		}

		::System::Void set_LastHitDirection(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_LASTHITDIRECTION_OFFSET))(this, value);
		}

		::System::Boolean get_IsMoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ISMOVING_OFFSET))(this);
		}

		::System::Void set_IsMoving(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_ISMOVING_OFFSET))(this, value);
		}

		::System::Single get_MoveValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_MOVEVALUE_OFFSET))(this);
		}

		::System::Void set_MoveValue(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_SET_MOVEVALUE_OFFSET))(this, value);
		}

		::System::Boolean get_IsFlip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ISFLIP_OFFSET))(this);
		}

		::System::Boolean get_IsFlipping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_GET_ISFLIPPING_OFFSET))(this);
		}
	};
}

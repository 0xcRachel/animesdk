#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Eff_VoxelUnidirOcclusionBehavior_RuntimeState.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client { class Eff_VoxelUnidirOcclusionMonoPlugin; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class GPUParticlesAsset; }
namespace UnityEngine { class GPUParticlesRenderer; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET UNITYSDK_OFFSET(0x908FAE0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_0303214E004087C1_1_OFFSET UNITYSDK_OFFSET(0x90920B0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_0303214E004087C1_OFFSET UNITYSDK_OFFSET(0x9091FC0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_0868EF727040C390_1_OFFSET UNITYSDK_OFFSET(0x908EA50)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_0868EF727040C390_OFFSET UNITYSDK_OFFSET(0x908E3E0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_147A527305B2FF1B_OFFSET UNITYSDK_OFFSET(0x908F310)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_1947BC35B7A7FCB8_OFFSET UNITYSDK_OFFSET(0x908ED80)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_1E13A8A5C0FF7D62_OFFSET UNITYSDK_OFFSET(0x9090570)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x908F0B0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_33ACA6CB2ABC73F7_1_OFFSET UNITYSDK_OFFSET(0x908FB20)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_33ACA6CB2ABC73F7_2_OFFSET UNITYSDK_OFFSET(0x9091420)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x908F6C0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x908EA10)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_3E06E2491B129B22_OFFSET UNITYSDK_OFFSET(0x9091A40)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x908E820)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x908EBD0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET UNITYSDK_OFFSET(0x9090DA0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x908E660)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x908F9E0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x9093230)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x9093290)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x90932F0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0x9093350)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0x90933B0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET UNITYSDK_OFFSET(0x9093480)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_7_OFFSET UNITYSDK_OFFSET(0x90934E0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x90931D0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_62165C025F5C0B19_OFFSET UNITYSDK_OFFSET(0x908F120)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x9091390)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_6DB0BD2CEA703683_OFFSET UNITYSDK_OFFSET(0x9091C10)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x908F610)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_744E204F41E762A0_OFFSET UNITYSDK_OFFSET(0x9091530)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_775B6D644F07B554_OFFSET UNITYSDK_OFFSET(0x9092C20)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x908E890)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_7C2C2820B36B9508_1_OFFSET UNITYSDK_OFFSET(0x908F8C0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_7C2C2820B36B9508_OFFSET UNITYSDK_OFFSET(0x908E6D0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x908F2B0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x9092DA0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_8C544E1228859051_OFFSET UNITYSDK_OFFSET(0x9091880)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_9681042564541CD6_1_OFFSET UNITYSDK_OFFSET(0x908EC40)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x908E350)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x908E550)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_A585DA5742B7BDD6_OFFSET UNITYSDK_OFFSET(0x9092170)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_A8A02A5CE5ADA860_OFFSET UNITYSDK_OFFSET(0x90922A0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_AA169839CB93802A_OFFSET UNITYSDK_OFFSET(0x9090450)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x9090F40)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x9090A90)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_BF5E2DCAE0BF038A_OFFSET UNITYSDK_OFFSET(0x908E9C0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_C638E91FC0D3A13A_1_OFFSET UNITYSDK_OFFSET(0x9091250)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0x9090DF0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_C982C8295D29DA97_OFFSET UNITYSDK_OFFSET(0x908F000)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_D51B57322AA430CA_OFFSET UNITYSDK_OFFSET(0x908EEE0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x9093410)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_F5B4708E7805566C_OFFSET UNITYSDK_OFFSET(0x908FC90)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_F79D5EC57FBF426E_OFFSET UNITYSDK_OFFSET(0x908FC30)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_F978A1D172468895_OFFSET UNITYSDK_OFFSET(0x9092AE0)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_TICK_OFFSET UNITYSDK_OFFSET(0x908EE80)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x9093070)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x9093040)
#define RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET UNITYSDK_OFFSET(0x9093540)

namespace RPG::Client
{
	inline static constexpr unsigned int Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex = 56077;

	class Eff_VoxelUnidirOcclusionBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__SeparationOffsetProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x10000);
		}
		static ::System::Int32* StaticGet__SpawnCenterProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x10004);
		}
		static ::System::Int32* StaticGet__CurrentWSScaleProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x10008);
		}
		static ::System::Int32* StaticGet__SeparationPatternTillingScaleXProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x1000C);
		}
		static ::System::Int32* StaticGet__TransformScaleProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x10010);
		}
		static ::System::Int32* StaticGet__CurrentWSRotationProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x10014);
		}
		static ::System::Int32* StaticGet__VoxelTotalAmountProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x10018);
		}
		static ::System::Int32* StaticGet__FlyHeightProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x1001C);
		}
		static ::System::Int32* StaticGet__SeparationPatternTillingScaleYProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x10020);
		}
		static ::System::Int32* StaticGet__VoxelUnitScaleProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x10024);
		}
		static ::System::Int32* StaticGet__DisappearProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x10028);
		}
		static ::System::Int32* StaticGet__CurrentWPProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x1002C);
		}
		static ::System::Int32* StaticGet__OffsetModeProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x10030);
		}
		static ::System::Int32* StaticGet__SpawnScaleProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x10034);
		}
		static ::System::Int32* StaticGet__WorldToObjectProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x10038);
		}
		static ::System::Int32* StaticGet__PausedProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x1003C);
		}
		static ::System::Int32* StaticGet__VoxelCountZProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x10040);
		}
		static ::System::Int32* StaticGet__VoxelCountXProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Eff_VoxelUnidirOcclusionBehavior_TypeDefinitionIndex)->GetStaticField(0x10044);
		}
		::System::Boolean _Inited; // 0x38
		::UnityEngine::GPUParticlesAsset* _GPUParticlesAssetInstance; // 0x40
		::UnityEngine::GPUParticlesRenderer* _GPUParticlesRenderer; // 0x48
		::UnityEngine::Transform* VoxelTransform; // 0x50
		::UnityEngine::Vector4 _ParticleSpawnScale; // 0x58
		::System::Int32 ParticleNumber; // 0x68
		::System::Boolean _Initialized; // 0x6C
		::System::Boolean _Spawned; // 0x6D
		::UnityEngine::Vector3 spawnScale; // 0x70
		::UnityEngine::Vector3 spawnCenterWS; // 0x7C
		::UnityEngine::Camera* _Camera; // 0x88
		::UnityEngine::Vector3 _cachedParticleScale; // 0x90
		::Il2CppArray<::UnityEngine::Collider*>* _ignoreColliders; // 0xA0
		::Il2CppArray<::UnityEngine::Collider*>* _EffectTargetColliders; // 0xA8
		::UnityEngine::GameObject* _TargetGO; // 0xB0
		::System::Single heightOffset; // 0xB8
		::System::Single raycastDistance; // 0xBC
		::UnityEngine::Transform* targetObject; // 0xC0
		::System::Boolean _paused; // 0xC8
		::System::Int32 _groundCheckCounter; // 0xCC
		::UnityEngine::Vector3 _lastGroundPosition; // 0xD0
		::System::Boolean _hasGroundPosition; // 0xDC
		::System::Single _lastAppliedDisappear; // 0xE0
		::System::Single _lastAppliedFlyHeight; // 0xE4
		::UnityEngine::Coroutine* _DelaySpawnParticleCoroutine; // 0xE8
		::UnityEngine::ComputeShader* _ComputeShaderInstance; // 0xF0
		::UnityEngine::Material* _MaterialInstance; // 0xF8
		::System::Boolean _OwnsGPUParticlesAssetInstance; // 0x100
		::System::Boolean _OwnsComputeShaderInstance; // 0x101
		::System::Boolean _OwnsMaterialInstance; // 0x102
		::RPG::Client::Eff_VoxelUnidirOcclusionBehavior_RuntimeState _state; // 0x104
		::System::Int32 _lastRebuildFrame; // 0x108

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_3_0868EF727040C390()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_0868EF727040C390_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_79830F666EE579C0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_79830F666EE579C0_OFFSET))(this);
		}

		::System::Void Method_3_BF5E2DCAE0BF038A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_BF5E2DCAE0BF038A_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_0868EF727040C390_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_0868EF727040C390_1_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void Method_3_9681042564541CD6_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_9681042564541CD6_1_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_TICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_D51B57322AA430CA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_D51B57322AA430CA_OFFSET))(this, a1);
		}

		::System::Void Method_3_1947BC35B7A7FCB8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_1947BC35B7A7FCB8_OFFSET))(this);
		}

		::System::Void Method_3_A1ADC999CFACEB89()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_A1ADC999CFACEB89_OFFSET))(this);
		}

		::System::Void Method_3_7C2C2820B36B9508()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_7C2C2820B36B9508_OFFSET))(this);
		}

		::System::Void Method_3_7C2C2820B36B9508_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_7C2C2820B36B9508_1_OFFSET))(this);
		}

		::System::Boolean Method_3_C982C8295D29DA97()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_C982C8295D29DA97_OFFSET))(this);
		}

		::System::Void Method_3_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_3_2C95AFAD0256302F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_2C95AFAD0256302F_OFFSET))(this);
		}

		::System::Void Method_3_F79D5EC57FBF426E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_F79D5EC57FBF426E_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_4343F372F34C05BF_3_OFFSET))(this);
		}

		::System::Void Method_3_7FBAA229ED524F8E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_7FBAA229ED524F8E_OFFSET))(this);
		}

		::System::Collections::IEnumerator* Method_3_627C7524E98F4AC5()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_627C7524E98F4AC5_OFFSET))(this);
		}

		::System::Void Method_3_33ACA6CB2ABC73F7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_33ACA6CB2ABC73F7_1_OFFSET))(this);
		}

		::System::Void Method_3_51CFFE2AF748ECD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_51CFFE2AF748ECD7_OFFSET))(this);
		}

		::System::Void Method_3_7033EFB970A18315()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_7033EFB970A18315_OFFSET))(this);
		}

		::System::Void Method_3_F5B4708E7805566C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_F5B4708E7805566C_OFFSET))(this);
		}

		::System::Void Method_3_33ACA6CB2ABC73F7_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_33ACA6CB2ABC73F7_2_OFFSET))(this);
		}

		::System::Void Method_3_B7F8E0B4AF22DEA3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_B7F8E0B4AF22DEA3_OFFSET))(this);
		}

		::System::Void Method_3_ABE7715DB28B2DD1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_ABE7715DB28B2DD1_OFFSET))(this);
		}

		::System::Void Method_3_3E06E2491B129B22()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_3E06E2491B129B22_OFFSET))(this);
		}

		::System::Void Method_3_6DB0BD2CEA703683(::UnityEngine::Material* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_6DB0BD2CEA703683_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_3_8C544E1228859051(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_8C544E1228859051_OFFSET))(this, a1);
		}

		::System::Void Method_3_744E204F41E762A0(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_744E204F41E762A0_OFFSET))(this, a1);
		}

		::System::Void Method_3_1E13A8A5C0FF7D62()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_1E13A8A5C0FF7D62_OFFSET))(this);
		}

		::System::Void Method_3_147A527305B2FF1B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_147A527305B2FF1B_OFFSET))(this);
		}

		::System::Void Method_3_C638E91FC0D3A13A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_C638E91FC0D3A13A_OFFSET))(this);
		}

		::System::Void Method_3_C638E91FC0D3A13A_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_C638E91FC0D3A13A_1_OFFSET))(this);
		}

		::System::Void Method_3_0303214E004087C1(::UnityEngine::GPUParticlesAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GPUParticlesAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_0303214E004087C1_OFFSET))(this, a1);
		}

		::System::Void Method_3_0303214E004087C1_1(::UnityEngine::GPUParticlesAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GPUParticlesAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_0303214E004087C1_1_OFFSET))(this, a1);
		}

		::System::Void Method_3_A585DA5742B7BDD6(::UnityEngine::GPUParticlesAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GPUParticlesAsset*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_A585DA5742B7BDD6_OFFSET))(this, a1);
		}

		::System::Void Method_3_AA169839CB93802A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_AA169839CB93802A_OFFSET))(this);
		}

		::System::Void Method_3_F978A1D172468895()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_F978A1D172468895_OFFSET))(this);
		}

		::System::Void Method_3_775B6D644F07B554()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_775B6D644F07B554_OFFSET))(this);
		}

		::UnityEngine::Vector3 Method_3_A8A02A5CE5ADA860()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_A8A02A5CE5ADA860_OFFSET))(this);
		}

		::System::Void Method_3_62165C025F5C0B19()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_62165C025F5C0B19_OFFSET))(this);
		}

		::System::Void Method_3_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_89D1F247B9D324EE_OFFSET))(this);
		}

		::RPG::Client::Eff_VoxelUnidirOcclusionMonoPlugin* get__OwnerMonoPlugin()
		{
			return ((::RPG::Client::Eff_VoxelUnidirOcclusionMonoPlugin*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_GET__OWNERMONOPLUGIN_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET))(this);
		}

		::System::Boolean Method_3_F0E307B84478A272()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR_METHOD_3_5790A55946AA509D_7_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Tick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFF_VOXELUNIDIROCCLUSIONBEHAVIOR___IFIXBASEPROXY_TICK_OFFSET))(this, P0);
		}
	};
}

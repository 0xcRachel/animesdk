#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace RPG::Client::SkinnedGPUParticles { class SkinnedGPUParticles; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class GPUParticlesAsset; }
namespace UnityEngine { class GPUParticlesRenderer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class SkinnedMeshRenderer; }

#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x16C1ED60)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__MESH_OFFSET UNITYSDK_OFFSET(0x16C20C70)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__OWNER_OFFSET UNITYSDK_OFFSET(0x16C20D00)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__PARTICLESASSET_OFFSET UNITYSDK_OFFSET(0x16C20D90)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__PARTICLESRENDERER_OFFSET UNITYSDK_OFFSET(0x16C20D40)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__SKINNEDMESH_OFFSET UNITYSDK_OFFSET(0x16C20C20)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_0BDFAC56E6B704CB_1_OFFSET UNITYSDK_OFFSET(0x16C1EC40)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0x16C1EAA0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x16C20A20)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_1295D43E51390654_OFFSET UNITYSDK_OFFSET(0x16C1F5C0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_237B5153A8A729D9_OFFSET UNITYSDK_OFFSET(0x16C1EE60)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_25DEA5C65A602671_1_OFFSET UNITYSDK_OFFSET(0x16C1EBF0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x16C1E990)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_30D1209326FA87FC_1_OFFSET UNITYSDK_OFFSET(0x16C20B90)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16C1E9E0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x16C1ECC0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET UNITYSDK_OFFSET(0x16C1EB90)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET UNITYSDK_OFFSET(0x16C1ED00)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16C1E920)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0x16C21070)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0x16C210D0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0x16C21130)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0x16C21190)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0x16C21200)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET UNITYSDK_OFFSET(0x16C212E0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x16C21010)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5FB0DC4E8DAA3EC5_OFFSET UNITYSDK_OFFSET(0x16C1EDF0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_83638DACC72D68D4_OFFSET UNITYSDK_OFFSET(0x16C1FC90)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x16C1EB20)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16C21270)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C20ED0)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16C20E90)
#define RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR___IFIXBASEPROXY_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x16C21340)

namespace RPG::Client::SkinnedGPUParticles
{
	inline static constexpr unsigned int SkinnedGPUParticlesBehavior_TypeDefinitionIndex = 67835;

	class SkinnedGPUParticlesBehavior : public ::RPG::Client::TABehaviorBase
	{
	public:
		static ::System::Int32* StaticGet__SkinnedVertexBufferShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xBBB0);
		}
		static ::System::Int32* StaticGet__MotionReprojectionShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xBBB4);
		}
		static ::System::Int32* StaticGet__VertexBufferLayoutOfUVShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xBBB8);
		}
		static ::System::Int32* StaticGet__SkinnedWorldToObjectShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xBBBC);
		}
		static ::System::Int32* StaticGet__VertexBufferLayoutOfColorShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xBBC0);
		}
		static ::System::Int32* StaticGet__VertexCountShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xBBC4);
		}
		static ::System::Int32* StaticGet__UsePackedVertexShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xBBC8);
		}
		static ::System::Int32* StaticGet__VertexBufferWithColorShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xBBCC);
		}
		static ::System::Int32* StaticGet__IndexBufferShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xBBD0);
		}
		static ::System::Int32* StaticGet__IndexFormatShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xBBD4);
		}
		static ::System::Int32* StaticGet__IndexCountShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xBBD8);
		}
		static ::System::Int32* StaticGet__PreviousSkinnedVertexBufferShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xBBDC);
		}
		static ::System::Int32* StaticGet__VertexBufferWithUVShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xBBE0);
		}
		static ::System::Int32* StaticGet__SkinnedObjectToWorldShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xBBE4);
		}
		static ::System::Int32* StaticGet__SkinnedVertexBufferLayoutShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xBBE8);
		}
		static ::System::Int32* StaticGet__CustomVertexStreamsShaderProperty()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SkinnedGPUParticlesBehavior_TypeDefinitionIndex)->GetStaticField(0xBBEC);
		}
		::UnityEngine::Matrix4x4 _SkinnedObjectToWorld; // 0x38
		::UnityEngine::Matrix4x4 _SkinnedWorldToObject; // 0x78
		::UnityEngine::Vector3 _SkinnedRoot; // 0xB8
		::UnityEngine::Matrix4x4 _PreviousSkinnedObjectToWorld; // 0xC4
		::UnityEngine::Matrix4x4 _PreviousSkinnedWorldToObject; // 0x104
		::UnityEngine::Vector3 _PreviousSkinnedRoot; // 0x144
		::UnityEngine::ComputeBuffer* _VertexBufferWithColor; // 0x150
		::UnityEngine::ComputeBuffer* _VertexBufferWithUV; // 0x158
		::UnityEngine::ComputeBuffer* _IndexBuffer; // 0x160
		::UnityEngine::Vector4 _SkinnedVertexBufferLayout; // 0x168
		::UnityEngine::Vector4 _VertexBufferLayoutOfColor; // 0x178
		::UnityEngine::Vector4 _VertexBufferLayoutOfUV; // 0x188
		::System::Int32 _UsePackedVertex; // 0x198
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* _Materials; // 0x1A0
		::System::Boolean _Inited; // 0x1A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR__CCTOR_OFFSET))();
		}

		::System::Void Method_3_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_OFFSET))(this);
		}

		::System::Void Method_3_25DEA5C65A602671()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_25DEA5C65A602671_OFFSET))(this);
		}

		::System::Void Method_3_0BDFAC56E6B704CB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_0BDFAC56E6B704CB_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_1_OFFSET))(this);
		}

		::System::Void Method_3_25DEA5C65A602671_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_25DEA5C65A602671_1_OFFSET))(this);
		}

		::System::Void Method_3_0BDFAC56E6B704CB_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_0BDFAC56E6B704CB_1_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Void Method_3_4343F372F34C05BF_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_4343F372F34C05BF_2_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void Method_3_30D1209326FA87FC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_30D1209326FA87FC_OFFSET))(this);
		}

		::System::Void Method_3_5FB0DC4E8DAA3EC5(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5FB0DC4E8DAA3EC5_OFFSET))(this, a1);
		}

		::System::Void Method_3_D3129FE8DF635B48()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_D3129FE8DF635B48_OFFSET))(this);
		}

		::System::Boolean Method_3_237B5153A8A729D9()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_237B5153A8A729D9_OFFSET))(this);
		}

		::System::Void Method_3_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_1290EA767C459179_OFFSET))(this);
		}

		::System::Boolean Method_3_1295D43E51390654()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_1295D43E51390654_OFFSET))(this);
		}

		::System::Void Method_3_83638DACC72D68D4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_83638DACC72D68D4_OFFSET))(this, a1);
		}

		::System::Void Method_3_30D1209326FA87FC_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_30D1209326FA87FC_1_OFFSET))(this);
		}

		::RPG::Client::SkinnedGPUParticles::SkinnedGPUParticles* get__Owner()
		{
			return ((::RPG::Client::SkinnedGPUParticles::SkinnedGPUParticles*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__OWNER_OFFSET))(this);
		}

		::UnityEngine::SkinnedMeshRenderer* get__SkinnedMesh()
		{
			return ((::UnityEngine::SkinnedMeshRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__SKINNEDMESH_OFFSET))(this);
		}

		::UnityEngine::Mesh* get__Mesh()
		{
			return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__MESH_OFFSET))(this);
		}

		::UnityEngine::GPUParticlesRenderer* get__ParticlesRenderer()
		{
			return ((::UnityEngine::GPUParticlesRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__PARTICLESRENDERER_OFFSET))(this);
		}

		::UnityEngine::GPUParticlesAsset* get__ParticlesAsset()
		{
			return ((::UnityEngine::GPUParticlesAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_GET__PARTICLESASSET_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_4_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_5_OFFSET))(this);
		}

		::System::Boolean Method_3_F0E307B84478A272()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_F0E307B84478A272_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR_METHOD_3_5790A55946AA509D_6_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_EndOfLateTick(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKINNEDGPUPARTICLES_SKINNEDGPUPARTICLESBEHAVIOR___IFIXBASEPROXY_ENDOFLATETICK_OFFSET))(this, P0);
		}
	};
}

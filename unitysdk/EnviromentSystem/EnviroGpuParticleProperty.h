#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroAssetProperty.h"
#include "unitysdk/EnviromentSystem/EnviroGpuParticleProperty_EnviroGpuParticle.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace RPG::Client { class GpuParticleOccluder; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_0A17961F2C7839AC_OFFSET UNITYSDK_OFFSET(0xC32DB20)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_0ED2EEE19D10A0A7_OFFSET UNITYSDK_OFFSET(0xC32A9A0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_104E1F1979CA40C3_OFFSET UNITYSDK_OFFSET(0xC330110)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_26E509975F92479C_OFFSET UNITYSDK_OFFSET(0xC32DC10)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_42B2BB88AE2FB02E_OFFSET UNITYSDK_OFFSET(0xC32AAC0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_438A9AA49EC7C989_1_OFFSET UNITYSDK_OFFSET(0xC330B20)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_438A9AA49EC7C989_OFFSET UNITYSDK_OFFSET(0xC330A20)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5790A55946AA509D_1_OFFSET UNITYSDK_OFFSET(0xC330C20)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5790A55946AA509D_2_OFFSET UNITYSDK_OFFSET(0xC330CF0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5790A55946AA509D_3_OFFSET UNITYSDK_OFFSET(0xC330D50)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5790A55946AA509D_4_OFFSET UNITYSDK_OFFSET(0xC330DB0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5790A55946AA509D_5_OFFSET UNITYSDK_OFFSET(0xC330E10)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5790A55946AA509D_6_OFFSET UNITYSDK_OFFSET(0xC330E70)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xC3309C0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_6E2356E48BB4B332_OFFSET UNITYSDK_OFFSET(0xC330BA0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_793FFA9A76FE6840_OFFSET UNITYSDK_OFFSET(0xC330C80)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_81A66FB988DFA6AA_OFFSET UNITYSDK_OFFSET(0xC32FCE0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0xC32D550)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_8C7189BCDE3E66BF_OFFSET UNITYSDK_OFFSET(0xC330950)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_93A5157BEEEE8A54_OFFSET UNITYSDK_OFFSET(0xC330ED0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_98060E4D16CBDFE4_OFFSET UNITYSDK_OFFSET(0xC32FA60)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_984CEF7BA8F7C8D1_OFFSET UNITYSDK_OFFSET(0xC32BA40)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_B29205EE7F7B640C_OFFSET UNITYSDK_OFFSET(0xC32B770)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_B701E3D691C0F223_OFFSET UNITYSDK_OFFSET(0xC32B1D0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_C5A32798E0034749_OFFSET UNITYSDK_OFFSET(0xC3303B0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_C5F1CF108D8627F8_OFFSET UNITYSDK_OFFSET(0xC32FEB0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_CC32BB23BD684E52_OFFSET UNITYSDK_OFFSET(0xC32D9A0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0xC32B4C0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_E03449F98239C5D4_OFFSET UNITYSDK_OFFSET(0xC32AB40)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_EC90937CEA9AFCA9_OFFSET UNITYSDK_OFFSET(0xC330C10)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_F2028AEDFE1D1CB1_OFFSET UNITYSDK_OFFSET(0xC32A6F0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_F33D58546A03D87E_OFFSET UNITYSDK_OFFSET(0xC330AA0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0xC32ECC0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_FD6AF0F9AA9298B1_OFFSET UNITYSDK_OFFSET(0xC32DD30)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY__CCTOR_OFFSET UNITYSDK_OFFSET(0xC330760)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0xC32A3F0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xC32A2B0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroGpuParticleProperty_TypeDefinitionIndex = 46196;

	class EnviroGpuParticleProperty : public ::EnviromentSystem::EnviroAssetProperty
	{
	public:
		static ::System::Collections::Generic::List_1<::RPG::Client::GpuParticleOccluder*>** StaticGet_GpuParticleOccluders()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::GpuParticleOccluder*>**)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x12FD0);
		}
		static ::System::String** StaticGet__Noise3DPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x12FD8);
		}
		static ::System::String** StaticGet__Noise2DPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x12FE0);
		}
		static ::System::Int32* StaticGet__DeltaTimeShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x5A60);
		}
		static ::System::Int32* StaticGet__SpeedTexShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x5A64);
		}
		static ::System::Int32* StaticGet__RandomSizeShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x5A68);
		}
		static ::System::Int32* StaticGet__WindZoneShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x5A6C);
		}
		static ::System::Int32* StaticGet__NoiseTex2DShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x5A70);
		}
		static ::System::Int32* StaticGet__WindZoneBBoxMinPosShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x5A74);
		}
		static ::System::Int32* StaticGet__SpeedTexReadShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x5A78);
		}
		static ::System::Int32* StaticGet__RangeMaxOldShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x5A7C);
		}
		static ::System::Int32* StaticGet__PositionTexReadShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x5A80);
		}
		static ::System::Int32* StaticGet__PositionTexShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x5A84);
		}
		static ::System::Int32* StaticGet__NoiseTillingShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x5A88);
		}
		static ::System::Int32* StaticGet__OccluderAsVolumeID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x5A8C);
		}
		static ::System::Int32* StaticGet__Occluder()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x5A90);
		}
		static ::System::Int32* StaticGet__NoiseTexShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x5A94);
		}
		static ::System::Int32* StaticGet__WindZoneBBoxMaxPosShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x5A98);
		}
		static ::System::Int32* StaticGet__WindGlobalShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x5A9C);
		}
		static ::System::Int32* StaticGet__GpuParticleOccluderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x5AA0);
		}
		static ::System::Int32* StaticGet__RangeMinShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x5AA4);
		}
		static ::System::Int32* StaticGet__RangeMaxShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x5AA8);
		}
		static ::System::Int32* StaticGet__WindScaleShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x5AAC);
		}
		static ::System::Int32* StaticGet__TimeShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x5AB0);
		}
		static ::System::Int32* StaticGet__NoiseScaleShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x5AB4);
		}
		static ::System::Int32* StaticGet__RangeMinOldShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x5AB8);
		}
		::System::Boolean OnlyInHighQuality; // 0x50
		::System::Boolean OccluderAsVolume; // 0x51
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroGpuParticleProperty_EnviroGpuParticle>* m_GpuParticles; // 0x58
		::UnityEngine::Texture2D* PerlinNoise2D; // 0x60
		::UnityEngine::Texture2D* PerlinNoise3D; // 0x68
		::System::Boolean _Enable; // 0x70
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* tmpMaterial; // 0x78
		::Il2CppArray<::UnityEngine::Matrix4x4>* _OccludersMatrixArray; // 0x80

		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroGpuParticleProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroGpuParticleProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY__CCTOR_OFFSET))();
		}

		::System::Boolean Method_3_F2028AEDFE1D1CB1(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_F2028AEDFE1D1CB1_OFFSET))(this, a1);
		}

		::System::Void Method_3_0ED2EEE19D10A0A7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_0ED2EEE19D10A0A7_OFFSET))(this);
		}

		::System::Void Method_3_42B2BB88AE2FB02E(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_42B2BB88AE2FB02E_OFFSET))(this, a1);
		}

		::System::Void Method_3_E03449F98239C5D4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_E03449F98239C5D4_OFFSET))(this, a1);
		}

		::System::Void Method_3_B701E3D691C0F223(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_B701E3D691C0F223_OFFSET))(this, a1);
		}

		::System::Void Method_3_984CEF7BA8F7C8D1(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_984CEF7BA8F7C8D1_OFFSET))(this, a1);
		}

		::System::Void Method_3_CC32BB23BD684E52()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_CC32BB23BD684E52_OFFSET))(this);
		}

		::System::Void Method_3_0A17961F2C7839AC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_0A17961F2C7839AC_OFFSET))(this);
		}

		::System::Void Method_3_26E509975F92479C(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_26E509975F92479C_OFFSET))(this, a1);
		}

		::System::Void Method_3_FD6AF0F9AA9298B1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_FD6AF0F9AA9298B1_OFFSET))(this, a1);
		}

		::System::Void Method_3_D109CE569415FA03()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_D109CE569415FA03_OFFSET))(this);
		}

		::System::Void Method_3_B29205EE7F7B640C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_B29205EE7F7B640C_OFFSET))(this);
		}

		::System::Void Method_3_F63FE1AA9633F811()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_F63FE1AA9633F811_OFFSET))(this);
		}

		::System::Void Method_3_98060E4D16CBDFE4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_98060E4D16CBDFE4_OFFSET))(this);
		}

		::System::Void Method_3_81A66FB988DFA6AA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_81A66FB988DFA6AA_OFFSET))(this);
		}

		::System::Void Method_3_C5F1CF108D8627F8(::System::Collections::Generic::List_1<::System::String*>*& a1, ::System::Collections::Generic::List_1<::System::Type*>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Collections::Generic::List_1<::System::Type*>*&))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_C5F1CF108D8627F8_OFFSET))(this, a1, a2);
		}

		static ::System::Void Method_3_104E1F1979CA40C3(::RPG::Client::GpuParticleOccluder* a1)
		{
			return ((::System::Void(*)(::RPG::Client::GpuParticleOccluder*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_104E1F1979CA40C3_OFFSET))(a1);
		}

		static ::System::Void Method_3_C5A32798E0034749(::RPG::Client::GpuParticleOccluder* a1)
		{
			return ((::System::Void(*)(::RPG::Client::GpuParticleOccluder*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_C5A32798E0034749_OFFSET))(a1);
		}

		::System::Void Method_3_885DF4DA0F709E3E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_885DF4DA0F709E3E_OFFSET))(this);
		}

		::System::Boolean Method_3_8C7189BCDE3E66BF(::EnviromentSystem::EnviroProperty* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_8C7189BCDE3E66BF_OFFSET))(this, P0);
		}

		::System::Void Method_3_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5790A55946AA509D_OFFSET))(this);
		}

		::System::Void Method_3_438A9AA49EC7C989(::EnviromentSystem::EnviroProperty* P0)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_438A9AA49EC7C989_OFFSET))(this, P0);
		}

		::System::Void Method_3_F33D58546A03D87E(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_F33D58546A03D87E_OFFSET))(this, P0);
		}

		::System::Void Method_3_438A9AA49EC7C989_1(::EnviromentSystem::EnviroProperty* P0)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_438A9AA49EC7C989_1_OFFSET))(this, P0);
		}

		::System::Void Method_3_6E2356E48BB4B332(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_6E2356E48BB4B332_OFFSET))(this, P0);
		}

		::System::Void Method_3_EC90937CEA9AFCA9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_EC90937CEA9AFCA9_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5790A55946AA509D_1_OFFSET))(this);
		}

		::System::Void Method_3_793FFA9A76FE6840(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_793FFA9A76FE6840_OFFSET))(this, P0);
		}

		::System::Void Method_3_5790A55946AA509D_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5790A55946AA509D_2_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5790A55946AA509D_3_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5790A55946AA509D_4_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5790A55946AA509D_5_OFFSET))(this);
		}

		::System::Void Method_3_5790A55946AA509D_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_5790A55946AA509D_6_OFFSET))(this);
		}

		::System::Void Method_3_93A5157BEEEE8A54(::System::Collections::Generic::List_1<::System::String*>*& P0, ::System::Collections::Generic::List_1<::System::Type*>*& P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Collections::Generic::List_1<::System::Type*>*&))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_93A5157BEEEE8A54_OFFSET))(this, P0, P1);
		}
	};
}

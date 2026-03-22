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

#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_0414B7E68ABA5085_OFFSET UNITYSDK_OFFSET(0xE4C1280)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_0A17961F2C7839AC_OFFSET UNITYSDK_OFFSET(0xE4BE1B0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_0ED2EEE19D10A0A7_OFFSET UNITYSDK_OFFSET(0xE4BAFD0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_104E1F1979CA40C3_OFFSET UNITYSDK_OFFSET(0xE4C07A0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_19295F9E95CC8034_OFFSET UNITYSDK_OFFSET(0xE4C11E0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_221AD7CB52B41597_1_OFFSET UNITYSDK_OFFSET(0xE4C1180)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_221AD7CB52B41597_OFFSET UNITYSDK_OFFSET(0xE4C10B0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_26E509975F92479C_OFFSET UNITYSDK_OFFSET(0xE4BE2A0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_289256236CBF6273_OFFSET UNITYSDK_OFFSET(0xE4C1110)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_3B142DD188989577_OFFSET UNITYSDK_OFFSET(0xE4C1520)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_42B2BB88AE2FB02E_OFFSET UNITYSDK_OFFSET(0xE4BB0F0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_4329D8CC8C08D0C1_OFFSET UNITYSDK_OFFSET(0xE4C0FE0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_81A66FB988DFA6AA_OFFSET UNITYSDK_OFFSET(0xE4C0370)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_885DF4DA0F709E3E_OFFSET UNITYSDK_OFFSET(0xE4BDBE0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_98060E4D16CBDFE4_OFFSET UNITYSDK_OFFSET(0xE4C00F0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_984CEF7BA8F7C8D1_OFFSET UNITYSDK_OFFSET(0xE4BC0D0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_B29205EE7F7B640C_OFFSET UNITYSDK_OFFSET(0xE4BBE00)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_B701E3D691C0F223_OFFSET UNITYSDK_OFFSET(0xE4BB860)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_C5A32798E0034749_OFFSET UNITYSDK_OFFSET(0xE4C0A40)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_C5F1CF108D8627F8_OFFSET UNITYSDK_OFFSET(0xE4C0540)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xE4C1240)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xE4C12E0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0xE4C1320)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_CA373AA1C7054598_4_OFFSET UNITYSDK_OFFSET(0xE4C13A0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_CA373AA1C7054598_5_OFFSET UNITYSDK_OFFSET(0xE4C1420)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_CA373AA1C7054598_6_OFFSET UNITYSDK_OFFSET(0xE4C14A0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE4C1030)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_CC32BB23BD684E52_OFFSET UNITYSDK_OFFSET(0xE4BE030)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_D109CE569415FA03_OFFSET UNITYSDK_OFFSET(0xE4BBB50)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_E03449F98239C5D4_OFFSET UNITYSDK_OFFSET(0xE4BB1D0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_EC90937CEA9AFCA9_OFFSET UNITYSDK_OFFSET(0xE4C1230)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_F2028AEDFE1D1CB1_OFFSET UNITYSDK_OFFSET(0xE4BAD20)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_F63FE1AA9633F811_OFFSET UNITYSDK_OFFSET(0xE4BF350)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_FD6AF0F9AA9298B1_OFFSET UNITYSDK_OFFSET(0xE4BE3C0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY__CCTOR_OFFSET UNITYSDK_OFFSET(0xE4C0DF0)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0xE4BAA20)
#define ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xE4BA8E0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroGpuParticleProperty_TypeDefinitionIndex = 39307;

	class EnviroGpuParticleProperty : public ::EnviromentSystem::EnviroAssetProperty
	{
	public:
		static ::System::String** StaticGet__Noise3DPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x44600);
		}
		static ::System::String** StaticGet__Noise2DPath()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x44608);
		}
		static ::System::Collections::Generic::List_1<::RPG::Client::GpuParticleOccluder*>** StaticGet_GpuParticleOccluders()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::GpuParticleOccluder*>**)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0x44610);
		}
		static ::System::Int32* StaticGet__DeltaTimeShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xFE70);
		}
		static ::System::Int32* StaticGet__RangeMinShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xFE74);
		}
		static ::System::Int32* StaticGet__PositionTexReadShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xFE78);
		}
		static ::System::Int32* StaticGet__RandomSizeShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xFE7C);
		}
		static ::System::Int32* StaticGet__GpuParticleOccluderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xFE80);
		}
		static ::System::Int32* StaticGet__Occluder()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xFE84);
		}
		static ::System::Int32* StaticGet__WindZoneBBoxMinPosShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xFE88);
		}
		static ::System::Int32* StaticGet__RangeMaxShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xFE8C);
		}
		static ::System::Int32* StaticGet__TimeShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xFE90);
		}
		static ::System::Int32* StaticGet__NoiseTex2DShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xFE94);
		}
		static ::System::Int32* StaticGet__WindZoneBBoxMaxPosShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xFE98);
		}
		static ::System::Int32* StaticGet__WindGlobalShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xFE9C);
		}
		static ::System::Int32* StaticGet__WindZoneShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xFEA0);
		}
		static ::System::Int32* StaticGet__PositionTexShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xFEA4);
		}
		static ::System::Int32* StaticGet__WindScaleShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xFEA8);
		}
		static ::System::Int32* StaticGet__NoiseTillingShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xFEAC);
		}
		static ::System::Int32* StaticGet__NoiseTexShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xFEB0);
		}
		static ::System::Int32* StaticGet__SpeedTexReadShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xFEB4);
		}
		static ::System::Int32* StaticGet__SpeedTexShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xFEB8);
		}
		static ::System::Int32* StaticGet__NoiseScaleShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xFEBC);
		}
		static ::System::Int32* StaticGet__RangeMaxOldShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xFEC0);
		}
		static ::System::Int32* StaticGet__OccluderAsVolumeID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xFEC4);
		}
		static ::System::Int32* StaticGet__RangeMinOldShaderID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGpuParticleProperty_TypeDefinitionIndex)->GetStaticField(0xFEC8);
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

		::System::Boolean Method_3_4329D8CC8C08D0C1(::EnviromentSystem::EnviroProperty* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_4329D8CC8C08D0C1_OFFSET))(this, P0);
		}

		::System::Void Method_3_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_3_221AD7CB52B41597(::EnviromentSystem::EnviroProperty* P0)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_221AD7CB52B41597_OFFSET))(this, P0);
		}

		::System::Void Method_3_289256236CBF6273(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_289256236CBF6273_OFFSET))(this, P0);
		}

		::System::Void Method_3_221AD7CB52B41597_1(::EnviromentSystem::EnviroProperty* P0)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_221AD7CB52B41597_1_OFFSET))(this, P0);
		}

		::System::Void Method_3_19295F9E95CC8034(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_19295F9E95CC8034_OFFSET))(this, P0);
		}

		::System::Void Method_3_EC90937CEA9AFCA9()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_EC90937CEA9AFCA9_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_3_0414B7E68ABA5085(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_0414B7E68ABA5085_OFFSET))(this, P0);
		}

		::System::Void Method_3_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_CA373AA1C7054598_3_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_CA373AA1C7054598_4_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_CA373AA1C7054598_5_OFFSET))(this);
		}

		::System::Void Method_3_CA373AA1C7054598_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_CA373AA1C7054598_6_OFFSET))(this);
		}

		::System::Void Method_3_3B142DD188989577(::System::Collections::Generic::List_1<::System::String*>*& P0, ::System::Collections::Generic::List_1<::System::Type*>*& P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Collections::Generic::List_1<::System::Type*>*&))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGPUPARTICLEPROPERTY_METHOD_3_3B142DD188989577_OFFSET))(this, P0, P1);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"
#include "unitysdk/UnityEngine/Color.h"

namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_0414B7E68ABA5085_OFFSET UNITYSDK_OFFSET(0xE4C3170)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_19295F9E95CC8034_OFFSET UNITYSDK_OFFSET(0xE4C3120)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_221AD7CB52B41597_OFFSET UNITYSDK_OFFSET(0xE4C3040)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_289256236CBF6273_OFFSET UNITYSDK_OFFSET(0xE4C2FD0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_2B1380CB28524A16_OFFSET UNITYSDK_OFFSET(0xE4C1DA0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_42BA9D7CE19718CB_OFFSET UNITYSDK_OFFSET(0xE4C2DC0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_4329D8CC8C08D0C1_OFFSET UNITYSDK_OFFSET(0xE4C2F80)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_77703FEE4F0E8C39_OFFSET UNITYSDK_OFFSET(0xE4C1D50)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_7A097E7EF929F289_OFFSET UNITYSDK_OFFSET(0xE4C2A70)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_9C79A520038973E2_OFFSET UNITYSDK_OFFSET(0xE4C2D10)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_A68A2E1014D00283_OFFSET UNITYSDK_OFFSET(0xE4C2020)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_A68F2DE513D46E04_OFFSET UNITYSDK_OFFSET(0xE4C17E0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xE4C1690)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xE4C30A0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0xE4C30E0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_CA373AA1C7054598_3_OFFSET UNITYSDK_OFFSET(0xE4C31D0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE4C2CD0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0xE4C2E40)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_D78B51BFDA4B8B32_OFFSET UNITYSDK_OFFSET(0xE4C2350)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_F04C04E6DB6D6224_OFFSET UNITYSDK_OFFSET(0xE4C2590)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_FF05AC0AB0D75A04_OFFSET UNITYSDK_OFFSET(0xE4C23E0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY__CCTOR_OFFSET UNITYSDK_OFFSET(0xE4C2EB0)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0xE4C1A70)
#define ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xE4BA3A0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroGradientProperty_TypeDefinitionIndex = 39311;

	class EnviroGradientProperty : public ::EnviromentSystem::EnviroProperty
	{
	public:
		static ::UnityEngine::Texture2D** StaticGet_EnviroGradientAtlas()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(EnviroGradientProperty_TypeDefinitionIndex)->GetStaticField(0x44730);
		}
		static ::Il2CppArray<::UnityEngine::Color>** StaticGet__TmpColorArrayForGradient()
		{
			return (::Il2CppArray<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(EnviroGradientProperty_TypeDefinitionIndex)->GetStaticField(0x44738);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_EnviromentGradientAtlasID()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EnviroGradientProperty_TypeDefinitionIndex)->GetStaticField(0x44740);
		}
		static ::System::Int32* StaticGet_EnviroGradientAtlasID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(EnviroGradientProperty_TypeDefinitionIndex)->GetStaticField(0xFEE0);
		}
		// static const ::System::Int32 Atlas_Height = 0x8; // 0x0
		// static const ::System::Int32 Atlas_Width = 0x200; // 0x0
		::UnityEngine::Gradient* m_Value; // 0x48
		::UnityEngine::Gradient* m_TargetValue; // 0x50
		::System::Single m_TraisRate; // 0x58
		::System::Int32 _AtlasID; // 0x5C
		::System::Boolean m_TransReGen; // 0x60

		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroGradientProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroGradientProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY__CCTOR_OFFSET))();
		}

		::System::Void Method_2_B1936CE4DA97AA45()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
		}

		::UnityEngine::Gradient* Method_2_A68F2DE513D46E04()
		{
			return ((::UnityEngine::Gradient*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_A68F2DE513D46E04_OFFSET))(this);
		}

		::System::Boolean Method_2_77703FEE4F0E8C39(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_77703FEE4F0E8C39_OFFSET))(this, a1);
		}

		::System::Void Method_2_2B1380CB28524A16(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_2B1380CB28524A16_OFFSET))(this, a1);
		}

		::System::Void Method_2_A68A2E1014D00283(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_A68A2E1014D00283_OFFSET))(this, a1);
		}

		::System::Void Method_2_FF05AC0AB0D75A04()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_FF05AC0AB0D75A04_OFFSET))(this);
		}

		static ::System::Void Method_2_7A097E7EF929F289()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_7A097E7EF929F289_OFFSET))();
		}

		::System::Void Method_2_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_2_F04C04E6DB6D6224()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_F04C04E6DB6D6224_OFFSET))(this);
		}

		::System::Boolean Method_2_9C79A520038973E2(::UnityEngine::Gradient* a1, ::UnityEngine::Gradient* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Gradient*, ::UnityEngine::Gradient*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_9C79A520038973E2_OFFSET))(this, a1, a2);
		}

		::System::Void Method_2_42BA9D7CE19718CB(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_42BA9D7CE19718CB_OFFSET))(this, a1);
		}

		::System::Void Method_2_CA6BDDCC5F7CE11E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
		}

		::System::Void Method_2_D78B51BFDA4B8B32()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_D78B51BFDA4B8B32_OFFSET))(this);
		}

		::System::Boolean Method_2_4329D8CC8C08D0C1(::EnviromentSystem::EnviroProperty* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_4329D8CC8C08D0C1_OFFSET))(this, P0);
		}

		::System::Void Method_2_289256236CBF6273(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_289256236CBF6273_OFFSET))(this, P0);
		}

		::System::Void Method_2_221AD7CB52B41597(::EnviromentSystem::EnviroProperty* P0)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_221AD7CB52B41597_OFFSET))(this, P0);
		}

		::System::Void Method_2_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_2_CA373AA1C7054598_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_CA373AA1C7054598_2_OFFSET))(this);
		}

		::System::Void Method_2_19295F9E95CC8034(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_19295F9E95CC8034_OFFSET))(this, P0);
		}

		::System::Void Method_2_0414B7E68ABA5085(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_0414B7E68ABA5085_OFFSET))(this, P0);
		}

		::System::Void Method_2_CA373AA1C7054598_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGRADIENTPROPERTY_METHOD_2_CA373AA1C7054598_3_OFFSET))(this);
		}
	};
}

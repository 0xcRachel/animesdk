#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace EnviromentSystem { class EnviromentProfile; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_21C7DA41AA04BA92_OFFSET UNITYSDK_OFFSET(0xC325350)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_438A9AA49EC7C989_OFFSET UNITYSDK_OFFSET(0xC325920)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_5693914D0131014B_OFFSET UNITYSDK_OFFSET(0xC3254A0)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xC325A10)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_6E2356E48BB4B332_OFFSET UNITYSDK_OFFSET(0xC3259A0)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_8C7189BCDE3E66BF_OFFSET UNITYSDK_OFFSET(0xC3258B0)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_A1781348F0A89177_OFFSET UNITYSDK_OFFSET(0xC325800)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_FE7FF4C237F0DE57_OFFSET UNITYSDK_OFFSET(0xC3255B0)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0xC3252B0)
#define ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0xC325230)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroEffectLightProperty_TypeDefinitionIndex = 46193;

	class EnviroEffectLightProperty : public ::EnviromentSystem::EnviroProperty
	{
	public:
		::UnityEngine::Vector3 m_EffectCustomLightDirection; // 0x48
		::UnityEngine::Vector3 m_EffectLightPosition; // 0x54

		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroEffectLightProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroEffectLightProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY__CTOR_1_OFFSET))(this, a1);
		}

		::System::Boolean Method_2_21C7DA41AA04BA92(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_21C7DA41AA04BA92_OFFSET))(this, a1);
		}

		::System::Void Method_2_5693914D0131014B(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_5693914D0131014B_OFFSET))(this, a1);
		}

		::System::Void Method_2_FE7FF4C237F0DE57(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_FE7FF4C237F0DE57_OFFSET))(this, a1);
		}

		::System::Void Method_2_A1781348F0A89177()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_A1781348F0A89177_OFFSET))(this);
		}

		::System::Boolean Method_2_8C7189BCDE3E66BF(::EnviromentSystem::EnviroProperty* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_8C7189BCDE3E66BF_OFFSET))(this, P0);
		}

		::System::Void Method_2_438A9AA49EC7C989(::EnviromentSystem::EnviroProperty* P0)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_438A9AA49EC7C989_OFFSET))(this, P0);
		}

		::System::Void Method_2_6E2356E48BB4B332(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_6E2356E48BB4B332_OFFSET))(this, P0);
		}

		::System::Void Method_2_5790A55946AA509D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROEFFECTLIGHTPROPERTY_METHOD_2_5790A55946AA509D_OFFSET))(this);
		}
	};
}

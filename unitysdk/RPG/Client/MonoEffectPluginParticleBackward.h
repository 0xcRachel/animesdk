#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_2_6A3353FBBA99407C;

#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEBACKWARD_AWAKE_OFFSET UNITYSDK_OFFSET(0x1660BB70)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEBACKWARD_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1660BD70)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEBACKWARD_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1660BCC0)
#define RPG_CLIENT_MONOEFFECTPLUGINPARTICLEBACKWARD__CTOR_OFFSET UNITYSDK_OFFSET(0x1660BDD0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectPluginParticleBackward_TypeDefinitionIndex = 64611;

	class MonoEffectPluginParticleBackward : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 MaxFrameCount; // 0x18
		::Class_2_6A3353FBBA99407C* Field_5_1; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEBACKWARD__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEBACKWARD_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEBACKWARD_ONDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINPARTICLEBACKWARD_LATEUPDATE_OFFSET))(this);
		}
	};
}

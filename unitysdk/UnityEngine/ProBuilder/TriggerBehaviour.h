#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ProBuilder/EntityBehaviour.h"
#include "unitysdk/UnityEngine/SceneManagement/LoadSceneMode.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"

#define UNITYENGINE_PROBUILDER_TRIGGERBEHAVIOUR_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18099320)
#define UNITYENGINE_PROBUILDER_TRIGGERBEHAVIOUR_ONENTERPLAYMODE_OFFSET UNITYSDK_OFFSET(0x18099530)
#define UNITYENGINE_PROBUILDER_TRIGGERBEHAVIOUR_ONSCENELOADED_OFFSET UNITYSDK_OFFSET(0x180995C0)
#define UNITYENGINE_PROBUILDER_TRIGGERBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x18099650)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int TriggerBehaviour_TypeDefinitionIndex = 33191;

	class TriggerBehaviour : public ::UnityEngine::ProBuilder::EntityBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRIGGERBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRIGGERBEHAVIOUR_INITIALIZE_OFFSET))(this);
		}

		::System::Void OnEnterPlayMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRIGGERBEHAVIOUR_ONENTERPLAYMODE_OFFSET))(this);
		}

		::System::Void OnSceneLoaded(::UnityEngine::SceneManagement::Scene scene, ::UnityEngine::SceneManagement::LoadSceneMode mode)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::SceneManagement::Scene, ::UnityEngine::SceneManagement::LoadSceneMode))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_TRIGGERBEHAVIOUR_ONSCENELOADED_OFFSET))(this, scene, mode);
		}
	};
}

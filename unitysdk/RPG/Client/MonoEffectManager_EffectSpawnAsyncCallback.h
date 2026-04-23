#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GameObjectSpawnPriority.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client { class TriggerEffectParams; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MONOEFFECTMANAGER_EFFECTSPAWNASYNCCALLBACK_CLEAR_OFFSET UNITYSDK_OFFSET(0xBF75280)
#define RPG_CLIENT_MONOEFFECTMANAGER_EFFECTSPAWNASYNCCALLBACK_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xBF74DE0)
#define RPG_CLIENT_MONOEFFECTMANAGER_EFFECTSPAWNASYNCCALLBACK_ONCANCELSPAWN_OFFSET UNITYSDK_OFFSET(0xBF6F8E0)
#define RPG_CLIENT_MONOEFFECTMANAGER_EFFECTSPAWNASYNCCALLBACK_ONSPAWNASYNC_OFFSET UNITYSDK_OFFSET(0xBF74FA0)
#define RPG_CLIENT_MONOEFFECTMANAGER_EFFECTSPAWNASYNCCALLBACK_USELIGHTWEIGHTDEACTIVE_OFFSET UNITYSDK_OFFSET(0xBF75240)
#define RPG_CLIENT_MONOEFFECTMANAGER_EFFECTSPAWNASYNCCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0xBF752D0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoEffectManager_EffectSpawnAsyncCallback_TypeDefinitionIndex = 64386;

	class MonoEffectManager_EffectSpawnAsyncCallback : public ::System::Object
	{
	public:
		::RPG::Client::MonoEffectManager* Mgr; // 0x10
		::RPG::Client::TriggerEffectParams* TriggerParams; // 0x18
		::System::Boolean WaitEntityToInitGoInstance; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_EFFECTSPAWNASYNCCALLBACK__CTOR_OFFSET))(this);
		}

		::RPG::Client::GameObjectSpawnPriority get_Priority()
		{
			return ((::RPG::Client::GameObjectSpawnPriority(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_EFFECTSPAWNASYNCCALLBACK_GET_PRIORITY_OFFSET))(this);
		}

		::System::Void OnSpawnAsync(::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_EFFECTSPAWNASYNCCALLBACK_ONSPAWNASYNC_OFFSET))(this, go);
		}

		::System::Void OnCancelSpawn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_EFFECTSPAWNASYNCCALLBACK_ONCANCELSPAWN_OFFSET))(this);
		}

		::System::Boolean UseLightWeightDeactive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_EFFECTSPAWNASYNCCALLBACK_USELIGHTWEIGHTDEACTIVE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTMANAGER_EFFECTSPAWNASYNCCALLBACK_CLEAR_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Object; }

#define COFFEE_UIPARTICLEINTERNAL_MISC_DESTROYIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1127E600)
#define COFFEE_UIPARTICLEINTERNAL_MISC_DESTROY_OFFSET UNITYSDK_OFFSET(0x11273450)
#define COFFEE_UIPARTICLEINTERNAL_MISC_QUEUEPLAYERLOOPUPDATE_OFFSET UNITYSDK_OFFSET(0x1127E630)
#define COFFEE_UIPARTICLEINTERNAL_MISC_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1127E620)

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int Misc_TypeDefinitionIndex = 33883;

	class Misc : public ::System::Object
	{
	public:
		static ::System::Void Destroy(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MISC_DESTROY_OFFSET))(obj);
		}

		static ::System::Void DestroyImmediate(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MISC_DESTROYIMMEDIATE_OFFSET))(obj);
		}

		static ::System::Void SetDirty(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MISC_SETDIRTY_OFFSET))(obj);
		}

		static ::System::Void QueuePlayerLoopUpdate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_MISC_QUEUEPLAYERLOOPUPDATE_OFFSET))();
		}
	};
}

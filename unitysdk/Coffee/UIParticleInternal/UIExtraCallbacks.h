#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace Coffee::UIParticleInternal { class FastAction; }
namespace System { class Action; }

#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ADD_ONAFTERCANVASREBUILD_OFFSET UNITYSDK_OFFSET(0x1127BFA0)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ADD_ONBEFORECANVASREBUILD_OFFSET UNITYSDK_OFFSET(0x1127F1F0)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ADD_ONLATEAFTERCANVASREBUILD_OFFSET UNITYSDK_OFFSET(0x1127DCD0)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ADD_ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x1127F370)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_INITIALIZEAFTERCANVASREBUILD_OFFSET UNITYSDK_OFFSET(0x1127F460)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_INITIALIZEONLOAD_OFFSET UNITYSDK_OFFSET(0x1127F5F0)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ONAFTERCANVASREBUILD_OFFSET UNITYSDK_OFFSET(0x1127F980)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ONBEFORECANVASREBUILD_OFFSET UNITYSDK_OFFSET(0x1127F6D0)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_REMOVE_ONAFTERCANVASREBUILD_OFFSET UNITYSDK_OFFSET(0x1127F2E0)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_REMOVE_ONBEFORECANVASREBUILD_OFFSET UNITYSDK_OFFSET(0x1127F250)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_REMOVE_ONLATEAFTERCANVASREBUILD_OFFSET UNITYSDK_OFFSET(0x1127F160)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_REMOVE_ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x1127F3D0)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1127EF80)

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int UIExtraCallbacks_TypeDefinitionIndex = 33891;

	class UIExtraCallbacks : public ::System::Object
	{
	public:
		static ::Coffee::UIParticleInternal::FastAction** StaticGet_s_OnScreenSizeChangedAction()
		{
			return (::Coffee::UIParticleInternal::FastAction**)Il2CppClass::FromTypeDefinitionIndex(UIExtraCallbacks_TypeDefinitionIndex)->GetStaticField(0x3190);
		}
		static ::Coffee::UIParticleInternal::FastAction** StaticGet_s_BeforeCanvasRebuildAction()
		{
			return (::Coffee::UIParticleInternal::FastAction**)Il2CppClass::FromTypeDefinitionIndex(UIExtraCallbacks_TypeDefinitionIndex)->GetStaticField(0x3198);
		}
		static ::Coffee::UIParticleInternal::FastAction** StaticGet_s_LateAfterCanvasRebuildAction()
		{
			return (::Coffee::UIParticleInternal::FastAction**)Il2CppClass::FromTypeDefinitionIndex(UIExtraCallbacks_TypeDefinitionIndex)->GetStaticField(0x31A0);
		}
		static ::Coffee::UIParticleInternal::FastAction** StaticGet_s_AfterCanvasRebuildAction()
		{
			return (::Coffee::UIParticleInternal::FastAction**)Il2CppClass::FromTypeDefinitionIndex(UIExtraCallbacks_TypeDefinitionIndex)->GetStaticField(0x31A8);
		}
		static ::System::Boolean* StaticGet_s_IsInitializedAfterCanvasRebuild()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIExtraCallbacks_TypeDefinitionIndex)->GetStaticField(0xD40);
		}
		static ::UnityEngine::Vector2Int* StaticGet_s_LastScreenSize()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(UIExtraCallbacks_TypeDefinitionIndex)->GetStaticField(0xD44);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS__CCTOR_OFFSET))();
		}

		static ::System::Void add_onLateAfterCanvasRebuild(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ADD_ONLATEAFTERCANVASREBUILD_OFFSET))(value);
		}

		static ::System::Void remove_onLateAfterCanvasRebuild(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_REMOVE_ONLATEAFTERCANVASREBUILD_OFFSET))(value);
		}

		static ::System::Void add_onBeforeCanvasRebuild(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ADD_ONBEFORECANVASREBUILD_OFFSET))(value);
		}

		static ::System::Void remove_onBeforeCanvasRebuild(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_REMOVE_ONBEFORECANVASREBUILD_OFFSET))(value);
		}

		static ::System::Void add_onAfterCanvasRebuild(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ADD_ONAFTERCANVASREBUILD_OFFSET))(value);
		}

		static ::System::Void remove_onAfterCanvasRebuild(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_REMOVE_ONAFTERCANVASREBUILD_OFFSET))(value);
		}

		static ::System::Void add_onScreenSizeChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ADD_ONSCREENSIZECHANGED_OFFSET))(value);
		}

		static ::System::Void remove_onScreenSizeChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_REMOVE_ONSCREENSIZECHANGED_OFFSET))(value);
		}

		static ::System::Void InitializeAfterCanvasRebuild()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_INITIALIZEAFTERCANVASREBUILD_OFFSET))();
		}

		static ::System::Void InitializeOnLoad()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_INITIALIZEONLOAD_OFFSET))();
		}

		static ::System::Void OnBeforeCanvasRebuild()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ONBEFORECANVASREBUILD_OFFSET))();
		}

		static ::System::Void OnAfterCanvasRebuild()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ONAFTERCANVASREBUILD_OFFSET))();
		}
	};
}

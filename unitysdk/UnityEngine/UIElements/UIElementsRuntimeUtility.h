#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UIElements { class EventDispatcher; }
namespace UnityEngine::UIElements { class Panel; }

#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_REPAINTOVERLAYPANELS_OFFSET UNITYSDK_OFFSET(0x19F97C60)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F98120)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UIElementsRuntimeUtility_TypeDefinitionIndex = 6151;

	class UIElementsRuntimeUtility : public ::System::Object
	{
	public:
		static ::UnityEngine::UIElements::EventDispatcher** StaticGet_s_RuntimeDispatcher()
		{
			return (::UnityEngine::UIElements::EventDispatcher**)Il2CppClass::FromTypeDefinitionIndex(UIElementsRuntimeUtility_TypeDefinitionIndex)->GetStaticField(0x27D0);
		}
		static ::System::String** StaticGet_s_RepaintProfilerMarkerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIElementsRuntimeUtility_TypeDefinitionIndex)->GetStaticField(0x27D8);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>** StaticGet_panelsIteration()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>**)Il2CppClass::FromTypeDefinitionIndex(UIElementsRuntimeUtility_TypeDefinitionIndex)->GetStaticField(0x27E0);
		}
		static ::System::Boolean* StaticGet_s_RegisteredPlayerloopCallback()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIElementsRuntimeUtility_TypeDefinitionIndex)->GetStaticField(0x1070);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_s_RepaintProfilerMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(UIElementsRuntimeUtility_TypeDefinitionIndex)->GetStaticField(0x1078);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY__CCTOR_OFFSET))();
		}

		static ::System::Void RepaintOverlayPanels()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_REPAINTOVERLAYPANELS_OFFSET))();
		}
	};
}

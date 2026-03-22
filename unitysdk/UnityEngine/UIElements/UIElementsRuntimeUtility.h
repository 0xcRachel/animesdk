#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UIElements { class EventDispatcher; }
namespace UnityEngine::UIElements { class Panel; }

#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY_REPAINTOVERLAYPANELS_OFFSET UNITYSDK_OFFSET(0x182CCC50)
#define UNITYENGINE_UIELEMENTS_UIELEMENTSRUNTIMEUTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x182CD0C0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int UIElementsRuntimeUtility_TypeDefinitionIndex = 5762;

	class UIElementsRuntimeUtility : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_s_RepaintProfilerMarkerName()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UIElementsRuntimeUtility_TypeDefinitionIndex)->GetStaticField(0xA350);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>** StaticGet_panelsIteration()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>**)Il2CppClass::FromTypeDefinitionIndex(UIElementsRuntimeUtility_TypeDefinitionIndex)->GetStaticField(0xA358);
		}
		static ::UnityEngine::UIElements::EventDispatcher** StaticGet_s_RuntimeDispatcher()
		{
			return (::UnityEngine::UIElements::EventDispatcher**)Il2CppClass::FromTypeDefinitionIndex(UIElementsRuntimeUtility_TypeDefinitionIndex)->GetStaticField(0xA360);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_s_RepaintProfilerMarker()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(UIElementsRuntimeUtility_TypeDefinitionIndex)->GetStaticField(0x3320);
		}
		static ::System::Boolean* StaticGet_s_RegisteredPlayerloopCallback()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIElementsRuntimeUtility_TypeDefinitionIndex)->GetStaticField(0x3328);
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

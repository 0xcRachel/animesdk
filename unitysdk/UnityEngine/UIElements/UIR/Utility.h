#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_RAISEENGINEUPDATE_OFFSET UNITYSDK_OFFSET(0x19F99A20)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_RAISEFLUSHPENDINGRESOURCES_OFFSET UNITYSDK_OFFSET(0x19F99AD0)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY_RAISEGRAPHICSRESOURCESRECREATE_OFFSET UNITYSDK_OFFSET(0x19F99990)
#define UNITYENGINE_UIELEMENTS_UIR_UTILITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F99B60)

namespace UnityEngine::UIElements::UIR
{
	inline static constexpr unsigned int Utility_TypeDefinitionIndex = 6262;

	class Utility : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_FlushPendingResources()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Utility_TypeDefinitionIndex)->GetStaticField(0x28C0);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet_GraphicsResourcesRecreate()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Utility_TypeDefinitionIndex)->GetStaticField(0x28C8);
		}
		static ::System::Action** StaticGet_EngineUpdate()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Utility_TypeDefinitionIndex)->GetStaticField(0x28D0);
		}
		static ::Unity::Profiling::ProfilerMarker* StaticGet_s_MarkerRaiseEngineUpdate()
		{
			return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Utility_TypeDefinitionIndex)->GetStaticField(0x1090);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY__CCTOR_OFFSET))();
		}

		static ::System::Void RaiseGraphicsResourcesRecreate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_RAISEGRAPHICSRESOURCESRECREATE_OFFSET))(a1);
		}

		static ::System::Void RaiseEngineUpdate()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_RAISEENGINEUPDATE_OFFSET))();
		}

		static ::System::Void RaiseFlushPendingResources()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_UIR_UTILITY_RAISEFLUSHPENDINGRESOURCES_OFFSET))();
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::CustomRP { class IPlaneReflection; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define PLANEREFLECTIONPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15244490)
#define PLANEREFLECTIONPROXY_ORDERBYPRIORITY_OFFSET UNITYSDK_OFFSET(0x15243B50)
#define PLANEREFLECTIONPROXY_REGISTERPLANEREFLECTIONCASTERRENDERER_OFFSET UNITYSDK_OFFSET(0x15243FC0)
#define PLANEREFLECTIONPROXY_REGISTERPLANEREFLECTION_OFFSET UNITYSDK_OFFSET(0x15243510)
#define PLANEREFLECTIONPROXY_UNREGISTERPLANEREFLECTIONCASTERRENDERER_OFFSET UNITYSDK_OFFSET(0x15244270)
#define PLANEREFLECTIONPROXY_UNREGISTERPLANEREFLECTION_OFFSET UNITYSDK_OFFSET(0x15243DE0)
#define PLANEREFLECTIONPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x15243430)

inline static constexpr unsigned int PlaneReflectionProxy_TypeDefinitionIndex = 34866;

class PlaneReflectionProxy : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*>* _PendingCasterRendererMap; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::CustomRP::IPlaneReflection*>* _PlaneReflectionMap; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANEREFLECTIONPROXY__CTOR_OFFSET))(this);
	}

	::System::Void RegisterPlaneReflection(::RPG::CustomRP::IPlaneReflection* planeReflection)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::IPlaneReflection*))((::PBYTE)hIl2Cpp + PLANEREFLECTIONPROXY_REGISTERPLANEREFLECTION_OFFSET))(this, planeReflection);
	}

	::System::Void UnregisterPlaneReflection(::RPG::CustomRP::IPlaneReflection* planeReflection)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::IPlaneReflection*))((::PBYTE)hIl2Cpp + PLANEREFLECTIONPROXY_UNREGISTERPLANEREFLECTION_OFFSET))(this, planeReflection);
	}

	::System::Boolean RegisterPlaneReflectionCasterRenderer(::System::String* nameKey, ::UnityEngine::Renderer* renderer)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + PLANEREFLECTIONPROXY_REGISTERPLANEREFLECTIONCASTERRENDERER_OFFSET))(this, nameKey, renderer);
	}

	::System::Void UnregisterPlaneReflectionCasterRenderer(::System::String* nameKey, ::UnityEngine::Renderer* renderer)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + PLANEREFLECTIONPROXY_UNREGISTERPLANEREFLECTIONCASTERRENDERER_OFFSET))(this, nameKey, renderer);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLANEREFLECTIONPROXY_DISPOSE_OFFSET))(this);
	}

	static ::System::Void OrderByPriority(::System::Collections::Generic::List_1<::RPG::CustomRP::IPlaneReflection*>* planeReflections)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::CustomRP::IPlaneReflection*>*))((::PBYTE)hIl2Cpp + PLANEREFLECTIONPROXY_ORDERBYPRIORITY_OFFSET))(planeReflections);
	}
};

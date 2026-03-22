#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UIElements/MouseEventBase_1.h"

#define UNITYENGINE_UIELEMENTS_MOUSEOVEREVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x182C36D0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseOverEvent_TypeDefinitionIndex = 5834;

	class MouseOverEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseOverEvent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEOVEREVENT__CTOR_OFFSET))(this);
		}
	};
}

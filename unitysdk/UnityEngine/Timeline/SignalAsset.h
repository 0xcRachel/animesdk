#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { template <typename T> class Action_1; }

#define UNITYENGINE_TIMELINE_SIGNALASSET_ADD_ONENABLECALLBACK_OFFSET UNITYSDK_OFFSET(0x18AA2210)
#define UNITYENGINE_TIMELINE_SIGNALASSET_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18AA2370)
#define UNITYENGINE_TIMELINE_SIGNALASSET_REMOVE_ONENABLECALLBACK_OFFSET UNITYSDK_OFFSET(0x18AA22C0)
#define UNITYENGINE_TIMELINE_SIGNALASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x18AA23D0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int SignalAsset_TypeDefinitionIndex = 35595;

	class SignalAsset : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::System::Action_1<::UnityEngine::Timeline::SignalAsset*>** StaticGet_OnEnableCallback()
		{
			return (::System::Action_1<::UnityEngine::Timeline::SignalAsset*>**)Il2CppClass::FromTypeDefinitionIndex(SignalAsset_TypeDefinitionIndex)->GetStaticField(0x60600);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALASSET__CTOR_OFFSET))(this);
		}

		static ::System::Void add_OnEnableCallback(::System::Action_1<::UnityEngine::Timeline::SignalAsset*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::Timeline::SignalAsset*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALASSET_ADD_ONENABLECALLBACK_OFFSET))(value);
		}

		static ::System::Void remove_OnEnableCallback(::System::Action_1<::UnityEngine::Timeline::SignalAsset*>* value)
		{
			return ((::System::Void(*)(::System::Action_1<::UnityEngine::Timeline::SignalAsset*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALASSET_REMOVE_ONENABLECALLBACK_OFFSET))(value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALASSET_ONENABLE_OFFSET))(this);
		}
	};
}

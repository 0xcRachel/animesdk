#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
#include "unitysdk/UnityEngine/Rendering/VolumeProxy_DebugMethod.h"
#include "unitysdk/UnityEngine/Rendering/VolumeProxy_Priority.h"
#include "unitysdk/UnityEngine/Rendering/VolumeProxy_State.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { class Volume; }
namespace UnityEngine::Rendering { class VolumeComponent; }
namespace UnityEngine::Rendering { class VolumeProfile; }
namespace UnityEngine::Rendering { class VolumeProxy_ComponentState; }
namespace UnityEngine::Rendering { class VolumeStack; }

#define UNITYENGINE_RENDERING_VOLUMEPROXY_APPLYSETTINGS_OFFSET UNITYSDK_OFFSET(0x198E4C60)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_GETCOMPONENTDEBUGSTATE_OFFSET UNITYSDK_OFFSET(0x198E5A20)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_GETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x198E4F70)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_GETORIGINVALUES_OFFSET UNITYSDK_OFFSET(0x198E5840)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_GETSTACK_OFFSET UNITYSDK_OFFSET(0x198E56D0)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_GETTOPPRIORITYCOMPONENT_OFFSET UNITYSDK_OFFSET(0x198E5710)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_GETTOPPRIORITYSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x198E5830)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_GETTOPPRIORITY_OFFSET UNITYSDK_OFFSET(0x198E57F0)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_GET_REQUIRECOMPONENTWITHSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x198E4E10)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x198E0230)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_OVERRIDEBYPROFILE_OFFSET UNITYSDK_OFFSET(0x198E5070)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_OVERRIDECOMPONENT_OFFSET UNITYSDK_OFFSET(0x198E51B0)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_RELEASEALL_OFFSET UNITYSDK_OFFSET(0x198E30C0)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_RELEASE_OFFSET UNITYSDK_OFFSET(0x198E5340)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_REQUIRE_OFFSET UNITYSDK_OFFSET(0x198E4E20)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_RESET_OFFSET UNITYSDK_OFFSET(0x198E5550)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_SAVEORIGINVALUES_OFFSET UNITYSDK_OFFSET(0x198DF2A0)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_SETCOMPONENTDEBUGSTATE_OFFSET UNITYSDK_OFFSET(0x198E58D0)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_SET_REQUIRECOMPONENTWITHSTACKTRACE_OFFSET UNITYSDK_OFFSET(0x198E4E00)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_TRYINIT_OFFSET UNITYSDK_OFFSET(0x198E25A0)
#define UNITYENGINE_RENDERING_VOLUMEPROXY_UPDATE_OFFSET UNITYSDK_OFFSET(0x198E41D0)
#define UNITYENGINE_RENDERING_VOLUMEPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x198E5AA0)
#define UNITYENGINE_RENDERING_VOLUMEPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x198DF280)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeProxy_TypeDefinitionIndex = 33573;

	class VolumeProxy : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Rendering::VolumeStack*>** StaticGet__GlobalOriginStack()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Rendering::VolumeStack*>**)Il2CppClass::FromTypeDefinitionIndex(VolumeProxy_TypeDefinitionIndex)->GetStaticField(0x53D00);
		}
		::Il2CppArray<::UnityEngine::Rendering::VolumeStack*>* _VolumeStacks; // 0x10
		::UnityEngine::Rendering::VolumeProfile* _Profile; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::UnityEngine::Rendering::VolumeProxy_DebugMethod>* _ComponentDebugState; // 0x20
		::UnityEngine::Rendering::Volume* _Volume; // 0x28
		::UnityEngine::Rendering::VolumeStack* _OriginStack; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::UnityEngine::Rendering::VolumeProxy_ComponentState*>* _StateDict; // 0x38
		::System::Boolean _Dirty; // 0x40
		::UnityEngine::Rendering::VolumeProxy_State _SaveOriginState; // 0x44
		::UnityEngine::Rendering::VolumeProxy_State _InitState; // 0x48

		::System::Void _ctor(::UnityEngine::Rendering::Volume* volume)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Volume*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY__CTOR_OFFSET))(this, volume);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY__CCTOR_OFFSET))();
		}

		::System::Void TryInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_TRYINIT_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_UPDATE_OFFSET))(this);
		}

		::System::Void set_RequireComponentWithStackTrace(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_SET_REQUIRECOMPONENTWITHSTACKTRACE_OFFSET))(this, value);
		}

		::System::Boolean get_RequireComponentWithStackTrace()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_GET_REQUIRECOMPONENTWITHSTACKTRACE_OFFSET))(this);
		}

		::UnityEngine::Rendering::VolumeComponent* Require(::System::RuntimeTypeHandle typeHandle, ::UnityEngine::Rendering::VolumeProxy_Priority priority)
		{
			return ((::UnityEngine::Rendering::VolumeComponent*(*)(::PVOID, ::System::RuntimeTypeHandle, ::UnityEngine::Rendering::VolumeProxy_Priority))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_REQUIRE_OFFSET))(this, typeHandle, priority);
		}

		::System::Void OverrideByProfile(::UnityEngine::Rendering::VolumeProxy_Priority priority, ::UnityEngine::Rendering::VolumeProfile* targetProfile)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeProxy_Priority, ::UnityEngine::Rendering::VolumeProfile*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_OVERRIDEBYPROFILE_OFFSET))(this, priority, targetProfile);
		}

		::System::Void Release(::System::RuntimeTypeHandle typeHandle, ::UnityEngine::Rendering::VolumeProxy_Priority priority, ::System::Boolean reset)
		{
			return ((::System::Void(*)(::PVOID, ::System::RuntimeTypeHandle, ::UnityEngine::Rendering::VolumeProxy_Priority, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_RELEASE_OFFSET))(this, typeHandle, priority, reset);
		}

		::System::Void ReleaseAll(::UnityEngine::Rendering::VolumeProxy_Priority priority, ::System::Boolean reset, ::System::Boolean resetAll)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeProxy_Priority, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_RELEASEALL_OFFSET))(this, priority, reset, resetAll);
		}

		::System::Void Reset(::System::RuntimeTypeHandle typeHandle, ::UnityEngine::Rendering::VolumeProxy_Priority priority)
		{
			return ((::System::Void(*)(::PVOID, ::System::RuntimeTypeHandle, ::UnityEngine::Rendering::VolumeProxy_Priority))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_RESET_OFFSET))(this, typeHandle, priority);
		}

		::UnityEngine::Rendering::VolumeComponent* GetTopPriorityComponent(::System::RuntimeTypeHandle typeHandle)
		{
			return ((::UnityEngine::Rendering::VolumeComponent*(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_GETTOPPRIORITYCOMPONENT_OFFSET))(this, typeHandle);
		}

		::UnityEngine::Rendering::VolumeProxy_Priority GetTopPriority(::System::RuntimeTypeHandle typeHandle)
		{
			return ((::UnityEngine::Rendering::VolumeProxy_Priority(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_GETTOPPRIORITY_OFFSET))(this, typeHandle);
		}

		::System::String* GetTopPriorityStackTrace(::System::RuntimeTypeHandle typeHandle)
		{
			return ((::System::String*(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_GETTOPPRIORITYSTACKTRACE_OFFSET))(this, typeHandle);
		}

		::UnityEngine::Rendering::VolumeComponent* GetComponent(::System::RuntimeTypeHandle typeHandle, ::UnityEngine::Rendering::VolumeProxy_Priority priority)
		{
			return ((::UnityEngine::Rendering::VolumeComponent*(*)(::PVOID, ::System::RuntimeTypeHandle, ::UnityEngine::Rendering::VolumeProxy_Priority))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_GETCOMPONENT_OFFSET))(this, typeHandle, priority);
		}

		::UnityEngine::Rendering::VolumeStack* GetStack(::UnityEngine::Rendering::VolumeProxy_Priority priority)
		{
			return ((::UnityEngine::Rendering::VolumeStack*(*)(::PVOID, ::UnityEngine::Rendering::VolumeProxy_Priority))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_GETSTACK_OFFSET))(this, priority);
		}

		::System::Void SaveOriginValues(::System::Boolean forceReset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_SAVEORIGINVALUES_OFFSET))(this, forceReset);
		}

		::UnityEngine::Rendering::VolumeComponent* GetOriginValues(::System::RuntimeTypeHandle typeHandle)
		{
			return ((::UnityEngine::Rendering::VolumeComponent*(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_GETORIGINVALUES_OFFSET))(this, typeHandle);
		}

		::System::Void ApplySettings(::System::Boolean applyNonePriority)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_APPLYSETTINGS_OFFSET))(this, applyNonePriority);
		}

		::System::Void OverrideComponent(::UnityEngine::Rendering::VolumeComponent* src, ::UnityEngine::Rendering::VolumeComponent* dst)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeComponent*, ::UnityEngine::Rendering::VolumeComponent*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_OVERRIDECOMPONENT_OFFSET))(this, src, dst);
		}

		::System::Void SetComponentDebugState(::System::RuntimeTypeHandle typeHandle, ::UnityEngine::Rendering::VolumeProxy_DebugMethod method)
		{
			return ((::System::Void(*)(::PVOID, ::System::RuntimeTypeHandle, ::UnityEngine::Rendering::VolumeProxy_DebugMethod))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_SETCOMPONENTDEBUGSTATE_OFFSET))(this, typeHandle, method);
		}

		::UnityEngine::Rendering::VolumeProxy_DebugMethod GetComponentDebugState(::System::RuntimeTypeHandle typeHandle)
		{
			return ((::UnityEngine::Rendering::VolumeProxy_DebugMethod(*)(::PVOID, ::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMEPROXY_GETCOMPONENTDEBUGSTATE_OFFSET))(this, typeHandle);
		}
	};
}

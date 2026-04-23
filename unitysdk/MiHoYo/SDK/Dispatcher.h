#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_DISPATCHER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1737F800)
#define MIHOYO_SDK_DISPATCHER_RUNASYNC_1_OFFSET UNITYSDK_OFFSET(0x1737F610)
#define MIHOYO_SDK_DISPATCHER_RUNASYNC_OFFSET UNITYSDK_OFFSET(0x1737F570)
#define MIHOYO_SDK_DISPATCHER_RUNONMAINTHREAD_OFFSET UNITYSDK_OFFSET(0x1737F6B0)
#define MIHOYO_SDK_DISPATCHER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1737F910)
#define MIHOYO_SDK_DISPATCHER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1737FC70)
#define MIHOYO_SDK_DISPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1737FC60)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int Dispatcher_TypeDefinitionIndex = 42896;

	class Dispatcher : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet__actions()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(Dispatcher_TypeDefinitionIndex)->GetStaticField(0x48530);
		}
		static ::System::Collections::Generic::List_1<::System::Action*>** StaticGet__backlog()
		{
			return (::System::Collections::Generic::List_1<::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(Dispatcher_TypeDefinitionIndex)->GetStaticField(0x48538);
		}
		static ::MiHoYo::SDK::Dispatcher** StaticGet__instance()
		{
			return (::MiHoYo::SDK::Dispatcher**)Il2CppClass::FromTypeDefinitionIndex(Dispatcher_TypeDefinitionIndex)->GetStaticField(0x48540);
		}
		static ::System::Boolean* StaticGet__queued()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Dispatcher_TypeDefinitionIndex)->GetStaticField(0xD790);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISPATCHER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISPATCHER__CCTOR_OFFSET))();
		}

		static ::System::Void RunAsync(::System::Action* action)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISPATCHER_RUNASYNC_OFFSET))(action);
		}

		static ::System::Void RunAsync_1(::System::Action_1<::System::Object*>* action, ::System::Object* state)
		{
			return ((::System::Void(*)(::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISPATCHER_RUNASYNC_1_OFFSET))(action, state);
		}

		static ::System::Void RunOnMainThread(::System::Action* action)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISPATCHER_RUNONMAINTHREAD_OFFSET))(action);
		}

		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISPATCHER_INITIALIZE_OFFSET))();
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_DISPATCHER_UPDATE_OFFSET))(this);
		}
	};
}

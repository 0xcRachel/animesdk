#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_DESTROYPIPELINEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x11263730)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_DESTROYPIPELINEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x11263760)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_DESTROYPIPELINEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x11261C30)
#define CINEMACHINE_CINEMACHINEVIRTUALCAMERA_DESTROYPIPELINEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x11263710)

namespace Cinemachine
{
	inline static constexpr unsigned int CinemachineVirtualCamera_DestroyPipelineDelegate_TypeDefinitionIndex = 29934;

	class CinemachineVirtualCamera_DestroyPipelineDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_DESTROYPIPELINEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::GameObject* pipeline)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_DESTROYPIPELINEDELEGATE_INVOKE_OFFSET))(this, pipeline);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::GameObject* pipeline, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::GameObject*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_DESTROYPIPELINEDELEGATE_BEGININVOKE_OFFSET))(this, pipeline, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + CINEMACHINE_CINEMACHINEVIRTUALCAMERA_DESTROYPIPELINEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

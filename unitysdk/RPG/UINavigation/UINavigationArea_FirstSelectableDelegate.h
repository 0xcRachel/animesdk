#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }

#define RPG_UINAVIGATION_UINAVIGATIONAREA_FIRSTSELECTABLEDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0xAB163C0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_FIRSTSELECTABLEDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0xAB163F0)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_FIRSTSELECTABLEDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0xAB13B40)
#define RPG_UINAVIGATION_UINAVIGATIONAREA_FIRSTSELECTABLEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0xAB163A0)

namespace RPG::UINavigation
{
	inline static constexpr unsigned int UINavigationArea_FirstSelectableDelegate_TypeDefinitionIndex = 41823;

	class UINavigationArea_FirstSelectableDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_FIRSTSELECTABLEDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::UnityEngine::GameObject* Invoke()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_FIRSTSELECTABLEDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_FIRSTSELECTABLEDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::UnityEngine::GameObject* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_UINAVIGATION_UINAVIGATIONAREA_FIRSTSELECTABLEDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

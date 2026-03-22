#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define INCONTROL_KEYBOARDLAYOUTCHANGED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15479A80)
#define INCONTROL_KEYBOARDLAYOUTCHANGED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15479AF0)
#define INCONTROL_KEYBOARDLAYOUTCHANGED_INVOKE_OFFSET UNITYSDK_OFFSET(0x154795C0)
#define INCONTROL_KEYBOARDLAYOUTCHANGED__CTOR_OFFSET UNITYSDK_OFFSET(0x154795A0)

namespace InControl
{
	inline static constexpr unsigned int KeyboardLayoutChanged_TypeDefinitionIndex = 30570;

	class KeyboardLayoutChanged : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTCHANGED__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 oldCultureInfo, ::System::Int32 newCultureInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTCHANGED_INVOKE_OFFSET))(this, oldCultureInfo, newCultureInfo);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 oldCultureInfo, ::System::Int32 newCultureInfo, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTCHANGED_BEGININVOKE_OFFSET))(this, oldCultureInfo, newCultureInfo, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + INCONTROL_KEYBOARDLAYOUTCHANGED_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

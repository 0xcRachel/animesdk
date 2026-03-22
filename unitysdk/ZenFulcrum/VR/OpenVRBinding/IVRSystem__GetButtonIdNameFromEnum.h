#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/EVRButtonId.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETBUTTONIDNAMEFROMENUM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x184EBD60)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETBUTTONIDNAMEFROMENUM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x184EBDD0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETBUTTONIDNAMEFROMENUM_INVOKE_OFFSET UNITYSDK_OFFSET(0x184EB940)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETBUTTONIDNAMEFROMENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x184EB920)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRSystem__GetButtonIdNameFromEnum_TypeDefinitionIndex = 29093;

	class IVRSystem__GetButtonIdNameFromEnum : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETBUTTONIDNAMEFROMENUM__CTOR_OFFSET))(this, object, method);
		}

		::System::IntPtr Invoke(::ZenFulcrum::VR::OpenVRBinding::EVRButtonId eButtonId)
		{
			return ((::System::IntPtr(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRButtonId))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETBUTTONIDNAMEFROMENUM_INVOKE_OFFSET))(this, eButtonId);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::EVRButtonId eButtonId, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::EVRButtonId, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETBUTTONIDNAMEFROMENUM_BEGININVOKE_OFFSET))(this, eButtonId, callback, object);
		}

		::System::IntPtr EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRSYSTEM__GETBUTTONIDNAMEFROMENUM_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/HmdQuad_t.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETPLAYAREARECT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x184A6CB0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETPLAYAREARECT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x184A6D20)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETPLAYAREARECT_INVOKE_OFFSET UNITYSDK_OFFSET(0x184989A0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETPLAYAREARECT__CTOR_OFFSET UNITYSDK_OFFSET(0x184A6C90)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperone__GetPlayAreaRect_TypeDefinitionIndex = 29154;

	class IVRChaperone__GetPlayAreaRect : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETPLAYAREARECT__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t& rect)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETPLAYAREARECT_INVOKE_OFFSET))(this, rect);
		}

		::System::IAsyncResult* BeginInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t& rect, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETPLAYAREARECT_BEGININVOKE_OFFSET))(this, rect, callback, object);
		}

		::System::Boolean EndInvoke(::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t& rect, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::ZenFulcrum::VR::OpenVRBinding::HmdQuad_t&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONE__GETPLAYAREARECT_ENDINVOKE_OFFSET))(this, rect, result);
		}
	};
}

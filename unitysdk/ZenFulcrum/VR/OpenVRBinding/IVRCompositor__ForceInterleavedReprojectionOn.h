#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FORCEINTERLEAVEDREPROJECTIONON_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x184AB820)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FORCEINTERLEAVEDREPROJECTIONON_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x184AB870)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FORCEINTERLEAVEDREPROJECTIONON_INVOKE_OFFSET UNITYSDK_OFFSET(0x184AB330)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FORCEINTERLEAVEDREPROJECTIONON__CTOR_OFFSET UNITYSDK_OFFSET(0x184AB310)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRCompositor__ForceInterleavedReprojectionOn_TypeDefinitionIndex = 29212;

	class IVRCompositor__ForceInterleavedReprojectionOn : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FORCEINTERLEAVEDREPROJECTIONON__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Boolean bOverride)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FORCEINTERLEAVEDREPROJECTIONON_INVOKE_OFFSET))(this, bOverride);
		}

		::System::IAsyncResult* BeginInvoke(::System::Boolean bOverride, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FORCEINTERLEAVEDREPROJECTIONON_BEGININVOKE_OFFSET))(this, bOverride, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCOMPOSITOR__FORCEINTERLEAVEDREPROJECTIONON_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

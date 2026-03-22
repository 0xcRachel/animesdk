#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__IMPORTFROMBUFFERTOWORKING_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x184A7720)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__IMPORTFROMBUFFERTOWORKING_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x184A7780)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__IMPORTFROMBUFFERTOWORKING_INVOKE_OFFSET UNITYSDK_OFFSET(0x1849F830)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__IMPORTFROMBUFFERTOWORKING__CTOR_OFFSET UNITYSDK_OFFSET(0x184A7700)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperoneSetup__ImportFromBufferToWorking_TypeDefinitionIndex = 29180;

	class IVRChaperoneSetup__ImportFromBufferToWorking : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__IMPORTFROMBUFFERTOWORKING__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::String* pBuffer, ::System::UInt32 nImportFlags)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__IMPORTFROMBUFFERTOWORKING_INVOKE_OFFSET))(this, pBuffer, nImportFlags);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* pBuffer, ::System::UInt32 nImportFlags, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__IMPORTFROMBUFFERTOWORKING_BEGININVOKE_OFFSET))(this, pBuffer, nImportFlags, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__IMPORTFROMBUFFERTOWORKING_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

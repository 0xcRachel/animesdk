#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Text { class StringBuilder; }

#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__EXPORTLIVETOBUFFER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x184A6FF0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__EXPORTLIVETOBUFFER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x184A7050)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__EXPORTLIVETOBUFFER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1849EFF0)
#define ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__EXPORTLIVETOBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x184A6FD0)

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperoneSetup__ExportLiveToBuffer_TypeDefinitionIndex = 29179;

	class IVRChaperoneSetup__ExportLiveToBuffer : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__EXPORTLIVETOBUFFER__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::System::Text::StringBuilder* pBuffer, ::System::UInt32& pnBufferLength)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Text::StringBuilder*, ::System::UInt32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__EXPORTLIVETOBUFFER_INVOKE_OFFSET))(this, pBuffer, pnBufferLength);
		}

		::System::IAsyncResult* BeginInvoke(::System::Text::StringBuilder* pBuffer, ::System::UInt32& pnBufferLength, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Text::StringBuilder*, ::System::UInt32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__EXPORTLIVETOBUFFER_BEGININVOKE_OFFSET))(this, pBuffer, pnBufferLength, callback, object);
		}

		::System::Boolean EndInvoke(::System::UInt32& pnBufferLength, ::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_VR_OPENVRBINDING_IVRCHAPERONESETUP__EXPORTLIVETOBUFFER_ENDINVOKE_OFFSET))(this, pnBufferLength, result);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_UPDATEUIDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x8129B70)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_UPDATEUIDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x8129BA0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_UPDATEUIDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x81294C0)
#define HOUDINIENGINEUNITY_HEU_PDGASSETLINK_UPDATEUIDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x8129B50)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_PDGAssetLink_UpdateUIDelegate_TypeDefinitionIndex = 36810;

	class HEU_PDGAssetLink_UpdateUIDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_UPDATEUIDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_UPDATEUIDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_UPDATEUIDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_PDGASSETLINK_UPDATEUIDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

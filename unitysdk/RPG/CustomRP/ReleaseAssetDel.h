#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class Object; }

#define RPG_CUSTOMRP_RELEASEASSETDEL_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x16AE8440)
#define RPG_CUSTOMRP_RELEASEASSETDEL_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x16AE8470)
#define RPG_CUSTOMRP_RELEASEASSETDEL_INVOKE_OFFSET UNITYSDK_OFFSET(0x16AE0C00)
#define RPG_CUSTOMRP_RELEASEASSETDEL__CTOR_OFFSET UNITYSDK_OFFSET(0x16AE8420)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ReleaseAssetDel_TypeDefinitionIndex = 29497;

	class ReleaseAssetDel : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RELEASEASSETDEL__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Object* assetObject)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RELEASEASSETDEL_INVOKE_OFFSET))(this, assetObject);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Object* assetObject, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RELEASEASSETDEL_BEGININVOKE_OFFSET))(this, assetObject, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RELEASEASSETDEL_ENDINVOKE_OFFSET))(this, result);
		}
	};
}

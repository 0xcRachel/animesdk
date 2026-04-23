#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_NETWORKMANAGER__GET_D__34_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17402AE0)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__34_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17402CB0)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17402D10)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17402CC0)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__34_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17402AD0)
#define MIHOYO_SDK_NETWORKMANAGER__GET_D__34__CTOR_OFFSET UNITYSDK_OFFSET(0x173FE7C0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetworkManager__Get_d__34_TypeDefinitionIndex = 7198;

	class NetworkManager__Get_d__34 : public ::System::Object
	{
	public:
		::System::Action* timeoutCallback; // 0x10
		::System::String* _queryString_5__1; // 0x18
		::System::String* requestUrl; // 0x20
		::System::Action_1<::System::String*>* callback; // 0x28
		::System::Object* __2__current; // 0x30
		::MiHoYo::SDK::NetworkManager* __4__this; // 0x38
		::MiHoYo::SDK::JSONObject* query; // 0x40
		::System::Int32 __1__state; // 0x48
		::System::Int32 retryTime; // 0x4C
		::System::Single timeoutSecond; // 0x50

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__34__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__34_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__34_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__34_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETWORKMANAGER__GET_D__34_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}

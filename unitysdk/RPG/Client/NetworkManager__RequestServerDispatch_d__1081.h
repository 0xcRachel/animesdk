#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D6D8D891CDDE5DED;
namespace RPG::Client { class NetworkManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Networking { class UnityWebRequest; }

#define RPG_CLIENT_NETWORKMANAGER__REQUESTSERVERDISPATCH_D__1081_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x99F1E10)
#define RPG_CLIENT_NETWORKMANAGER__REQUESTSERVERDISPATCH_D__1081_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x99F2900)
#define RPG_CLIENT_NETWORKMANAGER__REQUESTSERVERDISPATCH_D__1081_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x99F2960)
#define RPG_CLIENT_NETWORKMANAGER__REQUESTSERVERDISPATCH_D__1081_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x99F2910)
#define RPG_CLIENT_NETWORKMANAGER__REQUESTSERVERDISPATCH_D__1081_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x99F1DA0)
#define RPG_CLIENT_NETWORKMANAGER__REQUESTSERVERDISPATCH_D__1081__CTOR_OFFSET UNITYSDK_OFFSET(0x99E7490)
#define RPG_CLIENT_NETWORKMANAGER__REQUESTSERVERDISPATCH_D__1081___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x99F1DF0)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkManager__RequestServerDispatch_d__1081_TypeDefinitionIndex = 55137;

	class NetworkManager__RequestServerDispatch_d__1081 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::NetworkManager* __4__this; // 0x18
		::System::String* _wholeUrl_5__2; // 0x20
		::UnityEngine::Networking::UnityWebRequest* _request_5__6; // 0x28
		::System::Action_1<::Class_1_D6D8D891CDDE5DED*>* callback; // 0x30
		::Class_1_D6D8D891CDDE5DED* _dispatchResult_5__3; // 0x38
		::System::Int32 _tryIndex_5__4; // 0x40
		::System::Int32 __1__state; // 0x44
		::System::Int32 _responseCode_5__5; // 0x48

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER__REQUESTSERVERDISPATCH_D__1081__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER__REQUESTSERVERDISPATCH_D__1081_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER__REQUESTSERVERDISPATCH_D__1081_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER__REQUESTSERVERDISPATCH_D__1081___M__FINALLY1_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER__REQUESTSERVERDISPATCH_D__1081_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER__REQUESTSERVERDISPATCH_D__1081_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER__REQUESTSERVERDISPATCH_D__1081_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}

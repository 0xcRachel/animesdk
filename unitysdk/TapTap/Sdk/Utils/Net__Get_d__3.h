#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class WWW; }

#define TAPTAP_SDK_UTILS_NET__GET_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x17F75F20)
#define TAPTAP_SDK_UTILS_NET__GET_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17F76670)
#define TAPTAP_SDK_UTILS_NET__GET_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x17F766D0)
#define TAPTAP_SDK_UTILS_NET__GET_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x17F76680)
#define TAPTAP_SDK_UTILS_NET__GET_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17F75F10)
#define TAPTAP_SDK_UTILS_NET__GET_D__3__CTOR_OFFSET UNITYSDK_OFFSET(0x17F751B0)

namespace TapTap::Sdk::Utils
{
	inline static constexpr unsigned int Net__Get_d__3_TypeDefinitionIndex = 6337;

	class Net__Get_d__3 : public ::System::Object
	{
	public:
		::System::String* url; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* queryParams; // 0x18
		::System::Object* __2__current; // 0x20
		::UnityEngine::WWW* _w_5__2; // 0x28
		::System::Action_1<::System::String*>* methodForResult; // 0x30
		::System::String* authorization; // 0x38
		::System::Action_2<::System::Int32, ::System::String*>* methodForError; // 0x40
		::System::Int32 __1__state; // 0x48

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET__GET_D__3__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET__GET_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET__GET_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET__GET_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET__GET_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UTILS_NET__GET_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}

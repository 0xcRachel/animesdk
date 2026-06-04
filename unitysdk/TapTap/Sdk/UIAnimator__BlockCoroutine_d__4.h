#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TapTap::Sdk { class UIAnimator_Action; }

#define TAPTAP_SDK_UIANIMATOR__BLOCKCOROUTINE_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B46F270)
#define TAPTAP_SDK_UIANIMATOR__BLOCKCOROUTINE_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B46F2E0)
#define TAPTAP_SDK_UIANIMATOR__BLOCKCOROUTINE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B46F340)
#define TAPTAP_SDK_UIANIMATOR__BLOCKCOROUTINE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B46F2F0)
#define TAPTAP_SDK_UIANIMATOR__BLOCKCOROUTINE_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B46F260)
#define TAPTAP_SDK_UIANIMATOR__BLOCKCOROUTINE_D__4__CTOR_OFFSET UNITYSDK_OFFSET(0x1B46F220)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int UIAnimator__BlockCoroutine_d__4_TypeDefinitionIndex = 7073;

	class UIAnimator__BlockCoroutine_d__4 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::TapTap::Sdk::UIAnimator_Action* onBlockEnd; // 0x18
		::System::Single blockDuration; // 0x20
		::System::Int32 __1__state; // 0x24

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR__BLOCKCOROUTINE_D__4__CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR__BLOCKCOROUTINE_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR__BLOCKCOROUTINE_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR__BLOCKCOROUTINE_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR__BLOCKCOROUTINE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR__BLOCKCOROUTINE_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}

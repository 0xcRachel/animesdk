#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class RectTransform; }

#define UNITYENGINE_UI_LAYOUTGROUP__DELAYEDSETDIRTY_D__66_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x18B4DDE0)
#define UNITYENGINE_UI_LAYOUTGROUP__DELAYEDSETDIRTY_D__66_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18B4DE40)
#define UNITYENGINE_UI_LAYOUTGROUP__DELAYEDSETDIRTY_D__66_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x18B4DEA0)
#define UNITYENGINE_UI_LAYOUTGROUP__DELAYEDSETDIRTY_D__66_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x18B4DE50)
#define UNITYENGINE_UI_LAYOUTGROUP__DELAYEDSETDIRTY_D__66_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18B4DDD0)
#define UNITYENGINE_UI_LAYOUTGROUP__DELAYEDSETDIRTY_D__66__CTOR_OFFSET UNITYSDK_OFFSET(0x18B4DDC0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int LayoutGroup__DelayedSetDirty_d__66_TypeDefinitionIndex = 5650;

	class LayoutGroup__DelayedSetDirty_d__66 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Object* __2__current; // 0x18
		::UnityEngine::RectTransform* rectTransform; // 0x20

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP__DELAYEDSETDIRTY_D__66__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP__DELAYEDSETDIRTY_D__66_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP__DELAYEDSETDIRTY_D__66_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP__DELAYEDSETDIRTY_D__66_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP__DELAYEDSETDIRTY_D__66_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_LAYOUTGROUP__DELAYEDSETDIRTY_D__66_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}

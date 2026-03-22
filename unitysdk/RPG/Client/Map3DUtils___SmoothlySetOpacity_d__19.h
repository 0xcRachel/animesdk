#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_MAP3DUTILS___SMOOTHLYSETOPACITY_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9604ED0)
#define RPG_CLIENT_MAP3DUTILS___SMOOTHLYSETOPACITY_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9605070)
#define RPG_CLIENT_MAP3DUTILS___SMOOTHLYSETOPACITY_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x96050D0)
#define RPG_CLIENT_MAP3DUTILS___SMOOTHLYSETOPACITY_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9605080)
#define RPG_CLIENT_MAP3DUTILS___SMOOTHLYSETOPACITY_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9604EC0)
#define RPG_CLIENT_MAP3DUTILS___SMOOTHLYSETOPACITY_D__19__CTOR_OFFSET UNITYSDK_OFFSET(0x9604C30)

namespace RPG::Client
{
	inline static constexpr unsigned int Map3DUtils___SmoothlySetOpacity_d__19_TypeDefinitionIndex = 54839;

	class Map3DUtils___SmoothlySetOpacity_d__19 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::UnityEngine::GameObject* gameObject; // 0x18
		::System::Single _startOpacity_5__3; // 0x20
		::System::Single targetOpacity; // 0x24
		::System::Int32 __1__state; // 0x28
		::System::Single _startTime_5__2; // 0x2C
		::System::Single duration; // 0x30

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS___SMOOTHLYSETOPACITY_D__19__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS___SMOOTHLYSETOPACITY_D__19_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS___SMOOTHLYSETOPACITY_D__19_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS___SMOOTHLYSETOPACITY_D__19_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS___SMOOTHLYSETOPACITY_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAP3DUTILS___SMOOTHLYSETOPACITY_D__19_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}

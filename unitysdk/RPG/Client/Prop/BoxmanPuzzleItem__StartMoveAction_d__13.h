#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/BoxmanDir.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Prop { class BoxmanPuzzleItem; }

#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTMOVEACTION_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x9B57CB0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTMOVEACTION_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9B57EE0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTMOVEACTION_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x9B57F40)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTMOVEACTION_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x9B57EF0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTMOVEACTION_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9B57CA0)
#define RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTMOVEACTION_D__13__CTOR_OFFSET UNITYSDK_OFFSET(0x9B57050)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int BoxmanPuzzleItem__StartMoveAction_d__13_TypeDefinitionIndex = 62115;

	class BoxmanPuzzleItem__StartMoveAction_d__13 : public ::System::Object
	{
	public:
		::System::Object* __2__current; // 0x10
		::RPG::Client::Prop::BoxmanPuzzleItem* __4__this; // 0x18
		::RPG::Client::Prop::BoxmanDir dir; // 0x20
		::System::Int32 __1__state; // 0x24

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTMOVEACTION_D__13__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTMOVEACTION_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTMOVEACTION_D__13_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTMOVEACTION_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTMOVEACTION_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_BOXMANPUZZLEITEM__STARTMOVEACTION_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}

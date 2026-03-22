#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_UIDRAGGABLEMANAGER___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA1B30E0)
#define RPG_CLIENT_UIDRAGGABLEMANAGER___C__DISPLAYCLASS26_0__LUABINDDRAGENDCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0xA1B3D10)

namespace RPG::Client
{
	inline static constexpr unsigned int UIDraggableManager___c__DisplayClass26_0_TypeDefinitionIndex = 54889;

	class UIDraggableManager___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::System::Action_1<::XLua::LuaTable*>* callback; // 0x10
		::XLua::LuaTable* listener; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void _LuaBindDragEndCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGGABLEMANAGER___C__DISPLAYCLASS26_0__LUABINDDRAGENDCALLBACK_B__0_OFFSET))(this);
		}
	};
}

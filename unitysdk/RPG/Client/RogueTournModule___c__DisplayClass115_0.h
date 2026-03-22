#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS115_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9E84CC0)
#define RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS115_0__SHOWMODESELECTPAGEPROMISED_B__0_OFFSET UNITYSDK_OFFSET(0x9E89CC0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournModule___c__DisplayClass115_0_TypeDefinitionIndex = 53788;

	class RogueTournModule___c__DisplayClass115_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise_1<::XLua::LuaTable*>* promise; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS115_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowModeSelectPagePromised_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMODULE___C__DISPLAYCLASS115_0__SHOWMODESELECTPAGEPROMISED_B__0_OFFSET))(this);
		}
	};
}

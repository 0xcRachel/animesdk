#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_ROGUETOURNPERSONABASEVIEWMODEL_ADDMESSAGEHANDLER_OFFSET UNITYSDK_OFFSET(0xA3BE0D0)
#define RPG_CLIENT_ROGUETOURNPERSONABASEVIEWMODEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA3BE030)
#define RPG_CLIENT_ROGUETOURNPERSONABASEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xA3BE1A0)
#define RPG_CLIENT_ROGUETOURNPERSONABASEVIEWMODEL__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xA3BE090)
#define RPG_CLIENT_ROGUETOURNPERSONABASEVIEWMODEL__SENDMESSAGE_OFFSET UNITYSDK_OFFSET(0xA3BE130)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaBaseViewModel_TypeDefinitionIndex = 59773;

	class RogueTournPersonaBaseViewModel : public ::System::Object
	{
	public:
		::XLua::LuaTable* _LuaTable; // 0x10
		::System::Action_3<::XLua::LuaTable*, ::System::Int32, ::System::Object*>* _MessageHandler; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONABASEVIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONABASEVIEWMODEL_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONABASEVIEWMODEL__ONDISPOSE_OFFSET))(this);
		}

		::System::Void AddMessageHandler(::XLua::LuaTable* luaTable, ::System::Action_3<::XLua::LuaTable*, ::System::Int32, ::System::Object*>* messageHandler)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Action_3<::XLua::LuaTable*, ::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONABASEVIEWMODEL_ADDMESSAGEHANDLER_OFFSET))(this, luaTable, messageHandler);
		}

		::System::Void _SendMessage(::System::Int32 message, ::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNPERSONABASEVIEWMODEL__SENDMESSAGE_OFFSET))(this, message, obj);
		}
	};
}

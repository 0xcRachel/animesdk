#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class HPBar; }
namespace System { template <typename T> class Action_1; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_MONOHPBARANIM_ADDTWEENHANDLER_OFFSET UNITYSDK_OFFSET(0x98304B0)
#define RPG_CLIENT_MONOHPBARANIM_SETVALUEWITHTWEEN_OFFSET UNITYSDK_OFFSET(0x9830230)
#define RPG_CLIENT_MONOHPBARANIM_SETVALUE_OFFSET UNITYSDK_OFFSET(0x98302E0)
#define RPG_CLIENT_MONOHPBARANIM_UPDATE_OFFSET UNITYSDK_OFFSET(0x9830510)
#define RPG_CLIENT_MONOHPBARANIM__CTOR_OFFSET UNITYSDK_OFFSET(0x9830810)
#define RPG_CLIENT_MONOHPBARANIM__INVOKETWEENHANDLER_OFFSET UNITYSDK_OFFSET(0x98307B0)
#define RPG_CLIENT_MONOHPBARANIM__SETFILLAMOUNT_OFFSET UNITYSDK_OFFSET(0x98303E0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoHPBarAnim_TypeDefinitionIndex = 57851;

	class MonoHPBarAnim : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::HPBar* HPBar; // 0x18
		::System::Single _from; // 0x20
		::System::Single _to; // 0x24
		::System::Single _duration; // 0x28
		::System::Boolean _updating; // 0x2C
		::System::Single _startTime; // 0x30
		::XLua::LuaTable* _LuaTable; // 0x38
		::System::Action_1<::XLua::LuaTable*>* _TweenHandler; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHPBARANIM__CTOR_OFFSET))(this);
		}

		::System::Void SetValueWithTween(::System::Single value, ::System::Single duration, ::System::Single delay)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHPBARANIM_SETVALUEWITHTWEEN_OFFSET))(this, value, duration, delay);
		}

		::System::Void SetValue(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHPBARANIM_SETVALUE_OFFSET))(this, value);
		}

		::System::Void AddTweenHandler(::System::Action_1<::XLua::LuaTable*>* handler, ::XLua::LuaTable* luaTable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::XLua::LuaTable*>*, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHPBARANIM_ADDTWEENHANDLER_OFFSET))(this, handler, luaTable);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHPBARANIM_UPDATE_OFFSET))(this);
		}

		::System::Void _SetFillAmount(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHPBARANIM__SETFILLAMOUNT_OFFSET))(this, value);
		}

		::System::Void _InvokeTweenHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOHPBARANIM__INVOKETWEENHANDLER_OFFSET))(this);
		}
	};
}

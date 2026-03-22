#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/XLua/LuaBase.h"

class Class_1_BD800F5B29A08E1F;
class Class_2_6BFAFA494F2D1E4B;
namespace RPG::GameCore { class ConsiderationAxisConfig; }
namespace XLua { class LuaEnv; }

#define XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE_RPG_CLIENT_ICONSIDERATIONAXISLUAHACK_END_SCORE_OFFSET UNITYSDK_OFFSET(0xF489CE0)
#define XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE_RPG_CLIENT_ICONSIDERATIONAXISLUAHACK_END_SETUP_OFFSET UNITYSDK_OFFSET(0xF48A7A0)
#define XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE_RPG_CLIENT_ICONSIDERATIONAXISLUAHACK_START_SCORE_OFFSET UNITYSDK_OFFSET(0xF489740)
#define XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE_RPG_CLIENT_ICONSIDERATIONAXISLUAHACK_START_SETUP_OFFSET UNITYSDK_OFFSET(0xF48A220)
#define XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE__CTOR_OFFSET UNITYSDK_OFFSET(0xF489730)
#define XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE___CREATE_OFFSET UNITYSDK_OFFSET(0xF4896E0)

namespace XLua::CSObjectWrap
{
	inline static constexpr unsigned int RPGClientIConsiderationAxisLuaHackBridge_TypeDefinitionIndex = 40745;

	class RPGClientIConsiderationAxisLuaHackBridge : public ::XLua::LuaBase
	{
	public:
		::System::Void _ctor(::System::Int32 reference, ::XLua::LuaEnv* luaenv)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE__CTOR_OFFSET))(this, reference, luaenv);
		}

		static ::XLua::LuaBase* __Create(::System::Int32 reference, ::XLua::LuaEnv* luaenv)
		{
			return ((::XLua::LuaBase*(*)(::System::Int32, ::XLua::LuaEnv*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE___CREATE_OFFSET))(reference, luaenv);
		}

		::System::Boolean RPG_Client_IConsiderationAxisLuaHack_start_score(::RPG::GameCore::ConsiderationAxisConfig* config, ::Class_1_BD800F5B29A08E1F* pContext, ::RPG::GameCore::FixPoint& result)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ConsiderationAxisConfig*, ::Class_1_BD800F5B29A08E1F*, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE_RPG_CLIENT_ICONSIDERATIONAXISLUAHACK_START_SCORE_OFFSET))(this, config, pContext, result);
		}

		::RPG::GameCore::FixPoint RPG_Client_IConsiderationAxisLuaHack_end_score(::RPG::GameCore::ConsiderationAxisConfig* config, ::Class_1_BD800F5B29A08E1F* pContext)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::ConsiderationAxisConfig*, ::Class_1_BD800F5B29A08E1F*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE_RPG_CLIENT_ICONSIDERATIONAXISLUAHACK_END_SCORE_OFFSET))(this, config, pContext);
		}

		::System::Boolean RPG_Client_IConsiderationAxisLuaHack_start_setup(::RPG::GameCore::ConsiderationAxisConfig* config, ::Class_2_6BFAFA494F2D1E4B* parent)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ConsiderationAxisConfig*, ::Class_2_6BFAFA494F2D1E4B*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE_RPG_CLIENT_ICONSIDERATIONAXISLUAHACK_START_SETUP_OFFSET))(this, config, parent);
		}

		::System::Void RPG_Client_IConsiderationAxisLuaHack_end_setup(::RPG::GameCore::ConsiderationAxisConfig* config, ::Class_2_6BFAFA494F2D1E4B* parent)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConsiderationAxisConfig*, ::Class_2_6BFAFA494F2D1E4B*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_RPGCLIENTICONSIDERATIONAXISLUAHACKBRIDGE_RPG_CLIENT_ICONSIDERATIONAXISLUAHACK_END_SETUP_OFFSET))(this, config, parent);
		}
	};
}

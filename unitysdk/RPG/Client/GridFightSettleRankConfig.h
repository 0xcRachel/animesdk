#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightSettleRankType.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GridFightSettleRankRow; }

#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x93F65F0)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_RANKNAME_OFFSET UNITYSDK_OFFSET(0x93F6650)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_RANK_LEFTINTERVAL_OFFSET UNITYSDK_OFFSET(0x93F6610)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_RANK_RIGHTINTERVAL_OFFSET UNITYSDK_OFFSET(0x93F6630)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_SETTLERANKTYPE_OFFSET UNITYSDK_OFFSET(0x93F6670)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_ID_OFFSET UNITYSDK_OFFSET(0x93F6600)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_RANKNAME_OFFSET UNITYSDK_OFFSET(0x93F6660)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_RANK_LEFTINTERVAL_OFFSET UNITYSDK_OFFSET(0x93F6620)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_RANK_RIGHTINTERVAL_OFFSET UNITYSDK_OFFSET(0x93F6640)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_SETTLERANKTYPE_OFFSET UNITYSDK_OFFSET(0x93F6680)
#define RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x93F65B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleRankConfig_TypeDefinitionIndex = 51812;

	class GridFightSettleRankConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightSettleRankType _SettleRankType_k__BackingField; // 0x10
		::System::UInt32 _Rank_RightInterval_k__BackingField; // 0x14
		::System::UInt32 _ID_k__BackingField; // 0x18
		::System::UInt32 _Rank_LeftInterval_k__BackingField; // 0x1C
		::RPG::Client::TextID _RankName_k__BackingField; // 0x20

		::System::Void _ctor(::RPG::GameCore::GridFightSettleRankRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightSettleRankRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG__CTOR_OFFSET))(this, row);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_ID_OFFSET))(this, value);
		}

		::System::UInt32 get_Rank_LeftInterval()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_RANK_LEFTINTERVAL_OFFSET))(this);
		}

		::System::Void set_Rank_LeftInterval(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_RANK_LEFTINTERVAL_OFFSET))(this, value);
		}

		::System::UInt32 get_Rank_RightInterval()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_RANK_RIGHTINTERVAL_OFFSET))(this);
		}

		::System::Void set_Rank_RightInterval(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_RANK_RIGHTINTERVAL_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_RankName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_RANKNAME_OFFSET))(this);
		}

		::System::Void set_RankName(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_RANKNAME_OFFSET))(this, value);
		}

		::RPG::GameCore::GridFightSettleRankType get_SettleRankType()
		{
			return ((::RPG::GameCore::GridFightSettleRankType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_GET_SETTLERANKTYPE_OFFSET))(this);
		}

		::System::Void set_SettleRankType(::RPG::GameCore::GridFightSettleRankType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightSettleRankType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERANKCONFIG_SET_SETTLERANKTYPE_OFFSET))(this, value);
		}
	};
}

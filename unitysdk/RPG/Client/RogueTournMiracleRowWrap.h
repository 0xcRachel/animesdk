#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMiracleCategory.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RogueTournMiracleRow; }

#define RPG_CLIENT_ROGUETOURNMIRACLEROWWRAP_CREATE_OFFSET UNITYSDK_OFFSET(0x175621A0)
#define RPG_CLIENT_ROGUETOURNMIRACLEROWWRAP_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x17562250)
#define RPG_CLIENT_ROGUETOURNMIRACLEROWWRAP_GET_MIRACLEDISPLAYID_OFFSET UNITYSDK_OFFSET(0x17562390)
#define RPG_CLIENT_ROGUETOURNMIRACLEROWWRAP_GET_MIRACLEEFFECTID_OFFSET UNITYSDK_OFFSET(0x17562400)
#define RPG_CLIENT_ROGUETOURNMIRACLEROWWRAP_GET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0x17562320)
#define RPG_CLIENT_ROGUETOURNMIRACLEROWWRAP_GET__ROW_OFFSET UNITYSDK_OFFSET(0x175622C0)
#define RPG_CLIENT_ROGUETOURNMIRACLEROWWRAP__CTOR_OFFSET UNITYSDK_OFFSET(0x17562190)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournMiracleRowWrap_TypeDefinitionIndex = 61994;

	class RogueTournMiracleRowWrap : public ::System::Object
	{
	public:
		::System::UInt32 _MiracleID; // 0x10

		::System::Void _ctor(::System::UInt32 miracleID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEROWWRAP__CTOR_OFFSET))(this, miracleID);
		}

		static ::RPG::Client::RogueTournMiracleRowWrap* Create(::System::UInt32 miracleID)
		{
			return ((::RPG::Client::RogueTournMiracleRowWrap*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEROWWRAP_CREATE_OFFSET))(miracleID);
		}

		::RPG::GameCore::RogueMiracleCategory get_Category()
		{
			return ((::RPG::GameCore::RogueMiracleCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEROWWRAP_GET_CATEGORY_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournMode get_TournMode()
		{
			return ((::RPG::GameCore::RogueTournMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEROWWRAP_GET_TOURNMODE_OFFSET))(this);
		}

		::System::UInt32 get_MiracleDisplayID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEROWWRAP_GET_MIRACLEDISPLAYID_OFFSET))(this);
		}

		::System::UInt32 get_MiracleEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEROWWRAP_GET_MIRACLEEFFECTID_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournMiracleRow* get__Row()
		{
			return ((::RPG::GameCore::RogueTournMiracleRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNMIRACLEROWWRAP_GET__ROW_OFFSET))(this);
		}
	};
}

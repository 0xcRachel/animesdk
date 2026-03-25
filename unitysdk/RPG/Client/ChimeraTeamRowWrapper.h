#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ChimeraTeamRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_CHIMERATEAMROWWRAPPER_CREATE_OFFSET UNITYSDK_OFFSET(0x93E4240)
#define RPG_CLIENT_CHIMERATEAMROWWRAPPER_GET_ROUNDTALKMAP_OFFSET UNITYSDK_OFFSET(0x93E4A60)
#define RPG_CLIENT_CHIMERATEAMROWWRAPPER_GET_TEAMAVATARICON_OFFSET UNITYSDK_OFFSET(0x93E4450)
#define RPG_CLIENT_CHIMERATEAMROWWRAPPER_GET_TEAMCONFIGJSON_OFFSET UNITYSDK_OFFSET(0x93E4C60)
#define RPG_CLIENT_CHIMERATEAMROWWRAPPER_GET_TEAMICON_OFFSET UNITYSDK_OFFSET(0x93E43E0)
#define RPG_CLIENT_CHIMERATEAMROWWRAPPER_GET_TEAMID_OFFSET UNITYSDK_OFFSET(0x93E4BE0)
#define RPG_CLIENT_CHIMERATEAMROWWRAPPER_GET_TEAMNAME_OFFSET UNITYSDK_OFFSET(0x93E4300)
#define RPG_CLIENT_CHIMERATEAMROWWRAPPER_GET__ROW_OFFSET UNITYSDK_OFFSET(0x93E4C00)
#define RPG_CLIENT_CHIMERATEAMROWWRAPPER_SET_TEAMID_OFFSET UNITYSDK_OFFSET(0x93E4BF0)
#define RPG_CLIENT_CHIMERATEAMROWWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x93E4BD0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraTeamRowWrapper_TypeDefinitionIndex = 51517;

	class ChimeraTeamRowWrapper : public ::System::Object
	{
	public:
		::System::UInt32 _TeamID_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMROWWRAPPER__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraTeamRowWrapper* Create(::System::UInt32 teamID)
		{
			return ((::RPG::Client::ChimeraTeamRowWrapper*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMROWWRAPPER_CREATE_OFFSET))(teamID);
		}

		::System::UInt32 get_TeamID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMROWWRAPPER_GET_TEAMID_OFFSET))(this);
		}

		::System::Void set_TeamID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMROWWRAPPER_SET_TEAMID_OFFSET))(this, value);
		}

		::System::String* get_TeamIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMROWWRAPPER_GET_TEAMICON_OFFSET))(this);
		}

		::System::String* get_TeamAvatarIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMROWWRAPPER_GET_TEAMAVATARICON_OFFSET))(this);
		}

		::RPG::Client::TextID get_TeamName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMROWWRAPPER_GET_TEAMNAME_OFFSET))(this);
		}

		::System::String* get_TeamConfigJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMROWWRAPPER_GET_TEAMCONFIGJSON_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_RoundTalkMap()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMROWWRAPPER_GET_ROUNDTALKMAP_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraTeamRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraTeamRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERATEAMROWWRAPPER_GET__ROW_OFFSET))(this);
		}
	};
}

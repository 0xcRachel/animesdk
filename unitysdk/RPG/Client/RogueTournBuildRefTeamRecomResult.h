#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_684;
class Class_0_16E4307DCC419505_685;
namespace RPG::Client { class IRogueTournBuildRefTeamMemberData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_CLEAR_OFFSET UNITYSDK_OFFSET(0x9E65A90)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E62460)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_GET_RECOMMEMBERS_OFFSET UNITYSDK_OFFSET(0x9E65D00)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_INIT_OFFSET UNITYSDK_OFFSET(0x9E65C40)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_ISVALIDMEMBER_OFFSET UNITYSDK_OFFSET(0x9E65CA0)
#define RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x9E65A40)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournBuildRefTeamRecomResult_TypeDefinitionIndex = 53690;

	class RogueTournBuildRefTeamRecomResult : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_684* _Strategy; // 0x10
		::System::Collections::Generic::IList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>* _RecomMembers_k__BackingField; // 0x18
		::Class_0_16E4307DCC419505_685* _Context; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT__CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_DISPOSE_OFFSET))(this);
		}

		::System::Void Init(::Class_0_16E4307DCC419505_684* strategy, ::Class_0_16E4307DCC419505_685* context)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_684*, ::Class_0_16E4307DCC419505_685*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_INIT_OFFSET))(this, strategy, context);
		}

		::System::Boolean IsValidMember(::RPG::Client::IRogueTournBuildRefTeamMemberData* member)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IRogueTournBuildRefTeamMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_ISVALIDMEMBER_OFFSET))(this, member);
		}

		::System::Collections::Generic::IList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>* get_RecomMembers()
		{
			return ((::System::Collections::Generic::IList_1<::RPG::Client::IRogueTournBuildRefTeamMemberData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNBUILDREFTEAMRECOMRESULT_GET_RECOMMEMBERS_OFFSET))(this);
		}
	};
}

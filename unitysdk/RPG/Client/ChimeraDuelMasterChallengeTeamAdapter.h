#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ChimeraDuelChallengeGameSession; }
namespace RPG::Client { class ChimeraDuelMasterData; }
namespace RPG::Client { class ChimeraDuelPvpTeamSnapshot; }
namespace RPG::Client::LittleGame::ChimeraDuel { class ChimeraDuelChimeraCache; }
namespace RPG::GameCore { class ChimeraDuelMasterChallengeRow; }
namespace RPG::GameCore { class ChimeraDuelRankRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_COMPARETO_OFFSET UNITYSDK_OFFSET(0x8F14CA0)
#define RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_DOCHALLENGE_OFFSET UNITYSDK_OFFSET(0x8F14A50)
#define RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_GET_CHIMERAS_OFFSET UNITYSDK_OFFSET(0x8F14620)
#define RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_GET_DESC_OFFSET UNITYSDK_OFFSET(0x8F14610)
#define RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_GET_FRIENDCHALLENGEMASTERICON_OFFSET UNITYSDK_OFFSET(0x8F14500)
#define RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_GET_HEADICON_OFFSET UNITYSDK_OFFSET(0x8F14480)
#define RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x8F14870)
#define RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_GET_MASTERFIGURE_OFFSET UNITYSDK_OFFSET(0x8F144F0)
#define RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_GET_MASTERID_OFFSET UNITYSDK_OFFSET(0x8F14800)
#define RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_GET_NAME_OFFSET UNITYSDK_OFFSET(0x8F14460)
#define RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_GET_RANKICON_OFFSET UNITYSDK_OFFSET(0x8F14520)
#define RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_GET_RANKLEVEL_OFFSET UNITYSDK_OFFSET(0x8F14510)
#define RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_GET_RANKNAME_OFFSET UNITYSDK_OFFSET(0x8F14590)
#define RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_GET__MASTERDATA_OFFSET UNITYSDK_OFFSET(0x8F14350)
#define RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_GET__RANKROW_OFFSET UNITYSDK_OFFSET(0x8F14290)
#define RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_GET__ROW_OFFSET UNITYSDK_OFFSET(0x8F142F0)
#define RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER__CTOR_OFFSET UNITYSDK_OFFSET(0x8EFCE50)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelMasterChallengeTeamAdapter_TypeDefinitionIndex = 50237;

	class ChimeraDuelMasterChallengeTeamAdapter : public ::System::Object
	{
	public:
		::RPG::Client::ChimeraDuelChallengeGameSession* _Session; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* _Chimeras; // 0x18
		::System::UInt32 _ChallengeID; // 0x20
		::System::UInt32 _RankID; // 0x24

		::System::Void _ctor(::RPG::GameCore::ChimeraDuelMasterChallengeRow* row, ::RPG::Client::ChimeraDuelChallengeGameSession* session)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraDuelMasterChallengeRow*, ::RPG::Client::ChimeraDuelChallengeGameSession*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER__CTOR_OFFSET))(this, row, session);
		}

		::RPG::GameCore::ChimeraDuelRankRow* get__RankRow()
		{
			return ((::RPG::GameCore::ChimeraDuelRankRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_GET__RANKROW_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraDuelMasterChallengeRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraDuelMasterChallengeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_GET__ROW_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelMasterData* get__MasterData()
		{
			return ((::RPG::Client::ChimeraDuelMasterData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_GET__MASTERDATA_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_GET_NAME_OFFSET))(this);
		}

		::System::String* get_HeadIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_GET_HEADICON_OFFSET))(this);
		}

		::System::String* get_MasterFigure()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_GET_MASTERFIGURE_OFFSET))(this);
		}

		::System::String* get_FriendChallengeMasterIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_GET_FRIENDCHALLENGEMASTERICON_OFFSET))(this);
		}

		::System::UInt32 get_RankLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_GET_RANKLEVEL_OFFSET))(this);
		}

		::System::String* get_RankIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_GET_RANKICON_OFFSET))(this);
		}

		::RPG::Client::TextID get_RankName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_GET_RANKNAME_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_GET_DESC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>* get_Chimeras()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::LittleGame::ChimeraDuel::ChimeraDuelChimeraCache*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_GET_CHIMERAS_OFFSET))(this);
		}

		::System::UInt32 get_MasterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_GET_MASTERID_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Void DoChallenge(::RPG::Client::ChimeraDuelPvpTeamSnapshot* snapshot)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraDuelPvpTeamSnapshot*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_DOCHALLENGE_OFFSET))(this, snapshot);
		}

		::System::Int32 CompareTo(::RPG::Client::ChimeraDuelMasterChallengeTeamAdapter* other)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChimeraDuelMasterChallengeTeamAdapter*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELMASTERCHALLENGETEAMADAPTER_COMPARETO_OFFSET))(this, other);
		}
	};
}

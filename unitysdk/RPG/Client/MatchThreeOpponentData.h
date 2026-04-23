#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MatchThreeOpponentType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_F3CA30716D4FAF92_2;
namespace RPG::Client { class IMatchThreeBirdData; }
namespace RPG::Client { class IMatchThreePropData; }
namespace RPG::Client { class LobbyMemberData; }
namespace RPG::GameCore { class MatchThreeOpponentRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEAIOPPONENT_OFFSET UNITYSDK_OFFSET(0x17EE52A0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATELOBBYMEMBEROPPONENTDATA_OFFSET UNITYSDK_OFFSET(0x17EDFBE0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEONEONONEAIOPPONENT_OFFSET UNITYSDK_OFFSET(0x17EED520)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEONEONONEOPPONENT_OFFSET UNITYSDK_OFFSET(0x17EECDA0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEONEONONESELFOPPONENT_OFFSET UNITYSDK_OFFSET(0x17EED020)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEPVESELFPLAYEROPPONENT_OFFSET UNITYSDK_OFFSET(0x17EEC850)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_BIRD_OFFSET UNITYSDK_OFFSET(0x17EED920)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_HEADICON_OFFSET UNITYSDK_OFFSET(0x17EED9D0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_HEADIMAGE_OFFSET UNITYSDK_OFFSET(0x17EED9F0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_ISAI_OFFSET UNITYSDK_OFFSET(0x17EEDAA0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_ISPSN_OFFSET UNITYSDK_OFFSET(0x17EEDAC0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_ISSELF_OFFSET UNITYSDK_OFFSET(0x17EEDAB0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x17EEDA60)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_LOBBYMEMBERDATA_OFFSET UNITYSDK_OFFSET(0x17EEDA80)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17EED940)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_OPPONENTID_OFFSET UNITYSDK_OFFSET(0x17EED900)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_OPPONENTROW_OFFSET UNITYSDK_OFFSET(0x17EEC7F0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_PLATFORMID_OFFSET UNITYSDK_OFFSET(0x17EEDB50)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_RANK_OFFSET UNITYSDK_OFFSET(0x17EEDBC0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_ROBOTSTRENGTH_OFFSET UNITYSDK_OFFSET(0x17EEDBE0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x17EED8E0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_UID_OFFSET UNITYSDK_OFFSET(0x17EE3B10)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_BIRD_OFFSET UNITYSDK_OFFSET(0x17EED930)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_HEADICON_OFFSET UNITYSDK_OFFSET(0x17EED9E0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x17EEDA70)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_LOBBYMEMBERDATA_OFFSET UNITYSDK_OFFSET(0x17EEDA90)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_OPPONENTID_OFFSET UNITYSDK_OFFSET(0x17EED910)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_RANK_OFFSET UNITYSDK_OFFSET(0x17EEDBD0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_ROBOTSTRENGTH_OFFSET UNITYSDK_OFFSET(0x17EEDBF0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x17EED8F0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA_SYNCBYLOBBYMEMBERDATA_OFFSET UNITYSDK_OFFSET(0x17EE6CD0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17EEC7B0)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA__GETEXTRAINFOCOMMONDATA_OFFSET UNITYSDK_OFFSET(0x17EED700)
#define RPG_CLIENT_MATCHTHREEOPPONENTDATA__GETPVEHEADICON_OFFSET UNITYSDK_OFFSET(0x17EECC00)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeOpponentData_TypeDefinitionIndex = 60739;

	class MatchThreeOpponentData : public ::System::Object
	{
	public:
		::RPG::Client::IMatchThreeBirdData* _Bird_k__BackingField; // 0x10
		::RPG::Client::LobbyMemberData* _LobbyMemberData_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>* PropDatas; // 0x20
		::System::String* _Name; // 0x28
		::System::String* _HeadIcon_k__BackingField; // 0x30
		::System::UInt32 _OpponentID_k__BackingField; // 0x38
		::System::UInt32 _Rank_k__BackingField; // 0x3C
		::RPG::Client::TextID _NameTextID; // 0x40
		::RPG::Client::MatchThreeOpponentType _Type_k__BackingField; // 0x50
		::System::UInt32 _Level_k__BackingField; // 0x54
		::System::UInt32 _RobotStrength_k__BackingField; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MatchThreeOpponentData* CreateAIOpponent(::System::UInt32 opponentID, ::System::UInt32 birdID)
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEAIOPPONENT_OFFSET))(opponentID, birdID);
		}

		static ::RPG::Client::MatchThreeOpponentData* CreateLobbyMemberOpponentData(::RPG::Client::LobbyMemberData* lobbyMemberData)
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATELOBBYMEMBEROPPONENTDATA_OFFSET))(lobbyMemberData);
		}

		static ::RPG::Client::MatchThreeOpponentData* CreatePVESelfPlayerOpponent(::System::UInt32 opponentID, ::System::UInt32 birdID)
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEPVESELFPLAYEROPPONENT_OFFSET))(opponentID, birdID);
		}

		static ::RPG::Client::MatchThreeOpponentData* CreateOneOnOneOpponent(::System::UInt32 birdID, ::System::Boolean isSelf, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>* propIDs)
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::System::UInt32, ::System::Boolean, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEONEONONEOPPONENT_OFFSET))(birdID, isSelf, propIDs);
		}

		static ::RPG::Client::MatchThreeOpponentData* CreateOneOnOneSelfOpponent(::System::UInt32 birdID, ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>* propDatas, ::System::UInt32 playerID)
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEONEONONESELFOPPONENT_OFFSET))(birdID, propDatas, playerID);
		}

		static ::RPG::Client::MatchThreeOpponentData* CreateOneOnOneAIOpponent(::System::UInt32 opponentID, ::System::UInt32 birdID, ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>* propDatas)
		{
			return ((::RPG::Client::MatchThreeOpponentData*(*)(::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::IMatchThreePropData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_CREATEONEONONEAIOPPONENT_OFFSET))(opponentID, birdID, propDatas);
		}

		::System::Void SyncByLobbyMemberData(::RPG::Client::LobbyMemberData* lobbyMemberData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_SYNCBYLOBBYMEMBERDATA_OFFSET))(this, lobbyMemberData);
		}

		::Class_1_F3CA30716D4FAF92_2* _GetExtraInfoCommonData(::RPG::Client::LobbyMemberData* lobbyMemberData)
		{
			return ((::Class_1_F3CA30716D4FAF92_2*(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA__GETEXTRAINFOCOMMONDATA_OFFSET))(this, lobbyMemberData);
		}

		::System::String* _GetPVEHeadIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA__GETPVEHEADICON_OFFSET))(this);
		}

		::RPG::Client::MatchThreeOpponentType get_Type()
		{
			return ((::RPG::Client::MatchThreeOpponentType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPG::Client::MatchThreeOpponentType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeOpponentType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_TYPE_OFFSET))(this, value);
		}

		::System::UInt32 get_OpponentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_OPPONENTID_OFFSET))(this);
		}

		::System::Void set_OpponentID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_OPPONENTID_OFFSET))(this, value);
		}

		::RPG::Client::IMatchThreeBirdData* get_Bird()
		{
			return ((::RPG::Client::IMatchThreeBirdData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_BIRD_OFFSET))(this);
		}

		::System::Void set_Bird(::RPG::Client::IMatchThreeBirdData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IMatchThreeBirdData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_BIRD_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_UID_OFFSET))(this);
		}

		::System::String* get_HeadIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_HEADICON_OFFSET))(this);
		}

		::System::Void set_HeadIcon(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_HEADICON_OFFSET))(this, value);
		}

		::System::String* get_HeadImage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_HEADIMAGE_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_LEVEL_OFFSET))(this, value);
		}

		::RPG::GameCore::MatchThreeOpponentRow* get_OpponentRow()
		{
			return ((::RPG::GameCore::MatchThreeOpponentRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_OPPONENTROW_OFFSET))(this);
		}

		::RPG::Client::LobbyMemberData* get_LobbyMemberData()
		{
			return ((::RPG::Client::LobbyMemberData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_LOBBYMEMBERDATA_OFFSET))(this);
		}

		::System::Void set_LobbyMemberData(::RPG::Client::LobbyMemberData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LobbyMemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_LOBBYMEMBERDATA_OFFSET))(this, value);
		}

		::System::Boolean get_IsAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_ISAI_OFFSET))(this);
		}

		::System::Boolean get_IsSelf()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_ISSELF_OFFSET))(this);
		}

		::System::Boolean get_IsPSN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_ISPSN_OFFSET))(this);
		}

		::System::String* get_PlatformID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_PLATFORMID_OFFSET))(this);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_RANK_OFFSET))(this, value);
		}

		::System::UInt32 get_RobotStrength()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_GET_ROBOTSTRENGTH_OFFSET))(this);
		}

		::System::Void set_RobotStrength(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEOPPONENTDATA_SET_ROBOTSTRENGTH_OFFSET))(this, value);
		}
	};
}

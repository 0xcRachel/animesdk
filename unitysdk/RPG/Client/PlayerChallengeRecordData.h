#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleRecordDisplayType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_D40936EF3BF54118_8;
class Class_1_F5046AC8E8B0D181;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::GameCore { class ChallengeGroupConfigRow; }
namespace RPG::GameCore { class ChallengeMazeConfigRow; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_BATTLECOUNT_OFFSET UNITYSDK_OFFSET(0x17DE0500)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGEBUFFID1_OFFSET UNITYSDK_OFFSET(0x17DE0580)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGEBUFFID2_OFFSET UNITYSDK_OFFSET(0x17DE05A0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGEID_OFFSET UNITYSDK_OFFSET(0x17DE0250)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGEMEMBERS1_OFFSET UNITYSDK_OFFSET(0x17DE05C0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGEMEMBERS2_OFFSET UNITYSDK_OFFSET(0x17DE05E0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGENAME_OFFSET UNITYSDK_OFFSET(0x17DE03D0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGEROW_OFFSET UNITYSDK_OFFSET(0x17DE02F0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGESCORE_OFFSET UNITYSDK_OFFSET(0x17DE0520)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGESTARCOUNT_OFFSET UNITYSDK_OFFSET(0x17DE0560)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGETURN_OFFSET UNITYSDK_OFFSET(0x17DE0540)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CURRENTPROGRESSCOUNT_OFFSET UNITYSDK_OFFSET(0x17DE04C0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CURRENTSTARCOUNT_OFFSET UNITYSDK_OFFSET(0x17DE04E0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x17DE06C0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x17DE0230)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_GROUPNAME_OFFSET UNITYSDK_OFFSET(0x17DE0350)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_GROUPROW_OFFSET UNITYSDK_OFFSET(0x17DE0290)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x17DE0270)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_HASRECORD_OFFSET UNITYSDK_OFFSET(0x17DE01D0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_ISNEWUPDATE_OFFSET UNITYSDK_OFFSET(0x17DE0600)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_TOTALPROGRESSCOUNT_OFFSET UNITYSDK_OFFSET(0x17DE0450)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_TOTALSTARCOUNT_OFFSET UNITYSDK_OFFSET(0x17DE0470)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_BATTLECOUNT_OFFSET UNITYSDK_OFFSET(0x17DE0510)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGEBUFFID1_OFFSET UNITYSDK_OFFSET(0x17DE0590)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGEBUFFID2_OFFSET UNITYSDK_OFFSET(0x17DE05B0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGEID_OFFSET UNITYSDK_OFFSET(0x17DE0260)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGEMEMBERS1_OFFSET UNITYSDK_OFFSET(0x17DE05D0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGEMEMBERS2_OFFSET UNITYSDK_OFFSET(0x17DE05F0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGESCORE_OFFSET UNITYSDK_OFFSET(0x17DE0530)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGESTARCOUNT_OFFSET UNITYSDK_OFFSET(0x17DE0570)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGETURN_OFFSET UNITYSDK_OFFSET(0x17DE0550)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CURRENTPROGRESSCOUNT_OFFSET UNITYSDK_OFFSET(0x17DE04D0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CURRENTSTARCOUNT_OFFSET UNITYSDK_OFFSET(0x17DE04F0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x17DE0240)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_GROUPTYPE_OFFSET UNITYSDK_OFFSET(0x17DE0280)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_TOTALPROGRESSCOUNT_OFFSET UNITYSDK_OFFSET(0x17DE0460)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x17DDC9A0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17DDBFC0)
#define RPG_CLIENT_PLAYERCHALLENGERECORDDATA__SYNCLINEUP_OFFSET UNITYSDK_OFFSET(0x17DDC130)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerChallengeRecordData_TypeDefinitionIndex = 59139;

	class PlayerChallengeRecordData : public ::System::Object
	{
	public:
		// static const ::System::Int32 MAX_CHALLENGE_STAR = 0x3; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* _ChallengeMembers1_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* _ChallengeMembers2_k__BackingField; // 0x18
		::System::UInt32 _ChallengeID_k__BackingField; // 0x20
		::System::UInt32 _ChallengeTurn_k__BackingField; // 0x24
		::System::UInt32 _ChallengeStarCount_k__BackingField; // 0x28
		::System::Int32 _CurrentStarCount_k__BackingField; // 0x2C
		::System::UInt32 _BattleCount_k__BackingField; // 0x30
		::System::Int32 _CurrentProgressCount_k__BackingField; // 0x34
		::RPG::GameCore::ChallengeGroupType _GroupType_k__BackingField; // 0x38
		::System::UInt32 _ChallengeBuffID1_k__BackingField; // 0x3C
		::System::UInt32 _ChallengeScore_k__BackingField; // 0x40
		::System::Int32 _TotalProgressCount_k__BackingField; // 0x44
		::System::UInt32 _ChallengeBuffID2_k__BackingField; // 0x48
		::System::UInt32 _GroupID_k__BackingField; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA__CTOR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_F5046AC8E8B0D181* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F5046AC8E8B0D181*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SYNC_OFFSET))(this, info);
		}

		::System::Void _SyncLineup(::System::Collections::Generic::IList_1<::Class_1_D40936EF3BF54118_8*>* lineups)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_D40936EF3BF54118_8*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA__SYNCLINEUP_OFFSET))(this, lineups);
		}

		::System::Boolean get_HasRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_HASRECORD_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_GROUPID_OFFSET))(this, value);
		}

		::System::UInt32 get_ChallengeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGEID_OFFSET))(this);
		}

		::System::Void set_ChallengeID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGEID_OFFSET))(this, value);
		}

		::RPG::GameCore::ChallengeGroupType get_GroupType()
		{
			return ((::RPG::GameCore::ChallengeGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_GROUPTYPE_OFFSET))(this);
		}

		::System::Void set_GroupType(::RPG::GameCore::ChallengeGroupType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_GROUPTYPE_OFFSET))(this, value);
		}

		::RPG::GameCore::ChallengeGroupConfigRow* get_GroupRow()
		{
			return ((::RPG::GameCore::ChallengeGroupConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_GROUPROW_OFFSET))(this);
		}

		::RPG::GameCore::ChallengeMazeConfigRow* get_ChallengeRow()
		{
			return ((::RPG::GameCore::ChallengeMazeConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGEROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_GroupName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_GROUPNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_ChallengeName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGENAME_OFFSET))(this);
		}

		::System::Int32 get_TotalProgressCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_TOTALPROGRESSCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalProgressCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_TOTALPROGRESSCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_TotalStarCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_TOTALSTARCOUNT_OFFSET))(this);
		}

		::System::Int32 get_CurrentProgressCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CURRENTPROGRESSCOUNT_OFFSET))(this);
		}

		::System::Void set_CurrentProgressCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CURRENTPROGRESSCOUNT_OFFSET))(this, value);
		}

		::System::Int32 get_CurrentStarCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CURRENTSTARCOUNT_OFFSET))(this);
		}

		::System::Void set_CurrentStarCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CURRENTSTARCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_BattleCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_BATTLECOUNT_OFFSET))(this);
		}

		::System::Void set_BattleCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_BATTLECOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_ChallengeScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGESCORE_OFFSET))(this);
		}

		::System::Void set_ChallengeScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGESCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_ChallengeTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGETURN_OFFSET))(this);
		}

		::System::Void set_ChallengeTurn(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGETURN_OFFSET))(this, value);
		}

		::System::UInt32 get_ChallengeStarCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGESTARCOUNT_OFFSET))(this);
		}

		::System::Void set_ChallengeStarCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGESTARCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_ChallengeBuffID1()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGEBUFFID1_OFFSET))(this);
		}

		::System::Void set_ChallengeBuffID1(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGEBUFFID1_OFFSET))(this, value);
		}

		::System::UInt32 get_ChallengeBuffID2()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGEBUFFID2_OFFSET))(this);
		}

		::System::Void set_ChallengeBuffID2(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGEBUFFID2_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* get_ChallengeMembers1()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGEMEMBERS1_OFFSET))(this);
		}

		::System::Void set_ChallengeMembers1(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGEMEMBERS1_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* get_ChallengeMembers2()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_CHALLENGEMEMBERS2_OFFSET))(this);
		}

		::System::Void set_ChallengeMembers2(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_SET_CHALLENGEMEMBERS2_OFFSET))(this, value);
		}

		::System::Boolean get_IsNewUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_ISNEWUPDATE_OFFSET))(this);
		}

		::RPG::Client::BattleRecordDisplayType get_DisplayType()
		{
			return ((::RPG::Client::BattleRecordDisplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGERECORDDATA_GET_DISPLAYTYPE_OFFSET))(this);
		}
	};
}

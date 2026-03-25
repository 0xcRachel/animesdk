#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengePeakRank.h"
#include "unitysdk/System/Object.h"

class Class_1_E577B5580A99D425_2;
class Class_1_E7C4009BCC22497A_3;
namespace RPG::Client { class ChallengePeakBoss; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_BUILDLOCALDATA_OFFSET UNITYSDK_OFFSET(0x9FEBC60)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GETRANK_OFFSET UNITYSDK_OFFSET(0x9FEC190)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_CHALLENGEAVATARDATALIST_OFFSET UNITYSDK_OFFSET(0x9FEC3A0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_CHALLENGEPEAKBOSS_OFFSET UNITYSDK_OFFSET(0x9FEC430)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_DISPLAYSTARNUM_OFFSET UNITYSDK_OFFSET(0x9FEC2C0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_EASYBOSSFINISHEDTARGETIDLIST_OFFSET UNITYSDK_OFFSET(0x9FEC340)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_EASYBOSSMAXSTARS_OFFSET UNITYSDK_OFFSET(0x9FEC230)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_ISCLEAR_OFFSET UNITYSDK_OFFSET(0x9FEC360)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_ISCOLORMEDALGOT_OFFSET UNITYSDK_OFFSET(0x9FEC380)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_ISHARDPASS_OFFSET UNITYSDK_OFFSET(0x9FEC2A0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_MAXLEFTTURN_OFFSET UNITYSDK_OFFSET(0x9FEC3E0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_MAXSTARCOUNT_OFFSET UNITYSDK_OFFSET(0x9FEC420)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_MINUSETURN_OFFSET UNITYSDK_OFFSET(0x9FEC400)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_PEAKID_OFFSET UNITYSDK_OFFSET(0x9FEC280)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_TEAMMAZEBUFFID_OFFSET UNITYSDK_OFFSET(0x9FEC3C0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_CHALLENGEAVATARDATALIST_OFFSET UNITYSDK_OFFSET(0x9FEC3B0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_CHALLENGEPEAKBOSS_OFFSET UNITYSDK_OFFSET(0x9FEC440)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_EASYBOSSFINISHEDTARGETIDLIST_OFFSET UNITYSDK_OFFSET(0x9FEC350)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_ISCLEAR_OFFSET UNITYSDK_OFFSET(0x9FEC370)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_ISCOLORMEDALGOT_OFFSET UNITYSDK_OFFSET(0x9FEC390)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_ISHARDPASS_OFFSET UNITYSDK_OFFSET(0x9FEC2B0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_MAXLEFTTURN_OFFSET UNITYSDK_OFFSET(0x9FEC3F0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_MINUSETURN_OFFSET UNITYSDK_OFFSET(0x9FEC410)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_PEAKID_OFFSET UNITYSDK_OFFSET(0x9FEC290)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_TEAMMAZEBUFFID_OFFSET UNITYSDK_OFFSET(0x9FEC3D0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9FEBCD0)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9FEC450)
#define RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA__SYNCLINEUP_OFFSET UNITYSDK_OFFSET(0x9FEBE60)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerChallengePeakRecordBossData_TypeDefinitionIndex = 52179;

	class PlayerChallengePeakRecordBossData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _MaxStarCount = 0x3; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* _ChallengeAvatarDataList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _EasyBossFinishedTargetIDList_k__BackingField; // 0x18
		::RPG::Client::ChallengePeakBoss* _ChallengePeakBoss_k__BackingField; // 0x20
		::System::UInt32 _TeamMazeBuffID_k__BackingField; // 0x28
		::System::UInt32 _MinUseTurn_k__BackingField; // 0x2C
		::System::UInt32 _MaxLeftTurn_k__BackingField; // 0x30
		::System::Boolean _IsClear_k__BackingField; // 0x34
		::System::Boolean _IsColorMedalGot_k__BackingField; // 0x35
		::System::Boolean _IsHardPass_k__BackingField; // 0x36
		::System::UInt32 _PeakID_k__BackingField; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA__CTOR_OFFSET))(this);
		}

		::System::Void BuildLocalData(::RPG::Client::ChallengePeakBoss* peak)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakBoss*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_BUILDLOCALDATA_OFFSET))(this, peak);
		}

		::System::Void Sync(::Class_1_E577B5580A99D425_2* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E577B5580A99D425_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SYNC_OFFSET))(this, proto);
		}

		::RPG::Client::ChallengePeakRank GetRank()
		{
			return ((::RPG::Client::ChallengePeakRank(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GETRANK_OFFSET))(this);
		}

		::System::UInt32 get_PeakID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_PEAKID_OFFSET))(this);
		}

		::System::Void set_PeakID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_PEAKID_OFFSET))(this, value);
		}

		::System::Boolean get_IsHardPass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_ISHARDPASS_OFFSET))(this);
		}

		::System::Void set_IsHardPass(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_ISHARDPASS_OFFSET))(this, value);
		}

		::System::UInt32 get_EasyBossMaxStars()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_EASYBOSSMAXSTARS_OFFSET))(this);
		}

		::System::UInt32 get_DisplayStarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_DISPLAYSTARNUM_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EasyBossFinishedTargetIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_EASYBOSSFINISHEDTARGETIDLIST_OFFSET))(this);
		}

		::System::Void set_EasyBossFinishedTargetIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_EASYBOSSFINISHEDTARGETIDLIST_OFFSET))(this, value);
		}

		::System::Boolean get_IsClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_ISCLEAR_OFFSET))(this);
		}

		::System::Void set_IsClear(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_ISCLEAR_OFFSET))(this, value);
		}

		::System::Boolean get_IsColorMedalGot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_ISCOLORMEDALGOT_OFFSET))(this);
		}

		::System::Void set_IsColorMedalGot(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_ISCOLORMEDALGOT_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* get_ChallengeAvatarDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_CHALLENGEAVATARDATALIST_OFFSET))(this);
		}

		::System::Void set_ChallengeAvatarDataList(::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_CHALLENGEAVATARDATALIST_OFFSET))(this, value);
		}

		::System::UInt32 get_TeamMazeBuffID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_TEAMMAZEBUFFID_OFFSET))(this);
		}

		::System::Void set_TeamMazeBuffID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_TEAMMAZEBUFFID_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxLeftTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_MAXLEFTTURN_OFFSET))(this);
		}

		::System::Void set_MaxLeftTurn(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_MAXLEFTTURN_OFFSET))(this, value);
		}

		::System::UInt32 get_MinUseTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_MINUSETURN_OFFSET))(this);
		}

		::System::Void set_MinUseTurn(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_MINUSETURN_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxStarCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_MAXSTARCOUNT_OFFSET))(this);
		}

		::RPG::Client::ChallengePeakBoss* get_ChallengePeakBoss()
		{
			return ((::RPG::Client::ChallengePeakBoss*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_GET_CHALLENGEPEAKBOSS_OFFSET))(this);
		}

		::System::Void set_ChallengePeakBoss(::RPG::Client::ChallengePeakBoss* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakBoss*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA_SET_CHALLENGEPEAKBOSS_OFFSET))(this, value);
		}

		::System::Void _SyncLineup(::Class_1_E7C4009BCC22497A_3* lineup)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E7C4009BCC22497A_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERCHALLENGEPEAKRECORDBOSSDATA__SYNCLINEUP_OFFSET))(this, lineup);
		}
	};
}

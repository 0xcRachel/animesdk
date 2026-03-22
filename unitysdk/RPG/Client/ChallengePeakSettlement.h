#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengePeakRank.h"
#include "unitysdk/System/Object.h"

class Class_1_325963497EC7CBB4;
namespace RPG::Client { class ChallengePeak; }
namespace RPG::Client { class ChallengePeakBoss; }
namespace RPG::Client { class ChallengeSettleConfirmation; }
namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_CREATE_OFFSET UNITYSDK_OFFSET(0x8E91300)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GETREWARDITEMBYINDEX_OFFSET UNITYSDK_OFFSET(0x8E97C10)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GETSETTLERANK_OFFSET UNITYSDK_OFFSET(0x8E97CC0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_CHALLENGEPEAKBOSS_OFFSET UNITYSDK_OFFSET(0x8E974E0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_CHALLENGEPEAKNORMAL_OFFSET UNITYSDK_OFFSET(0x8E974C0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_COUNTOFREWARDS_OFFSET UNITYSDK_OFFSET(0x8E97560)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_FINISHEDTARGETLIST_OFFSET UNITYSDK_OFFSET(0x8E97670)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISBOSSTARGETBETTER_OFFSET UNITYSDK_OFFSET(0x8E97650)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISCOLORMEDALTARGETHASFINISHED_OFFSET UNITYSDK_OFFSET(0x8E97630)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISFIRSTPASS_OFFSET UNITYSDK_OFFSET(0x8E975F0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISHARDBOSS_OFFSET UNITYSDK_OFFSET(0x8E97500)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISUNLOCKEASYBOSS_OFFSET UNITYSDK_OFFSET(0x8E975D0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISWAITCONFIRM_OFFSET UNITYSDK_OFFSET(0x8E97610)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0x8E975B0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_PEAKID_OFFSET UNITYSDK_OFFSET(0x8E974A0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_SETTLECONFIRMATION_OFFSET UNITYSDK_OFFSET(0x8E97680)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_TURNLEFT_OFFSET UNITYSDK_OFFSET(0x8E97520)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_USEDTURN_OFFSET UNITYSDK_OFFSET(0x8E97540)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_INITFORBOSS_OFFSET UNITYSDK_OFFSET(0x8E8AC90)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_INITFORMONSTER_OFFSET UNITYSDK_OFFSET(0x8E8ACF0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_CHALLENGEPEAKBOSS_OFFSET UNITYSDK_OFFSET(0x8E974F0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_CHALLENGEPEAKNORMAL_OFFSET UNITYSDK_OFFSET(0x8E974D0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISBOSSTARGETBETTER_OFFSET UNITYSDK_OFFSET(0x8E97660)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISCOLORMEDALTARGETHASFINISHED_OFFSET UNITYSDK_OFFSET(0x8E97640)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISFIRSTPASS_OFFSET UNITYSDK_OFFSET(0x8E97600)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISHARDBOSS_OFFSET UNITYSDK_OFFSET(0x8E97510)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISUNLOCKEASYBOSS_OFFSET UNITYSDK_OFFSET(0x8E975E0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISWAITCONFIRM_OFFSET UNITYSDK_OFFSET(0x8E97620)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0x8E975C0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_PEAKID_OFFSET UNITYSDK_OFFSET(0x8E974B0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_SETTLECONFIRMATION_OFFSET UNITYSDK_OFFSET(0x8E97690)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_TURNLEFT_OFFSET UNITYSDK_OFFSET(0x8E97530)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_USEDTURN_OFFSET UNITYSDK_OFFSET(0x8E97550)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x8E976A0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT__GENERATEREWARDLIST_OFFSET UNITYSDK_OFFSET(0x8E97700)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakSettlement_TypeDefinitionIndex = 50146;

	class ChallengePeakSettlement : public ::System::Object
	{
	public:
		::RPG::Client::ChallengePeakBoss* _ChallengePeakBoss_k__BackingField; // 0x10
		::RPG::Client::ChallengeSettleConfirmation* _SettleConfirmation_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedTargetList_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _RewardItemList; // 0x28
		::RPG::Client::ChallengePeak* _ChallengePeakNormal_k__BackingField; // 0x30
		::System::Boolean _IsFirstPass_k__BackingField; // 0x38
		::System::Boolean _IsColorMedalTargetHasFinished_k__BackingField; // 0x39
		::System::Boolean _IsBossTargetBetter_k__BackingField; // 0x3A
		::System::Boolean _IsWaitConfirm_k__BackingField; // 0x3B
		::System::Boolean _IsUnlockEasyBoss_k__BackingField; // 0x3C
		::System::Boolean _IsWin_k__BackingField; // 0x3D
		::System::Boolean _IsHardBoss_k__BackingField; // 0x3E
		::System::UInt32 _UsedTurn_k__BackingField; // 0x40
		::System::UInt32 _TurnLeft_k__BackingField; // 0x44
		::System::UInt32 _PeakID_k__BackingField; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_PeakID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_PEAKID_OFFSET))(this);
		}

		::System::Void set_PeakID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_PEAKID_OFFSET))(this, value);
		}

		::RPG::Client::ChallengePeak* get_ChallengePeakNormal()
		{
			return ((::RPG::Client::ChallengePeak*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_CHALLENGEPEAKNORMAL_OFFSET))(this);
		}

		::System::Void set_ChallengePeakNormal(::RPG::Client::ChallengePeak* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_CHALLENGEPEAKNORMAL_OFFSET))(this, value);
		}

		::RPG::Client::ChallengePeakBoss* get_ChallengePeakBoss()
		{
			return ((::RPG::Client::ChallengePeakBoss*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_CHALLENGEPEAKBOSS_OFFSET))(this);
		}

		::System::Void set_ChallengePeakBoss(::RPG::Client::ChallengePeakBoss* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakBoss*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_CHALLENGEPEAKBOSS_OFFSET))(this, value);
		}

		::System::Boolean get_IsHardBoss()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISHARDBOSS_OFFSET))(this);
		}

		::System::Void set_IsHardBoss(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISHARDBOSS_OFFSET))(this, value);
		}

		::System::UInt32 get_TurnLeft()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_TURNLEFT_OFFSET))(this);
		}

		::System::Void set_TurnLeft(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_TURNLEFT_OFFSET))(this, value);
		}

		::System::UInt32 get_UsedTurn()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_USEDTURN_OFFSET))(this);
		}

		::System::Void set_UsedTurn(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_USEDTURN_OFFSET))(this, value);
		}

		::System::Int32 get_CountOfRewards()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_COUNTOFREWARDS_OFFSET))(this);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISWIN_OFFSET))(this, value);
		}

		::System::Boolean get_IsUnlockEasyBoss()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISUNLOCKEASYBOSS_OFFSET))(this);
		}

		::System::Void set_IsUnlockEasyBoss(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISUNLOCKEASYBOSS_OFFSET))(this, value);
		}

		::System::Boolean get_IsFirstPass()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISFIRSTPASS_OFFSET))(this);
		}

		::System::Void set_IsFirstPass(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISFIRSTPASS_OFFSET))(this, value);
		}

		::System::Boolean get_IsWaitConfirm()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISWAITCONFIRM_OFFSET))(this);
		}

		::System::Void set_IsWaitConfirm(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISWAITCONFIRM_OFFSET))(this, value);
		}

		::System::Boolean get_IsColorMedalTargetHasFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISCOLORMEDALTARGETHASFINISHED_OFFSET))(this);
		}

		::System::Void set_IsColorMedalTargetHasFinished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISCOLORMEDALTARGETHASFINISHED_OFFSET))(this, value);
		}

		::System::Boolean get_IsBossTargetBetter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISBOSSTARGETBETTER_OFFSET))(this);
		}

		::System::Void set_IsBossTargetBetter(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISBOSSTARGETBETTER_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FinishedTargetList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_FINISHEDTARGETLIST_OFFSET))(this);
		}

		::RPG::Client::ChallengeSettleConfirmation* get_SettleConfirmation()
		{
			return ((::RPG::Client::ChallengeSettleConfirmation*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_SETTLECONFIRMATION_OFFSET))(this);
		}

		::System::Void set_SettleConfirmation(::RPG::Client::ChallengeSettleConfirmation* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengeSettleConfirmation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_SETTLECONFIRMATION_OFFSET))(this, value);
		}

		static ::RPG::Client::ChallengePeakSettlement* Create(::Class_1_325963497EC7CBB4* notify)
		{
			return ((::RPG::Client::ChallengePeakSettlement*(*)(::Class_1_325963497EC7CBB4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_CREATE_OFFSET))(notify);
		}

		::System::Void InitForBoss(::RPG::Client::ChallengePeakBoss* boss)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeakBoss*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_INITFORBOSS_OFFSET))(this, boss);
		}

		::System::Void InitForMonster(::RPG::Client::ChallengePeak* peak)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChallengePeak*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_INITFORMONSTER_OFFSET))(this, peak);
		}

		::RPG::Client::ItemDisplayData* GetRewardItemByIndex(::System::Int32 index)
		{
			return ((::RPG::Client::ItemDisplayData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GETREWARDITEMBYINDEX_OFFSET))(this, index);
		}

		::RPG::Client::ChallengePeakRank GetSettleRank()
		{
			return ((::RPG::Client::ChallengePeakRank(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GETSETTLERANK_OFFSET))(this);
		}

		::System::Void _GenerateRewardList(::Class_1_325963497EC7CBB4* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_325963497EC7CBB4*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT__GENERATEREWARDLIST_OFFSET))(this, notify);
		}
	};
}

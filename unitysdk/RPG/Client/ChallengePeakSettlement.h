#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ChallengePeakRank.h"
#include "unitysdk/System/Object.h"

class Class_1_FFE5B8A52EC38E9C_2;
namespace RPG::Client { class ChallengePeak; }
namespace RPG::Client { class ChallengePeakBoss; }
namespace RPG::Client { class ChallengeSettleConfirmation; }
namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_CREATE_OFFSET UNITYSDK_OFFSET(0x15FAF800)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GETREWARDITEMBYINDEX_OFFSET UNITYSDK_OFFSET(0x15FB60E0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GETSETTLERANK_OFFSET UNITYSDK_OFFSET(0x15FB6190)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_CHALLENGEPEAKBOSS_OFFSET UNITYSDK_OFFSET(0x15FB59A0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_CHALLENGEPEAKNORMAL_OFFSET UNITYSDK_OFFSET(0x15FB5980)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_COUNTOFREWARDS_OFFSET UNITYSDK_OFFSET(0x15FB5A20)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_FINISHEDTARGETLIST_OFFSET UNITYSDK_OFFSET(0x15FB5B30)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISBOSSTARGETBETTER_OFFSET UNITYSDK_OFFSET(0x15FB5B10)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISCOLORMEDALTARGETHASFINISHED_OFFSET UNITYSDK_OFFSET(0x15FB5AF0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISFIRSTPASS_OFFSET UNITYSDK_OFFSET(0x15FB5AB0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISHARDBOSS_OFFSET UNITYSDK_OFFSET(0x15FB59C0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISUNLOCKEASYBOSS_OFFSET UNITYSDK_OFFSET(0x15FB5A90)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISWAITCONFIRM_OFFSET UNITYSDK_OFFSET(0x15FB5AD0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0x15FB5A70)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_PEAKID_OFFSET UNITYSDK_OFFSET(0x15FB5960)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_SETTLECONFIRMATION_OFFSET UNITYSDK_OFFSET(0x15FB5B40)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_TURNLEFT_OFFSET UNITYSDK_OFFSET(0x15FB59E0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_GET_USEDTURN_OFFSET UNITYSDK_OFFSET(0x15FB5A00)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_INITFORBOSS_OFFSET UNITYSDK_OFFSET(0x15FA9290)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_INITFORMONSTER_OFFSET UNITYSDK_OFFSET(0x15FA92F0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_CHALLENGEPEAKBOSS_OFFSET UNITYSDK_OFFSET(0x15FB59B0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_CHALLENGEPEAKNORMAL_OFFSET UNITYSDK_OFFSET(0x15FB5990)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISBOSSTARGETBETTER_OFFSET UNITYSDK_OFFSET(0x15FB5B20)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISCOLORMEDALTARGETHASFINISHED_OFFSET UNITYSDK_OFFSET(0x15FB5B00)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISFIRSTPASS_OFFSET UNITYSDK_OFFSET(0x15FB5AC0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISHARDBOSS_OFFSET UNITYSDK_OFFSET(0x15FB59D0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISUNLOCKEASYBOSS_OFFSET UNITYSDK_OFFSET(0x15FB5AA0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISWAITCONFIRM_OFFSET UNITYSDK_OFFSET(0x15FB5AE0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0x15FB5A80)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_PEAKID_OFFSET UNITYSDK_OFFSET(0x15FB5970)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_SETTLECONFIRMATION_OFFSET UNITYSDK_OFFSET(0x15FB5B50)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_TURNLEFT_OFFSET UNITYSDK_OFFSET(0x15FB59F0)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_SET_USEDTURN_OFFSET UNITYSDK_OFFSET(0x15FB5A10)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x15FB5B60)
#define RPG_CLIENT_CHALLENGEPEAKSETTLEMENT__GENERATEREWARDLIST_OFFSET UNITYSDK_OFFSET(0x15FB5BC0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengePeakSettlement_TypeDefinitionIndex = 58203;

	class ChallengePeakSettlement : public ::System::Object
	{
	public:
		::RPG::Client::ChallengeSettleConfirmation* _SettleConfirmation_k__BackingField; // 0x10
		::RPG::Client::ChallengePeakBoss* _ChallengePeakBoss_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _FinishedTargetList_k__BackingField; // 0x20
		::RPG::Client::ChallengePeak* _ChallengePeakNormal_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _RewardItemList; // 0x30
		::System::UInt32 _TurnLeft_k__BackingField; // 0x38
		::System::Boolean _IsColorMedalTargetHasFinished_k__BackingField; // 0x3C
		::System::Boolean _IsUnlockEasyBoss_k__BackingField; // 0x3D
		::System::Boolean _IsFirstPass_k__BackingField; // 0x3E
		::System::Boolean _IsWaitConfirm_k__BackingField; // 0x3F
		::System::Boolean _IsWin_k__BackingField; // 0x40
		::System::Boolean _IsHardBoss_k__BackingField; // 0x41
		::System::Boolean _IsBossTargetBetter_k__BackingField; // 0x42
		::System::UInt32 _PeakID_k__BackingField; // 0x44
		::System::UInt32 _UsedTurn_k__BackingField; // 0x48

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

		static ::RPG::Client::ChallengePeakSettlement* Create(::Class_1_FFE5B8A52EC38E9C_2* notify)
		{
			return ((::RPG::Client::ChallengePeakSettlement*(*)(::Class_1_FFE5B8A52EC38E9C_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT_CREATE_OFFSET))(notify);
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

		::System::Void _GenerateRewardList(::Class_1_FFE5B8A52EC38E9C_2* notify)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FFE5B8A52EC38E9C_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEPEAKSETTLEMENT__GENERATEREWARDLIST_OFFSET))(this, notify);
		}
	};
}

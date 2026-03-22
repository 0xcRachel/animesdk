#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityPanelData.h"

namespace RPG::Client { class SubMissionData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_HELIOBUSACTIVITYDATA_GET_SPMAINMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0x94A95A0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x94A7C00)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x94A7D70)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x94A7E70)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA_SET_SPMAINMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0x94A95B0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKHASCHALLENGEREWARD_OFFSET UNITYSDK_OFFSET(0x94A7CC0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKHASTIMELIMITEDREWARD_OFFSET UNITYSDK_OFFSET(0x94A83D0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKINCOMEENTRY_OFFSET UNITYSDK_OFFSET(0x94A84A0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKISCANREPLYCOMMENT_OFFSET UNITYSDK_OFFSET(0x94A86A0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKISCANREPLYMISSIONPOST_OFFSET UNITYSDK_OFFSET(0x94A8540)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKISCANTAKEANCHORPOST_OFFSET UNITYSDK_OFFSET(0x94A85F0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x94A75F0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__GENERATEFILTER_OFFSET UNITYSDK_OFFSET(0x94A8240)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__GETCONDITION_OFFSET UNITYSDK_OFFSET(0x94A9190)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__ISALLSPMAINMISSIONFINISH_OFFSET UNITYSDK_OFFSET(0x94A80E0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__ISEVERYDAYREDDOTACTIVE_OFFSET UNITYSDK_OFFSET(0x94A8320)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__ISSHOWCUSTOMNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x94A7E30)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__ISSHOWCUSTOMNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x94A7EF0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__ONHELIOBUSGETINFO_OFFSET UNITYSDK_OFFSET(0x94A9140)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__ONMAINMISSIONFINISHED_OFFSET UNITYSDK_OFFSET(0x94A9470)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__ONSUBMISSIONFINISHED_OFFSET UNITYSDK_OFFSET(0x94A9520)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA__SETMAINMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x94A7830)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA___GETCONDITION_B__16_1_OFFSET UNITYSDK_OFFSET(0x94A95C0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA___IFIXBASEPROXY_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET UNITYSDK_OFFSET(0x94A95F0)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA___IFIXBASEPROXY_ISSHOWNEWREDDOT_OFFSET UNITYSDK_OFFSET(0x94A9660)
#define RPG_CLIENT_HELIOBUSACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET UNITYSDK_OFFSET(0x94A9700)

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusActivityData_TypeDefinitionIndex = 48863;

	class HeliobusActivityData : public ::RPG::Client::ActivityPanelData
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _ActivityMainMissionIDList; // 0xA0
		::System::Collections::Generic::List_1<::System::UInt32>* _SpMainMissionIDList_k__BackingField; // 0xA8
		::System::UInt32 _HeliobusTeleportUnlockMissionID; // 0xB0
		::System::Boolean _IsTeleportUnlock; // 0xB4

		::System::Void _ctor(::System::UInt32 ID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__CTOR_OFFSET))(this, ID);
		}

		::System::Boolean IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA_ISSHOWNEWREDDOT_OFFSET))(this);
		}

		::System::Boolean IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA_ISSHOWNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsShowCustomNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__ISSHOWCUSTOMNEWREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsShowCustomNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__ISSHOWCUSTOMNORMALREDDOT_OFFSET))(this);
		}

		::System::Boolean _IsAllSpMainMissionFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__ISALLSPMAINMISSIONFINISH_OFFSET))(this);
		}

		::System::Boolean _CheckInComeEntry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKINCOMEENTRY_OFFSET))(this);
		}

		::System::Boolean _CheckIsCanReplyMissionPost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKISCANREPLYMISSIONPOST_OFFSET))(this);
		}

		::System::Boolean _CheckIsCanTakeAnchorPost()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKISCANTAKEANCHORPOST_OFFSET))(this);
		}

		::System::Boolean _CheckIsCanReplyComment()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKISCANREPLYCOMMENT_OFFSET))(this);
		}

		::System::Boolean _IsEveryDayRedDotActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__ISEVERYDAYREDDOTACTIVE_OFFSET))(this);
		}

		::System::Boolean _CheckHasChallengeReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKHASCHALLENGEREWARD_OFFSET))(this);
		}

		::System::Boolean _CheckHasTimeLimitedReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__CHECKHASTIMELIMITEDREWARD_OFFSET))(this);
		}

		::System::Void _GenerateFilter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__GENERATEFILTER_OFFSET))(this);
		}

		::System::Void _OnHeliobusGetInfo(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__ONHELIOBUSGETINFO_OFFSET))(this, arg);
		}

		::System::Void _GetCondition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__GETCONDITION_OFFSET))(this);
		}

		::System::Void _OnMainMissionFinished(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__ONMAINMISSIONFINISHED_OFFSET))(this, arg);
		}

		::System::Void _OnSubMissionFinished(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__ONSUBMISSIONFINISHED_OFFSET))(this, arg);
		}

		::System::Void _SetMainMissionList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA__SETMAINMISSIONLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SpMainMissionIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA_GET_SPMAINMISSIONIDLIST_OFFSET))(this);
		}

		::System::Void set_SpMainMissionIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA_SET_SPMAINMISSIONIDLIST_OFFSET))(this, value);
		}

		::System::Void __GetCondition_b__16_1(::RPG::Client::SubMissionData* subMissionData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SubMissionData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA___GETCONDITION_B__16_1_OFFSET))(this, subMissionData);
		}

		::System::Boolean __iFixBaseProxy_IsShowMappingInfoRewardRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA___IFIXBASEPROXY_ISSHOWMAPPINGINFOREWARDREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNewRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA___IFIXBASEPROXY_ISSHOWNEWREDDOT_OFFSET))(this);
		}

		::System::Boolean __iFixBaseProxy_IsShowNormalRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_HELIOBUSACTIVITYDATA___IFIXBASEPROXY_ISSHOWNORMALREDDOT_OFFSET))(this);
		}
	};
}

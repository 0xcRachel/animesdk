#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TrainParty/TrainPartySettleSourceType.h"
#include "unitysdk/System/Object.h"

class Class_1_22B4C7CF09D1BAC1_9;
class Class_1_45BB92167AED63A0_101;
class Class_1_963E317C37FB5E9A_83;
namespace RPG::Client::TrainParty { class TrainPartyCardData; }
namespace RPG::Client::TrainParty { class TrainPartyGameInstance; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerChangeInfo; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerData; }
namespace RPG::Client::TrainParty { class TrainPartyPassengerSkillSettleData; }
namespace RPG::Client::TrainParty { class TrainPartyRecordGroup; }
namespace RPG::Client::TrainParty { class TrainPartyRecordInfo; }
namespace RPG::Client::TrainParty { template <typename T> class TrainPartyCacheDataList_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1859F640)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1859F460)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GETHISTORYMEETINGSCORELIST_OFFSET UNITYSDK_OFFSET(0x185A0420)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GETRECORDINFOLIST_OFFSET UNITYSDK_OFFSET(0x185A0290)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GETSORTEDCHANGEINFOLIST_OFFSET UNITYSDK_OFFSET(0x185A0300)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_ISSHOWN_OFFSET UNITYSDK_OFFSET(0x185A06B0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_LASTFUNDS_OFFSET UNITYSDK_OFFSET(0x185A05D0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_LASTMOVESTEP_OFFSET UNITYSDK_OFFSET(0x185A05F0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_LASTUSEDCARD_OFFSET UNITYSDK_OFFSET(0x185A0570)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_OWNERGAME_OFFSET UNITYSDK_OFFSET(0x185A0530)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_PASSENGERCHANGEINFOLIST_OFFSET UNITYSDK_OFFSET(0x185A0510)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_SETTLESOURCE_OFFSET UNITYSDK_OFFSET(0x185A0550)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_SKILLSETTLEDATA_OFFSET UNITYSDK_OFFSET(0x185A0650)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET__SHOWNOCHANGEPASSENGER_OFFSET UNITYSDK_OFFSET(0x185A0500)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_HASRECORD_OFFSET UNITYSDK_OFFSET(0x1859FF70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_RECORDPASSENGERINFOS_OFFSET UNITYSDK_OFFSET(0x185A0040)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SETHISTORYMEETINGSCORES_OFFSET UNITYSDK_OFFSET(0x185A0240)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SETSOURCETYPE_OFFSET UNITYSDK_OFFSET(0x1859FFF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SET_ISSHOWN_OFFSET UNITYSDK_OFFSET(0x185A06C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SET_LASTFUNDS_OFFSET UNITYSDK_OFFSET(0x185A05E0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SET_OWNERGAME_OFFSET UNITYSDK_OFFSET(0x185A0540)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SET_PASSENGERCHANGEINFOLIST_OFFSET UNITYSDK_OFFSET(0x185A0520)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SET_SETTLESOURCE_OFFSET UNITYSDK_OFFSET(0x185A0560)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x1859F5C0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA__CHANGEINFOCOMPARE_OFFSET UNITYSDK_OFFSET(0x185A0460)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1859F400)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA__GENERATERECORDLIST_OFFSET UNITYSDK_OFFSET(0x1859FCD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA__SYNCPASSENGECHANGEINFOLIST_OFFSET UNITYSDK_OFFSET(0x1859F710)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartySettleData_TypeDefinitionIndex = 69447;

	class TrainPartySettleData : public ::System::Object
	{
	public:
		::RPG::Client::TrainParty::TrainPartyGameInstance* _OwnerGame_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo*>* _PassengerChangeInfoList_k__BackingField; // 0x18
		::RPG::Client::TrainParty::TrainPartyCacheDataList_1<::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo*>* _CacheChangeInfoList; // 0x20
		::RPG::Client::TrainParty::TrainPartyRecordGroup* _RecordGroup; // 0x28
		::System::Collections::Generic::IList_1<::System::UInt32>* _HistoryMeetingScores; // 0x30
		::System::Boolean _IsShown_k__BackingField; // 0x38
		::System::UInt32 _LastFunds_k__BackingField; // 0x3C
		::RPG::Client::TrainParty::TrainPartySettleSourceType _SettleSource_k__BackingField; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::TrainParty::TrainPartySettleData* Create(::Class_1_22B4C7CF09D1BAC1_9* a1, ::RPG::Client::TrainParty::TrainPartyGameInstance* a2, ::RPG::Client::TrainParty::TrainPartySettleSourceType a3)
		{
			return ((::RPG::Client::TrainParty::TrainPartySettleData*(*)(::Class_1_22B4C7CF09D1BAC1_9*, ::RPG::Client::TrainParty::TrainPartyGameInstance*, ::RPG::Client::TrainParty::TrainPartySettleSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_CREATE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::TrainParty::TrainPartySettleData* Create_1(::RPG::Client::TrainParty::TrainPartyGameInstance* a1, ::RPG::Client::TrainParty::TrainPartySettleSourceType a2)
		{
			return ((::RPG::Client::TrainParty::TrainPartySettleData*(*)(::RPG::Client::TrainParty::TrainPartyGameInstance*, ::RPG::Client::TrainParty::TrainPartySettleSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_CREATE_1_OFFSET))(a1, a2);
		}

		::System::Void Sync(::Class_1_22B4C7CF09D1BAC1_9* a1, ::RPG::Client::TrainParty::TrainPartySettleSourceType a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_22B4C7CF09D1BAC1_9*, ::RPG::Client::TrainParty::TrainPartySettleSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SYNC_OFFSET))(this, a1, a2);
		}

		::System::Boolean HasRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_HASRECORD_OFFSET))(this);
		}

		::System::Void SetSourceType(::RPG::Client::TrainParty::TrainPartySettleSourceType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartySettleSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SETSOURCETYPE_OFFSET))(this, a1);
		}

		::System::Void RecordPassengerInfos(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_RECORDPASSENGERINFOS_OFFSET))(this, a1);
		}

		::System::Void SetHistoryMeetingScores(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SETHISTORYMEETINGSCORES_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyRecordInfo*>* GetRecordInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyRecordInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GETRECORDINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo*>* GetSortedChangeInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GETSORTEDCHANGEINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IList_1<::System::UInt32>* GetHistoryMeetingScoreList()
		{
			return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GETHISTORYMEETINGSCORELIST_OFFSET))(this);
		}

		::System::Int32 _ChangeInfoCompare(::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo* a1, ::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo*, ::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA__CHANGEINFOCOMPARE_OFFSET))(this, a1, a2);
		}

		::System::Void _SyncPassengeChangeInfoList(::System::Collections::Generic::IList_1<::Class_1_963E317C37FB5E9A_83*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_963E317C37FB5E9A_83*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA__SYNCPASSENGECHANGEINFOLIST_OFFSET))(this, a1);
		}

		::System::Void _GenerateRecordList(::System::Collections::Generic::IList_1<::Class_1_45BB92167AED63A0_101*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_45BB92167AED63A0_101*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA__GENERATERECORDLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo*>* get_PassengerChangeInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_PASSENGERCHANGEINFOLIST_OFFSET))(this);
		}

		::System::Void set_PassengerChangeInfoList(::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TrainParty::TrainPartyPassengerChangeInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SET_PASSENGERCHANGEINFOLIST_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyGameInstance* get_OwnerGame()
		{
			return ((::RPG::Client::TrainParty::TrainPartyGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_OWNERGAME_OFFSET))(this);
		}

		::System::Void set_OwnerGame(::RPG::Client::TrainParty::TrainPartyGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyGameInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SET_OWNERGAME_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartySettleSourceType get_SettleSource()
		{
			return ((::RPG::Client::TrainParty::TrainPartySettleSourceType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_SETTLESOURCE_OFFSET))(this);
		}

		::System::Void set_SettleSource(::RPG::Client::TrainParty::TrainPartySettleSourceType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartySettleSourceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SET_SETTLESOURCE_OFFSET))(this, a1);
		}

		::RPG::Client::TrainParty::TrainPartyCardData* get_LastUsedCard()
		{
			return ((::RPG::Client::TrainParty::TrainPartyCardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_LASTUSEDCARD_OFFSET))(this);
		}

		::System::UInt32 get_LastFunds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_LASTFUNDS_OFFSET))(this);
		}

		::System::Void set_LastFunds(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SET_LASTFUNDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_LastMoveStep()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_LASTMOVESTEP_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyPassengerSkillSettleData* get_SkillSettleData()
		{
			return ((::RPG::Client::TrainParty::TrainPartyPassengerSkillSettleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_SKILLSETTLEDATA_OFFSET))(this);
		}

		::System::Boolean get_IsShown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET_ISSHOWN_OFFSET))(this);
		}

		::System::Void set_IsShown(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_SET_ISSHOWN_OFFSET))(this, a1);
		}

		::System::Boolean get__ShowNoChangePassenger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYSETTLEDATA_GET__SHOWNOCHANGEPASSENGER_OFFSET))(this);
		}
	};
}

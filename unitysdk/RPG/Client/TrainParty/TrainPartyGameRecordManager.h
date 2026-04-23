#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_45BB92167AED63A0_99;
namespace RPG::Client::TrainParty { class TrainPartyRecordGroup; }
namespace RPG::Client::TrainParty { class TrainPartyRecordInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER_BEGINRECORDGROUP_OFFSET UNITYSDK_OFFSET(0x1780DE60)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x17808140)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17809E00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER_ENDRECORDGROUP_OFFSET UNITYSDK_OFFSET(0x1780DF40)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x17809B00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER_ONEXITGAME_OFFSET UNITYSDK_OFFSET(0x1780BFE0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER_RECORDDATABYLOGINFO_OFFSET UNITYSDK_OFFSET(0x1780E060)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__CREATERECORDGROUP_OFFSET UNITYSDK_OFFSET(0x1780DEB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__CREATERECORDINFO_OFFSET UNITYSDK_OFFSET(0x1780EA70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x17809AF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__GETCARDNAME_OFFSET UNITYSDK_OFFSET(0x1780ECB0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__GETGRIDTYPENAME_OFFSET UNITYSDK_OFFSET(0x1780EBF0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__GETPASSENGERNAME_OFFSET UNITYSDK_OFFSET(0x1780EB00)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__PUSHRECORD_OFFSET UNITYSDK_OFFSET(0x1780ED70)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__RECYCLEALLRECORDINFOFROMGROUP_OFFSET UNITYSDK_OFFSET(0x1780EDD0)
#define RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__RECYCLERECORDINFO_OFFSET UNITYSDK_OFFSET(0x1780EFD0)

namespace RPG::Client::TrainParty
{
	inline static constexpr unsigned int TrainPartyGameRecordManager_TypeDefinitionIndex = 68626;

	class TrainPartyGameRecordManager : public ::System::Object
	{
	public:
		::RPG::Client::TrainParty::TrainPartyRecordGroup* _CurRecordGroup; // 0x10
		::System::Collections::Generic::Queue_1<::RPG::Client::TrainParty::TrainPartyRecordInfo*>* _ReuseRecordInfoQueue; // 0x18
		::System::Int32 _PamStaminaLowDesRatio; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void OnExitGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER_ONEXITGAME_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyRecordGroup* BeginRecordGroup()
		{
			return ((::RPG::Client::TrainParty::TrainPartyRecordGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER_BEGINRECORDGROUP_OFFSET))(this);
		}

		::System::Void EndRecordGroup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER_ENDRECORDGROUP_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER_CLEAR_OFFSET))(this);
		}

		::System::Void RecordDataByLogInfo(::Class_1_45BB92167AED63A0_99* logInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_45BB92167AED63A0_99*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER_RECORDDATABYLOGINFO_OFFSET))(this, logInfo);
		}

		::System::Void _RecycleAllRecordInfoFromGroup(::RPG::Client::TrainParty::TrainPartyRecordGroup* group)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyRecordGroup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__RECYCLEALLRECORDINFOFROMGROUP_OFFSET))(this, group);
		}

		::System::Void _RecycleRecordInfo(::RPG::Client::TrainParty::TrainPartyRecordInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyRecordInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__RECYCLERECORDINFO_OFFSET))(this, info);
		}

		::RPG::Client::TrainParty::TrainPartyRecordGroup* _CreateRecordGroup()
		{
			return ((::RPG::Client::TrainParty::TrainPartyRecordGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__CREATERECORDGROUP_OFFSET))(this);
		}

		::RPG::Client::TrainParty::TrainPartyRecordInfo* _CreateRecordInfo()
		{
			return ((::RPG::Client::TrainParty::TrainPartyRecordInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__CREATERECORDINFO_OFFSET))(this);
		}

		::System::Void _PushRecord(::RPG::Client::TrainParty::TrainPartyRecordInfo* info)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyRecordInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__PUSHRECORD_OFFSET))(this, info);
		}

		::System::String* _GetPassengerName(::System::UInt32 passengerID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__GETPASSENGERNAME_OFFSET))(this, passengerID);
		}

		::System::String* _GetGridTypeName(::System::UInt32 gridType)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__GETGRIDTYPENAME_OFFSET))(this, gridType);
		}

		::System::String* _GetCardName(::System::UInt32 cardID)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINPARTY_TRAINPARTYGAMERECORDMANAGER__GETCARDNAME_OFFSET))(this, cardID);
		}
	};
}

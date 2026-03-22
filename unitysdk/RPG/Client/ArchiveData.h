#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ArchiveRedDotType.h"
#include "unitysdk/RPG/Client/ArchiveType.h"
#include "unitysdk/System/Object.h"

class Class_1_973F1F5DEEACFA6C_1;
namespace RPG::Client { class BaseArchiveEntry; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ARCHIVEDATA_CLEARALLNEWSTATUS_OFFSET UNITYSDK_OFFSET(0x8C91050)
#define RPG_CLIENT_ARCHIVEDATA_CLEARNEWSTATUSINENTRYLIST_OFFSET UNITYSDK_OFFSET(0x8C91140)
#define RPG_CLIENT_ARCHIVEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x8C90C40)
#define RPG_CLIENT_ARCHIVEDATA_GETALLARCHIVEENTRIES_OFFSET UNITYSDK_OFFSET(0x8C911F0)
#define RPG_CLIENT_ARCHIVEDATA_GETENTRYBYID_OFFSET UNITYSDK_OFFSET(0x8C90F90)
#define RPG_CLIENT_ARCHIVEDATA_GET_ALLENTRIESLIST_OFFSET UNITYSDK_OFFSET(0x8C91280)
#define RPG_CLIENT_ARCHIVEDATA_GET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0x8C916F0)
#define RPG_CLIENT_ARCHIVEDATA_GET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x8C916D0)
#define RPG_CLIENT_ARCHIVEDATA_ONENTRYCLICK_OFFSET UNITYSDK_OFFSET(0x8C90F30)
#define RPG_CLIENT_ARCHIVEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x8C90EE0)
#define RPG_CLIENT_ARCHIVEDATA_SET_CURPROGRESS_OFFSET UNITYSDK_OFFSET(0x8C91700)
#define RPG_CLIENT_ARCHIVEDATA_SET_TOTALPROGRESS_OFFSET UNITYSDK_OFFSET(0x8C916E0)
#define RPG_CLIENT_ARCHIVEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x8C90E90)
#define RPG_CLIENT_ARCHIVEDATA__ADDENTRY_OFFSET UNITYSDK_OFFSET(0x8C91620)
#define RPG_CLIENT_ARCHIVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x8C91710)
#define RPG_CLIENT_ARCHIVEDATA__REFRESHPROGRESS_OFFSET UNITYSDK_OFFSET(0x8C914F0)
#define RPG_CLIENT_ARCHIVEDATA__RESETALLENTRIESSTATE_OFFSET UNITYSDK_OFFSET(0x8C91400)

namespace RPG::Client
{
	inline static constexpr unsigned int ArchiveData_TypeDefinitionIndex = 49571;

	class ArchiveData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::BaseArchiveEntry*>* _AllEntries; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::BaseArchiveEntry*>* _AllEntriesList; // 0x18
		::RPG::Client::ArchiveRedDotType _RedDotType; // 0x20
		::System::UInt32 _CurProgress_k__BackingField; // 0x24
		::System::UInt32 _TotalProgress_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ArchiveData* Create(::RPG::Client::ArchiveType type)
		{
			return ((::RPG::Client::ArchiveData*(*)(::RPG::Client::ArchiveType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA_CREATE_OFFSET))(type);
		}

		::System::Void Sync(::Class_1_973F1F5DEEACFA6C_1* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA_SYNC_OFFSET))(this, data);
		}

		::System::Void Refresh(::Class_1_973F1F5DEEACFA6C_1* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA_REFRESH_OFFSET))(this, data);
		}

		::System::Void OnEntryClick(::RPG::Client::BaseArchiveEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseArchiveEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA_ONENTRYCLICK_OFFSET))(this, entry);
		}

		::RPG::Client::BaseArchiveEntry* GetEntryByID(::System::UInt32 id)
		{
			return ((::RPG::Client::BaseArchiveEntry*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA_GETENTRYBYID_OFFSET))(this, id);
		}

		::System::Void ClearAllNewStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA_CLEARALLNEWSTATUS_OFFSET))(this);
		}

		::System::Void ClearNewStatusInEntryList(::System::Collections::Generic::List_1<::RPG::Client::BaseArchiveEntry*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::BaseArchiveEntry*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA_CLEARNEWSTATUSINENTRYLIST_OFFSET))(this, list);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BaseArchiveEntry*>* GetAllArchiveEntries()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BaseArchiveEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA_GETALLARCHIVEENTRIES_OFFSET))(this);
		}

		::System::Void _ResetAllEntriesState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA__RESETALLENTRIESSTATE_OFFSET))(this);
		}

		::System::Void _RefreshProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA__REFRESHPROGRESS_OFFSET))(this);
		}

		::System::Void _AddEntry(::RPG::Client::BaseArchiveEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseArchiveEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA__ADDENTRY_OFFSET))(this, entry);
		}

		::System::UInt32 get_TotalProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA_GET_TOTALPROGRESS_OFFSET))(this);
		}

		::System::Void set_TotalProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA_SET_TOTALPROGRESS_OFFSET))(this, value);
		}

		::System::UInt32 get_CurProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA_GET_CURPROGRESS_OFFSET))(this);
		}

		::System::Void set_CurProgress(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA_SET_CURPROGRESS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::BaseArchiveEntry*>* get_AllEntriesList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::BaseArchiveEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEDATA_GET_ALLENTRIESLIST_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ArchiveData.h"
#include "unitysdk/RPG/Client/NounArchiveType.h"
#include "unitysdk/RPG/Client/TextID.h"

class Class_1_973F1F5DEEACFA6C_1;
namespace RPG::Client { class NounArchiveEntry; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NOUNARCHIVEDATA_GETARCHIVEENTRYBYID_OFFSET UNITYSDK_OFFSET(0x99F98D0)
#define RPG_CLIENT_NOUNARCHIVEDATA_GET_REDDOTKEY_OFFSET UNITYSDK_OFFSET(0x99FA440)
#define RPG_CLIENT_NOUNARCHIVEDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x99FA320)
#define RPG_CLIENT_NOUNARCHIVEDATA_HASNEWENTRY_OFFSET UNITYSDK_OFFSET(0x99F9AB0)
#define RPG_CLIENT_NOUNARCHIVEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x99F9870)
#define RPG_CLIENT_NOUNARCHIVEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x99F96D0)
#define RPG_CLIENT_NOUNARCHIVEDATA__ADDTONOUNARCHIVEDATALIST_OFFSET UNITYSDK_OFFSET(0x99F94E0)
#define RPG_CLIENT_NOUNARCHIVEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x99FA450)
#define RPG_CLIENT_NOUNARCHIVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x99F9260)
#define RPG_CLIENT_NOUNARCHIVEDATA__INITALLNOUNENTRIES_OFFSET UNITYSDK_OFFSET(0x99F9280)
#define RPG_CLIENT_NOUNARCHIVEDATA__INITTOCHANGENOUNATLASROWIDS_OFFSET UNITYSDK_OFFSET(0x99F9E60)
#define RPG_CLIENT_NOUNARCHIVEDATA__ISTOCHANGEROW_OFFSET UNITYSDK_OFFSET(0x99FA140)
#define RPG_CLIENT_NOUNARCHIVEDATA__REFRESH_OFFSET UNITYSDK_OFFSET(0x99F9730)
#define RPG_CLIENT_NOUNARCHIVEDATA___IFIXBASEPROXY_REFRESH_OFFSET UNITYSDK_OFFSET(0x99FA500)
#define RPG_CLIENT_NOUNARCHIVEDATA___IFIXBASEPROXY_SYNC_OFFSET UNITYSDK_OFFSET(0x99FA490)

namespace RPG::Client
{
	inline static constexpr unsigned int NounArchiveData_TypeDefinitionIndex = 49592;

	class NounArchiveData : public ::RPG::Client::ArchiveData
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet__ToChangeNounAtlasRowIDs()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(NounArchiveData_TypeDefinitionIndex)->GetStaticField(0x43DA0);
		}
		static ::System::Collections::Generic::List_1<::RPG::Client::NounArchiveData*>** StaticGet__AllNounArchiveData()
		{
			return (::System::Collections::Generic::List_1<::RPG::Client::NounArchiveData*>**)Il2CppClass::FromTypeDefinitionIndex(NounArchiveData_TypeDefinitionIndex)->GetStaticField(0x43DA8);
		}
		::RPG::Client::NounArchiveType _NounType; // 0x30

		::System::Void _ctor(::RPG::Client::NounArchiveType type)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NounArchiveType))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA__CTOR_OFFSET))(this, type);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA__CCTOR_OFFSET))();
		}

		::System::Void Sync(::Class_1_973F1F5DEEACFA6C_1* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA_SYNC_OFFSET))(this, data);
		}

		::System::Void Refresh(::Class_1_973F1F5DEEACFA6C_1* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA_REFRESH_OFFSET))(this, data);
		}

		::RPG::Client::NounArchiveEntry* GetArchiveEntryByID(::System::UInt32 ID)
		{
			return ((::RPG::Client::NounArchiveEntry*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA_GETARCHIVEENTRYBYID_OFFSET))(this, ID);
		}

		::System::Boolean HasNewEntry()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA_HASNEWENTRY_OFFSET))(this);
		}

		::System::Void _Refresh(::System::Boolean fromLogin)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA__REFRESH_OFFSET))(this, fromLogin);
		}

		::System::Void _InitAllNounEntries()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA__INITALLNOUNENTRIES_OFFSET))(this);
		}

		::System::Void _InitToChangeNounAtlasRowIDs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA__INITTOCHANGENOUNATLASROWIDS_OFFSET))(this);
		}

		::System::Boolean _IsToChangeRow(::System::UInt32 rowID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA__ISTOCHANGEROW_OFFSET))(this, rowID);
		}

		::System::Void _AddToNounArchiveDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA__ADDTONOUNARCHIVEDATALIST_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA_GET_TITLE_OFFSET))(this);
		}

		::System::UInt32 get_ReddotKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA_GET_REDDOTKEY_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Sync(::Class_1_973F1F5DEEACFA6C_1* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA___IFIXBASEPROXY_SYNC_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Refresh(::Class_1_973F1F5DEEACFA6C_1* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NOUNARCHIVEDATA___IFIXBASEPROXY_REFRESH_OFFSET))(this, P0);
		}
	};
}

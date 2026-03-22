#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ArchiveData.h"

class Class_1_973F1F5DEEACFA6C_1;
namespace RPG::Client { class RelicArchiveEntry; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_RELICARCHIVEDATA_GETRELICARCHIVEENTRIES_OFFSET UNITYSDK_OFFSET(0x9D84930)
#define RPG_CLIENT_RELICARCHIVEDATA_REFRESH_OFFSET UNITYSDK_OFFSET(0x9D84FF0)
#define RPG_CLIENT_RELICARCHIVEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9D84BE0)
#define RPG_CLIENT_RELICARCHIVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9D84760)
#define RPG_CLIENT_RELICARCHIVEDATA__INITALLRELICENTRIES_OFFSET UNITYSDK_OFFSET(0x9D84770)
#define RPG_CLIENT_RELICARCHIVEDATA___IFIXBASEPROXY_REFRESH_OFFSET UNITYSDK_OFFSET(0x9D85280)
#define RPG_CLIENT_RELICARCHIVEDATA___IFIXBASEPROXY_SYNC_OFFSET UNITYSDK_OFFSET(0x9D85210)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicArchiveData_TypeDefinitionIndex = 49594;

	class RelicArchiveData : public ::RPG::Client::ArchiveData
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEDATA__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RelicArchiveEntry*>* GetRelicArchiveEntries(::System::Boolean isPlanarSuit)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RelicArchiveEntry*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEDATA_GETRELICARCHIVEENTRIES_OFFSET))(this, isPlanarSuit);
		}

		::System::Void Sync(::Class_1_973F1F5DEEACFA6C_1* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEDATA_SYNC_OFFSET))(this, data);
		}

		::System::Void Refresh(::Class_1_973F1F5DEEACFA6C_1* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEDATA_REFRESH_OFFSET))(this, data);
		}

		::System::Void _InitAllRelicEntries()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEDATA__INITALLRELICENTRIES_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Sync(::Class_1_973F1F5DEEACFA6C_1* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEDATA___IFIXBASEPROXY_SYNC_OFFSET))(this, P0);
		}

		::System::Void __iFixBaseProxy_Refresh(::Class_1_973F1F5DEEACFA6C_1* P0)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_973F1F5DEEACFA6C_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICARCHIVEDATA___IFIXBASEPROXY_REFRESH_OFFSET))(this, P0);
		}
	};
}

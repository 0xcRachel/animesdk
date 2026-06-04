#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class MultiPlayerActivityInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_COLLECTREQUIREDMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x169C9470)
#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_GETAVAILABLEMULTIPLAYERACTIVITYINFOS_OFFSET UNITYSDK_OFFSET(0x169C9D90)
#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_GETMULTIPLAYERACTIVITYINFOS_OFFSET UNITYSDK_OFFSET(0x169C9D50)
#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_GET_CURMULTIPLAYERACTIVITYID_OFFSET UNITYSDK_OFFSET(0x169C9810)
#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x169C9230)
#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_ISMULTIPLAYERACTIVITYNEW_OFFSET UNITYSDK_OFFSET(0x169C9B60)
#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_REFRESHLASTSEENMULTIPLAYERACTIVITYID_OFFSET UNITYSDK_OFFSET(0x169C9940)
#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_TRANSFERTOMULTIPLAYERACTIVITYENTRANCEPAGE_OFFSET UNITYSDK_OFFSET(0x169C9720)
#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x169C9F60)
#define RPG_CLIENT_MULTIPLAYERACTIVITYMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x169C9F80)

namespace RPG::Client
{
	inline static constexpr unsigned int MultiPlayerActivityModule_TypeDefinitionIndex = 57790;

	class MultiPlayerActivityModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::MultiPlayerActivityInfo*>* _MultiPlayerActivityInfos; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_INIT_OFFSET))(this);
		}

		::System::Void CollectRequiredMissionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_COLLECTREQUIREDMISSIONDATA_OFFSET))(this);
		}

		::System::Void TransferToMultiPlayerActivityEntrancePage(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_TRANSFERTOMULTIPLAYERACTIVITYENTRANCEPAGE_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurMultiPlayerActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_GET_CURMULTIPLAYERACTIVITYID_OFFSET))(this);
		}

		::System::Void RefreshLastSeenMultiPlayerActivityID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_REFRESHLASTSEENMULTIPLAYERACTIVITYID_OFFSET))(this);
		}

		::System::Boolean IsMultiPlayerActivityNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_ISMULTIPLAYERACTIVITYNEW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MultiPlayerActivityInfo*>* GetMultiPlayerActivityInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MultiPlayerActivityInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_GETMULTIPLAYERACTIVITYINFOS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MultiPlayerActivityInfo*>* GetAvailableMultiPlayerActivityInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MultiPlayerActivityInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE_GETAVAILABLEMULTIPLAYERACTIVITYINFOS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MULTIPLAYERACTIVITYMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}
	};
}

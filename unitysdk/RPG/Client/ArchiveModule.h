#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ArchiveType.h"
#include "unitysdk/RPG/Client/BaseModule.h"

namespace RPG::Client { class ArchiveData; }
namespace RPG::Client { class AvatarArchiveEntry; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ARCHIVEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8C91D50)
#define RPG_CLIENT_ARCHIVEMODULE_GETARCHIVEDATABYTYPE_OFFSET UNITYSDK_OFFSET(0x8C92140)
#define RPG_CLIENT_ARCHIVEMODULE_GETARCHIVEDATAS_OFFSET UNITYSDK_OFFSET(0x8C91DA0)
#define RPG_CLIENT_ARCHIVEMODULE_GETAVATARARCHIVEENTRYBYID_OFFSET UNITYSDK_OFFSET(0x8C92260)
#define RPG_CLIENT_ARCHIVEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x8C91720)
#define RPG_CLIENT_ARCHIVEMODULE_REFRESHARCHIVEDATA_OFFSET UNITYSDK_OFFSET(0x8C91E80)
#define RPG_CLIENT_ARCHIVEMODULE_REFRESHAVATARARCHIVEDATA_OFFSET UNITYSDK_OFFSET(0x8C91FB0)
#define RPG_CLIENT_ARCHIVEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8C92A00)
#define RPG_CLIENT_ARCHIVEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8C92B10)
#define RPG_CLIENT_ARCHIVEMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x8C92E80)
#define RPG_CLIENT_ARCHIVEMODULE__GETUPDATEDARCHIVEDATASCRSP_OFFSET UNITYSDK_OFFSET(0x8C92D20)
#define RPG_CLIENT_ARCHIVEMODULE__INITARCHIVEDATAS_OFFSET UNITYSDK_OFFSET(0x8C917B0)
#define RPG_CLIENT_ARCHIVEMODULE__INITCOBRANDAVATARAUDIOSTATE_OFFSET UNITYSDK_OFFSET(0x8C92570)
#define RPG_CLIENT_ARCHIVEMODULE__ONGETARCHIVEDATASCRSP_OFFSET UNITYSDK_OFFSET(0x8C92BC0)
#define RPG_CLIENT_ARCHIVEMODULE__ONMAINMISSIONDATAREADY_OFFSET UNITYSDK_OFFSET(0x8C92AB0)
#define RPG_CLIENT_ARCHIVEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8C92FB0)
#define RPG_CLIENT_ARCHIVEMODULE___IFIXBASEPROXY_INIT_OFFSET UNITYSDK_OFFSET(0x8C92F20)
#define RPG_CLIENT_ARCHIVEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x8C92FC0)
#define RPG_CLIENT_ARCHIVEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x8C93020)

namespace RPG::Client
{
	inline static constexpr unsigned int ArchiveModule_TypeDefinitionIndex = 49573;

	class ArchiveModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ArchiveType, ::RPG::Client::ArchiveData*>* _AllArchiveDataDict; // 0x10
		::System::String* ArchiveLockName; // 0x18
		::System::Boolean _DataInited; // 0x20
		::System::Boolean _CobrandAvatarAudioStateInited; // 0x21

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void GetArchiveDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE_GETARCHIVEDATAS_OFFSET))(this);
		}

		::System::Void RefreshArchiveData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE_REFRESHARCHIVEDATA_OFFSET))(this);
		}

		::System::Void RefreshAvatarArchiveData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE_REFRESHAVATARARCHIVEDATA_OFFSET))(this);
		}

		::RPG::Client::ArchiveData* GetArchiveDataByType(::RPG::Client::ArchiveType type)
		{
			return ((::RPG::Client::ArchiveData*(*)(::PVOID, ::RPG::Client::ArchiveType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE_GETARCHIVEDATABYTYPE_OFFSET))(this, type);
		}

		::RPG::Client::AvatarArchiveEntry* GetAvatarArchiveEntryByID(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::AvatarArchiveEntry*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE_GETAVATARARCHIVEENTRYBYID_OFFSET))(this, avatarID);
		}

		::System::Void _InitCobrandAvatarAudioState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE__INITCOBRANDAVATARAUDIOSTATE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnMainMissionDataReady(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE__ONMAINMISSIONDATAREADY_OFFSET))(this, arg);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetArchiveDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE__ONGETARCHIVEDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _GetUpdatedArchiveDataScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE__GETUPDATEDARCHIVEDATASCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _InitArchiveDatas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE__INITARCHIVEDATAS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE___IFIXBASEPROXY_INIT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ARCHIVEMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}
	};
}

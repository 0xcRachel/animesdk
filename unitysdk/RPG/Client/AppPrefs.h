#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PrefGroup.h"
#include "unitysdk/System/DateTime.h"

namespace RPG::Client { template <typename T> class PrefHashSet_1; }
namespace RPG::Client { template <typename T> class PrefList_1; }
namespace System { class String; }

#define RPG_CLIENT_APPPREFS_GET_AUDIOBLACKLIST_OFFSET UNITYSDK_OFFSET(0x8C8A7A0)
#define RPG_CLIENT_APPPREFS_GET_DEBUGLASTLANGINDEX_OFFSET UNITYSDK_OFFSET(0x8C8A130)
#define RPG_CLIENT_APPPREFS_GET_FORCEUPDATEAUDIO_OFFSET UNITYSDK_OFFSET(0x8C8A970)
#define RPG_CLIENT_APPPREFS_GET_FORCEUPDATEVIDEO_OFFSET UNITYSDK_OFFSET(0x8C8AA50)
#define RPG_CLIENT_APPPREFS_GET_LASTCRASHREPORTTIME_OFFSET UNITYSDK_OFFSET(0x8C8A040)
#define RPG_CLIENT_APPPREFS_GET_LASTDEVACCOUNTUID_OFFSET UNITYSDK_OFFSET(0x8C89DD0)
#define RPG_CLIENT_APPPREFS_GET_LASTDEVUID_OFFSET UNITYSDK_OFFSET(0x8C89F60)
#define RPG_CLIENT_APPPREFS_GET_LASTSERVERNAME_OFFSET UNITYSDK_OFFSET(0x8C89B00)
#define RPG_CLIENT_APPPREFS_GET_LASTSERVERS_OFFSET UNITYSDK_OFFSET(0x8C89D70)
#define RPG_CLIENT_APPPREFS_GET_LASTUSERID_OFFSET UNITYSDK_OFFSET(0x8C89C90)
#define RPG_CLIENT_APPPREFS_GET_NEEDDOWNLOADALLASSETS_OFFSET UNITYSDK_OFFSET(0x8C8A530)
#define RPG_CLIENT_APPPREFS_GET_PERMANENTTASKLIST_OFFSET UNITYSDK_OFFSET(0x8C8A860)
#define RPG_CLIENT_APPPREFS_GET_PERMANENTWHITELIST_OFFSET UNITYSDK_OFFSET(0x8C8A920)
#define RPG_CLIENT_APPPREFS_GET_RPGDEVICEID_OFFSET UNITYSDK_OFFSET(0x8C8A610)
#define RPG_CLIENT_APPPREFS_GET_TEMPTASKLIST_OFFSET UNITYSDK_OFFSET(0x8C8A8D0)
#define RPG_CLIENT_APPPREFS_GET_VIDEOBLACKLIST_OFFSET UNITYSDK_OFFSET(0x8C8A800)
#define RPG_CLIENT_APPPREFS_SET_DEBUGLASTLANGINDEX_OFFSET UNITYSDK_OFFSET(0x8C8A1A0)
#define RPG_CLIENT_APPPREFS_SET_FORCEUPDATEAUDIO_OFFSET UNITYSDK_OFFSET(0x8C8A9E0)
#define RPG_CLIENT_APPPREFS_SET_FORCEUPDATEVIDEO_OFFSET UNITYSDK_OFFSET(0x8C8AAC0)
#define RPG_CLIENT_APPPREFS_SET_LASTCRASHREPORTTIME_OFFSET UNITYSDK_OFFSET(0x8C8A0C0)
#define RPG_CLIENT_APPPREFS_SET_LASTDEVACCOUNTUID_OFFSET UNITYSDK_OFFSET(0x8C89EA0)
#define RPG_CLIENT_APPPREFS_SET_LASTDEVUID_OFFSET UNITYSDK_OFFSET(0x8C89FD0)
#define RPG_CLIENT_APPPREFS_SET_LASTSERVERNAME_OFFSET UNITYSDK_OFFSET(0x8C89BD0)
#define RPG_CLIENT_APPPREFS_SET_LASTUSERID_OFFSET UNITYSDK_OFFSET(0x8C89D00)
#define RPG_CLIENT_APPPREFS_SET_NEEDDOWNLOADALLASSETS_OFFSET UNITYSDK_OFFSET(0x8C8A5A0)
#define RPG_CLIENT_APPPREFS_SET_RPGDEVICEID_OFFSET UNITYSDK_OFFSET(0x8C8A6E0)
#define RPG_CLIENT_APPPREFS_UPDATERECENTSERVER_OFFSET UNITYSDK_OFFSET(0x8C8A210)
#define RPG_CLIENT_APPPREFS__CTOR_OFFSET UNITYSDK_OFFSET(0x8C89A80)

namespace RPG::Client
{
	inline static constexpr unsigned int AppPrefs_TypeDefinitionIndex = 46920;

	class AppPrefs : public ::RPG::Client::PrefGroup
	{
	public:
		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS__CTOR_OFFSET))(this, name);
		}

		::System::String* get_LastServerName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_LASTSERVERNAME_OFFSET))(this);
		}

		::System::Void set_LastServerName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_SET_LASTSERVERNAME_OFFSET))(this, value);
		}

		::System::UInt32 get_LastUserID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_LASTUSERID_OFFSET))(this);
		}

		::System::Void set_LastUserID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_SET_LASTUSERID_OFFSET))(this, value);
		}

		::RPG::Client::PrefList_1<::System::String*>* get_LastServers()
		{
			return ((::RPG::Client::PrefList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_LASTSERVERS_OFFSET))(this);
		}

		::System::String* get_LastDevAccountUID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_LASTDEVACCOUNTUID_OFFSET))(this);
		}

		::System::Void set_LastDevAccountUID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_SET_LASTDEVACCOUNTUID_OFFSET))(this, value);
		}

		::System::UInt32 get_LastDevUID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_LASTDEVUID_OFFSET))(this);
		}

		::System::Void set_LastDevUID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_SET_LASTDEVUID_OFFSET))(this, value);
		}

		::System::DateTime get_LastCrashReportTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_LASTCRASHREPORTTIME_OFFSET))(this);
		}

		::System::Void set_LastCrashReportTime(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_SET_LASTCRASHREPORTTIME_OFFSET))(this, value);
		}

		::System::UInt32 get_DebugLastLangIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_DEBUGLASTLANGINDEX_OFFSET))(this);
		}

		::System::Void set_DebugLastLangIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_SET_DEBUGLASTLANGINDEX_OFFSET))(this, value);
		}

		::System::Void UpdateRecentServer(::System::String* server_name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_UPDATERECENTSERVER_OFFSET))(this, server_name);
		}

		::System::Boolean get_NeedDownloadAllAssets()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_NEEDDOWNLOADALLASSETS_OFFSET))(this);
		}

		::System::Void set_NeedDownloadAllAssets(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_SET_NEEDDOWNLOADALLASSETS_OFFSET))(this, value);
		}

		::System::String* get_RPGDeviceID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_RPGDEVICEID_OFFSET))(this);
		}

		::System::Void set_RPGDeviceID(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_SET_RPGDEVICEID_OFFSET))(this, value);
		}

		::RPG::Client::PrefHashSet_1<::System::String*>* get_AudioBlacklist()
		{
			return ((::RPG::Client::PrefHashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_AUDIOBLACKLIST_OFFSET))(this);
		}

		::RPG::Client::PrefHashSet_1<::System::String*>* get_VideoBlacklist()
		{
			return ((::RPG::Client::PrefHashSet_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_VIDEOBLACKLIST_OFFSET))(this);
		}

		::RPG::Client::PrefHashSet_1<::System::UInt32>* get_PermanentTaskList()
		{
			return ((::RPG::Client::PrefHashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_PERMANENTTASKLIST_OFFSET))(this);
		}

		::RPG::Client::PrefHashSet_1<::System::UInt32>* get_TempTaskList()
		{
			return ((::RPG::Client::PrefHashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_TEMPTASKLIST_OFFSET))(this);
		}

		::RPG::Client::PrefHashSet_1<::System::UInt32>* get_PermanentWhiteList()
		{
			return ((::RPG::Client::PrefHashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_PERMANENTWHITELIST_OFFSET))(this);
		}

		::System::Boolean get_ForceUpdateAudio()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_FORCEUPDATEAUDIO_OFFSET))(this);
		}

		::System::Void set_ForceUpdateAudio(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_SET_FORCEUPDATEAUDIO_OFFSET))(this, value);
		}

		::System::Boolean get_ForceUpdateVideo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_GET_FORCEUPDATEVIDEO_OFFSET))(this);
		}

		::System::Void set_ForceUpdateVideo(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_APPPREFS_SET_FORCEUPDATEVIDEO_OFFSET))(this, value);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PrefGroup.h"
#include "unitysdk/System/DateTime.h"

namespace RPG::Client { template <typename T> class PrefHashSet_1; }
namespace RPG::Client { template <typename T> class PrefList_1; }
namespace System { class String; }

#define RPG_CLIENT_APPPREFS_GET_AUDIOBLACKLIST_OFFSET UNITYSDK_OFFSET(0x16D65040)
#define RPG_CLIENT_APPPREFS_GET_DEBUGLASTLANGINDEX_OFFSET UNITYSDK_OFFSET(0x16D64990)
#define RPG_CLIENT_APPPREFS_GET_FORCEUPDATEAUDIO_OFFSET UNITYSDK_OFFSET(0x16D65210)
#define RPG_CLIENT_APPPREFS_GET_FORCEUPDATEVIDEO_OFFSET UNITYSDK_OFFSET(0x16D652F0)
#define RPG_CLIENT_APPPREFS_GET_LASTCRASHREPORTTIME_OFFSET UNITYSDK_OFFSET(0x16D648A0)
#define RPG_CLIENT_APPPREFS_GET_LASTDEVACCOUNTUID_OFFSET UNITYSDK_OFFSET(0x16D64630)
#define RPG_CLIENT_APPPREFS_GET_LASTDEVUID_OFFSET UNITYSDK_OFFSET(0x16D647C0)
#define RPG_CLIENT_APPPREFS_GET_LASTSERVERNAME_OFFSET UNITYSDK_OFFSET(0x16D64360)
#define RPG_CLIENT_APPPREFS_GET_LASTSERVERS_OFFSET UNITYSDK_OFFSET(0x16D645D0)
#define RPG_CLIENT_APPPREFS_GET_LASTUSERID_OFFSET UNITYSDK_OFFSET(0x16D644F0)
#define RPG_CLIENT_APPPREFS_GET_NEEDDOWNLOADALLASSETS_OFFSET UNITYSDK_OFFSET(0x16D64DD0)
#define RPG_CLIENT_APPPREFS_GET_PERMANENTTASKLIST_OFFSET UNITYSDK_OFFSET(0x16D65100)
#define RPG_CLIENT_APPPREFS_GET_PERMANENTWHITELIST_OFFSET UNITYSDK_OFFSET(0x16D651C0)
#define RPG_CLIENT_APPPREFS_GET_RPGDEVICEID_OFFSET UNITYSDK_OFFSET(0x16D64EB0)
#define RPG_CLIENT_APPPREFS_GET_TEMPTASKLIST_OFFSET UNITYSDK_OFFSET(0x16D65170)
#define RPG_CLIENT_APPPREFS_GET_VIDEOBLACKLIST_OFFSET UNITYSDK_OFFSET(0x16D650A0)
#define RPG_CLIENT_APPPREFS_SET_DEBUGLASTLANGINDEX_OFFSET UNITYSDK_OFFSET(0x16D64A00)
#define RPG_CLIENT_APPPREFS_SET_FORCEUPDATEAUDIO_OFFSET UNITYSDK_OFFSET(0x16D65280)
#define RPG_CLIENT_APPPREFS_SET_FORCEUPDATEVIDEO_OFFSET UNITYSDK_OFFSET(0x16D65360)
#define RPG_CLIENT_APPPREFS_SET_LASTCRASHREPORTTIME_OFFSET UNITYSDK_OFFSET(0x16D64920)
#define RPG_CLIENT_APPPREFS_SET_LASTDEVACCOUNTUID_OFFSET UNITYSDK_OFFSET(0x16D64700)
#define RPG_CLIENT_APPPREFS_SET_LASTDEVUID_OFFSET UNITYSDK_OFFSET(0x16D64830)
#define RPG_CLIENT_APPPREFS_SET_LASTSERVERNAME_OFFSET UNITYSDK_OFFSET(0x16D64430)
#define RPG_CLIENT_APPPREFS_SET_LASTUSERID_OFFSET UNITYSDK_OFFSET(0x16D64560)
#define RPG_CLIENT_APPPREFS_SET_NEEDDOWNLOADALLASSETS_OFFSET UNITYSDK_OFFSET(0x16D64E40)
#define RPG_CLIENT_APPPREFS_SET_RPGDEVICEID_OFFSET UNITYSDK_OFFSET(0x16D64F80)
#define RPG_CLIENT_APPPREFS_UPDATERECENTSERVER_OFFSET UNITYSDK_OFFSET(0x16D64A70)
#define RPG_CLIENT_APPPREFS__CTOR_OFFSET UNITYSDK_OFFSET(0x16D642E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AppPrefs_TypeDefinitionIndex = 54744;

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

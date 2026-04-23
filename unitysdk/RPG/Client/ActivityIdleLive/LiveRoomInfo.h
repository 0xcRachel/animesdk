#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::ActivityIdleLive { class IdleLiveStarData; }
namespace System { class String; }

#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GETCUREXPPROGRESS_OFFSET UNITYSDK_OFFSET(0x1730CF60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GETCURRANKTITLE_OFFSET UNITYSDK_OFFSET(0x1730D030)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GETSTARNUM_OFFSET UNITYSDK_OFFSET(0x1730CE90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GET_ICONID_OFFSET UNITYSDK_OFFSET(0x1730C940)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1730CB10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GET_SPECIALICONID_OFFSET UNITYSDK_OFFSET(0x1730C960)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GET_STARDATA_OFFSET UNITYSDK_OFFSET(0x1730C980)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1730CA10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_ISRANKMAX_OFFSET UNITYSDK_OFFSET(0x1730D130)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_RESETTITLETODEFAULT_OFFSET UNITYSDK_OFFSET(0x1730CE00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_SET_ICONID_OFFSET UNITYSDK_OFFSET(0x1730C950)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_SET_SPECIALICONID_OFFSET UNITYSDK_OFFSET(0x1730C970)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_SET_TITLE_OFFSET UNITYSDK_OFFSET(0x1730CB00)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_UPDATEICON_1_OFFSET UNITYSDK_OFFSET(0x1730CD10)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_UPDATEICON_OFFSET UNITYSDK_OFFSET(0x1730CBF0)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_UPDATESPECIALICON_OFFSET UNITYSDK_OFFSET(0x1730CC60)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_UPDATETITLE_OFFSET UNITYSDK_OFFSET(0x1730CB90)
#define RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1730D200)

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int LiveRoomInfo_TypeDefinitionIndex = 69422;

	class LiveRoomInfo : public ::System::Object
	{
	public:
		// static const ::System::String* _DEFAULT_TITLE_TEXT_ID; // 0x0
		::System::String* _SpecialIconPath; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveStarData* _StarData; // 0x18
		::System::String* _IconPath; // 0x20
		::System::String* _Title; // 0x28
		::System::UInt32 _SpecialIconId_k__BackingField; // 0x30
		::System::UInt32 _IconId_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO__CTOR_OFFSET))(this);
		}

		::System::UInt32 get_IconId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GET_ICONID_OFFSET))(this);
		}

		::System::Void set_IconId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_SET_ICONID_OFFSET))(this, value);
		}

		::System::UInt32 get_SpecialIconId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GET_SPECIALICONID_OFFSET))(this);
		}

		::System::Void set_SpecialIconId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_SET_SPECIALICONID_OFFSET))(this, value);
		}

		::RPG::Client::ActivityIdleLive::IdleLiveStarData* get_StarData()
		{
			return ((::RPG::Client::ActivityIdleLive::IdleLiveStarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GET_STARDATA_OFFSET))(this);
		}

		::System::String* get_Title()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_SET_TITLE_OFFSET))(this, value);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void UpdateTitle(::System::String* title)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_UPDATETITLE_OFFSET))(this, title);
		}

		::System::Void UpdateIcon(::System::UInt32 iconId, ::System::UInt32 specialIconId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_UPDATEICON_OFFSET))(this, iconId, specialIconId);
		}

		::System::Void UpdateIcon_1(::System::UInt32 playerIconId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_UPDATEICON_1_OFFSET))(this, playerIconId);
		}

		::System::Void UpdateSpecialIcon(::System::UInt32 specialIconId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_UPDATESPECIALICON_OFFSET))(this, specialIconId);
		}

		::System::Void ResetTitleToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_RESETTITLETODEFAULT_OFFSET))(this);
		}

		::System::UInt32 GetStarNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GETSTARNUM_OFFSET))(this);
		}

		::System::Single GetCurExpProgress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GETCUREXPPROGRESS_OFFSET))(this);
		}

		::RPG::Client::TextID GetCurRankTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_GETCURRANKTITLE_OFFSET))(this);
		}

		::System::Boolean IsRankMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYIDLELIVE_LIVEROOMINFO_ISRANKMAX_OFFSET))(this);
		}
	};
}

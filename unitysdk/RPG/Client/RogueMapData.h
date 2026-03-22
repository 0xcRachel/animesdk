#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"

class Class_1_0A1329B6B19F70B0_6;
namespace RPG::Client { class RogueSiteData; }
namespace RPG::GameCore { class RogueRoomRow; }
namespace RPG::GameCore { class RogueRoomTypeRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAPDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E20820)
#define RPG_CLIENT_ROGUEMAPDATA_GETBRANCHTOTALNUM_OFFSET UNITYSDK_OFFSET(0x9E212F0)
#define RPG_CLIENT_ROGUEMAPDATA_GETCURRENTROGUEROOMROW_OFFSET UNITYSDK_OFFSET(0x9E211A0)
#define RPG_CLIENT_ROGUEMAPDATA_GETCURRENTROGUEROOMTYPEROW_OFFSET UNITYSDK_OFFSET(0x9E21060)
#define RPG_CLIENT_ROGUEMAPDATA_GETCURROGUESUBMODE_OFFSET UNITYSDK_OFFSET(0x9E20CE0)
#define RPG_CLIENT_ROGUEMAPDATA_GETPROGRESSNUM_OFFSET UNITYSDK_OFFSET(0x9E21210)
#define RPG_CLIENT_ROGUEMAPDATA_GETROGUESITEDATA_OFFSET UNITYSDK_OFFSET(0x9E20D50)
#define RPG_CLIENT_ROGUEMAPDATA_GETSTARTROGUESITEDATA_OFFSET UNITYSDK_OFFSET(0x9E20E40)
#define RPG_CLIENT_ROGUEMAPDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x9E21510)
#define RPG_CLIENT_ROGUEMAPDATA_GET_CURROOMID_OFFSET UNITYSDK_OFFSET(0x9E21570)
#define RPG_CLIENT_ROGUEMAPDATA_GET_CURSITEID_OFFSET UNITYSDK_OFFSET(0x9E21550)
#define RPG_CLIENT_ROGUEMAPDATA_GET_MAPID_OFFSET UNITYSDK_OFFSET(0x9E21530)
#define RPG_CLIENT_ROGUEMAPDATA_GET_SITELIST_OFFSET UNITYSDK_OFFSET(0x9E21590)
#define RPG_CLIENT_ROGUEMAPDATA_ISNEXTPLAYSITE_OFFSET UNITYSDK_OFFSET(0x9E20F80)
#define RPG_CLIENT_ROGUEMAPDATA_REFRESHCURSITEID_OFFSET UNITYSDK_OFFSET(0x9E20C90)
#define RPG_CLIENT_ROGUEMAPDATA_REFRESHMAP_OFFSET UNITYSDK_OFFSET(0x9E20890)
#define RPG_CLIENT_ROGUEMAPDATA_SET_AREAID_OFFSET UNITYSDK_OFFSET(0x9E21520)
#define RPG_CLIENT_ROGUEMAPDATA_SET_CURROOMID_OFFSET UNITYSDK_OFFSET(0x9E21580)
#define RPG_CLIENT_ROGUEMAPDATA_SET_CURSITEID_OFFSET UNITYSDK_OFFSET(0x9E21560)
#define RPG_CLIENT_ROGUEMAPDATA_SET_MAPID_OFFSET UNITYSDK_OFFSET(0x9E21540)
#define RPG_CLIENT_ROGUEMAPDATA_SET_SITELIST_OFFSET UNITYSDK_OFFSET(0x9E215A0)
#define RPG_CLIENT_ROGUEMAPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9E215B0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMapData_TypeDefinitionIndex = 53616;

	class RogueMapData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueSiteData*>* _SiteList_k__BackingField; // 0x10
		::System::UInt32 _MapID_k__BackingField; // 0x18
		::System::UInt32 _AreaID_k__BackingField; // 0x1C
		::System::UInt32 _CurRoomID_k__BackingField; // 0x20
		::System::UInt32 _CurSiteID_k__BackingField; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshMap(::Class_1_0A1329B6B19F70B0_6* rogueMap)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A1329B6B19F70B0_6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_REFRESHMAP_OFFSET))(this, rogueMap);
		}

		::System::Void RefreshCurSiteID(::System::UInt32 curSiteID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_REFRESHCURSITEID_OFFSET))(this, curSiteID);
		}

		::RPG::GameCore::RogueSubMode GetCurRogueSubMode()
		{
			return ((::RPG::GameCore::RogueSubMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_GETCURROGUESUBMODE_OFFSET))(this);
		}

		::RPG::Client::RogueSiteData* GetRogueSiteData(::System::UInt32 siteID)
		{
			return ((::RPG::Client::RogueSiteData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_GETROGUESITEDATA_OFFSET))(this, siteID);
		}

		::RPG::Client::RogueSiteData* GetStartRogueSiteData()
		{
			return ((::RPG::Client::RogueSiteData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_GETSTARTROGUESITEDATA_OFFSET))(this);
		}

		::System::Boolean IsNextPlaySite(::System::UInt32 siteID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_ISNEXTPLAYSITE_OFFSET))(this, siteID);
		}

		::RPG::GameCore::RogueRoomTypeRow* GetCurrentRogueRoomTypeRow()
		{
			return ((::RPG::GameCore::RogueRoomTypeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_GETCURRENTROGUEROOMTYPEROW_OFFSET))(this);
		}

		::RPG::GameCore::RogueRoomRow* GetCurrentRogueRoomRow()
		{
			return ((::RPG::GameCore::RogueRoomRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_GETCURRENTROGUEROOMROW_OFFSET))(this);
		}

		::System::UInt32 GetProgressNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_GETPROGRESSNUM_OFFSET))(this);
		}

		::System::UInt32 GetBranchTotalNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_GETBRANCHTOTALNUM_OFFSET))(this);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_SET_AREAID_OFFSET))(this, value);
		}

		::System::UInt32 get_MapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_GET_MAPID_OFFSET))(this);
		}

		::System::Void set_MapID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_SET_MAPID_OFFSET))(this, value);
		}

		::System::UInt32 get_CurSiteID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_GET_CURSITEID_OFFSET))(this);
		}

		::System::Void set_CurSiteID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_SET_CURSITEID_OFFSET))(this, value);
		}

		::System::UInt32 get_CurRoomID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_GET_CURROOMID_OFFSET))(this);
		}

		::System::Void set_CurRoomID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_SET_CURROOMID_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueSiteData*>* get_SiteList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueSiteData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_GET_SITELIST_OFFSET))(this);
		}

		::System::Void set_SiteList(::System::Collections::Generic::List_1<::RPG::Client::RogueSiteData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueSiteData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAPDATA_SET_SITELIST_OFFSET))(this, value);
		}
	};
}

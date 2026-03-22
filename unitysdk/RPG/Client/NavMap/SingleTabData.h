#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MapSpaceType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class SubMissionData; }
namespace RPG::Client::NavMap { class SubTabData; }
namespace RPG::Client::NavMap { class WorldData; }
namespace RPG::GameCore { class NavMapTabRow; }
namespace System { class String; }

#define RPG_CLIENT_NAVMAP_SINGLETABDATA_CONTAINSPACETYPE_OFFSET UNITYSDK_OFFSET(0x9998560)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_CONTAINS_OFFSET UNITYSDK_OFFSET(0x9998400)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x99982D0)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GETDEFAULTSUBTABANDLAYER_OFFSET UNITYSDK_OFFSET(0x9998350)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GETREGIONALMAPNODEID_OFFSET UNITYSDK_OFFSET(0x99985C0)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GETSUBTABBYFLOORID_OFFSET UNITYSDK_OFFSET(0x99983A0)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GETSUBTABBYINDEX_OFFSET UNITYSDK_OFFSET(0x99984F0)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GETTRACKINGSUBMISSIONFORSHOW_OFFSET UNITYSDK_OFFSET(0x9998610)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9998A50)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9998540)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ISCOMPOSEDTAB_OFFSET UNITYSDK_OFFSET(0x9998900)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ISEARLYACCESS_OFFSET UNITYSDK_OFFSET(0x9998F40)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ISPLAYERHERE_OFFSET UNITYSDK_OFFSET(0x9998BC0)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x9998BA0)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_MAPSPACETYPE_OFFSET UNITYSDK_OFFSET(0x9998930)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_MENUICONPATH_OFFSET UNITYSDK_OFFSET(0x9998AA0)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9998950)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_SHOWSUBTABCOUNT_OFFSET UNITYSDK_OFFSET(0x9998450)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_SORTID_OFFSET UNITYSDK_OFFSET(0x9998A80)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_UNLOCK_OFFSET UNITYSDK_OFFSET(0x9998B30)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_WORLD_OFFSET UNITYSDK_OFFSET(0x9998910)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_INDEXOF_OFFSET UNITYSDK_OFFSET(0x9998470)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA_SET_WORLD_OFFSET UNITYSDK_OFFSET(0x9998920)
#define RPG_CLIENT_NAVMAP_SINGLETABDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9998340)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int SingleTabData_TypeDefinitionIndex = 59606;

	class SingleTabData : public ::System::Object
	{
	public:
		::RPG::Client::NavMap::WorldData* _World_k__BackingField; // 0x10
		::RPG::GameCore::NavMapTabRow* _Row; // 0x18
		::RPG::Client::NavMap::SubTabData* SubTabData; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::NavMap::SingleTabData* Create(::RPG::Client::NavMap::WorldData* worldData, ::RPG::GameCore::NavMapTabRow* row)
		{
			return ((::RPG::Client::NavMap::SingleTabData*(*)(::RPG::Client::NavMap::WorldData*, ::RPG::GameCore::NavMapTabRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_CREATE_OFFSET))(worldData, row);
		}

		::RPG::Client::NavMap::SubTabData* GetDefaultSubTabAndLayer(::System::Int32& layer)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GETDEFAULTSUBTABANDLAYER_OFFSET))(this, layer);
		}

		::RPG::Client::NavMap::SubTabData* GetSubTabByFloorID(::System::UInt32 floorID)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GETSUBTABBYFLOORID_OFFSET))(this, floorID);
		}

		::System::Boolean Contains(::RPG::Client::NavMap::SubTabData* subTab)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_CONTAINS_OFFSET))(this, subTab);
		}

		::System::Int32 get_ShowSubTabCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_SHOWSUBTABCOUNT_OFFSET))(this);
		}

		::System::Int32 IndexOf(::RPG::Client::NavMap::SubTabData* subTab)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_INDEXOF_OFFSET))(this, subTab);
		}

		::RPG::Client::NavMap::SubTabData* GetSubTabByIndex(::System::Int32 index)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GETSUBTABBYINDEX_OFFSET))(this, index);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ID_OFFSET))(this);
		}

		::System::Boolean ContainSpaceType(::RPG::GameCore::MapSpaceType spaceType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MapSpaceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_CONTAINSPACETYPE_OFFSET))(this, spaceType);
		}

		::System::UInt32 GetRegionalMapNodeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GETREGIONALMAPNODEID_OFFSET))(this);
		}

		::RPG::Client::SubMissionData* GetTrackingSubMissionForShow()
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GETTRACKINGSUBMISSIONFORSHOW_OFFSET))(this);
		}

		::System::Boolean get_IsComposedTab()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ISCOMPOSEDTAB_OFFSET))(this);
		}

		::RPG::Client::NavMap::WorldData* get_World()
		{
			return ((::RPG::Client::NavMap::WorldData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_WORLD_OFFSET))(this);
		}

		::System::Void set_World(::RPG::Client::NavMap::WorldData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::WorldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_SET_WORLD_OFFSET))(this, value);
		}

		::RPG::GameCore::MapSpaceType get_MapSpaceType()
		{
			return ((::RPG::GameCore::MapSpaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_MAPSPACETYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_DESC_OFFSET))(this);
		}

		::System::UInt32 get_SortID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_SORTID_OFFSET))(this);
		}

		::System::String* get_MenuIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_MENUICONPATH_OFFSET))(this);
		}

		::System::Boolean get_Unlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_UNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ISSHOW_OFFSET))(this);
		}

		::System::Boolean get_IsPlayerHere()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ISPLAYERHERE_OFFSET))(this);
		}

		::System::Boolean get_IsEarlyAccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_SINGLETABDATA_GET_ISEARLYACCESS_OFFSET))(this);
		}
	};
}

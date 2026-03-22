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
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_ADDCHILDTAB_OFFSET UNITYSDK_OFFSET(0x9922F80)
#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_CONTAINSPACETYPE_OFFSET UNITYSDK_OFFSET(0x9923670)
#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_CONTAINS_OFFSET UNITYSDK_OFFSET(0x99235E0)
#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9922E70)
#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GETDEFAULTSUBTABANDLAYER_OFFSET UNITYSDK_OFFSET(0x9923260)
#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GETREGIONALMAPNODEID_OFFSET UNITYSDK_OFFSET(0x99231D0)
#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GETSUBTABBYFLOORID_OFFSET UNITYSDK_OFFSET(0x99234C0)
#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GETSUBTABBYINDEX_OFFSET UNITYSDK_OFFSET(0x9923130)
#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GETTRACKINGSUBMISSIONFORSHOW_OFFSET UNITYSDK_OFFSET(0x99236D0)
#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9923040)
#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x9923650)
#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GET_ISCOMPOSEDTAB_OFFSET UNITYSDK_OFFSET(0x9923740)
#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GET_ISEARLYACCESS_OFFSET UNITYSDK_OFFSET(0x9923B60)
#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GET_ISPLAYERHERE_OFFSET UNITYSDK_OFFSET(0x9923BF0)
#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x9923A60)
#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GET_MAPSPACETYPE_OFFSET UNITYSDK_OFFSET(0x9923720)
#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GET_MENUICONPATH_OFFSET UNITYSDK_OFFSET(0x99238A0)
#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9923010)
#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GET_SHOWSUBTABCOUNT_OFFSET UNITYSDK_OFFSET(0x9923750)
#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GET_SORTID_OFFSET UNITYSDK_OFFSET(0x99231B0)
#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GET_UNLOCK_OFFSET UNITYSDK_OFFSET(0x9923930)
#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GET_WORLD_OFFSET UNITYSDK_OFFSET(0x9922FF0)
#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_INDEXOF_OFFSET UNITYSDK_OFFSET(0x9923070)
#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_SET_WORLD_OFFSET UNITYSDK_OFFSET(0x9923000)
#define RPG_CLIENT_NAVMAP_COMPOSEDTABDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9922F30)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int ComposedTabData_TypeDefinitionIndex = 59510;

	class ComposedTabData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::NavMap::SubTabData*>* _Children; // 0x10
		::RPG::Client::NavMap::WorldData* _World_k__BackingField; // 0x18
		::RPG::GameCore::NavMapTabRow* _Row; // 0x20

		::System::Void _ctor(::RPG::Client::NavMap::WorldData* worldData, ::RPG::GameCore::NavMapTabRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::WorldData*, ::RPG::GameCore::NavMapTabRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA__CTOR_OFFSET))(this, worldData, row);
		}

		static ::RPG::Client::NavMap::ComposedTabData* Create(::RPG::Client::NavMap::WorldData* worldData, ::RPG::GameCore::NavMapTabRow* row)
		{
			return ((::RPG::Client::NavMap::ComposedTabData*(*)(::RPG::Client::NavMap::WorldData*, ::RPG::GameCore::NavMapTabRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_CREATE_OFFSET))(worldData, row);
		}

		::System::Void AddChildTab(::RPG::Client::NavMap::SubTabData* subTab)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_ADDCHILDTAB_OFFSET))(this, subTab);
		}

		::RPG::Client::NavMap::WorldData* get_World()
		{
			return ((::RPG::Client::NavMap::WorldData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GET_WORLD_OFFSET))(this);
		}

		::System::Void set_World(::RPG::Client::NavMap::WorldData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::WorldData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_SET_WORLD_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GET_DESC_OFFSET))(this);
		}

		::System::Int32 IndexOf(::RPG::Client::NavMap::SubTabData* subTab)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_INDEXOF_OFFSET))(this, subTab);
		}

		::RPG::Client::NavMap::SubTabData* GetSubTabByIndex(::System::Int32 index)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GETSUBTABBYINDEX_OFFSET))(this, index);
		}

		::System::UInt32 get_SortID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GET_SORTID_OFFSET))(this);
		}

		::System::UInt32 GetRegionalMapNodeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GETREGIONALMAPNODEID_OFFSET))(this);
		}

		::RPG::Client::NavMap::SubTabData* GetDefaultSubTabAndLayer(::System::Int32& layer)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GETDEFAULTSUBTABANDLAYER_OFFSET))(this, layer);
		}

		::RPG::Client::NavMap::SubTabData* GetSubTabByFloorID(::System::UInt32 floorID)
		{
			return ((::RPG::Client::NavMap::SubTabData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GETSUBTABBYFLOORID_OFFSET))(this, floorID);
		}

		::System::Boolean Contains(::RPG::Client::NavMap::SubTabData* subTab)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_CONTAINS_OFFSET))(this, subTab);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GET_ID_OFFSET))(this);
		}

		::System::Boolean ContainSpaceType(::RPG::GameCore::MapSpaceType spaceType)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MapSpaceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_CONTAINSPACETYPE_OFFSET))(this, spaceType);
		}

		::RPG::Client::SubMissionData* GetTrackingSubMissionForShow()
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GETTRACKINGSUBMISSIONFORSHOW_OFFSET))(this);
		}

		::RPG::GameCore::MapSpaceType get_MapSpaceType()
		{
			return ((::RPG::GameCore::MapSpaceType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GET_MAPSPACETYPE_OFFSET))(this);
		}

		::System::Boolean get_IsComposedTab()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GET_ISCOMPOSEDTAB_OFFSET))(this);
		}

		::System::Int32 get_ShowSubTabCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GET_SHOWSUBTABCOUNT_OFFSET))(this);
		}

		::System::String* get_MenuIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GET_MENUICONPATH_OFFSET))(this);
		}

		::System::Boolean get_Unlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GET_UNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GET_ISSHOW_OFFSET))(this);
		}

		::System::Boolean get_IsEarlyAccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GET_ISEARLYACCESS_OFFSET))(this);
		}

		::System::Boolean get_IsPlayerHere()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_COMPOSEDTABDATA_GET_ISPLAYERHERE_OFFSET))(this);
		}
	};
}

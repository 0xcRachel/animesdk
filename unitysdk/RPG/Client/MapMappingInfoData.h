#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MappingInfoShowType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/GameCore/PropType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_683;
class Class_1_656B4378A6148CC6;
namespace RPG::Client { class FindChestData; }
namespace RPG::Client { class IMapIconTrackSnapshot; }
namespace RPG::Client { class MapAnchorDef; }
namespace RPG::Client { class MapDataKey; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapIconAreaData; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class MapEntryRow; }
namespace RPG::GameCore { class MappingInfoRow; }
namespace System { class String; }

#define RPG_CLIENT_MAPMAPPINGINFODATA_CREATECHEST_OFFSET UNITYSDK_OFFSET(0x158D54B0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x158D4B00)
#define RPG_CLIENT_MAPMAPPINGINFODATA_CREATE_2_OFFSET UNITYSDK_OFFSET(0x158D5050)
#define RPG_CLIENT_MAPMAPPINGINFODATA_CREATE_OFFSET UNITYSDK_OFFSET(0x158D3ED0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GETTRACKSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x158D65B0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_AREADATA_OFFSET UNITYSDK_OFFSET(0x158D6CE0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x158D6C60)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_CANTELEPORT_OFFSET UNITYSDK_OFFSET(0x158D66F0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x158D6CC0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x158D6A50)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_ENTRANCEID_OFFSET UNITYSDK_OFFSET(0x158D6200)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_FINDCHESTDATA_OFFSET UNITYSDK_OFFSET(0x158D6BA0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x158D6240)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x158D6C40)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_IDENTIFICATIONID_OFFSET UNITYSDK_OFFSET(0x158D6280)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x158D6C50)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_ISONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0x158D6260)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_ISTELEPORT_OFFSET UNITYSDK_OFFSET(0x158D66A0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_ISTRACKING_OFFSET UNITYSDK_OFFSET(0x158D6290)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPDATA_OFFSET UNITYSDK_OFFSET(0x158D6330)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPDEF_OFFSET UNITYSDK_OFFSET(0x158D63D0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPICONCOLOR_OFFSET UNITYSDK_OFFSET(0x158D64B0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0x158D64C0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPLAYER_OFFSET UNITYSDK_OFFSET(0x158D6440)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPNPCDEF_OFFSET UNITYSDK_OFFSET(0x158D6B90)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x158D6BC0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPPINGINFOROW_OFFSET UNITYSDK_OFFSET(0x158D6690)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPPOSITION_OFFSET UNITYSDK_OFFSET(0x158D6600)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPPROPDEF_OFFSET UNITYSDK_OFFSET(0x158D6B80)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPRAWPOSITION_OFFSET UNITYSDK_OFFSET(0x158D6620)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPROTATION_OFFSET UNITYSDK_OFFSET(0x158D6640)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x158D6920)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_NEARESTTELEPORTMAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x158D6BB0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0x158D6220)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_POSITIONINAREAMAP_OFFSET UNITYSDK_OFFSET(0x158D6C80)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_PROPSTATE_OFFSET UNITYSDK_OFFSET(0x158D6660)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_PROPTYPE_OFFSET UNITYSDK_OFFSET(0x158D6670)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0x158D6C70)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_SHOWTYPE_OFFSET UNITYSDK_OFFSET(0x158D6680)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x158D6CA0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_GET_SUBMAPID_OFFSET UNITYSDK_OFFSET(0x158D6C90)
#define RPG_CLIENT_MAPMAPPINGINFODATA_SET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0x158D65A0)
#define RPG_CLIENT_MAPMAPPINGINFODATA_SET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x158D6BD0)
#define RPG_CLIENT_MAPMAPPINGINFODATA__CTOR_OFFSET UNITYSDK_OFFSET(0x158D3DC0)
#define RPG_CLIENT_MAPMAPPINGINFODATA__GETANCHORINFO_OFFSET UNITYSDK_OFFSET(0x158D6F30)
#define RPG_CLIENT_MAPMAPPINGINFODATA__INITCHESTMAPMAPPINGINFODATA_OFFSET UNITYSDK_OFFSET(0x158D5560)
#define RPG_CLIENT_MAPMAPPINGINFODATA__INITMAPMAPPINGINFODATA_1_OFFSET UNITYSDK_OFFSET(0x158D4B90)
#define RPG_CLIENT_MAPMAPPINGINFODATA__INITMAPMAPPINGINFODATA_2_OFFSET UNITYSDK_OFFSET(0x158D50E0)
#define RPG_CLIENT_MAPMAPPINGINFODATA__INITMAPMAPPINGINFODATA_OFFSET UNITYSDK_OFFSET(0x158D3F60)
#define RPG_CLIENT_MAPMAPPINGINFODATA__INITMODIFIER_OFFSET UNITYSDK_OFFSET(0x158D5E90)
#define RPG_CLIENT_MAPMAPPINGINFODATA__OVERRIDEBYANCHOR_OFFSET UNITYSDK_OFFSET(0x158D5D30)
#define RPG_CLIENT_MAPMAPPINGINFODATA__SETNPCMAPICONTYPE_OFFSET UNITYSDK_OFFSET(0x158D6050)
#define RPG_CLIENT_MAPMAPPINGINFODATA__UPDATEMAPICONAREADATA_1_OFFSET UNITYSDK_OFFSET(0x158D6E00)
#define RPG_CLIENT_MAPMAPPINGINFODATA__UPDATEMAPICONAREADATA_OFFSET UNITYSDK_OFFSET(0x158D5CE0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapMappingInfoData_TypeDefinitionIndex = 57952;

	class MapMappingInfoData : public ::System::Object
	{
	public:
		::RPG::GameCore::MappingInfoRow* _MappingInfoRow; // 0x10
		::RPG::Client::MapPropDef* _MapPropDef; // 0x18
		::Class_0_16E4307DCC419505_683* _Modifier; // 0x20
		::RPG::GameCore::MapEntryRow* _MapEntryRow; // 0x28
		::RPG::Client::MapNpcDef* _MapNpcDef; // 0x30
		::RPG::Client::MapIconAreaData* _AreaData; // 0x38
		::System::String* _AnchorKey; // 0x40
		::RPG::Client::FindChestData* _FindChestData; // 0x48
		::RPG::Client::MapDataKey* _MapDataKey; // 0x50
		::System::UInt32 _GroupID; // 0x58
		::System::UInt32 _NearestTeleportMappingInfoID; // 0x5C
		::RPG::Client::MappingInfoShowType _MappingInfoShowType; // 0x60
		::RPG::GameCore::PropType _PropType; // 0x64
		::UnityEngine::Vector2 _PositionInAreaMap; // 0x68
		::System::UInt32 _MapIconType; // 0x70
		::RPG::GameCore::PropState _PropState; // 0x74
		::UnityEngine::Vector3 _MapRowPosition; // 0x78
		::System::Int32 _MapLayer; // 0x84
		::UnityEngine::Color _MapIconColor; // 0x88
		::System::Int32 _SectionID; // 0x98
		::System::Int32 _AreaID; // 0x9C
		::UnityEngine::Vector3 _MapRotation; // 0xA0
		::System::UInt32 _MappingInfoID; // 0xAC
		::System::UInt32 _IdentificationID; // 0xB0
		::System::UInt32 _SubMapID; // 0xB4
		::UnityEngine::Vector3 _MapPosition; // 0xB8
		::System::UInt32 _InstanceId; // 0xC4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MapMappingInfoData* Create(::RPG::Client::MapDataKey* mapDataKey, ::System::UInt32 entranceID, ::RPG::Client::MapPropDef* mapPropDef)
		{
			return ((::RPG::Client::MapMappingInfoData*(*)(::RPG::Client::MapDataKey*, ::System::UInt32, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_CREATE_OFFSET))(mapDataKey, entranceID, mapPropDef);
		}

		static ::RPG::Client::MapMappingInfoData* Create_1(::RPG::Client::MapDataKey* mapDataKey, ::System::UInt32 entranceID, ::RPG::Client::MapNpcDef* mapNpcDef)
		{
			return ((::RPG::Client::MapMappingInfoData*(*)(::RPG::Client::MapDataKey*, ::System::UInt32, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_CREATE_1_OFFSET))(mapDataKey, entranceID, mapNpcDef);
		}

		static ::RPG::Client::MapMappingInfoData* Create_2(::RPG::Client::MapDataKey* mapDataKey, ::System::UInt32 entranceID, ::Class_1_656B4378A6148CC6* mapMissionCtorInfo)
		{
			return ((::RPG::Client::MapMappingInfoData*(*)(::RPG::Client::MapDataKey*, ::System::UInt32, ::Class_1_656B4378A6148CC6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_CREATE_2_OFFSET))(mapDataKey, entranceID, mapMissionCtorInfo);
		}

		static ::RPG::Client::MapMappingInfoData* CreateChest(::RPG::Client::MapDataKey* mapDataKey, ::System::UInt32 entranceID, ::RPG::Client::MapPropDef* mapPropDef, ::RPG::Client::FindChestData* findChestData, ::System::UInt32 mappingInfoID)
		{
			return ((::RPG::Client::MapMappingInfoData*(*)(::RPG::Client::MapDataKey*, ::System::UInt32, ::RPG::Client::MapPropDef*, ::RPG::Client::FindChestData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_CREATECHEST_OFFSET))(mapDataKey, entranceID, mapPropDef, findChestData, mappingInfoID);
		}

		::System::Void _InitMapMappingInfoData(::RPG::Client::MapDataKey* mapDataKey, ::System::UInt32 entranceID, ::RPG::Client::MapPropDef* mapPropDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDataKey*, ::System::UInt32, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA__INITMAPMAPPINGINFODATA_OFFSET))(this, mapDataKey, entranceID, mapPropDef);
		}

		::System::Void _InitMapMappingInfoData_1(::RPG::Client::MapDataKey* mapDataKey, ::System::UInt32 entranceID, ::RPG::Client::MapNpcDef* mapNpcDef)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDataKey*, ::System::UInt32, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA__INITMAPMAPPINGINFODATA_1_OFFSET))(this, mapDataKey, entranceID, mapNpcDef);
		}

		::System::Void _InitMapMappingInfoData_2(::RPG::Client::MapDataKey* mapDataKey, ::System::UInt32 entranceID, ::Class_1_656B4378A6148CC6* mapMissionCtorInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDataKey*, ::System::UInt32, ::Class_1_656B4378A6148CC6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA__INITMAPMAPPINGINFODATA_2_OFFSET))(this, mapDataKey, entranceID, mapMissionCtorInfo);
		}

		::System::Void _InitChestMapMappingInfoData(::RPG::Client::MapDataKey* mapDataKey, ::System::UInt32 entranceID, ::RPG::Client::MapPropDef* mapPropDef, ::RPG::Client::FindChestData* findChestData, ::System::UInt32 mappingInfoID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDataKey*, ::System::UInt32, ::RPG::Client::MapPropDef*, ::RPG::Client::FindChestData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA__INITCHESTMAPMAPPINGINFODATA_OFFSET))(this, mapDataKey, entranceID, mapPropDef, findChestData, mappingInfoID);
		}

		::System::UInt32 get_EntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_ENTRANCEID_OFFSET))(this);
		}

		::System::UInt32 get_PlaneID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_PLANEID_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_FLOORID_OFFSET))(this);
		}

		::System::Boolean get_IsOnlinePlayRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_ISONLINEPLAYROOM_OFFSET))(this);
		}

		::System::UInt32 get_IdentificationID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_IDENTIFICATIONID_OFFSET))(this);
		}

		::System::Boolean get_IsTracking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_ISTRACKING_OFFSET))(this);
		}

		::RPG::Client::NavMap::IMapDataSource* get_MapData()
		{
			return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPDATA_OFFSET))(this);
		}

		::RPG::Client::MapDef* get_MapDef()
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPDEF_OFFSET))(this);
		}

		::System::Int32 get_MapLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPLAYER_OFFSET))(this);
		}

		::UnityEngine::Color get_MapIconColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPICONCOLOR_OFFSET))(this);
		}

		::System::UInt32 get_MapIconType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPICONTYPE_OFFSET))(this);
		}

		::System::Void set_MapIconType(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_SET_MAPICONTYPE_OFFSET))(this, value);
		}

		::RPG::Client::IMapIconTrackSnapshot* GetTrackSnapshot()
		{
			return ((::RPG::Client::IMapIconTrackSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GETTRACKSNAPSHOT_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapRawPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPRAWPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapRotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPROTATION_OFFSET))(this);
		}

		::RPG::GameCore::PropState get_PropState()
		{
			return ((::RPG::GameCore::PropState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_PROPSTATE_OFFSET))(this);
		}

		::RPG::GameCore::PropType get_PropType()
		{
			return ((::RPG::GameCore::PropType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_PROPTYPE_OFFSET))(this);
		}

		::RPG::Client::MappingInfoShowType get_ShowType()
		{
			return ((::RPG::Client::MappingInfoShowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_SHOWTYPE_OFFSET))(this);
		}

		::RPG::GameCore::MappingInfoRow* get_MappingInfoRow()
		{
			return ((::RPG::GameCore::MappingInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPPINGINFOROW_OFFSET))(this);
		}

		::System::Boolean get_IsTeleport()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_ISTELEPORT_OFFSET))(this);
		}

		::System::Boolean get_CanTeleport()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_CANTELEPORT_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::MapPropDef* get_MapPropDef()
		{
			return ((::RPG::Client::MapPropDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPPROPDEF_OFFSET))(this);
		}

		::RPG::Client::MapNpcDef* get_MapNpcDef()
		{
			return ((::RPG::Client::MapNpcDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPNPCDEF_OFFSET))(this);
		}

		::RPG::Client::FindChestData* get_FindChestData()
		{
			return ((::RPG::Client::FindChestData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_FINDCHESTDATA_OFFSET))(this);
		}

		::System::UInt32 get_NearestTeleportMappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_NEARESTTELEPORTMAPPINGINFOID_OFFSET))(this);
		}

		::System::UInt32 get_MappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_MAPPINGINFOID_OFFSET))(this);
		}

		::System::Void set_MappingInfoID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_SET_MAPPINGINFOID_OFFSET))(this, value);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_InstanceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Int32 get_AreaID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_AREAID_OFFSET))(this);
		}

		::System::Int32 get_SectionID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_SECTIONID_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_PositionInAreaMap()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_POSITIONINAREAMAP_OFFSET))(this);
		}

		::System::UInt32 get_SubMapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_SUBMAPID_OFFSET))(this);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_CONTENTID_OFFSET))(this);
		}

		::RPG::Client::MapIconAreaData* get_AreaData()
		{
			return ((::RPG::Client::MapIconAreaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA_GET_AREADATA_OFFSET))(this);
		}

		::System::Void _SetNPCMapIconType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA__SETNPCMAPICONTYPE_OFFSET))(this);
		}

		::System::Void _UpdateMapIconAreaData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA__UPDATEMAPICONAREADATA_OFFSET))(this);
		}

		::System::Void _UpdateMapIconAreaData_1(::System::UInt32 groupID, ::System::UInt32 instanceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA__UPDATEMAPICONAREADATA_1_OFFSET))(this, groupID, instanceID);
		}

		::System::Void _OverrideByAnchor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA__OVERRIDEBYANCHOR_OFFSET))(this);
		}

		::RPG::Client::MapAnchorDef* _GetAnchorInfo()
		{
			return ((::RPG::Client::MapAnchorDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA__GETANCHORINFO_OFFSET))(this);
		}

		::System::Void _InitModifier()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMAPPINGINFODATA__INITMODIFIER_OFFSET))(this);
		}
	};
}

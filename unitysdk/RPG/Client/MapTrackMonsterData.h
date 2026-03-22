#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MappingInfoShowType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MinimapAreaType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class IMapIconTrackSnapshot; }
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapIconAreaData; }
namespace RPG::Client { class MapNpcDef; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class MappingInfoRow; }

#define RPG_CLIENT_MAPTRACKMONSTERDATA_GETTRACKSNAPSHOT_OFFSET UNITYSDK_OFFSET(0x96368B0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_AREADATA_OFFSET UNITYSDK_OFFSET(0x9636BB0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x9636AA0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x9636BD0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9636B50)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0x9636AE0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_ENTRANCEID_OFFSET UNITYSDK_OFFSET(0x9636700)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x9636710)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x9636850)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_IDENTIFICATIONID_OFFSET UNITYSDK_OFFSET(0x9636840)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x9636860)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_ISTELEPORT_OFFSET UNITYSDK_OFFSET(0x9636980)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_ISTRACKING_OFFSET UNITYSDK_OFFSET(0x96369D0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPAREATYPE_OFFSET UNITYSDK_OFFSET(0x9636AC0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPDATA_OFFSET UNITYSDK_OFFSET(0x9636730)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPDEF_OFFSET UNITYSDK_OFFSET(0x96367D0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPICONCOLOR_OFFSET UNITYSDK_OFFSET(0x9636890)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0x96368A0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPLAYER_OFFSET UNITYSDK_OFFSET(0x9636880)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPNPCDEF_OFFSET UNITYSDK_OFFSET(0x9636A90)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x9636870)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPPINGINFOROW_OFFSET UNITYSDK_OFFSET(0x9636970)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPPOSITION_OFFSET UNITYSDK_OFFSET(0x9636910)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPRAWPOSITION_OFFSET UNITYSDK_OFFSET(0x9636930)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPROTATION_OFFSET UNITYSDK_OFFSET(0x9636950)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9636AF0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_NEARESTTELEPORTMAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x9636A80)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_POSITIONINAREAMAP_OFFSET UNITYSDK_OFFSET(0x9636AD0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0x9636AB0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_SHOWTYPE_OFFSET UNITYSDK_OFFSET(0x9636900)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x9636BC0)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_INITMAPTRACKMONSTERDATA_OFFSET UNITYSDK_OFFSET(0x9636110)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0x9636720)
#define RPG_CLIENT_MAPTRACKMONSTERDATA_TRYOVERRIDEMAPPINGINFO_OFFSET UNITYSDK_OFFSET(0x9636680)
#define RPG_CLIENT_MAPTRACKMONSTERDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9636030)
#define RPG_CLIENT_MAPTRACKMONSTERDATA__UPDATEMAPICONAREADATA_OFFSET UNITYSDK_OFFSET(0x9636560)

namespace RPG::Client
{
	inline static constexpr unsigned int MapTrackMonsterData_TypeDefinitionIndex = 49943;

	class MapTrackMonsterData : public ::System::Object
	{
	public:
		::RPG::Client::MapIconAreaData* _AreaData; // 0x10
		::RPG::Client::MapNpcDef* _MapNpcDef; // 0x18
		::RPG::GameCore::MappingInfoRow* _MappingInfoRow; // 0x20
		::System::UInt32 _FloorID_k__BackingField; // 0x28
		::UnityEngine::Vector3 _MapPosition; // 0x2C
		::System::UInt32 _MappingInfoID; // 0x38
		::System::UInt32 _NearestTeleportMappingInfoID; // 0x3C
		::UnityEngine::Color _MapIconColor; // 0x40
		::System::Int32 _MapLayer; // 0x50
		::System::UInt32 _StoryLineID; // 0x54
		::System::Int32 _SectionID; // 0x58
		::System::UInt32 _ContentID; // 0x5C
		::System::Int32 _AreaID; // 0x60
		::System::UInt32 _EntranceID; // 0x64
		::System::UInt32 _OriginMappingInfoID; // 0x68
		::RPG::Client::MappingInfoShowType _MappingInfoShowType; // 0x6C
		::System::UInt32 _MapIconType; // 0x70
		::RPG::GameCore::MinimapAreaType _MapAreaType; // 0x74
		::UnityEngine::Vector3 _MapRotation; // 0x78
		::System::UInt32 _GroupID; // 0x84
		::System::UInt32 _InstanceId; // 0x88
		::UnityEngine::Vector2 _PositionInAreaMap; // 0x8C
		::System::UInt32 _IdentificationID; // 0x94
		::System::UInt32 _DimensionID; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA__CTOR_OFFSET))(this);
		}

		::System::Void InitMapTrackMonsterData(::System::UInt32 entranceID, ::System::UInt32 dimensionID, ::System::UInt32 storyLineID, ::System::UInt32 contentID, ::RPG::Client::MapNpcDef* mapNpcDef)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_INITMAPTRACKMONSTERDATA_OFFSET))(this, entranceID, dimensionID, storyLineID, contentID, mapNpcDef);
		}

		::System::Void TryOverrideMappingInfo(::System::UInt32 mapInfoID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_TRYOVERRIDEMAPPINGINFO_OFFSET))(this, mapInfoID);
		}

		::System::UInt32 get_EntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_ENTRANCEID_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_FLOORID_OFFSET))(this);
		}

		::System::Void set_FloorID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_SET_FLOORID_OFFSET))(this, value);
		}

		::RPG::Client::NavMap::IMapDataSource* get_MapData()
		{
			return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPDATA_OFFSET))(this);
		}

		::RPG::Client::MapDef* get_MapDef()
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPDEF_OFFSET))(this);
		}

		::System::UInt32 get_IdentificationID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_IDENTIFICATIONID_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_InstanceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_INSTANCEID_OFFSET))(this);
		}

		::System::UInt32 get_MappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPPINGINFOID_OFFSET))(this);
		}

		::System::Int32 get_MapLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPLAYER_OFFSET))(this);
		}

		::UnityEngine::Color get_MapIconColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPICONCOLOR_OFFSET))(this);
		}

		::System::UInt32 get_MapIconType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPICONTYPE_OFFSET))(this);
		}

		::RPG::Client::IMapIconTrackSnapshot* GetTrackSnapshot()
		{
			return ((::RPG::Client::IMapIconTrackSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GETTRACKSNAPSHOT_OFFSET))(this);
		}

		::RPG::Client::MappingInfoShowType get_ShowType()
		{
			return ((::RPG::Client::MappingInfoShowType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_SHOWTYPE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapRawPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPRAWPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapRotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPROTATION_OFFSET))(this);
		}

		::RPG::GameCore::MappingInfoRow* get_MappingInfoRow()
		{
			return ((::RPG::GameCore::MappingInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPPINGINFOROW_OFFSET))(this);
		}

		::System::Boolean get_IsTeleport()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_ISTELEPORT_OFFSET))(this);
		}

		::System::Boolean get_IsTracking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_ISTRACKING_OFFSET))(this);
		}

		::System::UInt32 get_NearestTeleportMappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_NEARESTTELEPORTMAPPINGINFOID_OFFSET))(this);
		}

		::RPG::Client::MapNpcDef* get_MapNpcDef()
		{
			return ((::RPG::Client::MapNpcDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPNPCDEF_OFFSET))(this);
		}

		::System::Int32 get_AreaID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_AREAID_OFFSET))(this);
		}

		::System::Int32 get_SectionID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_SECTIONID_OFFSET))(this);
		}

		::RPG::GameCore::MinimapAreaType get_MapAreaType()
		{
			return ((::RPG::GameCore::MinimapAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_MAPAREATYPE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_PositionInAreaMap()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_POSITIONINAREAMAP_OFFSET))(this);
		}

		::System::UInt32 get_DimensionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_DIMENSIONID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::MapIconAreaData* get_AreaData()
		{
			return ((::RPG::Client::MapIconAreaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_AREADATA_OFFSET))(this);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA_GET_CONTENTID_OFFSET))(this);
		}

		::System::Void _UpdateMapIconAreaData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTRACKMONSTERDATA__UPDATEMAPICONAREADATA_OFFSET))(this);
		}
	};
}

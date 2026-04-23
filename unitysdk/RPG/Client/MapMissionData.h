#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MinimapAreaType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_656B4378A6148CC6;
namespace RPG::Client { class MapDataKey; }
namespace RPG::Client { class MapIconAreaData; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::GameCore { class MappingInfoRow; }

#define RPG_CLIENT_MAPMISSIONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x158D75D0)
#define RPG_CLIENT_MAPMISSIONDATA_GET_AREADATA_OFFSET UNITYSDK_OFFSET(0x158D8310)
#define RPG_CLIENT_MAPMISSIONDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x158D8210)
#define RPG_CLIENT_MAPMISSIONDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x158D82A0)
#define RPG_CLIENT_MAPMISSIONDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x158D7D60)
#define RPG_CLIENT_MAPMISSIONDATA_GET_ENTRANCEID_OFFSET UNITYSDK_OFFSET(0x158D7B30)
#define RPG_CLIENT_MAPMISSIONDATA_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x158D82F0)
#define RPG_CLIENT_MAPMISSIONDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x158D81E0)
#define RPG_CLIENT_MAPMISSIONDATA_GET_IDENTIFICATIONID_OFFSET UNITYSDK_OFFSET(0x158D7B40)
#define RPG_CLIENT_MAPMISSIONDATA_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x158D81F0)
#define RPG_CLIENT_MAPMISSIONDATA_GET_ISCONNECTID_OFFSET UNITYSDK_OFFSET(0x158D82E0)
#define RPG_CLIENT_MAPMISSIONDATA_GET_ISONLINEPLAYROOM_OFFSET UNITYSDK_OFFSET(0x158D82C0)
#define RPG_CLIENT_MAPMISSIONDATA_GET_ISTRACKING_OFFSET UNITYSDK_OFFSET(0x158D8180)
#define RPG_CLIENT_MAPMISSIONDATA_GET_MAPAREATYPE_OFFSET UNITYSDK_OFFSET(0x158D8230)
#define RPG_CLIENT_MAPMISSIONDATA_GET_MAPICONCOLOR_OFFSET UNITYSDK_OFFSET(0x158D7B70)
#define RPG_CLIENT_MAPMISSIONDATA_GET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0x158D8050)
#define RPG_CLIENT_MAPMISSIONDATA_GET_MAPLAYER_OFFSET UNITYSDK_OFFSET(0x158D7B50)
#define RPG_CLIENT_MAPMISSIONDATA_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x158D8200)
#define RPG_CLIENT_MAPMISSIONDATA_GET_MAPPINGINFOROW_OFFSET UNITYSDK_OFFSET(0x158D7B60)
#define RPG_CLIENT_MAPMISSIONDATA_GET_MAPPOSITION_OFFSET UNITYSDK_OFFSET(0x158D8110)
#define RPG_CLIENT_MAPMISSIONDATA_GET_MAPRAWPOSITION_OFFSET UNITYSDK_OFFSET(0x158D8130)
#define RPG_CLIENT_MAPMISSIONDATA_GET_MAPROTATION_OFFSET UNITYSDK_OFFSET(0x158D8150)
#define RPG_CLIENT_MAPMISSIONDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x158D7B80)
#define RPG_CLIENT_MAPMISSIONDATA_GET_NEARESTTELEPORTMAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x158D8270)
#define RPG_CLIENT_MAPMISSIONDATA_GET_POSITIONINAREAMAP_OFFSET UNITYSDK_OFFSET(0x158D8240)
#define RPG_CLIENT_MAPMISSIONDATA_GET_REGIONID_OFFSET UNITYSDK_OFFSET(0x158D8220)
#define RPG_CLIENT_MAPMISSIONDATA_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0x158D8260)
#define RPG_CLIENT_MAPMISSIONDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x158D8280)
#define RPG_CLIENT_MAPMISSIONDATA_GET_SUBMAPID_OFFSET UNITYSDK_OFFSET(0x158D8250)
#define RPG_CLIENT_MAPMISSIONDATA_GET_SUBMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x158D8170)
#define RPG_CLIENT_MAPMISSIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x158D74D0)
#define RPG_CLIENT_MAPMISSIONDATA__INITMAPMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x158D7750)
#define RPG_CLIENT_MAPMISSIONDATA__UPDATEMAPICONAREADATA_OFFSET UNITYSDK_OFFSET(0x158D79B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapMissionData_TypeDefinitionIndex = 57954;

	class MapMissionData : public ::System::Object
	{
	public:
		::RPG::Client::SubMissionData* _SubMissionData; // 0x10
		::RPG::Client::MapDataKey* _MapDataKey; // 0x18
		::RPG::Client::MapIconAreaData* _AreaData; // 0x20
		::RPG::GameCore::MappingInfoRow* _MappingInfoRow; // 0x28
		::UnityEngine::Vector3 _MapPosition; // 0x30
		::System::Boolean _IsConnect; // 0x3C
		::System::UInt32 _MappingInfoID; // 0x40
		::System::Int32 _SectionID; // 0x44
		::System::UInt32 _IdentificationID; // 0x48
		::RPG::GameCore::MinimapAreaType _MapAreaType; // 0x4C
		::System::Int32 _MapLayer; // 0x50
		::System::UInt32 _MapIconType; // 0x54
		::System::UInt32 _RegionID; // 0x58
		::UnityEngine::Vector2 _PositionInAreaMap; // 0x5C
		::System::Int32 _AreaID; // 0x64
		::System::UInt32 _SubMapID; // 0x68
		::System::UInt32 _GroupID; // 0x6C
		::System::UInt32 _InstanceId; // 0x70
		::UnityEngine::Vector3 _MapRotation; // 0x74
		::UnityEngine::Color _MapIconColor; // 0x80
		::System::UInt32 _EntranceID; // 0x90
		::System::UInt32 _NearestTeleportMappingInfoID; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::MapMissionData* Create(::RPG::Client::MapDataKey* mapDataKey, ::System::UInt32 entranceID, ::RPG::Client::SubMissionData* subMissionData, ::Class_1_656B4378A6148CC6* mapMissionCtorInfo)
		{
			return ((::RPG::Client::MapMissionData*(*)(::RPG::Client::MapDataKey*, ::System::UInt32, ::RPG::Client::SubMissionData*, ::Class_1_656B4378A6148CC6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_CREATE_OFFSET))(mapDataKey, entranceID, subMissionData, mapMissionCtorInfo);
		}

		::System::Void _InitMapMissionData(::RPG::Client::MapDataKey* mapDataKey, ::System::UInt32 entranceID, ::RPG::Client::SubMissionData* subMissionData, ::Class_1_656B4378A6148CC6* mapMissionCtorInfo)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDataKey*, ::System::UInt32, ::RPG::Client::SubMissionData*, ::Class_1_656B4378A6148CC6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA__INITMAPMISSIONDATA_OFFSET))(this, mapDataKey, entranceID, subMissionData, mapMissionCtorInfo);
		}

		::System::UInt32 get_EntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_ENTRANCEID_OFFSET))(this);
		}

		::System::UInt32 get_IdentificationID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_IDENTIFICATIONID_OFFSET))(this);
		}

		::System::Int32 get_MapLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_MAPLAYER_OFFSET))(this);
		}

		::RPG::GameCore::MappingInfoRow* get_MappingInfoRow()
		{
			return ((::RPG::GameCore::MappingInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_MAPPINGINFOROW_OFFSET))(this);
		}

		::UnityEngine::Color get_MapIconColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_MAPICONCOLOR_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_DESC_OFFSET))(this);
		}

		::System::UInt32 get_MapIconType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_MAPICONTYPE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_MAPPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapRawPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_MAPRAWPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapRotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_MAPROTATION_OFFSET))(this);
		}

		::RPG::Client::SubMissionData* get_SubMissionData()
		{
			return ((::RPG::Client::SubMissionData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_SUBMISSIONDATA_OFFSET))(this);
		}

		::System::Boolean get_IsTracking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_ISTRACKING_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_InstanceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_INSTANCEID_OFFSET))(this);
		}

		::System::UInt32 get_MappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_MAPPINGINFOID_OFFSET))(this);
		}

		::System::Int32 get_AreaID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_AREAID_OFFSET))(this);
		}

		::System::UInt32 get_RegionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_REGIONID_OFFSET))(this);
		}

		::RPG::GameCore::MinimapAreaType get_MapAreaType()
		{
			return ((::RPG::GameCore::MinimapAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_MAPAREATYPE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_PositionInAreaMap()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_POSITIONINAREAMAP_OFFSET))(this);
		}

		::System::UInt32 get_SubMapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_SUBMAPID_OFFSET))(this);
		}

		::System::Int32 get_SectionID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_SECTIONID_OFFSET))(this);
		}

		::System::UInt32 get_NearestTeleportMappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_NEARESTTELEPORTMAPPINGINFOID_OFFSET))(this);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_CONTENTID_OFFSET))(this);
		}

		::System::Boolean get_IsOnlinePlayRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_ISONLINEPLAYROOM_OFFSET))(this);
		}

		::System::Boolean get_IsConnectID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_ISCONNECTID_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_FLOORID_OFFSET))(this);
		}

		::RPG::Client::MapIconAreaData* get_AreaData()
		{
			return ((::RPG::Client::MapIconAreaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_AREADATA_OFFSET))(this);
		}

		::System::Void _UpdateMapIconAreaData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA__UPDATEMAPICONAREADATA_OFFSET))(this);
		}
	};
}

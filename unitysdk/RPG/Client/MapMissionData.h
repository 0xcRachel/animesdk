#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MinimapAreaType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_656B4378A6148CC6;
namespace RPG::Client { class MapIconAreaData; }
namespace RPG::Client { class SubMissionData; }
namespace RPG::GameCore { class MappingInfoRow; }

#define RPG_CLIENT_MAPMISSIONDATA_GET_AREADATA_OFFSET UNITYSDK_OFFSET(0x9627FC0)
#define RPG_CLIENT_MAPMISSIONDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x9627EF0)
#define RPG_CLIENT_MAPMISSIONDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x9627F80)
#define RPG_CLIENT_MAPMISSIONDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9627A40)
#define RPG_CLIENT_MAPMISSIONDATA_GET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0x9627F50)
#define RPG_CLIENT_MAPMISSIONDATA_GET_ENTRANCEID_OFFSET UNITYSDK_OFFSET(0x9627820)
#define RPG_CLIENT_MAPMISSIONDATA_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x9627FA0)
#define RPG_CLIENT_MAPMISSIONDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x9627EC0)
#define RPG_CLIENT_MAPMISSIONDATA_GET_IDENTIFICATIONID_OFFSET UNITYSDK_OFFSET(0x9627830)
#define RPG_CLIENT_MAPMISSIONDATA_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x9627ED0)
#define RPG_CLIENT_MAPMISSIONDATA_GET_ISCONNECTID_OFFSET UNITYSDK_OFFSET(0x9627F90)
#define RPG_CLIENT_MAPMISSIONDATA_GET_ISTRACKING_OFFSET UNITYSDK_OFFSET(0x9627E60)
#define RPG_CLIENT_MAPMISSIONDATA_GET_MAPAREATYPE_OFFSET UNITYSDK_OFFSET(0x9627F10)
#define RPG_CLIENT_MAPMISSIONDATA_GET_MAPICONCOLOR_OFFSET UNITYSDK_OFFSET(0x9627860)
#define RPG_CLIENT_MAPMISSIONDATA_GET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0x9627D30)
#define RPG_CLIENT_MAPMISSIONDATA_GET_MAPLAYER_OFFSET UNITYSDK_OFFSET(0x9627840)
#define RPG_CLIENT_MAPMISSIONDATA_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x9627EE0)
#define RPG_CLIENT_MAPMISSIONDATA_GET_MAPPINGINFOROW_OFFSET UNITYSDK_OFFSET(0x9627850)
#define RPG_CLIENT_MAPMISSIONDATA_GET_MAPPOSITION_OFFSET UNITYSDK_OFFSET(0x9627DF0)
#define RPG_CLIENT_MAPMISSIONDATA_GET_MAPRAWPOSITION_OFFSET UNITYSDK_OFFSET(0x9627E10)
#define RPG_CLIENT_MAPMISSIONDATA_GET_MAPROTATION_OFFSET UNITYSDK_OFFSET(0x9627E30)
#define RPG_CLIENT_MAPMISSIONDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9627870)
#define RPG_CLIENT_MAPMISSIONDATA_GET_NEARESTTELEPORTMAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x9627F60)
#define RPG_CLIENT_MAPMISSIONDATA_GET_POSITIONINAREAMAP_OFFSET UNITYSDK_OFFSET(0x9627F20)
#define RPG_CLIENT_MAPMISSIONDATA_GET_REGIONID_OFFSET UNITYSDK_OFFSET(0x9627F00)
#define RPG_CLIENT_MAPMISSIONDATA_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0x9627F40)
#define RPG_CLIENT_MAPMISSIONDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x9627F70)
#define RPG_CLIENT_MAPMISSIONDATA_GET_SUBMAPID_OFFSET UNITYSDK_OFFSET(0x9627F30)
#define RPG_CLIENT_MAPMISSIONDATA_GET_SUBMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x9627E50)
#define RPG_CLIENT_MAPMISSIONDATA_INITMAPMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x96273B0)
#define RPG_CLIENT_MAPMISSIONDATA_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0x9627FB0)
#define RPG_CLIENT_MAPMISSIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x96272A0)
#define RPG_CLIENT_MAPMISSIONDATA__UPDATEMAPICONAREADATA_OFFSET UNITYSDK_OFFSET(0x96276A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapMissionData_TypeDefinitionIndex = 49939;

	class MapMissionData : public ::System::Object
	{
	public:
		::RPG::Client::MapIconAreaData* _AreaData; // 0x10
		::RPG::GameCore::MappingInfoRow* _MappingInfoRow; // 0x18
		::RPG::Client::SubMissionData* _SubMissionData; // 0x20
		::System::UInt32 _ContentID; // 0x28
		::System::UInt32 _DimensionID; // 0x2C
		::System::UInt32 _StoryLineID; // 0x30
		::System::UInt32 _InstanceId; // 0x34
		::System::UInt32 _NearestTeleportMappingInfoID; // 0x38
		::System::UInt32 _EntranceID; // 0x3C
		::System::Boolean _IsConnect; // 0x40
		::System::Int32 _AreaID; // 0x44
		::RPG::GameCore::MinimapAreaType _MapAreaType; // 0x48
		::System::UInt32 _MapIconType; // 0x4C
		::System::Int32 _SectionID; // 0x50
		::UnityEngine::Vector2 _PositionInAreaMap; // 0x54
		::UnityEngine::Vector3 _MapRotation; // 0x5C
		::System::UInt32 _FloorID_k__BackingField; // 0x68
		::System::UInt32 _GroupID; // 0x6C
		::System::UInt32 _SubMapID; // 0x70
		::System::Int32 _MapLayer; // 0x74
		::UnityEngine::Vector3 _MapPosition; // 0x78
		::System::UInt32 _IdentificationID; // 0x84
		::UnityEngine::Color _MapIconColor; // 0x88
		::System::UInt32 _MappingInfoID; // 0x98
		::System::UInt32 _RegionID; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA__CTOR_OFFSET))(this);
		}

		::System::Void InitMapMissionData(::System::UInt32 entranceID, ::System::UInt32 dimensionID, ::System::UInt32 storyLineID, ::System::UInt32 contentID, ::RPG::Client::SubMissionData* subMissionData, ::Class_1_656B4378A6148CC6* mapMissionCtorInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::Client::SubMissionData*, ::Class_1_656B4378A6148CC6*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_INITMAPMISSIONDATA_OFFSET))(this, entranceID, dimensionID, storyLineID, contentID, subMissionData, mapMissionCtorInfo);
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

		::System::UInt32 get_DimensionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_DIMENSIONID_OFFSET))(this);
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

		::System::Boolean get_IsConnectID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_ISCONNECTID_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_GET_FLOORID_OFFSET))(this);
		}

		::System::Void set_FloorID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPMISSIONDATA_SET_FLOORID_OFFSET))(this, value);
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

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MinimapAreaType.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/GameCore/PropType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapIconAreaData; }
namespace RPG::Client { class MapPropDef; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace RPG::GameCore { class MappingInfoRow; }
namespace System { class String; }

#define RPG_CLIENT_MAPTELEPORTDATA_GET_AREADATA_OFFSET UNITYSDK_OFFSET(0x9636020)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x9635F20)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_CANTELEPORT_OFFSET UNITYSDK_OFFSET(0x9635DC0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x9635F70)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9635FF0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_DIMENSIONID_OFFSET UNITYSDK_OFFSET(0x9635F50)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_ENTRANCEID_OFFSET UNITYSDK_OFFSET(0x9635C20)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x9635FA0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x9635F80)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_IDENTIFICATIONID_OFFSET UNITYSDK_OFFSET(0x9635D40)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x9635F90)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x9635C10)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_ISTELEPORT_OFFSET UNITYSDK_OFFSET(0x9635D70)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPAREATYPE_OFFSET UNITYSDK_OFFSET(0x9635F30)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPDATA_OFFSET UNITYSDK_OFFSET(0x9635C30)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPDEF_OFFSET UNITYSDK_OFFSET(0x9635CD0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPICONCOLOR_OFFSET UNITYSDK_OFFSET(0x9635E70)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPICONTYPE_OFFSET UNITYSDK_OFFSET(0x9635E80)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPLAYER_OFFSET UNITYSDK_OFFSET(0x9635E60)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPPINGINFOID_OFFSET UNITYSDK_OFFSET(0x9635D50)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPPINGINFOROW_OFFSET UNITYSDK_OFFSET(0x9635D60)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPPOSITION_OFFSET UNITYSDK_OFFSET(0x9635E90)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPPROPDEF_OFFSET UNITYSDK_OFFSET(0x9635F10)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPRAWPOSITION_OFFSET UNITYSDK_OFFSET(0x9635EB0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_MAPROTATION_OFFSET UNITYSDK_OFFSET(0x9635ED0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9635FC0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_POSITIONINAREAMAP_OFFSET UNITYSDK_OFFSET(0x9635F40)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_PROPSTATE_OFFSET UNITYSDK_OFFSET(0x9635EF0)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_PROPTYPE_OFFSET UNITYSDK_OFFSET(0x9635F00)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_SECTIONID_OFFSET UNITYSDK_OFFSET(0x9635E50)
#define RPG_CLIENT_MAPTELEPORTDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x9635F60)
#define RPG_CLIENT_MAPTELEPORTDATA_INITMAPTELEPORTDATA_OFFSET UNITYSDK_OFFSET(0x9635670)
#define RPG_CLIENT_MAPTELEPORTDATA_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0x9635FB0)
#define RPG_CLIENT_MAPTELEPORTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9635580)
#define RPG_CLIENT_MAPTELEPORTDATA__INITMAPTELEPORTDATA_OFFSET UNITYSDK_OFFSET(0x9635750)
#define RPG_CLIENT_MAPTELEPORTDATA__UPDATEMAPICONAREADATA_OFFSET UNITYSDK_OFFSET(0x9635AF0)

namespace RPG::Client
{
	inline static constexpr unsigned int MapTeleportData_TypeDefinitionIndex = 49941;

	class MapTeleportData : public ::System::Object
	{
	public:
		::RPG::Client::MapPropDef* _MapPropDef; // 0x10
		::System::String* _AnchorKey; // 0x18
		::RPG::GameCore::MappingInfoRow* _MappingInfoRow; // 0x20
		::RPG::Client::MapIconAreaData* _AreaData; // 0x28
		::System::UInt32 _ContentID; // 0x30
		::UnityEngine::Vector3 _MapPosition; // 0x34
		::System::Int32 _MapLayer; // 0x40
		::RPG::GameCore::PropState _PropState; // 0x44
		::RPG::GameCore::MinimapAreaType _MapAreaType; // 0x48
		::System::UInt32 _InstanceId; // 0x4C
		::UnityEngine::Vector2 _PositionInAreaMap; // 0x50
		::UnityEngine::Color _MapIconColor; // 0x58
		::System::UInt32 _IdentificationID; // 0x68
		::System::UInt32 _MappingInfoID; // 0x6C
		::System::UInt32 _DimensionID; // 0x70
		::System::Int32 _SectionID; // 0x74
		::System::UInt32 _ServerEntityID; // 0x78
		::System::UInt32 _FloorID_k__BackingField; // 0x7C
		::System::UInt32 _StoryLineID; // 0x80
		::System::UInt32 _EntranceID; // 0x84
		::UnityEngine::Vector3 _MapRotation; // 0x88
		::System::Int32 _AreaID; // 0x94
		::System::UInt32 _GroupID; // 0x98
		::RPG::GameCore::PropType _PropType; // 0x9C
		::System::UInt32 _MapIconType; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA__CTOR_OFFSET))(this);
		}

		::System::Void InitMapTeleportData(::System::UInt32 entranceID, ::System::UInt32 dimensionID, ::System::UInt32 storyLineID, ::System::UInt32 contentID, ::RPG::Client::MapPropDef* mapPropDef)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_INITMAPTELEPORTDATA_OFFSET))(this, entranceID, dimensionID, storyLineID, contentID, mapPropDef);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_ISACTIVE_OFFSET))(this);
		}

		::System::UInt32 get_EntranceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_ENTRANCEID_OFFSET))(this);
		}

		::RPG::Client::NavMap::IMapDataSource* get_MapData()
		{
			return ((::RPG::Client::NavMap::IMapDataSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_MAPDATA_OFFSET))(this);
		}

		::RPG::Client::MapDef* get_MapDef()
		{
			return ((::RPG::Client::MapDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_MAPDEF_OFFSET))(this);
		}

		::System::UInt32 get_IdentificationID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_IDENTIFICATIONID_OFFSET))(this);
		}

		::System::UInt32 get_MappingInfoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_MAPPINGINFOID_OFFSET))(this);
		}

		::RPG::GameCore::MappingInfoRow* get_MappingInfoRow()
		{
			return ((::RPG::GameCore::MappingInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_MAPPINGINFOROW_OFFSET))(this);
		}

		::System::Boolean get_IsTeleport()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_ISTELEPORT_OFFSET))(this);
		}

		::System::Boolean get_CanTeleport()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_CANTELEPORT_OFFSET))(this);
		}

		::System::Int32 get_SectionID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_SECTIONID_OFFSET))(this);
		}

		::System::Int32 get_MapLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_MAPLAYER_OFFSET))(this);
		}

		::UnityEngine::Color get_MapIconColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_MAPICONCOLOR_OFFSET))(this);
		}

		::System::UInt32 get_MapIconType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_MAPICONTYPE_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_MAPPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapRawPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_MAPRAWPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_MapRotation()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_MAPROTATION_OFFSET))(this);
		}

		::RPG::GameCore::PropState get_PropState()
		{
			return ((::RPG::GameCore::PropState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_PROPSTATE_OFFSET))(this);
		}

		::RPG::GameCore::PropType get_PropType()
		{
			return ((::RPG::GameCore::PropType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_PROPTYPE_OFFSET))(this);
		}

		::RPG::Client::MapPropDef* get_MapPropDef()
		{
			return ((::RPG::Client::MapPropDef*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_MAPPROPDEF_OFFSET))(this);
		}

		::System::Int32 get_AreaID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_AREAID_OFFSET))(this);
		}

		::RPG::GameCore::MinimapAreaType get_MapAreaType()
		{
			return ((::RPG::GameCore::MinimapAreaType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_MAPAREATYPE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_PositionInAreaMap()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_POSITIONINAREAMAP_OFFSET))(this);
		}

		::System::UInt32 get_DimensionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_DIMENSIONID_OFFSET))(this);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_CONTENTID_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_InstanceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_INSTANCEID_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_FLOORID_OFFSET))(this);
		}

		::System::Void set_FloorID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_SET_FLOORID_OFFSET))(this, value);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_DESC_OFFSET))(this);
		}

		::RPG::Client::MapIconAreaData* get_AreaData()
		{
			return ((::RPG::Client::MapIconAreaData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA_GET_AREADATA_OFFSET))(this);
		}

		::System::Void _InitMapTeleportData(::System::UInt32 entranceID, ::System::UInt32 dimensionID, ::RPG::Client::MapPropDef* mapPropDef)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::MapPropDef*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA__INITMAPTELEPORTDATA_OFFSET))(this, entranceID, dimensionID, mapPropDef);
		}

		::System::Void _UpdateMapIconAreaData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MAPTELEPORTDATA__UPDATEMAPICONAREADATA_OFFSET))(this);
		}
	};
}

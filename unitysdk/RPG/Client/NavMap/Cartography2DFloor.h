#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NavMap/CartographyBaseData.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class IBigMapIcon; }
namespace RPG::Client { class MapMappingInfoData; }
namespace RPG::Client { class MapMissionData; }
namespace RPG::Client { class MapOutControlTeamLeaderData; }
namespace RPG::Client { class MapTeleportData; }
namespace RPG::Client { class MapTrackMonsterData; }
namespace RPG::Client::NavMap { class SubNavMapData; }
namespace RPG::Client::NavMap { class SubTabData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GETDEFAULTLAYER_OFFSET UNITYSDK_OFFSET(0x991F000)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GETLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x991E8E0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_BACKGROUNDMAPSPRITEPATH_OFFSET UNITYSDK_OFFSET(0x991EFA0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_BACKGROUNDSIZE_OFFSET UNITYSDK_OFFSET(0x991ECA0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_DEFAULTCENTERPOSINMAP_OFFSET UNITYSDK_OFFSET(0x991EED0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_INPUTSCALEMAX_OFFSET UNITYSDK_OFFSET(0x991EE70)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_INPUTSCALEMIN_OFFSET UNITYSDK_OFFSET(0x991EEA0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_LAYERCOUNT_OFFSET UNITYSDK_OFFSET(0x991E7E0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_LAYERLIST_OFFSET UNITYSDK_OFFSET(0x991E880)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_MAPMAPPINGINFODATALIST_OFFSET UNITYSDK_OFFSET(0x991F090)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_MAPMISSIONDATALIST_OFFSET UNITYSDK_OFFSET(0x991F070)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_MAPSCALE_OFFSET UNITYSDK_OFFSET(0x991EE00)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_MAPTELEPORTDATALIST_OFFSET UNITYSDK_OFFSET(0x991F050)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_MAPTRACKMONSTERDATALIST_OFFSET UNITYSDK_OFFSET(0x991F0D0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_OUTCONTROLTEAMLEADERICON_OFFSET UNITYSDK_OFFSET(0x991F110)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_SUBNAVMAPLINKDATALIST_OFFSET UNITYSDK_OFFSET(0x991F0F0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_TEMPSHOWICONLIST_OFFSET UNITYSDK_OFFSET(0x991F0B0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x991E420)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR__CTOR_OFFSET UNITYSDK_OFFSET(0x991E2C0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR__INITAREA_1_OFFSET UNITYSDK_OFFSET(0x991E2F0)
#define RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR__INITAREA_OFFSET UNITYSDK_OFFSET(0x991E450)

namespace RPG::Client::NavMap
{
	inline static constexpr unsigned int Cartography2DFloor_TypeDefinitionIndex = 59481;

	class Cartography2DFloor : public ::RPG::Client::NavMap::CartographyBaseData
	{
	public:
		::System::Void _ctor(::RPG::Client::NavMap::SubNavMapData* subNavMapData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::SubNavMapData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR__CTOR_OFFSET))(this, subNavMapData);
		}

		::System::Void _ctor_1(::RPG::Client::NavMap::SubTabData* subTabData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR__CTOR_1_OFFSET))(this, subTabData);
		}

		::System::Void _InitArea(::RPG::Client::NavMap::SubTabData* subTabData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::SubTabData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR__INITAREA_OFFSET))(this, subTabData);
		}

		::System::Void _InitArea_1(::RPG::Client::NavMap::SubNavMapData* subNavMapData)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NavMap::SubNavMapData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR__INITAREA_1_OFFSET))(this, subNavMapData);
		}

		::System::Int32 get_LayerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_LAYERCOUNT_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetLocalPosition(::UnityEngine::Vector2 posInArea, ::System::UInt32 iconAreaID)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector2, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GETLOCALPOSITION_OFFSET))(this, posInArea, iconAreaID);
		}

		::System::Single get_MapScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_MAPSCALE_OFFSET))(this);
		}

		::System::Single get_InputScaleMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_INPUTSCALEMAX_OFFSET))(this);
		}

		::System::Single get_InputScaleMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_INPUTSCALEMIN_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_DefaultCenterPosInMap()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_DEFAULTCENTERPOSINMAP_OFFSET))(this);
		}

		::RPG::MVector3 get_BackgroundSize()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_BACKGROUNDSIZE_OFFSET))(this);
		}

		::System::String* get_BackgroundMapSpritePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_BACKGROUNDMAPSPRITEPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_LayerList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_LAYERLIST_OFFSET))(this);
		}

		::System::Int32 GetDefaultLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GETDEFAULTLAYER_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapTeleportData*>* get_MapTeleportDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapTeleportData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_MAPTELEPORTDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMissionData*>* get_MapMissionDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMissionData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_MAPMISSIONDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMappingInfoData*>* get_MapMappingInfoDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMappingInfoData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_MAPMAPPINGINFODATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IBigMapIcon*>* get_TempShowIconList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::IBigMapIcon*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_TEMPSHOWICONLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapTrackMonsterData*>* get_MapTrackMonsterDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapTrackMonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_MAPTRACKMONSTERDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMappingInfoData*>* get_SubNavMapLinkDataList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MapMappingInfoData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_SUBNAVMAPLINKDATALIST_OFFSET))(this);
		}

		::RPG::Client::MapOutControlTeamLeaderData* get_OutControlTeamLeaderIcon()
		{
			return ((::RPG::Client::MapOutControlTeamLeaderData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NAVMAP_CARTOGRAPHY2DFLOOR_GET_OUTCONTROLTEAMLEADERICON_OFFSET))(this);
		}
	};
}

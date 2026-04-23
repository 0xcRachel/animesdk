#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DB663931210BBC27_62.h"
#include "unitysdk/RPG/GameCore/ChestMonsterType.h"
#include "unitysdk/RPG/GameCore/MapPregressShowType.h"
#include "unitysdk/System/Object.h"

class Class_1_668FE281FA72D3E8_26;
class Class_1_D1E0AD3915BCCF29_121;
namespace RPG::Client { class ChestAndRaidInfo; }
namespace RPG::Client::NavMap { class IMapDataSource; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_CREATE_OFFSET UNITYSDK_OFFSET(0x177A2CB0)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CHESTANDRAIDINFOLIST_OFFSET UNITYSDK_OFFSET(0x177A2D70)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CHESTINFOLIST_OFFSET UNITYSDK_OFFSET(0x177A3600)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CHESTMONSTERSTATLIST_OFFSET UNITYSDK_OFFSET(0x177A3720)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CONTENTID_OFFSET UNITYSDK_OFFSET(0x177A35D0)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0x177A3840)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0x177A3870)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x177A2D30)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR__GETMAPPROGRESSSHOWTYPEBYMONSTERSTAT_OFFSET UNITYSDK_OFFSET(0x177A37E0)
#define RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR__GETMAPPROGRESSSHOWTYPE_OFFSET UNITYSDK_OFFSET(0x177A36C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChestAndRaidInfoCollector_TypeDefinitionIndex = 61133;

	class ChestAndRaidInfoCollector : public ::System::Object
	{
	public:
		::RPG::Client::NavMap::IMapDataSource* _MapData; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChestAndRaidInfo*>* _ChestAndRaidInfoList; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ChestAndRaidInfoCollector* Create(::RPG::Client::NavMap::IMapDataSource* mapData)
		{
			return ((::RPG::Client::ChestAndRaidInfoCollector*(*)(::RPG::Client::NavMap::IMapDataSource*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_CREATE_OFFSET))(mapData);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChestAndRaidInfo*>* get_ChestAndRaidInfoList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChestAndRaidInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CHESTANDRAIDINFOLIST_OFFSET))(this);
		}

		::RPG::GameCore::MapPregressShowType _GetMapProgressShowType(::Enum_3_DB663931210BBC27_62 chestType)
		{
			return ((::RPG::GameCore::MapPregressShowType(*)(::PVOID, ::Enum_3_DB663931210BBC27_62))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR__GETMAPPROGRESSSHOWTYPE_OFFSET))(this, chestType);
		}

		::RPG::GameCore::MapPregressShowType _GetMapProgressShowTypeByMonsterStat(::RPG::GameCore::ChestMonsterType chestMonsterType)
		{
			return ((::RPG::GameCore::MapPregressShowType(*)(::PVOID, ::RPG::GameCore::ChestMonsterType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR__GETMAPPROGRESSSHOWTYPEBYMONSTERSTAT_OFFSET))(this, chestMonsterType);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_STORYLINEID_OFFSET))(this);
		}

		::System::UInt32 get_ContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CONTENTID_OFFSET))(this);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_FLOORID_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Class_1_668FE281FA72D3E8_26*>* get_ChestInfoList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_668FE281FA72D3E8_26*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CHESTINFOLIST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Class_1_D1E0AD3915BCCF29_121*>* get_ChestMonsterStatList()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_D1E0AD3915BCCF29_121*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESTANDRAIDINFOCOLLECTOR_GET_CHESTMONSTERSTATLIST_OFFSET))(this);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TreasureDungeonGridType.h"
#include "unitysdk/System/Object.h"

class Class_1_352A8B3482C80E7D_61;
class Class_1_CD010263573232AE_3;
class Class_1_F3CA30716D4FAF92_9;
class Class_1_FA4F4A67B1C04320_932;
class Class_1_FA4F4A67B1C04320_933;
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class TreasureDungeonBaseGrid; }
namespace RPG::Client { class TreasureDungeonBuff; }
namespace RPG::Client { class TreasureDungeonItem; }
namespace RPG::Client { class TreasureDungeonNotifyParam; }
namespace RPG::Client { class TreasureDungeonTeamData; }
namespace RPG::GameCore { class TreasureDungeonBuffConfigRow; }
namespace RPG::GameCore { class TreasureDungeonConfigRow; }
namespace RPG::GameCore { class TreasureDungeonGroupConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TREASUREDUNGEONLEVEL_CLEAR_OFFSET UNITYSDK_OFFSET(0xA117550)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA117430)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GETALLGRIDBYTYPE_OFFSET UNITYSDK_OFFSET(0xA11A180)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GETGRIDBYINDEX_OFFSET UNITYSDK_OFFSET(0xA119880)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GETGRIDBYROWCOLUMN_OFFSET UNITYSDK_OFFSET(0xA119900)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GETMONSTERLEVEL_OFFSET UNITYSDK_OFFSET(0xA11B030)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GETNEXTSTEPMINUSEXPLOREPOINTBYMONSTER_OFFSET UNITYSDK_OFFSET(0xA11AA10)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_ATKEXADD_OFFSET UNITYSDK_OFFSET(0xA115D60)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_ATKEXICON_OFFSET UNITYSDK_OFFSET(0xA115EF0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_ATKEXNAME_OFFSET UNITYSDK_OFFSET(0xA115EC0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_CURRENTENVIRONMENTBUFF_OFFSET UNITYSDK_OFFSET(0xA11C520)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_CURRENTFLOORBUFF_OFFSET UNITYSDK_OFFSET(0xA11C540)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_ENEMYNUM_OFFSET UNITYSDK_OFFSET(0xA11C490)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_EXPLOREPOINT_OFFSET UNITYSDK_OFFSET(0xA11C3F0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_FLOORID_OFFSET UNITYSDK_OFFSET(0xA11C3B0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_GROUPROW_OFFSET UNITYSDK_OFFSET(0xA115DE0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_ISHARD_OFFSET UNITYSDK_OFFSET(0xA11C2E0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_LASTBATTLEGRIDINDEX_OFFSET UNITYSDK_OFFSET(0xA11C570)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_LASTINTERACTGRIDINDEX_OFFSET UNITYSDK_OFFSET(0xA11C590)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_LASTINTERACTGRIDPARAM_OFFSET UNITYSDK_OFFSET(0xA11C5B0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_LASTINTERACTGRIDTYPE_OFFSET UNITYSDK_OFFSET(0xA11C5D0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_LEVELID_OFFSET UNITYSDK_OFFSET(0xA11C390)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_MAPID_OFFSET UNITYSDK_OFFSET(0xA11C3D0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_MAXEXPLOREPOINT_OFFSET UNITYSDK_OFFSET(0xA11C410)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_MAXFLOOR_OFFSET UNITYSDK_OFFSET(0xA11C4D0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_REFRESHPARAM_OFFSET UNITYSDK_OFFSET(0xA11C560)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_ROW_OFFSET UNITYSDK_OFFSET(0xA11A4D0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_TEAMDATA_OFFSET UNITYSDK_OFFSET(0xA11C510)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_ULTRAITEM_OFFSET UNITYSDK_OFFSET(0xA11C4F0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_WAITNUM_OFFSET UNITYSDK_OFFSET(0xA11C4B0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_CURRENTENVIRONMENTBUFF_OFFSET UNITYSDK_OFFSET(0xA11C530)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_CURRENTFLOORBUFF_OFFSET UNITYSDK_OFFSET(0xA11C550)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_ENEMYNUM_OFFSET UNITYSDK_OFFSET(0xA11C4A0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_EXPLOREPOINT_OFFSET UNITYSDK_OFFSET(0xA11C400)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_FLOORID_OFFSET UNITYSDK_OFFSET(0xA11C3C0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_LASTBATTLEGRIDINDEX_OFFSET UNITYSDK_OFFSET(0xA11C580)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_LASTINTERACTGRIDINDEX_OFFSET UNITYSDK_OFFSET(0xA11C5A0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_LASTINTERACTGRIDPARAM_OFFSET UNITYSDK_OFFSET(0xA11C5C0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_LASTINTERACTGRIDTYPE_OFFSET UNITYSDK_OFFSET(0xA11C5E0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_LEVELID_OFFSET UNITYSDK_OFFSET(0xA11C3A0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_MAPID_OFFSET UNITYSDK_OFFSET(0xA11C3E0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_MAXFLOOR_OFFSET UNITYSDK_OFFSET(0xA11C4E0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_ULTRAITEM_OFFSET UNITYSDK_OFFSET(0xA11C500)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_WAITNUM_OFFSET UNITYSDK_OFFSET(0xA11C4C0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SHOULDEXIT_OFFSET UNITYSDK_OFFSET(0xA115F10)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_SYNC_OFFSET UNITYSDK_OFFSET(0xA117B70)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_TRYFIGHT_OFFSET UNITYSDK_OFFSET(0xA119A80)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_TRYFLIPGRID_OFFSET UNITYSDK_OFFSET(0xA1199C0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_TRYINTERACT_OFFSET UNITYSDK_OFFSET(0xA119E50)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_TRYUSEITEM_OFFSET UNITYSDK_OFFSET(0xA119FE0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_TRYUSEULTRA_OFFSET UNITYSDK_OFFSET(0xA11A0A0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_WILLAVATARDEADBYEXPLORE_OFFSET UNITYSDK_OFFSET(0xA11A2E0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_WILLAVATARDEADBYMONSTER_OFFSET UNITYSDK_OFFSET(0xA11A920)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL_WILLAVATARDEAD_OFFSET UNITYSDK_OFFSET(0xA11AEB0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0xA1171E0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__GETRECORDDATAPRIORITY_OFFSET UNITYSDK_OFFSET(0xA11C280)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__INITMAXFLOOR_OFFSET UNITYSDK_OFFSET(0xA1173C0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__ISENVBUFF_OFFSET UNITYSDK_OFFSET(0xA11C1C0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__ISFLOORBUFF_OFFSET UNITYSDK_OFFSET(0xA11C220)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHBUFF_OFFSET UNITYSDK_OFFSET(0xA1190F0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHEXPLOREPOINT_OFFSET UNITYSDK_OFFSET(0xA118110)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHFLOOR_OFFSET UNITYSDK_OFFSET(0xA1180B0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHITEM_OFFSET UNITYSDK_OFFSET(0xA118CB0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHMAP_OFFSET UNITYSDK_OFFSET(0xA118210)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHMONSTER_OFFSET UNITYSDK_OFFSET(0xA118170)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHRECORD_OFFSET UNITYSDK_OFFSET(0xA118A40)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHTEAMDATA_OFFSET UNITYSDK_OFFSET(0xA1189E0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHTEAMMEMBER_OFFSET UNITYSDK_OFFSET(0xA11B350)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHTEAMPROPERTY_OFFSET UNITYSDK_OFFSET(0xA11B2A0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHWAITNUM_OFFSET UNITYSDK_OFFSET(0xA1181C0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL__SETGRID_OFFSET UNITYSDK_OFFSET(0xA11B1D0)
#define RPG_CLIENT_TREASUREDUNGEONLEVEL___REFRESHRECORD_B__32_0_OFFSET UNITYSDK_OFFSET(0xA11C5F0)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonLevel_TypeDefinitionIndex = 54115;

	class TreasureDungeonLevel : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _ROWCOUNT = 0x5; // 0x0
		// static const ::System::UInt32 _COLUMNCOUNT = 0x5; // 0x0
		// static const ::System::UInt32 _TOTALGRIDCOUNT = 0x19; // 0x0
		// static const ::System::UInt32 _FLOORCOUNTLIMIT = 0x3E8; // 0x0
		::RPG::Client::TreasureDungeonNotifyParam* _RefreshParam; // 0x10
		::RPG::Client::TreasureDungeonBuff* _CurrentEnvironmentBuff_k__BackingField; // 0x18
		::RPG::GameCore::TreasureDungeonConfigRow* _Row; // 0x20
		::Il2CppArray<::RPG::Client::TreasureDungeonBaseGrid*>* _AllGrids; // 0x28
		::RPG::Client::TreasureDungeonBuff* _CurrentFloorBuff_k__BackingField; // 0x30
		::RPG::Client::TreasureDungeonItem* _UltraItem_k__BackingField; // 0x38
		::RPG::Client::TreasureDungeonTeamData* _TeamData; // 0x40
		::RPG::GameCore::TreasureDungeonGroupConfigRow* _GroupRow; // 0x48
		::System::UInt32 _LastBattleGridIndex_k__BackingField; // 0x50
		::System::UInt32 _MaxFloor_k__BackingField; // 0x54
		::System::UInt32 _LastInteractGridIndex_k__BackingField; // 0x58
		::System::UInt32 _ExplorePoint_k__BackingField; // 0x5C
		::System::UInt32 _LastInteractGridParam_k__BackingField; // 0x60
		::System::UInt32 _FloorID_k__BackingField; // 0x64
		::System::UInt32 _MapID_k__BackingField; // 0x68
		::System::UInt32 _WaitNum_k__BackingField; // 0x6C
		::System::UInt32 _LevelID_k__BackingField; // 0x70
		::RPG::GameCore::TreasureDungeonGridType _LastInteractGridType_k__BackingField; // 0x74
		::System::UInt32 _EnemyNum_k__BackingField; // 0x78

		::System::Void _ctor(::System::UInt32 levelID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__CTOR_OFFSET))(this, levelID);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_DISPOSE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_CLEAR_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_CD010263573232AE_3* data, ::System::Boolean isInited)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CD010263573232AE_3*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SYNC_OFFSET))(this, data, isInited);
		}

		::RPG::Client::TreasureDungeonBaseGrid* GetGridByIndex(::System::UInt32 index)
		{
			return ((::RPG::Client::TreasureDungeonBaseGrid*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GETGRIDBYINDEX_OFFSET))(this, index);
		}

		::System::Boolean ShouldExit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SHOULDEXIT_OFFSET))(this);
		}

		::RPG::Client::TreasureDungeonBaseGrid* GetGridByRowColumn(::System::Int32 row, ::System::Int32 column)
		{
			return ((::RPG::Client::TreasureDungeonBaseGrid*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GETGRIDBYROWCOLUMN_OFFSET))(this, row, column);
		}

		::System::Void TryFlipGrid(::System::UInt32 gridID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_TRYFLIPGRID_OFFSET))(this, gridID);
		}

		::System::Void TryFight(::System::UInt32 gridID, ::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* avatarDatas)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_TRYFIGHT_OFFSET))(this, gridID, avatarDatas);
		}

		::System::Void TryInteract(::System::UInt32 gridID, ::System::UInt32 param)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_TRYINTERACT_OFFSET))(this, gridID, param);
		}

		::System::Void TryUseItem(::System::UInt32 gridID, ::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_TRYUSEITEM_OFFSET))(this, gridID, itemID);
		}

		::System::Void TryUseUltra(::System::UInt32 gridID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_TRYUSEULTRA_OFFSET))(this, gridID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TreasureDungeonBaseGrid*>* GetAllGridByType(::RPG::GameCore::TreasureDungeonGridType type)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TreasureDungeonBaseGrid*>*(*)(::PVOID, ::RPG::GameCore::TreasureDungeonGridType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GETALLGRIDBYTYPE_OFFSET))(this, type);
		}

		::System::Boolean WillAvatarDeadByExplore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_WILLAVATARDEADBYEXPLORE_OFFSET))(this);
		}

		::System::Boolean WillAvatarDeadByMonster()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_WILLAVATARDEADBYMONSTER_OFFSET))(this);
		}

		::System::Boolean WillAvatarDead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_WILLAVATARDEAD_OFFSET))(this);
		}

		::System::UInt32 GetNextStepMinusExplorePointByMonster()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GETNEXTSTEPMINUSEXPLOREPOINTBYMONSTER_OFFSET))(this);
		}

		::System::UInt32 GetMonsterLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GETMONSTERLEVEL_OFFSET))(this);
		}

		::System::Void _SetGrid(::System::UInt32 index, ::RPG::Client::TreasureDungeonBaseGrid* grid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TreasureDungeonBaseGrid*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__SETGRID_OFFSET))(this, index, grid);
		}

		::System::Void _RefreshFloor(::System::UInt32 floorID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHFLOOR_OFFSET))(this, floorID);
		}

		::System::Void _RefreshExplorePoint(::System::UInt32 newValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHEXPLOREPOINT_OFFSET))(this, newValue);
		}

		::System::Void _RefreshMap(::System::Collections::Generic::IList_1<::Class_1_F3CA30716D4FAF92_9*>* serverGrids)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_F3CA30716D4FAF92_9*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHMAP_OFFSET))(this, serverGrids);
		}

		::System::Void _RefreshWaitNum(::System::UInt32 remain)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHWAITNUM_OFFSET))(this, remain);
		}

		::System::Void _RefreshMonster(::System::UInt32 remain)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHMONSTER_OFFSET))(this, remain);
		}

		::System::Void _RefreshTeamData(::Class_1_CD010263573232AE_3* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CD010263573232AE_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHTEAMDATA_OFFSET))(this, data);
		}

		::System::Void _RefreshTeamProperty(::Class_1_CD010263573232AE_3* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CD010263573232AE_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHTEAMPROPERTY_OFFSET))(this, data);
		}

		::System::Void _RefreshTeamMember(::Class_1_CD010263573232AE_3* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_CD010263573232AE_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHTEAMMEMBER_OFFSET))(this, data);
		}

		::System::Void _RefreshItem(::System::Collections::Generic::IList_1<::Class_1_FA4F4A67B1C04320_933*>* serverItemData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_FA4F4A67B1C04320_933*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHITEM_OFFSET))(this, serverItemData);
		}

		::System::Void _RefreshBuff(::System::Collections::Generic::IList_1<::Class_1_FA4F4A67B1C04320_932*>* serverBuffData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_FA4F4A67B1C04320_932*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHBUFF_OFFSET))(this, serverBuffData);
		}

		::System::Void _InitMaxFloor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__INITMAXFLOOR_OFFSET))(this);
		}

		::System::Boolean _IsEnvBuff(::RPG::GameCore::TreasureDungeonBuffConfigRow* row)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TreasureDungeonBuffConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__ISENVBUFF_OFFSET))(this, row);
		}

		::System::Boolean _IsFloorBuff(::RPG::GameCore::TreasureDungeonBuffConfigRow* row)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TreasureDungeonBuffConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__ISFLOORBUFF_OFFSET))(this, row);
		}

		::System::Void _RefreshRecord(::System::Collections::Generic::IList_1<::Class_1_352A8B3482C80E7D_61*>* serverRecordData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_352A8B3482C80E7D_61*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__REFRESHRECORD_OFFSET))(this, serverRecordData);
		}

		::System::UInt32 _GetRecordDataPriority(::Class_1_352A8B3482C80E7D_61* recordData)
		{
			return ((::System::UInt32(*)(::PVOID, ::Class_1_352A8B3482C80E7D_61*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL__GETRECORDDATAPRIORITY_OFFSET))(this, recordData);
		}

		::RPG::GameCore::TreasureDungeonConfigRow* get_Row()
		{
			return ((::RPG::GameCore::TreasureDungeonConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_ROW_OFFSET))(this);
		}

		::RPG::GameCore::TreasureDungeonGroupConfigRow* get_GroupRow()
		{
			return ((::RPG::GameCore::TreasureDungeonGroupConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_GROUPROW_OFFSET))(this);
		}

		::System::Boolean get_IsHard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_ISHARD_OFFSET))(this);
		}

		::System::UInt32 get_LevelID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_LEVELID_OFFSET))(this);
		}

		::System::Void set_LevelID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_LEVELID_OFFSET))(this, value);
		}

		::System::UInt32 get_FloorID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_FLOORID_OFFSET))(this);
		}

		::System::Void set_FloorID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_FLOORID_OFFSET))(this, value);
		}

		::System::UInt32 get_MapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_MAPID_OFFSET))(this);
		}

		::System::Void set_MapID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_MAPID_OFFSET))(this, value);
		}

		::System::UInt32 get_ExplorePoint()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_EXPLOREPOINT_OFFSET))(this);
		}

		::System::Void set_ExplorePoint(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_EXPLOREPOINT_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxExplorePoint()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_MAXEXPLOREPOINT_OFFSET))(this);
		}

		::System::UInt32 get_EnemyNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_ENEMYNUM_OFFSET))(this);
		}

		::System::Void set_EnemyNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_ENEMYNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_WaitNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_WAITNUM_OFFSET))(this);
		}

		::System::Void set_WaitNum(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_WAITNUM_OFFSET))(this, value);
		}

		::System::UInt32 get_MaxFloor()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_MAXFLOOR_OFFSET))(this);
		}

		::System::Void set_MaxFloor(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_MAXFLOOR_OFFSET))(this, value);
		}

		::RPG::Client::TreasureDungeonItem* get_UltraItem()
		{
			return ((::RPG::Client::TreasureDungeonItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_ULTRAITEM_OFFSET))(this);
		}

		::System::Void set_UltraItem(::RPG::Client::TreasureDungeonItem* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TreasureDungeonItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_ULTRAITEM_OFFSET))(this, value);
		}

		::RPG::Client::TreasureDungeonTeamData* get_TeamData()
		{
			return ((::RPG::Client::TreasureDungeonTeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_TEAMDATA_OFFSET))(this);
		}

		::System::UInt32 get_ATKExAdd()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_ATKEXADD_OFFSET))(this);
		}

		::RPG::Client::TextID get_ATKExName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_ATKEXNAME_OFFSET))(this);
		}

		::System::String* get_ATKExIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_ATKEXICON_OFFSET))(this);
		}

		::RPG::Client::TreasureDungeonBuff* get_CurrentEnvironmentBuff()
		{
			return ((::RPG::Client::TreasureDungeonBuff*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_CURRENTENVIRONMENTBUFF_OFFSET))(this);
		}

		::System::Void set_CurrentEnvironmentBuff(::RPG::Client::TreasureDungeonBuff* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TreasureDungeonBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_CURRENTENVIRONMENTBUFF_OFFSET))(this, value);
		}

		::RPG::Client::TreasureDungeonBuff* get_CurrentFloorBuff()
		{
			return ((::RPG::Client::TreasureDungeonBuff*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_CURRENTFLOORBUFF_OFFSET))(this);
		}

		::System::Void set_CurrentFloorBuff(::RPG::Client::TreasureDungeonBuff* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TreasureDungeonBuff*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_CURRENTFLOORBUFF_OFFSET))(this, value);
		}

		::RPG::Client::TreasureDungeonNotifyParam* get_RefreshParam()
		{
			return ((::RPG::Client::TreasureDungeonNotifyParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_REFRESHPARAM_OFFSET))(this);
		}

		::System::UInt32 get_LastBattleGridIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_LASTBATTLEGRIDINDEX_OFFSET))(this);
		}

		::System::Void set_LastBattleGridIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_LASTBATTLEGRIDINDEX_OFFSET))(this, value);
		}

		::System::UInt32 get_LastInteractGridIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_LASTINTERACTGRIDINDEX_OFFSET))(this);
		}

		::System::Void set_LastInteractGridIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_LASTINTERACTGRIDINDEX_OFFSET))(this, value);
		}

		::System::UInt32 get_LastInteractGridParam()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_LASTINTERACTGRIDPARAM_OFFSET))(this);
		}

		::System::Void set_LastInteractGridParam(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_LASTINTERACTGRIDPARAM_OFFSET))(this, value);
		}

		::RPG::GameCore::TreasureDungeonGridType get_LastInteractGridType()
		{
			return ((::RPG::GameCore::TreasureDungeonGridType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_GET_LASTINTERACTGRIDTYPE_OFFSET))(this);
		}

		::System::Void set_LastInteractGridType(::RPG::GameCore::TreasureDungeonGridType value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TreasureDungeonGridType))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL_SET_LASTINTERACTGRIDTYPE_OFFSET))(this, value);
		}

		::System::Int32 __RefreshRecord_b__32_0(::Class_1_352A8B3482C80E7D_61* a, ::Class_1_352A8B3482C80E7D_61* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_352A8B3482C80E7D_61*, ::Class_1_352A8B3482C80E7D_61*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONLEVEL___REFRESHRECORD_B__32_0_OFFSET))(this, a, b);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/System/Object.h"

class Class_1_4EB9793B7AA33EF3;
class Class_1_9592B34F41301777_3;
class Class_1_9A232D961EB1529E;
class Class_1_F97A746160B55249;
namespace RPG::Client { class RogueBuffInfo; }
namespace RPG::Client { class RogueFormulaInfo; }
namespace RPG::Client { class RogueKeywordInfo; }
namespace RPG::Client { class RogueMiracleInfo; }
namespace RPG::Client { class RogueReviveAvatarInfo; }
namespace RPG::Client { class RogueTournGameLayerItem; }
namespace RPG::Client { class RogueTournGameLevelInfo; }
namespace RPG::Client { class RogueTournGameRoomItem; }
namespace RPG::Client { class RogueTournGameScoreInfo; }
namespace RPG::Client { class RogueTournTitanBlessInfo; }
namespace RPG::GameCore { class RogueTournAreaRow; }
namespace RPG::GameCore { class RogueTournLayerRoomRow; }
namespace RPG::GameCore { class RogueTournLayerRow; }
namespace RPG::GameCore { class RogueTournRoomMarkRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPG_CLIENT_ROGUETOURNGAMEDATA_CLEARINPROGRESSSTATUS_OFFSET UNITYSDK_OFFSET(0x9E71430)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_CLEARPENDINGTITANBLESSPROGRESSUPDATE_OFFSET UNITYSDK_OFFSET(0x9E713F0)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9E703C0)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GETCURROGUETOURNAREAROW_OFFSET UNITYSDK_OFFSET(0x9E70700)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GETCURROGUETOURNGAMELAYER_OFFSET UNITYSDK_OFFSET(0x9E70A00)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GETCURROGUETOURNGAMEROOM_OFFSET UNITYSDK_OFFSET(0x9E70760)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GETCURROGUETOURNLAYERROW_OFFSET UNITYSDK_OFFSET(0x9E70B40)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GETCURROGUETOURNROOMMARKROW_OFFSET UNITYSDK_OFFSET(0x9E70C50)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GETCURROGUETOURNROOMTYPE_OFFSET UNITYSDK_OFFSET(0x9E70D70)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GETMONSTERELITEDROPID_OFFSET UNITYSDK_OFFSET(0x9E716B0)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GETPOSSIBLEROOMTYPES_OFFSET UNITYSDK_OFFSET(0x9E70E60)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GETROGUEBUFFINFO_OFFSET UNITYSDK_OFFSET(0x9E71490)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GETROGUEDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x9E71760)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GETROGUEFORMULAINFO_OFFSET UNITYSDK_OFFSET(0x9E71510)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GETROGUEKEYWORDINFO_OFFSET UNITYSDK_OFFSET(0x9E71630)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GETROGUEMIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x9E714D0)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GETROGUEREVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x9E71670)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GETROGUETOURNTITANBLESSINFO_OFFSET UNITYSDK_OFFSET(0x9E71550)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GET_AREADIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x9E72E80)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0x9E72CC0)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GET_CURAREAID_OFFSET UNITYSDK_OFFSET(0x9E72E40)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GET_CURAREATOURNMODE_OFFSET UNITYSDK_OFFSET(0x9E72D20)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GET_FORMULAINFO_OFFSET UNITYSDK_OFFSET(0x9E72D00)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GET_HASLEVELINPROGRESS_OFFSET UNITYSDK_OFFSET(0x9E71CE0)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GET_HASPENDINGTITANBLESSPROGRESSUPDATE_OFFSET UNITYSDK_OFFSET(0x9E72FB0)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GET_ISAVATARUPGRADABLE_OFFSET UNITYSDK_OFFSET(0x9E71750)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GET_ISCANUSECONSUMEITEM_OFFSET UNITYSDK_OFFSET(0x9E72F40)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GET_ISFREEMODE_OFFSET UNITYSDK_OFFSET(0x9E72F80)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GET_ISGODMODE_OFFSET UNITYSDK_OFFSET(0x9E72F60)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GET_KEYWORDINFO_OFFSET UNITYSDK_OFFSET(0x9E72E00)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GET_LEVELINFO_OFFSET UNITYSDK_OFFSET(0x9E72DE0)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x9E72CE0)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GET_REPORTTRANSNO_OFFSET UNITYSDK_OFFSET(0x9E72FD0)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x9E72DC0)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GET_SCOREPREVIEWINFO_OFFSET UNITYSDK_OFFSET(0x9E72F20)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GET_SERVERCONTROLLERID_OFFSET UNITYSDK_OFFSET(0x9E72E20)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GET_TITANBLESSINFO_OFFSET UNITYSDK_OFFSET(0x9E715D0)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GET_TITANBLESSPROGRESS_OFFSET UNITYSDK_OFFSET(0x9E72FA0)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_GET_WEEKCHALLENGEID_OFFSET UNITYSDK_OFFSET(0x9E72E60)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_INIT_OFFSET UNITYSDK_OFFSET(0x9E70380)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_SET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0x9E72CD0)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_SET_CURAREAID_OFFSET UNITYSDK_OFFSET(0x9E72E50)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_SET_FORMULAINFO_OFFSET UNITYSDK_OFFSET(0x9E72D10)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_SET_HASPENDINGTITANBLESSPROGRESSUPDATE_OFFSET UNITYSDK_OFFSET(0x9E72FC0)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_SET_ISCANUSECONSUMEITEM_OFFSET UNITYSDK_OFFSET(0x9E72F50)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_SET_ISFREEMODE_OFFSET UNITYSDK_OFFSET(0x9E72F90)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_SET_ISGODMODE_OFFSET UNITYSDK_OFFSET(0x9E72F70)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_SET_KEYWORDINFO_OFFSET UNITYSDK_OFFSET(0x9E72E10)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_SET_LEVELINFO_OFFSET UNITYSDK_OFFSET(0x9E72DF0)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_SET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x9E72CF0)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_SET_REPORTTRANSNO_OFFSET UNITYSDK_OFFSET(0x9E72FE0)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_SET_REVIVEAVATARINFO_OFFSET UNITYSDK_OFFSET(0x9E72DD0)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_SET_SCOREPREVIEWINFO_OFFSET UNITYSDK_OFFSET(0x9E72F30)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_SET_SERVERCONTROLLERID_OFFSET UNITYSDK_OFFSET(0x9E72E30)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_SET_WEEKCHALLENGEID_OFFSET UNITYSDK_OFFSET(0x9E72E70)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_SYNCSCOREPREVIEWINFO_OFFSET UNITYSDK_OFFSET(0x9E72240)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_SYNCTITANBLESSPROGRESS_OFFSET UNITYSDK_OFFSET(0x9E728D0)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9E71CF0)
#define RPG_CLIENT_ROGUETOURNGAMEDATA_UPDATELEVELINFO_OFFSET UNITYSDK_OFFSET(0x9E72590)
#define RPG_CLIENT_ROGUETOURNGAMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9E70140)
#define RPG_CLIENT_ROGUETOURNGAMEDATA__GETLAYERROOMROWBYPROGRESS_OFFSET UNITYSDK_OFFSET(0x9E71060)
#define RPG_CLIENT_ROGUETOURNGAMEDATA__GETPOSSIBLEROOMTYPES_G___COMBINEROOMTYPEBYDOORCONFIG_9_0_OFFSET UNITYSDK_OFFSET(0x9E71270)
#define RPG_CLIENT_ROGUETOURNGAMEDATA__SYNCSYSTEMATTACHEDINFO_OFFSET UNITYSDK_OFFSET(0x9E72190)
#define RPG_CLIENT_ROGUETOURNGAMEDATA__SYNCTOURNINFO_OFFSET UNITYSDK_OFFSET(0x9E72010)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournGameData_TypeDefinitionIndex = 53735;

	class RogueTournGameData : public ::System::Object
	{
	public:
		::RPG::Client::RogueTournGameLevelInfo* _LevelInfo_k__BackingField; // 0x10
		::System::String* _ReportTransNo_k__BackingField; // 0x18
		::RPG::Client::RogueKeywordInfo* _KeywordInfo_k__BackingField; // 0x20
		::RPG::Client::RogueTournTitanBlessInfo* _TitanBlessInfo; // 0x28
		::RPG::Client::RogueMiracleInfo* _MiracleInfo_k__BackingField; // 0x30
		::RPG::Client::RogueTournGameScoreInfo* _ScorePreviewInfo_k__BackingField; // 0x38
		::RPG::Client::RogueFormulaInfo* _FormulaInfo_k__BackingField; // 0x40
		::RPG::Client::RogueReviveAvatarInfo* _ReviveAvatarInfo_k__BackingField; // 0x48
		::RPG::Client::RogueBuffInfo* _BuffInfo_k__BackingField; // 0x50
		::System::Boolean _IsGodMode_k__BackingField; // 0x58
		::System::Boolean _IsFreeMode_k__BackingField; // 0x59
		::System::Boolean _HasPendingTitanBlessProgressUpdate_k__BackingField; // 0x5A
		::System::Boolean _IsCanUseConsumeItem_k__BackingField; // 0x5B
		::System::UInt32 _WeekChallengeID_k__BackingField; // 0x5C
		::System::UInt32 _CurAreaID_k__BackingField; // 0x60
		::System::UInt32 _ServerControllerID_k__BackingField; // 0x64
		::System::UInt32 _TitanBlessProgress; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournAreaRow* GetCurRogueTournAreaRow()
		{
			return ((::RPG::GameCore::RogueTournAreaRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GETCURROGUETOURNAREAROW_OFFSET))(this);
		}

		::RPG::Client::RogueTournGameRoomItem* GetCurRogueTournGameRoom()
		{
			return ((::RPG::Client::RogueTournGameRoomItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GETCURROGUETOURNGAMEROOM_OFFSET))(this);
		}

		::RPG::Client::RogueTournGameLayerItem* GetCurRogueTournGameLayer()
		{
			return ((::RPG::Client::RogueTournGameLayerItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GETCURROGUETOURNGAMELAYER_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournLayerRow* GetCurRogueTournLayerRow()
		{
			return ((::RPG::GameCore::RogueTournLayerRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GETCURROGUETOURNLAYERROW_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournRoomMarkRow* GetCurRogueTournRoomMarkRow()
		{
			return ((::RPG::GameCore::RogueTournRoomMarkRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GETCURROGUETOURNROOMMARKROW_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournRoomType GetCurRogueTournRoomType()
		{
			return ((::RPG::GameCore::RogueTournRoomType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GETCURROGUETOURNROOMTYPE_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::RPG::GameCore::RogueTournRoomType>* GetPossibleRoomTypes(::System::UInt32 roomProgress)
		{
			return ((::System::Collections::Generic::HashSet_1<::RPG::GameCore::RogueTournRoomType>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GETPOSSIBLEROOMTYPES_OFFSET))(this, roomProgress);
		}

		::System::Void ClearPendingTitanBlessProgressUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_CLEARPENDINGTITANBLESSPROGRESSUPDATE_OFFSET))(this);
		}

		::System::Void ClearInProgressStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_CLEARINPROGRESSSTATUS_OFFSET))(this);
		}

		::RPG::Client::RogueBuffInfo* GetRogueBuffInfo()
		{
			return ((::RPG::Client::RogueBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GETROGUEBUFFINFO_OFFSET))(this);
		}

		::RPG::Client::RogueMiracleInfo* GetRogueMiracleInfo()
		{
			return ((::RPG::Client::RogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GETROGUEMIRACLEINFO_OFFSET))(this);
		}

		::RPG::Client::RogueFormulaInfo* GetRogueFormulaInfo()
		{
			return ((::RPG::Client::RogueFormulaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GETROGUEFORMULAINFO_OFFSET))(this);
		}

		::RPG::Client::RogueTournTitanBlessInfo* GetRogueTournTitanBlessInfo()
		{
			return ((::RPG::Client::RogueTournTitanBlessInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GETROGUETOURNTITANBLESSINFO_OFFSET))(this);
		}

		::RPG::Client::RogueKeywordInfo* GetRogueKeywordInfo()
		{
			return ((::RPG::Client::RogueKeywordInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GETROGUEKEYWORDINFO_OFFSET))(this);
		}

		::RPG::Client::RogueReviveAvatarInfo* GetRogueReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GETROGUEREVIVEAVATARINFO_OFFSET))(this);
		}

		::System::UInt32 GetMonsterEliteDropID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GETMONSTERELITEDROPID_OFFSET))(this);
		}

		::System::Boolean get_IsAvatarUpgradable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GET_ISAVATARUPGRADABLE_OFFSET))(this);
		}

		::System::String* GetRogueDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GETROGUEDEBUGINFO_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_9A232D961EB1529E* ctrlInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9A232D961EB1529E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_SYNC_OFFSET))(this, ctrlInfo);
		}

		::System::Void SyncScorePreviewInfo(::Class_1_4EB9793B7AA33EF3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4EB9793B7AA33EF3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_SYNCSCOREPREVIEWINFO_OFFSET))(this, proto);
		}

		::System::Void UpdateLevelInfo(::Class_1_9592B34F41301777_3* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9592B34F41301777_3*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_UPDATELEVELINFO_OFFSET))(this, proto);
		}

		::System::Void SyncTitanBlessProgress(::System::UInt32 curTitanBlessProgress)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_SYNCTITANBLESSPROGRESS_OFFSET))(this, curTitanBlessProgress);
		}

		::System::Void _SyncTournInfo(::Class_1_F97A746160B55249* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F97A746160B55249*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA__SYNCTOURNINFO_OFFSET))(this, info);
		}

		::System::Void _SyncSystemAttachedInfo(::Class_1_F97A746160B55249* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F97A746160B55249*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA__SYNCSYSTEMATTACHEDINFO_OFFSET))(this, info);
		}

		::RPG::GameCore::RogueTournLayerRoomRow* _GetLayerRoomRowByProgress(::System::UInt32 roomProgress)
		{
			return ((::RPG::GameCore::RogueTournLayerRoomRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA__GETLAYERROOMROWBYPROGRESS_OFFSET))(this, roomProgress);
		}

		::RPG::Client::RogueBuffInfo* get_BuffInfo()
		{
			return ((::RPG::Client::RogueBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GET_BUFFINFO_OFFSET))(this);
		}

		::System::Void set_BuffInfo(::RPG::Client::RogueBuffInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueBuffInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_SET_BUFFINFO_OFFSET))(this, value);
		}

		::RPG::Client::RogueMiracleInfo* get_MiracleInfo()
		{
			return ((::RPG::Client::RogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GET_MIRACLEINFO_OFFSET))(this);
		}

		::System::Void set_MiracleInfo(::RPG::Client::RogueMiracleInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMiracleInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_SET_MIRACLEINFO_OFFSET))(this, value);
		}

		::RPG::Client::RogueFormulaInfo* get_FormulaInfo()
		{
			return ((::RPG::Client::RogueFormulaInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GET_FORMULAINFO_OFFSET))(this);
		}

		::System::Void set_FormulaInfo(::RPG::Client::RogueFormulaInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueFormulaInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_SET_FORMULAINFO_OFFSET))(this, value);
		}

		::RPG::Client::RogueTournTitanBlessInfo* get_TitanBlessInfo()
		{
			return ((::RPG::Client::RogueTournTitanBlessInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GET_TITANBLESSINFO_OFFSET))(this);
		}

		::RPG::Client::RogueReviveAvatarInfo* get_ReviveAvatarInfo()
		{
			return ((::RPG::Client::RogueReviveAvatarInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GET_REVIVEAVATARINFO_OFFSET))(this);
		}

		::System::Void set_ReviveAvatarInfo(::RPG::Client::RogueReviveAvatarInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueReviveAvatarInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_SET_REVIVEAVATARINFO_OFFSET))(this, value);
		}

		::RPG::Client::RogueTournGameLevelInfo* get_LevelInfo()
		{
			return ((::RPG::Client::RogueTournGameLevelInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GET_LEVELINFO_OFFSET))(this);
		}

		::System::Void set_LevelInfo(::RPG::Client::RogueTournGameLevelInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournGameLevelInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_SET_LEVELINFO_OFFSET))(this, value);
		}

		::RPG::Client::RogueKeywordInfo* get_KeywordInfo()
		{
			return ((::RPG::Client::RogueKeywordInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GET_KEYWORDINFO_OFFSET))(this);
		}

		::System::Void set_KeywordInfo(::RPG::Client::RogueKeywordInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueKeywordInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_SET_KEYWORDINFO_OFFSET))(this, value);
		}

		::System::UInt32 get_ServerControllerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GET_SERVERCONTROLLERID_OFFSET))(this);
		}

		::System::Void set_ServerControllerID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_SET_SERVERCONTROLLERID_OFFSET))(this, value);
		}

		::System::UInt32 get_CurAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GET_CURAREAID_OFFSET))(this);
		}

		::System::Void set_CurAreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_SET_CURAREAID_OFFSET))(this, value);
		}

		::System::Boolean get_HasLevelInProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GET_HASLEVELINPROGRESS_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournMode get_CurAreaTournMode()
		{
			return ((::RPG::GameCore::RogueTournMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GET_CURAREATOURNMODE_OFFSET))(this);
		}

		::System::UInt32 get_WeekChallengeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GET_WEEKCHALLENGEID_OFFSET))(this);
		}

		::System::Void set_WeekChallengeID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_SET_WEEKCHALLENGEID_OFFSET))(this, value);
		}

		::System::UInt32 get_AreaDivisionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GET_AREADIVISIONLEVEL_OFFSET))(this);
		}

		::RPG::Client::RogueTournGameScoreInfo* get_ScorePreviewInfo()
		{
			return ((::RPG::Client::RogueTournGameScoreInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GET_SCOREPREVIEWINFO_OFFSET))(this);
		}

		::System::Void set_ScorePreviewInfo(::RPG::Client::RogueTournGameScoreInfo* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueTournGameScoreInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_SET_SCOREPREVIEWINFO_OFFSET))(this, value);
		}

		::System::Boolean get_IsCanUseConsumeItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GET_ISCANUSECONSUMEITEM_OFFSET))(this);
		}

		::System::Void set_IsCanUseConsumeItem(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_SET_ISCANUSECONSUMEITEM_OFFSET))(this, value);
		}

		::System::Boolean get_IsGodMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GET_ISGODMODE_OFFSET))(this);
		}

		::System::Void set_IsGodMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_SET_ISGODMODE_OFFSET))(this, value);
		}

		::System::Boolean get_IsFreeMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GET_ISFREEMODE_OFFSET))(this);
		}

		::System::Void set_IsFreeMode(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_SET_ISFREEMODE_OFFSET))(this, value);
		}

		::System::UInt32 get_TitanBlessProgress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GET_TITANBLESSPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_HasPendingTitanBlessProgressUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GET_HASPENDINGTITANBLESSPROGRESSUPDATE_OFFSET))(this);
		}

		::System::Void set_HasPendingTitanBlessProgressUpdate(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_SET_HASPENDINGTITANBLESSPROGRESSUPDATE_OFFSET))(this, value);
		}

		::System::String* get_ReportTransNo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_GET_REPORTTRANSNO_OFFSET))(this);
		}

		::System::Void set_ReportTransNo(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA_SET_REPORTTRANSNO_OFFSET))(this, value);
		}

		static ::System::Void _GetPossibleRoomTypes_g___CombineRoomTypeByDoorConfig_9_0(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* doorConfig, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::RogueTournRoomType>* roomTypes)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*, ::System::Collections::Generic::HashSet_1<::RPG::GameCore::RogueTournRoomType>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEDATA__GETPOSSIBLEROOMTYPES_G___COMBINEROOMTYPEBYDOORCONFIG_9_0_OFFSET))(doorConfig, roomTypes);
		}
	};
}

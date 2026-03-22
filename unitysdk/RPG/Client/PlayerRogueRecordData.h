#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BattleRecordDisplayType.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_0A1329B6B19F70B0_7;
class Class_1_352A8B3482C80E7D_45;
class Class_1_9E78928359AD9962;
class Class_1_FA4F4A67B1C04320_693;
class Class_1_FB0633E85BD6CF8E_2;
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class RogueBuffData; }
namespace RPG::GameCore { class RogueAreaConfigRow; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERROGUERECORDDATA_GET_AREAFIRSTPASSSCORE_OFFSET UNITYSDK_OFFSET(0x9B28150)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x9B27F20)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_GET_AREANAME_OFFSET UNITYSDK_OFFSET(0x9B27FC0)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_GET_AREAROW_OFFSET UNITYSDK_OFFSET(0x9B27F60)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_GET_DIFFICULTY_OFFSET UNITYSDK_OFFSET(0x9B28040)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_GET_DISPLAYTYPE_OFFSET UNITYSDK_OFFSET(0x9B27560)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_GET_HASRECORD_OFFSET UNITYSDK_OFFSET(0x9B27570)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0x9B280B0)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_GET_MAPID_OFFSET UNITYSDK_OFFSET(0x9B27F40)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_GET_PASSROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x9B280F0)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_GET_REACHROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x9B28110)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_GET_RECORDAVATARDATAS_OFFSET UNITYSDK_OFFSET(0x9B28210)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_GET_RECORDBUFFDATAS_OFFSET UNITYSDK_OFFSET(0x9B281D0)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_GET_RECORDMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0x9B281F0)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_GET_ROGUEAREAID_OFFSET UNITYSDK_OFFSET(0x9B280D0)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_GET_ROOMSCORE_OFFSET UNITYSDK_OFFSET(0x9B28170)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_GET_TALENTCOIN_OFFSET UNITYSDK_OFFSET(0x9B281B0)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_GET_TOTALROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x9B28130)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_GET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0x9B28190)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_SET_AREAFIRSTPASSSCORE_OFFSET UNITYSDK_OFFSET(0x9B28160)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_SET_AREAID_OFFSET UNITYSDK_OFFSET(0x9B27F30)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0x9B280C0)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_SET_MAPID_OFFSET UNITYSDK_OFFSET(0x9B27F50)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_SET_PASSROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x9B28100)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_SET_REACHROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x9B28120)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_SET_RECORDAVATARDATAS_OFFSET UNITYSDK_OFFSET(0x9B28220)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_SET_RECORDBUFFDATAS_OFFSET UNITYSDK_OFFSET(0x9B281E0)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_SET_RECORDMIRACLEIDS_OFFSET UNITYSDK_OFFSET(0x9B28200)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_SET_ROGUEAREAID_OFFSET UNITYSDK_OFFSET(0x9B280E0)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_SET_ROOMSCORE_OFFSET UNITYSDK_OFFSET(0x9B28180)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_SET_TALENTCOIN_OFFSET UNITYSDK_OFFSET(0x9B281C0)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_SET_TOTALROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x9B28140)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_SET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0x9B281A0)
#define RPG_CLIENT_PLAYERROGUERECORDDATA_SYNC_OFFSET UNITYSDK_OFFSET(0x9B27580)
#define RPG_CLIENT_PLAYERROGUERECORDDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B28230)
#define RPG_CLIENT_PLAYERROGUERECORDDATA__INITBASEINFO_OFFSET UNITYSDK_OFFSET(0x9B27660)
#define RPG_CLIENT_PLAYERROGUERECORDDATA__INITRECORDAVATARS_OFFSET UNITYSDK_OFFSET(0x9B27BA0)
#define RPG_CLIENT_PLAYERROGUERECORDDATA__INITRECORDBUFFS_OFFSET UNITYSDK_OFFSET(0x9B277A0)
#define RPG_CLIENT_PLAYERROGUERECORDDATA__INITRECORDINFO_OFFSET UNITYSDK_OFFSET(0x9B276F0)
#define RPG_CLIENT_PLAYERROGUERECORDDATA__INITRECORDMIRACLES_OFFSET UNITYSDK_OFFSET(0x9B27A70)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerRogueRecordData_TypeDefinitionIndex = 51061;

	class PlayerRogueRecordData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* _RecordBuffDatas_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _RecordMiracleIDs_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* _RecordAvatarDatas_k__BackingField; // 0x20
		::System::UInt32 _MapID_k__BackingField; // 0x28
		::System::UInt32 _AreaID_k__BackingField; // 0x2C
		::System::UInt32 _TotalScore_k__BackingField; // 0x30
		::System::Boolean _IsWin_k__BackingField; // 0x34
		::System::UInt32 _RogueAreaID_k__BackingField; // 0x38
		::System::UInt32 _ReachRoomCount_k__BackingField; // 0x3C
		::System::UInt32 _RoomScore_k__BackingField; // 0x40
		::System::UInt32 _TotalRoomCount_k__BackingField; // 0x44
		::System::UInt32 _PassRoomCount_k__BackingField; // 0x48
		::System::UInt32 _AreaFirstPassScore_k__BackingField; // 0x4C
		::System::UInt32 _TalentCoin_k__BackingField; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA__CTOR_OFFSET))(this);
		}

		::RPG::Client::BattleRecordDisplayType get_DisplayType()
		{
			return ((::RPG::Client::BattleRecordDisplayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_GET_DISPLAYTYPE_OFFSET))(this);
		}

		::System::Boolean get_HasRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_GET_HASRECORD_OFFSET))(this);
		}

		::System::Void Sync(::Class_1_9E78928359AD9962* info)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9E78928359AD9962*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_SYNC_OFFSET))(this, info);
		}

		::System::Void _InitBaseInfo(::Class_1_FB0633E85BD6CF8E_2* finishInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FB0633E85BD6CF8E_2*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA__INITBASEINFO_OFFSET))(this, finishInfo);
		}

		::System::Void _InitRecordInfo(::Class_1_0A1329B6B19F70B0_7* recordInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0A1329B6B19F70B0_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA__INITRECORDINFO_OFFSET))(this, recordInfo);
		}

		::System::Void _InitRecordBuffs(::System::Collections::Generic::IList_1<::Class_1_FA4F4A67B1C04320_693*>* buffs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_FA4F4A67B1C04320_693*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA__INITRECORDBUFFS_OFFSET))(this, buffs);
		}

		::System::Void _InitRecordMiracles(::System::Collections::Generic::IList_1<::System::UInt32>* miracleIDs)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA__INITRECORDMIRACLES_OFFSET))(this, miracleIDs);
		}

		::System::Void _InitRecordAvatars(::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_45*>* avatars)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_352A8B3482C80E7D_45*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA__INITRECORDAVATARS_OFFSET))(this, avatars);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_SET_AREAID_OFFSET))(this, value);
		}

		::System::UInt32 get_MapID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_GET_MAPID_OFFSET))(this);
		}

		::System::Void set_MapID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_SET_MAPID_OFFSET))(this, value);
		}

		::RPG::GameCore::RogueAreaConfigRow* get_AreaRow()
		{
			return ((::RPG::GameCore::RogueAreaConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_GET_AREAROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_AreaName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_GET_AREANAME_OFFSET))(this);
		}

		::System::UInt32 get_Difficulty()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_GET_DIFFICULTY_OFFSET))(this);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_SET_ISWIN_OFFSET))(this, value);
		}

		::System::UInt32 get_RogueAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_GET_ROGUEAREAID_OFFSET))(this);
		}

		::System::Void set_RogueAreaID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_SET_ROGUEAREAID_OFFSET))(this, value);
		}

		::System::UInt32 get_PassRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_GET_PASSROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_PassRoomCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_SET_PASSROOMCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_ReachRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_GET_REACHROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_ReachRoomCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_SET_REACHROOMCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_GET_TOTALROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_TotalRoomCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_SET_TOTALROOMCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_AreaFirstPassScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_GET_AREAFIRSTPASSSCORE_OFFSET))(this);
		}

		::System::Void set_AreaFirstPassScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_SET_AREAFIRSTPASSSCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_RoomScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_GET_ROOMSCORE_OFFSET))(this);
		}

		::System::Void set_RoomScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_SET_ROOMSCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_GET_TOTALSCORE_OFFSET))(this);
		}

		::System::Void set_TotalScore(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_SET_TOTALSCORE_OFFSET))(this, value);
		}

		::System::UInt32 get_TalentCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_GET_TALENTCOIN_OFFSET))(this);
		}

		::System::Void set_TalentCoin(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_SET_TALENTCOIN_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* get_RecordBuffDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_GET_RECORDBUFFDATAS_OFFSET))(this);
		}

		::System::Void set_RecordBuffDatas(::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_SET_RECORDBUFFDATAS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RecordMiracleIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_GET_RECORDMIRACLEIDS_OFFSET))(this);
		}

		::System::Void set_RecordMiracleIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_SET_RECORDMIRACLEIDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* get_RecordAvatarDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_GET_RECORDAVATARDATAS_OFFSET))(this);
		}

		::System::Void set_RecordAvatarDatas(::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERROGUERECORDDATA_SET_RECORDAVATARDATAS_OFFSET))(this, value);
		}
	};
}

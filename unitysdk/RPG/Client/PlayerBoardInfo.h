#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_28.h"
#include "unitysdk/System/Object.h"

class Class_1_075C34D03AFA1215_7;
class Class_1_21DCD4640D389503_22;
class Class_1_A16A135FC5A0DDB9_1;
class Class_1_E1B199B3D0FB256E_1;
namespace Proto { class DisplayAvatarDetailInfo; }
namespace RPG::Client { class HeadFrameInfo; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class PlayerDefaultInfo; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERBOARDINFO_CREATEBYLOCALPLAYERDATA_OFFSET UNITYSDK_OFFSET(0x17DD9BC0)
#define RPG_CLIENT_PLAYERBOARDINFO_CREATEBYPLAYERDETAILINFO_OFFSET UNITYSDK_OFFSET(0x17DDA490)
#define RPG_CLIENT_PLAYERBOARDINFO_GETASSISTAVATARS_OFFSET UNITYSDK_OFFSET(0x17DDB330)
#define RPG_CLIENT_PLAYERBOARDINFO_GETDISPLAYAVATARS_OFFSET UNITYSDK_OFFSET(0x17DDB100)
#define RPG_CLIENT_PLAYERBOARDINFO_GETDISPLAYAVATAR_OFFSET UNITYSDK_OFFSET(0x17DDAE70)
#define RPG_CLIENT_PLAYERBOARDINFO_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x17DDB0A0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_ASSISTAVATARID_OFFSET UNITYSDK_OFFSET(0x17DDBC40)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0x17DDB9F0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_BOOKCOUNT_OFFSET UNITYSDK_OFFSET(0x17DDBBF0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYCOLLECTION_OFFSET UNITYSDK_OFFSET(0x17DDBAD0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYDIARY_OFFSET UNITYSDK_OFFSET(0x17DDBB30)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYONLINESTATUS_OFFSET UNITYSDK_OFFSET(0x17DDBB70)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYRECORDTYPE_OFFSET UNITYSDK_OFFSET(0x17DDBB10)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYRECORD_OFFSET UNITYSDK_OFFSET(0x17DDBAF0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_HASBIRTHDAY_OFFSET UNITYSDK_OFFSET(0x17DDBAB0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_HEADFRAMEINFO_OFFSET UNITYSDK_OFFSET(0x17DDBC30)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x17DDBD90)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_ISDISPLAYHEADFRAME_OFFSET UNITYSDK_OFFSET(0x17DDBB90)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_ISLOCALPLAYER_OFFSET UNITYSDK_OFFSET(0x17DDADC0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_MUSICCOUNT_OFFSET UNITYSDK_OFFSET(0x17DDBC10)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x17DDB9D0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_PERSONALCARDID_OFFSET UNITYSDK_OFFSET(0x17DDBDE0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_PLAYERLEVEL_OFFSET UNITYSDK_OFFSET(0x17DDB990)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_PLAYEROUTFIT_OFFSET UNITYSDK_OFFSET(0x17DDBBD0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_REMARKNAME_OFFSET UNITYSDK_OFFSET(0x17DDB8A0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_ROOMDISPLAYAREAINFO_OFFSET UNITYSDK_OFFSET(0x17DDBBB0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x17DDBE00)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_UID_OFFSET UNITYSDK_OFFSET(0x17DDB970)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_UPLOADRECORDTEAM_OFFSET UNITYSDK_OFFSET(0x17DDBB50)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x17DDB9B0)
#define RPG_CLIENT_PLAYERBOARDINFO_REFRESHBYLOCALPLAYERDATA_OFFSET UNITYSDK_OFFSET(0x17DD9E40)
#define RPG_CLIENT_PLAYERBOARDINFO_REFRESHCOLLECTIONDATA_OFFSET UNITYSDK_OFFSET(0x17DDAAF0)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_BOOKCOUNT_OFFSET UNITYSDK_OFFSET(0x17DDBC00)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYCOLLECTION_OFFSET UNITYSDK_OFFSET(0x17DDBAE0)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYDIARY_OFFSET UNITYSDK_OFFSET(0x17DDBB40)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYONLINESTATUS_OFFSET UNITYSDK_OFFSET(0x17DDBB80)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYRECORDTYPE_OFFSET UNITYSDK_OFFSET(0x17DDBB20)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYRECORD_OFFSET UNITYSDK_OFFSET(0x17DDBB00)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x17DDAA30)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_ISDISPLAYHEADFRAME_OFFSET UNITYSDK_OFFSET(0x17DDBBA0)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_MUSICCOUNT_OFFSET UNITYSDK_OFFSET(0x17DDBC20)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x17DDB9E0)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_PERSONALCARDID_OFFSET UNITYSDK_OFFSET(0x17DDAA90)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_PLAYERLEVEL_OFFSET UNITYSDK_OFFSET(0x17DDB9A0)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_PLAYEROUTFIT_OFFSET UNITYSDK_OFFSET(0x17DDBBE0)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_ROOMDISPLAYAREAINFO_OFFSET UNITYSDK_OFFSET(0x17DDBBC0)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x17DDA990)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_UID_OFFSET UNITYSDK_OFFSET(0x17DDB980)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_UPLOADRECORDTEAM_OFFSET UNITYSDK_OFFSET(0x17DDBB60)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x17DDB9C0)
#define RPG_CLIENT_PLAYERBOARDINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x17DDBE70)
#define RPG_CLIENT_PLAYERBOARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x17DD9CD0)
#define RPG_CLIENT_PLAYERBOARDINFO__INITASSISTAVATAR_OFFSET UNITYSDK_OFFSET(0x17DDAD70)
#define RPG_CLIENT_PLAYERBOARDINFO__INITDISPLAYAVATARLIST_OFFSET UNITYSDK_OFFSET(0x17DDAB60)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerBoardInfo_TypeDefinitionIndex = 61428;

	class PlayerBoardInfo : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__MAXDISPLAYCOUNT()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PlayerBoardInfo_TypeDefinitionIndex)->GetStaticField(0x11900);
		}
		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* _AssistAvatars; // 0x10
		::RPG::Client::HeadFrameInfo* _HeadFrameInfo_k__BackingField; // 0x18
		::Il2CppArray<::Proto::DisplayAvatarDetailInfo*>* _DisplayAvatarDetailInfos; // 0x20
		::System::Collections::Generic::IList_1<::Proto::DisplayAvatarDetailInfo*>* _AssistAvatarDetailInfos; // 0x28
		::Class_1_E1B199B3D0FB256E_1* _RoomDisplayAreaInfo_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* DisplayAvatarList; // 0x38
		::System::String* _NickName_k__BackingField; // 0x40
		::RPG::Client::PlayerPlatformInfo* PlatformInfo; // 0x48
		::RPG::Client::PlayerDefaultInfo* PlayerDefaultInfo; // 0x50
		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* _DisplayAvatars; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* _LocalAssistAvatarIDs; // 0x60
		::Class_1_075C34D03AFA1215_7* _PlayerOutfit_k__BackingField; // 0x68
		::System::UInt32 _MusicCount_k__BackingField; // 0x70
		::System::Boolean _DisplayDiary_k__BackingField; // 0x74
		::System::Boolean _DisplayCollection_k__BackingField; // 0x75
		::System::Boolean _IsDisplayHeadFrame_k__BackingField; // 0x76
		::System::Boolean _DisplayOnlineStatus_k__BackingField; // 0x77
		::System::UInt32 _Birthday; // 0x78
		::System::UInt32 AvatarCount; // 0x7C
		::Enum_3_0A3761FE34514D6C_28 _DisplayRecordType_k__BackingField; // 0x80
		::System::UInt32 _WorldLevel_k__BackingField; // 0x84
		::System::UInt32 _PlayerLevel_k__BackingField; // 0x88
		::System::UInt32 _UID_k__BackingField; // 0x8C
		::System::UInt32 LightConeCount; // 0x90
		::System::UInt32 _BookCount_k__BackingField; // 0x94
		::System::Boolean IsBanned; // 0x98
		::System::Boolean _DisplayRecord_k__BackingField; // 0x99
		::System::Boolean _UploadRecordTeam_k__BackingField; // 0x9A
		::System::Boolean IsDisplayAvatarList; // 0x9B
		::System::UInt32 AchievementCount; // 0x9C

		::System::Void _ctor(::System::UInt32 uid)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO__CTOR_OFFSET))(this, uid);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO__CCTOR_OFFSET))();
		}

		static ::RPG::Client::PlayerBoardInfo* CreateByLocalPlayerData()
		{
			return ((::RPG::Client::PlayerBoardInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_CREATEBYLOCALPLAYERDATA_OFFSET))();
		}

		static ::RPG::Client::PlayerBoardInfo* CreateByPlayerDetailInfo(::Class_1_21DCD4640D389503_22* detailInfo)
		{
			return ((::RPG::Client::PlayerBoardInfo*(*)(::Class_1_21DCD4640D389503_22*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_CREATEBYPLAYERDETAILINFO_OFFSET))(detailInfo);
		}

		::System::Void RefreshByLocalPlayerData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_REFRESHBYLOCALPLAYERDATA_OFFSET))(this);
		}

		::System::Void RefreshCollectionData(::Class_1_A16A135FC5A0DDB9_1* recordInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A16A135FC5A0DDB9_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_REFRESHCOLLECTIONDATA_OFFSET))(this, recordInfo);
		}

		::RPG::Client::IAvatarInfoProvider* GetDisplayAvatar(::System::Int32 pos)
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GETDISPLAYAVATAR_OFFSET))(this, pos);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetDisplayAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GETDISPLAYAVATARS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetAssistAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GETASSISTAVATARS_OFFSET))(this);
		}

		::System::String* GetDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GETDISPLAYNAME_OFFSET))(this);
		}

		::System::Void _InitDisplayAvatarList(::Il2CppArray<::Proto::DisplayAvatarDetailInfo*>* displayAvatarInfos)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Proto::DisplayAvatarDetailInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO__INITDISPLAYAVATARLIST_OFFSET))(this, displayAvatarInfos);
		}

		::System::Void _InitAssistAvatar(::System::Collections::Generic::IList_1<::Proto::DisplayAvatarDetailInfo*>* avatarInfos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Proto::DisplayAvatarDetailInfo*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO__INITASSISTAVATAR_OFFSET))(this, avatarInfos);
		}

		::System::UInt32 get_UID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_UID_OFFSET))(this);
		}

		::System::Void set_UID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_UID_OFFSET))(this, value);
		}

		::System::UInt32 get_PlayerLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_PLAYERLEVEL_OFFSET))(this);
		}

		::System::Void set_PlayerLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_PLAYERLEVEL_OFFSET))(this, value);
		}

		::System::UInt32 get_WorldLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_WORLDLEVEL_OFFSET))(this);
		}

		::System::Void set_WorldLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_WORLDLEVEL_OFFSET))(this, value);
		}

		::System::String* get_NickName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_NICKNAME_OFFSET))(this);
		}

		::System::Void set_NickName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_NICKNAME_OFFSET))(this, value);
		}

		::System::UInt32 get_Birthday()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_BIRTHDAY_OFFSET))(this);
		}

		::System::Boolean get_HasBirthday()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_HASBIRTHDAY_OFFSET))(this);
		}

		::System::Boolean get_DisplayCollection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYCOLLECTION_OFFSET))(this);
		}

		::System::Void set_DisplayCollection(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYCOLLECTION_OFFSET))(this, value);
		}

		::System::Boolean get_DisplayRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYRECORD_OFFSET))(this);
		}

		::System::Void set_DisplayRecord(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYRECORD_OFFSET))(this, value);
		}

		::Enum_3_0A3761FE34514D6C_28 get_DisplayRecordType()
		{
			return ((::Enum_3_0A3761FE34514D6C_28(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYRECORDTYPE_OFFSET))(this);
		}

		::System::Void set_DisplayRecordType(::Enum_3_0A3761FE34514D6C_28 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_0A3761FE34514D6C_28))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYRECORDTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_DisplayDiary()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYDIARY_OFFSET))(this);
		}

		::System::Void set_DisplayDiary(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYDIARY_OFFSET))(this, value);
		}

		::System::Boolean get_UploadRecordTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_UPLOADRECORDTEAM_OFFSET))(this);
		}

		::System::Void set_UploadRecordTeam(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_UPLOADRECORDTEAM_OFFSET))(this, value);
		}

		::System::Boolean get_DisplayOnlineStatus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYONLINESTATUS_OFFSET))(this);
		}

		::System::Void set_DisplayOnlineStatus(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYONLINESTATUS_OFFSET))(this, value);
		}

		::System::Boolean get_IsDisplayHeadFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_ISDISPLAYHEADFRAME_OFFSET))(this);
		}

		::System::Void set_IsDisplayHeadFrame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_ISDISPLAYHEADFRAME_OFFSET))(this, value);
		}

		::Class_1_E1B199B3D0FB256E_1* get_RoomDisplayAreaInfo()
		{
			return ((::Class_1_E1B199B3D0FB256E_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_ROOMDISPLAYAREAINFO_OFFSET))(this);
		}

		::System::Void set_RoomDisplayAreaInfo(::Class_1_E1B199B3D0FB256E_1* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_E1B199B3D0FB256E_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_ROOMDISPLAYAREAINFO_OFFSET))(this, value);
		}

		::Class_1_075C34D03AFA1215_7* get_PlayerOutfit()
		{
			return ((::Class_1_075C34D03AFA1215_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_PLAYEROUTFIT_OFFSET))(this);
		}

		::System::Void set_PlayerOutfit(::Class_1_075C34D03AFA1215_7* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_075C34D03AFA1215_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_PLAYEROUTFIT_OFFSET))(this, value);
		}

		::System::UInt32 get_BookCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_BOOKCOUNT_OFFSET))(this);
		}

		::System::Void set_BookCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_BOOKCOUNT_OFFSET))(this, value);
		}

		::System::UInt32 get_MusicCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_MUSICCOUNT_OFFSET))(this);
		}

		::System::Void set_MusicCount(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_MUSICCOUNT_OFFSET))(this, value);
		}

		::RPG::Client::HeadFrameInfo* get_HeadFrameInfo()
		{
			return ((::RPG::Client::HeadFrameInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_HEADFRAMEINFO_OFFSET))(this);
		}

		::System::String* get_RemarkName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_REMARKNAME_OFFSET))(this);
		}

		::System::UInt32 get_AssistAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_ASSISTAVATARID_OFFSET))(this);
		}

		::System::Boolean get_IsLocalPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_ISLOCALPLAYER_OFFSET))(this);
		}

		::System::UInt32 get_HeadIconID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_HEADICONID_OFFSET))(this);
		}

		::System::Void set_HeadIconID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_HEADICONID_OFFSET))(this, value);
		}

		::System::UInt32 get_PersonalCardID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_PERSONALCARDID_OFFSET))(this);
		}

		::System::Void set_PersonalCardID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_PERSONALCARDID_OFFSET))(this, value);
		}

		::System::String* get_Signature()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_SIGNATURE_OFFSET))(this);
		}

		::System::Void set_Signature(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_SIGNATURE_OFFSET))(this, value);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_28.h"
#include "unitysdk/System/Object.h"

class Class_1_21DCD4640D389503_21;
class Class_1_6E708EAB438EC183_5;
class Class_1_A16A135FC5A0DDB9_1;
namespace Proto { class DisplayAvatarDetailInfo; }
namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class HeadFrameInfo; }
namespace RPG::Client { class PlayerDefaultInfo; }
namespace RPG::Client { class PlayerPlatformInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLAYERBOARDINFO_CREATEBYLOCALPLAYERDATA_OFFSET UNITYSDK_OFFSET(0x9B142D0)
#define RPG_CLIENT_PLAYERBOARDINFO_CREATEBYPLAYERDETAILINFO_OFFSET UNITYSDK_OFFSET(0x9B14BA0)
#define RPG_CLIENT_PLAYERBOARDINFO_GETASSISTAVATARDATAS_OFFSET UNITYSDK_OFFSET(0x9B15B20)
#define RPG_CLIENT_PLAYERBOARDINFO_GETASSISTAVATARDATA_OFFSET UNITYSDK_OFFSET(0x9B16090)
#define RPG_CLIENT_PLAYERBOARDINFO_GETDISPLAYAVATARDATABYID_OFFSET UNITYSDK_OFFSET(0x9B15810)
#define RPG_CLIENT_PLAYERBOARDINFO_GETDISPLAYAVATARDATAS_OFFSET UNITYSDK_OFFSET(0x9B158F0)
#define RPG_CLIENT_PLAYERBOARDINFO_GETDISPLAYAVATARDATA_OFFSET UNITYSDK_OFFSET(0x9B15580)
#define RPG_CLIENT_PLAYERBOARDINFO_GETDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x9B157B0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_ASSISTAVATARID_OFFSET UNITYSDK_OFFSET(0x9B161A0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_BIRTHDAY_OFFSET UNITYSDK_OFFSET(0x9B16440)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_BOOKCOUNT_OFFSET UNITYSDK_OFFSET(0x9B16620)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYCOLLECTION_OFFSET UNITYSDK_OFFSET(0x9B16520)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYDIARY_OFFSET UNITYSDK_OFFSET(0x9B16580)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYONLINESTATUS_OFFSET UNITYSDK_OFFSET(0x9B165C0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYRECORDTYPE_OFFSET UNITYSDK_OFFSET(0x9B16560)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_DISPLAYRECORD_OFFSET UNITYSDK_OFFSET(0x9B16540)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_HASBIRTHDAY_OFFSET UNITYSDK_OFFSET(0x9B16500)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_HEADFRAMEINFO_OFFSET UNITYSDK_OFFSET(0x9B16660)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x9B16670)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_ISDISPLAYHEADFRAME_OFFSET UNITYSDK_OFFSET(0x9B165E0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_ISLOCALPLAYER_OFFSET UNITYSDK_OFFSET(0x9B154D0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_MUSICCOUNT_OFFSET UNITYSDK_OFFSET(0x9B16640)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x9B16420)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_PERSONALCARDID_OFFSET UNITYSDK_OFFSET(0x9B166C0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_PLAYERLEVEL_OFFSET UNITYSDK_OFFSET(0x9B163E0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_PLAYEROUTFIT_OFFSET UNITYSDK_OFFSET(0x9B16600)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_REMARKNAME_OFFSET UNITYSDK_OFFSET(0x9B162F0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x9B166E0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_UID_OFFSET UNITYSDK_OFFSET(0x9B163C0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_UPLOADRECORDTEAM_OFFSET UNITYSDK_OFFSET(0x9B165A0)
#define RPG_CLIENT_PLAYERBOARDINFO_GET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x9B16400)
#define RPG_CLIENT_PLAYERBOARDINFO_REFRESHBYLOCALPLAYERDATA_OFFSET UNITYSDK_OFFSET(0x9B14550)
#define RPG_CLIENT_PLAYERBOARDINFO_REFRESHCOLLECTIONDATA_OFFSET UNITYSDK_OFFSET(0x9B15200)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_BOOKCOUNT_OFFSET UNITYSDK_OFFSET(0x9B16630)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYCOLLECTION_OFFSET UNITYSDK_OFFSET(0x9B16530)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYDIARY_OFFSET UNITYSDK_OFFSET(0x9B16590)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYONLINESTATUS_OFFSET UNITYSDK_OFFSET(0x9B165D0)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYRECORDTYPE_OFFSET UNITYSDK_OFFSET(0x9B16570)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_DISPLAYRECORD_OFFSET UNITYSDK_OFFSET(0x9B16550)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_HEADICONID_OFFSET UNITYSDK_OFFSET(0x9B15140)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_ISDISPLAYHEADFRAME_OFFSET UNITYSDK_OFFSET(0x9B165F0)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_MUSICCOUNT_OFFSET UNITYSDK_OFFSET(0x9B16650)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_NICKNAME_OFFSET UNITYSDK_OFFSET(0x9B16430)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_PERSONALCARDID_OFFSET UNITYSDK_OFFSET(0x9B151A0)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_PLAYERLEVEL_OFFSET UNITYSDK_OFFSET(0x9B163F0)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_PLAYEROUTFIT_OFFSET UNITYSDK_OFFSET(0x9B16610)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_SIGNATURE_OFFSET UNITYSDK_OFFSET(0x9B150A0)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_UID_OFFSET UNITYSDK_OFFSET(0x9B163D0)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_UPLOADRECORDTEAM_OFFSET UNITYSDK_OFFSET(0x9B165B0)
#define RPG_CLIENT_PLAYERBOARDINFO_SET_WORLDLEVEL_OFFSET UNITYSDK_OFFSET(0x9B16410)
#define RPG_CLIENT_PLAYERBOARDINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x9B16750)
#define RPG_CLIENT_PLAYERBOARDINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x9B143E0)
#define RPG_CLIENT_PLAYERBOARDINFO__INITASSISTAVATAR_OFFSET UNITYSDK_OFFSET(0x9B15480)
#define RPG_CLIENT_PLAYERBOARDINFO__INITDISPLAYAVATARLIST_OFFSET UNITYSDK_OFFSET(0x9B15270)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayerBoardInfo_TypeDefinitionIndex = 53127;

	class PlayerBoardInfo : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet__MAXDISPLAYCOUNT()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(PlayerBoardInfo_TypeDefinitionIndex)->GetStaticField(0x10800);
		}
		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* _DisplayAvatarDataList; // 0x10
		::Il2CppArray<::Proto::DisplayAvatarDetailInfo*>* _DisplayAvatarDetailInfos; // 0x18
		::RPG::Client::PlayerDefaultInfo* PlayerDefaultInfo; // 0x20
		::RPG::Client::HeadFrameInfo* _HeadFrameInfo_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _LocalAssistAvatarIDs; // 0x30
		::RPG::Client::PlayerPlatformInfo* PlatformInfo; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* _AssistAvatarDatas; // 0x40
		::Class_1_6E708EAB438EC183_5* _PlayerOutfit_k__BackingField; // 0x48
		::System::String* _NickName_k__BackingField; // 0x50
		::System::Collections::Generic::IList_1<::Proto::DisplayAvatarDetailInfo*>* _AssistAvatarDetailInfos; // 0x58
		::System::Collections::Generic::List_1<::System::UInt32>* DisplayAvatarList; // 0x60
		::System::UInt32 _BookCount_k__BackingField; // 0x68
		::System::UInt32 _MusicCount_k__BackingField; // 0x6C
		::System::UInt32 _PlayerLevel_k__BackingField; // 0x70
		::System::UInt32 _WorldLevel_k__BackingField; // 0x74
		::System::UInt32 _Birthday; // 0x78
		::Enum_3_0A3761FE34514D6C_28 _DisplayRecordType_k__BackingField; // 0x7C
		::System::UInt32 AchievementCount; // 0x80
		::System::UInt32 LightConeCount; // 0x84
		::System::UInt32 _UID_k__BackingField; // 0x88
		::System::Boolean _UploadRecordTeam_k__BackingField; // 0x8C
		::System::Boolean _DisplayOnlineStatus_k__BackingField; // 0x8D
		::System::Boolean IsDisplayAvatarList; // 0x8E
		::System::Boolean _DisplayCollection_k__BackingField; // 0x8F
		::System::UInt32 AvatarCount; // 0x90
		::System::Boolean _IsDisplayHeadFrame_k__BackingField; // 0x94
		::System::Boolean IsBanned; // 0x95
		::System::Boolean _DisplayRecord_k__BackingField; // 0x96
		::System::Boolean _DisplayDiary_k__BackingField; // 0x97

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

		static ::RPG::Client::PlayerBoardInfo* CreateByPlayerDetailInfo(::Class_1_21DCD4640D389503_21* detailInfo)
		{
			return ((::RPG::Client::PlayerBoardInfo*(*)(::Class_1_21DCD4640D389503_21*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_CREATEBYPLAYERDETAILINFO_OFFSET))(detailInfo);
		}

		::System::Void RefreshByLocalPlayerData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_REFRESHBYLOCALPLAYERDATA_OFFSET))(this);
		}

		::System::Void RefreshCollectionData(::Class_1_A16A135FC5A0DDB9_1* recordInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_A16A135FC5A0DDB9_1*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_REFRESHCOLLECTIONDATA_OFFSET))(this, recordInfo);
		}

		::RPG::Client::AvatarData* GetDisplayAvatarData(::System::Int32 pos)
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GETDISPLAYAVATARDATA_OFFSET))(this, pos);
		}

		::RPG::Client::AvatarData* GetDisplayAvatarDataByID(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GETDISPLAYAVATARDATABYID_OFFSET))(this, avatarID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* GetDisplayAvatarDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GETDISPLAYAVATARDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* GetAssistAvatarDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GETASSISTAVATARDATAS_OFFSET))(this);
		}

		::RPG::Client::AvatarData* GetAssistAvatarData()
		{
			return ((::RPG::Client::AvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GETASSISTAVATARDATA_OFFSET))(this);
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

		::Class_1_6E708EAB438EC183_5* get_PlayerOutfit()
		{
			return ((::Class_1_6E708EAB438EC183_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_GET_PLAYEROUTFIT_OFFSET))(this);
		}

		::System::Void set_PlayerOutfit(::Class_1_6E708EAB438EC183_5* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_6E708EAB438EC183_5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYERBOARDINFO_SET_PLAYEROUTFIT_OFFSET))(this, value);
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

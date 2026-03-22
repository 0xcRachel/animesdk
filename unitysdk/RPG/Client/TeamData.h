#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_63C076C405BE0674_2.h"
#include "unitysdk/RPG/Client/AdventureBuffData.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AvatarData; }
namespace RPG::Client { class MemberData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TEAMDATA_CACHEREPLACEDMEMBER_OFFSET UNITYSDK_OFFSET(0xA052080)
#define RPG_CLIENT_TEAMDATA_CANREPLACEMEMBERAVATARS_OFFSET UNITYSDK_OFFSET(0xA050940)
#define RPG_CLIENT_TEAMDATA_CHECKISEMPTY_OFFSET UNITYSDK_OFFSET(0xA051470)
#define RPG_CLIENT_TEAMDATA_CLEARMEMBERS_OFFSET UNITYSDK_OFFSET(0xA0515D0)
#define RPG_CLIENT_TEAMDATA_CLEARREPLACEDMEMBERCACHE_OFFSET UNITYSDK_OFFSET(0xA051DE0)
#define RPG_CLIENT_TEAMDATA_CLEARREPLACEDMEMBERIFREJOIN_OFFSET UNITYSDK_OFFSET(0xA052140)
#define RPG_CLIENT_TEAMDATA_CREATELOCALEDITTEAM_OFFSET UNITYSDK_OFFSET(0xA04F700)
#define RPG_CLIENT_TEAMDATA_CREATEMAINLINETEAM_OFFSET UNITYSDK_OFFSET(0xA04F620)
#define RPG_CLIENT_TEAMDATA_CREATESNAPSHOT_OFFSET UNITYSDK_OFFSET(0xA04FAA0)
#define RPG_CLIENT_TEAMDATA_CREATESTORYLINETEAM_OFFSET UNITYSDK_OFFSET(0xA04F690)
#define RPG_CLIENT_TEAMDATA_CREATETEMPSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xA04FB00)
#define RPG_CLIENT_TEAMDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xA04F2F0)
#define RPG_CLIENT_TEAMDATA_DELETESNAPSHOT_OFFSET UNITYSDK_OFFSET(0xA04FD70)
#define RPG_CLIENT_TEAMDATA_GETASSISTMEMBERSLOT_OFFSET UNITYSDK_OFFSET(0xA051A50)
#define RPG_CLIENT_TEAMDATA_GETASSISTMEMBER_OFFSET UNITYSDK_OFFSET(0xA0519D0)
#define RPG_CLIENT_TEAMDATA_GETCOMBATPOWER_OFFSET UNITYSDK_OFFSET(0xA051880)
#define RPG_CLIENT_TEAMDATA_GETFIRSTEMPTYSLOTINDEX_OFFSET UNITYSDK_OFFSET(0xA051360)
#define RPG_CLIENT_TEAMDATA_GETINDEXBYAVATARID_OFFSET UNITYSDK_OFFSET(0xA0512A0)
#define RPG_CLIENT_TEAMDATA_GETLEADERDAMAGETYPE_OFFSET UNITYSDK_OFFSET(0xA051660)
#define RPG_CLIENT_TEAMDATA_GETMEMBERAVATARS_OFFSET UNITYSDK_OFFSET(0xA0506F0)
#define RPG_CLIENT_TEAMDATA_GETMEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0xA050FE0)
#define RPG_CLIENT_TEAMDATA_GETMEMBERDATABYID_OFFSET UNITYSDK_OFFSET(0xA050E60)
#define RPG_CLIENT_TEAMDATA_GETMEMBERDATABYINDEX_OFFSET UNITYSDK_OFFSET(0xA050F40)
#define RPG_CLIENT_TEAMDATA_GETMEMBERDATA_OFFSET UNITYSDK_OFFSET(0xA050DF0)
#define RPG_CLIENT_TEAMDATA_GETSLOTBYAVATARID_OFFSET UNITYSDK_OFFSET(0xA051100)
#define RPG_CLIENT_TEAMDATA_GETSLOTBYAVATARREALID_OFFSET UNITYSDK_OFFSET(0xA0511B0)
#define RPG_CLIENT_TEAMDATA_GETSNAPSHOTORSELF_OFFSET UNITYSDK_OFFSET(0xA0506A0)
#define RPG_CLIENT_TEAMDATA_GETTRIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0xA052220)
#define RPG_CLIENT_TEAMDATA_GET_ADVENTUREBUFFDATAS_OFFSET UNITYSDK_OFFSET(0xA0523E0)
#define RPG_CLIENT_TEAMDATA_GET_AVAILABLETRIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0xA0526C0)
#define RPG_CLIENT_TEAMDATA_GET_HASINITFROMLINEUP_OFFSET UNITYSDK_OFFSET(0xA052640)
#define RPG_CLIENT_TEAMDATA_GET_ISFULL_OFFSET UNITYSDK_OFFSET(0xA0524E0)
#define RPG_CLIENT_TEAMDATA_GET_ISLOCALEDITTEAM_OFFSET UNITYSDK_OFFSET(0xA0524B0)
#define RPG_CLIENT_TEAMDATA_GET_ISMAINCHARACTERONLYTEAM_OFFSET UNITYSDK_OFFSET(0xA0524C0)
#define RPG_CLIENT_TEAMDATA_GET_ISMAINLINETEAM_OFFSET UNITYSDK_OFFSET(0xA0523F0)
#define RPG_CLIENT_TEAMDATA_GET_ISVIRTUAL_OFFSET UNITYSDK_OFFSET(0xA052490)
#define RPG_CLIENT_TEAMDATA_GET_LEADERSLOTID_OFFSET UNITYSDK_OFFSET(0xA052480)
#define RPG_CLIENT_TEAMDATA_GET_LINEUPTYPE_OFFSET UNITYSDK_OFFSET(0xA0523C0)
#define RPG_CLIENT_TEAMDATA_GET_LOCKEDAVATARIDS_OFFSET UNITYSDK_OFFSET(0xA0526A0)
#define RPG_CLIENT_TEAMDATA_GET_MAINLINEINDEX_OFFSET UNITYSDK_OFFSET(0xA052410)
#define RPG_CLIENT_TEAMDATA_GET_MEMBERDATAS_OFFSET UNITYSDK_OFFSET(0xA0523A0)
#define RPG_CLIENT_TEAMDATA_GET_MEMBERLISTDIRTY_OFFSET UNITYSDK_OFFSET(0xA052660)
#define RPG_CLIENT_TEAMDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA052470)
#define RPG_CLIENT_TEAMDATA_GET_PLANEID_OFFSET UNITYSDK_OFFSET(0xA052450)
#define RPG_CLIENT_TEAMDATA_GET_REPLACEDMEMBERCACHE_OFFSET UNITYSDK_OFFSET(0xA052680)
#define RPG_CLIENT_TEAMDATA_GET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xA052430)
#define RPG_CLIENT_TEAMDATA_GET_TEAMLEADER_OFFSET UNITYSDK_OFFSET(0xA051800)
#define RPG_CLIENT_TEAMDATA_GET_TEAMLIMITIDS_OFFSET UNITYSDK_OFFSET(0xA0526E0)
#define RPG_CLIENT_TEAMDATA_LOCALREMOVEASSISTMEMBER_OFFSET UNITYSDK_OFFSET(0xA051B30)
#define RPG_CLIENT_TEAMDATA_LOCALRESTOREREPLACEDMEMBER_OFFSET UNITYSDK_OFFSET(0xA052040)
#define RPG_CLIENT_TEAMDATA_SETSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xA04FDC0)
#define RPG_CLIENT_TEAMDATA_SET_AVAILABLETRIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0xA0526D0)
#define RPG_CLIENT_TEAMDATA_SET_HASINITFROMLINEUP_OFFSET UNITYSDK_OFFSET(0xA052650)
#define RPG_CLIENT_TEAMDATA_SET_ISMAINCHARACTERONLYTEAM_OFFSET UNITYSDK_OFFSET(0xA0524D0)
#define RPG_CLIENT_TEAMDATA_SET_ISMAINLINETEAM_OFFSET UNITYSDK_OFFSET(0xA052400)
#define RPG_CLIENT_TEAMDATA_SET_ISVIRTUAL_OFFSET UNITYSDK_OFFSET(0xA0524A0)
#define RPG_CLIENT_TEAMDATA_SET_LINEUPTYPE_OFFSET UNITYSDK_OFFSET(0xA0523D0)
#define RPG_CLIENT_TEAMDATA_SET_LOCKEDAVATARIDS_OFFSET UNITYSDK_OFFSET(0xA0526B0)
#define RPG_CLIENT_TEAMDATA_SET_MAINLINEINDEX_OFFSET UNITYSDK_OFFSET(0xA052420)
#define RPG_CLIENT_TEAMDATA_SET_MEMBERDATAS_OFFSET UNITYSDK_OFFSET(0xA0523B0)
#define RPG_CLIENT_TEAMDATA_SET_MEMBERLISTDIRTY_OFFSET UNITYSDK_OFFSET(0xA052670)
#define RPG_CLIENT_TEAMDATA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xA04FD00)
#define RPG_CLIENT_TEAMDATA_SET_PLANEID_OFFSET UNITYSDK_OFFSET(0xA052460)
#define RPG_CLIENT_TEAMDATA_SET_REPLACEDMEMBERCACHE_OFFSET UNITYSDK_OFFSET(0xA052690)
#define RPG_CLIENT_TEAMDATA_SET_STORYLINEID_OFFSET UNITYSDK_OFFSET(0xA052440)
#define RPG_CLIENT_TEAMDATA_SET_TEAMLIMITIDS_OFFSET UNITYSDK_OFFSET(0xA0526F0)
#define RPG_CLIENT_TEAMDATA_SWITCHTEAMLEADERTO_OFFSET UNITYSDK_OFFSET(0xA050B50)
#define RPG_CLIENT_TEAMDATA_TRYREMOVEMEMBERBYID_OFFSET UNITYSDK_OFFSET(0xA050D20)
#define RPG_CLIENT_TEAMDATA_UPDATEMEMBERSINSNAPSHOT_OFFSET UNITYSDK_OFFSET(0xA04FE10)
#define RPG_CLIENT_TEAMDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xA052700)
#define RPG_CLIENT_TEAMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA04F360)
#define RPG_CLIENT_TEAMDATA__LOCALSWITCHLEADERWHENMEMBERLEAVE_OFFSET UNITYSDK_OFFSET(0xA051E30)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamData_TypeDefinitionIndex = 54049;

	class TeamData : public ::System::Object
	{
	public:
		static ::RPG::Client::TeamData** StaticGet_EmptyTeamData()
		{
			return (::RPG::Client::TeamData**)Il2CppClass::FromTypeDefinitionIndex(TeamData_TypeDefinitionIndex)->GetStaticField(0x25B00);
		}
		static ::System::UInt32* StaticGet_MAX_MEMBER_COUNT()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(TeamData_TypeDefinitionIndex)->GetStaticField(0x7F20);
		}
		// static const ::System::Int32 s_InvalidTeamLeaderSlotID = 0xFFFFFFFF; // 0x0
		::System::Collections::Generic::List_1<::System::UInt32>* _AvailableTrialAvatarIDs_k__BackingField; // 0x10
		::Il2CppArray<::RPG::Client::MemberData*>* _MemberDatas; // 0x18
		::System::String* _Name; // 0x20
		::RPG::Client::TeamData* _SnapShotData; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* _LockedAvatarIDs_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _TeamLimitIDs_k__BackingField; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::AdventureBuffData>* _AdventureBuffDatas; // 0x40
		::RPG::Client::MemberData* _ReplacedMemberCache_k__BackingField; // 0x48
		::Enum_3_63C076C405BE0674_2 _LineupType_k__BackingField; // 0x50
		::System::UInt32 _PlaneID_k__BackingField; // 0x54
		::RPG::GameCore::FixPoint MPMax; // 0x58
		::System::Boolean _HasInitFromLineup_k__BackingField; // 0x60
		::System::Boolean _IsMainlineTeam_k__BackingField; // 0x61
		::System::Boolean _IsLocalEditTeam; // 0x62
		::System::Boolean _IsMainCharacterOnlyTeam_k__BackingField; // 0x63
		::System::Boolean _MemberListDirty_k__BackingField; // 0x64
		::System::Boolean _IsVirtual; // 0x65
		::System::Int32 _leaderSlotIdId; // 0x68
		::System::UInt32 _StoryLineID_k__BackingField; // 0x6C
		::RPG::GameCore::FixPoint MP; // 0x70
		::System::UInt32 _MainLineIndex_k__BackingField; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::TeamData* Create(::Enum_3_63C076C405BE0674_2 extraLineupType)
		{
			return ((::RPG::Client::TeamData*(*)(::Enum_3_63C076C405BE0674_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_CREATE_OFFSET))(extraLineupType);
		}

		static ::RPG::Client::TeamData* CreateMainlineTeam()
		{
			return ((::RPG::Client::TeamData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_CREATEMAINLINETEAM_OFFSET))();
		}

		static ::RPG::Client::TeamData* CreateStoryLineTeam(::System::UInt32 storyLineID)
		{
			return ((::RPG::Client::TeamData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_CREATESTORYLINETEAM_OFFSET))(storyLineID);
		}

		static ::RPG::Client::TeamData* CreateLocalEditTeam(::System::Collections::Generic::List_1<::System::UInt32>* trialAvatarIDs, ::System::Boolean isCreateTeamData, ::Enum_3_63C076C405BE0674_2 lineupType)
		{
			return ((::RPG::Client::TeamData*(*)(::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean, ::Enum_3_63C076C405BE0674_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_CREATELOCALEDITTEAM_OFFSET))(trialAvatarIDs, isCreateTeamData, lineupType);
		}

		::System::Void CreateSnapShot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_CREATESNAPSHOT_OFFSET))(this);
		}

		::RPG::Client::TeamData* CreateTempSnapshot()
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_CREATETEMPSNAPSHOT_OFFSET))(this);
		}

		::System::Void DeleteSnapShot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_DELETESNAPSHOT_OFFSET))(this);
		}

		::System::Void SetSnapShot(::RPG::Client::TeamData* snapshot)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SETSNAPSHOT_OFFSET))(this, snapshot);
		}

		::System::Void UpdateMembersInSnapshot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_UPDATEMEMBERSINSNAPSHOT_OFFSET))(this);
		}

		::RPG::Client::TeamData* GetSnapShotOrSelf()
		{
			return ((::RPG::Client::TeamData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETSNAPSHOTORSELF_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* GetMemberAvatars(::System::Boolean withTrialAvatar)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETMEMBERAVATARS_OFFSET))(this, withTrialAvatar);
		}

		::System::Boolean CanReplaceMemberAvatars(::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* targetAvatars)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_CANREPLACEMEMBERAVATARS_OFFSET))(this, targetAvatars);
		}

		::System::Void SwitchTeamLeaderTo(::System::Int32 newLeaderSlotID, ::System::Boolean isForce)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SWITCHTEAMLEADERTO_OFFSET))(this, newLeaderSlotID, isForce);
		}

		::System::Void TryRemoveMemberById(::System::UInt32 avatarID)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_TRYREMOVEMEMBERBYID_OFFSET))(this, avatarID);
		}

		::RPG::Client::MemberData* GetMemberData(::System::UInt32 slotID)
		{
			return ((::RPG::Client::MemberData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETMEMBERDATA_OFFSET))(this, slotID);
		}

		::RPG::Client::MemberData* GetMemberDataByID(::System::UInt32 avatarID)
		{
			return ((::RPG::Client::MemberData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETMEMBERDATABYID_OFFSET))(this, avatarID);
		}

		::RPG::Client::MemberData* GetMemberDataByIndex(::System::UInt32 indexID)
		{
			return ((::RPG::Client::MemberData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETMEMBERDATABYINDEX_OFFSET))(this, indexID);
		}

		::System::Int32 GetMemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETMEMBERCOUNT_OFFSET))(this);
		}

		::System::Int32 GetSlotByAvatarID(::System::UInt32 avatarID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETSLOTBYAVATARID_OFFSET))(this, avatarID);
		}

		::System::Int32 GetSlotByAvatarRealID(::System::UInt32 avatarRealID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETSLOTBYAVATARREALID_OFFSET))(this, avatarRealID);
		}

		::System::Int32 GetIndexByAvatarID(::System::UInt32 avatarID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETINDEXBYAVATARID_OFFSET))(this, avatarID);
		}

		::System::Int32 GetFirstEmptySlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETFIRSTEMPTYSLOTINDEX_OFFSET))(this);
		}

		::System::Boolean CheckIsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_CHECKISEMPTY_OFFSET))(this);
		}

		::System::Void ClearMembers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_CLEARMEMBERS_OFFSET))(this);
		}

		::RPG::GameCore::AttackDamageType GetLeaderDamageType()
		{
			return ((::RPG::GameCore::AttackDamageType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETLEADERDAMAGETYPE_OFFSET))(this);
		}

		::System::Single GetCombatPower()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETCOMBATPOWER_OFFSET))(this);
		}

		::RPG::Client::MemberData* GetAssistMember()
		{
			return ((::RPG::Client::MemberData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETASSISTMEMBER_OFFSET))(this);
		}

		::System::Int32 GetAssistMemberSlot()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETASSISTMEMBERSLOT_OFFSET))(this);
		}

		::System::Void LocalRemoveAssistMember()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_LOCALREMOVEASSISTMEMBER_OFFSET))(this);
		}

		::System::Void LocalRestoreReplacedMember()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_LOCALRESTOREREPLACEDMEMBER_OFFSET))(this);
		}

		::System::Void CacheReplacedMember()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_CACHEREPLACEDMEMBER_OFFSET))(this);
		}

		::System::Void ClearReplacedMemberIfReJoin(::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>* avatars)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::AvatarData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_CLEARREPLACEDMEMBERIFREJOIN_OFFSET))(this, avatars);
		}

		::System::Void ClearReplacedMemberCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_CLEARREPLACEDMEMBERCACHE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetTrialAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GETTRIALAVATARIDS_OFFSET))(this);
		}

		::System::Void _LocalSwitchLeaderWhenMemberLeave(::RPG::Client::MemberData* memberData, ::System::Int32 assistMemberSlot)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MemberData*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA__LOCALSWITCHLEADERWHENMEMBERLEAVE_OFFSET))(this, memberData, assistMemberSlot);
		}

		::Il2CppArray<::RPG::Client::MemberData*>* get_MemberDatas()
		{
			return ((::Il2CppArray<::RPG::Client::MemberData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_MEMBERDATAS_OFFSET))(this);
		}

		::System::Void set_MemberDatas(::Il2CppArray<::RPG::Client::MemberData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::Client::MemberData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_MEMBERDATAS_OFFSET))(this, value);
		}

		::Enum_3_63C076C405BE0674_2 get_LineupType()
		{
			return ((::Enum_3_63C076C405BE0674_2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_LINEUPTYPE_OFFSET))(this);
		}

		::System::Void set_LineupType(::Enum_3_63C076C405BE0674_2 value)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_63C076C405BE0674_2))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_LINEUPTYPE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::AdventureBuffData>* get_AdventureBuffDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::AdventureBuffData>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_ADVENTUREBUFFDATAS_OFFSET))(this);
		}

		::System::Boolean get_IsMainlineTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_ISMAINLINETEAM_OFFSET))(this);
		}

		::System::Void set_IsMainlineTeam(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_ISMAINLINETEAM_OFFSET))(this, value);
		}

		::System::UInt32 get_MainLineIndex()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_MAINLINEINDEX_OFFSET))(this);
		}

		::System::Void set_MainLineIndex(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_MAINLINEINDEX_OFFSET))(this, value);
		}

		::System::UInt32 get_StoryLineID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_STORYLINEID_OFFSET))(this);
		}

		::System::Void set_StoryLineID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_STORYLINEID_OFFSET))(this, value);
		}

		::System::UInt32 get_PlaneID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_PLANEID_OFFSET))(this);
		}

		::System::Void set_PlaneID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_PLANEID_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_NAME_OFFSET))(this, value);
		}

		::System::Int32 get_LeaderSlotID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_LEADERSLOTID_OFFSET))(this);
		}

		::RPG::Client::MemberData* get_TeamLeader()
		{
			return ((::RPG::Client::MemberData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_TEAMLEADER_OFFSET))(this);
		}

		::System::Boolean get_IsVirtual()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_ISVIRTUAL_OFFSET))(this);
		}

		::System::Void set_IsVirtual(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_ISVIRTUAL_OFFSET))(this, value);
		}

		::System::Boolean get_IsLocalEditTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_ISLOCALEDITTEAM_OFFSET))(this);
		}

		::System::Boolean get_IsMainCharacterOnlyTeam()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_ISMAINCHARACTERONLYTEAM_OFFSET))(this);
		}

		::System::Void set_IsMainCharacterOnlyTeam(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_ISMAINCHARACTERONLYTEAM_OFFSET))(this, value);
		}

		::System::Boolean get_IsFull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_ISFULL_OFFSET))(this);
		}

		::System::Boolean get_HasInitFromLineup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_HASINITFROMLINEUP_OFFSET))(this);
		}

		::System::Void set_HasInitFromLineup(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_HASINITFROMLINEUP_OFFSET))(this, value);
		}

		::System::Boolean get_MemberListDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_MEMBERLISTDIRTY_OFFSET))(this);
		}

		::System::Void set_MemberListDirty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_MEMBERLISTDIRTY_OFFSET))(this, value);
		}

		::RPG::Client::MemberData* get_ReplacedMemberCache()
		{
			return ((::RPG::Client::MemberData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_REPLACEDMEMBERCACHE_OFFSET))(this);
		}

		::System::Void set_ReplacedMemberCache(::RPG::Client::MemberData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_REPLACEDMEMBERCACHE_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_LockedAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_LOCKEDAVATARIDS_OFFSET))(this);
		}

		::System::Void set_LockedAvatarIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_LOCKEDAVATARIDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_AvailableTrialAvatarIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_AVAILABLETRIALAVATARIDS_OFFSET))(this);
		}

		::System::Void set_AvailableTrialAvatarIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_AVAILABLETRIALAVATARIDS_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_TeamLimitIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_GET_TEAMLIMITIDS_OFFSET))(this);
		}

		::System::Void set_TeamLimitIDs(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMDATA_SET_TEAMLIMITIDS_OFFSET))(this, value);
		}
	};
}

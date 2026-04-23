#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_64E52A323C80D766_7;
class Class_1_D17272E82AE804C2_1004;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class MemberData; }
namespace RPG::GameCore { class SpecialAvatarRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_CLEARALLMEMBERS_OFFSET UNITYSDK_OFFSET(0x16846000)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_CLEARCURTEAMMEMBERS_OFFSET UNITYSDK_OFFSET(0x1684DC90)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16845A60)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GETALLMEMBERDATAS_OFFSET UNITYSDK_OFFSET(0x1684E090)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GETCACHESORTEDALLMEMBERDATAS_OFFSET UNITYSDK_OFFSET(0x1684E130)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GETCANSELECTAVATARLIST_OFFSET UNITYSDK_OFFSET(0x1684E590)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GETDEFAULTAVATARDATAS_OFFSET UNITYSDK_OFFSET(0x16848310)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GETDEFAULTSELECTEDMEMBERS_OFFSET UNITYSDK_OFFSET(0x1684E330)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GET_ATTACKADD_OFFSET UNITYSDK_OFFSET(0x1684EC80)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GET_DEFENCEADD_OFFSET UNITYSDK_OFFSET(0x1684ECA0)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GET_NEWDEADKEYS_OFFSET UNITYSDK_OFFSET(0x1684ED00)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GET_TOTALDEADHPRATIO_OFFSET UNITYSDK_OFFSET(0x1684ECE0)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GET_TOTALLEFTHPRATIO_OFFSET UNITYSDK_OFFSET(0x1684ECC0)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_HASALIVEAVATARHPLESSTHAN_OFFSET UNITYSDK_OFFSET(0x16848BA0)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_ISSELECTEDMEMBER_OFFSET UNITYSDK_OFFSET(0x1684E4F0)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_REFRESHMEMBERS_OFFSET UNITYSDK_OFFSET(0x16849AC0)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_REFRESHTEAMLEFTHPRATIO_OFFSET UNITYSDK_OFFSET(0x16849FF0)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_SETSELECTEDMEMBERS_OFFSET UNITYSDK_OFFSET(0x16849CA0)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_SET_ATTACKADD_OFFSET UNITYSDK_OFFSET(0x1684EC90)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_SET_DEFENCEADD_OFFSET UNITYSDK_OFFSET(0x1684ECB0)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_SET_NEWDEADKEYS_OFFSET UNITYSDK_OFFSET(0x1684ED10)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_SET_TOTALDEADHPRATIO_OFFSET UNITYSDK_OFFSET(0x1684ECF0)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_SET_TOTALLEFTHPRATIO_OFFSET UNITYSDK_OFFSET(0x1684ECD0)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA_SYNCPROPERTIES_OFFSET UNITYSDK_OFFSET(0x16849A60)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA__CREATEAVATARDATA_OFFSET UNITYSDK_OFFSET(0x1684E7E0)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16845820)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA__REMOVEFROMCURMEMBERDATAS_OFFSET UNITYSDK_OFFSET(0x1684EB50)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA__SYNCMEMBERDATA_OFFSET UNITYSDK_OFFSET(0x1684DD50)
#define RPG_CLIENT_TREASUREDUNGEONTEAMDATA__TRYGETSPECIALAVATARCONFIG_OFFSET UNITYSDK_OFFSET(0x1684EC10)

namespace RPG::Client
{
	inline static constexpr unsigned int TreasureDungeonTeamData_TypeDefinitionIndex = 62879;

	class TreasureDungeonTeamData : public ::System::Object
	{
	public:
		// static const ::System::UInt32 _MAX_MEMBER_COUNT = 0x4; // 0x0
		::Il2CppArray<::RPG::Client::MemberData*>* _CurMemberDatas; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _NewDeadKeys_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::MemberData*>* _CacheAllMembers; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::MemberData*>* _CacheSortedAllMembers; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::MemberData*>* _AllMemberDataDict; // 0x30
		::System::UInt32 _TotalDeadHPRatio_k__BackingField; // 0x38
		::System::UInt32 _AttackAdd_k__BackingField; // 0x3C
		::System::UInt32 _TotalLeftHPRatio_k__BackingField; // 0x40
		::System::UInt32 _DefenceAdd_k__BackingField; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA__CTOR_OFFSET))(this);
		}

		::System::Void ClearCurTeamMembers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_CLEARCURTEAMMEMBERS_OFFSET))(this);
		}

		::System::Void ClearAllMembers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_CLEARALLMEMBERS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_DISPOSE_OFFSET))(this);
		}

		::System::Void RefreshMembers(::System::Collections::Generic::IList_1<::Class_1_64E52A323C80D766_7*>* avatarList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_64E52A323C80D766_7*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_REFRESHMEMBERS_OFFSET))(this, avatarList);
		}

		::System::Void SetSelectedMembers(::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_1004*>* avatarList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::Class_1_D17272E82AE804C2_1004*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_SETSELECTEDMEMBERS_OFFSET))(this, avatarList);
		}

		::System::Void SyncProperties(::System::UInt32 attack, ::System::UInt32 defence)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_SYNCPROPERTIES_OFFSET))(this, attack, defence);
		}

		::System::Void RefreshTeamLeftHPRatio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_REFRESHTEAMLEFTHPRATIO_OFFSET))(this);
		}

		::System::Boolean HasAliveAvatarHPLessThan(::System::UInt32 ratio)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_HASALIVEAVATARHPLESSTHAN_OFFSET))(this, ratio);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MemberData*>* GetAllMemberDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MemberData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GETALLMEMBERDATAS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MemberData*>* GetCacheSortedAllMemberDatas(::System::Boolean resort)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MemberData*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GETCACHESORTEDALLMEMBERDATAS_OFFSET))(this, resort);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MemberData*>* GetDefaultSelectedMembers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MemberData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GETDEFAULTSELECTEDMEMBERS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetDefaultAvatarDatas()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GETDEFAULTAVATARDATAS_OFFSET))(this);
		}

		::System::Boolean IsSelectedMember(::RPG::Client::MemberData* memberData)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_ISSELECTEDMEMBER_OFFSET))(this, memberData);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* GetCanSelectAvatarList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GETCANSELECTAVATARLIST_OFFSET))(this);
		}

		::System::Void _SyncMemberData(::Class_1_64E52A323C80D766_7* serverMemberData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_64E52A323C80D766_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA__SYNCMEMBERDATA_OFFSET))(this, serverMemberData);
		}

		::RPG::Client::IAvatarInfoProvider* _CreateAvatarData(::Class_1_64E52A323C80D766_7* serverMemberData)
		{
			return ((::RPG::Client::IAvatarInfoProvider*(*)(::PVOID, ::Class_1_64E52A323C80D766_7*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA__CREATEAVATARDATA_OFFSET))(this, serverMemberData);
		}

		::System::Void _RemoveFromCurMemberDatas(::RPG::Client::MemberData* data)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA__REMOVEFROMCURMEMBERDATAS_OFFSET))(this, data);
		}

		::RPG::GameCore::SpecialAvatarRow* _TryGetSpecialAvatarConfig(::System::UInt32 avatarID)
		{
			return ((::RPG::GameCore::SpecialAvatarRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA__TRYGETSPECIALAVATARCONFIG_OFFSET))(this, avatarID);
		}

		::System::UInt32 get_AttackAdd()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GET_ATTACKADD_OFFSET))(this);
		}

		::System::Void set_AttackAdd(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_SET_ATTACKADD_OFFSET))(this, value);
		}

		::System::UInt32 get_DefenceAdd()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GET_DEFENCEADD_OFFSET))(this);
		}

		::System::Void set_DefenceAdd(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_SET_DEFENCEADD_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalLeftHPRatio()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GET_TOTALLEFTHPRATIO_OFFSET))(this);
		}

		::System::Void set_TotalLeftHPRatio(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_SET_TOTALLEFTHPRATIO_OFFSET))(this, value);
		}

		::System::UInt32 get_TotalDeadHPRatio()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GET_TOTALDEADHPRATIO_OFFSET))(this);
		}

		::System::Void set_TotalDeadHPRatio(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_SET_TOTALDEADHPRATIO_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_NewDeadKeys()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_GET_NEWDEADKEYS_OFFSET))(this);
		}

		::System::Void set_NewDeadKeys(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TREASUREDUNGEONTEAMDATA_SET_NEWDEADKEYS_OFFSET))(this, value);
		}
	};
}

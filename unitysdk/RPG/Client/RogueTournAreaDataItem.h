#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTournAreaGroupID.h"
#include "unitysdk/RPG/GameCore/RogueTournDifficultyType.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_4CF8088A158DCE25_83;
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class MonsterData; }
namespace RPG::GameCore { class RogueTournAreaRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUETOURNAREADATAITEM_CLEARALLPLAYEDAREAUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0x9E53650)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_CREATE_OFFSET UNITYSDK_OFFSET(0x9E52390)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GETAVAILROGUESCORE_OFFSET UNITYSDK_OFFSET(0x9E52450)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GETAVAILTOURNEXP_OFFSET UNITYSDK_OFFSET(0x9E525B0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GETFIRSTREWARDITEMS_OFFSET UNITYSDK_OFFSET(0x9E52710)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GETMONSTERDROPITEMS_OFFSET UNITYSDK_OFFSET(0x9E52780)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_AREAGROUPID_OFFSET UNITYSDK_OFFSET(0x9E51630)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x9E52420)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_AREANAMEID_OFFSET UNITYSDK_OFFSET(0x9E537C0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_DIFFICULTYTYPE_OFFSET UNITYSDK_OFFSET(0x9E51FB0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_DIVISIONLEVEL_OFFSET UNITYSDK_OFFSET(0x9E51990)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_ISFIRSTPASSED_OFFSET UNITYSDK_OFFSET(0x9E538E0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_ISFIRSTREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x9E53900)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_ISHARD_OFFSET UNITYSDK_OFFSET(0x9E537F0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9E538C0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_LOCKEDHINT_OFFSET UNITYSDK_OFFSET(0x9E53810)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_TOURNMODE_OFFSET UNITYSDK_OFFSET(0x9E51650)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_WORLDLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0x9E52850)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_ISNEEDPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0x9E53190)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_ISREACHWORLDLEVELLIMIT_OFFSET UNITYSDK_OFFSET(0x9E527E0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_REWRITEMONSTERLEVELBYAREA_OFFSET UNITYSDK_OFFSET(0x9E52870)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SETAREAUNLOCKANIMPLAYED_OFFSET UNITYSDK_OFFSET(0x9E533B0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_ISFIRSTPASSED_OFFSET UNITYSDK_OFFSET(0x9E538F0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_ISFIRSTREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0x9E53910)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_ISUNLOCKED_OFFSET UNITYSDK_OFFSET(0x9E538D0)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM_SYNC_OFFSET UNITYSDK_OFFSET(0x9E51370)
#define RPG_CLIENT_ROGUETOURNAREADATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x9E52440)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournAreaDataItem_TypeDefinitionIndex = 53652;

	class RogueTournAreaDataItem : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTournAreaRow* _Row; // 0x10
		::System::Boolean _IsFirstPassed_k__BackingField; // 0x18
		::System::Boolean _IsUnlocked_k__BackingField; // 0x19
		::System::Boolean _IsFirstRewardTaken_k__BackingField; // 0x1A

		::System::Void _ctor(::RPG::GameCore::RogueTournAreaRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournAreaRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM__CTOR_OFFSET))(this, row);
		}

		static ::RPG::Client::RogueTournAreaDataItem* Create(::System::UInt32 areaID)
		{
			return ((::RPG::Client::RogueTournAreaDataItem*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_CREATE_OFFSET))(areaID);
		}

		::System::Void Sync(::Class_1_4CF8088A158DCE25_83* proto)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4CF8088A158DCE25_83*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SYNC_OFFSET))(this, proto);
		}

		::System::UInt32 GetAvailRogueScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GETAVAILROGUESCORE_OFFSET))(this);
		}

		::System::UInt32 GetAvailTournExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GETAVAILTOURNEXP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetFirstRewardItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GETFIRSTREWARDITEMS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* GetMonsterDropItems()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GETMONSTERDROPITEMS_OFFSET))(this);
		}

		::System::Boolean IsReachWorldLevelLimit(::System::UInt32 worldLevel)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_ISREACHWORLDLEVELLIMIT_OFFSET))(this, worldLevel);
		}

		::System::Void RewriteMonsterLevelByArea(::RPG::Client::MonsterData* finalMonster, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*>* monsters)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterData*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_REWRITEMONSTERLEVELBYAREA_OFFSET))(this, finalMonster, monsters);
		}

		::System::Boolean IsNeedPlayUnlockAnim()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_ISNEEDPLAYUNLOCKANIM_OFFSET))(this);
		}

		::System::Void SetAreaUnlockAnimPlayed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SETAREAUNLOCKANIMPLAYED_OFFSET))(this);
		}

		static ::System::Void ClearAllPlayedAreaUnlockAnim()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_CLEARALLPLAYEDAREAUNLOCKANIM_OFFSET))();
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_AREAID_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournMode get_TournMode()
		{
			return ((::RPG::GameCore::RogueTournMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_TOURNMODE_OFFSET))(this);
		}

		::System::UInt32 get_DivisionLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_DIVISIONLEVEL_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournAreaGroupID get_AreaGroupID()
		{
			return ((::RPG::GameCore::RogueTournAreaGroupID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_AREAGROUPID_OFFSET))(this);
		}

		::RPG::GameCore::RogueTournDifficultyType get_DifficultyType()
		{
			return ((::RPG::GameCore::RogueTournDifficultyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_DIFFICULTYTYPE_OFFSET))(this);
		}

		::System::UInt32 get_WorldLevelLimit()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_WORLDLEVELLIMIT_OFFSET))(this);
		}

		::RPG::Client::TextID get_AreaNameID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_AREANAMEID_OFFSET))(this);
		}

		::System::Boolean get_IsHard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_ISHARD_OFFSET))(this);
		}

		::RPG::Client::TextID get_LockedHint()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_LOCKEDHINT_OFFSET))(this);
		}

		::System::Boolean get_IsUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_ISUNLOCKED_OFFSET))(this);
		}

		::System::Void set_IsUnlocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_ISUNLOCKED_OFFSET))(this, value);
		}

		::System::Boolean get_IsFirstPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_ISFIRSTPASSED_OFFSET))(this);
		}

		::System::Void set_IsFirstPassed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_ISFIRSTPASSED_OFFSET))(this, value);
		}

		::System::Boolean get_IsFirstRewardTaken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_GET_ISFIRSTREWARDTAKEN_OFFSET))(this);
		}

		::System::Void set_IsFirstRewardTaken(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNAREADATAITEM_SET_ISFIRSTREWARDTAKEN_OFFSET))(this, value);
		}
	};
}

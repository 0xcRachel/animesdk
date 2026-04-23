#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/System/Object.h"

class Class_1_C9DFE5EE7107C629_6;
namespace RPG::Client { class EvolveBuildCard; }
namespace RPG::Client { class EvolveBuildResultBarData; }
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class SortedEvolveBuildGearEquipInfoLists; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_CREATE_OFFSET UNITYSDK_OFFSET(0x14AE5510)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GETBASESCORE_OFFSET UNITYSDK_OFFSET(0x14AE5F40)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GETRESULTBARDATA_OFFSET UNITYSDK_OFFSET(0x14AE6690)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GETTOTALAVATARDAMAGE_OFFSET UNITYSDK_OFFSET(0x14AE5C10)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GETTOTALGEARDAMAGE_OFFSET UNITYSDK_OFFSET(0x14AE58E0)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GETWAVESCORE_OFFSET UNITYSDK_OFFSET(0x14AE6320)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_ACCESSORYSLOTTOTALNUM_OFFSET UNITYSDK_OFFSET(0x14AE7100)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_AVATARLIST_OFFSET UNITYSDK_OFFSET(0x14AE7230)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_CARDLIST_OFFSET UNITYSDK_OFFSET(0x14AE7210)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_CURCOIN_OFFSET UNITYSDK_OFFSET(0x14AE74B0)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_CUREXP_OFFSET UNITYSDK_OFFSET(0x14AE7020)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_CURGAMEEXP_OFFSET UNITYSDK_OFFSET(0x14AE7460)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_CURLEVELID_OFFSET UNITYSDK_OFFSET(0x14AE6F50)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_CURPERIOD_OFFSET UNITYSDK_OFFSET(0x14AE7380)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_CURWAVE_OFFSET UNITYSDK_OFFSET(0x14AE73F0)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_HASBATTLEINFO_OFFSET UNITYSDK_OFFSET(0x14AE6FC0)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_PERIODIDLIST_OFFSET UNITYSDK_OFFSET(0x14AE72E0)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_ROUNDCNT_OFFSET UNITYSDK_OFFSET(0x14AE7520)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_SEASON_OFFSET UNITYSDK_OFFSET(0x14AE7570)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_SORTEDGEAREQUIPINFO_OFFSET UNITYSDK_OFFSET(0x14AE7170)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_WEAPONSLOTTOTALNUM_OFFSET UNITYSDK_OFFSET(0x14AE7090)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_SET_CARDLIST_OFFSET UNITYSDK_OFFSET(0x14AE7220)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_SET_SEASON_OFFSET UNITYSDK_OFFSET(0x14AE7580)
#define RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO__CTOR_OFFSET UNITYSDK_OFFSET(0x14AE58D0)

namespace RPG::Client
{
	inline static constexpr unsigned int EvolveBuildLevelFromProto_TypeDefinitionIndex = 58791;

	class EvolveBuildLevelFromProto : public ::System::Object
	{
	public:
		::Class_1_C9DFE5EE7107C629_6* _levelInfo; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* _CardList_k__BackingField; // 0x18
		::RPG::GameCore::EvolveBuildSeason _Season_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::EvolveBuildLevelFromProto* Create(::Class_1_C9DFE5EE7107C629_6* levelInfo, ::RPG::GameCore::EvolveBuildSeason season)
		{
			return ((::RPG::Client::EvolveBuildLevelFromProto*(*)(::Class_1_C9DFE5EE7107C629_6*, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_CREATE_OFFSET))(levelInfo, season);
		}

		::System::Double GetTotalGearDamage()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GETTOTALGEARDAMAGE_OFFSET))(this);
		}

		::System::Double GetTotalAvatarDamage()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GETTOTALAVATARDAMAGE_OFFSET))(this);
		}

		::System::UInt32 GetBaseScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GETBASESCORE_OFFSET))(this);
		}

		::System::UInt32 GetWaveScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GETWAVESCORE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildResultBarData*>* GetResultBarData()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildResultBarData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GETRESULTBARDATA_OFFSET))(this);
		}

		::System::UInt32 get_CurLevelId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_CURLEVELID_OFFSET))(this);
		}

		::System::Boolean get_HasBattleInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_HASBATTLEINFO_OFFSET))(this);
		}

		::System::UInt32 get_CurExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_CUREXP_OFFSET))(this);
		}

		::System::Int32 get_WeaponSlotTotalNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_WEAPONSLOTTOTALNUM_OFFSET))(this);
		}

		::System::Int32 get_AccessorySlotTotalNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_ACCESSORYSLOTTOTALNUM_OFFSET))(this);
		}

		::RPG::Client::SortedEvolveBuildGearEquipInfoLists* get_SortedGearEquipInfo()
		{
			return ((::RPG::Client::SortedEvolveBuildGearEquipInfoLists*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_SORTEDGEAREQUIPINFO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* get_CardList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_CARDLIST_OFFSET))(this);
		}

		::System::Void set_CardList(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_SET_CARDLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>* get_AvatarList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IAvatarInfoProvider*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_AVATARLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_PeriodIdList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_PERIODIDLIST_OFFSET))(this);
		}

		::System::UInt32 get_CurPeriod()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_CURPERIOD_OFFSET))(this);
		}

		::System::UInt32 get_CurWave()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_CURWAVE_OFFSET))(this);
		}

		::System::UInt32 get_CurGameExp()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_CURGAMEEXP_OFFSET))(this);
		}

		::System::UInt32 get_CurCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_CURCOIN_OFFSET))(this);
		}

		::System::UInt32 get_RoundCnt()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_ROUNDCNT_OFFSET))(this);
		}

		::RPG::GameCore::EvolveBuildSeason get_Season()
		{
			return ((::RPG::GameCore::EvolveBuildSeason(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_GET_SEASON_OFFSET))(this);
		}

		::System::Void set_Season(::RPG::GameCore::EvolveBuildSeason value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + RPG_CLIENT_EVOLVEBUILDLEVELFROMPROTO_SET_SEASON_OFFSET))(this, value);
		}
	};
}

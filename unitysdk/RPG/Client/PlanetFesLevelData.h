#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_4608E37A1B3D374A_23.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Numerics/BigInteger.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ItemDisplayData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PLANETFESLEVELDATA_GET_BASICBUFFIDLIST_OFFSET UNITYSDK_OFFSET(0x175098A0)
#define RPG_CLIENT_PLANETFESLEVELDATA_GET_COSTCOIN_OFFSET UNITYSDK_OFFSET(0x17509860)
#define RPG_CLIENT_PLANETFESLEVELDATA_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x17509960)
#define RPG_CLIENT_PLANETFESLEVELDATA_GET_ENVBUFFIDLIST_OFFSET UNITYSDK_OFFSET(0x175098C0)
#define RPG_CLIENT_PLANETFESLEVELDATA_GET_GRANTCOIN_OFFSET UNITYSDK_OFFSET(0x17509880)
#define RPG_CLIENT_PLANETFESLEVELDATA_GET_ISFINISH_OFFSET UNITYSDK_OFFSET(0x17509940)
#define RPG_CLIENT_PLANETFESLEVELDATA_GET_LEVELUNLOCKIDLIST_OFFSET UNITYSDK_OFFSET(0x17509900)
#define RPG_CLIENT_PLANETFESLEVELDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x17509840)
#define RPG_CLIENT_PLANETFESLEVELDATA_GET_QUESTID_OFFSET UNITYSDK_OFFSET(0x17509920)
#define RPG_CLIENT_PLANETFESLEVELDATA_GET_REWARDITEMLIST_OFFSET UNITYSDK_OFFSET(0x175098E0)
#define RPG_CLIENT_PLANETFESLEVELDATA_SET_BASICBUFFIDLIST_OFFSET UNITYSDK_OFFSET(0x175098B0)
#define RPG_CLIENT_PLANETFESLEVELDATA_SET_COSTCOIN_OFFSET UNITYSDK_OFFSET(0x17509870)
#define RPG_CLIENT_PLANETFESLEVELDATA_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x17509970)
#define RPG_CLIENT_PLANETFESLEVELDATA_SET_ENVBUFFIDLIST_OFFSET UNITYSDK_OFFSET(0x175098D0)
#define RPG_CLIENT_PLANETFESLEVELDATA_SET_GRANTCOIN_OFFSET UNITYSDK_OFFSET(0x17509890)
#define RPG_CLIENT_PLANETFESLEVELDATA_SET_LEVELUNLOCKIDLIST_OFFSET UNITYSDK_OFFSET(0x17509910)
#define RPG_CLIENT_PLANETFESLEVELDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x17509850)
#define RPG_CLIENT_PLANETFESLEVELDATA_SET_QUESTID_OFFSET UNITYSDK_OFFSET(0x17509930)
#define RPG_CLIENT_PLANETFESLEVELDATA_SET_REWARDITEMLIST_OFFSET UNITYSDK_OFFSET(0x175098F0)
#define RPG_CLIENT_PLANETFESLEVELDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17509320)
#define RPG_CLIENT_PLANETFESLEVELDATA__GETQUESTSTATUS_OFFSET UNITYSDK_OFFSET(0x17509790)
#define RPG_CLIENT_PLANETFESLEVELDATA__ITEMSORT_OFFSET UNITYSDK_OFFSET(0x175096C0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesLevelData_TypeDefinitionIndex = 61360;

	class PlanetFesLevelData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _LevelUnlockIDList_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _EnvBuffIDList_k__BackingField; // 0x18
		::System::Numerics::BigInteger _CostCoin_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* _RewardItemList_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* _BasicBuffIDList_k__BackingField; // 0x38
		::System::Numerics::BigInteger _GrantCoin_k__BackingField; // 0x40
		::RPG::Client::TextID _Description_k__BackingField; // 0x50
		::System::UInt32 _Level_k__BackingField; // 0x60
		::System::UInt32 _QuestID_k__BackingField; // 0x64

		::System::Void _ctor(::System::UInt32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA__CTOR_OFFSET))(this, level);
		}

		::System::Int32 _ItemSort(::RPG::Client::ItemDisplayData* a, ::RPG::Client::ItemDisplayData* b)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ItemDisplayData*, ::RPG::Client::ItemDisplayData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA__ITEMSORT_OFFSET))(this, a, b);
		}

		::Enum_3_4608E37A1B3D374A_23 _GetQuestStatus()
		{
			return ((::Enum_3_4608E37A1B3D374A_23(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA__GETQUESTSTATUS_OFFSET))(this);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_SET_LEVEL_OFFSET))(this, value);
		}

		::System::Numerics::BigInteger get_CostCoin()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_GET_COSTCOIN_OFFSET))(this);
		}

		::System::Void set_CostCoin(::System::Numerics::BigInteger value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_SET_COSTCOIN_OFFSET))(this, value);
		}

		::System::Numerics::BigInteger get_GrantCoin()
		{
			return ((::System::Numerics::BigInteger(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_GET_GRANTCOIN_OFFSET))(this);
		}

		::System::Void set_GrantCoin(::System::Numerics::BigInteger value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Numerics::BigInteger))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_SET_GRANTCOIN_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_BasicBuffIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_GET_BASICBUFFIDLIST_OFFSET))(this);
		}

		::System::Void set_BasicBuffIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_SET_BASICBUFFIDLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EnvBuffIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_GET_ENVBUFFIDLIST_OFFSET))(this);
		}

		::System::Void set_EnvBuffIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_SET_ENVBUFFIDLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* get_RewardItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_GET_REWARDITEMLIST_OFFSET))(this);
		}

		::System::Void set_RewardItemList(::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_SET_REWARDITEMLIST_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_LevelUnlockIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_GET_LEVELUNLOCKIDLIST_OFFSET))(this);
		}

		::System::Void set_LevelUnlockIDList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_SET_LEVELUNLOCKIDLIST_OFFSET))(this, value);
		}

		::System::UInt32 get_QuestID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_GET_QUESTID_OFFSET))(this);
		}

		::System::Void set_QuestID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_SET_QUESTID_OFFSET))(this, value);
		}

		::System::Boolean get_IsFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_GET_ISFINISH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Description()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_Description(::RPG::Client::TextID value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANETFESLEVELDATA_SET_DESCRIPTION_OFFSET))(this, value);
		}
	};
}

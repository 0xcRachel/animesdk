#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RestaurantEmployeeType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ElfAbilityData; }
namespace RPG::Client { class ElfRestaurantEmployeeUpData; }
namespace RPG::GameCore { class RestaurantEmployeeRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x9127DC0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GETABILITYTYPES_OFFSET UNITYSDK_OFFSET(0x9129D30)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GETABILITYUNLOCKLEVEL_OFFSET UNITYSDK_OFFSET(0x9128CE0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GETALLABILITIES_OFFSET UNITYSDK_OFFSET(0x9128990)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GETLEVELUPPRICE_OFFSET UNITYSDK_OFFSET(0x91280A0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GETNEXTABILITY_OFFSET UNITYSDK_OFFSET(0x9128740)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GETORDINARYABILITY_OFFSET UNITYSDK_OFFSET(0x9128420)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GETSPECIALABILITIES_OFFSET UNITYSDK_OFFSET(0x91287F0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ABILITIES_OFFSET UNITYSDK_OFFSET(0x9129C70)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_CANLEVELUP_OFFSET UNITYSDK_OFFSET(0x91299E0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x91062E0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_CURRENTLEVELDATA_OFFSET UNITYSDK_OFFSET(0x91284F0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_CURRENTLEVEL_OFFSET UNITYSDK_OFFSET(0x9129B70)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_DETAIL_OFFSET UNITYSDK_OFFSET(0x91290E0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_EMPLOYEEID_OFFSET UNITYSDK_OFFSET(0x9128F70)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_FIRSTTALK_OFFSET UNITYSDK_OFFSET(0x9129160)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x9106270)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_IMGPATH_OFFSET UNITYSDK_OFFSET(0x91292C0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISCHEF_OFFSET UNITYSDK_OFFSET(0x9129840)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISDEVELOPED_OFFSET UNITYSDK_OFFSET(0x91194F0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISFARMER_OFFSET UNITYSDK_OFFSET(0x9129970)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISMAXLEVEL_OFFSET UNITYSDK_OFFSET(0x91281C0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISPROGRESSUNLOCKED_OFFSET UNITYSDK_OFFSET(0x91293A0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISPURCHASED_OFFSET UNITYSDK_OFFSET(0x9129B90)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x9122240)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISUNLOCK_OFFSET UNITYSDK_OFFSET(0x91193D0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISWAITER_OFFSET UNITYSDK_OFFSET(0x9129710)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_MAXLEVEL_OFFSET UNITYSDK_OFFSET(0x9129BA0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x9129250)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9129060)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_NPCID_OFFSET UNITYSDK_OFFSET(0x91291E0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x9128F90)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_UNLOCKIDLIST_OFFSET UNITYSDK_OFFSET(0x9129330)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x9129000)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_HASABILITY_OFFSET UNITYSDK_OFFSET(0x9129EC0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_ISLEVELUPMATERIALENOUGH_OFFSET UNITYSDK_OFFSET(0x91282F0)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_SET_CURRENTLEVEL_OFFSET UNITYSDK_OFFSET(0x9129B80)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_SET_EMPLOYEEID_OFFSET UNITYSDK_OFFSET(0x9128F80)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x9127E30)
#define RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA__INITEMPLOYEEUPDATA_OFFSET UNITYSDK_OFFSET(0x9127E40)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantEmployeeData_TypeDefinitionIndex = 50574;

	class ElfRestaurantEmployeeData : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::ElfRestaurantEmployeeUpData*>* _EmployeeUpDataDict; // 0x10
		::System::UInt32 _EmployeeID_k__BackingField; // 0x18
		::System::UInt32 _CurrentLevel_k__BackingField; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfRestaurantEmployeeData* Create(::System::UInt32 employeeID)
		{
			return ((::RPG::Client::ElfRestaurantEmployeeData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_CREATE_OFFSET))(employeeID);
		}

		::System::UInt32 GetLevelUpPrice()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GETLEVELUPPRICE_OFFSET))(this);
		}

		::System::Boolean IsLevelUpMaterialEnough()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_ISLEVELUPMATERIALENOUGH_OFFSET))(this);
		}

		::RPG::Client::ElfAbilityData* GetOrdinaryAbility()
		{
			return ((::RPG::Client::ElfAbilityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GETORDINARYABILITY_OFFSET))(this);
		}

		::RPG::Client::ElfAbilityData* GetNextAbility()
		{
			return ((::RPG::Client::ElfAbilityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GETNEXTABILITY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfAbilityData*>* GetSpecialAbilities()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfAbilityData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GETSPECIALABILITIES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfAbilityData*>* GetAllAbilities()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfAbilityData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GETALLABILITIES_OFFSET))(this);
		}

		::System::UInt32 GetAbilityUnlockLevel(::System::UInt32 abilityID)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GETABILITYUNLOCKLEVEL_OFFSET))(this, abilityID);
		}

		::System::Void _InitEmployeeUpData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA__INITEMPLOYEEUPDATA_OFFSET))(this);
		}

		::System::UInt32 get_EmployeeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_EMPLOYEEID_OFFSET))(this);
		}

		::System::Void set_EmployeeID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_SET_EMPLOYEEID_OFFSET))(this, value);
		}

		::RPG::GameCore::RestaurantEmployeeType get_Type()
		{
			return ((::RPG::GameCore::RestaurantEmployeeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_TYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Detail()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_DETAIL_OFFSET))(this);
		}

		::RPG::Client::TextID get_FirstTalk()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_FIRSTTALK_OFFSET))(this);
		}

		::System::UInt32 get_NPCID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_NPCID_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_ConfigID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_CONFIGID_OFFSET))(this);
		}

		::System::String* get_Model()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_MODEL_OFFSET))(this);
		}

		::System::String* get_IMGPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_IMGPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_UnlockIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_UNLOCKIDLIST_OFFSET))(this);
		}

		::System::Boolean get_IsDeveloped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISDEVELOPED_OFFSET))(this);
		}

		::System::Boolean get_IsUnlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISUNLOCK_OFFSET))(this);
		}

		::System::Boolean get_IsProgressUnlocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISPROGRESSUNLOCKED_OFFSET))(this);
		}

		::System::Boolean get_IsWaiter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISWAITER_OFFSET))(this);
		}

		::System::Boolean get_IsChef()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISCHEF_OFFSET))(this);
		}

		::System::Boolean get_IsFarmer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISFARMER_OFFSET))(this);
		}

		::System::Boolean get_IsMaxLevel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISMAXLEVEL_OFFSET))(this);
		}

		::System::Boolean get_CanLevelUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_CANLEVELUP_OFFSET))(this);
		}

		::System::UInt32 get_CurrentLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_CURRENTLEVEL_OFFSET))(this);
		}

		::System::Void set_CurrentLevel(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_SET_CURRENTLEVEL_OFFSET))(this, value);
		}

		::System::Boolean get_IsPurchased()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISPURCHASED_OFFSET))(this);
		}

		::RPG::Client::ElfRestaurantEmployeeUpData* get_CurrentLevelData()
		{
			return ((::RPG::Client::ElfRestaurantEmployeeUpData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_CURRENTLEVELDATA_OFFSET))(this);
		}

		::System::UInt32 get_MaxLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_MAXLEVEL_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_Abilities()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ABILITIES_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::UInt32>* GetAbilityTypes()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GETABILITYTYPES_OFFSET))(this);
		}

		::System::Boolean HasAbility(::System::UInt32 abilityID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_HASABILITY_OFFSET))(this, abilityID);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET_ISSHOW_OFFSET))(this);
		}

		::RPG::GameCore::RestaurantEmployeeRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantEmployeeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTEMPLOYEEDATA_GET__ROW_OFFSET))(this);
		}
	};
}

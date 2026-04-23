#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4FE6DADC546DF06C;
namespace RPG::Client { class DrinkMakerBarDrink; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_DRINKDATA_OFFSET UNITYSDK_OFFSET(0x160C1FE0)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_DRINKID_OFFSET UNITYSDK_OFFSET(0x160C1FC0)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_DRINKPROTO_OFFSET UNITYSDK_OFFSET(0x160C2000)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_DRUNKGROUPLIST_OFFSET UNITYSDK_OFFSET(0x160C2020)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_ISMADEINMAINSTORY_OFFSET UNITYSDK_OFFSET(0x160C2040)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_DRINKDATA_OFFSET UNITYSDK_OFFSET(0x160C1FF0)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_DRINKID_OFFSET UNITYSDK_OFFSET(0x160C1FD0)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_DRINKPROTO_OFFSET UNITYSDK_OFFSET(0x160C2010)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_DRUNKGROUPLIST_OFFSET UNITYSDK_OFFSET(0x160C2030)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_ISMADEINMAINSTORY_OFFSET UNITYSDK_OFFSET(0x160C2050)
#define RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x160BBBD0)

namespace RPG::Client
{
	inline static constexpr unsigned int DrinkMakerCheersMadeDrinkData_TypeDefinitionIndex = 58618;

	class DrinkMakerCheersMadeDrinkData : public ::System::Object
	{
	public:
		::Class_1_4FE6DADC546DF06C* _DrinkProto_k__BackingField; // 0x10
		::RPG::Client::DrinkMakerBarDrink* _DrinkData_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _DrunkGroupList_k__BackingField; // 0x20
		::System::Boolean _IsMadeInMainStory_k__BackingField; // 0x28
		::System::UInt32 _DrinkId_k__BackingField; // 0x2C

		::System::Void _ctor(::System::UInt32 drinkId, ::Class_1_4FE6DADC546DF06C* drinkMakerDrink, ::System::Collections::Generic::List_1<::System::UInt32>* drunkGroupList, ::System::Boolean isMadeInMainStory)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Class_1_4FE6DADC546DF06C*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA__CTOR_OFFSET))(this, drinkId, drinkMakerDrink, drunkGroupList, isMadeInMainStory);
		}

		::System::UInt32 get_DrinkId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_DRINKID_OFFSET))(this);
		}

		::System::Void set_DrinkId(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_DRINKID_OFFSET))(this, value);
		}

		::RPG::Client::DrinkMakerBarDrink* get_DrinkData()
		{
			return ((::RPG::Client::DrinkMakerBarDrink*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_DRINKDATA_OFFSET))(this);
		}

		::System::Void set_DrinkData(::RPG::Client::DrinkMakerBarDrink* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DrinkMakerBarDrink*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_DRINKDATA_OFFSET))(this, value);
		}

		::Class_1_4FE6DADC546DF06C* get_DrinkProto()
		{
			return ((::Class_1_4FE6DADC546DF06C*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_DRINKPROTO_OFFSET))(this);
		}

		::System::Void set_DrinkProto(::Class_1_4FE6DADC546DF06C* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4FE6DADC546DF06C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_DRINKPROTO_OFFSET))(this, value);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_DrunkGroupList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_DRUNKGROUPLIST_OFFSET))(this);
		}

		::System::Void set_DrunkGroupList(::System::Collections::Generic::List_1<::System::UInt32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_DRUNKGROUPLIST_OFFSET))(this, value);
		}

		::System::Boolean get_IsMadeInMainStory()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_GET_ISMADEINMAINSTORY_OFFSET))(this);
		}

		::System::Void set_IsMadeInMainStory(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DRINKMAKERCHEERSMADEDRINKDATA_SET_ISMADEINMAINSTORY_OFFSET))(this, value);
		}
	};
}

#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class RestaurantRecipeUpRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x914D970)
#define RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_GET_COOKTIME_OFFSET UNITYSDK_OFFSET(0x914E540)
#define RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x914E4B0)
#define RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_GET_PRICE_OFFSET UNITYSDK_OFFSET(0x914B710)
#define RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_GET_RECIPEID_OFFSET UNITYSDK_OFFSET(0x914E490)
#define RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_GET_UPGRADEMATERIALS_OFFSET UNITYSDK_OFFSET(0x914BD90)
#define RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x914E4D0)
#define RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x914E4C0)
#define RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_SET_RECIPEID_OFFSET UNITYSDK_OFFSET(0x914E4A0)
#define RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x914E480)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantRecipeUpData_TypeDefinitionIndex = 50665;

	class ElfRestaurantRecipeUpData : public ::System::Object
	{
	public:
		::System::UInt32 _Level_k__BackingField; // 0x10
		::System::UInt32 _RecipeID_k__BackingField; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::ElfRestaurantRecipeUpData* Create(::System::UInt32 recipeID, ::System::UInt32 level)
		{
			return ((::RPG::Client::ElfRestaurantRecipeUpData*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_CREATE_OFFSET))(recipeID, level);
		}

		::System::UInt32 get_RecipeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_GET_RECIPEID_OFFSET))(this);
		}

		::System::Void set_RecipeID(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_SET_RECIPEID_OFFSET))(this, value);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_SET_LEVEL_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* get_UpgradeMaterials()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_GET_UPGRADEMATERIALS_OFFSET))(this);
		}

		::System::UInt32 get_Price()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_GET_PRICE_OFFSET))(this);
		}

		::System::UInt32 get_CookTime()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_GET_COOKTIME_OFFSET))(this);
		}

		::RPG::GameCore::RestaurantRecipeUpRow* get__Row()
		{
			return ((::RPG::GameCore::RestaurantRecipeUpRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTRECIPEUPDATA_GET__ROW_OFFSET))(this);
		}
	};
}

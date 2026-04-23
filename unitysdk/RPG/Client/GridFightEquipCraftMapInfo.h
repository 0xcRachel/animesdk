#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GridFightEquipCraftRecipe; }
namespace RPG::Client { class GridFightEquipCraftRecipeCollection; }
namespace RPG::Client { class GridFightEquipInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_CANCRAFT_OFFSET UNITYSDK_OFFSET(0x18054300)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_CANUSEDTOCRAFT_OFFSET UNITYSDK_OFFSET(0x18038A20)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18053BF0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETRECIPESCANCRAFTBYADDITEM_OFFSET UNITYSDK_OFFSET(0x1804D340)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETRECIPESCANCRAFT_OFFSET UNITYSDK_OFFSET(0x18053FC0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETRECIPESCONTAINSITEM_OFFSET UNITYSDK_OFFSET(0x18053C90)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETTARGETEQUIPCRAFTRECIPECOLLECTION_OFFSET UNITYSDK_OFFSET(0x1804CCE0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GET_COSTEQUIPLUT_OFFSET UNITYSDK_OFFSET(0x18054780)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GET_RECIPECOLLECTIONLUT_OFFSET UNITYSDK_OFFSET(0x180547A0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_SET_COSTEQUIPLUT_OFFSET UNITYSDK_OFFSET(0x18054790)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_SET_RECIPECOLLECTIONLUT_OFFSET UNITYSDK_OFFSET(0x180547B0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x18053800)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO__LOADCRAFTMAPCONFIG_OFFSET UNITYSDK_OFFSET(0x180538E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftMapInfo_TypeDefinitionIndex = 59369;

	class GridFightEquipCraftMapInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>* _RecipeCollectionLUT_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipe*>* _CostEquipLUT_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::GridFightEquipCraftRecipeCollection* GetTargetEquipCraftRecipeCollection(::System::UInt32 itemID)
		{
			return ((::RPG::Client::GridFightEquipCraftRecipeCollection*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETTARGETEQUIPCRAFTRECIPECOLLECTION_OFFSET))(this, itemID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>* GetRecipesContainsItem(::System::UInt32 itemID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETRECIPESCONTAINSITEM_OFFSET))(this, itemID);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>* GetRecipesCanCraft(::RPG::Client::GridFightEquipInfo* equipInfo)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETRECIPESCANCRAFT_OFFSET))(this, equipInfo);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>* GetRecipesCanCraftByAddItem(::RPG::Client::GridFightEquipInfo* equipInfo, ::System::UInt32 itemID)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID, ::RPG::Client::GridFightEquipInfo*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GETRECIPESCANCRAFTBYADDITEM_OFFSET))(this, equipInfo, itemID);
		}

		::System::Boolean CanCraft(::System::UInt32 itemIDA, ::System::UInt32 itemIDB)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_CANCRAFT_OFFSET))(this, itemIDA, itemIDB);
		}

		::System::Boolean CanUsedToCraft(::System::UInt32 itemID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_CANUSEDTOCRAFT_OFFSET))(this, itemID);
		}

		::System::Void _LoadCraftMapConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO__LOADCRAFTMAPCONFIG_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipe*>* get_CostEquipLUT()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipe*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GET_COSTEQUIPLUT_OFFSET))(this);
		}

		::System::Void set_CostEquipLUT(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipe*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipe*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_SET_COSTEQUIPLUT_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>* get_RecipeCollectionLUT()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_GET_RECIPECOLLECTIONLUT_OFFSET))(this);
		}

		::System::Void set_RecipeCollectionLUT(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightEquipCraftRecipeCollection*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO_SET_RECIPECOLLECTIONLUT_OFFSET))(this, value);
		}
	};
}

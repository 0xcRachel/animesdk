#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class CommonActivityLightConeRewardData; }
namespace RPG::Client { class ElfFacilityDataItem; }
namespace RPG::Client { class ElfFarmFieldData; }
namespace RPG::Client { class ElfFarmSeedData; }
namespace RPG::Client { class ElfRestaurantEmployeeData; }
namespace RPG::Client { class ElfRestaurantModule; }
namespace RPG::Client { class ElfRestaurantRecipeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFREDDOTMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AA4DD0)
#define RPG_CLIENT_ELFREDDOTMANAGER_GETHASMATUREDCROPSFARMIDS_OFFSET UNITYSDK_OFFSET(0x15AA6760)
#define RPG_CLIENT_ELFREDDOTMANAGER_GETNEWUNLOCKFIELDBELONGFARMIDS_OFFSET UNITYSDK_OFFSET(0x15AA6FD0)
#define RPG_CLIENT_ELFREDDOTMANAGER_GET__MODULE_OFFSET UNITYSDK_OFFSET(0x15AA58F0)
#define RPG_CLIENT_ELFREDDOTMANAGER_HASNEWEMPLOYEE_OFFSET UNITYSDK_OFFSET(0x15AA55A0)
#define RPG_CLIENT_ELFREDDOTMANAGER_HASNEWFACILITY_OFFSET UNITYSDK_OFFSET(0x15AA5AC0)
#define RPG_CLIENT_ELFREDDOTMANAGER_HASNEWFIELD_OFFSET UNITYSDK_OFFSET(0x15AA5C90)
#define RPG_CLIENT_ELFREDDOTMANAGER_HASNEWGOODS_OFFSET UNITYSDK_OFFSET(0x15AA6030)
#define RPG_CLIENT_ELFREDDOTMANAGER_HASNEWORDERS_OFFSET UNITYSDK_OFFSET(0x15AA6360)
#define RPG_CLIENT_ELFREDDOTMANAGER_HASNEWRECIPE_OFFSET UNITYSDK_OFFSET(0x15AA5000)
#define RPG_CLIENT_ELFREDDOTMANAGER_HASNEWSEEDS_OFFSET UNITYSDK_OFFSET(0x15AA5E60)
#define RPG_CLIENT_ELFREDDOTMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x15AA4B40)
#define RPG_CLIENT_ELFREDDOTMANAGER_ISCANTAKEVILLAGERREWARD_OFFSET UNITYSDK_OFFSET(0x15AA6690)
#define RPG_CLIENT_ELFREDDOTMANAGER_ISLIGHTCONEFINISHED_OFFSET UNITYSDK_OFFSET(0x15AA76C0)
#define RPG_CLIENT_ELFREDDOTMANAGER_ISLIGHTCONEREWARDING_OFFSET UNITYSDK_OFFSET(0x15AA7660)
#define RPG_CLIENT_ELFREDDOTMANAGER_MARKDIRTY_OFFSET UNITYSDK_OFFSET(0x15AA7620)
#define RPG_CLIENT_ELFREDDOTMANAGER__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x15AA4CF0)
#define RPG_CLIENT_ELFREDDOTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x15AA7B90)
#define RPG_CLIENT_ELFREDDOTMANAGER__REMOVEHANDLERS_OFFSET UNITYSDK_OFFSET(0x15AA4F80)
#define RPG_CLIENT_ELFREDDOTMANAGER__SETDIRTY_OFFSET UNITYSDK_OFFSET(0x15AA7720)
#define RPG_CLIENT_ELFREDDOTMANAGER__TRYREFRESHALLNEWUNLOCK_OFFSET UNITYSDK_OFFSET(0x15AA51D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRedDotManager_TypeDefinitionIndex = 58722;

	class ElfRedDotManager : public ::System::Object
	{
	public:
		::RPG::Client::CommonActivityLightConeRewardData* _LightConeRewardData; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _RedDotIDs; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ElfFacilityDataItem*>* _AllNewUnlockFacilities; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmFieldData*>* _AllNewUnlockFields; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::ElfFarmSeedData*>* _AllNewUnlockSeeds; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* _AllNewUnlockRecipes; // 0x38
		::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantEmployeeData*>* _AllNewUnlockEmployees; // 0x40
		::System::Boolean _IsDirty; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Boolean HasNewRecipe()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_HASNEWRECIPE_OFFSET))(this);
		}

		::System::Boolean HasNewEmployee()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_HASNEWEMPLOYEE_OFFSET))(this);
		}

		::System::Boolean HasNewFacility()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_HASNEWFACILITY_OFFSET))(this);
		}

		::System::Boolean HasNewField()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_HASNEWFIELD_OFFSET))(this);
		}

		::System::Boolean HasNewSeeds()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_HASNEWSEEDS_OFFSET))(this);
		}

		::System::Boolean HasNewGoods()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_HASNEWGOODS_OFFSET))(this);
		}

		::System::Boolean HasNewOrders()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_HASNEWORDERS_OFFSET))(this);
		}

		::System::Boolean IsCanTakeVillagerReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_ISCANTAKEVILLAGERREWARD_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetHasMaturedCropsFarmIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_GETHASMATUREDCROPSFARMIDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* GetNewUnlockFieldBelongFarmIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_GETNEWUNLOCKFIELDBELONGFARMIDS_OFFSET))(this);
		}

		::System::Void MarkDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_MARKDIRTY_OFFSET))(this);
		}

		::System::Boolean IsLightConeRewarding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_ISLIGHTCONEREWARDING_OFFSET))(this);
		}

		::System::Boolean IsLightConeFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_ISLIGHTCONEFINISHED_OFFSET))(this);
		}

		::System::Void _AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER__ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _RemoveHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER__REMOVEHANDLERS_OFFSET))(this);
		}

		::System::Void _SetDirty(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER__SETDIRTY_OFFSET))(this, param);
		}

		::System::Void _TryRefreshAllNewUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER__TRYREFRESHALLNEWUNLOCK_OFFSET))(this);
		}

		::RPG::Client::ElfRestaurantModule* get__Module()
		{
			return ((::RPG::Client::ElfRestaurantModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFREDDOTMANAGER_GET__MODULE_OFFSET))(this);
		}
	};
}

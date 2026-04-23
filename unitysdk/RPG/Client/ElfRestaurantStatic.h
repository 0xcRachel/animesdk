#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Ray.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class ElfFarmProductData; }
namespace RPG::Client { class ElfFarmSeedData; }
namespace RPG::Client { class ElfRestaurantFestivalData; }
namespace RPG::Client { class ElfRestaurantGameInstance; }
namespace RPG::Client { class ElfRestaurantManageGameplayModel; }
namespace RPG::Client { class ElfRestaurantMediator; }
namespace RPG::Client { class ElfRestaurantModule; }
namespace RPG::Client { class ElfRestaurantRecipeData; }
namespace RPG::Client { class ElfRuntimeCell; }
namespace RPG::Client::LittleGame { class ElfRestaurantGameEntity; }
namespace RPG::Client::LittleGame::ElfRestaurant { class ElfRestaurantView; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }

#define RPG_CLIENT_ELFRESTAURANTSTATIC_CANHARVEST_OFFSET UNITYSDK_OFFSET(0x15AD4B10)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_CLEARRAYCASTCACHE_OFFSET UNITYSDK_OFFSET(0x15AD7670)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETACTIVITYID_OFFSET UNITYSDK_OFFSET(0x15ACB350)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETACTIVITYREWARDID_OFFSET UNITYSDK_OFFSET(0x15AAA1C0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETCURRENCYCOUNT_OFFSET UNITYSDK_OFFSET(0x15AAC7A0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETCURRENCYID_OFFSET UNITYSDK_OFFSET(0x15AD3910)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETCURRENCYITEMCURRENCYICONPATH_OFFSET UNITYSDK_OFFSET(0x15AD3F20)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETCURRENCYITEMICONPATH_OFFSET UNITYSDK_OFFSET(0x15AD3E70)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETCUSTOMERWAITTOTALTIMEWITHBUFF_OFFSET UNITYSDK_OFFSET(0x15AD3550)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETCUSTOMERWAITTOTALTIME_OFFSET UNITYSDK_OFFSET(0x15AB1B30)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETDEFAULTRECIPEID_OFFSET UNITYSDK_OFFSET(0x15AD2F00)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETENTITYRUNTIMEID_OFFSET UNITYSDK_OFFSET(0x15AD3400)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETEVENTTALKWRITETIME_OFFSET UNITYSDK_OFFSET(0x15AD4A00)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETFESTIVAL_OFFSET UNITYSDK_OFFSET(0x15AAB5D0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETFIRSTDAYCUSTOMERCNT_OFFSET UNITYSDK_OFFSET(0x15AD3FD0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETFIRSTDAYTIMECOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x15AD40D0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETGAMEPLAYMODEL_OFFSET UNITYSDK_OFFSET(0x15AC37F0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETLIGHTCONEREWARDSREFID_OFFSET UNITYSDK_OFFSET(0x15AA4C90)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETLOCKMISSIONID_OFFSET UNITYSDK_OFFSET(0x15AD6850)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETMANAGEMAXFOODCNT_OFFSET UNITYSDK_OFFSET(0x15AD41D0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETMAXRECIPESLOTNUM_OFFSET UNITYSDK_OFFSET(0x15AA4590)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETMAXWAITCOOKCOUNT_OFFSET UNITYSDK_OFFSET(0x15AD3770)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETMODULE_OFFSET UNITYSDK_OFFSET(0x15AA7B10)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETPRODUCTBYITEMID_OFFSET UNITYSDK_OFFSET(0x15AD3B80)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETPRODUCTBYSEED_OFFSET UNITYSDK_OFFSET(0x15AD3A10)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETRESTAURANTMEDIATOR_OFFSET UNITYSDK_OFFSET(0x15AD3C50)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GETSEEDRELATIVERECIPE_OFFSET UNITYSDK_OFFSET(0x15AD42D0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_GET_USEBATCHPLANTING_OFFSET UNITYSDK_OFFSET(0x15AD60B0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_HASEMPTYCELL_OFFSET UNITYSDK_OFFSET(0x15AD52A0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISBANNEDBYFEATURESWITCH_OFFSET UNITYSDK_OFFSET(0x15AA9EB0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISBATCHMODEUNLOCK_OFFSET UNITYSDK_OFFSET(0x15AD6330)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISCELLALLEMPTY_OFFSET UNITYSDK_OFFSET(0x15AD5A10)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISCURPROGRESSQUESTFINISHED_OFFSET UNITYSDK_OFFSET(0x15AD63E0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISENTRANCELOCKED_OFFSET UNITYSDK_OFFSET(0x15AD6730)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISFARMBATCHPLANTING_OFFSET UNITYSDK_OFFSET(0x15AD6210)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISFEVERUNLOCK_OFFSET UNITYSDK_OFFSET(0x15AD6F60)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISFOODCANDELIVERY_OFFSET UNITYSDK_OFFSET(0x15AD3800)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISGAMEENTITYWAITER_OFFSET UNITYSDK_OFFSET(0x15AC5FE0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISRECIPELEVELUPUNLOCK_OFFSET UNITYSDK_OFFSET(0x15AD6BA0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISSAMEENTITY_OFFSET UNITYSDK_OFFSET(0x15AD3480)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISSECONDRECIPESLOTUNLOCK_OFFSET UNITYSDK_OFFSET(0x15AA4980)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISTOPFOODUNLOCK_OFFSET UNITYSDK_OFFSET(0x15AD7120)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISTRADEORDERUNLOCK_OFFSET UNITYSDK_OFFSET(0x15AD6D60)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISUNLOCKALLSATISIFIED_OFFSET UNITYSDK_OFFSET(0x15AD3CF0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_ISUNLOCKSTATISFIED_OFFSET UNITYSDK_OFFSET(0x15AD3E00)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_SET_USEBATCHPLANTING_OFFSET UNITYSDK_OFFSET(0x15AD6160)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_SHOULDLOCKBYPROGRESSUPGRADEMISSION_OFFSET UNITYSDK_OFFSET(0x15ACF5C0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_TRYGETGAMEINSTANCE_OFFSET UNITYSDK_OFFSET(0x15AC1D80)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_TRYGETRAYCASTTARGETELFRESTAURANTVIEW_OFFSET UNITYSDK_OFFSET(0x15AD75D0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC_TRYGETRAYCASTTARGETELFRUNTIMECELL_OFFSET UNITYSDK_OFFSET(0x15AD7530)
#define RPG_CLIENT_ELFRESTAURANTSTATIC__GETCAMERA_OFFSET UNITYSDK_OFFSET(0x15AD72E0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC__GETRAYFROMMOUSE_OFFSET UNITYSDK_OFFSET(0x15AD7360)
#define RPG_CLIENT_ELFRESTAURANTSTATIC__GETRAYFROMSCREENPOINT_OFFSET UNITYSDK_OFFSET(0x15AD73F0)
#define RPG_CLIENT_ELFRESTAURANTSTATIC__SAFEINITPARAMS_OFFSET UNITYSDK_OFFSET(0x15AD4640)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantStatic_TypeDefinitionIndex = 58654;

	class ElfRestaurantStatic : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet__rayTargetCacheArray()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantStatic_TypeDefinitionIndex)->GetStaticField(0x9EB0);
		}
		static ::System::Single* StaticGet__WritingTimeBias()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantStatic_TypeDefinitionIndex)->GetStaticField(0x42E0);
		}
		static ::System::Single* StaticGet__WritingTimeRatio()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantStatic_TypeDefinitionIndex)->GetStaticField(0x42E4);
		}
		static ::System::Boolean* StaticGet__IsInited()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantStatic_TypeDefinitionIndex)->GetStaticField(0x42E8);
		}
		static ::System::Single* StaticGet__MaxWritingTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantStatic_TypeDefinitionIndex)->GetStaticField(0x42EC);
		}
		static ::System::Single* StaticGet__MinWritingTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ElfRestaurantStatic_TypeDefinitionIndex)->GetStaticField(0x42F0);
		}
		// static const ::System::Int32 RaycastCacheArraySize = 0xA; // 0x0

		static ::RPG::Client::ElfRestaurantGameInstance* TryGetGameInstance()
		{
			return ((::RPG::Client::ElfRestaurantGameInstance*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_TRYGETGAMEINSTANCE_OFFSET))();
		}

		static ::System::Int32 GetEntityRuntimeID(::RPG::Client::LittleGame::ElfRestaurantGameEntity* entity)
		{
			return ((::System::Int32(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETENTITYRUNTIMEID_OFFSET))(entity);
		}

		static ::System::Boolean IsSameEntity(::RPG::Client::LittleGame::ElfRestaurantGameEntity* a, ::RPG::Client::LittleGame::ElfRestaurantGameEntity* b)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*, ::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISSAMEENTITY_OFFSET))(a, b);
		}

		static ::System::Single GetCustomerWaitTotalTime(::RPG::Client::LittleGame::ElfRestaurantGameEntity* entity)
		{
			return ((::System::Single(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETCUSTOMERWAITTOTALTIME_OFFSET))(entity);
		}

		static ::System::Single GetCustomerWaitTotalTimeWithBuff(::RPG::Client::LittleGame::ElfRestaurantGameEntity* entity)
		{
			return ((::System::Single(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETCUSTOMERWAITTOTALTIMEWITHBUFF_OFFSET))(entity);
		}

		static ::System::UInt32 GetMaxWaitCookCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETMAXWAITCOOKCOUNT_OFFSET))();
		}

		static ::System::Boolean IsFoodCanDelivery(::System::Int32 foodID, ::System::UInt32 recipeID)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISFOODCANDELIVERY_OFFSET))(foodID, recipeID);
		}

		static ::System::Boolean IsGameEntityWaiter(::RPG::Client::LittleGame::ElfRestaurantGameEntity* entity)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ElfRestaurantGameEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISGAMEENTITYWAITER_OFFSET))(entity);
		}

		static ::System::Boolean IsBannedByFeatureSwitch()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISBANNEDBYFEATURESWITCH_OFFSET))();
		}

		static ::System::UInt32 GetCurrencyCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETCURRENCYCOUNT_OFFSET))();
		}

		static ::RPG::Client::ElfFarmProductData* GetProductBySeed(::RPG::Client::ElfFarmSeedData* seed)
		{
			return ((::RPG::Client::ElfFarmProductData*(*)(::RPG::Client::ElfFarmSeedData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETPRODUCTBYSEED_OFFSET))(seed);
		}

		static ::RPG::Client::ElfFarmProductData* GetProductByItemID(::System::UInt32 itemID)
		{
			return ((::RPG::Client::ElfFarmProductData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETPRODUCTBYITEMID_OFFSET))(itemID);
		}

		static ::RPG::Client::ElfRestaurantFestivalData* GetFestival(::System::UInt32 fesID)
		{
			return ((::RPG::Client::ElfRestaurantFestivalData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETFESTIVAL_OFFSET))(fesID);
		}

		static ::RPG::Client::ElfRestaurantModule* GetModule()
		{
			return ((::RPG::Client::ElfRestaurantModule*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETMODULE_OFFSET))();
		}

		static ::RPG::Client::ElfRestaurantMediator* GetRestaurantMediator()
		{
			return ((::RPG::Client::ElfRestaurantMediator*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETRESTAURANTMEDIATOR_OFFSET))();
		}

		static ::RPG::Client::ElfRestaurantManageGameplayModel* GetGameplayModel()
		{
			return ((::RPG::Client::ElfRestaurantManageGameplayModel*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETGAMEPLAYMODEL_OFFSET))();
		}

		static ::System::Boolean IsUnlockAllSatisified(::Il2CppArray<::System::UInt32>* unlockIDs)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISUNLOCKALLSATISIFIED_OFFSET))(unlockIDs);
		}

		static ::System::Boolean IsUnlockStatisfied(::System::UInt32 unlockID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISUNLOCKSTATISFIED_OFFSET))(unlockID);
		}

		static ::System::UInt32 GetActivityID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETACTIVITYID_OFFSET))();
		}

		static ::System::UInt32 GetCurrencyID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETCURRENCYID_OFFSET))();
		}

		static ::System::String* GetCurrencyItemIconPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETCURRENCYITEMICONPATH_OFFSET))();
		}

		static ::System::String* GetCurrencyItemCurrencyIconPath()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETCURRENCYITEMCURRENCYICONPATH_OFFSET))();
		}

		static ::System::UInt32 GetDefaultRecipeID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETDEFAULTRECIPEID_OFFSET))();
		}

		static ::System::UInt32 GetMaxRecipeSlotNum()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETMAXRECIPESLOTNUM_OFFSET))();
		}

		static ::System::UInt32 GetFirstDayCustomerCnt()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETFIRSTDAYCUSTOMERCNT_OFFSET))();
		}

		static ::System::UInt32 GetFirstDayTimeCountDown()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETFIRSTDAYTIMECOUNTDOWN_OFFSET))();
		}

		static ::System::UInt32 GetManageMaxFoodCnt()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETMANAGEMAXFOODCNT_OFFSET))();
		}

		static ::System::UInt32 GetLightconeRewardsRefID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETLIGHTCONEREWARDSREFID_OFFSET))();
		}

		static ::System::UInt32 GetActivityRewardID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETACTIVITYREWARDID_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>* GetSeedRelativeRecipe(::RPG::Client::ElfFarmSeedData* seed)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfRestaurantRecipeData*>*(*)(::RPG::Client::ElfFarmSeedData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETSEEDRELATIVERECIPE_OFFSET))(seed);
		}

		static ::System::Void _SafeInitParams()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC__SAFEINITPARAMS_OFFSET))();
		}

		static ::System::Single GetEventTalkWriteTime(::RPG::Client::TextID talkContent)
		{
			return ((::System::Single(*)(::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETEVENTTALKWRITETIME_OFFSET))(talkContent);
		}

		static ::System::Boolean CanHarvest()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_CANHARVEST_OFFSET))();
		}

		static ::System::Boolean HasEmptyCell()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_HASEMPTYCELL_OFFSET))();
		}

		static ::System::Boolean IsCellAllEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISCELLALLEMPTY_OFFSET))();
		}

		static ::System::Boolean get_UseBatchPlanting()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GET_USEBATCHPLANTING_OFFSET))();
		}

		static ::System::Void set_UseBatchPlanting(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_SET_USEBATCHPLANTING_OFFSET))(value);
		}

		static ::System::Boolean IsFarmBatchPlanting(::System::UInt32 farmID)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISFARMBATCHPLANTING_OFFSET))(farmID);
		}

		static ::System::Boolean IsBatchModeUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISBATCHMODEUNLOCK_OFFSET))();
		}

		static ::System::Boolean IsCurProgressQuestFinished()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISCURPROGRESSQUESTFINISHED_OFFSET))();
		}

		static ::System::Boolean ShouldLockByProgressUpgradeMission()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_SHOULDLOCKBYPROGRESSUPGRADEMISSION_OFFSET))();
		}

		static ::System::Boolean IsEntranceLocked()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISENTRANCELOCKED_OFFSET))();
		}

		static ::System::UInt32 GetLockMissionID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_GETLOCKMISSIONID_OFFSET))();
		}

		static ::System::Boolean IsSecondRecipeSlotUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISSECONDRECIPESLOTUNLOCK_OFFSET))();
		}

		static ::System::Boolean IsRecipeLevelUpUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISRECIPELEVELUPUNLOCK_OFFSET))();
		}

		static ::System::Boolean IsTradeOrderUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISTRADEORDERUNLOCK_OFFSET))();
		}

		static ::System::Boolean IsFeverUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISFEVERUNLOCK_OFFSET))();
		}

		static ::System::Boolean IsTopFoodUnlock()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_ISTOPFOODUNLOCK_OFFSET))();
		}

		static ::UnityEngine::Camera* _GetCamera()
		{
			return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC__GETCAMERA_OFFSET))();
		}

		static ::UnityEngine::Ray _GetRayFromMouse()
		{
			return ((::UnityEngine::Ray(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC__GETRAYFROMMOUSE_OFFSET))();
		}

		static ::UnityEngine::Ray _GetRayFromScreenPoint(::UnityEngine::Vector2 screenPoint)
		{
			return ((::UnityEngine::Ray(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC__GETRAYFROMSCREENPOINT_OFFSET))(screenPoint);
		}

		static ::RPG::Client::ElfRuntimeCell* TryGetRaycastTargetElfRuntimeCell(::System::Single rayLength, ::System::Nullable_1<::UnityEngine::Vector2> overrideRayOriginScreenPoint)
		{
			return ((::RPG::Client::ElfRuntimeCell*(*)(::System::Single, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_TRYGETRAYCASTTARGETELFRUNTIMECELL_OFFSET))(rayLength, overrideRayOriginScreenPoint);
		}

		static ::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantView* TryGetRaycastTargetElfRestaurantView(::System::Single rayLength, ::System::Nullable_1<::UnityEngine::Vector2> overrideRayOriginScreenPoint)
		{
			return ((::RPG::Client::LittleGame::ElfRestaurant::ElfRestaurantView*(*)(::System::Single, ::System::Nullable_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_TRYGETRAYCASTTARGETELFRESTAURANTVIEW_OFFSET))(rayLength, overrideRayOriginScreenPoint);
		}

		static ::System::Void ClearRaycastCache()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTSTATIC_CLEARRAYCASTCACHE_OFFSET))();
		}
	};
}

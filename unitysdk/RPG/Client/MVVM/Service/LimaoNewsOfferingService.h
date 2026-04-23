#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class OfferingRewardData; }

#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x169645E0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE_GETLEVELOFFERINGREWARDDATA_OFFSET UNITYSDK_OFFSET(0x1696E880)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE_GETLEVELOFFERINGSUBMITITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1696E940)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE_GETLEVELREWARDUNLOCKTEXT_OFFSET UNITYSDK_OFFSET(0x1696EA40)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE_GETSHOPOFFERINGREWARDDATA_OFFSET UNITYSDK_OFFSET(0x1696E5F0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE_SYNCPRELEVELOFFERINGDATA_OFFSET UNITYSDK_OFFSET(0x1696C010)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1696EB90)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x16963DD0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE__GETMAXOFFERINGSHOWLEVEL_OFFSET UNITYSDK_OFFSET(0x1696E6B0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE__ONOFFERINGCLEARSHOWUPGRADEHINT_OFFSET UNITYSDK_OFFSET(0x1696E740)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE__ONOFFERINGREWARDSINIT_OFFSET UNITYSDK_OFFSET(0x1696E510)

namespace RPG::Client::MVVM::Service
{
	inline static constexpr unsigned int LimaoNewsOfferingService_TypeDefinitionIndex = 68495;

	class LimaoNewsOfferingService : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_LevelOfferingRewardID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsOfferingService_TypeDefinitionIndex)->GetStaticField(0xDDB0);
		}
		static ::System::UInt32* StaticGet_ShopOfferingRewardID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsOfferingService_TypeDefinitionIndex)->GetStaticField(0xDDB4);
		}
		::RPG::Client::OfferingRewardData* PreLevelOfferingRewardData; // 0x10
		::System::UInt32 PreOfferingLevel; // 0x18
		::System::UInt32 PreLevelOfferingItemCount; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE_DISPOSE_OFFSET))(this);
		}

		::System::Void _OnOfferingRewardsInit(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE__ONOFFERINGREWARDSINIT_OFFSET))(this, arg);
		}

		::System::Void _OnOfferingClearShowUpgradeHint(::System::Object* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE__ONOFFERINGCLEARSHOWUPGRADEHINT_OFFSET))(this, arg);
		}

		::System::UInt32 _GetMaxOfferingShowLevel(::RPG::Client::OfferingRewardData* offeringRewardData)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::OfferingRewardData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE__GETMAXOFFERINGSHOWLEVEL_OFFSET))(this, offeringRewardData);
		}

		::RPG::Client::OfferingRewardData* GetLevelOfferingRewardData()
		{
			return ((::RPG::Client::OfferingRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE_GETLEVELOFFERINGREWARDDATA_OFFSET))(this);
		}

		::System::UInt32 GetLevelOfferingSubmitItemCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE_GETLEVELOFFERINGSUBMITITEMCOUNT_OFFSET))(this);
		}

		::RPG::Client::OfferingRewardData* GetShopOfferingRewardData()
		{
			return ((::RPG::Client::OfferingRewardData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE_GETSHOPOFFERINGREWARDDATA_OFFSET))(this);
		}

		::RPG::Client::TextID GetLevelRewardUnlockText(::System::UInt32 level)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE_GETLEVELREWARDUNLOCKTEXT_OFFSET))(this, level);
		}

		::System::Void SyncPreLevelOfferingData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE_SYNCPRELEVELOFFERINGDATA_OFFSET))(this);
		}
	};
}

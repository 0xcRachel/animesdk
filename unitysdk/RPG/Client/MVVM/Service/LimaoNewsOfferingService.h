#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class OfferingRewardData; }

#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x95B0160)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE_GETLEVELOFFERINGREWARDDATA_OFFSET UNITYSDK_OFFSET(0x95B9D50)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE_GETLEVELOFFERINGSUBMITITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x95B9E10)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE_GETLEVELREWARDUNLOCKTEXT_OFFSET UNITYSDK_OFFSET(0x95B9FD0)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE_GETSHOPOFFERINGREWARDDATA_OFFSET UNITYSDK_OFFSET(0x95B9F10)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE_SYNCPRELEVELOFFERINGDATA_OFFSET UNITYSDK_OFFSET(0x95B7880)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE__CCTOR_OFFSET UNITYSDK_OFFSET(0x95BA120)
#define RPG_CLIENT_MVVM_SERVICE_LIMAONEWSOFFERINGSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x95AFA80)

namespace RPG::Client::MVVM::Service
{
	inline static constexpr unsigned int LimaoNewsOfferingService_TypeDefinitionIndex = 59284;

	class LimaoNewsOfferingService : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_LevelOfferingRewardID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsOfferingService_TypeDefinitionIndex)->GetStaticField(0x7970);
		}
		static ::System::UInt32* StaticGet_ShopOfferingRewardID()
		{
			return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(LimaoNewsOfferingService_TypeDefinitionIndex)->GetStaticField(0x7974);
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

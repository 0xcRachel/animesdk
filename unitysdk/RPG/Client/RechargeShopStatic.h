#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7CED31C413C530F0.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class ItemConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define RPG_CLIENT_RECHARGESHOPSTATIC_COLLECTANDSORTITEMS_OFFSET UNITYSDK_OFFSET(0x9D73DE0)
#define RPG_CLIENT_RECHARGESHOPSTATIC_GET_PRODUCTGIFTTYPEOFDISCOUNTEDDOZENPASSESGIFT_OFFSET UNITYSDK_OFFSET(0x9D77BC0)
#define RPG_CLIENT_RECHARGESHOPSTATIC_GET_PRODUCTGIFTTYPEOFDISCOUNTEDOUTFITGIFT_OFFSET UNITYSDK_OFFSET(0x9D77C00)
#define RPG_CLIENT_RECHARGESHOPSTATIC_GET_PRODUCTGIFTTYPEOFDISCOUNTEDPACKEDGIFT_OFFSET UNITYSDK_OFFSET(0x9D77B80)
#define RPG_CLIENT_RECHARGESHOPSTATIC_GET_PRODUCTGIFTTYPEOFDISCOUNTEDSINGLEGIFT_OFFSET UNITYSDK_OFFSET(0x9D77B40)
#define RPG_CLIENT_RECHARGESHOPSTATIC_GET_UINTGIFTTYPEOFDISCOUNTEDDOZENPASSESGIFT_OFFSET UNITYSDK_OFFSET(0x9D77BD0)
#define RPG_CLIENT_RECHARGESHOPSTATIC_GET_UINTGIFTTYPEOFDISCOUNTEDOUTFITGIFT_OFFSET UNITYSDK_OFFSET(0x9D77C10)
#define RPG_CLIENT_RECHARGESHOPSTATIC_GET_UINTGIFTTYPEOFDISCOUNTEDPACKEDGIFT_OFFSET UNITYSDK_OFFSET(0x9D77B90)
#define RPG_CLIENT_RECHARGESHOPSTATIC_GET_UINTGIFTTYPEOFDISCOUNTEDSINGLEGIFT_OFFSET UNITYSDK_OFFSET(0x9D77B50)
#define RPG_CLIENT_RECHARGESHOPSTATIC_ISGIFTBANNED_OFFSET UNITYSDK_OFFSET(0x9D72F30)
#define RPG_CLIENT_RECHARGESHOPSTATIC_TRYGETPRODUCTGIFTTYPE_OFFSET UNITYSDK_OFFSET(0x9D75F60)
#define RPG_CLIENT_RECHARGESHOPSTATIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x9D77C40)

namespace RPG::Client
{
	inline static constexpr unsigned int RechargeShopStatic_TypeDefinitionIndex = 53212;

	class RechargeShopStatic : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Enum_3_7CED31C413C530F0>** StaticGet__ProductGiftTypeDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Enum_3_7CED31C413C530F0>**)Il2CppClass::FromTypeDefinitionIndex(RechargeShopStatic_TypeDefinitionIndex)->GetStaticField(0x447B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPSTATIC__CCTOR_OFFSET))();
		}

		static ::Enum_3_7CED31C413C530F0 get_ProductGiftTypeOfDiscountedSingleGift()
		{
			return ((::Enum_3_7CED31C413C530F0(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPSTATIC_GET_PRODUCTGIFTTYPEOFDISCOUNTEDSINGLEGIFT_OFFSET))();
		}

		static ::System::UInt32 get_UintGiftTypeOfDiscountedSingleGift()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPSTATIC_GET_UINTGIFTTYPEOFDISCOUNTEDSINGLEGIFT_OFFSET))();
		}

		static ::Enum_3_7CED31C413C530F0 get_ProductGiftTypeOfDiscountedPackedGift()
		{
			return ((::Enum_3_7CED31C413C530F0(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPSTATIC_GET_PRODUCTGIFTTYPEOFDISCOUNTEDPACKEDGIFT_OFFSET))();
		}

		static ::System::UInt32 get_UintGiftTypeOfDiscountedPackedGift()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPSTATIC_GET_UINTGIFTTYPEOFDISCOUNTEDPACKEDGIFT_OFFSET))();
		}

		static ::Enum_3_7CED31C413C530F0 get_ProductGiftTypeOfDiscountedDozenPassesGift()
		{
			return ((::Enum_3_7CED31C413C530F0(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPSTATIC_GET_PRODUCTGIFTTYPEOFDISCOUNTEDDOZENPASSESGIFT_OFFSET))();
		}

		static ::System::UInt32 get_UintGiftTypeOfDiscountedDozenPassesGift()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPSTATIC_GET_UINTGIFTTYPEOFDISCOUNTEDDOZENPASSESGIFT_OFFSET))();
		}

		static ::Enum_3_7CED31C413C530F0 get_ProductGiftTypeOfDiscountedOutfitGift()
		{
			return ((::Enum_3_7CED31C413C530F0(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPSTATIC_GET_PRODUCTGIFTTYPEOFDISCOUNTEDOUTFITGIFT_OFFSET))();
		}

		static ::System::UInt32 get_UintGiftTypeOfDiscountedOutfitGift()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPSTATIC_GET_UINTGIFTTYPEOFDISCOUNTEDOUTFITGIFT_OFFSET))();
		}

		static ::System::Boolean TryGetProductGiftType(::System::UInt32 giftType, ::Enum_3_7CED31C413C530F0& productGiftType)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::Enum_3_7CED31C413C530F0&))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPSTATIC_TRYGETPRODUCTGIFTTYPE_OFFSET))(giftType, productGiftType);
		}

		static ::Il2CppArray<::RPG::GameCore::ItemConfig*>* CollectAndSortItems(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::ItemConfig*>* itemConfigArrays)
		{
			return ((::Il2CppArray<::RPG::GameCore::ItemConfig*>*(*)(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::ItemConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPSTATIC_COLLECTANDSORTITEMS_OFFSET))(itemConfigArrays);
		}

		static ::System::Boolean IsGiftBanned(::System::UInt32 giftType)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_RECHARGESHOPSTATIC_ISGIFTBANNED_OFFSET))(giftType);
		}
	};
}
